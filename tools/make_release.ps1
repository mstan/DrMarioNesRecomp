# Build and package ROM-free Windows releases for both Dr. Mario regions.
param(
  [ValidateSet('usa','eu','both')][string]$Region = 'both',
  [switch]$SkipBuild
)
$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
$out = Join-Path $root 'release'
$cmake = 'C:\Program Files\CMake\bin\cmake.exe'
if (-not (Test-Path -LiteralPath $cmake)) {
  $cmake = (Get-Command cmake.exe -ErrorAction Stop).Source
}
New-Item -ItemType Directory -Path $out -Force | Out-Null

$regions = if ($Region -eq 'both') { @('usa','eu') } else { @($Region) }
foreach ($variant in $regions) {
  $build = Join-Path $root "build-release-$variant"
  if (-not $SkipBuild) {
    $ErrorActionPreference = 'Continue' # MSVC/CMake send harmless warnings to stderr.
    try {
      & $cmake -S $root -B $build -G 'Visual Studio 17 2022' -A x64 "-DDRMARIO_REGION=$variant" -DNESRECOMP_ENABLE_TRACE=OFF -Wno-deprecated
      $configureExit = $LASTEXITCODE
      if ($configureExit -ne 0) { throw "CMake configure failed for $variant" }
      & $cmake --build $build --config Release --parallel 8
      $buildExit = $LASTEXITCODE
      if ($buildExit -ne 0) { throw "CMake build failed for $variant" }
    } finally {
      $ErrorActionPreference = 'Stop'
    }
  }
  $bin = Join-Path $build 'Release'
  $exe = Join-Path $bin 'DrMarioRecomp.exe'
  if (-not (Test-Path -LiteralPath $exe)) { throw "Missing $exe" }

  $stage = Join-Path $out "stage-$variant"
  $resolvedOut = [IO.Path]::GetFullPath($out).TrimEnd('\')
  $resolvedStage = [IO.Path]::GetFullPath($stage)
  if (-not $resolvedStage.StartsWith($resolvedOut + '\', [StringComparison]::OrdinalIgnoreCase)) {
    throw "Unsafe staging path: $stage"
  }
  if (Test-Path -LiteralPath $stage) { Remove-Item -LiteralPath $stage -Recurse -Force }
  New-Item -ItemType Directory -Path $stage | Out-Null
  Copy-Item -LiteralPath $exe -Destination $stage
  $sdl = Join-Path $bin 'SDL2.dll'
  $assets = Join-Path $bin 'assets'
  if (-not (Test-Path -LiteralPath $sdl) -or -not (Test-Path -LiteralPath $assets)) {
    throw "Release dependencies missing from $bin"
  }
  Copy-Item -LiteralPath $sdl -Destination $stage
  Copy-Item -LiteralPath $assets -Destination $stage -Recurse
  $licenses = Join-Path $stage 'licenses'
  New-Item -ItemType Directory -Path $licenses | Out-Null
  $licenseFiles = @{
    'DrMario-LICENSE.txt' = 'LICENSE'
    'NESRecomp-LICENSE.txt' = 'nesrecomp/LICENSE'
    'SDL2-COPYING.txt' = 'nesrecomp/runner/external/SDL2/COPYING.txt'
    'ImGui-LICENSE.txt' = 'recomp-ui/src/third_party/imgui/LICENSE.txt'
    'recomp-net-LICENSE.txt' = 'nesrecomp/lib/recomp-net/LICENSE'
  }
  foreach ($name in $licenseFiles.Keys) {
    $source = Join-Path $root $licenseFiles[$name]
    if (-not (Test-Path -LiteralPath $source)) { throw "Missing license: $source" }
    Copy-Item -LiteralPath $source -Destination (Join-Path $licenses $name)
  }
  $crc = if ($variant -eq 'usa') { 'DE581355' } else { '9735D267' }
  @"
Dr. Mario ($variant) - NESRecomp
===============================
This build requires a Dr. Mario ROM with headerless CRC32 $crc.
No ROM is included. Select your own ROM at first launch.
Arrow keys: move; Z: A; X: B; Enter: Start; F5: turbo;
F6: save state; F7: load state. Controller bindings are configurable.
"@ | Set-Content -LiteralPath (Join-Path $stage 'README.txt') -Encoding Ascii

  $zip = Join-Path $out "DrMarioRecomp-$variant-windows-x64.zip"
  if (Test-Path -LiteralPath $zip) { Remove-Item -LiteralPath $zip -Force }
  Add-Type -AssemblyName System.IO.Compression
  Add-Type -AssemblyName System.IO.Compression.FileSystem
  $archive = [IO.Compression.ZipFile]::Open($zip, [IO.Compression.ZipArchiveMode]::Create)
  try {
    foreach ($file in Get-ChildItem -LiteralPath $stage -Recurse -File) {
      $entry = $file.FullName.Substring($resolvedStage.Length + 1).Replace('\', '/')
      [IO.Compression.ZipFileExtensions]::CreateEntryFromFile(
        $archive, $file.FullName, $entry, [IO.Compression.CompressionLevel]::Optimal) | Out-Null
    }
  } finally {
    $archive.Dispose()
  }
  Remove-Item -LiteralPath $stage -Recurse -Force
  Write-Host "Built $zip"
}
