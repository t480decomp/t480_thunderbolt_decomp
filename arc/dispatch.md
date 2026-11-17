# ARC dispatch tables — structural recovery

Companion to [`README.md`](README.md) and [`../REPORT.md`](../REPORT.md) §6.1.

## The two jump dispatchers

Both are classic ARC jump-table switches (load indexed word, computed jump), and both are
referenced by configuration-word parsing code.

### 0x378F8 — 36-case selector switch

```
378f8: st.a fp,[sp,-0x4]
378fc: mov fp,sp
37900: mov_s r1,r0            ; r1 = selector
37902: cmp_s r0,0x23          ; valid: 0..35
37904: bhi 0x379cc
37908: ld.as r2,[0x2d100,r1]  ; r2 = table[selector]
37910: j_s [r2]
```

Callers pass a **7-bit config-field selector**: `FUN_ram_000379d8` calls it twice as
`FUN_ram_000378f8((*param & 0x7f00) >> 8)` on two config words, then combines the results with
`FUN_ram_00038014`. So this switch selects a handler **by a config-record type** — the firmware's
configuration-schema interpreter. Ghidra recognised it as a `switch(param_1)` jump table but could
not materialise the targets (see "Encoding" below).

### 0x38A70 — 33-case windowed switch

```
38a70: ldb_s r12,[r15,0x2]
38a78: sub r5,r6,0x2d          ; index = r6 - 45
38a7c: brhs r5,0x21,0x38b28    ; valid: 0..32
38a80: ld.as r4,[0x2e278,r5]
38a88: j [r4]
```

Same shape; the index is windowed (45..77).

## The resolved handler tables

Two plain code-pointer tables sit near the end of the block — **these are the resolved forms**:

| Table | Entries | Unique targets |
|---|---|---|
| `0x37914` | 35 × u32 | `0x2d190`, `0x2d19c`, `0x2d1b8` |
| `0x38a8c` | 33 × u32 | `0x2e2fc`, `0x2e314`, `0x2e354` |

(They are *per-instance* tables: repeated pointers, e.g. table 2 is mostly `0x2e354` with some
`0x2e314` — each entry slot corresponds to one instance/lane index.)

## Handler roles (decompiled, register-passing convention)

| Handler | Size | Behaviour |
|---|---|---|
| `0x2d190` | 12 B | link/port op: tests `*(r21+8)&1` and `(*(r21+9)&0x70)>>4 == 1`, then calls the write-API `func_0x0000f594` with `0x800000` in the arg slot |
| `0x2d19c` | 10 B | same prologue as `0x2d190` (paired handler) |
| `0x2d1b8` | 288 B | **subsystem dispatch**: calls `0x25014`, `0x25a80`, `0x2a244`, `0x2623c`; the `0x2a244` leg reaches the PCIe config path (`0x33e4c`/`0x33f78`) |
| `0x2e2fc` | 24 B | per-lane status update: 8-byte records at `r19 + r18*8`, sets bit `0x10`, reads via `func_0x0000e528`, writes a `<<0x18` field into `r20[...+5]` |
| `0x2e314` | 64 B | sibling of `0x2e2fc` (bit `0x04` set first) |
| `0x2e354` | 554 B | lane event handler (`brne r0,0,0x2e394` … calls `0x248c8`) |

The handlers are entered by computed jump with arguments in registers (`unaff_r*` in the
decompiler) — the ARC equivalent of register-passing dispatch, consistent with a table-driven
message/event system.

## The open item: the flash-side table encoding

The addresses the `ld.as` instructions actually read — `0x2d100` (36 × u32) and `0x2e278`
(33 × u32) — do **not** contain plain pointers in flash. Their u32 values look like pairs of
16-bit instruction words (e.g. `0x1000250a`, `0x27002240`; `0x21041bc3`, `0xb9840201`), and the
same bytes linear-decode as coherent code. Neither "direct pointer", "16-bit offset from table",
nor "offset from dispatch site" hypotheses cleanly reproduce the resolved targets above
(best fit: ~80 % of entries map somewhere near an instruction boundary, which the dense code
region would produce by chance).

Working hypotheses, in order of likelihood:

1. **Runtime fixup.** The boot ROM copies the ARC image from flash to RAM and rewrites these
   tables (the flash holds link-time placeholders). The plain tables at `0x37914`/`0x38a8c`
   would then be a second, already-resolved consumer — or the reverse.
2. **Two-level table.** `ld.as` reads an *offset word* used to index the plain tables.
3. **A decode nuance** in the ARCompact `ld.as` scaled-index semantics (though the assembler
   round-trip reproduced the exact encoding for `[0x2d100,r1]`, so the operand is certain).

### Three tests that rule out the obvious explanations

1. **No single transform maps entries onto handlers.** Neither XOR nor addition gives a consistent
   key: for each of the three known targets the most frequent key/delta occurs exactly *once* in
   36 (and in 33) entries. So it is not a keyed or additive encoding.
2. **Nothing in the image writes them.** No instruction stores to, or even references,
   `0x2d100–0x2d190` or `0x2e278–0x2e2fc` except the two dispatch loads themselves. A runtime
   fixup would have to live outside this image.
3. **They are version-stable.** Both ranges are **byte-identical** between the 2019 (NVM 20) and
   2022 (NVM 23) images — while the *resolved* handler table `0x38a8c` differs in 130 of 132 bytes
   across the same pair. A region that survives an 88 %-churn version gap behaves like fixed data,
   not like per-version dispatch content.

Also worth noting from the same comparison:

| Region | 2019 vs 2022 |
|---|---|
| resolved table `0x37914` (→ `0x2d190…`) | **0 / 144 bytes differ** — targets are stable code |
| resolved table `0x38a8c` (→ `0x2e2fc…`) | **130 / 132 bytes differ** — targets are version-specific |
| dispatcher A code `0x378f8` | 0 / 28 bytes differ |
| handler `0x2d190` | 0 / 48 bytes differ |

The most likely readings, in order: (a) these two dispatchers are **not exercised on this part**
(the table would then be irrelevant filler), or (b) they are **ARCv2 two-operand forms** whose
decode differs from the ARCompact model — the same phenomenon the round trip found in 203 short-ALU
instructions. Either way, the two `ld.as` sites should be treated as *unresolved* rather than as
evidence of a real pointer table, and the resolved tables at `0x37914`/`0x38a8c` are the trustworthy
description of the dispatch surface.

Resolving it properly needs the boot ROM (copy/fixup routine) or a live trace of those addresses,
neither of which is available from this image.

## Map of the dispatch surface

```
0x37b88, 0x379d8 (config-word parsers)
   └─ 0x378f8 switch(0..35)  ── table 0x2d100 (encoded) / 0x37914 (resolved)
        ├─ 0x2d190 / 0x2d19c   link/port ops (write-API 0xf594, 0x800000)
        └─ 0x2d1b8             subsystem dispatch
             ├─ 0x25014
             ├─ 0x25a80
             ├─ 0x2a244 ── 0x33e4c / 0x33f78   PCIe config-space path
             └─ 0x2623c ── 0x25ea4 0x25f44 0x25fb8 0x26040 0x260f8

0x38a70 switch(r6-45, 0..32) ── table 0x2e278 (encoded) / 0x38a8c (resolved)
   ├─ 0x2e2fc / 0x2e314   per-lane status update (8-byte lane records)
   └─ 0x2e354             lane event handler ── 0x248c8
```
