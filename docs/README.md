# Documentation index

The repository entry point is [`../README.md`](../README.md). All analysis documentation lives in
this folder; the two code-directory docs remain next to the code they describe.

## Start here

| Document | Contents |
|---|---|
| [`STATUS.md`](STATUS.md) | final coverage table, core inventory, `CIO_IRAM` status |
| [`REPORT.md`](REPORT.md) | full reverse-engineering report (layout, sections, ucode chain, cores, security, verification) |
| [`FINDINGS.md`](FINDINGS.md) | probe log: DP/LC/ARC/CP analysis, Cortex-M identification, `CIO_IRAM` differentials and all negative format tests, live-hardware notes |

## Reference

| Document | Contents |
|---|---|
| [`DECOMP.md`](DECOMP.md) | decompilation methodology and coverage |
| [`PROVENANCE.md`](PROVENANCE.md) | image provenance and hashes |
| [`TOOLCHAIN.md`](TOOLCHAIN.md) | toolchain layers |
| [`REGENERATION.md`](REGENERATION.md) | regeneration notes |
| [`isa_sweep.py`](isa_sweep.py) | pseudo-disassembly ISA screen used for `CIO_IRAM` |

## Code-local docs

| Document | Contents |
|---|---|
| [`../arc/README.md`](../arc/README.md) | ARC image/decompilation notes |
| [`../arc/dispatch.md`](../arc/dispatch.md) | ARC dispatch tables |
