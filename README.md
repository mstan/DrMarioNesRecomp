# DrMarioNesRecomp

> _This recompilation is a **byproduct of developing
> [nesrecomp](https://github.com/mstan/nesrecomp)** — the games are the proving ground, the framework is the goal.
> **These are in-development previews, not finished ports — expect rough
> edges**, and depth will keep landing over months, not days. My time for any
> one title is limited, so I ask for your patience. Contributions are welcome —
> testing, issues, and PRs to the game or framework all help and will
> accelerate this game's polish. More on the why at:
> [Recomp + AI: 5 Months Later »](https://1379.tech/recomp-ai-5-months-later/)_

Static recompilation of Dr. Mario (NES) for native PC.
Built with the [NESRecomp](https://github.com/mstan/nesrecomp) framework.

> **Status: Playable.** Title screen, options menu, and gameplay are functional. 1-player mode tested through virus clearing. If you find a bug, please open an issue.

## Acknowledgments

Function coverage and game logic analysis made possible by the [dr-mario-disassembly](https://github.com/Nostaljipi/dr-mario-disassembly) by Nostaljipi.

## What Works

- Title screen
- Options menu (level, speed, music type selection)
- 1-player gameplay with virus placement and pill dropping
- Palette and CHR bank switching (all 4 CHR ROM banks)
- Music playback (Fever, Chill, Off)

## Quick Start

1. Download the `usa` or `eu` Windows ZIP from [Releases](../../releases), matching your ROM
2. Extract and run `DrMarioRecomp.exe`
3. Select your matching Dr. Mario ROM when prompted — the path is saved for future launches

Linux users can run the matching `DrMario-usa-x86_64.AppImage` or
`DrMario-eu-x86_64.AppImage`. No ROM is included in any release asset.

## Controls

Controls are fully configurable via `keybinds.ini`, auto-generated next to the executable on first run.

### Player 1 (Default)

| NES Button | Keyboard |
|------------|----------|
| D-Pad      | Arrow keys |
| A          | Z |
| B          | X |
| Start      | Enter |
| Select     | Tab |

### Player 2 (Default)

| NES Button | Keyboard |
|------------|----------|
| D-Pad      | W / A / S / D |
| A          | K |
| B          | L |
| Start      | \ |
| Select     | Right Shift |

### Hotkeys

| Key | Action |
|-----|--------|
| F5  | Toggle turbo (fast-forward) |
| F6  | Save state → `quicksave.sav` |
| F7  | Load state |
| Escape | Quit |

## Building from Source

Requires Visual Studio 2022 and CMake 3.20+.

```bash
git clone https://github.com/mstan/DrMarioNesRecomp
cd DrMarioNesRecomp

# Windows
setup.bat

# Linux / macOS
chmod +x setup.sh && ./setup.sh
```

This initializes the pinned [nesrecomp](https://github.com/mstan/nesrecomp)
submodule and links the Nestopia oracle core.

The committed generated sources support two independent variants. Build either
one by selecting its region at CMake configure time:

```bash
cmake -S . -B build-usa -G "Visual Studio 17 2022" -A x64 -DDRMARIO_REGION=usa
cmake --build build-usa --config Release
cmake -S . -B build-eu -G "Visual Studio 17 2022" -A x64 -DDRMARIO_REGION=eu
cmake --build build-eu --config Release
```

Select a matching ROM at runtime. Release packages and source control contain
no ROM. `tools/make_release.ps1` builds both Windows ZIPs;
`tools/build-all-linux.sh` builds both Linux AppImages on Linux.

### Regenerating from ROM

```bash
# Build the recompiler (one time)
cmake -S nesrecomp/recompiler -B nesrecomp/build/recompiler -G "Visual Studio 17 2022" -A x64
cmake --build nesrecomp/build/recompiler --config Release

# Generate C code from ROM
nesrecomp/build/recompiler/Release/NESRecomp.exe "Dr. Mario (Europe).nes" --game game.toml
nesrecomp/build/recompiler/Release/NESRecomp.exe "Dr. Mario (Japan, USA) (Rev 1).nes" --game game-usa.toml

# Build the game
cmake --build build-usa --config Release
cmake --build build-eu --config Release
```

## Architecture

This is a **static recompiler**, not an emulator. The original 6502 machine code is translated to C at build time, then compiled to native x64. The NES PPU, APU, and mapper are simulated by the runner library.

- `game.toml` and `game-usa.toml` — region-specific recompiler configurations
- `game.cfg` — legacy configuration (same directives, text format)
- `extras.c` — game-specific hooks (CRC32 verification, debug server)
- `generated/` — auto-generated C code (do not edit manually)
- `nesrecomp/` — framework submodule ([NESRecomp](https://github.com/mstan/nesrecomp))
- `keybinds.ini` — auto-generated controller bindings (edit to customize)

## ROM Compatibility

| ROM | CRC32 | Status |
|-----|-------|--------|
| Dr. Mario (Europe) | `0x9735D267` | EU build |
| Dr. Mario (Japan, USA) (Rev 1) | `0xDE581355` | USA build |

These CRCs exclude the 16-byte iNES header. The EU generated code remains
under `generated/dr-mario_*`; the USA code is under `generated/dr-mario-usa_*`.

## Known Limitations

- 2-player mode is untested (keyboard controls for P2 are mapped but gameplay is unverified)
- Audio may sound slightly faster than original hardware in some configurations
- Level completion cutscenes and ending sequences are untested

## License

PolyForm Noncommercial 1.0.0 — see [`LICENSE`](LICENSE). Third-party
components retain their own licenses.

---

<p align="center">
  <sub><b>R.A.I.D. — Retro AI Development</b> · a Discord for AI-assisted retro reverse-engineering, decomp &amp; recomp</sub>
</p>

<p align="center">
  <a href="https://discord.gg/Ad9BwSzctP"><img src=".github/raid-discord.png" alt="Join the Retro AI Development (R.A.I.D.) Discord" width="200"></a>
</p>
