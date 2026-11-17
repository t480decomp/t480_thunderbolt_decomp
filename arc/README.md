# ARC (ARCompact) decompilation — entry-seeded

Artifacts:

| File | Contents |
|---|---|
| `arc_decomp.c` | 11,373 lines of C for **253 functions** (including the entry stub and its init chain) |
| `arc_index.txt` | per-function address, size, caller/callee counts and edges |
| `arc_code_22800.asm` | raw GNU objdump listing of the block (27,542 lines) |
| `code_22800.elf` | the block wrapped as ELF32 `EM_ARC_COMPACT` for binutils/Ghidra |

## Method

1. **Roots** — the entry stub at `0x22814`, the second root `0x2282C`, and the targets of the two
   code-pointer tables (`0x37914`, `0x38A8C`).
2. **Seeded BFS** — Ghidra `ARCompact:LE:32:default`, functions created at each root, call graph
   traversed transitively.
3. **Curated inventory** — the earlier heuristic finder produced 695 candidates, 421 of which had no
   instruction at all. Candidates were kept only when the first instruction is a real ARC prologue
   (`st.a/aw/ab …,[sp,-N]`, `push_s`, `mov fp,sp`) and the function is ≥ 8 bytes → **246 functions**.
4. **Decompiled** with `DecompInterface` (40 s per function); 247/247 succeeded.

## Structure uncovered

* **Entry** `0x22814` — 24-byte stub: save `blink`, call four initialisers, restore, return (ROM-invoked).
  It is now part of the decompiled set, together with its whole init chain (`0x27c38`, `0x23814`,
  `0x27be8`, `0x37e68`, `0x27c60`) and the second root `0x2282c`.
* **Initialisers** — `0x27c38` (two channels), `0x23814` (RAM descriptor block at `0x8077e8`),
  `0x27be8` (config field `0xF4`), `0x37e68` (RAM at `0x807a00`), plus `0x2282c`
  (`memset(0x807a78,0xFF,0x38)` + config fields `0xD4…0xE4`).
* **Dispatch tables** — `0x37914` (36 entries) and `0x38A8C` (33 entries), both pointing at
  handlers `0x2D190…0x2E580`. These are why most functions have no direct callers.
* **Command handler** `0x31028` (1,128 B, 15 callees) — takes a request structure, tests
  `*param_1 == 0x0B`, then loops over sub-commands `0..0xE` calling
  `func_0x00019048(0xc,1,0,idx,0xe,dev,0xd4,0xe0)`.
* **PCIe config path** `0x33e4c` — write/read dwords at config offsets `0x44`/`0x45`, poll
  `0x40000000`/`0x80000000` bits with timeouts (`func_0x00018b48`/`0x18880`), restore on failure.

## Coverage and limits

* 69,304 of 91,648 block bytes fall inside an identified function (~76 %).
* **40 roots** remain: they are reached only through indirect calls or data pointers, so the call
  graph cannot reach them. That is a property of a command-dispatched design, not necessarily a gap
  in the inventory.
* Function boundaries are heuristic where the heuristic finder and the prologue filter agreed;
  functions reachable only through computed jumps may be missed, and a function's size may be
  over-extended when two prologues are adjacent.
* Calls below the image base (`0x0f478`, `0x15eb8`, `0x17bf4`, `0x19048`, …) are **ROM** services and
  appear as external `func_0x…` calls; they are not analysed here.
* No runtime evidence: nothing was executed.

## ARC_UCODE — the patch section at `0x1AACA`

The flash image contains a second ARC section, **`ARC_UCODE`** (5,564 B at file `0x1AACA`,
`0x1AAC8` holds its dword length). The *Alpine-Ridge DP Datasheet* Table 13 names it the
"Display Arc Controller uCode Patch Section"; it is a patch overlaid on the ARC address space,
not a standalone image.

Layout, established from the disassembly:

| Offset | Contents |
|---|---|
| `0x0000` | six 32-bit data-RAM pointers (`0x80000003`, `0x80003285`, `0x800009F5`, `0x80001A65`, `0x80002C5F`, `0x80000D96`) |
| `0x0030`–`0x007F` | zero fill and small lookup tables |
| `0x0080` | six 8-byte `j` trampolines to ROM: `0x10050`, `0x1006c`, `0x1007c`, `0x10098`, `0x100ac`, `0x100d4` |
| `0x00D0`–`0x15BC` | patch code (ARC prologues/epilogues, calls into the `0xFFFF_xxxx` ROM), with embedded tables |

The `j` instruction encodes an **absolute** 24-bit target (assembling `j 0x10050` at base 0 and
at base 0x1000 gives identical bytes), so the six trampolines are ROM addresses regardless of
where the patch is loaded. The base image lives at `0x22800`+; every `j` target is below it. The
`0x8000_xxxx` values are data-RAM addresses, not code pointers. The patch's runtime load base is
therefore *not* proven by the absolute targets; `asm_arc.py` uses base 0 only as the comparison
convention for the relative `b`/`bl` encodings.

`python3 asm_arc.py ucode` re-assembles the section through GNU `as` and compares it with the
image:

| Metric | Value |
|---|---|
| Section regenerated | 5,564 / 5,564 bytes |
| **Mismatching bytes** | **0** |
| In-section instructions | 1,470 |
| **Verified byte-exact** | **1,463 (99.52 %)** |
| — of which branches outside the section | 78 |
| Not verifiable with GAS | 7 (4 `bl` alignment forms, `j 0x18`, 2 delay-slot branches) |

## Round-trip verification (byte-exact test)

`asm_arc.py` regenerates each block from its listing and compares it against the image:
listing → GNU as source → `arc-linux-gnu-as -EL -mcpu=arc700` → `ld -Ttext=<link base>` →
`objcopy -O binary` → byte compare. `python3 asm_arc.py` checks both sections; `main` or `ucode`
selects one. Branches **inside** the block use labels (same-section, resolved
locally); branches **into ROM** use objdump's own byte displacement expressed relative to `.`
(e.g. `bl .-33248`), which the assembler encodes without a relocation. Any instruction that still
fails to reproduce its bytes is demoted to `.byte` automatically, so the output separates *verified*
from *not verifiable*.

| Metric | Value |
|---|---|
| Block regenerated | 91,648 / 91,648 bytes |
| **Mismatching bytes** | **0** |
| In-function instructions | 20,483 |
| **Verified byte-exact** | **20,482 (99.995 %)** |
| — of which branches into ROM | **810** (previously byte-copied) |
| Not verifiable with this toolchain | 1 (a data word misdecoded as `bnt.d`) |
| Data / non-function entries (bytes copied by design) | 7,052 |

### The one instruction that is not re-encoded

The only in-function instruction not reproduced by an assembler is a **data word** in the
dispatch-table area that objdump decodes as `bnt.d` (`0x3791A`), inside the `0x37914` pointer
table; the table's contents are code addresses, not a branch. It is carried as `.byte`, so the
byte comparison still covers it.

### The alternate short-ALU form

272 short-ALU instructions with an immediate (`add_s`, `sub_s`, `asl_s`, `asr_s`) use a second
16-bit format that binutils never emits. It is the same-class form with one register field
(`Rd == Rs`): high byte `0xB8 | regcode` (ASL/ASR/SUB) or `0xE0 | regcode` (ADD), low byte =
immediate with a `0x00`/`0x40`/`0x60` sub-op for ASL/ASR/SUB. `regcode` is the compact 3-bit
register number (`r0`–`r3` = 0–3, `r12`–`r15` = 4–7). GNU as always chooses the equivalent
`0x68`-family encoding — a valid but different instruction.

`asm_arc.py` implements this form and emits the exact bytes when the rule matches the listing's
own bytes. The rule was checked against **all 314 instances** of the alternate form in the base
image (inside and outside functions) with **zero disagreements**; 272 of them are in-function and
are now counted as verified. Both objdump and Ghidra decode those bytes to the same mnemonic and
operands, so the decode is independently corroborated; the encoder is the only piece that is
derived rather than taken from binutils.

`ARC_UCODE` has seven remaining branch encodings that GNU as rejects or encodes differently:
four `bl` forms whose target alignment follows a different PC convention, `j 0x18`, and two
delay-slot branches (`b.d`, `ble.d`). They are carried as `.byte`; the section still reproduces
byte-for-byte.

Two by-products of the round trip:

* **`mov2b` at `0x22810` is confirmed a misdecode** — it is the version word plus the first real
  instruction, and GNU as rejects it (ARCv2 opcode, ARCompact v1 core). That bad decode is what
  pushed the entry point to `0x22814`.
* Every in-block branch re-encodes to the identical displacement, independently confirming the link
  base (`0x22800`) used throughout.

Reproduce with `python3 asm_arc.py`.

## Dispatch tables and the UCODE hook table

The two `u32` arrays at `0x37914` (36 entries) and `0x38A8C` (33 entries) are **intra-function
state tables**, not arrays of standalone function pointers: their values collapse to four entry
labels (`0x2D190`, `0x2D19C`, `0x2D1A8`, `0x2D1B8`) and three (`0x2E2FC`, `0x2E314`, `0x2E354`),
each a point inside a larger state-machine function. They are the ARC state dispatchers for the
two 36/33-state tables; the handlers are covered by the parent functions in `arc_decomp.c`.

The 41 functions in `arc_index.txt` with `callers=0` have **no absolute 4-byte pointer** anywhere
in the block (a full scan of `0x22800–0x38E00` finds none). They are therefore not reachable from
inside the ARC cache by a literal pointer; the natural explanation is that they are **ROM entry
points** — the cache is loaded at `0x22800` and the ARC ROM calls selected functions by absolute
address. The static call graph is externally rooted, not complete.

`ARC_UCODE` begins with six DRAM pointers (`0x80000003`, `0x80003285`, `0x800009F5`, `0x80001A65`,
`0x80002C5F`, `0x80000D96`) followed by six ROM trampolines at `0x80–0xA8`
(`0x10050`, `0x1006C`, `0x1007C`, `0x10098`, `0x100AC`, `0x100D4`), plus many absolute `j` into the
ROM window (`0x3664`, `0xB1BC`, `0x3997C`, …). It is a **ROM-hook overlay**: the pointer/trampoline
pairs are its hook descriptors, and the code body replaces or wraps the ROM entry points.
