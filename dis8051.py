"""Minimal MCS-51 (8051) disassembler used for the TBT.bin analysis.

Produces (addr, text, length, kind, target) tuples.  kind is one of
'flow' (normal), 'call', 'jmp', 'jcc', 'ret', 'reti', 'trap'(invalid).
"""

SFR = {
    0x80: "P0", 0x81: "SP", 0x82: "DPL", 0x83: "DPH", 0x84: "DPL1", 0x85: "DPH1",
    0x86: "DPS", 0x87: "PCON", 0x88: "TCON", 0x89: "TMOD", 0x8A: "TL0", 0x8B: "TL1",
    0x8C: "TH0", 0x8D: "TH1", 0x8E: "CKCON", 0x8F: "CKRL",
    0x90: "P1", 0x91: "P1DIR", 0x92: "P1AF", 0x93: "P1DS", 0x94: "P1IO",
    0x98: "SCON", 0x99: "SBUF", 0x9A: "SCON1", 0x9B: "SBUF1",
    0xA0: "P2", 0xA1: "P2DIR", 0xA8: "IE", 0xA9: "IE1",
    0xB0: "P3", 0xB1: "P3DIR", 0xB8: "IP", 0xB9: "IP1",
    0xC0: "PSW", 0xC1: "ACON", 0xC8: "T2CON", 0xC9: "T2MOD", 0xCA: "RCAP2L",
    0xCB: "RCAP2H", 0xCC: "TL2", 0xCD: "TH2",
    0xD0: "PSW1", 0xD8: "WDCON", 0xD9: "WDSR",
    0xE0: "ACC", 0xE1: "ACC1", 0xE8: "EIE", 0xE9: "EIP",
    0xF0: "B", 0xF1: "B1", 0xF8: "EIP1",
}

BITNAMES = {
    0x88: "IT0", 0x89: "IE0", 0x8A: "IT1", 0x8B: "IE1", 0x8C: "TR0", 0x8D: "TF0",
    0x8E: "TR1", 0x8F: "TF1",
    0x98: "RI", 0x99: "TI", 0x9A: "RB8", 0x9B: "TB8", 0x9C: "REN", 0x9D: "SM2",
    0x9E: "SM1", 0x9F: "SM0",
    0xA8: "EX0", 0xA9: "ET0", 0xAA: "EX1", 0xAB: "ET1", 0xAC: "ES", 0xAD: "ET2",
    0xAF: "EA",
    0xB8: "PX0", 0xB9: "PT0", 0xBA: "PX1", 0xBB: "PT1", 0xBC: "PS", 0xBD: "PT2",
    0xC0: "P", 0xC1: "F1", 0xC2: "OV", 0xC3: "RS0", 0xC4: "RS1", 0xC5: "F0",
    0xC6: "AC", 0xC7: "CY",
    0xD8: "WDIF", 0xD9: "WTRF", 0xDA: "EWT", 0xDB: "RWT", 0xDC: "WD1", 0xDD: "WD0",
    0xDE: "WD2", 0xDF: "WD3",
    0xF8: "PX2", 0xF9: "PT2b",
}

RN = ["R0", "R1", "R2", "R3", "R4", "R5", "R6", "R7"]


def _direct(v):
    if v in SFR:
        return "%s(0x%02X)" % (SFR[v], v)
    return "0x%02X" % v


def _bit(v):
    """Render a bit address (bit 0-0x7F of 0x20-0x2F RAM, else SFR bits)."""
    if 0x20 <= v <= 0x2F:
        return "0x%02X.%d" % (v & 0xF8, v & 7)
    byte, bit = v & 0xF8, v & 7
    if byte in SFR:
        name = SFR[byte]
        bn = BITNAMES.get(v)
        return "%s.%d%s" % (name, bit, ("/" + bn) if bn else "")
    return "bit 0x%02X" % v


def _rel(addr, n, b):
    t = addr + n + (b - 256 if b > 127 else b)
    return t & 0xFFFF


def decode(d, addr):
    """d: bytes, addr: address of first byte. returns (text, length, kind, target)."""
    op = d[0]
    n1 = d[1] if len(d) > 1 else 0
    n2 = d[2] if len(d) > 2 else 0

    def T(s):
        return (s, 1, "flow", None)

    # --- generic groups -------------------------------------------------
    if op == 0x00:
        return T("NOP")
    if op == 0xA5:
        return ("DB 0xA5 (reserved)", 1, "trap", None)
    if op == 0x22:
        return ("RET", 1, "ret", None)
    if op == 0x32:
        return ("RETI", 1, "reti", None)
    if op in (0x03, 0x13, 0x23, 0x33, 0x73, 0x83, 0x93, 0xA3, 0xB3, 0xC3, 0xD3, 0xE3, 0xF3):
        return T({
            0x03: "RR A", 0x13: "RRC A", 0x23: "RL A", 0x33: "RLC A", 0x73: "JMP @A+DPTR",
            0x83: "MOVC A,@A+PC", 0x93: "MOVC A,@A+DPTR", 0xA3: "INC DPTR",
            0xB3: "CPL C", 0xC3: "CLR C", 0xD3: "SETB C", 0xE3: "MOVX A,@R1",
            0xF3: "MOVX @R1,A",
        }[op])
    if op == 0x84:
        return T("DIV AB")
    if op == 0xA4:
        return T("MUL AB")
    if op == 0xC4:
        return T("SWAP A")
    if op == 0xD4:
        return T("DA A")
    if op == 0xE4:
        return T("CLR A")
    if op == 0xF4:
        return T("CPL A")
    if op == 0xE0:
        return T("MOVX A,@DPTR")
    if op == 0xF0:
        return T("MOVX @DPTR,A")
    if op == 0xE2:
        return T("MOVX A,@R0")
    if op == 0xE3:
        return T("MOVX A,@R1")
    if op == 0xF2:
        return T("MOVX @R0,A")
    if op == 0xF3:
        return T("MOVX @R1,A")
    if op in (0x02, 0x12):
        tgt = (n1 << 8) | n2
        return ("%s 0x%04X" % ("LJMP" if op == 0x02 else "LCALL", tgt), 3,
                "jmp" if op == 0x02 else "call", tgt)
    if op in (0x01, 0x21, 0x41, 0x61, 0x81, 0xA1, 0xC1, 0xE1,
              0x11, 0x31, 0x51, 0x71, 0x91, 0xB1, 0xD1, 0xF1):
        tgt = ((addr + 2) & 0xF800) | ((op & 0xE0) << 3) | n1
        iscall = (op & 0x1F) == 0x11
        return ("%s 0x%04X" % ("ACALL" if iscall else "AJMP", tgt), 2,
                "call" if iscall else "jmp", tgt)
    if op == 0x80:
        t = _rel(addr, 2, n1)
        return ("SJMP 0x%04X" % t, 2, "jmp", t)
    if op in (0x40, 0x50, 0x60, 0x70, 0xB4, 0xB5):
        pass

    # --- arithmetic / logic by mask -------------------------------------
    hi = op & 0xF8
    rn = op & 0x07
    if hi == 0x08:
        return T("INC %s" % RN[rn])
    if hi == 0x18:
        return T("DEC %s" % RN[rn])
    if hi == 0x28:
        return T("ADD A,%s" % RN[rn])
    if hi == 0x38:
        return T("ADDC A,%s" % RN[rn])
    if hi == 0x48:
        return T("ORL A,%s" % RN[rn])
    if hi == 0x58:
        return T("ANL A,%s" % RN[rn])
    if hi == 0x68:
        return T("XRL A,%s" % RN[rn])
    if hi == 0x78:
        return ("MOV %s,#0x%02X" % (RN[rn], n1), 2, "flow", None)
    if hi == 0x88:
        return ("MOV 0x%02X,%s" % (n1, RN[rn]), 2, "flow", None)
    if hi == 0x98:
        return T("SUBB A,%s" % RN[rn])
    if hi == 0xA8:
        return ("MOV %s,0x%02X" % (RN[rn], n1), 2, "flow", None)
    if hi == 0xB8:
        t = _rel(addr, 3, n2)
        return ("CJNE %s,#0x%02X,0x%04X" % (RN[rn], n1, t), 3, "jcc", t)
    if hi == 0xC8:
        return ("XCH A,%s" % RN[rn], 1, "flow", None)
    if hi == 0xD8:
        t = _rel(addr, 2, n1)
        return ("DJNZ %s,0x%04X" % (RN[rn], t), 2, "jcc", t)
    if hi == 0xE8:
        return T("MOV A,%s" % RN[rn])
    if hi == 0xF8:
        return T("MOV %s,A" % RN[rn])

    # --- two/three byte singles -----------------------------------------
    table = {
        0x04: ("INC A", 1), 0x05: ("INC " + _direct(n1), 2), 0x06: ("INC @R0", 1),
        0x07: ("INC @R1", 1), 0x14: ("DEC A", 1), 0x15: ("DEC " + _direct(n1), 2),
        0x16: ("DEC @R0", 1), 0x17: ("DEC @R1", 1),
        0x24: ("ADD A,#0x%02X" % n1, 2), 0x25: ("ADD A," + _direct(n1), 2),
        0x26: ("ADD A,@R0", 1), 0x27: ("ADD A,@R1", 1),
        0x34: ("ADDC A,#0x%02X" % n1, 2), 0x35: ("ADDC A," + _direct(n1), 2),
        0x36: ("ADDC A,@R0", 1), 0x37: ("ADDC A,@R1", 1),
        0x42: ("ORL " + _direct(n1) + ",A", 2), 0x43: ("ORL " + _direct(n1) + ",#0x%02X" % n2, 3),
        0x44: ("ORL A,#0x%02X" % n1, 2), 0x45: ("ORL A," + _direct(n1), 2),
        0x46: ("ORL A,@R0", 1), 0x47: ("ORL A,@R1", 1),
        0x52: ("ANL " + _direct(n1) + ",A", 2), 0x53: ("ANL " + _direct(n1) + ",#0x%02X" % n2, 3),
        0x54: ("ANL A,#0x%02X" % n1, 2), 0x55: ("ANL A," + _direct(n1), 2),
        0x56: ("ANL A,@R0", 1), 0x57: ("ANL A,@R1", 1),
        0x62: ("XRL " + _direct(n1) + ",A", 2), 0x63: ("XRL " + _direct(n1) + ",#0x%02X" % n2, 3),
        0x64: ("XRL A,#0x%02X" % n1, 2), 0x65: ("XRL A," + _direct(n1), 2),
        0x66: ("XRL A,@R0", 1), 0x67: ("XRL A,@R1", 1),
        0x72: ("ORL C," + _bit(n1), 2), 0x82: ("ANL C," + _bit(n1), 2),
        0x74: ("MOV A,#0x%02X" % n1, 2),
        0x75: ("MOV " + _direct(n1) + ",#0x%02X" % n2, 3),
        0x76: ("MOV @R0,#0x%02X" % n1, 2), 0x77: ("MOV @R1,#0x%02X" % n1, 2),
        0x85: ("MOV " + _direct(n2) + "," + _direct(n1), 3),
        0x86: ("MOV " + _direct(n1) + ",@R0", 2), 0x87: ("MOV " + _direct(n1) + ",@R1", 2),
        0x90: ("MOV DPTR,#0x%04X" % ((n1 << 8) | n2), 3),
        0x92: ("MOV " + _bit(n1) + ",C", 2),
        0x94: ("SUBB A,#0x%02X" % n1, 2), 0x95: ("SUBB A," + _direct(n1), 2),
        0x96: ("SUBB A,@R0", 1), 0x97: ("SUBB A,@R1", 1),
        0xA0: ("ORL C,/" + _bit(n1), 2), 0xA2: ("MOV C," + _bit(n1), 2),
        0xA6: ("MOV @R0," + _direct(n1), 2), 0xA7: ("MOV @R1," + _direct(n1), 2),
        0xB0: ("ANL C,/" + _bit(n1), 2), 0xB2: ("CPL " + _bit(n1), 2),
        0xC0: ("PUSH " + _direct(n1), 2), 0xC2: ("CLR " + _bit(n1), 2),
        0xC5: ("XCH A," + _direct(n1), 2), 0xC6: ("XCH A,@R0", 1), 0xC7: ("XCH A,@R1", 1),
        0xD0: ("POP " + _direct(n1), 2), 0xD2: ("SETB " + _bit(n1), 2),
        0xD6: ("XCHD A,@R0", 1), 0xD7: ("XCHD A,@R1", 1),
        0xE5: ("MOV A," + _direct(n1), 2), 0xE6: ("MOV A,@R0", 1), 0xE7: ("MOV A,@R1", 1),
        0xF5: ("MOV " + _direct(n1) + ",A", 2), 0xF6: ("MOV @R0,A", 1), 0xF7: ("MOV @R1,A", 1),
    }
    if op == 0x10:
        t = _rel(addr, 3, n2)
        return ("JBC %s,0x%04X" % (_bit(n1), t), 3, "jcc", t)
    if op == 0x20:
        t = _rel(addr, 3, n2)
        return ("JB %s,0x%04X" % (_bit(n1), t), 3, "jcc", t)
    if op == 0x30:
        t = _rel(addr, 3, n2)
        return ("JNB %s,0x%04X" % (_bit(n1), t), 3, "jcc", t)
    if op == 0x40:
        t = _rel(addr, 2, n1)
        return ("JC 0x%04X" % t, 2, "jcc", t)
    if op == 0x50:
        t = _rel(addr, 2, n1)
        return ("JNC 0x%04X" % t, 2, "jcc", t)
    if op == 0x60:
        t = _rel(addr, 2, n1)
        return ("JZ 0x%04X" % t, 2, "jcc", t)
    if op == 0x70:
        t = _rel(addr, 2, n1)
        return ("JNZ 0x%04X" % t, 2, "jcc", t)
    if op == 0xB4:
        t = _rel(addr, 3, n2)
        return ("CJNE A,#0x%02X,0x%04X" % (n1, t), 3, "jcc", t)
    if op == 0xB5:
        t = _rel(addr, 3, n2)
        return ("CJNE A," + _direct(n1) + ",0x%04X" % t, 3, "jcc", t)
    if op == 0xB6:
        t = _rel(addr, 3, n2)
        return ("CJNE @R0,#0x%02X,0x%04X" % (n1, t), 3, "jcc", t)
    if op == 0xB7:
        t = _rel(addr, 3, n2)
        return ("CJNE @R1,#0x%02X,0x%04X" % (n1, t), 3, "jcc", t)
    if op == 0xD5:
        t = _rel(addr, 3, n2)
        return ("DJNZ " + _direct(n1) + ",0x%04X" % t, 3, "jcc", t)
    if op in table:
        txt, ln = table[op]
        return (txt, ln, "flow", None)
    return ("DB 0x%02X" % op, 1, "trap", None)
