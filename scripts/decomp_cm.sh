#!/bin/sh
# Decompile the Cortex-M image at 0x3BC90 with Ghidra (ARM:LE:32:Cortex).
#
#   scripts/decomp_cm.sh
#
# Needs Ghidra 12.x (GHIDRA_HOME) and arm-none-eabi-objdump for the seed scan.
set -e
HERE=$(cd "$(dirname "$0")/.." && pwd)
GHIDRA_HOME=${GHIDRA_HOME:-$HOME/ghidra_12.1.4_PUBLIC}
HEADLESS="$GHIDRA_HOME/support/analyzeHeadless"
test -x "$HEADLESS" || { echo "error: set GHIDRA_HOME (need $HEADLESS)" >&2; exit 1; }
python3 "$HERE/scripts/cm_seeds.py"
mkdir -p "$HERE/build/ghidra_cm"
"$HEADLESS" "$HERE/build/ghidra_cm" CM \
    -import "$HERE/build/cm_code.bin" \
    -processor ARM:LE:32:Cortex -loader BinaryLoader -loader-baseAddr 0x0 -noanalysis \
    -scriptPath "$HERE/scripts/ghidra" \
    -postScript DecompArm.java "$HERE/decomp/cm_decomp.c" "$HERE/decomp/cm_index.txt" \
        "$HERE/build/seeds_cm.txt"
