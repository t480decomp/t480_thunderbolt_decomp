# Reverse engineering report — `TBT.bin`

**Target:** `/home/henpen/.dsh/attachments/v1/files/fc/fc9c47ff…/TBT.bin`
**Size:** 1,048,576 bytes (1 MiB) · **SHA-256:** `fc9c47ff4b16f036a7f49900f9da1983a5db44ca46156238b7b42e636d317388`
**Verdict:** Lenovo **Thunderbolt firmware update image** (Intel Alpine Ridge-class Thunderbolt 3 controller, device `0x15C0`) for a **ThinkPad T480**. Not an executable — a flashable NVM image containing **three 8051 firmware images** (DisplayPort OUT, DisplayPort IN, Link Controller), **two ARM/ARCompact sections** (the ARC base image and an `ARC_UCODE` patch), a device ROM (DROM), per-engine configuration blocks, the remaining ucode patches (`CP`, `CIO_IRAM`, `CIO_DRAM`) and a code-signing block.

Confidence: **high** for identification, layout, the three 8051 images and both ARC sections; **medium** for security-block semantics; **open** for the CIO controller core, the `ARC_UCODE` runtime load base, and exact vendor field meanings.

---

## 1. Identification

| Evidence | Observation |
|---|---|
| File name | `TBT.bin` — Lenovo Thunderbolt firmware payload (LibreBoot fetches it as `tb.bin` from Lenovo's Thunderbolt update) |
| Section names | `DROM`, `EE_PCIE_PHI` are exactly the blocks the hackintosh community patches when re-branding **Alpine Ridge** firmware |
| DROM strings | `Lenovo` (`0x424A`) and `T480` (`0x4253`) |
| PCI IDs | `8086:15C0`, `8086:15BF`, `8086:15C1` (Alpine Ridge Thunderbolt 3 functions) |
| Header | Matches fwupd's `FuIntelThunderboltNvmDigital`: its `drom` and `arc_params` offsets land **exactly** on the `DROM` (`0x210`→`0x4210`) and `ARC PARM` (`0x610`→`0x4610`) payloads |
| Code | Three MCS-51 images (DP OUT, DP IN, LC) **and** two ARCompact sections (base image + patch), recovered with real disassemblers below |
| Flash map | Intel *Alpine-Ridge DP Thunderbolt Interface Controller Datasheet*, rev. 1.03, Table 13: the seven `*_UCODE` sections and their order; the chain lengths in the image land exactly on `CP_UCODE`, `HDP_OUT_UCODE`, `HDP_IN_UCODE`, `LC_UCODE`, `ARC_UCODE`, `CIO_IRAM_UCODE`, `CIO_DRAM_UCODE` |

External context (not evidence): [fwupd NVM struct](https://chromium.journaldev.googlesource.com/chromiumos/third_party/fwupd/+/409943984eb4cbeb11820fe092f33de84527191d/libfwupdplugin/fu-intel-thunderbolt.rs) · [LibreBoot T480 commit](https://browse.libreboot.org/lbmk.git/commit/config?h=25.04rev1&id=9884e5ed1b0b6e5be00cd5cd7fd52454518e8dad) · [Alpine Ridge section patching](https://tonymacx86.com/threads/success-gigabyte-designare-z390-thunderbolt-3-i7-9700k-amd-rx-580.316533/page-1539#post-2082271)

---

## 2. File layout

```
0x000000 ┌─────────────────────────────────────────────┐
         │ container header (16 B) + FF to 0x4000       │  u32@0=0x4000  u32@4=0x80000
0x000800 │   u32 = 0x19 (25)                            │  lone words in erased flash
0x000FFC │   u32 = 0x00037010                           │
0x004000 ├─────────────────────────────────────────────┤ ← Intel Thunderbolt NVM image
         │ Digital header (288 B)                       │  sections=0x7F, device 0x15C0
0x004200 │ DROM · ARC PARM · EE_* · PATCHES             │  0x200-block section table
0x006254 │ DP_OUT_U_CODE  (0x200 hdr + 15.6 KiB 8051)   │  8051 image
0x00C256 │ DP_IN_U_CODE   (0x200 hdr + 26.1 KiB 8051)   │  8051 image
0x014258 │ LC_UCODE                                     │  26.7 KiB, Link Controller 8051
0x01AACA │ ARC_UCODE                                    │  5.6 KiB, ARC patch
0x01C088 │ CIO_IRAM_UCODE                               │  23.9 KiB, CIO controller IRAM
0x021DDA │ CIO_DRAM_UCODE (starts CIO_PHY_SECTION:)     │  2.3 KiB, PHY config + DRAM ucode
0x022800 │ ARC CACHE (ARCompact base image)             │  89.5 KiB, coherence 1.000
0x039200 │ CSS · RSA+EXP · skip list · SEC DGST · PPS   │  security metadata
0x03B800 │ more 8051 fragments + data                   │
0x040000 ├─────────────────────────────────────────────┤
         │ 768 KiB of 0x00 (75 % of the file)           │
0x100000 └─────────────────────────────────────────────┘
```

---

## 3. Container and NVM headers

Container at `0x0000` (little-endian): `u32 0x00004000` = NVM image offset, `u32 0x00080000` = declared NVM size (512 KiB).

NVM “Digital” header at **`0x4000`** (fields per fwupd's struct):

| Field | Value | Note |
|---|---|---|
| `available_sections` | `0x7F` | all section bits set |
| `ucode` | `0x1C10` | microcode address field |
| `device_id` | `c0 15 b0 00` | low 16 bits = **`0x15C0` (Alpine Ridge)** |
| `version` (u16) | `0x0023` | NVM **23** (u16 LE `0x0023`), confirmed live — kernel `nvm_version` = 23.0 |
| `flags_host` | `0x06` | — |
| `flash_size` | `0x2B` | encoded, not a byte count |
| `arc_params` | `0x0610` → `0x4610` | **exact match** to `ARC PARM` payload |
| `drom` | `0x0210` → `0x4210` | **exact match** to `DROM` payload |

---

## 4. Section table

0x200-aligned blocks: 16-byte header (name, `FF`-padded) + payload at `+0x10`.

| Name | Header | Payload | Size | Content |
|---|---|---|---|---|
| `DROM` | `0x04200` | `0x04210` | `0x61` | device ROM: `Lenovo`, `T480`, numeric records |
| `ARC PARM` | `0x04600` | `0x04610` | `0x55` | ARC-core parameters |
| `EE_CIO` | `0x04800` | `0x04810` | `0xA0` | `{0x15C08086, 0x0030xxxx}` records |
| `EE_PCIE` | `0x04A00` | `0x04A10` | `0x1C8` | id/value pairs, `0x003Cxxxx` addresses |
| `EE_DMA` | `0x04C00` | `0x04C10` | `0x58` | `{0x15BF8086, 0x00A40000}` |
| `EE_USB_PA` | `0x04E00` | `0x04E10` | `0xC8` | `{0x15C18086, 0x00A10000}` |
| `EE_USB_PB` | `0x05000` | `0x05010` | `0x1F8` | `0x0030xxxx` based |
| `EE_PCIE_PHI` | `0x05400` | `0x05410` | `0x230` | `{value, 0x00300064}` style |
| `EE_ANA_COMM` | `0x05800` | `0x05810` | `0x28` | analog-common registers |
| `PATCHES` | `0x05C00` | `0x05C10` | `0x690` | starts `90 01 0D` (`MOV DPTR,#0x010D`); `CONFIG5` tag at `0x6296` |
| `ARC CACH` | `0x22800` | `0x22810` | open | first u32 `0x5A00` |
| `SWPPU` | `0x36600` | `0x36610` | open | name `SWPPU O8` |
| `CSS` | `0x39200` | `0x39210` | `0x20` | `20 00 00 00 06 00 00 00 a1 …` |
| `RSA+EXP` | `0x39400` | `0x39410` | `0x41` | 65 bytes (64-byte value + 1) |
| `skip list` | `0x39600` | `0x39610` | `0x00` | empty |
| `SEC DGST` | `0x3A000` | `0x3A010` | `0x40` | length 64 + **256 bytes** of digest data |
| `PPS` | `0x3B000` | `0x3B010` | `0x18` | `01 00 E0 AC FE FF FF FF 00 10 00 00 C0 33 00 00 5B 7C C9 42` |

### 4.1 The ucode chain — resolved against the datasheet

Table 13 of the Alpine-Ridge DP datasheet defines the chain that starts at the Digital header's
`ucode` offset (`0x1C10` → file `0x5C10`) and advances by `(size_dwords * 4 + 2)`. The lengths in
this image reproduce it exactly:

| # | Datasheet section | Length field | File range | Size | Core |
|---|---|---|---|---|---|
| 1 | `CP_UCODE` | `0x0190` dwords | `0x05C10`–`0x06252` | 1,600 B | Control Port (TLV patch) |
| 2 | `HDP_OUT_UCODE` | `0x1800` dwords | `0x06254`–`0x0C254` | 24,576 B alloc | 8051 |
| 3 | `HDP_IN_UCODE` | `0x2000` dwords | `0x0C256`–`0x14256` | 32,768 B alloc | 8051 |
| 4 | `LC_UCODE` | `0x1A1C` dwords | `0x14258`–`0x1AAC8` | 26,736 B | 8051 |
| 5 | `ARC_UCODE` | `0x056F` dwords | `0x1AACA`–`0x1C086` | 5,564 B | ARCompact |
| 6 | `CIO_IRAM_UCODE` | `0x1754` dwords | `0x1C088`–`0x21DD8` | 23,888 B | CIO controller |
| 7 | `CIO_DRAM_UCODE` | `0x023C` dwords | `0x21DDA`–`0x226CA` | 2,288 B | CIO PHY |

The datasheet also states that **both CIO sections must load together**, and that §8.8.1
documents the `CIO_PHY_SECTION` header at the start of the CIO DRAM section — exactly what is at
`0x21DDA`.

**Generated structure and build-time data.** On top of the six code regions (the three 8051
images, `ARC_UCODE`, the ARC base image and the Cortex-M listing `cm.asm`), the build reproduces
**72,603 B** of non-code bytes: 18,166 B of decoded structure/data (including 3,234 B of opaque
payloads extracted from the fetched image at build time), 37,173 B of declared fill, and the
17,264 B Cortex-M code now assembled from `cm.asm`. The decoded structure covers container words,
the seven chain prefixes, section names/trailers, the Digital header and its table, the CP patch
records, both DP image headers, package metadata, the ARC filler, the seven `EE_*` 8-byte record
arrays, the `DROM`/`ARC PARM` payloads, the `CIO_DRAM`/`CIO_PHY_SECTION` config, the security
length words/PPS, the Cortex-M patch header, the container 0xFF fill, the zero DP tails and the
all-zero 768 KiB tail. With the code regions this is **238,256 B (90.9 % of the used 256 KiB)**;
the only carried region is `CIO_IRAM` (23,888 B).

---

## 5. The three 8051 firmware images

Loadable images with a **0x200-byte header**: name at `base+0x10`, code at `base+0x200`. The first bytes of the header are a **reset vector** — `02 02 00` = `LJMP 0x0200` — so logical 0 jumps to the entry at `0x200`.

| Image | Header | Code | Size | Recovered | Conflicts |
|---|---|---|---|---|---|
| `DP_OUT_U_CODE` | `0x6254` | `0x6454`–`0xA14B` | 15,607 B | **7,266 insns / 14,382 B (92.2 %)** | **0** |
| `DP_IN_U_CODE` | `0xC256` | `0xC456`–`0x12A48` | 26,098 B | **12,890 insns / 25,089 B (96.1 %)** | **0** |

**Byte-exact verification.** Both images were regenerated from their listings with an independent
assembler (SDCC `sdas8051`): 15,607/15,607 and 26,098/26,098 body bytes re-assemble identically,
with **0 mismatches and 0 gaps** across all 20,156 instructions (`python3 roundtrip.py`, see
[`DECOMP.md`](DECOMP.md) §7).

The listings were regenerated after the conditional-branch decoder fix (`CJNE A,direct`,
`CJNE @Ri,#imm`, `DJNZ direct`): **1,010 instructions** that were previously emitted as data are
now decoded (415 B in DP_OUT, 1,744 B in DP_IN); the bytes are unchanged.

Load addresses were proven, not assumed: a branch-target/instruction-boundary **coherence** test over every candidate base peaks at **0.998** (`0x6254`) and **0.906** (`0xC256`), versus ≤0.88 for neighbouring bases and 0.59–0.69 for data. Recursive descent then resolves **100 %** of branch targets inside each image with **zero** overlapping-instruction conflicts.

### 5.1 Entry

```
0000: 02 02 00      LJMP 0x0200          ; reset vector in the image header
0200: 02 02 08      LJMP 0x0208          ; entry
0203: 12 3E B9      LCALL 0x3EB9         ; -> LJMP 0x2A03 (main body)
0206: 80 FE         SJMP 0x0206          ; halt trap
0208: 75 81 92      MOV SP,#0x92
020B: 12 3E F1      LCALL 0x3EF1         ; helper (returns 0 in DPL)
020E: E5 82         MOV A,DPL
0210: 60 03         JZ 0x0215
0212: 02 02 03      LJMP 0x0203
...
0247: 90 01 20      MOV DPTR,#0x0120     ; clear internal counters
024C: 90 4F B4      MOV DPTR,#0x4FB4     ; clear mailbox 0x4FB4..0x4FBF
...
026D: 02 02 03      LJMP 0x0203          ; -> main body at 0x2A03
```

`0x2A03` is the real start-up: clears variables `0x78–0x92`, programs clock/reset registers (`0xC8A0`=0x0E; sets bit 0x40 in `0xC80F`; clears bits 0/1 of `0xC807`), then calls the shared status helper `0x0270`.

### 5.2 What the code does

* **Host mailbox protocol**: `RAM 0x7A/0x7B` = message id, `DPL` = payload, `LCALL 0x0270`, then poll a status bit (`JB ACC.7` on `0xC813`). 24 call sites.
* **Bit-field register access**: read XDATA word → `ORL/ANL` → write back (the standard set/clear-field sequence), e.g. `ORL 0x02,#0x40` before `MOVX @DPTR,A`.
* **XDATA map** (addresses observed; semantics not established):

| Range | Refs | Character |
|---|---|---|
| `0x4FAE–0x4FFF` | 340 | main mailbox / host-interface block |
| `0xC800–0xC8A0` | 80+ | control/status (`0xC813` bit 7 polled, `0xC817`, `0xC851`, `0xC870…`) |
| `0xCA00–0xCA85`, `0xCC00–0xCC96` | 100+ | secondary register banks |
| `0xD200–0xD25C`, `0xD403–0xD468`, `0xD66E–0xD680`, `0xD766–0xD780` | 220+ | peripheral/timer/PLL-style registers |
| `0x0120–0x0125` | 11 | internal RAM counters |

* Interrupt returns are rare (1 `RETI` in DP_OUT, 5 in DP_IN): the interrupt machinery is barely used.

### 5.3 Independent cross-check with Ghidra's 8051 module

Ghidra 12.1.4 ships `8051:BE:16:default`. Importing `dp_out_u_code.bin` as a raw 8051 binary and letting Ghidra disassemble from the reset vector produced **5,171 instructions**. Comparing against my decoder on the 5,170 common addresses:

* **96.9 %** textually identical after normalising SFR names (`ACC` vs `0xe0`, `CLR C` vs `CLR CY`, `ADD A,ACC` vs `ADD A,A`);
* **no decode disagreements** — every residual difference is naming or coverage.

This cross-check caught a real bug in my own decoder (`DJNZ Rn,rel` was decoded as 3 bytes instead of 2); fixing it took both images to **zero** overlap conflicts.

### 5.4 The third 8051: `LC_UCODE` at `0x14258`

The section at `0x14258` (26,736 B) is a **complete third 8051 image**, with its own vector table
at offset 0:

```
0000: 02 01 00   LJMP 0x0100     reset
0003: 02 01 03   LJMP 0x0103     INT0
000B: 02 01 0B   LJMP 0x010B     Timer 0
0013: 02 01 13   LJMP 0x0113     INT1
0100: 02 01 1B   LJMP 0x011B
011B: 75 81 6D   MOV SP,#0x6D
011E: 12 68 4A   LCALL 0x684A
0121: E5 82      MOV A,DPL
```

It uses the same start-up idiom as the DisplayPort images (set `SP`, call a helper, test `DPL`),
but a different XDATA map: `0xEA00`–`0xEBFF` and `0xF000`–`0xF1FF` instead of the DP images'
`0x4Fxx`/`0x7Fxx` and `0xC8xx`/`0xD2xx`. The datasheet identifies it as the **Link Controller**
(`LC_UCODE`, "Display Link Controller uCode Patch Section").

Recovery: 13,781 instructions over 26,182 of 26,736 bytes (97.9 %); the remaining 554 bytes are
vector-table padding and embedded tables. `sdas8051` re-assembles all **26,736 bytes identically**
(0 mismatches, 0 gaps). The listing is [`lc.asm`](lc.asm); `make verify` checks it with the other
two 8051 images.

The image is decompiled in [`decomp/lc_decomp.c`](decomp/lc_decomp.c) (116 functions, all
decompiled with Ghidra's `8051:BE:16` module; reproduce with `scripts/decomp_lc.sh`). Structure:

* **Entry** `0x0` → `0x100` → `0x11B`: set `SP`, `LCALL 0x684A`, test `DPL`, then the main body.
* **Main loop** `0x2E9`: waits on `0xF0A0` bit 0, clears the `0xEA00`–`0xEBEF` scratch RAM
  (`0x5193`), enables interrupts (`0x4F7D`), initialises the mailbox/state (`0x4BE4`), then polls
  `0xF098` and dispatches status bits to `0x2623` / `0x6223`.
* **Command dispatcher** `0x3957` (2,631 B): switches on the command byte at XDATA `0xEB10`;
  cases `0x80`–`0x8F` and `0xEE` jump to the per-command handlers at `0x39DC`, `0x3C03`,
  `0x3CAF`, …, `0x439A`. This is the LC mailbox/IECS command server.
* **Register helper** `0x61D0`: builds a 4-byte command in `0xF094`–`0xF097`, sets the `go` bit
  and polls it — the generic register/mailbox accessor (19 call sites).
* **Packet helper** `0x6223`: drains up to 16 dwords from `0xEA48`/`0xEAF4` through `0xF090`–
  `0xF093`, i.e. a 64-byte data-packet send.
* **Interrupt handlers** at `0x1FA` and `0x25E`: acknowledge `0xF0E2`/`0xF0E3` and count events in
  `0xEBDC`/`0xEBDE`.

A decoder bug was found and fixed while decompiling: `CJNE A,direct,rel` (`0xB5`),
`CJNE @Ri,#imm,rel` (`0xB6`/`0xB7`) and `DJNZ direct,rel` (`0xD5`) were classified as
straight-line, so their targets were never followed. Fixing it added 146 LC instructions; the
DisplayPort listings were regenerated with the fix (+1,010 instructions, still byte-exact) and
their decompilation is refreshed.


---

## 6. The ARC (ARCompact) firmware block — proven

The 89.5 KiB at **`0x22800`–`0x38E00`** (`ARC CACH` header at `0x22800`, code from ≈`0x22810`, first full prologue at `0x2282C`) is code for the controller's **ARC** core. Four independent lines of evidence:

1. **Padding is ARC `nop_s`.** The 16-bit word `0x78E0` occurs 1,960× and is the filler at page starts (`0x28000`, `0x30000`, `0x34000`) and whole 256-byte runs (`0x38D00`). GNU `arc-linux-gnu-objdump` decodes `78 E0` as **`nop_s`**.
2. **Textbook ARC prologues and epilogues.**
   ```
   28000: 78e0 ×11            nop_s                    ; alignment padding
   28014: 1ce0 b6c8           st.aw fp,[sp,-32]        ; frame setup
   2801c: c542               st_s  r13,[sp,0x8]
   ...
   38b92: j_s blink                                  ; return
   ```
   ```
   38b6c: mov sp,fp ; ld blink,[sp,4] ; ld_s r13..r15,[sp,..] ; ld.ab fp,[sp,0x28] ; j_s blink
   ```
3. **Decode coherence is exactly 1.000 across the whole block.** Using the real ARC disassembler, a sliding 0x600-byte window scores the fraction of branch targets landing on instruction boundaries. In `0x22858–0x38E00`: **179/179 windows score exactly 1.000**. Before `0x22658`: **0/114 windows reach 0.90** (data), and the transition window scores 0.962 because it spans an FF gap. Calibration: a hand-verified code window = 1.000, config data = 0.686.
4. **Calls resolve internally.** E.g. at `0x22818`: `bl 0x27c38`, `bl 0x23814`, `bl 0x27be8`, `bl 0x37e68` — all inside the block; `0x2282c` then starts a new function with `st.aw fp,[sp,-24]`.
5. **Ghidra's ARC module (`ARCompact:LE:32:default`) recovers real functions.** Aggressive analysis over the region produced **695 functions / 27,859 instructions** (largest 300–1,788 bytes), and the decompiler emits coherent C. Sample — a PCIe-style config access with link-status polling:

```c
undefined4 FUN_ram_00033e4c(undefined4 param_1, uint param_2, char param_3, undefined4 param_4)
{
  local_30 = param_2 | 1 << (param_3 + 10U & 0x1f) | 0x40800000;
  iVar1 = func_0x0000f594(param_1, 0, 2, 0x44, &local_30, 1);   /* write cfg dword @0x44 */
  if (iVar1 == 0x1000000) {
    ...
    do {
      iVar1 = func_0x0000f478(param_1, 0, 2, 0x44, &local_30, 1); /* read cfg dword @0x44 */
      if (iVar1 != 0x1000000) return 0;
    } while (((local_30 & 0x40000000) != 0) && ((local_30 & 0x80000000) == 0));
    ...
    iVar1 = func_0x0000f478(param_1, 0, 2, 0x45, param_4, 1);
    ...
  }
  return 0;
}
```

and a read-modify-write field update:

```c
/* FUN_ram_00025014: set bit 9 (or 10), write back, clear it, write back */
local_30 |= 1 << sVar1;  func_0x0000f594(param_1, param_2, 1, uVar3, &local_30, 1);
local_30 &= ~(1 << sVar1); func_0x0000f594(param_1, param_2, 1, uVar3, &local_30, 1);
```

**Entry point — found.** The image begins with a 20-byte header at `0x22800`:

```
0x22800  41 52 43 20 43 41 43 48   "ARC CACH"      section name (8 bytes)
0x22808  ff ff ff ff ff ff ff ff   FF padding
0x22810  00 5a 00 00               u16 version = 0x5A (90); 2019 image = 0x58 (88)
0x22814  <code>
```

At **`0x22814`** sits a 24-byte init stub — the first code in the image, a root with no callers:

```
22814: 1cfc b7c8   st.aw blink,[sp,-4]     ; save return address
22818: 0c22 0280   bl 0x27c38
2281c: 0ffa 0040   bl 0x23814
22820: 0bca 0280   bl 0x27be8
22824: 0e46 0a80   bl 0x37e68
22828: c0d1        pop_s blink
2282a: 7ee0        j_s [blink]             ; return to caller (ROM)
```

Ghidra decompiles it as a clean call sequence, and each callee is an initialiser:

| Callee | Size | Behaviour |
|---|---|---|
| `0x27c38` | 38 B | calls `0x27c60` twice with `r0=0` and `r0=1` (two instances/channels) |
| `0x23814` | 86 B | fills a RAM descriptor block at `0x8077e8` with zeros and code pointers (`0x1d908`, `0x1d9ec`, …) |
| `0x27be8` | 78 B | reads configuration field `0xF4` through the accessor used elsewhere for `0xD4…0xE4` |
| `0x37e68` | — | initialises RAM at `0x807a00` / `0x807804` |

**Cross-version confirmation:** in the 2019 image the bytes at `0x22814` are already the *body* of the next function (the `memset`/config-field initialiser that sits at `0x2282c` in 2022) — there is no stub. The entry offset `0x14` from the section base is therefore structural, not accidental, and the 2022 release added an extra init hook.

The second root, `0x2282c`, is another initialiser: `memset(0x807a78, 0xFF, 0x38)` followed by reads of config fields `0xD4, 0xD8, 0xDC, 0xE0, 0xE4` into `0x807ab0…`.

**Link base — resolved.** The block contains two dense **tables of absolute code pointers**:

| Table | Entries | Targets |
|---|---|---|
| `0x37914` | 36 × u32 | `0x2D190`, `0x2D1B8` (function entries; `0x2D190` = `mov_s r0,r17 …`) |
| `0x38A8C` | 33 × u32 | `0x2E314`, `0x2E354` (function entries) |

The pointers are numerically equal to the **file offsets** of their targets, so the ARC image is linked with addresses matching its position in the NVM — i.e. **link base = `0x22800`**, and the NVM is mapped at address 0 in the ARC's view. Calls to addresses below the base (e.g. `0x15eb8`, `0x17bf4`) leave the mapped image entirely: no code exists at those file offsets, so they target the controller's **ROM**, which is consistent with a boot-RAM/ROM split (ROM below `0x22800`, this image from `0x22800`, RAM at `0x800000+`).

---

### 6.1 Decompilation

An entry-seeded decompilation of the ARC block is in [`arc/arc_decomp.c`](arc/arc_decomp.c)
(253 functions, 11,373 lines) with a function index in [`arc/arc_index.txt`](arc/arc_index.txt);
method and coverage limits are documented in [`arc/README.md`](arc/README.md). Key results:

* the firmware is **command-dispatched** — two code-pointer tables (`0x37914`, `0x38A8C`) hold 69
  handler pointers, and 40 functions have no direct callers;
* `0x31028` (1,128 B, 15 callees) is a command handler that tests `*param_1 == 0x0B` and loops over
  sub-commands `0..0xE`;
* `0x33e4c` performs PCIe configuration-space dword write/read at offsets `0x44`/`0x45` with
  link-status polling and timeouts;
* calls below the image base are ROM services.

**Byte-exact round trip.** The block was regenerated from its listing with GNU as (`-EL -mcpu=arc700`)
and compared byte-for-byte: **20,482 of 20,483 in-function instructions re-encode identically,
with zero mismatching bytes**. This includes 810 branches into ROM, now verified by expressing
objdump's own displacement relative to `.`. Of the verified instructions, 272 use the alternate
16-bit short-ALU form that binutils never emits; `asm_arc.py` now encodes that form itself (the
rule was checked against all 314 instances in the block with zero disagreements). The single
remaining entry is a data word in the `0x37914` dispatch table that objdump decodes as `bnt.d`.
`mov2b` at `0x22810` was confirmed as a misdecode (it is the version word plus the first real
instruction) — the bad decode that had pushed the entry point to `0x22814`. Reproduce with
`python3 asm_arc.py`; details in [`arc/README.md`](arc/README.md).

The dispatch architecture is mapped in [`arc/dispatch.md`](arc/dispatch.md): two jump-table
switches (`0x378f8`, 36 cases, selector = `(config_word & 0x7f00) >> 8`; `0x38a70`, 33 cases),
their resolved handler tables (`0x37914`, `0x38a8c`), and the behavioural roles of the six handler
stubs. The flash-side copies of the tables (`0x2d100`, `0x2e278`) are **encoded** (likely fixed up
when the image is copied to RAM by the boot ROM) — that is the one piece of the dispatch
architecture still open.

### 6.2 `ARC_UCODE` — the ARC patch at `0x1AACA`

The 5,564-byte section at `0x1AACA` is the datasheet's `ARC_UCODE` patch. It is ARC code for the
same core, with a 0x80-byte header: six data-RAM pointers at `0x0` (`0x8000_xxxx`), and six
8-byte `j` trampolines at `0x80` to ROM addresses `0x10050`, `0x1006c`, `0x1007c`, `0x10098`,
`0x100ac`, `0x100d4`. `j` encodes an absolute 24-bit target, so those are ROM addresses
independent of the patch's load base; none of the section's branch targets fall inside the base
image (`0x22800`–`0x38E00`). The patch body contains textbook ARC prologues/epilogues and 31
`j_s [blink]` returns.

`python3 asm_arc.py ucode` re-assembles the section through GNU as and compares it: **5,564 /
5,564 bytes identical**, with 1,463 of 1,470 instructions re-encoded (99.52 %); the seven
exceptions are four `bl` forms whose target alignment follows a different PC convention, `j 0x18`,
and two delay-slot branches. The runtime load base of the patch is not established by the image
alone.

## 7. PATCHES — cracked as the head of the ucode section chain

The section format follows the algorithm in fwupd's
`libfwupdplugin/fu-intel-thunderbolt-nvm.c` (gen-3 host path): the Digital header at `0x4000`
carries `available_sections` (u8 @ `+0x02`, here `0x7F`) and the chain start `ucode` (u16 @ `+0x03`,
here `0x1C10` relative → `0x5C10`). Each section is `[u16 length-in-dwords][body]` where the length
excludes the 2-byte prefix. Bits `0x01`–`0x20` are walked in order; the remaining `0x40` flag names
the section the walk ends on (fwupd: `DRAM_UCODE`).

| Flag | 2022 section | 2019 section | Length | Content |
|---|---|---|---|---|
| `0x01` | `0x5C10` | `0x5C10` | **400 dw (1,600 B)** / 383 dw (1,532 B) | **PATCHES** — a nested TLV blob (see below) |
| `0x02` | `0x6252` | `0x620E` | 6,144 dw (24,576 B) | **DP_OUT** body: 0x200-byte header + code + trailing data |
| `0x04` | `0xC254` | `0xC210` | 8,192 dw (32,768 B) | **DP_IN** body: header + code + trailing data |
| `0x08` | `0x14256` | `0x14212` | 6,684 / 6,684 dw | descriptor-like data (repeating `02 01 xx` triplets) |
| `0x10` | `0x1AAC8` | `0x1AA84` | 1,391 / 1,383 dw | **table of ARC RAM addresses (`0x80000xxx`)** |
| `0x20` | `0x1C086` | `0x1C022` | 5,972 / 5,964 dw | mixed data |
| `0x40` | `0x21DD8` | `0x21D54` | 572 / 572 dw | body starts with the string `CIO_PHY_SECTION:` |

The chain ends at `0x226CA` (2022) / `0x2264A` (2019); the ARC block sits at the fixed `0x22800` in
both. This explains the entire previously-"unknown" `0x14258`–`0x22800` region, and it resolves the
PATCHES anomalies:

* The first two bytes (`90 01` vs `7F 01`) are **not** a type byte — they are the section's own
  dword length (0x0190 = 400 vs 0x017F = 383).
* The last two bytes that differ between versions (`9F 03` vs `00 18`) are the tail of the 2022
  PATCHES body versus the **shifted-up DP_OUT length prefix** in the 2019 file (`0x1800` = 6,144 dw —
  the mysterious `00 18` "terminator" seen before).
* The 68-byte 2022 tail is simply 17 extra dwords of PATCHES body.
* Because the chain is length-driven, **everything after PATCHES is at `−0x44` in the 2019 file**
  (e.g. `DP_OUT_U_CODE` at `0x6220` vs `0x6264`) until the fixed `0x22800` ARC base.

The PATCHES body itself is a nested `{u8 cmd, u8 len, len bytes}` structure — 16 top-level records,
identical in both versions, the first record being `0x90/0x7F` (cmd) with the single payload byte
`0x0D`. Its leaf payloads are not plain 8051 or ARC code (no decoder coherence anywhere), so the
records are most likely data/parameter patches consumed by the controller at boot; the leaf format
is still open.


## 8. DROM identity — validated against the live kernel

The block at `0x4210` starts with the 22-byte header defined by the Linux `thunderbolt` driver
(`struct tb_drom_header`, `drivers/thunderbolt/eeprom.c`), followed by variable-length entries.

| Offset | Field | Value | Cross-check |
|---|---|---|---|
| 0 | `uid_crc8` | `0x61` | — |
| 1–8 | `uid` (u64) | `0x0109000000000000` | — |
| 9–12 | `data_crc32` | `0x8FA43734` | — |
| 13 | `device_rom_revision` | 1 | valid (must be ≤ 1) |
| 14–15 | `data_len` (12 bits) / reserved | 59 / 0 | — |
| 16–17 | **`vendor_id`** | **`0x0109`** | kernel `vendor` = `0x109` ✓ |
| 18–19 | **`model_id`** | **`0x1707`** | kernel `device` = `0x1707` ✓ |
| 20 | `model_rev` | 1 | — |
| 21 | **`eeprom_rev`** | **23** | kernel `nvm_version` = **23.0** ✓ |

Entries begin at `+22` and use `[len][index:6 | port_disabled:1 | type:1][data…]`:

| Entry | Bytes | Meaning |
|---|---|---|
| `index 1, type 0` | `09 01 4C 65 6E 6F 76 6F 00` | vendor string → kernel `vendor_name` = **Lenovo** ✓ |
| `index 2, type 0` | `07 02 54 34 38 30 00` | device string → kernel `device_name` = **T480** ✓ |
| `index 1/2/4/5, type 1` | `08 81 80 02 80 00 00 00`, `02 83`, `0B 84 …`, `05 85 …` | port entries |

Correction to an earlier reading in this report: `0x61` is **not** a `u32` length (it is `uid_crc8`),
and the second byte of each entry is an `index/type` bitfield rather than a plain type. Five fields
now agree with the live kernel, so this header is fully decoded.

This is the block that must be patched to present a different vendor/model.

---

## 9. Reproducing

```bash
cd tbt_analysis
python3 tbt_parse.py TBT.bin --dump extract     # structure + extraction
python3 emit_listing.py dp_out                  # annotated 8051 listing
python3 emit_listing.py dp_in
python3 arc_scan.py arc/region_14258.elf 0x14258 0x38E00 0x200 0x600   # ARC coherence map
tools/usr/bin/arc-linux-gnu-objdump -d arc/code_22658.elf               # ARC disassembly
# Ghidra (ARC + 8051), headless:
#   analyzeHeadless /tmp/p PROJ -import arc/code_22658.elf -scriptPath ghidra_scripts \
#       -postScript DumpArc3.java /tmp/out.txt
#   analyzeHeadless /tmp/p DP -import extract/dp_out_u_code.bin \
#       -processor 8051:BE:16:default -loader BinaryLoader -loader-baseAddr 0x0 \
#       -scriptPath ghidra_scripts -postScript Dump8051.java /tmp/out.txt
```

| File | Purpose |
|---|---|
| [`tbt_parse.py`](tbt_parse.py) | container/Digital/section/image parser, extraction |
| [`dis8051.py`](dis8051.py) | MCS-51 disassembler (Ghidra-validated) |
| [`analyze.py`](analyze.py) / [`emit_listing.py`](emit_listing.py) | recursive descent, listing emitter |
| [`arc_scan.py`](arc_scan.py) | sliding ARC decode-coherence scan |
| [`wrap_arc.py`](wrap_arc.py) | wraps raw blobs into ARC ELF (binutils + Ghidra loaders) |
| [`ghidra_scripts/`](ghidra_scripts) | `DumpArc*.java`, `Dump8051.java` |
| [`extract/`](extract) | `dp_out_u_code.bin`, `dp_in_u_code.bin`, 17 section blocks |
| [`arc/`](arc) | `region_14258.elf`, `code_22658.elf` for ARC tooling |

Tooling used: **Ghidra 12.1.4** (installed, `ARCompact:LE:32:default` + `8051:BE:16:default`) and **GNU binutils 2.47 `arc-linux-gnu-objdump`** (extracted from the Fedora RPM without root).

---

## 10. Unknowns

1. **No execution evidence.** Everything is static; nothing was run and no device was contacted.
2. **`PATCHES` field meanings** — the blob is characterised (1,604 bytes, 401 × two-u16 records,
   static across versions, not code) but the record semantics are not established (§7.2).
3. **`SEC DGST` verification** — it is signature-shaped and provably not a plain hash of any
   structural region, but the signed coverage and key cannot be checked without the ROM verifier (§7.1).
4. **Boot handshake** — the code is expected to reach the entry stub at `0x22814` from the controller
   ROM, which is outside this image.
5. **Vendor field semantics** (`CSS`, `PPS`, `EE_*` layout, `flash_size`, `ucode`) only partly mapped.
6. **CIO core.** `CIO_IRAM_UCODE` (23,888 B) is the largest unexplained payload. It is not an
   8051 image (no vector table, no coherent recursive descent from any of the first 1,024
   offsets) and not ARCompact (no `nop_s`/`j_s [blink]` idioms, no coherent decode). Its core's
   ISA is open; the section is carried verbatim.
7. **`CIO_DRAM_UCODE`** body after the documented `CIO_PHY_SECTION` config (2,288 B total) is
   still carried.
8. **`ARC_UCODE` load base** — the absolute `j` targets are ROM addresses, so the patch's runtime
   base is not determined by the image.
9. **Third 8051 fragment area** (`0x3B800+`) not individually resolved.
7. **`ARC CACH` section name** does not describe its content (it is the ARC code image); the naming
   convention is unexplained.
8. The 16-byte container header is inferred from two self-consistent fields.

---

### Appendix — method

1. Byte-level triage (entropy, fill maps, strings, magics) → erased-flash structure and 0x200-aligned named blocks.
2. Container headers cross-checked against fwupd's Intel Thunderbolt NVM struct (two exact offset matches).
3. 8051: hand-written decoder → load-address coherence scan (0.998 peak) → recursive descent with conflict detection → **cross-validated against Ghidra's 8051 module** (96.9 % identical, 0 decode disagreements; one bug in my decoder found and fixed).
4. ARC: `nop_s` padding + prologue/epilogue identification → binutils ARC disassembly → sliding coherence scan (1.000 vs 0.686) → Ghidra ARC auto-analysis and decompilation.
5. All conclusions separated into observation, inference and unknown; no runtime claims.

---

---

## 11. Differential analysis (T480 NVM 23 vs T470 NVM 20)

### 11.1 Provenance of the files

| File | Size | SHA-256 | Identity |
|---|---|---|---|
| `TBT.bin` (original) | 1,048,576 | `fc9c47ff…` | **T480 `TBT.bin` padded with 768 KiB of zeros** |
| `refs/t480_TBT.bin` | 262,144 | `dbccd2ef…` | T480 `TBT.bin`, from `n24th13w.exe` |
| `refs/t480_ASSISTTBT.bin` | 262,144 | `d4ed51b4…` | T480 `ASSISTTBT.bin`, same package |
| `refs/t470_AssistTBT.bin` | 253,952 | `de29ecc4…` | T470 `AssistTBT.bin`, from `n1qth08w.exe` (2019) |

Both packages are Inno Setup installers and unpack cleanly with **innoextract** (the `zlb\x1a` blob is Inno's compressed setup data). The original 1 MiB attachment is byte-identical to the packaged 256 KiB `TBT.bin` over its first 256 KiB, and the remaining 768 KiB is zero — so it is a **padded full-flash image**, not a larger firmware.

The T470 package does **not** contain a `TBT.bin` — only `AssistTBT.bin` (the BIOS-assist variant). The 256 KiB image supplied as "T470" hashes to `dbccd2ef…`, i.e. it is byte-identical to the T480 `TBT.bin`.

### 11.2 `TBT.bin` vs `ASSISTTBT.bin` — same package, two variants

Only **8 bytes differ** across the entire 256 KiB:

| Offset | TBT | ASSIST | Location |
|---|---|---|---|
| `0x403B` | `13` | `33` | Digital header (reserved area) |
| `0x4048` | `06` | `04` | Digital header (reserved area) |
| `0x407B` | `27` | `07` | Digital header, offset 123 = fwupd `flags_is_native` |
| `0x40EC` | `0B` | `00` | Digital header (reserved area) |
| `0x4BB0` | `86 80 C0 15` | `FF FF FF FF` | `EE_PCIE` record — PCI ID `8086:15C0` **masked out** |

So the "BIOS assist" mode is selected by a handful of header flag bits, and it *disables* one `EE_PCIE` function entry (vendor/device replaced with `FF`s). This is the clearest evidence that `EE_*` entries are per-PCI-function descriptors keyed by `vendor:device`.

### 11.3 NVM 23 (2022) vs NVM 20 (2019)

| Region | Bytes compressed | Differing | Note |
|---|---|---|---|
| Digital header `version` | — | `0023` vs `0020` | NVM **23** vs **20** |
| `DP_OUT_U_CODE` (8051) | 15,607 | **0 (0.0 %)** | **bit-identical across three NVM versions** |
| `DP_IN_U_CODE` (8051) | 26,098 | 2,110 (8.1 %) | changed |
| ARC block `0x22800–0x38A00` | 90,624 | 25,588 (28.2 %) | structured, see below |
| `PATCHES` | 1,612 | 73 (4.5 %) | first byte `90`→`7F` |
| `DROM` | 512 | 14 (2.7 %) | board identity + version records |
| `EE_CIO…EE_ANA_COMM` | 4,608 | 7 (0.2 %) | nearly constant |

The ARC block's differences are **not uniform** — the per-4 KiB density alternates between 0 %, ~45 %, and ~95 %:

```
0x22800 95.8%   0x25800  0.0%   0x28800 47.5%   0x2B800 56.3%
0x23800 45.5%   0x26800  0.0%   0x29800 96.5%   0x2C800  0.2%
0x24800 45.7%   0x27800  1.0%   0x2A800  0.2%   0x2D800  0.3%
```

Identical blocks prove these bytes are **not** encrypted — they are versioned firmware content, with changed and unchanged regions interleaved. That is consistent with the ARC block being code plus tables that were patched between releases, and it is independent confirmation that the block is live firmware rather than opaque data.

### 11.4 DROM field semantics (from the board delta)

```
2022 (T480): 09 01 34 37 a4 8f 01 3b 00 | 09 01 07 17 01 17 08 | 09 01 "Lenovo" | 07 02 "T480"
2019 (T470): 09 01 c1 54 b2 9e 01 3b 00 | 09 01 01 16 05 14 08 | 09 01 "LENOVO" | 07 02 "T470"
```

* `[len=09][type=01]` records carry build/version-like bytes (board- and release-specific).
* `[type 01]` with a text payload is the **vendor string** (note the case change `Lenovo` → `LENOVO`).
* `[type 02]` is the **model string** (`T480` / `T470`) — this is the field that identifies the board.

### 11.5 What this resolves and what it does not

**Resolved / strengthened:** `EE_*` entries are PCI-function descriptors; the assist flag lives in the Digital header; DP_OUT is a stable shared component; the ARC block is versioned firmware.

**Still open:** `PATCHES` record semantics (§7.2) and `SEC DGST` verification (§7.1) — both characterised but not decoded — plus the ROM-side boot handshake that reaches the entry at `0x22814`.

**`SEC DGST` is not a plain digest.** Its 256 bytes (4 × 64) were tested against **465 candidate ranges** built from every structural boundary in the image, using SHA-512, SHA-256 and SHA-1, in forward and reversed byte order — **zero matches**. It is therefore a signature or a vendor-specific hash over a range/transform that requires the verification code to determine.

---

## 12. Live-device validation

The controller this firmware belongs to is present on the analysis host, so the image could be
cross-checked against the silicon.

### 12.1 Identity

`lspci` reports **JHL6240** ("Alpine Ridge LP 2016"), matching the supplied datasheet
(single-port, PCIe Gen3, DP 1.2, 1.2 W TDP):

| PCI function | ID | Firmware section |
|---|---|---|
| `02:00.0`, `03:00.0/1/2` bridges | `8086:15c0` | `EE_CIO` |
| `04:00.0` NHI | `8086:15bf` | `EE_DMA` |
| `06:00.0` USB 3.1 | `8086:15c1` | `EE_USB_PA` |

The kernel's thunderbolt driver exposes the host router as `/sys/bus/thunderbolt/devices/0-0`:

```
device_name  T480        vendor_name  Lenovo      generation  3
device       0x1707      vendor       0x109       nvm_version 23.0
unique_id    c7010000-0082-8098-20e4-bc282a13a025
```

`T480` / `Lenovo` match the DROM vendor and model strings parsed from the image, and
`nvm_version 23.0` confirms the header version field is the **u16 `0x0023` = 23** (not the low byte
read as 35).

### 12.2 The live NVM is byte-identical to this image

`0-0/nvm_active0/nvmem` is a **world-readable 516,096-byte** view of the controller's live NVM. It
was captured to [`refs/live_nvm.bin`](refs/live_nvm.bin) (sha256 `7f3218ee…`). Results:

* **Every structural marker lands at exactly `−0x4000`** relative to the package file — `DROM`
  (`0x4200` → `0x200`), `ARC PARM`, `EE_CIO`, `PATCHES`, `DP_OUT_U_CODE`, `DP_IN_U_CODE`,
  `ARC CACH`, `SEC DGST`, `Lenovo`, `T480`, `N24TF23W`. So the container header really is exactly
  **16,384 bytes**.
* **Zero differing bytes across the full 516,096-byte live region** (`live[0:0x7E000]` vs
  `TBT.bin[0x4000:0x82000]`) — the controller is running *this exact firmware*, and even the zero
  tail matches.
* The remaining 270,336 bytes of the live region are **all zero**, confirming the package image is
  complete at 0x3C000 (NVM-relative) and that the 1 MiB attachment is the 256 KiB image padded.

This validates the whole layout map (container, Digital header, section table, both 8051 images, the
ARC block and the security blocks) against real hardware rather than inference. `diff_tbt.py` now
detects a headerless image and aligns it on the DROM anchor, so this comparison is reproducible with
`python3 diff_tbt.py TBT.bin refs/live_nvm.bin`.
