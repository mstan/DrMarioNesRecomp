# USA Rev 1 dispatch coverage

Source ROM: `Dr. Mario (Japan, USA) (Rev 1).nes`; headerless CRC32
`DE581355`, headerless SHA-256
`d2fbe8b10f762099d320016ddfd4d2961a591fe6dfaaab2efbeb77282264d06a`.
The ROM is not included in this repository.

The initial auto-generated USA build missed the shared bank-0 indirect routines
and diverged before the title screen. Comparing ROM bytes with the existing EU
configuration showed these routines moved by `$11`. `game-usa.toml` records the
USA addresses for the bank switch, inline dispatch, inline pointer, NOP JSR,
and extra label.

The following fixed-bank addresses came from runtime dispatch traces and are
fed back into `[functions].fixed` in `game-usa.toml`:

| Address | Observed path |
| --- | --- |
| `$DDAD`, `$DD14` | title and menu |
| `$D88D`, `$D8E7`, `$D877` | music and one-player gameplay |

Code generation uses the pinned `nesrecomp` submodule and
`disable_secondary = true`; this emits native bodies for all five observed
targets. A 600-frame title smoke, an 851-frame scripted options/gameplay smoke,
and three deterministic randomized gameplay scripts (seeds 1–3, 24,876 total
frames) each reported **zero dispatch misses**. The randomized scripts can be
recreated with `tools/generate-fuzz-script.py` and run with `--script` and
`--smoke 20000`. This covers exercised paths; it does not establish exhaustive
coverage of every mode or ending.
