#!/bin/sh
# Decompile the LC_UCODE 8051 image with Ghidra and write decomp/lc_decomp.c.
#
#   scripts/decomp_lc.sh
#
# Needs Ghidra 12.x (GHIDRA_HOME, default ~/ghidra_12.1.4_PUBLIC) and
# build/regen/lc_u_code.bin (run `make` first).  The seed list is the set of call
# targets recovered from lc.asm; regenerate it with scripts/lc_seeds.py if the
# listing changes.
set -e
HERE=$(cd "$(dirname "$0")/.." && pwd)
GHIDRA_HOME=${GHIDRA_HOME:-$HOME/ghidra_12.1.4_PUBLIC}
HEADLESS="$GHIDRA_HOME/support/analyzeHeadless"
test -x "$HEADLESS" || { echo "error: set GHIDRA_HOME (need $HEADLESS)" >&2; exit 1; }
test -f "$HERE/build/regen/lc_u_code.bin" || { echo "error: run make first" >&2; exit 1; }
mkdir -p "$HERE/build/ghidra_lc"
"$HEADLESS" "$HERE/build/ghidra_lc" LC \
    -import "$HERE/build/regen/lc_u_code.bin" \
    -processor 8051:BE:16:default -loader BinaryLoader -loader-baseAddr 0x0 \
    -scriptPath "$HERE/scripts/ghidra" \
    -postScript Decomp8051.java "$HERE/decomp/lc_decomp.c" "$HERE/decomp/lc.sym" \
        "$HERE/decomp/lc_index.txt" "$HERE/build/seeds_lc.txt"
