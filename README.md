# T480 Thunderbolt firmware chip decompilation

Reverse engineering of the Intel **JHL6240** (Alpine Ridge LP) Thunderbolt 3 controller firmware
shipped by Lenovo for the ThinkPad T480 (package **N24TF23W**). The vendor image is a 1 MiB SPI
flash dump, `TBT.bin`, SHA-256 `fc9c47ff…317388`.

This repository contains the recovered code as editable assembly sources and a build that
re-assembles them back into the vendor image:

```bash
make fetch      # download Lenovo N24TF23W and rebuild build/TBT.bin (hash-checked)
make tools      # provide sdas8051 + arc-linux-gnu + arm-none-eabi binutils
make            # assemble the listings -> build/TBT.rom
make verify     # same, but fail unless every region is byte-identical to the vendor image
```

The repository itself contains **no proprietary firmware or ucode**. `make` downloads the Lenovo
package (`make fetch`), verifies it against the recorded hashes, and extracts the still-opaque
*data* regions — the CSS/RSA/SEC-DGST payloads, the CP tail, the `CIO_DRAM` data image, the
residual section data tails and the DP image trailers — into `build/blobs/` with `blobs.py` at
build time. Those files are gitignored; only offsets and sizes live in the repository. The
Cortex-M code is **not** a blob: it is assembled from `cm.asm`.

`make verify` currently reproduces the complete 1 MiB image exactly
(`fc9c47ff4b16f036a7f49900f9da1983a5db44ca46156238b7b42e636d317388`). The build covers
**238,256 B (90.9 %)** of the used 256 KiB — recovered code listings, decoded structure/data and
declared fill. Only `CIO_IRAM` (23,888 B, 9.1 %) remains carried; including the all-zero 768 KiB
tail, **97.72 %** of the full 1 MiB is covered.

## Documentation

| Document | Contents |
|---|---|
| [`docs/README.md`](docs/README.md) | documentation index (all analysis docs live in `docs/`) |
| [`docs/STATUS.md`](docs/STATUS.md) | final coverage, core inventory, `CIO_IRAM` status |
| [`docs/REPORT.md`](docs/REPORT.md) | full reverse-engineering report |
| [`docs/FINDINGS.md`](docs/FINDINGS.md) | probe log (DP/LC/ARC/CP, Cortex-M, `CIO_IRAM` differentials and negative tests) |
| [`docs/DECOMP.md`](docs/DECOMP.md) | decompilation methodology and coverage |
| [`docs/PROVENANCE.md`](docs/PROVENANCE.md) | image provenance and hashes |
| [`docs/TOOLCHAIN.md`](docs/TOOLCHAIN.md) | toolchain layers |
| [`docs/REGENERATION.md`](docs/REGENERATION.md) | regeneration notes |

## What the image contains

The flash image holds the firmware patches for the controller's internal processors and its
configuration tables. Section names and sizes follow the Intel *Alpine-Ridge DP Thunderbolt
Interface Controller Datasheet*, rev. 1.03, Table 13 ("Flash Memory Map") and §8.8.1.

| Flash range | Section | What it is | Build status |
|---|---|---|---|
| `0x05C10` | `CP_UCODE` | Control Port patch: 16 `cmd/len/data` records (1,421 B) + 183-byte tail | structure decoded; payload semantics open |
| `0x06254` | `HDP_OUT_UCODE` | DisplayPort OUT 8051 firmware (15,607 B) | **byte-exact** |
| `0x0C256` | `HDP_IN_UCODE` | DisplayPort IN 8051 firmware (26,098 B) | **byte-exact** |
| `0x14258` | `LC_UCODE` | Link Controller 8051 firmware (26,736 B) | **byte-exact** + decompiled |
| `0x1AACA` | `ARC_UCODE` | ARC controller ucode patch (5,564 B) | **byte-exact** (1,463/1,470 instructions re-encoded) |
| `0x1C088` | `CIO_IRAM_UCODE` | CIO PHY/link microengine ucode (23,888 B) | carried; bit-packed, versioned (T480/T470 diff) |
| `0x21DDA` | `CIO_DRAM_UCODE` | `CIO_PHY_SECTION` config (0x40 B, decoded) + DRAM data image (2,224 B) | config decoded; body extracted at build time |
| `0x22800` | `ARC CACHE` | ARC firmware image (91,648 B) | **byte-exact** (20,482/20,483 instructions re-encoded) |
| `0x039200` | `CSS`/`RSA+EXP`/`SEC DGST`/`PPS` | security metadata | metadata decoded; payloads extracted at build time |
| `0x3BB3C` | — | ARMv7-M Cortex-M3-class CIO co-processor firmware (17,264 B) + `0x154` header (340 B) | **byte-exact** from `cm.asm`; decompiled in `decomp/cm_decomp.c` |

The three 8051 images are complete firmware images (reset/interrupt vectors, `MOV SP`, init
chain) and each re-assembles from its listing with **zero** mismatching bytes. The two ARC
sections re-assemble through GNU `as`; the alternate 16-bit short-ALU form that binutils never
emits is encoded by `asm_arc.py` itself, and the remaining delay-slot/`j` forms are carried as
`.byte`, so the byte comparison still covers every byte of both sections. The Cortex-M listing
re-assembles through GNU `as`; 370 encodings (mostly literal/data words) are kept as `.inst.n`/
`.inst.w`, so the 17,264-byte block is also covered byte-for-byte.

## Layout of the tree

| Path | Contents |
|---|---|
| `dp_out.asm`, `dp_in.asm`, `lc.asm` | 8051 listings (code + declared data), the build source |
| `arc/arc_code_22800.asm` | ARC image listing (linked at `0x22800`) |
| `arc/arc_ucode_1aaca.asm` | ARC patch listing (section-relative addresses, base 0) |
| `cm.asm` | Cortex-M listing (linked at 0; 370 `.inst` fallbacks) |
| `arc/arc_decomp.c`, `arc/arc_index.txt` | entry-seeded Ghidra decompilation and function index |
| `decomp/dp_*_decomp.c` | Ghidra decompilation of the two DisplayPort images |
| `decomp/lc_decomp.c` | Ghidra decompilation of the Link Controller (116 functions) |
| `decomp/cm_decomp.c` | Ghidra decompilation of the Cortex-M image at `0x3BC90` (263 functions) |
| `scripts/decomp_lc.sh` | reproduces the LC decompilation with Ghidra |
| `scripts/decomp_cm.sh` | reproduces the Cortex-M decompilation with Ghidra |
| `scripts/emit_listing.py` | regenerates an 8051 listing from `build/TBT.bin` |
| `scripts/gen_arc_listing.py` | regenerates the ARC objdump listings |
| `structgen.py` | decoded non-code structure: container words, chain sizes, section names, Digital header, CP patch records, DP image headers, package metadata, ARC filler, the seven `EE_*` record arrays, the `DROM`/`ARC PARM` payloads, the `CIO_DRAM` PHY config, the security length words/PPS, the Cortex-M patch header, the container 0xFF fill, the zero DP tails, the all-zero 768 KiB tail and the residual FF/00 padding. Opaque payloads are build-time blobs. |
| `asm_cm.py` | assembles `cm.asm` into `build/regen/cm_code.bin` |
| `scripts/gen_cm_listing.py` | regenerates `cm.asm` from `build/TBT.bin` and verifies the round trip |
| `mkimage.py` | splices the regenerated code and the decoded structure into the vendor image |

## Status and limits

* Every byte of the 1 MiB image is accounted for: generated code/structure, build-time data,
  declared fill or the one carried region. **238,256 B (90.9 % of the 256 KiB used image)** are
  reproduced: the code listings (DP/LC/ARC and `cm.asm`), 72,603 B of decoded structure/fill from
  `structgen.py`, and opaque data payloads extracted from the fetched image. The only carried
  region is `CIO_IRAM` (23,888 B, 9.1 %). The CIO_IRAM differential is documented: T480,
  T480-Assist and live-NVM images share the section byte-for-byte; the 248 KiB T470 image has a
  32-byte-shorter recompiled variant (ten 16-bit constants shifted by −2 and one −0x10; a
  byte-oriented block at `0x5912` with +39/+3/−8/−44/−24/+2 byte edits; post-block 16-bit signed
  operands relocated by +2/+8). That dates the section as versioned microcode with 16-bit
  operands, not a fixed record table.
* Static analysis only; nothing here was executed on hardware. The base ARC image is linked at
  `0x22800` (its internal pointer tables equal the file offsets). The `ARC_UCODE` listing is
  based at 0 for comparison; its absolute `j` targets land in the ROM window below the base image
  (`0x10050`…), and its `0x8000_xxxx` pointers are data-RAM addresses. The patch's runtime load
  base is not established.
* Function boundaries in the ARC decompilation are heuristic where dispatch is indirect; see
  `arc/README.md` for the coverage numbers.
* The 8051 decoder was corrected for the `CJNE A,direct,rel` / `CJNE @Ri,#imm,rel` / `DJNZ
  direct,rel` conditional branches (they were classified as straight-line, so their targets were
  not followed). The LC listing gained 146 instructions (13,781 total), and the DisplayPort
  listings gained 1,010 (7,266 and 12,890, still byte-exact). The DP decompilation was refreshed
  with a gap-filling pass (`scripts/ghidra/Decomp8051Fill.java`): **146 functions / 14,256 bytes**
  for DP_OUT and **132 / 24,851** for DP_IN, i.e. 99.1 % of the recovered code.

---

**AI-generated decompilation.** The assembly listings, Ghidra C decompilations, decoded
structures and documentation in this repository were produced with AI assistance
(DeepSeek Harness). The byte-exact build and `make verify` are mechanical and reproducible,
but the recovered source and analysis should be independently reviewed before being relied on.
