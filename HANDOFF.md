# Dr. Mario NES Recompilation — Handoff Prompt

Copy everything below this line into a new Claude Code session opened in
`F:\Projects\nesrecomp-release\DrMarioNesRecomp`:

---

## Context

You are working on a **static NES recompilation** of Dr. Mario. The project
translates 6502 machine code → C → native x64. It is NOT an emulator.

The project is set up and builds successfully. The Ghidra MCP server is running
on port 4999. Before doing anything, verify Ghidra is live:

```
Call mcp__ghidra_drmario__get_program_info
```

If it doesn't respond, STOP. Ghidra must be running.

## ROM Details

- **Mapper 1 (MMC1)**, 2 PRG banks (32KB total), 4 CHR ROM banks
- Vectors: NMI=$8005, RESET=$FC80, IRQ=$8035
- CRC32 (data): 0x9735D267
- The game never switches PRG — both 16KB banks are always mapped ($8000-$FFFF)
- CHR banking IS used (4 x 8KB CHR ROM banks)

## What's Working

- `inline_dispatch B8B5` — the `toAddressAtStackPointer_indexA` pattern.
  JSR $B8B5 is followed by an address table; A register selects the entry.
- `bank_switch B8D5` — MMC1 control register serial write.
- The recompiler finds 1983 functions and the game builds cleanly.

## Current Blocker

**1 dispatch miss:** `extra_func 0 0x4CA6` — this is NOT a real function address.
$4CA6 is in PPU register space, not code. It's being read as a jump target by
the `getPointer_fromStack` function at **$B754**.

### What getPointer_fromStack ($B754) Does

```
TSX
LDA $0103,X     ; read return address low byte from stack
STA $05
LDA $0104,X     ; read return address high byte from stack
STA $06
LDY #$01
LDA ($05),Y     ; read inline byte 1 (ptr low)
STA $00
INY
LDA ($05),Y     ; read inline byte 2 (ptr high)
STA $01
CLC
LDA #$02
ADC $05
STA $0103,X     ; adjust return address: skip 2 inline bytes
```

This is the same pattern as the inline_dispatch but it reads a **direct pointer**
(not indexed by A). It reads 2 bytes after the JSR as a 16-bit address, stores
it in $00/$01, and adjusts the return address to skip those 2 bytes.

The recompiler currently doesn't support this pattern. Callers do:
```
JSR $B754
.word $XXXX    ; 2-byte inline pointer
; ...uses $00/$01 as a data pointer...
```

This is NOT a jump dispatch — it's an **inline data pointer loader**. The caller
continues executing after the 2 inline bytes, using $00/$01 to read data tables.

## The Loop (How to Make Progress)

```
1. GHIDRA: Use mcp__ghidra_drmario__get_code to examine addresses
2. IDENTIFY: What does the code at the failing address actually do?
3. FIX: Either:
   a. Add extra_func to game.cfg for missing functions
   b. Add known_table / split_table for dispatch tables
   c. Fix the recompiler (code_generator.c / function_finder.c) for new patterns
   d. Fix the runner (runtime.c / ppu_renderer.c) for runtime bugs
4. REGENERATE: F:/Projects/nesrecomp/build/recompiler/Release/NESRecomp.exe "Dr. Mario # NES.NES" --game game.cfg
5. REBUILD: Use VS cmake: "C:/Program Files/Microsoft Visual Studio/2022/Community/Common7/IDE/CommonExtensions/Microsoft/CMake/CMake/bin/cmake.exe" --build build --config Release
6. TEST: Run build/Release/DrMarioRecomp.exe "Dr. Mario # NES.NES" --debug
7. CHECK: Look at C:/temp/nes_shot_XXXX.png and dispatch_misses.log
8. REPEAT
```

## Key Rules

- **RULE 1: Fix the tool, never the output.** generated/*.c files are build
  artifacts. Never read them whole, never edit them. Fix code_generator.c,
  function_finder.c, runtime.c, or game.cfg instead.
- **RULE 2: Check PATTERNS.md** before implementing any new dispatch pattern.
  Read nesrecomp/PATTERNS.md first.
- **No fprintf debug logging.** Use the TCP debug server if you need runtime
  inspection (port 4370 when debug.ini exists next to the exe).

## File Locations

| File | Purpose |
|------|---------|
| `game.cfg` | Recompiler config — add extra_func, known_table, inline_dispatch here |
| `extras.c` | Game-specific hooks (CRC32, name, init) |
| `nesrecomp/recompiler/src/code_generator.c` | 6502→C emitter (fix generated code bugs here) |
| `nesrecomp/recompiler/src/function_finder.c` | Function discovery (fix missed functions here) |
| `nesrecomp/runner/src/runtime.c` | NES memory map, PPU register stubs |
| `nesrecomp/runner/src/ppu_renderer.c` | Tile/sprite rendering |
| `nesrecomp/runner/src/mapper.c` | MMC1 bank switching |
| `nesrecomp/PATTERNS.md` | 6502 dispatch idiom catalog |

## Known Addresses (from Nostaljipi/dr-mario-disassembly, offset ~$11 from Rev A)

| Address | Name | Notes |
|---------|------|-------|
| $B8B5 | toAddressAtStackPointer_indexA | Inline dispatch (CONFIGURED) |
| $B754 | getPointer_fromStack | Inline pointer loader (BLOCKER) |
| $B8D5 | basicMMCConfig | MMC1 control ($9FFF) |
| $B8E9 | changeCHRBank0 | MMC1 CHR0 ($BFFF) |
| $B8FD | changeCHRBank1 | MMC1 CHR1 ($DFFF) |
| $FC80 | RESET | Entry point |
| $8005 | NMI | VBlank handler |

## Immediate Next Steps

1. Use Ghidra to examine all callers of $B754 (`X` on the address to see xrefs).
   Understand what they do with the pointer loaded into $00/$01.
2. Determine if $B754 can be handled as a second `inline_dispatch` (unlikely —
   it's a data pointer, not a jump target) or if `function_finder.c` needs a
   new pattern type (like `inline_pointer`) that skips the 2 inline bytes
   without treating them as dispatch targets.
3. Once $B754 is handled, the garbage dispatch misses ($4CA6, $0000, etc.)
   should disappear since they come from the recompiler misinterpreting
   the inline data bytes as code addresses.

---
