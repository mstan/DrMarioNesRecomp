"""Create deterministic input scripts for Dr. Mario dispatch discovery."""
import argparse
import random
from pathlib import Path

parser = argparse.ArgumentParser()
parser.add_argument("output", type=Path)
parser.add_argument("--seed", type=int, default=1)
parser.add_argument("--actions", type=int, default=800)
args = parser.parse_args()
rng = random.Random(args.seed)

lines = ["WAIT 120", "HOLD START", "WAIT 2", "RELEASE START", "WAIT 60"]
for _ in range(args.seed % 5):
    lines += ["HOLD RIGHT", "WAIT 2", "RELEASE RIGHT", "WAIT 2"]
lines += ["HOLD START", "WAIT 2", "RELEASE START", "WAIT 180"]

buttons = ["LEFT", "RIGHT", "DOWN", "A", "B"]
for _ in range(args.actions):
    button = rng.choice(buttons)
    duration = rng.randint(1, 12) if button != "DOWN" else rng.randint(2, 20)
    lines += [f"HOLD {button}", f"WAIT {duration}", f"RELEASE {button}",
              f"WAIT {rng.randint(1, 8)}"]

args.output.write_text("\n".join(lines) + "\n", encoding="ascii")
