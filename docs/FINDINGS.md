# What the remaining blobs are — identified

Status: **identified** (rev. 2026-11-16). The four regions that were carried verbatim are the
four ucode patch sections of the Alpine Ridge flash map, in the order given by the vendor
datasheet:

*Intel, Alpine-Ridge DP Thunderbolt Interface Controller Datasheet*, revision 1.03
(October 2015), **Table 13 "Flash Memory Map"**, pages 44–47, and **§8.8.1 "CIO Phy NVM
Configuration section"**, page 661.

Table 13 defines the chain that starts at the Digital header's `ucode` offset (`0x1C10` →
file `0x5C10`) and walks forward by `(size_dwords * 4 + 2)`:

| # | Section | Size | File range | What it is | Status |
|---|---|---|---|---|---|
| 1 | `CP_UCODE` | 1,600 B | `0x05C10`–`0x06252` | Control Port ucode patch (TLV records) | structure generated |
| 2 | `HDP_OUT_UCODE` | 24,576 B alloc | `0x06254`–`0x0C254` | DisplayPort OUT 8051 firmware | **byte-exact** |
| 3 | `HDP_IN_UCODE` | 32,768 B alloc | `0x0C256`–`0x14256` | DisplayPort IN 8051 firmware | **byte-exact** |
| 4 | `LC_UCODE` | 26,736 B | `0x14258`–`0x1AAC8` | **Link Controller 8051 firmware** | **byte-exact** |
| 5 | `ARC_UCODE` | 5,564 B | `0x1AACA`–`0x1C086` | **ARC controller ucode patch** | **byte-exact** |
| 6 | `CIO_IRAM_UCODE` | 23,888 B | `0x1C088`–`0x21DD8` | CIO controller instruction-RAM ucode | carried |
| 7 | `CIO_DRAM_UCODE` | 2,288 B | `0x21DDA`–`0x226CA` | CIO PHY configuration + DRAM ucode | carried |

The physical section sizes include padding: for example `HDP_OUT_UCODE` is allocated `0x6000`
bytes from its length field (`0x1800` dwords), of which the code is 15,607 bytes. `LC_UCODE` is
*dense*: its `0x1A1C` dwords are exactly the 26,736 bytes of the image, with no 0x200 header.

The identification also disposes of the earlier "is there an unidentified CPU core in them?"
question. There is: the LC section is a complete 8051 program, and the ARC patch is ARC code.
The two CIO sections are for the CIO controller; their core has not been identified yet.

## 4. `LC_UCODE` — Link Controller 8051 (resolved, byte-exact)

The first bytes are an 8051 vector table:

```
0000: 02 01 00   LJMP 0x0100     reset
0003: 02 01 03   LJMP 0x0103     INT0
000B: 02 01 0B   LJMP 0x010B     Timer 0
0013: 02 01 13   LJMP 0x0113     INT1
0100: 02 01 1B   LJMP 0x011B
011B: 75 81 6D   MOV SP,#0x6D
011E: 12 68 4A   LCALL 0x684A
0121: E5 82      MOV A,DPL
...
```

This is the same start-up idiom as the two DisplayPort images (`MOV SP,#imm` → `LCALL` helper →
test `DPL`), but the XDATA map is different: the LC code uses `0xEA00`–`0xEBFF` and
`0xF000`–`0xF1FF`, while the DP images use `0x4Fxx`/`0x7Fxx` and `0xC8xx`/`0xD2xx`. That is the
fingerprint of a third, distinct 8051 firmware.

Recovery and verification:

| Metric | Value |
|---|---|
| Image size | 26,736 B (`0x6870`) |
| Recovered instructions | 13,635 |
| Code bytes | 25,898 (96.9 %) |
| Data / gap bytes | 838 (vector table spare bytes, embedded tables) |
| Re-assembly conflicts | 0 |
| Re-assembled bytes | **26,736 / 26,736 identical** |

The listing is `lc.asm`, assembled by `sdas8051` from SDCC; `make verify` reports
`lc.asm body=26736 regenerated=26736 ... identical`.

## 5. `ARC_UCODE` — ARC controller patch (resolved, byte-exact)

The section is ARC code for the same core as the base image. It is a patch section; its runtime
load base is not directly evidenced, so the listing is based at 0 only as the comparison
convention. Evidence:

* Six 32-bit pointers at `0x0000` (`0x80000003`, `0x80003285`, `0x800009F5`, `0x80001A65`,
  `0x80002C5F`, `0x80000D96`) — data-RAM addresses (`0x8000_0000` is the ARC DRAM base used by
  the base image, e.g. `0x807a78`), not code pointers.
* At `0x0080`, six 8-byte `j` trampolines to `0x10050`, `0x1006c`, `0x1007c`, `0x10098`,
  `0x100ac`, `0x100d4`. `j` encodes an absolute 24-bit target, and these addresses are in the
  ROM window *below* the base image (which starts at `0x22800`), like the base image's own ROM
  calls (`0x0F478`, `0x15EB8`, …).
* ARC function prologues/epilogues appear throughout the body (`st.aw fp,[sp,-N]`,
  `st_s r13..r15`, `j_s [blink]`, `push_s blink`), and 31 `j_s [blink]` returns are present.
* None of the section's branch targets fall inside the base image (`0x22800`–`0x38E00`): 95
  branch instructions target the ROM window (`0x10050`…, and `0xFFFF_xxxx`).

Recovery and verification:

| Metric | Value |
|---|---|
| Section size | 5,564 B (`0x15BC`) |
| In-section instructions | 1,470 |
| Verified byte-exact | 1,463 (99.52 %) |
| Not verifiable with GAS | 7 (4 `bl` alignment forms, `j 0x18`, 2 delay-slot branches) |
| Re-assembled bytes | **5,564 / 5,564 identical** |

The listing is `arc/arc_ucode_1aaca.asm`; `python3 asm_arc.py ucode` reproduces the section.

## 6. `CIO_IRAM_UCODE` — CIO controller instruction RAM (open core)

The section is 23,888 bytes at `0x1C088`. It is **not** an 8051 image in the sense of the three
above: recursive descent from any of the first 1,024 byte offsets covers at most ~6 KB, there is
no 8051 vector table and no `MOV SP,#imm` start-up sequence, and its branch-target statistics sit
at the data baseline. It is also **not** ARC: it contains none of the ARC code idioms that the
two ARC sections are full of (`0x78E0 nop_s`: 0; `0x7EE0 j_s [blink]`: 0), and disassembling it
as ARCompact does not produce coherent branches.

The datasheet says `CIO_IRAM_UCODE` and `CIO_DRAM_UCODE` must be loaded together, and calls both
"uCode patch" sections for the cio controller. The core's ISA is the remaining open question.

Additional negative results (this revision):

* **8051 entry scan.** Recursive descent from every one of the first 1,024 byte offsets peaks at
  6,178 bytes of coverage with 137 instruction-overlap conflicts (a real image reaches ~20 KB with
  0 conflicts, as `LC_UCODE` does). There is no 8051 entry.
* **ARCv2.** Wrapping the section as `EM_ARC_COMPACT2` and disassembling with the ARCv2-class
  decoder is incoherent (`bl 260`, `ld.aw r34,[r18,47]`, branches into the middle of data).
* **Transform tests.** 16-bit byte swap, 32-bit word swap and XOR 0xFF do not produce a coherent
  8051 or ARC decode (the swap16 variant reaches 13 KB but with 415 conflicts).
* **Entropy.** Global byte entropy ≈ 6.7 bits; per-byte-lane entropy is flat (6.6–6.8) and the
  byte autocorrelation is < 0.1 at lags 1–128. That is compressed/encoded-like, not a plain
  instruction stream and not a register table.

**Loader hunt (LC decompilation).** The LC firmware is now decompiled (116 functions,
`decomp/lc_decomp.c`). It contains **no section reader and no decompressor**:

* only **11 `MOVC`** instructions in the whole image (the init table copy and small lookups); a
  code-space flash reader for a 23,888-byte section would need many more plus bank switching;
* no constant for the CIO section size (`0x1754` dwords / `0x5D50` bytes) or its file offset, and
  no loop that reads a flash-sized buffer and writes a decoded stream;
* the `0xF090`–`0xF097` helpers (`0x61D0`, `0x6223`) build 4-byte command/data packets and poll a
  go bit — that is the LC↔CM mailbox/IECS interface, not a codec;
* the flash controller itself documents the load path: `FLASH_CTRL_REG7` holds the
  `CIO_IRAM_UCODE`/`CIO_DRAM_UCODE` pointers, `REG12` is "Dword of microcode data read from SPI
  before stored in ucode_data register" and `REG13` is "Stable Data for strobing to microcode
  clients". The hardware streams the section to the client core; the LC only requests it.

So there is no software codec to find: `CIO_IRAM_UCODE` is (compressed or raw) ucode delivered by
hardware to an engine whose instruction format is not 8051 or ARCompact. Hypothesis (a) is now
unlikely unless the hardware itself decompresses, which the register description does not suggest;
(b) is the leading explanation. The section is currently carried verbatim by the build.

## 7. `CIO_DRAM_UCODE` — CIO PHY configuration (data, documented)

The first bytes are `CIO_PHY_SECTION:`. §8.8.1 of the datasheet documents exactly this header
and the following configuration block (byte offsets after the 2-byte dword length):

| Offset | Field | Image bytes |
|---|---|---|
| `0x00`–`0x0F` | header string | `CIO_PHY_SECTION:` |
| `0x10` | PA_lane_np_swap | `00` |
| `0x11` | PB_lane_np_swap | `40` (PB_RX0 NP swap) |
| `0x12`–`0x13` | reserved | `00 b5` |
| `0x14`–`0x17` | 20 Gbps active TXFFE preset, per lane | `01 01 0b 0b` |
| `0x18`–`0x1B` | 10 Gbps active TXFFE preset | `01 01 0b 0b` |
| `0x1C`–`0x1F` | 10 Gbps passive TXFFE preset | `01 01 0b 0b` (image: `01 01 00 00`) |
| `0x20`–`0x27` | USB3 LFPS TXFFE, word per lane | `01 01 0b 0b 00 00 00 00` |
| `0x28`–`0x2F` | USB3 Gen1 TXFFE, word per lane | `00 00 00 00 00 48 00 48` |
| `0x30`–`0x37` | USB3 Gen2 TXFFE, word per lane | `00 48 00 48 02 38 02 38` |

The remaining ~2.2 KB is the PHY controller's DRAM ucode (code/data), still carried.

## 8. What is still open

1. **CIO core ISA.** The CIO_IRAM section is the largest unexplained payload. Candidates to test:
   a custom Intel sequencer/control-store format, an 8051 derivative with a different opcode map,
   or a second ARC core with an encoding variant not handled by binutils. A calibrated ISA test
   needs a positive corpus for each candidate, not just a coherence score.
2. **`CIO_DRAM_UCODE` body.** The config header is understood; the remaining DRAM ucode is not.
3. **The six `ARC_UCODE` data pointers.** They point into ARC DRAM; their structures are not yet
   named.
4. **The `0x80`-prefixed record stream** at `0x3BB3C`–`0x40000` (147 markers, variable-length
   commands) — a command/register-program stream whose per-id argument format is unresolved.
5. **`CP_UCODE`** (the 1,600-byte TLV stream at `0x5C10`) is re-framed by the build from its
   record stream, but the semantic meaning of the records is not established.

## Superseded measurements

The earlier negative results — no 8051 branches, no coherent ARCompact fit, no zlib/LZMA stream,
big-endian ARC test, multi-ISA sweep — were correct measurements applied to the wrong question:
the LC and CIO sections are not "data or code?" but two different cores, and the identification
had to come from the flash map, not from ISA guessing. The raw numbers are in the git history of
this file.

## 9. The `0x3BB3C` region is ARM Cortex-M firmware (new)

The 17,604 bytes at `0x3BB3C`–`0x40000` were carried as a "`0x80`-prefixed record list". They are
not a record list: from `0x3BC90` they are **ARM Thumb / Cortex-M code**.

* 6,763 instructions, **99.6 % decode without `UNDEFINED`** in `arm-none-eabi-objdump -M
  force-thumb`; 256 `push`/237 `pop` function frames, 288 `bl` calls, 283 of them inside the
  fragment (linked at 0).
* Literal pool: SRAM `0x20000000`–`0x20027cxx`, peripherals `0x40090000`/`0x40090840`/
  `0x40090940`/`0x40092100`/`0x40093100`/…, NVIC `0xE000E180`/`0xE000E280`/`0xE000E400`,
  **SCB `0xE000ED00`**, and the **AIRCR SYSRESETREQ value `0x05FA0004`** — a Cortex-M system
  register write.
* Magics `0xDEAD1ACE`, `0xDECEDEAD`, `0xBD019001` and the delay constant `0x000493e0` are present.
* The first 338 bytes (`0x3BB3C`–`0x3BC8E`) are a table of `0x80`-prefixed variable-length entries
  (IDs `0x17`, `0x28`, `0x29`, `0x32`, `0x38`, …), not code. The code begins with the function at
  `0x3BC90` (`push {r3-r7,lr}; …`).

So the image contains a **second ARM firmware** that is not in the documented ucode chain. It is
the leading candidate for the **CIO controller firmware** (Cortex-M, SRAM at `0x20000000`,
peripherals at `0x40090000`), with the 338-byte table as its patch/configuration header.

**Decompilation result (Ghidra `ARM:LE:32:Cortex`, 263 functions, `decomp/cm_decomp.c`).** The
image is a **Thunderbolt port/link state machine plus hardware init**, not a codec:

* `0x12D6` (672 B) is a per-port state machine on a mode character (`'a'`, `'b'`, `'e'`, `'g'`)
  with timers `0x1e0`/`0x28` and helpers `0x30xx`/`0x32xx`;
* `0x2AFE` (776 B) copies a **0x380-byte table** in SRAM and then programs a long list of
  peripheral registers (link/PHY init);
* `0xDF0` (1,006 B) is the largest function, a straight-line control flow with 43 pointer casts;
* the image calls ROM at `0xFFFF_xxxx` and `0x0000_xxxx`, i.e. it is a **patch overlay linked at
  0**, like `ARC_UCODE`.

There is **no loop that reads a 23 KB section and writes decoded bytes**, and no reference to the
`CIO_IRAM_UCODE` size (`0x5D50`) or its flash offset. So this firmware is not the CIO_IRAM
decompressor either; it is a separate Cortex-M application (port/CIO management). The
`CIO_IRAM_UCODE` section was also tested as ARM/Thumb (`push`/`pop` density 22–26 in 23,888 bytes,
vs 493 in the real image) — it is not ARM code either.

### Core identification: ARMv7-M Cortex-M3-class, the CIO controller's co-processor

The firmware's ISA and memory map identify it as the **CIO (Converged I/O) co-processor**, an
**ARMv7-M Cortex-M3-class** core:

* **ARMv7-M instructions**: `cbz`/`cbnz`, `mrs`, `bfc`, `dsb`, `bl`/`blx` — all ARMv7-M; no
  M4-only DSP instructions (`smull`/`smlal`/`qadd`/…), no FPU. That is **Cortex-M3 (M4 cannot be
  excluded from instruction absence alone, but the M3 is the architecturally matching core)**.
* **Memory map**: SRAM `0x20000000`, NVIC `0xE000E100`, SCB `0xE000ED00`, AIRCR
  `0x05FA0004` reset; **four lane windows** at `0x40092100`/`0x40093100`/`0x40094100`/`0x40094900`
  and a common port block at `0x400909xx` — the four-lane/two-port Thunderbolt CIO PHY.
* **Role**: per-port link state machine (`'a'`/`'b'`/`'e'`/`'g'`), PHY/link init, a 0x380-byte
  configuration-table copy, and a `0xDEAD1ACE` doorbell at `0x400902C0` (host/CIO mailbox).
* **Patch overlay**: linked at 0 and calling ROM (`0x0000_DF95` …), with a 338-byte header — the
  same shape as `ARC_UCODE`, i.e. a **CIO IRAM patch**, not a standalone image.
* **Corroboration**: Apple's ACIO block for USB4/Thunderbolt contains a **Cortex-M3 co-processor**
  with an M3 mailbox ([Apple ACIO binding](https://patchew.org/linux/20260830-b4-apple-soc-tbt-v1-0-44bc9348683c@kernel.org/20260830-b4-apple-soc-tbt-v1-5-44bc9348683c@kernel.org/)),
  and Linux accesses the CIO through the **PCIe2CIO mailbox** of the upstream bridge
  ([Linux PCIe2CIO quirk discussion](https://lkml.iu.edu/hypermail/linux/kernel/2610.2/00122.html)).
  Intel's `CIO_IRAM_UCODE`/`CIO_DRAM_UCODE` are the "cio_iram Controller uCode Patch" sections
  ([Titan Ridge datasheet extract](https://forums.macrumors.com/attachments/titan-ridge-dd-datasheet-pdf.1986208/)).

So the plaintext 0x3BB3C image is a **CIO co-processor patch**; `CIO_IRAM_UCODE` is the CIO's
IRAM ucode (23,888 B), which must be encoded/encrypted or loaded by the CIO's ROM — it is not
plaintext Cortex-M3 in this NVM image.

### CIO_IRAM decode attempts (all negative)

With the CIO CPU now identified as Cortex-M3-class, the 23,888-byte section was retested as the
same core's IRAM image:

* **No standard compression**: no gzip/xz/bz2/zstd/lz4/lzop magic anywhere in the section; zlib,
  raw deflate, gzip, xz, LZMA-alone, bz2 and a raw LZ4 block decoder all fail at every offset
  `0..0xFF`.
* **No CPU ISA**: no Cortex-M vector table (SP `0x2000_xxxx` + odd reset) at any 4-byte offset;
  no Thumb code window (max 5 `push`/`pop` per 1 KB, vs 493 in the 17 KB M3 patch); 8051, ARC and
  ARCompact were already negative.
* **No simple transform**: byte/word/bit-reversal, all 24 four-byte permutations, 2/4/8-way
  deinterleaving and bit-plane transposition do not produce Thumb code; the apparent hits
  (`sub` key `06 09 12 2f`, score 136) are artefacts (142 `UNDEFINED` in 4 KB and a repeating
  `f7fa d1ee` pattern).
* **Structure**: the most common 16-bit fields are `0x20C0` (583×) and `0x0020` (563×); 32-bit
  words such as `0x0020C020`, `0x320020C0`, `0x420020C0`, `0x520020C0` recur with incrementing
  high bytes. This is a **bit-packed field/microcode stream**, not a CPU instruction stream.

The 338-byte header before the M3 patch is a small **`0x80`-prefixed register/configuration
table** (0x41 bytes: IDs `0x17`, `0x28`, `0x29`, `0x32`, `0x38`, `0x52`, 3–5-byte values) followed
by zero padding; it is not a compression or record format for `CIO_IRAM_UCODE`.

Conclusion: `CIO_IRAM_UCODE` is most likely the **CIO PHY/link microengine's ucode** (or an
encrypted M3 IRAM image), not the M3 CPU code. Without that engine's ISA or a hardware trace it
cannot be recovered as source from the image alone; the section remains carried. The route forward
is differential comparison (Titan Ridge/other NVM images), the CP/CIO_DRAM records, or vendor
silicon documentation.

## 10. `CP_UCODE` and `CIO_DRAM_UCODE` structure (decoded)

**`CP_UCODE`** (`0x5C10`, 1,600-byte body after the `0x0190` dword count): the section parses as
**16 `cmd, len, data` records** consuming 1,421 bytes, followed by a **183-byte tail** at
`0x619D` — exactly the build branch's `PATCHES_TLV` / `PATCHES_END` framing. Records:
`90/1`, `00/0`, `10/248`, `5D/128`, `0A/24`, `F0/96`, `05/62`, `06/192`, `F6/0`, `08/120`,
`1F/54`, `F0/80`, `09/32`, `00/160`, `09/104`, `30/86`. The payload bytes contain 8051-looking
opcodes (`02 F0 50`, `02 AC 00`, `8E 06`, …) but no offset yields coherent 8051 code (best
landing fraction 0.63; LC/DP code is ~1.0), and 8051/ARC/ARM disassembly and a transform sweep
(XOR/ADD/reverse/word swap) fail. The records are therefore **CP patch records**, not a
contiguous program; their target addresses/semantics remain open.

**`CIO_DRAM_UCODE`** (`0x21DDA`, 2,288 B): the first 0x40 bytes are the documented
`CIO_PHY_SECTION` and decode cleanly against the datasheet:

| Field | Bytes | Value |
|---|---|---|
| Header | `0x00–0x0F` | `"CIO_PHY_SECTION"` |
| PA_lane_np_swap | `0x10` | `0x00` |
| PB_lane_np_swap | `0x11` | `0x40` (PB_RX0 NP swap) |
| reserved | `0x12–0x13` | `00 B5` |
| 20G active (per lane) | `0x14–0x17` | `01 01 0B 0B` |
| reserved | `0x18–0x1B` | `01 01 0B 0B` |
| 10G active | `0x1C–0x1F` | `01 01 00 00` |
| 10G passive | `0x20–0x23` | `01 01 0B 0B` |
| USB3 LFPS | `0x24–0x2B` | all zero |
| USB3 Gen1 | `0x2C–0x33` | `00 48 00 48 00 48 00 48` (default) |
| USB3 Gen2 | `0x34–0x3B` | `02 38 02 38 02 38 02 38` (default) |
| reserved | `0x3C–0x3F` | `00 01 03 F1` |

The remaining 2,224 bytes are low-entropy **data/patterns** (zero fill, `0x01010101`/`0x02020202`/
`0x03030303` ramps, `0x6000xxxx` words, descending ASCII runs), not executable 8051/ARC/ARM/Thumb.
They are the PHY/link engine's DRAM image or test tables; the section is now structurally
understood, with the body carried.

## 11. CIO_IRAM differential (T470 vs T480) and ARC dispatch facts

**CIO_IRAM is versioned ucode, not encrypted filler.** Several reference images in the workspace
carry the section:

| Image | CIO_IRAM | Size | SHA-256 |
|---|---|---:|---|
| T480 2022 (this image), T480 Assist, live NVM | identical | 23,888 B | `62b2746d…` |
| T470 Assist | different | 23,856 B | `38415f13…` |

T480 vs T470: **common prefix 7,963 B**, **common suffix 373 B**; ten single-byte differences
before `0x1F1B` (mostly the T470 value = T480 − 2), and one ~100-byte changed block at
`0x5912–0x5988` with insertions/deletions (the 32-byte size difference).

**Record-size test (negative).** The ten pre-block changes are **16-bit little-endian fields**
(`0x03BA`, `0x03B9`, `0x0338`, `0x0330`, `0x02EF`, `0x0206`, `0x015F`, `0x00BD`, `0x0045`, plus
`0x003C`), each with its low byte replaced: nine are exactly **−2** in T470 and one is −0x10. Their
offsets are scattered: no modulus `N ≤ 128` puts them at a concentrated residue, and the best
candidate (`N=13`, count 4) is not meaningful. They are therefore **not** a fixed field in a
4/8/16-byte record.

The `0x5912` block is **byte-oriented**, not record-oriented: the equal-run alignment shows
insertions/deletions of +39, +3, −8, −44, −24, +2 bytes (net −32), none a multiple of 4/8/16. The
16 post-block single-byte changes are again **16-bit signed operands** (`0xFFE1`, `0xE3B7`,
`0xFBAE`, …) adjusted by **+2/+8** — classic **relocation** of relative displacements after the
code block changed size.

Conclusion: `CIO_IRAM` is a byte-oriented **microcode stream with 16-bit (signed/unsigned) operands**
and relocatable references. T470/T480 are **recompiled/relocated builds** of the same ucode, not
different entries in a fixed-size record table. The differential gives the operand width and the
relocation model, but not the instruction format. The section is therefore
plaintext, versioned **PHY/link microcode** with a stable core, a few immediates and a patch block
— not a CPU image and not encrypted. The T480/T480-Assist/live-NVM images all contain the same
Cortex-M patch at `0x3BC90` (`0x37C90` in the live NVM); the 248 KiB T470 Assist image ends at
`0x3E000`, before the Cortex-M block, so the ARMv7-M CIO patch is a T480-generation addition.

**ARC dispatch tables.** The `u32` arrays at `0x37914` (36 entries) and `0x38A8C` (33 entries)
collapse to four (`0x2D190`, `0x2D19C`, `0x2D1A8`, `0x2D1B8`) and three (`0x2E2FC`, `0x2E314`,
`0x2E354`) **intra-function** labels — they are state dispatchers, not arrays of standalone
function pointers. The 41 `callers=0` functions in `arc_index.txt` have **no absolute 4-byte
pointer** in the block; they are most plausibly **ROM entry points** into the cache, so the static
call graph is externally rooted.

**ARC_UCODE hooks.** The section header holds six DRAM pointers (`0x80000003`, `0x80003285`,
`0x800009F5`, `0x80001A65`, `0x80002C5F`, `0x80000D96`); six ROM trampolines at `0x80–0xA8` jump
to `0x10050`, `0x1006C`, `0x1007C`, `0x10098`, `0x100AC`, `0x100D4`, and the body makes many
absolute `j` into the ROM window (`0x3664`, `0xB1BC`, `0x3997C`, …). It is a ROM-hook overlay;
the pointer/trampoline pairs are the hook descriptors.

### ISA screen for CIO_IRAM (calibrated negative)

A pseudo-disassembly validity sweep over the 23,888-byte section (Ghidra `PseudoDisassembler`,
byte-aligned at the ISA's minimum length) gave:

| ISA | CIO_IRAM valid | random control |
|---|---:|---:|
| MSP430 | 0.695 | 0.837 |
| MSP430X | 0.956 | 0.934 |
| Xtensa | 0.837 | 0.738 |
| V850 | 0.998 | — |
| PIC-16 | 0.862 | — |
| HCS12 | 0.894 | — |

The random control is as high as (or higher than) the section for the 16-bit ISAs, so the metric
does not identify an ISA; V850's 99.8 % is a permissive-decoder artefact. A branch-target
coherence pass on V850 found only 17 in-window targets (16 landing), too few to be meaningful.
A web search found no public Intel CIO/PHY ISA document; the Apple "CIO" references are the
USB4/Thunderbolt co-processor reset controller (a different block), and the NXP QUICC Engine
IRAM microcode format is unrelated. The section therefore remains best explained as **custom
byte-oriented microcode with 16-bit operands**, and the next useful data would be a **wider
differential** (Titan Ridge / Maple Ridge / another generation's NVM) rather than further blind
ISA screening.

## 12. Wider CIO_IRAM differential (OEM images)

Public Alpine Ridge NVM images from the JoeOIVOV/TitanRidge archive (Gigabyte GC-Alpine Ridge,
ASUS UX550 / ThunderboltEX-3) give a wider `CIO_IRAM` set. The section must be located via its
`06 09 00 00 2F 12 22 22` header, not the backward size search (the latter found a false chain in
the GC image and under-sized it by 1,092 bytes).

| Variant | NVM | `CIO_IRAM` size | SHA-256 (prefix) |
|---|---|---:|---|
| Gigabyte GC-Alpine Ridge NVM20 V1/V2 | 20 | 24,556 B | `a8487c1d…` |
| Gigabyte GC-Alpine Ridge NVM21 V3 | 21 | 24,528 B | `177b9bb6…` |
| ASUS UX550 NVM33 | 33 | 24,528 B | `177b9bb6…` |
| T480 (this image) | 23 | 23,888 B | `62b2746d…` |
| T470 Assist | 32 | 23,856 B | `38415f13…` |

Findings:

* **GC21 V3 and ASUS NVM33 are byte-identical** — the CIO ucode is Intel-supplied and
  OEM-independent; OEM differences live elsewhere (DROM/EE/DP config).
* All four distinct variants share the **8-byte header** and a **573-byte common prefix**
  (`0x0000–0x023D`); they also share a **~370-byte common tail**.
* T470/T480 are the close pair (common prefix 7,963 B, 32-byte size difference); GC20 V1/V2 are
  identical; GC20 vs GC21 differ in **19,053 bytes** after the prefix (different builds), so the
  GC family is not a simple version ladder.
* The universal invariant is only the header + ~573 B prefix + ~370 B tail; the middle ~23 KB
  varies by build. A 16-byte block map gives 34.5 % common blocks for T480 across all four.

The live T480 hardware (JHL6240, NVM 23.0) has a 256 KiB NVM **byte-identical** to this image's
NVM window (`d5849366…`), so hardware access adds no new variant. The user-supplied `TBT.bin`
(`dbccd2ef…`) is the T480 NVM-23 payload, not the older T470 image; the T470 image is the
`t470_AssistTBT.bin` reference already analysed.

## 13. Multiple alignment of the four CIO_IRAM variants

A 12-mer anchor search + LIS chaining aligns the four distinct variants (T480 reference). The
three pairwise chains give 3 (T470), 20 (GC20) and 28 (GC21) colinear blocks. Projecting the
anchors onto T480 gives a **55.5 % invariant skeleton (13,256 of 23,888 B)**; the remaining
44.5 % is build-specific.

Large invariant blocks (all four variants match):

| Block | Size | Entropy | Frequent 4-byte words |
|---|---:|---:|---|
| `0x00000–0x000A7` | 167 | 4.52 | header |
| `0x000F9–0x005DA` | 1,249 | 5.60 | `00000000`, `ff000000` |
| `0x0068B–0x00752` | 199 | 5.83 | `0012c1f0` |
| `0x00794–0x01489` | 3,317 | 6.70 | `20c02000`, `f6c02000` |
| `0x014DF–0x015B0` | 209 | 5.27 | `0df00000` |
| `0x01634–0x01CDE` | 1,706 | 6.19 | `20c02000` |
| `0x01D28–0x01F34` | 524 | 6.18 | `12c1f009` |
| `0x04652–0x04CE4` | 1,682 | 5.94 | `20c02000` |
| `0x04D76–0x05326` | 1,456 | 6.54 | `20c02000` |
| `0x054C7–0x05906` | 1,087 | 6.26 | `20c02000` |
| `0x059A4–0x05BCE` | 554 | 6.09 | `a0100077` |
| `0x05BDE–0x05D44` | 358 | 6.07 | `0000008c` |

The invariant blocks are high-entropy (5.3–6.7) with low printable fraction (0.25–0.45), so they
are code/data, not ASCII config. The `c0 20 00` byte pattern is very frequent (1,121 hits); its
inter-hit gaps cluster at multiples of 3 (9, 12, 6, 15, 18), but the hit positions mod 3 are
(0:445, 2:349, 1:327) — suggestive of a 24-bit/3-byte field structure, not conclusive.

Conclusion: the ucode is **modular** — long shared blocks (up to 3.3 KB) separated by
build-specific regions (up to 4.3 KB) — rather than a fixed-size record table. The invariant
skeleton (55.5 %) is the best substrate for future ISA/opcode work; the T470/T480 pair remains the
clean small-delta dataset.

## 14. 3-byte/24-bit phase test (negative)

The `c0 20 00` field occurs 1,121 times in T480; its inter-hit gaps cluster at 9, 12, 6, 15, 18 —
multiples of 3. I tested the hypothesis that the ucode is a 3-byte instruction stream with the
field phase-locked, on the 13 invariant blocks (12,684 B).

Result: **no phase signal**.

| Phase | `c0 20 00` hits | mean H(byte 0/1/2) |
|---|---:|---|
| 0 | 221 | 6.64 / 6.52 / 6.53 (block 0x794) |
| 1 | 223 | 6.52 / 6.53 / 6.64 |
| 2 | 214 | 6.53 / 6.64 / 6.52 |

The aggregate hit counts are essentially uniform (221/223/214), and the per-byte entropies are
just rotations of one another — the data is **stationary under 3-byte rotation**, with no
low-entropy opcode byte in any phase. Absolute/relative/block-relative 16-bit target guesses also
show no phase concentration (target phase fraction ≈ 1/3). The gap clustering at multiples of 3
is therefore a red herring, not a phase-locked opcode grid.

The invariant skeleton remains the best substrate for future work, but a simple 3-byte fixed-phase
format is **ruled out**. The next tests that could still distinguish a format are bit-level
periodicity (the `0x20C0` field) and variable-length instruction inference constrained by the
T470/T480 operand changes.

A general byte-periodicity scan (mutual information between byte value and position mod P, P=2–24)
also shows **no peak**: MI rises monotonically with P for the real invariant blocks and for a
within-block shuffled control alike (P=24: 0.339 real vs 0.347 shuffled), i.e. the apparent
structure is finite-sample bias, not periodicity. There is therefore no byte-periodic instruction
grid at P ≤ 24 in the invariant skeleton. The section is high-entropy and most consistent with a
**bit-packed or variable-length microcode stream**, not a fixed-width byte/word table.

## 15. Wider corpus: Titan Ridge and the live controller

Public Titan Ridge images from the same archive add a second generation:

| Variant | CIO_IRAM | SHA-256 (prefix) |
|---|---:|---|
| Titan Ridge BlueChip / GC-Titan NVM23 | 36,624 B | `02540be6…` (identical) |
| Titan Ridge ASRock NVM50 / Vision-D NVM50 | 36,848 B | `e146b8b0…` (identical) |
| NUC8i7HNK (Alpine Ridge) | 24,528 B | `177b9bb6…` = GC21/ASUS33 |

* Across **Alpine Ridge and Titan Ridge** only the first **13 bytes** are shared
  (`06 09 00 00 2F 12 22 22 00 00 00 E0 63`), i.e. a common file header/magic but a different ucode.
* Within each generation there is a **573-byte common prefix**; the Alpine pair T470/T480 shares
  7,963 B, Titan Blue/GC23 are identical, Titan NVM23 vs NVM50 differ by 224 B.
* The ucode is Intel-supplied and OEM-independent within a generation (GC=Blue, ASUS=GC21, NUC=GC21),
  and clearly modular/versioned. The 13-byte universal header is the only cross-generation invariant.

**Live controller.** The on-board JHL6240 (NVM 23.0) has a world-readable 64-byte PCI config header
(NHI BAR0 256 KiB at `0xcee00000`, BAR1 4 KiB at `0xcee40000`, subsystem `2222:1111`), but
`resource0`/`resource1` and the NVM read interface are root-only; `sudo` requires a password here.
The live 256 KiB NVM is byte-identical to the analysed image (`d5849366…`), so hardware access adds
no new ucode. A root helper could read the BARs, but there is no documented CIO debug/PC window and
the runtime IRAM is the same ucode; it would not by itself reveal the ISA.

## 16. Live NHI/BAR inspection with root

With root, the NHI BARs and config space were dumped read-only:

* BAR0 (256 KiB, `0xcee00000`): NHI register block. First words `141df000 00000001 00080008
  0000000a`; from `0xC0` a large **0xDEADBEAF** pattern; `0x39910` is **0xBEEFDEAD**. The firmware
  mailbox is live: `REG_INMAIL_CMD` (0x39904) = 0x07, `REG_OUTMAIL_CMD` (0x3990c) = 0x800003f5,
  `REG_INMAIL_DATA` (0x39900) = 0.
* BAR1 (4 KiB): the **MSI-X table** (16-byte entries, address `0xFEE002D8`…), not a CIO window.
* The live NVM is byte-identical to the analysed image.

The datasheet's CIO programming interface (section 4.1.1/4.3) is the **control-path protocol**
(device/port/path/counters config spaces). JTAG can access the **target bus** in DFT mode
(`CTRL_PORT_CMD/DATA/READ`, CS = path/port/device/counters) but that is the control-port register
space, not the CIO core's IRAM/PC. Vendor-specific **DFT registers** exist (VSEC 1/3) but their
definitions are not in the public datasheet, and the T480 exposes no JTAG header to the OS.

Conclusion: the live controller adds **no new ucode and no documented CIO-core debug window**. The
only remaining hardware path would be physical JTAG/DFT to the CIO core or a custom kernel module
issuing raw CIO config packets to unknown DFT registers — both speculative and risky, and not
available through the OS alone.
