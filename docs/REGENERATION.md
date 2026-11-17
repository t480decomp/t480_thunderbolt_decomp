# Regenerating these files

The C files and listings here are **outputs**, produced from the vendor image by the pipeline in the
companion repository `tbt-firmware-build` (branch `build`). That repository:

```bash
git clone <build-repo> tbt-firmware-build && cd tbt-firmware-build
make fetch                     # downloads Lenovo N24TF23W, extracts, rebuilds the 1 MiB image, verifies its hash
make all                       # container parse, listings, seeds, byte-exact round-trip verification
make decompile                 # Ghidra headless → decomp/*.c and arc/arc_decomp.c
make rom                       # reassembles the whole 1 MiB image from structure + parts
```

Requirements for `make decompile` are Ghidra 12.x plus the two toolchains, which
`bootstrap_tools.sh` unpacks into `tools/` from pinned Fedora packages (no root).

## Why regeneration is not byte-identical

Ghidra's decompiler does not guarantee identical text across analysis orderings. Rebuilding on this
tree reproduces the **same 253 ARC functions** with ~1.5 % of lines differing (caller/callee ordering
and minor expression differences). The 8051 runs are similarly stable in function count.

The listings *are* deterministic: `make verify` re-assembles them with SDCC/GNU as and compares byte
for byte (8051 exact; ARC 99.00 % with zero mismatching bytes). Treat the listings as the
ground truth and the C as an illustration of the same code.

## Which files here came from which step

| File | Produced by |
|---|---|
| `dp_out.asm`, `dp_in.asm` | `emit_listing.py` (recursive descent + coherence-gated gap filling) |
| `arc/arc_code_22800.asm` | `mk_arc.py` (minimal ELF32 wrapper + `arc-linux-gnu-objdump`) |
| `decomp/dp_*_decomp.c`, `arc/arc_decomp.c` | `ghidra_scripts/Decomp8051.java`, `ghidra_scripts/ArcDecomp.java` |
| `decomp/*_index.txt`, `arc/arc_index.txt` | same Ghidra scripts (function tables) |
| `REPORT.md`, `DECOMP.md`, `arc/*.md`, `probe/FINDINGS.md` | written by hand from the above |
