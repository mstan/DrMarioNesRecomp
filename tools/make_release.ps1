param(
    [ValidateSet('usa','eu','both')][string]$Region='both',
    [string]$UsaRom, [string]$EuRom,
    [string]$UsaBuildDir='build-release-usa', [string]$EuBuildDir='build-release-eu',
    [string]$EngineRoot, [string]$RecompUi, [switch]$SkipBuild
)
$ErrorActionPreference='Stop'
$root=Split-Path -Parent $PSScriptRoot
if (-not $EngineRoot) { $EngineRoot=Join-Path $root 'nesrecomp' }
$regions=if ($Region -eq 'both') { @('usa','eu') } else { @($Region) }
foreach ($variant in $regions) {
    $rom=if ($variant -eq 'usa') { $UsaRom } else { $EuRom }
    $build=if ($variant -eq 'usa') { $UsaBuildDir } else { $EuBuildDir }
    if (-not $SkipBuild -and -not $rom) { throw "Supply the $variant ROM with -UsaRom or -EuRom." }
    if ($SkipBuild) {
        $absoluteBuild=if ([IO.Path]::IsPathRooted($build)) { $build } else { Join-Path $root $build }
        $cache=Get-Content -LiteralPath (Join-Path $absoluteBuild 'CMakeCache.txt') -Raw
        if ($cache -notmatch ('(?m)^DRMARIO_REGION:STRING='+$variant+'\r?$')) { throw 'Build region did not match requested region.' }
    }
    $crc=if ($variant -eq 'usa') { 'DE581355 (NTSC)' } else { '9735D267 (PAL)' }
    & (Join-Path $EngineRoot 'tools/package_cycle_windows.ps1') -ProjectRoot $root -Target DrMarioRecomp -Title "Dr. Mario ($variant)" -ArchiveName "DrMarioRecomp-$variant-windows-x64.zip" -BuildDir $build -Rom $rom -EngineRoot $EngineRoot -RecompUi $RecompUi -CMakeArgs @("-DDRMARIO_REGION=$variant") -SkipBuild:$SkipBuild -GameNotes "Required headerless ROM CRC32: $crc."
}
