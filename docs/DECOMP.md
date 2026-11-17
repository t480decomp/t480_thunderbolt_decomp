# Decompilation — 8051 firmware images in `TBT.bin`

Companion to [`REPORT.md`](REPORT.md). This covers the **two 8051 images** only:

| Image | Code range | Decoded bytes | Instructions | Functions | Decompiled |
|---|---|---|---|---|---|
| `DP_OUT_U_CODE` | `0x6454`–`0xA14B` (15,607 B) | **13,967 (89.5 %)** | 7,046 | **86** | 86 / 86 |
| `DP_IN_U_CODE` | `0xC456`–`0x12A48` (26,098 B) | **23,345 (89.4 %)** | 12,100 | **105** | 105 / 105 |

Coverage comes from a **coherence-gated gap-filling** pass: after the entry-seeded recovery, every
undecoded run is probe-decoded and, when ≥95 % of its in-range branch targets land on instruction
boundaries (the signature of real code), its start is added as a new entry and recovery repeats to
convergence. This lifted DP_OUT from 64 % to 89.5 % and DP_IN from 69 % to 89.4 %; the remaining
~10 % is data tables.

Outputs: [`decomp/dp_out_decomp.c`](decomp/dp_out_decomp.c) (14,091 lines), [`decomp/dp_in_decomp.c`](decomp/dp_in_decomp.c) (55,203 lines), plus function indexes [`decomp/dp_out_index.txt`](decomp/dp_out_index.txt) / [`decomp/dp_in_index.txt`](decomp/dp_in_index.txt).

---

## 1. Method

1. **Disassembly + function recovery** — my decoder ([`dis8051.py`](dis8051.py)) produced a full recursive-descent listing with **0 overlap conflicts** and 100 % branch-target resolution; Ghidra's independent 8051 module agreed on 96.9 % of instructions (see REPORT.md §5.3).
2. **Function set** — every distinct `LCALL` target (34 in DP_OUT, 41 in DP_IN) plus the entry; cross-checked against the listing. Counts match exactly.
3. **Decompilation** — Ghidra 12.1.4 `8051:BE:16:default`, `DecompInterface`, per-function 45 s timeout, using Ghidra's own flow-derived function boundaries and stack analysis.
4. **Symbols** — a small map derived from access patterns (see §4) applied before decompiling, so the C reads `MBX_4FB4` instead of `uEXTMEM4fb4`.

Both images are entered through a trampoline: `0x000: LJMP 0x0200` → `0x0200: LJMP 0x0208` → init → main body.

---

## 2. Program structure

### DP_OUT (`0x6254`)

```
0x0200  thunk -> 0x0208
0x0208  init: SP=0x92; clear counters, mailbox 0x4FB4..0x4FBF; call main
0x0270  post_message(mask)  — writes HOST_RESP, appends to a 128-entry ring buffer at 0x0127
0x2A03  main body (3,562 bytes) — state machine
0x0ABA  935-byte worker (called from main)
0x1AA9  761-byte worker (called from main + 0x1F0B)
0x17F4  693-byte worker
0x05B6  659-byte worker (called from 0x0ABA)
0x1F0B  610-byte worker
```

### DP_IN (`0xC256`)

```
0x0200  thunk -> 0x0208
0x0208  init: SP=0x54; clear 0x7F75..0x7F7F
0x4868  main body (6,525 bytes)
0x2878  5,226-byte worker (called from 0x42B8)
0x42B8  1,301-byte dispatcher (called from main)
0x0CFA  1,148-byte worker (called from main, 0x129A, 0x270E)
0x1B66  948-byte worker
0x2402  700-byte worker
0x1F9B  630-byte worker
```

Both mains are **command/state machines** driven by a status register: the DP_OUT main immediately posts message 1, then enters a loop at `0x2A74` that samples bit 4 of `0xD66F` and `CONFIG5[6]`, waits on `0xC800`, and branches on `0xC801` bit 7.

---

## 3. What the code does — evidenced

### 3.1 The host mailbox (DP_OUT `0x0270`)

```c
void FUN_CODE_0270(char param_1)
{
  if ((MSG_MASK & bCODE004b) == 0) return;          /* config gate, byte from image header */
  if ((param_1 == 0) && (HOST_RESP == MSG_ID)) return;  /* duplicate suppression */
  HOST_RESP = MSG_ID;                                /* 0xC851 */
  if ((s_CONFIG5_CODE_0042[6] & 1) != 0) {           /* runtime config bit */
    if ((s_CONFIG5_CODE_0042[7] & 1) == 1) {
      ... Q_BUF[Q_HEAD + 0x27] = MSG_ID;  Q_HEAD = (Q_HEAD + 1) & 0x7f;   /* ring buffer */
    } else if (Q_HEAD < 0x80) {
      ... same, no wrap
    }
  }
}
```

Three things are established by this one function:

* `MSG_MASK (0x7A)` / `MSG_ID (0x7B)` are the message parameters, posted to `HOST_RESP = 0xC851`.
* **`0x0127` is a 128-entry message ring buffer** with head index at `0x0125` — a queue between the firmware and the host interface.
* **The image header is live configuration.** `bCODE004b` and `s_CONFIG5_CODE_0042[6..7]` are code-space reads of bytes in the `0x0000`–`0x01FF` header, i.e. the `CONFIG5` block at `0x0040` is read at runtime to gate behaviour. That is why the header is named `CONFIG5` and why `0x0040–0x0050` contains non-zero fields.

### 3.2 The state machine (DP_OUT `0x2A03`)

```c
uEXTMEMc8a0 = 0x0e;                       /* clock/reset register */
BANK0_R2 = (BANK0_R2 & 0xfc) | 0x40;
MSG_MASK = 1; MSG_ID = 1; FUN_CODE_0270(...);   /* announce */
...
LAB_CODE_2a74:
  if ((bEXTMEMd66f >> 4 & 1) != 0) { uEXTMEMca10 = 3; uEXTMEMca15 = 0x20; uEXTMEMca14 = 7; }
  if ((s_CONFIG5_CODE_0042[6] >> 4 & 1) != 0) { ... }
  do { BANK0_R2 &= 0xe; } while (SYS_STATUS == 0xe);     /* poll 0xC800 */
  BANK1_R0 = bEXTMEMc801 & 0x80;
  if (BANK1_R0 == 0) { BANK0_R2 |= 0x9b; uEXTMEMd21e = 0xff; }
  else              { uEXTMEMcc8e = 0; }
```

The pattern — post a message, poll a status register until a value clears, branch on configuration bits — repeats throughout both mains.

### 3.3 Four-channel register banks (DP_IN `0x0CFA`)

DP_IN's 1,148-byte worker writes the *same* fields into four banks at stride `0x80`:

```c
uEXTMEMd654 = 7;  uEXTMEMd6d4 = 7;  uEXTMEMd754 = 7;  uEXTMEMd7d4 = 7;
uEXTMEMd655 = 2;  uEXTMEMd6d5 = 2;  uEXTMEMd755 = 2;  uEXTMEMd7d5 = 2;
uEXTMEMd60a = 7;  uEXTMEMd68a = 7;  uEXTMEMd70a = 7;  uEXTMEMd78a = 7;
```

`0xD600 / 0xD680 / 0xD700 / 0xD780` are four identical register banks (`+0x0A`, `+0x0B`, `+0x54`, `+0x55` …). That is the classic shape of a **per-lane** block — four PCIe lanes of a link, each configured identically. (Inference from the address arithmetic; not confirmed by documentation.)

---

## 4. Register map (inferred from access patterns)

Counts are observed; **role names are inference**, not vendor documentation. `rmw` = read-modify-write bitfield updates, `poll` = the loaded value is tested with `JB/JNB/JBC`.

### DP_OUT

| XDATA | r | w | rmw | poll | Used by | Inferred role |
|---|---|---|---|---|---|---|
| `0xD255` | 17 | 18 | 13 | 0 | 18 | bitfield control register |
| `0xD77F` | 12 | 9 | 10 | 3 | 10 | bitfield + polled status |
| `0x4FF0` | 18 | 11 | 1 | 0 | 8 | mailbox data |
| `0x4FB6` | 16 | 12 | 0 | 0 | 4 | mailbox data (init clears) |
| `0x4FAF` | 20 | 4 | 0 | 0 | 8 | mailbox read-mostly |
| `0x4FEA` | 9 | 8 | 6 | 2 | 8 | mailbox bitfield |
| `0x4FD1` | 2 | 21 | 0 | 0 | 22 | write-mostly command |
| `0x4FD3` | 9 | 14 | 0 | 0 | 23 | command/status |
| `0xD76D` | 7 | 7 | 7 | 0 | 7 | bitfield register |
| `0xC80F` | 4 | 4 | 6 | 0 | 3 | bitfield control |
| `0xC800` | 15 | 0 | 5 | 9 | 13 | **polled status** |
| `0xC813` | — | — | — | — | — | command/ack (bit 7 polled after write) |
| `0xC817` | — | — | — | — | — | host data |
| `0xC851` | — | — | — | — | — | host response (`HOST_RESP`) |
| `0x0125` / `0x0127` | 12 | 6 | 2 | 0 | 4 | **message queue head / buffer** |

### DP_IN (different XDATA map — different engine)

| XDATA | r | w | rmw | poll | Used by | Inferred role |
|---|---|---|---|---|---|---|
| `0x7FED` | 102 | 54 | 47 | 0 | 39 | global bitfield/flags word |
| `0x7EB0` | 36 | 28 | 4 | 1 | 9 | data/status block |
| `0x7FAC` | 31 | 13 | 18 | 2 | 9 | bitfield + polled |
| `0xD815` | 16 | 23 | 16 | 0 | 15 | bitfield register |
| `0xCC0B` | 25 | 23 | 0 | 0 | 26 | shared command/data |
| `0xD200` | 16 | 15 | 15 | 1 | 11 | bitfield register |
| `0x7EA9` | 24 | 7 | 7 | 0 | 5 | read-mostly status |
| `0xC850` | 16 | 7 | 14 | 2 | 9 | bitfield + polled |
| `0x7F7D` | 21 | 4 | 6 | 1 | 24 | widely-read flag |
| `0xD25C` | 14 | 0 | 17 | 0 | 12 | read-only bitfield |

The two cores share almost no XDATA addresses, which is consistent with them being separate engines inside the same controller.

---

## 5. Caveats

* **Symbol names are inferred.** The authoritative data is the address; `MBX_*`, `HOST_*`, `SYS_STATUS`, `Q_HEAD`/`Q_BUF`, `MSG_MASK`/`MSG_ID` are labels derived from code behaviour, not from documentation.
* Ghidra emits "removing unreachable block" warnings at `0x021C–0x0234`: that is the code→XDATA copy loop whose trip count is zero in this build (the length register is cleared), correctly pruned.
* **No runtime evidence.** Nothing here was executed on hardware or in emulation; "posts a message", "polls a status", "ring buffer" are reads of the code's logic, not observed behaviour.
* Function boundaries are Ghidra's; my independent listing agrees on the call-target set, but a function reached only through a computed jump could be missed.

---

## 6. Reproduce

```bash
# decompile DP_OUT (writes .c + index)
mkdir -p /tmp/p
analyzeHeadless /tmp/p DP -import extract/dp_out_u_code.bin \
  -processor 8051:BE:16:default -loader BinaryLoader -loader-baseAddr 0x0 \
  -scriptPath ghidra_scripts \
  -postScript Decomp8051.java out.c decomp_dp_out.sym out_index.txt
```

Files: [`ghidra_scripts/Decomp8051.java`](ghidra_scripts/Decomp8051.java), symbol maps [`decomp_dp_out.sym`](decomp_dp_out.sym) / [`decomp_dp_in.sym`](decomp_dp_in.sym).

---

## 7. Byte-exact round-trip verification

The strongest available check: **regenerate the machine code from the listing and compare it to the
original**. The listing is converted to SDCC assembly (`mk_sdas.py`), assembled with
`sdas8051` (SDCC 4.6.0 — an implementation completely independent of `dis8051.py`), linked, and the
resulting Intel HEX is compared byte-for-byte against the image.

| Image | Body (`0x200`–end) | Regenerated | Mismatches | Gaps | Result |
|---|---|---|---|---|---|
| `DP_OUT_U_CODE` | 15,607 B | 15,607 B | **0** | 0 | **BYTE-EXACT** |
| `DP_IN_U_CODE` | 26,098 B | 26,098 B | **0** | 0 | **BYTE-EXACT** |

All **19,146 decoded instructions** re-encode to exactly the bytes they were decoded from, with no
gaps in the range. Because the assembler is independent, this rules out the error classes a
disassembler can hide — wrong opcode mapping, wrong operand form, wrong instruction length, or an
off-by-one that would desynchronise everything after it.

Data bytes are emitted as `.db`, so the claim is precise: *every instruction is byte-exact and every
byte of the body is accounted for*.

Reproduce with:

```bash
python3 roundtrip.py
```
