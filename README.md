# DrMarioNesRecomp

> _This recompilation is a **byproduct of developing
> [nesrecomp](https://github.com/mstan/nesrecomp)** — the games are the proving ground, the framework is the
> goal, and depth will keep landing over months, not days. My time for any one
> title is limited, so I ask for your patience. Contributions are welcome —
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

1. Download `DrMarioNesRecomp-windows-x64.zip` from [Releases](../../releases)
2. Extract and run `DrMarioRecomp.exe`
3. Select your Dr. Mario (USA) ROM when prompted — the path is saved for future launches

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

Then build:

```bash
cmake -S . -B build -G "Visual Studio 17 2022" -A x64
cmake --build build --config Release
```

Place your `Dr. Mario (USA).nes` ROM in the build directory or select it at runtime.

### Regenerating from ROM

```bash
# Build the recompiler (one time)
cmake -S nesrecomp/recompiler -B nesrecomp/build/recompiler -G "Visual Studio 17 2022" -A x64
cmake --build nesrecomp/build/recompiler --config Release

# Generate C code from ROM
nesrecomp/build/recompiler/Release/NESRecomp.exe "Dr. Mario (USA).nes" --game game.toml

# Build the game
cmake --build build --config Release
```

## Architecture

This is a **static recompiler**, not an emulator. The original 6502 machine code is translated to C at build time, then compiled to native x64. The NES PPU, APU, and mapper are simulated by the runner library.

- `game.toml` — recompiler configuration (TOML format, inspired by N64Recomp)
- `game.cfg` — legacy configuration (same directives, text format)
- `extras.c` — game-specific hooks (CRC32 verification, debug server)
- `generated/` — auto-generated C code (do not edit manually)
- `nesrecomp/` — framework submodule ([NESRecomp](https://github.com/mstan/nesrecomp))
- `keybinds.ini` — auto-generated controller bindings (edit to customize)

## ROM Compatibility

| ROM | CRC32 | Status |
|-----|-------|--------|
| Dr. Mario (USA) | `0x9735D267` | Supported |

## Known Limitations

- 2-player mode is untested (keyboard controls for P2 are mapped but gameplay is unverified)
- Audio may sound slightly faster than original hardware in some configurations
- Level completion cutscenes and ending sequences are untested

---

<p align="center">
  <sub><b>R.A.I.D. — Retro AI Development</b> · a Discord for AI-assisted retro reverse-engineering, decomp &amp; recomp</sub>
</p>

<p align="center">
  <a href="https://discord.gg/Ad9BwSzctP"><img src=".github/raid-discord.png" alt="Join the Retro AI Development (R.A.I.D.) Discord" width="200"></a>
</p>
