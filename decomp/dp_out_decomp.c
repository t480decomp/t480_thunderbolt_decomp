/* Decompiled 8051 firmware image: dp_out_u_code.bin */
/* language 8051:BE:16:default */
/* NOTE: named registers are INFERRED from access patterns; the address is authoritative. */

/* =========================================================
 * CODE:0200  thunk_FUN_CODE_0208  size=3
 * ========================================================= */

/* WARNING: Removing unreachable block (CODE,0x021c) */
/* WARNING: Removing unreachable block (CODE,0x0226) */
/* WARNING: Removing unreachable block (CODE,0x022e) */
/* WARNING: Removing unreachable block (CODE,0x0230) */
/* WARNING: Removing unreachable block (CODE,0x0232) */
/* WARNING: Removing unreachable block (CODE,0x0234) */

void thunk_FUN_CODE_0208(char param_1)

{
  SP = 0x92;
  FUN_CODE_3ef1();
  if (param_1 == '\0') {
    DAT_INTMEM_83 = 0;
    DAT_INTMEM_84 = 0;
    DAT_INTMEM_85 = 0;
    DAT_INTMEM_86 = 0;
    DAT_EXTMEM_0120 = 0;
    DAT_EXTMEM_4fb4 = 0;
    DAT_EXTMEM_4fb5 = 0;
    DAT_EXTMEM_4fb6 = 0;
    DAT_EXTMEM_4fb7 = 0;
    DAT_EXTMEM_4fb8 = 0;
    DAT_EXTMEM_4fb9 = 0;
    DAT_EXTMEM_4fba = 0;
    DAT_EXTMEM_4fbb = 0;
    DAT_EXTMEM_4fbf = 0;
    FUN_CODE_0203();
    return;
  }
  FUN_CODE_0203();
  return;
}



/* =========================================================
 * CODE:0203  FUN_CODE_0203  size=5
 * callers: CODE:0208
 * ========================================================= */

void FUN_CODE_0203(void)

{
  thunk_FUN_CODE_2a03();
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* =========================================================
 * CODE:0208  FUN_CODE_0208  size=104
 * ========================================================= */

/* WARNING: Removing unreachable block (CODE,0x021c) */
/* WARNING: Removing unreachable block (CODE,0x0226) */
/* WARNING: Removing unreachable block (CODE,0x022e) */
/* WARNING: Removing unreachable block (CODE,0x0230) */
/* WARNING: Removing unreachable block (CODE,0x0232) */
/* WARNING: Removing unreachable block (CODE,0x0234) */

void FUN_CODE_0208(char param_1)

{
  SP = 0x92;
  FUN_CODE_3ef1();
  if (param_1 == '\0') {
    DAT_INTMEM_83 = 0;
    DAT_INTMEM_84 = 0;
    DAT_INTMEM_85 = 0;
    DAT_INTMEM_86 = 0;
    DAT_EXTMEM_0120 = 0;
    DAT_EXTMEM_4fb4 = 0;
    DAT_EXTMEM_4fb5 = 0;
    DAT_EXTMEM_4fb6 = 0;
    DAT_EXTMEM_4fb7 = 0;
    DAT_EXTMEM_4fb8 = 0;
    DAT_EXTMEM_4fb9 = 0;
    DAT_EXTMEM_4fba = 0;
    DAT_EXTMEM_4fbb = 0;
    DAT_EXTMEM_4fbf = 0;
    FUN_CODE_0203();
    return;
  }
  FUN_CODE_0203();
  return;
}



/* =========================================================
 * CODE:0270  FUN_CODE_0270  size=14
 * callers: CODE:2332, CODE:395b, CODE:2519, CODE:2a03, CODE:3677, CODE:18c4, CODE:24c4, CODE:1a8b, CODE:2687, CODE:378a, CODE:039f, CODE:2832, CODE:2972, CODE:0f3d, CODE:17f4, CODE:37f0
 * ========================================================= */

void FUN_CODE_0270(char param_1)

{
  bool bVar1;
  char cVar2;
  
  if ((DAT_INTMEM_7a & bCODE004b) == 0) {
    return;
  }
  if ((param_1 == '\0') && (DAT_EXTMEM_c851 == DAT_INTMEM_7b)) {
    return;
  }
  DAT_EXTMEM_c851 = DAT_INTMEM_7b;
  if ((bCODE0048 & 1) != 0) {
    if ((bCODE0049 & 1) == 1) {
      bVar1 = 0xd8 < bEXTMEM0125;
      cVar2 = bEXTMEM0125 + 0x27;
      bEXTMEM0125 = bEXTMEM0125 + 1;
      *(char *)CONCAT11('\x01' - ((bVar1 << 7) >> 7),cVar2) = DAT_INTMEM_7b;
      bEXTMEM0125 = bEXTMEM0125 & 0x7f;
    }
    else if (bEXTMEM0125 < 0x80) {
      bVar1 = 0xd8 < bEXTMEM0125;
      cVar2 = bEXTMEM0125 + 0x27;
      bEXTMEM0125 = bEXTMEM0125 + 1;
      *(char *)CONCAT11('\x01' - ((bVar1 << 7) >> 7),cVar2) = DAT_INTMEM_7b;
      return;
    }
  }
  return;
}



/* =========================================================
 * CODE:027e  FUN_CODE_027e  size=12
 * ========================================================= */

void FUN_CODE_027e(char param_1)

{
  bool bVar1;
  char cVar2;
  
  if ((param_1 == '\0') && (DAT_EXTMEM_c851 == DAT_INTMEM_7b)) {
    return;
  }
  DAT_EXTMEM_c851 = DAT_INTMEM_7b;
  if ((bCODE0048 & 1) != 0) {
    if ((bCODE0049 & 1) == 1) {
      bVar1 = 0xd8 < bEXTMEM0125;
      cVar2 = bEXTMEM0125 + 0x27;
      bEXTMEM0125 = bEXTMEM0125 + 1;
      *(char *)CONCAT11('\x01' - ((bVar1 << 7) >> 7),cVar2) = DAT_INTMEM_7b;
      bEXTMEM0125 = bEXTMEM0125 & 0x7f;
    }
    else if (bEXTMEM0125 < 0x80) {
      bVar1 = 0xd8 < bEXTMEM0125;
      cVar2 = bEXTMEM0125 + 0x27;
      bEXTMEM0125 = bEXTMEM0125 + 1;
      *(char *)CONCAT11('\x01' - ((bVar1 << 7) >> 7),cVar2) = DAT_INTMEM_7b;
      return;
    }
  }
  return;
}



/* =========================================================
 * CODE:028a  FUN_CODE_028a  size=64
 * ========================================================= */

void FUN_CODE_028a(void)

{
  bool bVar1;
  char cVar2;
  
  DAT_EXTMEM_c851 = DAT_INTMEM_7b;
  if ((bCODE0048 & 1) != 0) {
    if ((bCODE0049 & 1) == 1) {
      bVar1 = 0xd8 < bEXTMEM0125;
      cVar2 = bEXTMEM0125 + 0x27;
      bEXTMEM0125 = bEXTMEM0125 + 1;
      *(undefined1 *)CONCAT11('\x01' - ((bVar1 << 7) >> 7),cVar2) = DAT_INTMEM_7b;
      bEXTMEM0125 = bEXTMEM0125 & 0x7f;
    }
    else if (bEXTMEM0125 < 0x80) {
      bVar1 = 0xd8 < bEXTMEM0125;
      cVar2 = bEXTMEM0125 + 0x27;
      bEXTMEM0125 = bEXTMEM0125 + 1;
      *(undefined1 *)CONCAT11('\x01' - ((bVar1 << 7) >> 7),cVar2) = DAT_INTMEM_7b;
      return;
    }
  }
  return;
}



/* =========================================================
 * CODE:02ca  FUN_CODE_02ca  size=39
 * ========================================================= */

void FUN_CODE_02ca(void)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = 0xd8 < bEXTMEM0125;
  cVar2 = bEXTMEM0125 + 0x27;
  bEXTMEM0125 = bEXTMEM0125 + 1;
  *(undefined1 *)CONCAT11('\x01' - ((bVar1 << 7) >> 7),cVar2) = DAT_EXTMEM_c851;
  bEXTMEM0125 = bEXTMEM0125 & 0x7f;
  return;
}



/* =========================================================
 * CODE:02f1  FUN_CODE_02f1  size=53
 * callers: CODE:1b72
 * ========================================================= */

void FUN_CODE_02f1(char param_1,undefined1 param_2,char param_3)

{
  char cVar1;
  undefined1 uVar2;
  short sVar3;
  
  sVar3 = CONCAT11(DAT_INTMEM_7b,DAT_INTMEM_7a);
  BANK0_R1 = DAT_INTMEM_7d;
  uVar2 = DAT_INTMEM_7c;
  while( true ) {
    cVar1 = BANK0_R1 + -1;
    if (param_3 == '\0') break;
    param_3 = FUN_CODE_3ed5(sVar3,uVar2,param_1);
    sVar3 = sVar3 + 1;
    FUN_CODE_3ebc(param_3,param_2);
    param_1 = param_1 + '\x01';
    BANK0_R1 = cVar1;
  }
  return;
}



/* =========================================================
 * CODE:0326  FUN_CODE_0326  size=118
 * callers: CODE:395b, CODE:2a03
 * ========================================================= */

void FUN_CODE_0326(void)

{
  DAT_EXTMEM_4fb4 = 0;
  DAT_EXTMEM_4fb5 = 2;
  if (DAT_EXTMEM_0120 == '\0') {
    DAT_EXTMEM_4fb6 = 0xff;
  }
  else {
    DAT_EXTMEM_4fb6 = 0;
  }
  DAT_EXTMEM_4fb9 = 0;
  DAT_EXTMEM_4fb8 = 0;
  DAT_EXTMEM_4fb7 = 0;
  DAT_EXTMEM_4fea = DAT_EXTMEM_c801 & 0x3f;
  if (DAT_EXTMEM_4fea != 5) {
    if (DAT_EXTMEM_4fea == 8) {
      DAT_EXTMEM_4fba = 0xc6;
      DAT_EXTMEM_4fbb = 1;
      thunk_FUN_CODE_039f();
      return;
    }
    if (DAT_EXTMEM_4fea != 9) {
      if (DAT_EXTMEM_4fea != 10) {
        return;
      }
      DAT_EXTMEM_4fba = 0xd0;
      DAT_EXTMEM_4fbb = 2;
      thunk_FUN_CODE_039f();
      return;
    }
  }
  DAT_EXTMEM_4fba = 0xd0;
  DAT_EXTMEM_4fbb = 1;
  thunk_FUN_CODE_039f();
  return;
}



/* =========================================================
 * CODE:039c  thunk_FUN_CODE_039f  size=3
 * callers: CODE:0326
 * ========================================================= */

/* WARNING: Removing unreachable block (CODE,0x042c) */

void thunk_FUN_CODE_039f(ushort param_1)

{
  DAT_INTMEM_7a = 0x20;
  DAT_INTMEM_7b = 0x26;
  FUN_CODE_0270(param_1 & 0xff00);
  do {
  } while( true );
}



/* =========================================================
 * CODE:039f  FUN_CODE_039f  size=153
 * ========================================================= */

/* WARNING: Removing unreachable block (CODE,0x042c) */

void FUN_CODE_039f(ushort param_1)

{
  DAT_INTMEM_7a = 0x20;
  DAT_INTMEM_7b = 0x26;
  FUN_CODE_0270(param_1 & 0xff00);
  do {
  } while( true );
}



/* =========================================================
 * CODE:0438  FUN_CODE_0438  size=31
 * callers: CODE:1aa9
 * ========================================================= */

void FUN_CODE_0438(char *param_1,char param_2)

{
  char cVar1;
  
  cVar1 = DAT_INTMEM_7b;
  while( true ) {
    BANK0_R5 = cVar1;
    cVar1 = cVar1 + -1;
    if (param_2 == '\0') break;
    *param_1 = param_2;
    param_1 = param_1 + 1;
  }
  return;
}



/* =========================================================
 * CODE:0478  FUN_CODE_0478  size=95
 * callers: CODE:2a03
 * ========================================================= */

/* WARNING: Removing unreachable block (CODE,0x04b9) */
/* WARNING: Removing unreachable block (CODE,0x04a8) */
/* WARNING: Removing unreachable block (CODE,0x04ca) */

void FUN_CODE_0478(void)

{
  BANK0_R2 = BANK0_R2 & 0x10;
  if (cEXTMEMd66e == '\x10') {
    DAT_EXTMEM_4fd1 = 0;
    DAT_EXTMEM_4fd2 = 0;
    uEXTMEM4fcf = 0;
    uEXTMEM4fc3 = 0;
    uEXTMEM4fb2 = 0;
    BANK0_R2 = 0;
    DAT_EXTMEM_4fc0 = 0;
    uEXTMEMd431 = 0xf;
  }
  return;
}



/* =========================================================
 * CODE:04d7  FUN_CODE_04d7  size=68
 * callers: CODE:0b53
 * ========================================================= */

void FUN_CODE_04d7(void)

{
  uEXTMEM4fc4 = 0;
  uEXTMEM4fc5 = 0;
  uEXTMEM4fc6 = 0;
  uEXTMEM4fc7 = 0;
  uEXTMEM4fc8 = 0;
  DAT_EXTMEM_4faf = 0;
  DAT_EXTMEM_4fb0 = 0;
  DAT_EXTMEM_4fc9 = 0;
  uEXTMEM4fca = 0;
  uEXTMEM4fb3 = 0;
  uEXTMEM4fcc = 0;
  DAT_EXTMEM_4fcd = 0;
  DAT_EXTMEM_4fce = 0;
  uEXTMEM4fc1 = 0;
  DAT_EXTMEM_4fc2 = 0;
  uEXTMEM4fcb = 0;
  return;
}



/* =========================================================
 * CODE:051b  FUN_CODE_051b  size=10
 * callers: CODE:0d30, CODE:0d4e, CODE:0b63
 * ========================================================= */

void FUN_CODE_051b(void)

{
  uEXTMEM4fc5 = 0;
  uEXTMEM4fc7 = 0;
  return;
}



/* =========================================================
 * CODE:0525  FUN_CODE_0525  size=145
 * callers: CODE:0d78, CODE:0b6d, CODE:0d40
 * ========================================================= */

void FUN_CODE_0525(void)

{
  FUN_CODE_1da2(2);
  if ((bEXTMEMd409 & 2) == 2) {
    DAT_EXTMEM_4fd3 = 1;
    uEXTMEM4fc6 = 1;
    bEXTMEM4fc7 = 1;
    bEXTMEM4fd0 = bEXTMEMd409 & 1;
  }
  else {
    if (bEXTMEM4fd0 == 1) {
      bEXTMEM4fd0 = 0;
      bEXTMEM4fc5 = 1;
    }
    bEXTMEM4fc5 = bEXTMEM4fc5 | bEXTMEMd409 & 1;
    bEXTMEM4fc7 = bEXTMEM4fc7 | (bEXTMEMd409 & 4) >> 2;
  }
  if ((char)((bEXTMEMd408 & 8) << 4) < '\0') {
    DAT_EXTMEM_4fd3 = 1;
    bEXTMEM4fc4 = (bEXTMEMd407 & 0x40) >> 6;
    bEXTMEM4fc7 = bEXTMEM4fc7 | (bEXTMEMd409 & 4) >> 2;
  }
  return;
}



/* =========================================================
 * CODE:05b6  FUN_CODE_05b6  size=659
 * callers: CODE:0bd2, CODE:0bb1
 * ========================================================= */

void FUN_CODE_05b6(void)

{
  if (cEXTMEM4fc8 == '\0') {
    if (cEXTMEM4fb2 == '\x01') {
      if (bEXTMEMd403 == 2 || bEXTMEMd403 == 0) {
        cEXTMEM4fcc = '\x01';
      }
      else {
        bEXTMEM4fb3 = bEXTMEMd403 & 1;
        DAT_EXTMEM_4fcd = (bEXTMEMd403 & 4) >> 2;
        DAT_EXTMEM_4fce = (bEXTMEMd403 & 8) >> 3;
      }
    }
    else {
      DAT_EXTMEM_4fce = 0;
      DAT_EXTMEM_4fcd = 0;
      cEXTMEM4fc1 = '\0';
      DAT_EXTMEM_4fc2 = '\0';
      if ((cEXTMEMd40a == -0x80) || (cEXTMEMd40a == -0x7f)) {
        DAT_EXTMEM_4fce = 1;
        cEXTMEMd45e = cEXTMEMd45e + '\x01';
      }
      else if ((cEXTMEMd40a == -0x60) || (cEXTMEMd40a == -0x5f)) {
        cEXTMEM4fcc = '\x01';
        cEXTMEMd45f = cEXTMEMd45f + '\x01';
      }
      else if ((cEXTMEMd40a == 't') || (cEXTMEMd40a == 'u')) {
        DAT_EXTMEM_4fcd = 1;
        cEXTMEMd460 = cEXTMEMd460 + '\x01';
      }
      else if ((cEXTMEMd40a == -0x58) || (cEXTMEMd40a == -0x57)) {
        cEXTMEMd461 = cEXTMEMd461 + '\x01';
      }
      else if (cEXTMEMd40a == '`') {
        cEXTMEM4fcc = '\x01';
        cEXTMEMd462 = cEXTMEMd462 + '\x01';
      }
      else {
        cEXTMEMd463 = cEXTMEMd463 + '\x01';
        cEXTMEMd464 = cEXTMEMd40a;
      }
    }
  }
  cEXTMEMd448 = cEXTMEMd40a;
  if (cEXTMEM4fb2 == '\x01') {
    cEXTMEMd448 = cEXTMEMd405;
    if (cEXTMEM4fcc == '\x01') {
      if (cEXTMEM4fc8 == '\0') {
        if (cEXTMEM4fc4 == '\x01') {
          cEXTMEMd448 = -0x5f;
        }
        else {
          cEXTMEMd448 = -0x60;
        }
      }
      else if ((cEXTMEM4fc8 != '\x01') && (cEXTMEMd448 = cEXTMEMd40b, cEXTMEM4fc8 == '\x02')) {
        cEXTMEMd448 = -0x5f;
      }
    }
    else if (DAT_EXTMEM_4fcd == 1) {
      if (cEXTMEM4fc8 == '\0') {
        if (cEXTMEM4fc4 == '\x01') {
          cEXTMEMd448 = 'u';
        }
        else {
          cEXTMEMd448 = 't';
        }
      }
      else if (((cEXTMEM4fc8 != '\x01') && (cEXTMEMd448 = cEXTMEMd40a, cEXTMEM4fc8 == '\x02')) &&
              (cEXTMEMd448 = cEXTMEMd40a, cEXTMEM4fc4 == '\x01')) {
        cEXTMEMd448 = 'u';
      }
    }
    else if (DAT_EXTMEM_4fce == 1) {
      if (cEXTMEM4fc8 == '\0') {
        if (cEXTMEM4fc4 == '\x01') {
          cEXTMEMd448 = -0x7f;
        }
        else {
          cEXTMEMd448 = -0x80;
        }
      }
      else if (cEXTMEM4fc8 == '\x01') {
        cEXTMEM4fc1 = cEXTMEMd405;
      }
      else {
        cEXTMEMd448 = cEXTMEMd40a;
        if ((cEXTMEM4fc8 == '\x02') && (cEXTMEMd448 = cEXTMEMd40a, cEXTMEM4fc4 == '\x01')) {
          cEXTMEMd448 = -0x7f;
        }
      }
    }
    else {
      cEXTMEMd448 = cEXTMEMd40b;
      if (bEXTMEM4fb3 == 1) {
        if (cEXTMEM4fc8 == '\0') {
          if (cEXTMEM4fc4 == '\x01') {
            cEXTMEMd448 = -0x57;
          }
          else {
            cEXTMEMd448 = -0x58;
          }
        }
        else {
          cEXTMEMd448 = cEXTMEMd405;
          if (((cEXTMEM4fc8 != '\x01') && (cEXTMEMd448 = cEXTMEMd40a, cEXTMEM4fc8 == '\x02')) &&
             (cEXTMEMd448 = cEXTMEMd40a, cEXTMEM4fc4 == '\x01')) {
            cEXTMEMd448 = -0x57;
          }
        }
      }
    }
  }
  if ((DAT_EXTMEM_4fce == 1) && (cEXTMEM4fc8 == '\x01')) {
    uEXTMEMd468 = DAT_EXTMEM_4faf;
    cEXTMEM4fc1 = cEXTMEMd448;
    cEXTMEMd467 = cEXTMEMd448;
  }
  if ((DAT_EXTMEM_4fcd == 1) && (cEXTMEM4fc8 == '\x01')) {
    DAT_EXTMEM_4fc2 = cEXTMEMd448;
  }
  if (cEXTMEM4fc5 == '\x01') {
    BANK0_R2 = BANK0_R2 & 0xfb;
  }
  bEXTMEMd433 = cEXTMEM4fc5 * '\x04' | 0x11;
  return;
}



/* =========================================================
 * CODE:0849  FUN_CODE_0849  size=26
 * callers: CODE:0bf4, CODE:0de2
 * ========================================================= */

void FUN_CODE_0849(void)

{
  if (cEXTMEMd433 == '\0') {
    DAT_EXTMEM_4fd3 = 1;
    bEXTMEM4fcb = (bEXTMEMd40b & 2) >> 1;
  }
  return;
}



/* =========================================================
 * CODE:0863  FUN_CODE_0863  size=11
 * callers: CODE:0d86, CODE:0ba7, CODE:0dbb
 * ========================================================= */

void FUN_CODE_0863(void)

{
  uEXTMEMd433 = 8;
  return;
}



/* =========================================================
 * CODE:086e  FUN_CODE_086e  size=13
 * callers: CODE:0dca, CODE:0bdc
 * ========================================================= */

void FUN_CODE_086e(void)

{
  if (cEXTMEMd433 == '\0') {
    DAT_EXTMEM_4fd3 = 1;
  }
  return;
}



/* =========================================================
 * CODE:087b  FUN_CODE_087b  size=18
 * callers: CODE:0d9d, CODE:0c0e
 * ========================================================= */

void FUN_CODE_087b(void)

{
  BANK0_R2 = BANK0_R2 | 2;
  uEXTMEMd433 = uEXTMEM4fca;
  return;
}



/* =========================================================
 * CODE:088d  FUN_CODE_088d  size=7
 * callers: CODE:0dad, CODE:0cf4
 * ========================================================= */

void FUN_CODE_088d(void)

{
  if (cEXTMEMd433 != '\0') {
    return;
  }
  DAT_EXTMEM_4fd3 = 1;
  if (DAT_EXTMEM_4fc0 != '\0' && DAT_EXTMEM_4fce != '\0') {
    FUN_CODE_095c(DAT_EXTMEM_4fc0 == '\0');
    return;
  }
  DAT_EXTMEM_4fc9 = DAT_EXTMEM_d40d;
  if (DAT_EXTMEM_4fcd == '\0') {
    return;
  }
  if ((DAT_EXTMEM_4fc2 + DAT_EXTMEM_4faf == 'A') &&
     (DAT_EXTMEM_4fb0 == (CARRY1(DAT_EXTMEM_4fc2,DAT_EXTMEM_4faf) << 7) >> 7)) {
    uEXTMEM4fcf = DAT_EXTMEM_d40d;
    uEXTMEMd466 = DAT_EXTMEM_d40d;
    return;
  }
  if ((DAT_EXTMEM_4fc2 + DAT_EXTMEM_4faf == 'p') &&
     (DAT_EXTMEM_4fb0 == (CARRY1(DAT_EXTMEM_4fc2,DAT_EXTMEM_4faf) << 7) >> 7)) {
    uEXTMEM4fbc = DAT_EXTMEM_d40d;
    uEXTMEM4fbd = 0;
    return;
  }
  if ((DAT_EXTMEM_4fc2 + DAT_EXTMEM_4faf == 'q') &&
     (DAT_EXTMEM_4fb0 == (CARRY1(DAT_EXTMEM_4fc2,DAT_EXTMEM_4faf) << 7) >> 7)) {
    FUN_CODE_093e();
    return;
  }
  return;
}



/* =========================================================
 * CODE:0894  FUN_CODE_0894  size=50
 * ========================================================= */

void FUN_CODE_0894(void)

{
  DAT_EXTMEM_4fd3 = 1;
  if (DAT_EXTMEM_4fc0 != '\0' && DAT_EXTMEM_4fce != '\0') {
    FUN_CODE_095c(DAT_EXTMEM_4fc0 == '\0');
    return;
  }
  DAT_EXTMEM_4fc9 = DAT_EXTMEM_d40d;
  if (DAT_EXTMEM_4fcd == '\0') {
    return;
  }
  if ((DAT_EXTMEM_4fc2 + DAT_EXTMEM_4faf == 'A') &&
     (DAT_EXTMEM_4fb0 == (CARRY1(DAT_EXTMEM_4fc2,DAT_EXTMEM_4faf) << 7) >> 7)) {
    uEXTMEM4fcf = DAT_EXTMEM_d40d;
    uEXTMEMd466 = DAT_EXTMEM_d40d;
    return;
  }
  if ((DAT_EXTMEM_4fc2 + DAT_EXTMEM_4faf == 'p') &&
     (DAT_EXTMEM_4fb0 == (CARRY1(DAT_EXTMEM_4fc2,DAT_EXTMEM_4faf) << 7) >> 7)) {
    uEXTMEM4fbc = DAT_EXTMEM_d40d;
    uEXTMEM4fbd = 0;
    return;
  }
  if ((DAT_EXTMEM_4fc2 + DAT_EXTMEM_4faf == 'q') &&
     (DAT_EXTMEM_4fb0 == (CARRY1(DAT_EXTMEM_4fc2,DAT_EXTMEM_4faf) << 7) >> 7)) {
    FUN_CODE_093e();
    return;
  }
  return;
}



/* =========================================================
 * CODE:08c6  FUN_CODE_08c6  size=44
 * ========================================================= */

void FUN_CODE_08c6(void)

{
  if ((DAT_EXTMEM_4fc2 + DAT_EXTMEM_4faf == 'A') &&
     (DAT_EXTMEM_4fb0 == (CARRY1(DAT_EXTMEM_4fc2,DAT_EXTMEM_4faf) << 7) >> 7)) {
    uEXTMEM4fcf = DAT_EXTMEM_4fc9;
    uEXTMEMd466 = DAT_EXTMEM_4fc9;
    return;
  }
  if ((DAT_EXTMEM_4fc2 + DAT_EXTMEM_4faf == 'p') &&
     (DAT_EXTMEM_4fb0 == (CARRY1(DAT_EXTMEM_4fc2,DAT_EXTMEM_4faf) << 7) >> 7)) {
    uEXTMEM4fbc = DAT_EXTMEM_4fc9;
    uEXTMEM4fbd = 0;
    return;
  }
  if ((DAT_EXTMEM_4fc2 + DAT_EXTMEM_4faf == 'q') &&
     (DAT_EXTMEM_4fb0 == (CARRY1(DAT_EXTMEM_4fc2,DAT_EXTMEM_4faf) << 7) >> 7)) {
    FUN_CODE_093e();
    return;
  }
  return;
}



/* =========================================================
 * CODE:08f2  FUN_CODE_08f2  size=46
 * ========================================================= */

void FUN_CODE_08f2(void)

{
  if ((DAT_EXTMEM_4fc2 + DAT_EXTMEM_4faf == 'p') &&
     (DAT_EXTMEM_4fb0 == (CARRY1(DAT_EXTMEM_4fc2,DAT_EXTMEM_4faf) << 7) >> 7)) {
    uEXTMEM4fbc = DAT_EXTMEM_4fc9;
    uEXTMEM4fbd = 0;
    return;
  }
  if ((DAT_EXTMEM_4fc2 + DAT_EXTMEM_4faf == 'q') &&
     (DAT_EXTMEM_4fb0 == (CARRY1(DAT_EXTMEM_4fc2,DAT_EXTMEM_4faf) << 7) >> 7)) {
    FUN_CODE_093e();
    return;
  }
  return;
}



/* =========================================================
 * CODE:0920  FUN_CODE_0920  size=30
 * ========================================================= */

void FUN_CODE_0920(void)

{
  if ((DAT_EXTMEM_4fc2 + DAT_EXTMEM_4faf == 'q') &&
     (DAT_EXTMEM_4fb0 == (CARRY1(DAT_EXTMEM_4fc2,DAT_EXTMEM_4faf) << 7) >> 7)) {
    FUN_CODE_093e();
    return;
  }
  return;
}



/* =========================================================
 * CODE:093e  FUN_CODE_093e  size=30
 * callers: CODE:0920
 * ========================================================= */

void FUN_CODE_093e(void)

{
  bEXTMEM4fbd = DAT_EXTMEM_4fc9 & 3 | bEXTMEM4fbd;
  return;
}



/* =========================================================
 * CODE:095c  FUN_CODE_095c  size=52
 * callers: CODE:0894
 * ========================================================= */

void FUN_CODE_095c(void)

{
  if (DAT_EXTMEM_4fb0 - ((CARRY1(bEXTMEM4fc1,DAT_EXTMEM_4faf) << 7) >> 7) !=
      ((0x1f < bEXTMEM4fc1 + DAT_EXTMEM_4faf) << 7) >> 7) {
    DAT_EXTMEM_4fc9 = 0xff;
    return;
  }
  return;
}



/* =========================================================
 * CODE:0aa6  FUN_CODE_0aa6  size=20
 * callers: CODE:0d02
 * ========================================================= */

void FUN_CODE_0aa6(void)

{
  DAT_EXTMEM_d444 = DAT_EXTMEM_4fc9;
  DAT_EXTMEM_d443 = 3;
  FUN_CODE_1da2(0x32);
  return;
}



/* =========================================================
 * CODE:0aba  FUN_CODE_0aba  size=9
 * callers: CODE:1010, CODE:2a03
 * ========================================================= */

void FUN_CODE_0aba(void)

{
  if ((bEXTMEMd66e >> 4 & 1) != 1) {
    return;
  }
  if (DAT_EXTMEM_4fd2 != BANK0_R3) {
    DAT_EXTMEM_4fd2 = DAT_EXTMEM_4fd1;
  }
  if (DAT_EXTMEM_4fd1 == '\0') {
    FUN_CODE_04d7();
    DAT_EXTMEM_d443 = 1;
    DAT_EXTMEM_4fd1 = 1;
    return;
  }
  if (DAT_EXTMEM_4fd1 == '\x01') {
    FUN_CODE_0b63();
    return;
  }
  if (DAT_EXTMEM_4fd1 == '\x02') {
    FUN_CODE_0b6d();
    return;
  }
  if (DAT_EXTMEM_4fd1 == '\n') {
    FUN_CODE_0bdc();
    return;
  }
  if (DAT_EXTMEM_4fd1 == '\x14') {
    FUN_CODE_0bf4();
    return;
  }
  if (DAT_EXTMEM_4fd1 == '\x1e') {
    FUN_CODE_0c0e();
    return;
  }
  if (DAT_EXTMEM_4fd1 != '\x1f') {
    if (DAT_EXTMEM_4fd1 == ' ') {
      FUN_CODE_0d40();
      return;
    }
    if (DAT_EXTMEM_4fd1 == '!') {
      FUN_CODE_0d78();
      return;
    }
    if (DAT_EXTMEM_4fd1 == '\"') {
      FUN_CODE_0dad();
      return;
    }
    if (DAT_EXTMEM_4fd1 != '#') {
      if (DAT_EXTMEM_4fd1 == '%') {
        FUN_CODE_0d24();
        return;
      }
      if (DAT_EXTMEM_4fd1 != '(') {
        if (DAT_EXTMEM_4fd1 != ')') {
          return;
        }
        FUN_CODE_0e49();
        return;
      }
      FUN_CODE_0de2();
      return;
    }
    FUN_CODE_0dca();
    return;
  }
  FUN_CODE_0cf4();
  return;
}



/* =========================================================
 * CODE:0ac3  FUN_CODE_0ac3  size=144
 * ========================================================= */

void FUN_CODE_0ac3(void)

{
  if (DAT_EXTMEM_4fd2 != BANK0_R3) {
    DAT_EXTMEM_4fd2 = DAT_EXTMEM_4fd1;
  }
  if (DAT_EXTMEM_4fd1 == '\0') {
    FUN_CODE_04d7();
    DAT_EXTMEM_d443 = 1;
    DAT_EXTMEM_4fd1 = 1;
    return;
  }
  if (DAT_EXTMEM_4fd1 == '\x01') {
    FUN_CODE_0b63();
    return;
  }
  if (DAT_EXTMEM_4fd1 == '\x02') {
    FUN_CODE_0b6d();
    return;
  }
  if (DAT_EXTMEM_4fd1 == '\n') {
    FUN_CODE_0bdc();
    return;
  }
  if (DAT_EXTMEM_4fd1 == '\x14') {
    FUN_CODE_0bf4();
    return;
  }
  if (DAT_EXTMEM_4fd1 == '\x1e') {
    FUN_CODE_0c0e();
    return;
  }
  if (DAT_EXTMEM_4fd1 != '\x1f') {
    if (DAT_EXTMEM_4fd1 == ' ') {
      FUN_CODE_0d40();
      return;
    }
    if (DAT_EXTMEM_4fd1 == '!') {
      FUN_CODE_0d78();
      return;
    }
    if (DAT_EXTMEM_4fd1 == '\"') {
      FUN_CODE_0dad();
      return;
    }
    if (DAT_EXTMEM_4fd1 != '#') {
      if (DAT_EXTMEM_4fd1 == '%') {
        FUN_CODE_0d24();
        return;
      }
      if (DAT_EXTMEM_4fd1 != '(') {
        if (DAT_EXTMEM_4fd1 != ')') {
          return;
        }
        FUN_CODE_0e49();
        return;
      }
      FUN_CODE_0de2();
      return;
    }
    FUN_CODE_0dca();
    return;
  }
  FUN_CODE_0cf4();
  return;
}



/* =========================================================
 * CODE:0b53  FUN_CODE_0b53  size=16
 * ========================================================= */

void FUN_CODE_0b53(void)

{
  FUN_CODE_04d7();
  DAT_EXTMEM_d443 = 1;
  DAT_EXTMEM_4fd1 = 1;
  return;
}



/* =========================================================
 * CODE:0b63  FUN_CODE_0b63  size=10
 * callers: CODE:0ac3
 * ========================================================= */

void FUN_CODE_0b63(void)

{
  FUN_CODE_051b();
  DAT_EXTMEM_4fd1 = 2;
  return;
}



/* =========================================================
 * CODE:0b6d  FUN_CODE_0b6d  size=14
 * callers: CODE:0ac3
 * ========================================================= */

void FUN_CODE_0b6d(void)

{
  FUN_CODE_0525();
  if (DAT_EXTMEM_4fd3 == '\x01') {
    FUN_CODE_0b7b();
    return;
  }
  return;
}



/* =========================================================
 * CODE:0b7b  FUN_CODE_0b7b  size=44
 * callers: CODE:0b6d
 * ========================================================= */

void FUN_CODE_0b7b(void)

{
  DAT_EXTMEM_4fd3 = 0;
  if (cEXTMEM4fc6 == '\x01') {
    if (cEXTMEM4fc8 != '\0' || cEXTMEM4fc3 != '\x01') {
      FUN_CODE_0863(cEXTMEM4fc8 == '\0');
      DAT_EXTMEM_4fd1 = 10;
      return;
    }
    DAT_EXTMEM_4fd1 = 0;
    return;
  }
  if (cEXTMEM4fc4 == '\x01') {
    if (cEXTMEM4fc5 != '\x01') {
      DAT_EXTMEM_4fd1 = 0x1e;
      return;
    }
    FUN_CODE_05b6();
    DAT_EXTMEM_4fd1 = 0x14;
    return;
  }
  FUN_CODE_05b6();
  DAT_EXTMEM_4fd1 = 0x28;
  return;
}



/* =========================================================
 * CODE:0ba7  FUN_CODE_0ba7  size=10
 * ========================================================= */

void FUN_CODE_0ba7(void)

{
  FUN_CODE_0863();
  DAT_EXTMEM_4fd1 = 10;
  return;
}



/* =========================================================
 * CODE:0bb1  FUN_CODE_0bb1  size=26
 * ========================================================= */

void FUN_CODE_0bb1(void)

{
  if (cEXTMEM4fc4 != '\x01') {
    FUN_CODE_05b6();
    DAT_EXTMEM_4fd1 = 0x28;
    return;
  }
  if (cEXTMEM4fc5 == '\x01') {
    FUN_CODE_05b6();
    DAT_EXTMEM_4fd1 = 0x14;
    return;
  }
  DAT_EXTMEM_4fd1 = 0x1e;
  return;
}



/* =========================================================
 * CODE:0bcb  FUN_CODE_0bcb  size=7
 * ========================================================= */

void FUN_CODE_0bcb(void)

{
  DAT_EXTMEM_4fd1 = 0x1e;
  return;
}



/* =========================================================
 * CODE:0bd2  FUN_CODE_0bd2  size=10
 * ========================================================= */

void FUN_CODE_0bd2(void)

{
  FUN_CODE_05b6();
  DAT_EXTMEM_4fd1 = 0x28;
  return;
}



/* =========================================================
 * CODE:0bdc  FUN_CODE_0bdc  size=14
 * callers: CODE:0ac3
 * ========================================================= */

void FUN_CODE_0bdc(void)

{
  FUN_CODE_086e();
  if (DAT_EXTMEM_4fd3 == '\x01') {
    FUN_CODE_0bea();
    return;
  }
  return;
}



/* =========================================================
 * CODE:0bea  FUN_CODE_0bea  size=10
 * callers: CODE:0bdc
 * ========================================================= */

void FUN_CODE_0bea(void)

{
  DAT_EXTMEM_4fd3 = 0;
  DAT_EXTMEM_4fd1 = 0;
  return;
}



/* =========================================================
 * CODE:0bf4  FUN_CODE_0bf4  size=14
 * callers: CODE:0ac3
 * ========================================================= */

void FUN_CODE_0bf4(void)

{
  FUN_CODE_0849();
  if (DAT_EXTMEM_4fd3 == '\x01') {
    FUN_CODE_0c02();
    return;
  }
  return;
}



/* =========================================================
 * CODE:0c02  FUN_CODE_0c02  size=12
 * callers: CODE:0bf4
 * ========================================================= */

void FUN_CODE_0c02(void)

{
  DAT_EXTMEM_4fd3 = 0;
  DAT_EXTMEM_4fd1 = 0x1e;
  return;
}



/* =========================================================
 * CODE:0c0e  FUN_CODE_0c0e  size=230
 * callers: CODE:0ac3
 * ========================================================= */

void FUN_CODE_0c0e(byte param_1,char param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  
  if (DAT_EXTMEM_4fcd != '\0') {
    cVar2 = DAT_EXTMEM_4fc2 + DAT_EXTMEM_4faf;
    cVar1 = (CARRY1(DAT_EXTMEM_4fc2,DAT_EXTMEM_4faf) << 7) >> 7;
    if ((cVar2 == 'B') && (DAT_EXTMEM_4fb0 == cVar1)) {
      uEXTMEM4fca = 1;
    }
    if ((cVar2 == '\x04') && (DAT_EXTMEM_4fb0 == cVar1)) {
      uEXTMEM4fca = 1;
    }
    if ((cVar2 == '@') && (DAT_EXTMEM_4fb0 == cVar1)) {
      uEXTMEM4fca = 1;
    }
    if ((cVar2 == '\t') && (DAT_EXTMEM_4fb0 == cVar1)) {
      uEXTMEM4fca = 1;
    }
    param_1 = DAT_EXTMEM_4fc2;
    param_2 = DAT_EXTMEM_4fb0;
    if (DAT_EXTMEM_4fc2 == 0x43) {
      cVar3 = (char)((ushort)bEXTMEM4fcf * 5);
      param_1 = cVar3 - 1;
      param_2 = (char)((ushort)bEXTMEM4fcf * 5 >> 8) + (-1 - (((cVar3 != '\0') << 7) >> 7));
      if ((DAT_EXTMEM_4faf == BANK0_R5) && (DAT_EXTMEM_4fb0 == BANK0_R6)) {
        uEXTMEM4fca = 1;
      }
    }
    if ((cVar2 == 'P') && (DAT_EXTMEM_4fb0 == cVar1)) {
      uEXTMEM4fca = 1;
    }
    if ((cVar2 == 'q') && (DAT_EXTMEM_4fb0 == cVar1)) {
      uEXTMEM4fca = 1;
    }
    if (DAT_EXTMEM_4fc2 == 0x80) {
      cVar1 = cEXTMEM4fbd;
      if (cEXTMEM4fbc - 1U == 0xff) {
        cVar1 = cEXTMEM4fbd + -1;
      }
      param_1 = DAT_EXTMEM_4faf;
      param_2 = DAT_EXTMEM_4fb0;
      if ((cEXTMEM4fbc - 1U == BANK0_R5) && (cVar1 == BANK0_R6)) {
        uEXTMEM4fca = 1;
      }
    }
  }
  if (((cEXTMEM4fcc == '\x01') && (DAT_EXTMEM_4faf == 0x7f)) && (DAT_EXTMEM_4fb0 == '\0')) {
    uEXTMEM4fca = 1;
  }
  FUN_CODE_087b(param_1,param_2);
  DAT_EXTMEM_4fd1 = 0x1f;
  return;
}



/* =========================================================
 * CODE:0cf4  FUN_CODE_0cf4  size=14
 * callers: CODE:0ac3
 * ========================================================= */

void FUN_CODE_0cf4(void)

{
  FUN_CODE_088d();
  if (DAT_EXTMEM_4fd3 == '\x01') {
    FUN_CODE_0d02();
    return;
  }
  return;
}



/* =========================================================
 * CODE:0d02  FUN_CODE_0d02  size=34
 * callers: CODE:0cf4
 * ========================================================= */

void FUN_CODE_0d02(void)

{
  bool bVar1;
  
  DAT_EXTMEM_4fd3 = 0;
  bVar1 = 0xfe < DAT_EXTMEM_4faf;
  DAT_EXTMEM_4faf = DAT_EXTMEM_4faf + 1;
  DAT_EXTMEM_4fb0 = DAT_EXTMEM_4fb0 - ((bVar1 << 7) >> 7);
  FUN_CODE_0aa6();
  DAT_EXTMEM_4fd1 = 0x25;
  return;
}



/* =========================================================
 * CODE:0d24  FUN_CODE_0d24  size=12
 * callers: CODE:0ac3
 * ========================================================= */

void FUN_CODE_0d24(void)

{
  if ((bEXTMEMd407 & 1) != 0) {
    return;
  }
  DAT_EXTMEM_d443 = 1;
  FUN_CODE_051b(0);
  DAT_EXTMEM_4fd1 = 0x20;
  return;
}



/* =========================================================
 * CODE:0d30  FUN_CODE_0d30  size=16
 * ========================================================= */

void FUN_CODE_0d30(void)

{
  DAT_EXTMEM_d443 = 1;
  FUN_CODE_051b();
  DAT_EXTMEM_4fd1 = 0x20;
  return;
}



/* =========================================================
 * CODE:0d40  FUN_CODE_0d40  size=14
 * callers: CODE:0ac3
 * ========================================================= */

void FUN_CODE_0d40(void)

{
  FUN_CODE_0525();
  if (DAT_EXTMEM_4fd3 == '\x01') {
    FUN_CODE_0d4e();
    return;
  }
  return;
}



/* =========================================================
 * CODE:0d4e  FUN_CODE_0d4e  size=35
 * callers: CODE:0d40
 * ========================================================= */

void FUN_CODE_0d4e(void)

{
  DAT_EXTMEM_4fd3 = 0;
  if (cEXTMEM4fc7 == '\x01') {
    DAT_EXTMEM_d443 = 3;
    FUN_CODE_1da2(10);
    FUN_CODE_051b();
    DAT_EXTMEM_4fd1 = 0x21;
    return;
  }
  DAT_EXTMEM_4fd1 = 0x1e;
  return;
}



/* =========================================================
 * CODE:0d71  FUN_CODE_0d71  size=7
 * ========================================================= */

void FUN_CODE_0d71(void)

{
  DAT_EXTMEM_4fd1 = 0x1e;
  return;
}



/* =========================================================
 * CODE:0d78  FUN_CODE_0d78  size=14
 * callers: CODE:0ac3
 * ========================================================= */

void FUN_CODE_0d78(void)

{
  FUN_CODE_0525();
  if (DAT_EXTMEM_4fd3 == '\x01') {
    FUN_CODE_0d86();
    return;
  }
  return;
}



/* =========================================================
 * CODE:0d86  FUN_CODE_0d86  size=23
 * callers: CODE:0d78
 * ========================================================= */

void FUN_CODE_0d86(void)

{
  DAT_EXTMEM_4fd3 = 0;
  if (cEXTMEM4fca == '\x01') {
    FUN_CODE_0863();
    DAT_EXTMEM_4fd1 = 0x23;
    return;
  }
  cEXTMEM4fca = 1;
  FUN_CODE_087b();
  DAT_EXTMEM_4fd1 = 0x22;
  return;
}



/* =========================================================
 * CODE:0d9d  FUN_CODE_0d9d  size=16
 * ========================================================= */

void FUN_CODE_0d9d(void)

{
  uEXTMEM4fca = 1;
  FUN_CODE_087b();
  DAT_EXTMEM_4fd1 = 0x22;
  return;
}



/* =========================================================
 * CODE:0dad  FUN_CODE_0dad  size=14
 * callers: CODE:0ac3
 * ========================================================= */

void FUN_CODE_0dad(void)

{
  FUN_CODE_088d();
  if (DAT_EXTMEM_4fd3 == '\x01') {
    FUN_CODE_0dbb();
    return;
  }
  return;
}



/* =========================================================
 * CODE:0dbb  FUN_CODE_0dbb  size=15
 * callers: CODE:0dad
 * ========================================================= */

void FUN_CODE_0dbb(void)

{
  DAT_EXTMEM_4fd3 = 0;
  FUN_CODE_0863();
  DAT_EXTMEM_4fd1 = 0x23;
  return;
}



/* =========================================================
 * CODE:0dca  FUN_CODE_0dca  size=14
 * callers: CODE:0ac3
 * ========================================================= */

void FUN_CODE_0dca(void)

{
  FUN_CODE_086e();
  if (DAT_EXTMEM_4fd3 == '\x01') {
    FUN_CODE_0dd8();
    return;
  }
  return;
}



/* =========================================================
 * CODE:0dd8  FUN_CODE_0dd8  size=10
 * callers: CODE:0dca
 * ========================================================= */

void FUN_CODE_0dd8(void)

{
  DAT_EXTMEM_4fd3 = 0;
  DAT_EXTMEM_4fd1 = 0;
  return;
}



/* =========================================================
 * CODE:0de2  FUN_CODE_0de2  size=14
 * callers: CODE:0ac3
 * ========================================================= */

void FUN_CODE_0de2(void)

{
  FUN_CODE_0849();
  if (DAT_EXTMEM_4fd3 == '\x01') {
    FUN_CODE_0df0();
    return;
  }
  return;
}



/* =========================================================
 * CODE:0df0  FUN_CODE_0df0  size=89
 * callers: CODE:0de2
 * ========================================================= */

void FUN_CODE_0df0(void)

{
  DAT_EXTMEM_4fd3 = 0;
  cEXTMEM4fc8 = cEXTMEM4fc8 + '\x01';
  if ((DAT_EXTMEM_4fc0 == '\0' || DAT_EXTMEM_4fce == '\0') && cEXTMEM4fcb == '\x01') {
    DAT_EXTMEM_d443 = 7;
    cEXTMEMd465 = cEXTMEMd465 + '\x01';
  }
  else {
    DAT_EXTMEM_d443 = 3;
  }
  FUN_CODE_1da2(0x32,DAT_EXTMEM_4fc0 == '\0');
  DAT_EXTMEM_4fd1 = 0x29;
  return;
}



/* =========================================================
 * CODE:0e49  FUN_CODE_0e49  size=24
 * callers: CODE:0ac3
 * ========================================================= */

void FUN_CODE_0e49(void)

{
  if ((bEXTMEMd407 & 1) == 0) {
    DAT_EXTMEM_d443 = 1;
    DAT_EXTMEM_4fd1 = 1;
  }
  return;
}



/* =========================================================
 * CODE:0e61  FUN_CODE_0e61  size=51
 * callers: CODE:2a03
 * ========================================================= */

void FUN_CODE_0e61(void)

{
  DAT_EXTMEM_cc00 = 1;
  FUN_CODE_11d7();
  BANK0_R2 = BANK0_R2 & 0xfe | 1;
  DAT_EXTMEM_d67e = 0;
  DAT_EXTMEM_d67f = 0;
  uEXTMEMd767 = 0x3f;
  return;
}



/* =========================================================
 * CODE:0e94  FUN_CODE_0e94  size=169
 * callers: CODE:22b2, CODE:2a03, CODE:25b4, CODE:277b
 * ========================================================= */

void FUN_CODE_0e94(char param_1)

{
  char cVar1;
  char cVar2;
  
  if (param_1 == '\x03') {
    param_1 = '\x02';
  }
  if (DAT_INTMEM_7a == '\x03') {
    DAT_INTMEM_7a = '\x02';
  }
  if (DAT_INTMEM_7a == '\x02' && param_1 == '\x02') {
    DAT_INTMEM_7a = '\x01';
  }
  if ((bEXTMEMc800 & 1) == 0) {
    if (param_1 == '\0') {
      cEXTMEM4fbe = '\x03';
    }
    else if (param_1 == '\x01') {
      cEXTMEM4fbe = '\f';
    }
    else if (param_1 == '\x02') {
      cEXTMEM4fbe = '\x15';
    }
  }
  else {
    cEXTMEM4fbe = '\0';
  }
  BANK0_R4 = (byte)((ushort)DAT_INTMEM_7b * 0x80);
  cVar2 = (char)((ushort)DAT_INTMEM_7b * 0x80 >> 8);
  cVar1 = DAT_INTMEM_7a * '\x03';
  *(undefined1 *)CONCAT11(cVar2 + -0x2a,bEXTMEMc800) =
       *(undefined1 *)((ushort)(byte)(cEXTMEM4fbe + cVar1) + 0x20);
  *(undefined1 *)CONCAT11((cVar2 - (((0xfe < BANK0_R4) << 7) >> 7)) + -0x2a,BANK0_R4 + 1) =
       *(undefined1 *)((ushort)(cEXTMEM4fbe + cVar1 + 1) + 0x20);
  *(undefined1 *)CONCAT11((cVar2 - (((0xfd < BANK0_R4) << 7) >> 7)) + -0x2a,BANK0_R4 + 2) =
       *(undefined1 *)((ushort)(cEXTMEM4fbe + cVar1 + 2) + 0x20);
  return;
}



/* =========================================================
 * CODE:0f3d  FUN_CODE_0f3d  size=211
 * callers: CODE:2a03, CODE:2332
 * ========================================================= */

void FUN_CODE_0f3d(void)

{
  if ((bEXTMEMc800 & 1) != 1) {
    uEXTMEMd767 = 0;
  }
  BANK0_R2 = BANK0_R2 & 4;
  if ((bEXTMEMc800 & 1) == 0) {
    FUN_CODE_1076(bEXTMEMc800);
  }
  else {
    BANK0_R2 = 0;
  }
  DAT_EXTMEM_d77f = DAT_EXTMEM_d77f & 0xfb | 2;
  for (DAT_EXTMEM_4fea = 0; DAT_EXTMEM_4fea < 3; DAT_EXTMEM_4fea = DAT_EXTMEM_4fea + 1) {
  }
  BANK0_R2 = BANK0_R2 & 0xf9 | 1;
  DAT_INTMEM_7a = 4;
  DAT_INTMEM_7b = 0x1d;
  FUN_CODE_0270(0xd700);
  FUN_CODE_1010();
  BANK0_R2 = BANK0_R2 | 1;
  if ((bEXTMEMc800 & 1) == 0) {
    if (BANK1_R0 == '\0') {
      uEXTMEMd767 = 0x81;
    }
  }
  else {
    uEXTMEMd767 = 0xbf;
  }
  return;
}



/* =========================================================
 * CODE:1010  FUN_CODE_1010  size=42
 * callers: CODE:2a03, CODE:0f3d
 * ========================================================= */

void FUN_CODE_1010(void)

{
  BANK0_R2 = BANK0_R2 & 1;
  if ((cEXTMEMc890 == '\0' & bEXTMEMc800) == 0) {
    do {
    } while (-1 < DAT_EXTMEM_d77f);
  }
  else {
    while (-1 < DAT_EXTMEM_d77f) {
      FUN_CODE_0aba(DAT_EXTMEM_d77f);
      if ((DAT_EXTMEM_c802 & 1) != 1) {
        return;
      }
    }
  }
  return;
}



/* =========================================================
 * CODE:103a  FUN_CODE_103a  size=9
 * ========================================================= */

void FUN_CODE_103a(void)

{
  do {
  } while (-1 < DAT_EXTMEM_d77f);
  return;
}



/* =========================================================
 * CODE:1043  FUN_CODE_1043  size=51
 * callers: CODE:3562, CODE:2a03, CODE:2332
 * ========================================================= */

void FUN_CODE_1043(void)

{
  char cVar1;
  char cVar2;
  
  cVar1 = BANK1_R1 + '\x01';
  cVar2 = '\x01';
  while (cVar1 = cVar1 + -1, cVar1 != '\0') {
    cVar2 = cVar2 * '\x02';
  }
  DAT_EXTMEM_4fea = cVar2 + -1;
  DAT_EXTMEM_d67e = DAT_EXTMEM_4fea;
  BANK0_R2 = BANK0_R2 & 0xf | 0x80;
  DAT_EXTMEM_d67f = DAT_EXTMEM_4fea;
  return;
}



/* =========================================================
 * CODE:1076  FUN_CODE_1076  size=172
 * callers: CODE:0f3d
 * ========================================================= */

void FUN_CODE_1076(undefined1 param_1)

{
  bool bVar1;
  bool bVar2;
  
  DAT_EXTMEM_d77e = 10;
  bVar1 = BANK1_R2 == '\x10';
  if (bVar1) {
    param_1 = 0x58;
  }
  else if (BANK1_R2 == '\b') {
    BANK0_R3 = 0x58;
  }
  else {
    BANK0_R3 = 0x42;
  }
  DAT_EXTMEM_d771 = param_1;
  if (bVar1) {
    DAT_EXTMEM_d77d = 0;
  }
  else {
    DAT_EXTMEM_d77d = param_1;
    if (BANK1_R2 == '\b') {
      BANK0_R3 = 2;
    }
    else {
      BANK0_R3 = 3;
    }
  }
  bVar2 = BANK1_R2 == '\0';
  if (bVar2) {
    DAT_EXTMEM_d770 = 0x9a;
    DAT_EXTMEM_d76f = 0x99;
    DAT_EXTMEM_d76e = 1;
  }
  else if (BANK1_R2 == '\b') {
    DAT_EXTMEM_d770 = 0;
    DAT_EXTMEM_d76f = 0;
    DAT_EXTMEM_d76e = 0;
  }
  else if (bVar1) {
    DAT_EXTMEM_d770 = 0;
    DAT_EXTMEM_d76f = 0;
    DAT_EXTMEM_d76e = 0;
  }
  if (BANK1_R0 == '\0') {
    if (bVar2) {
      DAT_EXTMEM_d777 = 0xe1;
      DAT_EXTMEM_d776 = 0xff;
      DAT_EXTMEM_d775 = 0xf;
      DAT_EXTMEM_d774 = 0x70;
      DAT_EXTMEM_d773 = 0x44;
      DAT_EXTMEM_d772 = 5;
    }
    else {
      if (BANK1_R2 == '\b') {
        FUN_CODE_118d();
        return;
      }
      if (bVar1) {
        DAT_EXTMEM_d777 = 0xfc;
        DAT_EXTMEM_d776 = 0xff;
        DAT_EXTMEM_d775 = 0xf;
        DAT_EXTMEM_d774 = 0xa0;
        DAT_EXTMEM_d773 = 0xbd;
        DAT_EXTMEM_d772 = 4;
        return;
      }
    }
    return;
  }
  DAT_EXTMEM_d777 = 0xfc;
  DAT_EXTMEM_d776 = 0xff;
  DAT_EXTMEM_d775 = 0x3f;
  if (bVar2) {
    DAT_EXTMEM_d774 = 0x10;
    DAT_EXTMEM_d773 = 0x11;
    DAT_EXTMEM_d772 = 0x11;
    return;
  }
  if (BANK1_R2 == '\b') {
    FUN_CODE_1135();
    return;
  }
  if (!bVar1) {
    return;
  }
  DAT_EXTMEM_d774 = 0x30;
  DAT_EXTMEM_d773 = 0x33;
  DAT_EXTMEM_d772 = 0x33;
  return;
}



/* =========================================================
 * CODE:1122  FUN_CODE_1122  size=19
 * ========================================================= */

void FUN_CODE_1122(void)

{
  DAT_EXTMEM_d774 = 0x30;
  DAT_EXTMEM_d773 = 0x33;
  DAT_EXTMEM_d772 = 0x33;
  return;
}



/* =========================================================
 * CODE:1135  FUN_CODE_1135  size=19
 * callers: CODE:1076
 * ========================================================= */

void FUN_CODE_1135(void)

{
  DAT_EXTMEM_d774 = 0x98;
  DAT_EXTMEM_d773 = 0x99;
  DAT_EXTMEM_d772 = 0x19;
  return;
}



/* =========================================================
 * CODE:1148  FUN_CODE_1148  size=19
 * ========================================================= */

void FUN_CODE_1148(void)

{
  DAT_EXTMEM_d774 = 0x10;
  DAT_EXTMEM_d773 = 0x11;
  DAT_EXTMEM_d772 = 0x11;
  return;
}



/* =========================================================
 * CODE:115b  FUN_CODE_115b  size=50
 * ========================================================= */

void FUN_CODE_115b(char param_1,char param_2)

{
  if (param_2 == '\0') {
    if (BANK1_R2 == '\b') {
      FUN_CODE_118d();
      return;
    }
    if (param_1 != '\0') {
      DAT_EXTMEM_d777 = 0xfc;
      DAT_EXTMEM_d776 = 0xff;
      DAT_EXTMEM_d775 = 0xf;
      DAT_EXTMEM_d774 = 0xa0;
      DAT_EXTMEM_d773 = 0xbd;
      DAT_EXTMEM_d772 = 4;
      return;
    }
  }
  else {
    DAT_EXTMEM_d777 = 0xe1;
    DAT_EXTMEM_d776 = 0xff;
    DAT_EXTMEM_d775 = 0xf;
    DAT_EXTMEM_d774 = 0x70;
    DAT_EXTMEM_d773 = 0x44;
    DAT_EXTMEM_d772 = 5;
  }
  return;
}



/* =========================================================
 * CODE:118d  FUN_CODE_118d  size=37
 * callers: CODE:115b
 * ========================================================= */

void FUN_CODE_118d(void)

{
  DAT_EXTMEM_d777 = 0xfc;
  DAT_EXTMEM_d776 = 0xff;
  DAT_EXTMEM_d775 = 0xf;
  DAT_EXTMEM_d774 = 0xa0;
  DAT_EXTMEM_d773 = 0xbd;
  DAT_EXTMEM_d772 = 4;
  return;
}



/* =========================================================
 * CODE:11b2  FUN_CODE_11b2  size=37
 * ========================================================= */

void FUN_CODE_11b2(void)

{
  DAT_EXTMEM_d777 = 0xe1;
  DAT_EXTMEM_d776 = 0xff;
  DAT_EXTMEM_d775 = 0xf;
  DAT_EXTMEM_d774 = 0x70;
  DAT_EXTMEM_d773 = 0x44;
  DAT_EXTMEM_d772 = 5;
  return;
}



/* =========================================================
 * CODE:11d7  FUN_CODE_11d7  size=34
 * callers: CODE:0e61, CODE:2a03, CODE:395b, CODE:17f4, CODE:2972
 * ========================================================= */

void FUN_CODE_11d7(void)

{
  if (BANK1_R0 == '\0') {
    DAT_EXTMEM_c80f = DAT_EXTMEM_c80f & 0xef | 0x20;
  }
  DAT_EXTMEM_c80f = DAT_EXTMEM_c80f & 0xfe | 2;
  return;
}



/* =========================================================
 * CODE:11f9  FUN_CODE_11f9  size=30
 * callers: CODE:378a, CODE:3562, CODE:395b, CODE:37f0
 * ========================================================= */

void FUN_CODE_11f9(undefined1 param_1)

{
  bEXTMEMcc31 = DAT_INTMEM_7b | DAT_INTMEM_7a | DAT_INTMEM_7c;
  uEXTMEMcc32 = param_1;
  uEXTMEMcc33 = DAT_INTMEM_7d;
  uEXTMEMcc30 = 1;
  return;
}



/* =========================================================
 * CODE:1217  FUN_CODE_1217  size=9
 * callers: CODE:18c4
 * ========================================================= */

void FUN_CODE_1217(void)

{
  if (cEXTMEMca61 == '\x02') {
    return;
  }
  if (cEXTMEM4fe1 == '\b') {
    if (cEXTMEMca61 == '\x01') {
      cEXTMEM4fff = cEXTMEMca63;
    }
    else {
      cEXTMEM4fff = cEXTMEM4fdc;
    }
    BANK0_R2 = BANK0_R2 & 0xf0;
    for (bEXTMEM4ff0 = 0; bEXTMEM4ff0 < BANK0_R3; bEXTMEM4ff0 = bEXTMEM4ff0 + 1) {
      if (((cEXTMEM4fe3 == '\x01') && (10 < bEXTMEM4fe2)) && (BANK0_R2 < 0xf)) {
        uEXTMEM4fe6 = 1;
        DAT_EXTMEM_4fea = bEXTMEM4fe2 - 0xb;
        if (BANK0_R2 < 6) {
                    /* WARNING: Could not emulate address calculation at 0x12b0 */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ushort)(byte)(*(char *)CONCAT11('O' - (((0x22 < bEXTMEM4ff0) << 7) >> 7),
                                                      bEXTMEM4ff0 - 0x23) * '\x03') + 0x12c7))
                    (cEXTMEM4fff);
          return;
        }
        uEXTMEMc871 = 0;
        DAT_EXTMEM_c870 = 0;
      }
      bEXTMEM4fe2 = bEXTMEM4fe2 + 1;
      if (bEXTMEM4fe2 == 0) {
        cEXTMEM4fe3 = cEXTMEM4fe3 + '\x01';
      }
    }
  }
  else {
    cEXTMEM4fff = cEXTMEMca60 + -1;
    for (bEXTMEM4ff0 = 0; bEXTMEM4ff0 < BANK0_R3; bEXTMEM4ff0 = bEXTMEM4ff0 + 1) {
      if (((cEXTMEM4fe3 == '\x02') && (0x49 < bEXTMEM4fe2)) && (BANK0_R2 < 0x5a)) {
                    /* WARNING: Could not recover jumptable at 0x155a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ushort)((bEXTMEM4fe2 + 0xb6) * '\x03') + 0x155b))(cEXTMEM4fff);
        return;
      }
      bEXTMEM4fe2 = bEXTMEM4fe2 + 1;
      if (bEXTMEM4fe2 == 0) {
        cEXTMEM4fe3 = cEXTMEM4fe3 + '\x01';
      }
    }
  }
  return;
}



/* =========================================================
 * CODE:1220  FUN_CODE_1220  size=167
 * ========================================================= */

void FUN_CODE_1220(void)

{
  if (cEXTMEM4fe1 == '\b') {
    if (cEXTMEMca61 == '\x01') {
      cEXTMEM4fff = cEXTMEMca63;
    }
    else {
      cEXTMEM4fff = cEXTMEM4fdc;
    }
    BANK0_R2 = BANK0_R2 & 0xf0;
    for (bEXTMEM4ff0 = 0; bEXTMEM4ff0 < BANK0_R3; bEXTMEM4ff0 = bEXTMEM4ff0 + 1) {
      if (((cEXTMEM4fe3 == '\x01') && (10 < bEXTMEM4fe2)) && (BANK0_R2 < 0xf)) {
        uEXTMEM4fe6 = 1;
        DAT_EXTMEM_4fea = bEXTMEM4fe2 - 0xb;
        if (BANK0_R2 < 6) {
                    /* WARNING: Could not emulate address calculation at 0x12b0 */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ushort)(byte)(*(char *)CONCAT11('O' - (((0x22 < bEXTMEM4ff0) << 7) >> 7),
                                                      bEXTMEM4ff0 - 0x23) * '\x03') + 0x12c7))
                    (cEXTMEM4fff);
          return;
        }
        uEXTMEMc871 = 0;
        DAT_EXTMEM_c870 = 0;
      }
      bEXTMEM4fe2 = bEXTMEM4fe2 + 1;
      if (bEXTMEM4fe2 == 0) {
        cEXTMEM4fe3 = cEXTMEM4fe3 + '\x01';
      }
    }
  }
  else {
    cEXTMEM4fff = cEXTMEMca60 + -1;
    for (bEXTMEM4ff0 = 0; bEXTMEM4ff0 < BANK0_R3; bEXTMEM4ff0 = bEXTMEM4ff0 + 1) {
      if (((cEXTMEM4fe3 == '\x02') && (0x49 < bEXTMEM4fe2)) && (BANK0_R2 < 0x5a)) {
                    /* WARNING: Could not recover jumptable at 0x155a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ushort)((bEXTMEM4fe2 + 0xb6) * '\x03') + 0x155b))(cEXTMEM4fff);
        return;
      }
      bEXTMEM4fe2 = bEXTMEM4fe2 + 1;
      if (bEXTMEM4fe2 == 0) {
        cEXTMEM4fe3 = cEXTMEM4fe3 + '\x01';
      }
    }
  }
  return;
}



/* =========================================================
 * CODE:12ca  thunk_FUN_CODE_12d9  size=3
 * ========================================================= */

void thunk_FUN_CODE_12d9(void)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  
  DAT_EXTMEM_c200 = DAT_EXTMEM_c200 & 0xf1 | 2;
  cVar2 = DAT_EXTMEM_4fea + '\x01';
  bVar3 = 1;
  while (cVar2 = cVar2 + -1, cVar2 != '\0') {
    bVar3 = bVar3 * '\x02';
  }
  BANK0_R2 = BANK0_R2 & ~(bVar3 & 0xf);
  while( true ) {
    bVar1 = bEXTMEM4ff0;
    bVar3 = bEXTMEM4fe2;
    bEXTMEM4fe2 = bEXTMEM4fe2 + 1;
    if (bEXTMEM4fe2 == 0) {
      cEXTMEM4fe3 = cEXTMEM4fe3 + '\x01';
    }
    bEXTMEM4ff0 = bEXTMEM4ff0 + 1;
    if (BANK0_R3 <= bEXTMEM4ff0) break;
    if (((cEXTMEM4fe3 == '\x01') && (10 < bEXTMEM4fe2)) && (BANK0_R2 < 0xf)) {
      uEXTMEM4fe6 = 1;
      DAT_EXTMEM_4fea = bVar3 - 10;
      if (BANK0_R2 < 6) {
                    /* WARNING: Could not emulate address calculation at 0x12b0 */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ushort)(byte)(*(char *)CONCAT11('O' - (((0x22 < bEXTMEM4ff0) << 7) >> 7),
                                                    bVar1 - 0x22) * '\x03') + 0x12c7))(uEXTMEM4fff);
        return;
      }
      uEXTMEMc871 = 0;
      DAT_EXTMEM_c870 = 0;
    }
  }
  return;
}



/* =========================================================
 * CODE:12d9  FUN_CODE_12d9  size=51
 * ========================================================= */

void FUN_CODE_12d9(void)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  
  DAT_EXTMEM_c200 = DAT_EXTMEM_c200 & 0xf1 | 2;
  cVar2 = DAT_EXTMEM_4fea + '\x01';
  bVar3 = 1;
  while (cVar2 = cVar2 + -1, cVar2 != '\0') {
    bVar3 = bVar3 * '\x02';
  }
  BANK0_R2 = BANK0_R2 & ~(bVar3 & 0xf);
  while( true ) {
    bVar1 = bEXTMEM4ff0;
    bVar3 = bEXTMEM4fe2;
    bEXTMEM4fe2 = bEXTMEM4fe2 + 1;
    if (bEXTMEM4fe2 == 0) {
      cEXTMEM4fe3 = cEXTMEM4fe3 + '\x01';
    }
    bEXTMEM4ff0 = bEXTMEM4ff0 + 1;
    if (BANK0_R3 <= bEXTMEM4ff0) break;
    if (((cEXTMEM4fe3 == '\x01') && (10 < bEXTMEM4fe2)) && (BANK0_R2 < 0xf)) {
      uEXTMEM4fe6 = 1;
      DAT_EXTMEM_4fea = bVar3 - 10;
      if (BANK0_R2 < 6) {
                    /* WARNING: Could not emulate address calculation at 0x12b0 */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ushort)(byte)(*(char *)CONCAT11('O' - (((0x22 < bEXTMEM4ff0) << 7) >> 7),
                                                    bVar1 - 0x22) * '\x03') + 0x12c7))(uEXTMEM4fff);
        return;
      }
      uEXTMEMc871 = 0;
      DAT_EXTMEM_c870 = 0;
    }
  }
  return;
}



/* =========================================================
 * CODE:130c  FUN_CODE_130c  size=143
 * ========================================================= */

void FUN_CODE_130c(void)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  
  if ((BANK2_R4 >> 5 & 1) != 0) {
    BANK0_R2 = BANK0_R2 | 1;
  }
  DAT_EXTMEM_c87c = 0;
  DAT_EXTMEM_c87d = 0x20;
  DAT_EXTMEM_c87e = 0xff;
  DAT_EXTMEM_c87f = 1;
  cVar2 = DAT_EXTMEM_4fea + '\x01';
  bVar4 = 1;
  while (cVar2 = cVar2 + -1, cVar2 != '\0') {
    bVar4 = bVar4 * '\x02';
  }
  BANK0_R2 = BANK0_R2 | bVar4 & 0xf;
  cVar3 = DAT_EXTMEM_4fea + '\x01';
  cVar2 = '\x01';
  while (cVar3 = cVar3 + -1, cVar3 != '\0') {
    cVar2 = cVar2 * '\x02';
  }
  cVar3 = DAT_EXTMEM_4fea + '\x01';
  bVar4 = 1;
  while (cVar3 = cVar3 + -1, cVar3 != '\0') {
    bVar4 = bVar4 * '\x02';
  }
  BANK0_R2 = BANK0_R2 & ~(cVar2 << 4) & ~(bVar4 & 0xf);
  while( true ) {
    bVar1 = bEXTMEM4ff0;
    bVar4 = bEXTMEM4fe2;
    bEXTMEM4fe2 = bEXTMEM4fe2 + 1;
    if (bEXTMEM4fe2 == 0) {
      cEXTMEM4fe3 = cEXTMEM4fe3 + '\x01';
    }
    bEXTMEM4ff0 = bEXTMEM4ff0 + 1;
    if (BANK0_R3 <= bEXTMEM4ff0) break;
    if (((cEXTMEM4fe3 == '\x01') && (10 < bEXTMEM4fe2)) && (BANK0_R2 < 0xf)) {
      uEXTMEM4fe6 = 1;
      DAT_EXTMEM_4fea = bVar4 - 10;
      if (BANK0_R2 < 6) {
                    /* WARNING: Could not emulate address calculation at 0x12b0 */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ushort)(byte)(*(char *)CONCAT11('O' - (((0x22 < bEXTMEM4ff0) << 7) >> 7),
                                                    bVar1 - 0x22) * '\x03') + 0x12c7))(uEXTMEM4fff);
        return;
      }
      uEXTMEMc871 = 0;
      DAT_EXTMEM_c870 = 0;
    }
  }
  return;
}



/* =========================================================
 * CODE:139b  FUN_CODE_139b  size=102
 * ========================================================= */

void FUN_CODE_139b(void)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  
  cVar2 = DAT_EXTMEM_4fea + '\x01';
  bVar4 = 1;
  while (cVar2 = cVar2 + -1, cVar2 != '\0') {
    bVar4 = bVar4 * '\x02';
  }
  cVar3 = DAT_EXTMEM_4fea + '\x01';
  cVar2 = '\x01';
  while (cVar3 = cVar3 + -1, cVar3 != '\0') {
    cVar2 = cVar2 * '\x02';
  }
  BANK0_R2 = BANK0_R2 & ~(bVar4 & 0xf) | cVar2 << 4;
  cVar2 = DAT_EXTMEM_4fea + '\x01';
  bVar4 = 1;
  while (cVar2 = cVar2 + -1, cVar2 != '\0') {
    bVar4 = bVar4 * '\x02';
  }
  BANK0_R2 = BANK0_R2 & ~(bVar4 & 0xf);
  while( true ) {
    bVar1 = bEXTMEM4ff0;
    bVar4 = bEXTMEM4fe2;
    bEXTMEM4fe2 = bEXTMEM4fe2 + 1;
    if (bEXTMEM4fe2 == 0) {
      cEXTMEM4fe3 = cEXTMEM4fe3 + '\x01';
    }
    bEXTMEM4ff0 = bEXTMEM4ff0 + 1;
    if (BANK0_R3 <= bEXTMEM4ff0) break;
    if (((cEXTMEM4fe3 == '\x01') && (10 < bEXTMEM4fe2)) && (BANK0_R2 < 0xf)) {
      uEXTMEM4fe6 = 1;
      DAT_EXTMEM_4fea = bVar4 - 10;
      if (BANK0_R2 < 6) {
                    /* WARNING: Could not emulate address calculation at 0x12b0 */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ushort)(byte)(*(char *)CONCAT11('O' - (((0x22 < bEXTMEM4ff0) << 7) >> 7),
                                                    bVar1 - 0x22) * '\x03') + 0x12c7))(uEXTMEM4fff);
        return;
      }
      uEXTMEMc871 = 0;
      DAT_EXTMEM_c870 = 0;
    }
  }
  return;
}



/* =========================================================
 * CODE:1401  FUN_CODE_1401  size=102
 * ========================================================= */

void FUN_CODE_1401(void)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  cVar1 = DAT_EXTMEM_4fea + '\x01';
  bVar3 = 1;
  while (cVar1 = cVar1 + -1, cVar1 != '\0') {
    bVar3 = bVar3 * '\x02';
  }
  cVar2 = DAT_EXTMEM_4fea + '\x01';
  cVar1 = '\x01';
  while (cVar2 = cVar2 + -1, cVar2 != '\0') {
    cVar1 = cVar1 * '\x02';
  }
  cVar2 = DAT_EXTMEM_4fea + '\x01';
  bVar4 = 1;
  while (cVar2 = cVar2 + -1, cVar2 != '\0') {
    bVar4 = bVar4 * '\x02';
  }
  BANK0_R2 = BANK0_R2 & ~(bVar3 & 0xf) & ~(cVar1 << 4) | bVar4 & 0xf;
  while( true ) {
    bVar4 = bEXTMEM4ff0;
    bVar3 = bEXTMEM4fe2;
    bEXTMEM4fe2 = bEXTMEM4fe2 + 1;
    if (bEXTMEM4fe2 == 0) {
      cEXTMEM4fe3 = cEXTMEM4fe3 + '\x01';
    }
    bEXTMEM4ff0 = bEXTMEM4ff0 + 1;
    if (BANK0_R3 <= bEXTMEM4ff0) break;
    if (((cEXTMEM4fe3 == '\x01') && (10 < bEXTMEM4fe2)) && (BANK0_R2 < 0xf)) {
      uEXTMEM4fe6 = 1;
      DAT_EXTMEM_4fea = bVar3 - 10;
      if (BANK0_R2 < 6) {
                    /* WARNING: Could not emulate address calculation at 0x12b0 */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ushort)(byte)(*(char *)CONCAT11('O' - (((0x22 < bEXTMEM4ff0) << 7) >> 7),
                                                    bVar4 - 0x22) * '\x03') + 0x12c7))(uEXTMEM4fff);
        return;
      }
      uEXTMEMc871 = 0;
      DAT_EXTMEM_c870 = 0;
    }
  }
  return;
}



/* =========================================================
 * CODE:1467  FUN_CODE_1467  size=163
 * ========================================================= */

void FUN_CODE_1467(void)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  
  DAT_EXTMEM_c87e = 0;
  DAT_EXTMEM_c87f = 0;
  BANK0_R2 = BANK0_R2 | 1;
  cVar2 = DAT_EXTMEM_4fea + '\x01';
  bVar4 = 1;
  while (cVar2 = cVar2 + -1, cVar2 != '\0') {
    bVar4 = bVar4 * '\x02';
  }
  BANK0_R2 = BANK0_R2 | bVar4 & 0xf;
  cVar3 = DAT_EXTMEM_4fea + '\x01';
  cVar2 = '\x01';
  while (cVar3 = cVar3 + -1, cVar3 != '\0') {
    cVar2 = cVar2 * '\x02';
  }
  cVar3 = DAT_EXTMEM_4fea + '\x01';
  bVar4 = 1;
  while (cVar3 = cVar3 + -1, cVar3 != '\0') {
    bVar4 = bVar4 * '\x02';
  }
  BANK0_R2 = BANK0_R2 & ~(cVar2 << 4) & ~(bVar4 & 0xf);
  while( true ) {
    bVar1 = bEXTMEM4ff0;
    bVar4 = bEXTMEM4fe2;
    bEXTMEM4fe2 = bEXTMEM4fe2 + 1;
    if (bEXTMEM4fe2 == 0) {
      cEXTMEM4fe3 = cEXTMEM4fe3 + '\x01';
    }
    bEXTMEM4ff0 = bEXTMEM4ff0 + 1;
    if (BANK0_R3 <= bEXTMEM4ff0) break;
    if (((cEXTMEM4fe3 == '\x01') && (10 < bEXTMEM4fe2)) && (BANK0_R2 < 0xf)) {
      uEXTMEM4fe6 = 1;
      DAT_EXTMEM_4fea = bVar4 - 10;
      if (BANK0_R2 < 6) {
                    /* WARNING: Could not emulate address calculation at 0x12b0 */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ushort)(byte)(*(char *)CONCAT11('O' - (((0x22 < bEXTMEM4ff0) << 7) >> 7),
                                                    bVar1 - 0x22) * '\x03') + 0x12c7))(uEXTMEM4fff);
        return;
      }
      uEXTMEMc871 = 0;
      DAT_EXTMEM_c870 = 0;
    }
  }
  return;
}



/* =========================================================
 * CODE:150a  FUN_CODE_150a  size=113
 * ========================================================= */

void FUN_CODE_150a(void)

{
  cEXTMEM4fff = cEXTMEMca60 + -1;
  bEXTMEM4ff0 = 0;
  while( true ) {
    if (BANK0_R3 <= bEXTMEM4ff0) {
      return;
    }
    if (((cEXTMEM4fe3 == '\x02') && (0x49 < bEXTMEM4fe2)) && (BANK0_R2 < 0x5a)) break;
    bEXTMEM4fe2 = bEXTMEM4fe2 + 1;
    if (bEXTMEM4fe2 == 0) {
      cEXTMEM4fe3 = cEXTMEM4fe3 + '\x01';
    }
    bEXTMEM4ff0 = bEXTMEM4ff0 + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x155a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ushort)((bEXTMEM4fe2 + 0xb6) * '\x03') + 0x155b))(cEXTMEM4fff);
  return;
}



/* =========================================================
 * CODE:1719  FUN_CODE_1719  size=49
 * callers: CODE:18c4
 * ========================================================= */

void FUN_CODE_1719(void)

{
  cEXTMEM4ffd = cEXTMEMca81;
  cEXTMEM4ffc = cEXTMEMca82;
  cEXTMEM4ffb = cEXTMEMca83;
  bEXTMEM4ffa = bEXTMEMca84;
  cEXTMEM4ffe = cEXTMEMca85 + '\x01';
  if (cEXTMEMca82 != '\0') {
    return;
  }
  if (cEXTMEMca81 == '\b') {
    for (bEXTMEM4ff0 = 0; bEXTMEM4ff0 < BANK0_R3; bEXTMEM4ff0 = bEXTMEM4ff0 + 1) {
      if (((cEXTMEM4ffb == '\x01') && (10 < bEXTMEM4ffa)) && (BANK0_R2 < 0xf)) {
        BANK0_R4 = BANK0_R4 & 7;
        *(undefined1 *)CONCAT11('O' - (((0x22 < bEXTMEM4ff0) << 7) >> 7),bEXTMEM4ff0 - 0x23) =
             *(undefined1 *)CONCAT11(-0x36 - (((0x79 < bEXTMEM4ff0) << 7) >> 7),bEXTMEM4ff0 + 0x86);
      }
      bEXTMEM4ffa = bEXTMEM4ffa + 1;
      if (bEXTMEM4ffa == 0) {
        cEXTMEM4ffb = cEXTMEM4ffb + '\x01';
      }
    }
  }
  bEXTMEM4fe2 = bEXTMEMca84;
  cEXTMEM4fe3 = cEXTMEMca83;
  cEXTMEM4fe1 = cEXTMEM4ffd;
  cEXTMEM4fdc = cEXTMEM4ffe;
  return;
}



/* =========================================================
 * CODE:174a  FUN_CODE_174a  size=170
 * ========================================================= */

void FUN_CODE_174a(void)

{
  if (cEXTMEM4ffd == '\b') {
    for (bEXTMEM4ff0 = 0; bEXTMEM4ff0 < BANK0_R3; bEXTMEM4ff0 = bEXTMEM4ff0 + 1) {
      if (((cEXTMEM4ffb == '\x01') && (10 < bEXTMEM4ffa)) && (BANK0_R2 < 0xf)) {
        BANK0_R4 = BANK0_R4 & 7;
        *(undefined1 *)CONCAT11('O' - (((0x22 < bEXTMEM4ff0) << 7) >> 7),bEXTMEM4ff0 - 0x23) =
             *(undefined1 *)CONCAT11(-0x36 - (((0x79 < bEXTMEM4ff0) << 7) >> 7),bEXTMEM4ff0 + 0x86);
      }
      bEXTMEM4ffa = bEXTMEM4ffa + 1;
      if (bEXTMEM4ffa == 0) {
        cEXTMEM4ffb = cEXTMEM4ffb + '\x01';
      }
    }
  }
  uEXTMEM4fe2 = uEXTMEMca84;
  uEXTMEM4fe3 = uEXTMEMca83;
  cEXTMEM4fe1 = cEXTMEM4ffd;
  uEXTMEM4fdc = uEXTMEM4ffe;
  return;
}



/* =========================================================
 * CODE:17f4  FUN_CODE_17f4  size=208
 * callers: CODE:1aa9, CODE:2a03, CODE:23e8
 * ========================================================= */

void FUN_CODE_17f4(ushort param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  short sVar7;
  
  DAT_INTMEM_28 = (byte)param_1;
  BANK1_R3 = 0;
  BANK1_R4 = 0;
  DAT_INTMEM_7a = 0x20;
  DAT_INTMEM_7b = 0xd;
  FUN_CODE_0270(param_1 & 0xff00);
  bVar4 = BANK3_R6 & 2;
LAB_CODE_180e:
  uVar1 = BANK0_R3;
  bVar3 = BANK0_R4;
  if ((((BANK1_R0 == '\0') && ((DAT_EXTMEM_d252 >> 5 & 1) != 1)) && ((DAT_EXTMEM_d218 & 1) != 0)) &&
     (bVar3 = BANK0_R4 & 0xf, 1 < (BANK0_R4 & 0xf))) {
    bVar3 = BANK0_R4 & 0xb;
  }
  do {
    BANK0_R4 = bVar3;
    uVar2 = BANK0_R5;
    uVar6 = 0xcc93;
    BANK0_R3 = uVar1;
    if (DAT_EXTMEM_cc93 == '\x02') {
      bVar3 = 2;
    }
    else {
      uVar6 = 0xc808;
      bVar3 = DAT_EXTMEM_c808;
      if ((DAT_EXTMEM_c808 & 1) == 0) break;
    }
    DAT_INTMEM_7a = 0x20;
    DAT_INTMEM_7b = 0x22;
    FUN_CODE_0270(uVar6 & 0xff00,bVar3);
    bVar3 = BANK0_R4;
  } while( true );
  DAT_INTMEM_29 = DAT_EXTMEM_c802 & 0x80 | DAT_EXTMEM_cc07;
  if ((DAT_INTMEM_29 == 0) && (DAT_EXTMEM_ca40 == 0)) {
    FUN_CODE_1a8b();
    return;
  }
  if ((DAT_EXTMEM_cc07 & 1) != 0) {
    DAT_EXTMEM_cc00 = 1;
    FUN_CODE_11d7();
    BANK0_R6 = BANK0_R6 & 0xfe | 1;
    DAT_EXTMEM_c200 = DAT_EXTMEM_c200 & 0xf1 | 3;
    DAT_EXTMEM_d67e = 0;
    DAT_EXTMEM_d67f = 0;
    return;
  }
  bVar3 = DAT_EXTMEM_ca40;
  if ((DAT_EXTMEM_cc07 & 2) != 0) {
    while (cEXTMEM4fb1 != '\0') {
      DAT_INTMEM_7a = 0x20;
      DAT_INTMEM_7b = 0x28;
      BANK0_R3 = uVar1;
      BANK0_R5 = uVar2;
      FUN_CODE_0270(0x4f00,cEXTMEM4fb1);
    }
    BANK1_R5 = 1;
    uEXTMEM4fda = 2;
    DAT_INTMEM_7a = 4;
    DAT_INTMEM_7b = 0x1b;
    BANK0_R3 = uVar1;
    BANK0_R5 = uVar2;
    FUN_CODE_0270(0x4f00,0);
  }
  if ((DAT_INTMEM_29 >> 5 & 1) != 0) {
    BANK1_R6 = 1;
    uEXTMEM4fda = 8;
  }
  if ((bVar3 >> 5 & 1) != 0) {
    BANK1_R3 = 1;
    uEXTMEMca0e = 1;
    uEXTMEM4fda = 5;
  }
  BANK0_R3 = uVar1;
  BANK0_R5 = uVar2;
  if ((bVar3 >> 1 & 1) != 0) {
    if (bVar4 == 0) {
      uEXTMEMca0c = 1;
    }
    else {
      FUN_CODE_3ebc(uEXTMEMca60,CONCAT11(DAT_INTMEM_23,DAT_INTMEM_22),DAT_INTMEM_24);
      FUN_CODE_3ebc(uEXTMEMca61,CONCAT11(DAT_INTMEM_20,BANK3_R7),DAT_INTMEM_21);
      sVar7 = CONCAT11(DAT_INTMEM_26,DAT_INTMEM_25);
      FUN_CODE_3ebc(0x61,sVar7,DAT_INTMEM_27);
      sVar7 = sVar7 + 1;
      FUN_CODE_3ebc(0xca,sVar7);
      FUN_CODE_3ebc(0,sVar7 + 1);
      uVar2 = BANK0_R5;
      uVar1 = BANK0_R3;
      uEXTMEM4fda = 3;
      DAT_INTMEM_7a = 0x20;
      DAT_INTMEM_7b = 0xe;
      FUN_CODE_0270(0x4f00);
      BANK0_R3 = uVar1;
      BANK0_R5 = uVar2;
    }
  }
  uVar2 = BANK0_R5;
  uVar1 = BANK0_R3;
  bVar5 = 0xca;
  if ((bEXTMEMca00 >> 2 & 1) != 1) {
    bVar5 = 0xca;
    if ((bVar3 >> 6 & 1) != 0) {
      BANK1_R4 = 1;
      uEXTMEMca0e = 1;
      uEXTMEM4fda = 5;
      DAT_INTMEM_7a = 0x20;
      DAT_INTMEM_7b = 0x1a;
      bVar5 = 0x4f;
      FUN_CODE_0270(0x4f00,bEXTMEMca00);
    }
    if ((bVar3 >> 2 & 1) != 0) {
      uEXTMEMca0b = 1;
      BANK0_R2 = BANK0_R2 | 4;
      bVar5 = 0xca;
      BANK0_R3 = uVar1;
      BANK0_R5 = uVar2;
      FUN_CODE_1217();
    }
  }
  if (((bVar3 >> 3 & 1) != 0) && (bVar5 = 0xca, (bEXTMEMca00 >> 2 & 1) != 1)) {
    uEXTMEMca09 = 1;
    BANK0_R3 = uVar1;
    BANK0_R5 = uVar2;
    FUN_CODE_1719(bEXTMEMca00);
    uEXTMEM4fda = 4;
    DAT_INTMEM_7a = 0x20;
    DAT_INTMEM_7b = 0xf;
    bVar5 = 0x4f;
    FUN_CODE_0270(0x4f00);
  }
  if ((DAT_INTMEM_29 >> 2 & 1) != 0) {
    BANK2_R6 = 1;
    bINTMEM7e = BANK0_R2;
    bINTMEM7f = BANK0_R2;
    bINTMEM80 = BANK0_R2;
    if ((bEXTMEMcc37 == 1) || (bEXTMEMcc37 == 5)) {
      DAT_EXTMEM_cc94 = bEXTMEMcc37;
    }
    BANK0_R2 = BANK0_R2 & 0x18;
    if ((DAT_EXTMEM_4fe4 != '\0') && ((bEXTMEMcc37 != BANK1_R2 || ((bEXTMEMcc37 & 7) != BANK1_R1))))
    {
      BANK2_R5 = '\x01';
    }
    uEXTMEM4fda = 6;
    DAT_INTMEM_7a = 0x20;
    DAT_INTMEM_7b = 7;
    bVar5 = 0x4f;
    BANK0_R3 = uVar1;
    BANK0_R5 = uVar2;
    FUN_CODE_0270(0x4f00,DAT_EXTMEM_4fe4);
    BANK0_R5 = uVar2;
    BANK0_R3 = uVar1;
    if (BANK2_R5 != '\0') {
      return;
    }
  }
  if (((DAT_INTMEM_28 & DAT_INTMEM_29) != 0) ||
     (BANK0_R3 = uVar1, BANK0_R5 = uVar2, (BANK3_R6 & bVar3) != 0)) {
    DAT_INTMEM_7a = 0x20;
    DAT_INTMEM_7b = 0x10;
    BANK0_R3 = uVar1;
    BANK0_R5 = uVar2;
    FUN_CODE_0270((ushort)bVar5 << 8);
    return;
  }
  goto LAB_CODE_180e;
}



/* =========================================================
 * CODE:18c4  FUN_CODE_18c4  size=455
 * ========================================================= */

void FUN_CODE_18c4(char param_1,byte param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  byte bVar3;
  ushort uVar4;
  short sVar5;
  
code_c0x18c4:
  uVar2 = BANK0_R5;
  uVar1 = BANK0_R3;
  if ((DAT_INTMEM_29 >> 1 & 1) != 0) {
    while (cEXTMEM4fb1 != '\0') {
      DAT_INTMEM_7a = 0x20;
      DAT_INTMEM_7b = 0x28;
      BANK0_R3 = uVar1;
      BANK0_R5 = uVar2;
      FUN_CODE_0270(0x4f00,cEXTMEM4fb1);
    }
    BANK1_R5 = 1;
    uEXTMEM4fda = 2;
    DAT_INTMEM_7a = 4;
    DAT_INTMEM_7b = 0x1b;
    BANK0_R3 = uVar1;
    BANK0_R5 = uVar2;
    FUN_CODE_0270(0x4f00,0);
  }
  if ((DAT_INTMEM_29 >> 5 & 1) != 0) {
    BANK1_R6 = 1;
    uEXTMEM4fda = 8;
  }
  if ((param_2 >> 5 & 1) != 0) {
    BANK1_R3 = 1;
    uEXTMEMca0e = 1;
    uEXTMEM4fda = 5;
  }
  BANK0_R3 = uVar1;
  BANK0_R5 = uVar2;
  if ((param_2 >> 1 & 1) != 0) {
    if (param_1 == '\0') {
      uEXTMEMca0c = 1;
    }
    else {
      FUN_CODE_3ebc(uEXTMEMca60,CONCAT11(DAT_INTMEM_23,DAT_INTMEM_22),DAT_INTMEM_24);
      FUN_CODE_3ebc(uEXTMEMca61,CONCAT11(DAT_INTMEM_20,BANK3_R7),DAT_INTMEM_21);
      sVar5 = CONCAT11(DAT_INTMEM_26,DAT_INTMEM_25);
      FUN_CODE_3ebc(0x61,sVar5,DAT_INTMEM_27);
      sVar5 = sVar5 + 1;
      FUN_CODE_3ebc(0xca,sVar5);
      FUN_CODE_3ebc(0,sVar5 + 1);
      uVar2 = BANK0_R5;
      uVar1 = BANK0_R3;
      uEXTMEM4fda = 3;
      DAT_INTMEM_7a = 0x20;
      DAT_INTMEM_7b = 0xe;
      FUN_CODE_0270(0x4f00);
      BANK0_R3 = uVar1;
      BANK0_R5 = uVar2;
    }
  }
  uVar2 = BANK0_R5;
  uVar1 = BANK0_R3;
  bVar3 = 0xca;
  if ((bEXTMEMca00 >> 2 & 1) != 1) {
    bVar3 = 0xca;
    if ((param_2 >> 6 & 1) != 0) {
      BANK1_R4 = 1;
      uEXTMEMca0e = 1;
      uEXTMEM4fda = 5;
      DAT_INTMEM_7a = 0x20;
      DAT_INTMEM_7b = 0x1a;
      bVar3 = 0x4f;
      FUN_CODE_0270(0x4f00,bEXTMEMca00);
    }
    if ((param_2 >> 2 & 1) != 0) {
      uEXTMEMca0b = 1;
      BANK0_R2 = BANK0_R2 | 4;
      bVar3 = 0xca;
      BANK0_R3 = uVar1;
      BANK0_R5 = uVar2;
      FUN_CODE_1217();
    }
  }
  if (((param_2 >> 3 & 1) != 0) && (bVar3 = 0xca, (bEXTMEMca00 >> 2 & 1) != 1)) {
    uEXTMEMca09 = 1;
    BANK0_R3 = uVar1;
    BANK0_R5 = uVar2;
    FUN_CODE_1719(bEXTMEMca00);
    uEXTMEM4fda = 4;
    DAT_INTMEM_7a = 0x20;
    DAT_INTMEM_7b = 0xf;
    bVar3 = 0x4f;
    FUN_CODE_0270(0x4f00);
  }
  if ((DAT_INTMEM_29 >> 2 & 1) != 0) {
    BANK2_R6 = 1;
    bINTMEM7e = BANK0_R2;
    bINTMEM7f = BANK0_R2;
    bINTMEM80 = BANK0_R2;
    if ((bEXTMEMcc37 == 1) || (bEXTMEMcc37 == 5)) {
      DAT_EXTMEM_cc94 = bEXTMEMcc37;
    }
    BANK0_R2 = BANK0_R2 & 0x18;
    if ((DAT_EXTMEM_4fe4 != '\0') && ((bEXTMEMcc37 != BANK1_R2 || ((bEXTMEMcc37 & 7) != BANK1_R1))))
    {
      BANK2_R5 = '\x01';
    }
    uEXTMEM4fda = 6;
    DAT_INTMEM_7a = 0x20;
    DAT_INTMEM_7b = 7;
    bVar3 = 0x4f;
    BANK0_R3 = uVar1;
    BANK0_R5 = uVar2;
    FUN_CODE_0270(0x4f00,DAT_EXTMEM_4fe4);
    BANK0_R5 = uVar2;
    BANK0_R3 = uVar1;
    if (BANK2_R5 != '\0') {
      return;
    }
  }
  if (((DAT_INTMEM_28 & DAT_INTMEM_29) != 0) || ((BANK3_R6 & param_2) != 0)) {
    DAT_INTMEM_7a = 0x20;
    DAT_INTMEM_7b = 0x10;
    BANK0_R3 = uVar1;
    BANK0_R5 = uVar2;
    FUN_CODE_0270((ushort)bVar3 << 8);
    return;
  }
  bVar3 = BANK0_R4;
  BANK0_R5 = uVar2;
  if ((((BANK1_R0 == '\0') && ((DAT_EXTMEM_d252 >> 5 & 1) != 1)) && ((DAT_EXTMEM_d218 & 1) != 0)) &&
     (bVar3 = BANK0_R4 & 0xf, 1 < (BANK0_R4 & 0xf))) {
    bVar3 = BANK0_R4 & 0xb;
  }
  do {
    BANK0_R4 = bVar3;
    uVar4 = 0xcc93;
    if (DAT_EXTMEM_cc93 == '\x02') {
      bVar3 = 2;
    }
    else {
      uVar4 = 0xc808;
      bVar3 = DAT_EXTMEM_c808;
      if ((DAT_EXTMEM_c808 & 1) == 0) break;
    }
    DAT_INTMEM_7a = 0x20;
    DAT_INTMEM_7b = 0x22;
    BANK0_R3 = uVar1;
    FUN_CODE_0270(uVar4 & 0xff00,bVar3);
    bVar3 = BANK0_R4;
  } while( true );
  DAT_INTMEM_29 = DAT_EXTMEM_c802 & 0x80 | DAT_EXTMEM_cc07;
  if ((DAT_INTMEM_29 == 0) && (DAT_EXTMEM_ca40 == 0)) {
    BANK0_R3 = uVar1;
    FUN_CODE_1a8b();
    return;
  }
  param_2 = DAT_EXTMEM_ca40;
  BANK0_R3 = uVar1;
  if ((DAT_EXTMEM_cc07 & 1) != 0) {
    DAT_EXTMEM_cc00 = 1;
    FUN_CODE_11d7();
    BANK0_R6 = BANK0_R6 & 0xfe | 1;
    DAT_EXTMEM_c200 = DAT_EXTMEM_c200 & 0xf1 | 3;
    DAT_EXTMEM_d67e = 0;
    DAT_EXTMEM_d67f = 0;
    return;
  }
  goto code_c0x18c4;
}



/* =========================================================
 * CODE:1a8b  FUN_CODE_1a8b  size=30
 * callers: CODE:17f4
 * ========================================================= */

void FUN_CODE_1a8b(ushort param_1,char param_2,byte param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  byte bVar3;
  ushort uVar4;
  short sVar5;
  
code_c0x1a8b:
  uVar1 = BANK0_R3;
  if (((DAT_INTMEM_28 & DAT_INTMEM_29) != 0) || ((BANK3_R6 & param_3) != 0)) {
    DAT_INTMEM_7a = 0x20;
    DAT_INTMEM_7b = 0x10;
    FUN_CODE_0270(param_1 & 0xff00);
    return;
  }
  bVar3 = BANK0_R4;
  if ((((BANK1_R0 == '\0') && ((DAT_EXTMEM_d252 >> 5 & 1) != 1)) && ((DAT_EXTMEM_d218 & 1) != 0)) &&
     (bVar3 = BANK0_R4 & 0xf, 1 < (BANK0_R4 & 0xf))) {
    bVar3 = BANK0_R4 & 0xb;
  }
  do {
    BANK0_R4 = bVar3;
    uVar2 = BANK0_R5;
    uVar4 = 0xcc93;
    BANK0_R3 = uVar1;
    if (DAT_EXTMEM_cc93 == '\x02') {
      bVar3 = 2;
    }
    else {
      uVar4 = 0xc808;
      bVar3 = DAT_EXTMEM_c808;
      if ((DAT_EXTMEM_c808 & 1) == 0) break;
    }
    DAT_INTMEM_7a = 0x20;
    DAT_INTMEM_7b = 0x22;
    FUN_CODE_0270(uVar4 & 0xff00,bVar3);
    bVar3 = BANK0_R4;
  } while( true );
  DAT_INTMEM_29 = DAT_EXTMEM_c802 & 0x80 | DAT_EXTMEM_cc07;
  if ((DAT_INTMEM_29 == 0) && (DAT_EXTMEM_ca40 == 0)) {
    FUN_CODE_1a8b();
    return;
  }
  if ((DAT_EXTMEM_cc07 & 1) != 0) {
    DAT_EXTMEM_cc00 = 1;
    FUN_CODE_11d7();
    BANK0_R6 = BANK0_R6 & 0xfe | 1;
    DAT_EXTMEM_c200 = DAT_EXTMEM_c200 & 0xf1 | 3;
    DAT_EXTMEM_d67e = 0;
    DAT_EXTMEM_d67f = 0;
    return;
  }
  param_3 = DAT_EXTMEM_ca40;
  if ((DAT_EXTMEM_cc07 & 2) != 0) {
    while (cEXTMEM4fb1 != '\0') {
      DAT_INTMEM_7a = 0x20;
      DAT_INTMEM_7b = 0x28;
      BANK0_R3 = uVar1;
      BANK0_R5 = uVar2;
      FUN_CODE_0270(0x4f00,cEXTMEM4fb1);
    }
    BANK1_R5 = 1;
    uEXTMEM4fda = 2;
    DAT_INTMEM_7a = 4;
    DAT_INTMEM_7b = 0x1b;
    BANK0_R3 = uVar1;
    BANK0_R5 = uVar2;
    FUN_CODE_0270(0x4f00,0);
  }
  if ((DAT_INTMEM_29 >> 5 & 1) != 0) {
    BANK1_R6 = 1;
    uEXTMEM4fda = 8;
  }
  if ((param_3 >> 5 & 1) != 0) {
    BANK1_R3 = 1;
    uEXTMEMca0e = 1;
    uEXTMEM4fda = 5;
  }
  BANK0_R3 = uVar1;
  BANK0_R5 = uVar2;
  if ((param_3 >> 1 & 1) != 0) {
    if (param_2 == '\0') {
      uEXTMEMca0c = 1;
    }
    else {
      FUN_CODE_3ebc(uEXTMEMca60,CONCAT11(DAT_INTMEM_23,DAT_INTMEM_22),DAT_INTMEM_24);
      FUN_CODE_3ebc(uEXTMEMca61,CONCAT11(DAT_INTMEM_20,BANK3_R7),DAT_INTMEM_21);
      sVar5 = CONCAT11(DAT_INTMEM_26,DAT_INTMEM_25);
      FUN_CODE_3ebc(0x61,sVar5,DAT_INTMEM_27);
      sVar5 = sVar5 + 1;
      FUN_CODE_3ebc(0xca,sVar5);
      FUN_CODE_3ebc(0,sVar5 + 1);
      uVar2 = BANK0_R5;
      uVar1 = BANK0_R3;
      uEXTMEM4fda = 3;
      DAT_INTMEM_7a = 0x20;
      DAT_INTMEM_7b = 0xe;
      FUN_CODE_0270(0x4f00);
      BANK0_R3 = uVar1;
      BANK0_R5 = uVar2;
    }
  }
  uVar2 = BANK0_R5;
  uVar1 = BANK0_R3;
  param_1 = 0xca00;
  if ((bEXTMEMca00 >> 2 & 1) != 1) {
    if ((param_3 >> 6 & 1) != 0) {
      BANK1_R4 = 1;
      uEXTMEMca0e = 1;
      uEXTMEM4fda = 5;
      DAT_INTMEM_7a = 0x20;
      DAT_INTMEM_7b = 0x1a;
      param_1 = 0x4f00;
      FUN_CODE_0270(0x4f00,bEXTMEMca00);
    }
    if ((param_3 >> 2 & 1) != 0) {
      uEXTMEMca0b = 1;
      BANK0_R2 = BANK0_R2 | 4;
      param_1 = 0xca00;
      BANK0_R3 = uVar1;
      BANK0_R5 = uVar2;
      FUN_CODE_1217();
    }
  }
  if (((param_3 >> 3 & 1) != 0) && (param_1 = 0xca00, (bEXTMEMca00 >> 2 & 1) != 1)) {
    uEXTMEMca09 = 1;
    BANK0_R3 = uVar1;
    BANK0_R5 = uVar2;
    FUN_CODE_1719(bEXTMEMca00);
    uEXTMEM4fda = 4;
    DAT_INTMEM_7a = 0x20;
    DAT_INTMEM_7b = 0xf;
    param_1 = 0x4f00;
    FUN_CODE_0270(0x4f00);
  }
  BANK0_R3 = uVar1;
  BANK0_R5 = uVar2;
  if ((DAT_INTMEM_29 >> 2 & 1) != 0) {
    BANK2_R6 = 1;
    bINTMEM7e = BANK0_R2;
    bINTMEM7f = BANK0_R2;
    bINTMEM80 = BANK0_R2;
    if ((bEXTMEMcc37 == 1) || (bEXTMEMcc37 == 5)) {
      DAT_EXTMEM_cc94 = bEXTMEMcc37;
    }
    BANK0_R2 = BANK0_R2 & 0x18;
    if ((DAT_EXTMEM_4fe4 != '\0') && ((bEXTMEMcc37 != BANK1_R2 || ((bEXTMEMcc37 & 7) != BANK1_R1))))
    {
      BANK2_R5 = '\x01';
    }
    uEXTMEM4fda = 6;
    DAT_INTMEM_7a = 0x20;
    DAT_INTMEM_7b = 7;
    param_1 = 0x4f00;
    FUN_CODE_0270(0x4f00,DAT_EXTMEM_4fe4);
    BANK0_R5 = uVar2;
    BANK0_R3 = uVar1;
    if (BANK2_R5 != '\0') {
      return;
    }
  }
  goto code_c0x1a8b;
}



/* =========================================================
 * CODE:1aa9  FUN_CODE_1aa9  size=201
 * callers: CODE:1f0b, CODE:395b, CODE:2687, CODE:361e, CODE:21a6, CODE:2a03, CODE:223b, CODE:3677, CODE:2332, CODE:3562, CODE:2519, CODE:1f9e, CODE:2972, CODE:36f3, CODE:1f59, CODE:24c4, CODE:2832
 * ========================================================= */

char FUN_CODE_1aa9(char param_1)

{
  bool bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  char cVar6;
  byte bVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  char cVar11;
  char cVar12;
  short sVar13;
  
  DAT_INTMEM_37 = 0;
  DAT_INTMEM_38 = '\0';
  DAT_INTMEM_3a = DAT_INTMEM_2e;
  bEXTMEMcc91 = 0;
  DAT_INTMEM_51 = DAT_INTMEM_33;
  DAT_INTMEM_52 = DAT_INTMEM_34;
  DAT_INTMEM_53 = DAT_INTMEM_35;
  cVar12 = param_1 == '\b';
  DAT_INTMEM_3b = 0;
  DAT_INTMEM_36 = param_1;
  do {
    while( true ) {
      uVar3 = BANK0_R1;
      cEXTMEMca21 = DAT_INTMEM_36;
      bEXTMEMca24 = DAT_INTMEM_2a;
      DAT_INTMEM_3c = DAT_INTMEM_2b;
      DAT_INTMEM_3d = DAT_INTMEM_2c;
      DAT_INTMEM_3e = DAT_INTMEM_2d;
      DAT_INTMEM_3f = 0;
      cEXTMEMca23 = DAT_INTMEM_2b;
      uEXTMEMca22 = 0;
      cEXTMEMca25 = DAT_INTMEM_2e - 1;
      cEXTMEMca20 = '\x04';
      if (cVar12 != '\0') {
        cEXTMEMca20 = DAT_INTMEM_2e + 4;
        DAT_INTMEM_7a = DAT_INTMEM_2f;
        DAT_INTMEM_7b = DAT_INTMEM_2e;
        FUN_CODE_0438(0xca26,cEXTMEMca25,0,0,0);
      }
      uEXTMEMca08 = 1;
      BANK3_R7 = 0x39;
      DAT_INTMEM_20 = 0;
      DAT_INTMEM_21 = 0x40;
      BANK3_R6 = 0x22;
      DAT_INTMEM_22 = DAT_INTMEM_30;
      DAT_INTMEM_23 = DAT_INTMEM_31;
      DAT_INTMEM_24 = DAT_INTMEM_32;
      DAT_INTMEM_25 = DAT_INTMEM_51;
      DAT_INTMEM_26 = DAT_INTMEM_52;
      DAT_INTMEM_27 = DAT_INTMEM_53;
      cVar6 = '\0';
      BANK0_R1 = uVar3;
      FUN_CODE_17f4();
      BANK0_R1 = uVar3;
      DAT_EXTMEM_4fe8 = cVar6;
      if (cVar6 != '\0') {
        return cVar6;
      }
      if (BANK1_R3 == '\0') break;
LAB_CODE_1b9a:
      if (BANK0_R3 <= bEXTMEMcc91) goto LAB_CODE_1baa;
LAB_CODE_1bb2:
      uVar3 = BANK0_R1;
      if ((bEXTMEMca41 & 1) != 0) {
        FUN_CODE_1da2(0x1a4,bEXTMEMca41);
      }
      uEXTMEMca0c = 1;
      bEXTMEMcc91 = bEXTMEMcc91 + 1;
      BANK0_R1 = uVar3;
    }
    sVar13 = CONCAT11(DAT_INTMEM_52,DAT_INTMEM_51);
    uVar3 = FUN_CODE_3ed5(sVar13,DAT_INTMEM_53);
    sVar13 = sVar13 + 1;
    uVar4 = FUN_CODE_3ed5(sVar13,uVar3);
    uVar5 = FUN_CODE_3ed5(sVar13 + 1,uVar4);
    cVar6 = FUN_CODE_3ed5(CONCAT11(uVar4,uVar3),uVar5);
    if (cVar6 == '\x02') goto LAB_CODE_1b9a;
LAB_CODE_1baa:
    if ((bEXTMEMca41 & 1) != 0) goto LAB_CODE_1bb2;
    uVar4 = DAT_INTMEM_30;
    uVar5 = DAT_INTMEM_31;
    uVar2 = DAT_INTMEM_32;
    cVar6 = FUN_CODE_3ed5(CONCAT11(DAT_INTMEM_31,DAT_INTMEM_30),DAT_INTMEM_32);
    bVar7 = FUN_CODE_3ebc(cVar6 + -1,CONCAT11(uVar5,uVar4),uVar2);
    uVar3 = BANK0_R1;
    if (bVar7 != DAT_INTMEM_2e) {
      DAT_INTMEM_38 = '\x01';
    }
    DAT_INTMEM_50 = DAT_INTMEM_36 == '\t';
    if ((!(bool)DAT_INTMEM_50) || (DAT_INTMEM_38 == '\0')) {
      BANK0_R1 = uVar3;
      if (cVar12 == '\0') {
LAB_CODE_1d0d:
        if (DAT_INTMEM_38 != '\0') {
          if (DAT_INTMEM_50 == '\0') {
            cEXTMEMca60 = (DAT_INTMEM_3a != DAT_INTMEM_37) + '\x01';
            uEXTMEMca61 = *(undefined1 *)((ushort)(DAT_INTMEM_3a != DAT_INTMEM_37) + 0x3ef5);
            bEXTMEMca63 = DAT_INTMEM_37;
          }
          else {
            cEXTMEMca60 = FUN_CODE_3ebc(DAT_INTMEM_37,CONCAT11(uVar5,uVar4),uVar2);
            cEXTMEMca60 = cEXTMEMca60 + '\x01';
            DAT_INTMEM_7a = -0x62;
            DAT_INTMEM_7b = 0x4f;
            DAT_INTMEM_7c = 0;
            DAT_INTMEM_7d = DAT_INTMEM_37;
            FUN_CODE_02f1(0xca63,0);
          }
        }
        sVar13 = CONCAT11(DAT_INTMEM_52,DAT_INTMEM_51);
        bVar7 = FUN_CODE_3ed5(sVar13,DAT_INTMEM_53);
        sVar13 = sVar13 + 1;
        cVar12 = FUN_CODE_3ed5(sVar13,bVar7);
        uVar3 = FUN_CODE_3ed5(sVar13 + 1,cVar12);
        cVar12 = cVar12 - (((0xfd < bVar7) << 7) >> 7);
        sVar13 = CONCAT11(DAT_INTMEM_52,DAT_INTMEM_51);
        FUN_CODE_3ebc(bVar7 + 2,sVar13,DAT_INTMEM_53,cVar12,uVar3);
        sVar13 = sVar13 + 1;
        FUN_CODE_3ebc(cVar12,sVar13);
        FUN_CODE_3ebc(uVar3,sVar13 + 1);
        uEXTMEMca0c = 1;
        return '\x01';
      }
      sVar13 = CONCAT11(DAT_INTMEM_52,DAT_INTMEM_51);
      uVar8 = FUN_CODE_3ed5(sVar13,DAT_INTMEM_53);
      sVar13 = sVar13 + 1;
      uVar9 = FUN_CODE_3ed5(sVar13,uVar8);
      uVar10 = FUN_CODE_3ed5(sVar13 + 1,uVar9);
      cVar12 = FUN_CODE_3ed5(CONCAT11(uVar9,uVar8),uVar10);
      BANK0_R1 = uVar3;
      if (cVar12 != '\x01') goto LAB_CODE_1d0d;
      cVar12 = '\x01';
    }
    if (DAT_INTMEM_50 == '\0') {
      sVar13 = CONCAT11(DAT_INTMEM_52,DAT_INTMEM_51);
      BANK0_R1 = uVar3;
      bVar7 = FUN_CODE_3ed5(sVar13,DAT_INTMEM_53);
      sVar13 = sVar13 + 1;
      cVar6 = FUN_CODE_3ed5(sVar13);
      uVar3 = FUN_CODE_3ed5(sVar13 + 1);
      cVar6 = FUN_CODE_3ed5(CONCAT11(cVar6 - (((0xfd < bVar7) << 7) >> 7),bVar7 + 2),uVar3);
      FUN_CODE_3ebc(CONCAT11(uVar5,uVar4),uVar2);
      DAT_INTMEM_2f = cVar6 + DAT_INTMEM_2f;
    }
    else {
      cVar11 = DAT_INTMEM_37 + 0x9e;
      cVar6 = 'O' - (((0x61 < DAT_INTMEM_37) << 7) >> 7);
      uVar10 = 0;
      DAT_INTMEM_7a = 'c';
      DAT_INTMEM_7b = 0xca;
      DAT_INTMEM_7c = 0;
      BANK0_R1 = uVar3;
      DAT_INTMEM_7d = FUN_CODE_3ed5(CONCAT11(uVar5,uVar4),uVar2,cVar11,cVar6,0);
      uVar9 = BANK0_R4;
      bVar7 = BANK0_R3;
      uVar8 = BANK0_R2;
      uVar3 = BANK0_R1;
      FUN_CODE_02f1(CONCAT11(cVar6,cVar11),uVar10);
      BANK0_R1 = uVar3;
      BANK0_R2 = uVar8;
      BANK0_R3 = bVar7;
      BANK0_R4 = uVar9;
    }
    uEXTMEMca0c = 1;
    cVar6 = FUN_CODE_3ed5(CONCAT11(uVar5,uVar4),uVar2);
    DAT_INTMEM_37 = cVar6 + DAT_INTMEM_37;
    cVar6 = FUN_CODE_3ed5(CONCAT11(uVar5,uVar4),uVar2);
    DAT_INTMEM_2e = DAT_INTMEM_2e - cVar6;
    bVar7 = FUN_CODE_3ed5(CONCAT11(uVar5,uVar4),uVar2);
    bVar1 = CARRY1(bVar7,DAT_INTMEM_2a);
    DAT_INTMEM_2a = bVar7 + DAT_INTMEM_2a;
    DAT_INTMEM_2b = DAT_INTMEM_2b - ((bVar1 << 7) >> 7);
    if ((DAT_INTMEM_3a <= DAT_INTMEM_37) ||
       (DAT_INTMEM_3b = DAT_INTMEM_3b + 1, (0x31 < DAT_INTMEM_3b) << 7 < '\0')) goto LAB_CODE_1d0d;
  } while( true );
}



/* =========================================================
 * CODE:1b72  FUN_CODE_1b72  size=560
 * ========================================================= */

char FUN_CODE_1b72(char param_1)

{
  bool bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  char cVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  char cVar10;
  byte bVar11;
  short sVar12;
  
  do {
    if (BANK1_R3 == '\0') {
      sVar12 = CONCAT11(DAT_INTMEM_52,DAT_INTMEM_51);
      uVar3 = FUN_CODE_3ed5(sVar12,DAT_INTMEM_53);
      sVar12 = sVar12 + 1;
      uVar4 = FUN_CODE_3ed5(sVar12,uVar3);
      uVar5 = FUN_CODE_3ed5(sVar12 + 1,uVar4);
      cVar6 = FUN_CODE_3ed5(CONCAT11(uVar4,uVar3),uVar5);
      if (cVar6 == '\x02') goto LAB_CODE_1b9a;
LAB_CODE_1baa:
      if ((bEXTMEMca41 & 1) != 0) goto LAB_CODE_1bb2;
      uVar4 = DAT_INTMEM_30;
      uVar5 = DAT_INTMEM_31;
      uVar2 = DAT_INTMEM_32;
      cVar6 = FUN_CODE_3ed5(CONCAT11(DAT_INTMEM_31,DAT_INTMEM_30),DAT_INTMEM_32);
      cVar6 = FUN_CODE_3ebc(cVar6 + -1,CONCAT11(uVar5,uVar4),uVar2);
      uVar3 = BANK0_R1;
      if (cVar6 != DAT_INTMEM_2e) {
        DAT_INTMEM_38 = '\x01';
      }
      DAT_INTMEM_50 = DAT_INTMEM_36 == '\t';
      if ((!(bool)DAT_INTMEM_50) || (DAT_INTMEM_38 == '\0')) {
        BANK0_R1 = uVar3;
        if (param_1 == '\0') goto LAB_CODE_1d0d;
        sVar12 = CONCAT11(DAT_INTMEM_52,DAT_INTMEM_51);
        uVar7 = FUN_CODE_3ed5(sVar12,DAT_INTMEM_53);
        sVar12 = sVar12 + 1;
        uVar8 = FUN_CODE_3ed5(sVar12,uVar7);
        uVar9 = FUN_CODE_3ed5(sVar12 + 1,uVar8);
        cVar6 = FUN_CODE_3ed5(CONCAT11(uVar8,uVar7),uVar9);
        BANK0_R1 = uVar3;
        if (cVar6 != '\x01') goto LAB_CODE_1d0d;
        param_1 = '\x01';
      }
      if (DAT_INTMEM_50 == '\0') {
        sVar12 = CONCAT11(DAT_INTMEM_52,DAT_INTMEM_51);
        BANK0_R1 = uVar3;
        bVar11 = FUN_CODE_3ed5(sVar12,DAT_INTMEM_53);
        sVar12 = sVar12 + 1;
        cVar6 = FUN_CODE_3ed5(sVar12);
        uVar3 = FUN_CODE_3ed5(sVar12 + 1);
        cVar6 = FUN_CODE_3ed5(CONCAT11(cVar6 - (((0xfd < bVar11) << 7) >> 7),bVar11 + 2),uVar3);
        FUN_CODE_3ebc(CONCAT11(uVar5,uVar4),uVar2);
        DAT_INTMEM_2f = cVar6 + DAT_INTMEM_2f;
      }
      else {
        cVar10 = DAT_INTMEM_37 + 0x9e;
        cVar6 = 'O' - (((0x61 < DAT_INTMEM_37) << 7) >> 7);
        uVar9 = 0;
        DAT_INTMEM_7a = 'c';
        DAT_INTMEM_7b = -0x36;
        DAT_INTMEM_7c = 0;
        BANK0_R1 = uVar3;
        DAT_INTMEM_7d = FUN_CODE_3ed5(CONCAT11(uVar5,uVar4),uVar2,cVar10,cVar6,0);
        uVar8 = BANK0_R4;
        bVar11 = BANK0_R3;
        uVar7 = BANK0_R2;
        uVar3 = BANK0_R1;
        FUN_CODE_02f1(CONCAT11(cVar6,cVar10),uVar9);
        BANK0_R1 = uVar3;
        BANK0_R2 = uVar7;
        BANK0_R3 = bVar11;
        BANK0_R4 = uVar8;
      }
      uEXTMEMca0c = 1;
      cVar6 = FUN_CODE_3ed5(CONCAT11(uVar5,uVar4),uVar2);
      DAT_INTMEM_37 = cVar6 + DAT_INTMEM_37;
      cVar6 = FUN_CODE_3ed5(CONCAT11(uVar5,uVar4),uVar2);
      DAT_INTMEM_2e = DAT_INTMEM_2e - cVar6;
      bVar11 = FUN_CODE_3ed5(CONCAT11(uVar5,uVar4),uVar2);
      bVar1 = CARRY1(bVar11,DAT_INTMEM_2a);
      DAT_INTMEM_2a = bVar11 + DAT_INTMEM_2a;
      DAT_INTMEM_2b = DAT_INTMEM_2b - ((bVar1 << 7) >> 7);
      if ((DAT_INTMEM_3a <= DAT_INTMEM_37) ||
         (DAT_INTMEM_3b = DAT_INTMEM_3b + 1, (0x31 < DAT_INTMEM_3b) << 7 < '\0')) {
LAB_CODE_1d0d:
        if (DAT_INTMEM_38 != '\0') {
          if (DAT_INTMEM_50 == '\0') {
            cEXTMEMca60 = (DAT_INTMEM_3a != DAT_INTMEM_37) + '\x01';
            uEXTMEMca61 = *(undefined1 *)((ushort)(DAT_INTMEM_3a != DAT_INTMEM_37) + 0x3ef5);
            bEXTMEMca63 = DAT_INTMEM_37;
          }
          else {
            cEXTMEMca60 = FUN_CODE_3ebc(DAT_INTMEM_37,CONCAT11(uVar5,uVar4),uVar2);
            cEXTMEMca60 = cEXTMEMca60 + '\x01';
            DAT_INTMEM_7a = -0x62;
            DAT_INTMEM_7b = 'O';
            DAT_INTMEM_7c = 0;
            DAT_INTMEM_7d = DAT_INTMEM_37;
            FUN_CODE_02f1(0xca63,0);
          }
        }
        sVar12 = CONCAT11(DAT_INTMEM_52,DAT_INTMEM_51);
        bVar11 = FUN_CODE_3ed5(sVar12,DAT_INTMEM_53);
        sVar12 = sVar12 + 1;
        cVar6 = FUN_CODE_3ed5(sVar12,bVar11);
        uVar3 = FUN_CODE_3ed5(sVar12 + 1,cVar6);
        cVar6 = cVar6 - (((0xfd < bVar11) << 7) >> 7);
        sVar12 = CONCAT11(DAT_INTMEM_52,DAT_INTMEM_51);
        FUN_CODE_3ebc(bVar11 + 2,sVar12,DAT_INTMEM_53,cVar6,uVar3);
        sVar12 = sVar12 + 1;
        FUN_CODE_3ebc(cVar6,sVar12);
        FUN_CODE_3ebc(uVar3,sVar12 + 1);
        uEXTMEMca0c = 1;
        return '\x01';
      }
    }
    else {
LAB_CODE_1b9a:
      if (BANK0_R3 <= bEXTMEMcc91) goto LAB_CODE_1baa;
LAB_CODE_1bb2:
      uVar3 = BANK0_R1;
      if ((bEXTMEMca41 & 1) != 0) {
        FUN_CODE_1da2(0x1a4,bEXTMEMca41);
      }
      uEXTMEMca0c = 1;
      bEXTMEMcc91 = bEXTMEMcc91 + 1;
      BANK0_R1 = uVar3;
    }
    uVar3 = BANK0_R1;
    cEXTMEMca21 = DAT_INTMEM_36;
    bEXTMEMca24 = DAT_INTMEM_2a;
    DAT_INTMEM_3c = DAT_INTMEM_2b;
    DAT_INTMEM_3d = DAT_INTMEM_2c;
    DAT_INTMEM_3e = DAT_INTMEM_2d;
    DAT_INTMEM_3f = 0;
    cEXTMEMca23 = DAT_INTMEM_2b;
    uEXTMEMca22 = 0;
    cEXTMEMca25 = DAT_INTMEM_2e + -1;
    cEXTMEMca20 = '\x04';
    if (param_1 != '\0') {
      cEXTMEMca20 = DAT_INTMEM_2e + '\x04';
      DAT_INTMEM_7a = DAT_INTMEM_2f;
      DAT_INTMEM_7b = DAT_INTMEM_2e;
      FUN_CODE_0438(0xca26,cEXTMEMca25,0,0,0);
    }
    uEXTMEMca08 = 1;
    BANK3_R7 = 0x39;
    DAT_INTMEM_20 = 0;
    DAT_INTMEM_21 = 0x40;
    BANK3_R6 = 0x22;
    DAT_INTMEM_22 = DAT_INTMEM_30;
    DAT_INTMEM_23 = DAT_INTMEM_31;
    DAT_INTMEM_24 = DAT_INTMEM_32;
    DAT_INTMEM_25 = DAT_INTMEM_51;
    DAT_INTMEM_26 = DAT_INTMEM_52;
    DAT_INTMEM_27 = DAT_INTMEM_53;
    cVar6 = '\0';
    BANK0_R1 = uVar3;
    FUN_CODE_17f4();
    BANK0_R1 = uVar3;
    DAT_EXTMEM_4fe8 = cVar6;
    if (cVar6 != '\0') {
      return cVar6;
    }
  } while( true );
}



/* =========================================================
 * CODE:1da2  FUN_CODE_1da2  size=36
 * callers: CODE:0d4e, CODE:0df0, CODE:1b72, CODE:2332, CODE:395b, CODE:271d, CODE:2a03, CODE:256e, CODE:0525, CODE:0aa6
 * ========================================================= */

char FUN_CODE_1da2(undefined2 param_1)

{
  char cVar1;
  
  uEXTMEMcc09 = 0;
  do {
    BANK0_R4 = BANK0_R4 | bEXTMEMcc08;
    BANK0_R5 = BANK0_R5;
    cVar1 = (char)((ushort)param_1 >> 8) - ((((char)param_1 != '\0') << 7) >> 7);
  } while ((cVar1 != '\0') << 7 < '\0');
  return -cVar1;
}



/* =========================================================
 * CODE:1dc6  FUN_CODE_1dc6  size=30
 * callers: CODE:3677, CODE:2687, CODE:2972, CODE:2458, CODE:23e8, CODE:2832
 * ========================================================= */

void FUN_CODE_1dc6(byte param_1)

{
  BANK3_R0 = (param_1 & 0xc) >> 2;
  if (BANK0_R3 < 4) {
    switch(param_1 & 0xc) {
    case 0:
      BANK0_R3 = BANK0_R3 & 0xf1;
      DAT_EXTMEM_c200 = (param_1 & 3) * '\x02' | DAT_EXTMEM_c200 | 1;
      uEXTMEMce8d = 0xf8;
      uEXTMEMc20c = 9;
      if (cEXTMEM4fe6 == '\0') {
        if ((param_1 & 1) != 0) {
          DAT_EXTMEM_c870 = '\0';
        }
        uEXTMEMc871 = 0;
      }
      break;
    case 4:
      BANK0_R2 = BANK0_R2 & 0xf0;
      DAT_EXTMEM_c200 = DAT_EXTMEM_c200 & 0xf1 | 2;
      break;
    case 8:
      BANK0_R2 = BANK0_R2 & 0xf0;
      if ((bEXTMEMc806 & 1) == 0) {
        if (cEXTMEM4fe6 == '\0') {
          DAT_EXTMEM_c87c = 0;
          DAT_EXTMEM_c87d = 0x20;
          DAT_EXTMEM_c87e = 0xff;
          DAT_EXTMEM_c87f = 1;
          uEXTMEMc871 = 0;
          BANK0_R2 = 0;
          DAT_EXTMEM_c870 = DAT_EXTMEM_d67e;
        }
      }
      else {
        uEXTMEMc20c = 0;
      }
      break;
    case 0xc:
      BANK0_R2 = BANK0_R2 & 0xf0;
      if ((bEXTMEMc806 & 1) == 0) {
        if (cEXTMEM4fe6 == '\0') {
          uEXTMEMc871 = 0;
          DAT_EXTMEM_c870 = DAT_EXTMEM_d67e << 4;
        }
      }
      else {
        uEXTMEMce18 = 0xe0;
        uEXTMEMce19 = 0xe0;
        uEXTMEMce1a = 0xe0;
        uEXTMEMce1b = 0xe0;
        uEXTMEMce8d = 2;
      }
    }
  }
  return;
}



/* =========================================================
 * CODE:1e1b  FUN_CODE_1e1b  size=18
 * ========================================================= */

void FUN_CODE_1e1b(byte param_1)

{
  if ((param_1 & 1) != 0) {
    DAT_EXTMEM_c870 = 0;
  }
  uEXTMEMc871 = 0;
  return;
}



/* =========================================================
 * CODE:1f0b  FUN_CODE_1f0b  size=78
 * callers: CODE:28f6, CODE:395b, CODE:271d, CODE:256e
 * ========================================================= */

byte FUN_CODE_1f0b(char param_1)

{
  byte bVar1;
  undefined1 uVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  
  bVar5 = BANK0_R3;
  uVar2 = BANK0_R2;
  cVar4 = param_1 == '\x02';
  if ((bool)cVar4) {
    DAT_INTMEM_30 = 0xf;
    DAT_INTMEM_31 = 0;
    DAT_INTMEM_32 = 0x40;
    DAT_INTMEM_33 = 0x10;
    DAT_INTMEM_34 = 0;
    DAT_INTMEM_35 = 0x40;
    DAT_INTMEM_2a = 0;
    DAT_INTMEM_2b = 2;
    DAT_INTMEM_2c = 0;
    DAT_INTMEM_2d = 0;
    DAT_INTMEM_2e = 6;
    DAT_INTMEM_2f = 0;
    bVar6 = 9;
    FUN_CODE_1aa9();
    BANK0_R3 = bVar5;
    BANK0_R2 = uVar2;
    DAT_EXTMEM_4fe8 = bVar6;
    if (bVar6 != 0) {
      return bVar6;
    }
    bVar5 = FUN_CODE_1fe0();
    return bVar5;
  }
  if (param_1 == '\x01') {
    DAT_INTMEM_30 = 0xf;
    DAT_INTMEM_31 = 0;
    DAT_INTMEM_32 = 0x40;
    DAT_INTMEM_33 = 0x10;
    DAT_INTMEM_34 = 0;
    DAT_INTMEM_35 = 0x40;
    DAT_INTMEM_2a = 2;
    DAT_INTMEM_2b = 2;
    DAT_INTMEM_2c = 0;
    DAT_INTMEM_2d = 0;
    DAT_INTMEM_2e = 6;
    DAT_INTMEM_2f = 0;
    bVar6 = 9;
    FUN_CODE_1aa9();
    BANK0_R3 = bVar5;
    BANK0_R2 = uVar2;
    DAT_EXTMEM_4fe8 = bVar6;
    if (bVar6 != 0) {
      return bVar6;
    }
  }
  else {
    DAT_INTMEM_30 = 0xf;
    DAT_INTMEM_31 = 0;
    DAT_INTMEM_32 = 0x40;
    DAT_INTMEM_33 = 0x10;
    DAT_INTMEM_34 = 0;
    DAT_INTMEM_35 = 0x40;
    DAT_INTMEM_2a = 2;
    DAT_INTMEM_2b = 2;
    DAT_INTMEM_2c = 0;
    DAT_INTMEM_2d = 0;
    DAT_INTMEM_2e = 3;
    DAT_INTMEM_2f = 0;
    bVar6 = 9;
    FUN_CODE_1aa9();
    BANK0_R3 = bVar5;
    BANK0_R2 = uVar2;
    DAT_EXTMEM_4fe8 = bVar6;
    if (bVar6 != 0) {
      return bVar6;
    }
  }
  if (cVar4 == '\0') {
    BANK0_R2 = uVar2;
    BANK0_R3 = bVar5;
    bVar5 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
    DAT_INTMEM_81 = BANK0_R3;
    bVar6 = BANK2_R2;
    bINTMEM8a = FUN_CODE_3ed5(CONCAT11(BANK2_R1 - (((0xfe < BANK2_R0) << 7) >> 7),BANK2_R0 + 1),
                              BANK2_R2);
    DAT_INTMEM_82 = BANK0_R4;
    bINTMEM87 = bVar5 & 1;
    bINTMEM88 = bVar5 & 0x10;
    bINTMEM89 = bINTMEM8a & 1;
    bINTMEM8a = bINTMEM8a & 0x10;
    bVar7 = FUN_CODE_3ed5(CONCAT11(BANK2_R1 - (((0xfd < BANK2_R0) << 7) >> 7),BANK2_R0 + 2),BANK2_R2
                         );
    bVar5 = bVar7 & 0xc0;
    BANK2_R3 = bVar7 & 1;
    BANK2_R7 = bVar5;
    if (param_1 == '\x01') {
      bVar5 = FUN_CODE_3ed5(CONCAT11(BANK2_R1 - (((0xfb < BANK2_R0) << 7) >> 7),BANK2_R0 + 4),
                            BANK2_R2);
      DAT_INTMEM_83 = bVar5 & 0xf;
      DAT_INTMEM_84 = BANK0_R2;
      bVar7 = BANK2_R1 - (((0xfa < BANK2_R0) << 7) >> 7);
      bVar5 = FUN_CODE_3ed5(CONCAT11(bVar7,BANK2_R0 + 5),BANK2_R2);
      DAT_INTMEM_85 = bVar5 & 0xf;
      DAT_INTMEM_86 = BANK0_R2;
      bVar5 = DAT_EXTMEM_c848;
      if ((DAT_EXTMEM_c848 & 1) != 0) {
        for (bVar3 = 0; bVar3 < 4; bVar3 = bVar3 + 1) {
          BANK0_R3 = *(byte *)(bVar3 + 0x83) & 0xc;
          BANK0_R6 = bVar7 >> 2;
          bVar1 = (-((CARRY1(bVar6,bVar7 & 3) << 7) >> 7) ^ 0x80U) -
                  (((3 < bVar6 + (bVar7 & 3)) << 7) >> 7);
          bVar5 = 0x80 - bVar1;
          bVar7 = BANK0_R6;
          if (0x80 < bVar1) {
            bVar7 = BANK0_R6 * '\x04';
            bVar5 = bVar7 | 3 - BANK0_R6;
            *(byte *)(bVar3 + 0x83) = bVar5;
          }
        }
      }
    }
  }
  else {
    BANK0_R2 = uVar2;
    BANK0_R3 = bVar5;
    bVar5 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
    DAT_EXTMEM_0120 = bVar5 & 0x1f;
    bVar5 = FUN_CODE_3ed5(CONCAT11(BANK2_R1 - (((0xfd < BANK2_R0) << 7) >> 7),BANK2_R0 + 2),BANK2_R2
                         );
    DAT_INTMEM_81 = BANK0_R3;
    bINTMEM8a = FUN_CODE_3ed5(CONCAT11(BANK2_R1 - (((0xfc < BANK2_R0) << 7) >> 7),BANK2_R0 + 3),
                              BANK2_R2);
    DAT_INTMEM_82 = BANK0_R4;
    bINTMEM87 = bVar5 & 1;
    bINTMEM88 = bVar5 & 0x10;
    bINTMEM89 = bINTMEM8a & 1;
    bINTMEM8a = bINTMEM8a & 0x10;
    bVar6 = FUN_CODE_3ed5(CONCAT11(BANK2_R1 - (((0xfb < BANK2_R0) << 7) >> 7),BANK2_R0 + 4),BANK2_R2
                         );
    bVar5 = bVar6 & 0xc0;
    BANK2_R3 = bVar6 & 1;
    BANK2_R7 = bVar5;
  }
  return bVar5;
}



/* =========================================================
 * CODE:1f59  FUN_CODE_1f59  size=69
 * ========================================================= */

byte FUN_CODE_1f59(char param_1,char param_2)

{
  byte bVar1;
  undefined1 uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  
  bVar5 = BANK0_R3;
  uVar2 = BANK0_R2;
  if (param_1 == '\x01') {
    DAT_INTMEM_30 = 0xf;
    DAT_INTMEM_31 = 0;
    DAT_INTMEM_32 = 0x40;
    DAT_INTMEM_33 = 0x10;
    DAT_INTMEM_34 = 0;
    DAT_INTMEM_35 = 0x40;
    DAT_INTMEM_2a = 2;
    DAT_INTMEM_2b = 2;
    DAT_INTMEM_2c = 0;
    DAT_INTMEM_2d = 0;
    DAT_INTMEM_2e = 6;
    DAT_INTMEM_2f = 0;
    bVar4 = 9;
    FUN_CODE_1aa9();
    BANK0_R3 = bVar5;
    BANK0_R2 = uVar2;
    DAT_EXTMEM_4fe8 = bVar4;
    if (bVar4 != 0) {
      return bVar4;
    }
  }
  else {
    DAT_INTMEM_30 = 0xf;
    DAT_INTMEM_31 = 0;
    DAT_INTMEM_32 = 0x40;
    DAT_INTMEM_33 = 0x10;
    DAT_INTMEM_34 = 0;
    DAT_INTMEM_35 = 0x40;
    DAT_INTMEM_2a = 2;
    DAT_INTMEM_2b = 2;
    DAT_INTMEM_2c = 0;
    DAT_INTMEM_2d = 0;
    DAT_INTMEM_2e = 3;
    DAT_INTMEM_2f = 0;
    bVar4 = 9;
    FUN_CODE_1aa9();
    BANK0_R3 = bVar5;
    BANK0_R2 = uVar2;
    DAT_EXTMEM_4fe8 = bVar4;
    if (bVar4 != 0) {
      return bVar4;
    }
  }
  BANK0_R2 = uVar2;
  BANK0_R3 = bVar5;
  if (param_2 == '\0') {
    bVar5 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
    DAT_INTMEM_81 = BANK0_R3;
    bVar4 = BANK2_R2;
    bINTMEM8a = FUN_CODE_3ed5(CONCAT11(BANK2_R1 - (((0xfe < BANK2_R0) << 7) >> 7),BANK2_R0 + 1),
                              BANK2_R2);
    DAT_INTMEM_82 = BANK0_R4;
    bINTMEM87 = bVar5 & 1;
    bINTMEM88 = bVar5 & 0x10;
    bINTMEM89 = bINTMEM8a & 1;
    bINTMEM8a = bINTMEM8a & 0x10;
    bVar6 = FUN_CODE_3ed5(CONCAT11(BANK2_R1 - (((0xfd < BANK2_R0) << 7) >> 7),BANK2_R0 + 2),BANK2_R2
                         );
    bVar5 = bVar6 & 0xc0;
    BANK2_R3 = bVar6 & 1;
    BANK2_R7 = bVar5;
    if (param_1 == '\x01') {
      bVar5 = FUN_CODE_3ed5(CONCAT11(BANK2_R1 - (((0xfb < BANK2_R0) << 7) >> 7),BANK2_R0 + 4),
                            BANK2_R2);
      DAT_INTMEM_83 = bVar5 & 0xf;
      DAT_INTMEM_84 = BANK0_R2;
      bVar6 = BANK2_R1 - (((0xfa < BANK2_R0) << 7) >> 7);
      bVar5 = FUN_CODE_3ed5(CONCAT11(bVar6,BANK2_R0 + 5),BANK2_R2);
      DAT_INTMEM_85 = bVar5 & 0xf;
      DAT_INTMEM_86 = BANK0_R2;
      bVar5 = DAT_EXTMEM_c848;
      if ((DAT_EXTMEM_c848 & 1) != 0) {
        for (bVar3 = 0; bVar3 < 4; bVar3 = bVar3 + 1) {
          BANK0_R3 = *(byte *)(bVar3 + 0x83) & 0xc;
          BANK0_R6 = bVar6 >> 2;
          bVar1 = (-((CARRY1(bVar4,bVar6 & 3) << 7) >> 7) ^ 0x80U) -
                  (((3 < bVar4 + (bVar6 & 3)) << 7) >> 7);
          bVar5 = 0x80 - bVar1;
          bVar6 = BANK0_R6;
          if (0x80 < bVar1) {
            bVar6 = BANK0_R6 * '\x04';
            bVar5 = bVar6 | 3 - BANK0_R6;
            *(byte *)(bVar3 + 0x83) = bVar5;
          }
        }
      }
    }
  }
  else {
    bVar5 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
    DAT_EXTMEM_0120 = bVar5 & 0x1f;
    bVar5 = FUN_CODE_3ed5(CONCAT11(BANK2_R1 - (((0xfd < BANK2_R0) << 7) >> 7),BANK2_R0 + 2),BANK2_R2
                         );
    DAT_INTMEM_81 = BANK0_R3;
    bINTMEM8a = FUN_CODE_3ed5(CONCAT11(BANK2_R1 - (((0xfc < BANK2_R0) << 7) >> 7),BANK2_R0 + 3),
                              BANK2_R2);
    DAT_INTMEM_82 = BANK0_R4;
    bINTMEM87 = bVar5 & 1;
    bINTMEM88 = bVar5 & 0x10;
    bINTMEM89 = bINTMEM8a & 1;
    bINTMEM8a = bINTMEM8a & 0x10;
    bVar4 = FUN_CODE_3ed5(CONCAT11(BANK2_R1 - (((0xfb < BANK2_R0) << 7) >> 7),BANK2_R0 + 4),BANK2_R2
                         );
    bVar5 = bVar4 & 0xc0;
    BANK2_R3 = bVar4 & 1;
    BANK2_R7 = bVar5;
  }
  return bVar5;
}



/* =========================================================
 * CODE:1f9e  FUN_CODE_1f9e  size=66
 * ========================================================= */

byte FUN_CODE_1f9e(char param_1,char param_2)

{
  byte bVar1;
  undefined1 uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  
  bVar5 = BANK0_R3;
  uVar2 = BANK0_R2;
  DAT_INTMEM_30 = 0xf;
  DAT_INTMEM_31 = 0;
  DAT_INTMEM_32 = 0x40;
  DAT_INTMEM_33 = 0x10;
  DAT_INTMEM_34 = 0;
  DAT_INTMEM_35 = 0x40;
  DAT_INTMEM_2a = 2;
  DAT_INTMEM_2b = 2;
  DAT_INTMEM_2c = 0;
  DAT_INTMEM_2d = 0;
  DAT_INTMEM_2e = 3;
  DAT_INTMEM_2f = 0;
  bVar4 = 9;
  FUN_CODE_1aa9();
  BANK0_R3 = bVar5;
  BANK0_R2 = uVar2;
  DAT_EXTMEM_4fe8 = bVar4;
  if (bVar4 != 0) {
    return bVar4;
  }
  if (param_2 == '\0') {
    bVar5 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
    DAT_INTMEM_81 = BANK0_R3;
    bVar4 = BANK2_R2;
    bINTMEM8a = FUN_CODE_3ed5(CONCAT11(BANK2_R1 - (((0xfe < BANK2_R0) << 7) >> 7),BANK2_R0 + 1),
                              BANK2_R2);
    DAT_INTMEM_82 = BANK0_R4;
    bINTMEM87 = bVar5 & 1;
    bINTMEM88 = bVar5 & 0x10;
    bINTMEM89 = bINTMEM8a & 1;
    bINTMEM8a = bINTMEM8a & 0x10;
    bVar6 = FUN_CODE_3ed5(CONCAT11(BANK2_R1 - (((0xfd < BANK2_R0) << 7) >> 7),BANK2_R0 + 2),BANK2_R2
                         );
    bVar5 = bVar6 & 0xc0;
    BANK2_R3 = bVar6 & 1;
    BANK2_R7 = bVar5;
    if (param_1 == '\x01') {
      bVar5 = FUN_CODE_3ed5(CONCAT11(BANK2_R1 - (((0xfb < BANK2_R0) << 7) >> 7),BANK2_R0 + 4),
                            BANK2_R2);
      DAT_INTMEM_83 = bVar5 & 0xf;
      DAT_INTMEM_84 = BANK0_R2;
      bVar6 = BANK2_R1 - (((0xfa < BANK2_R0) << 7) >> 7);
      bVar5 = FUN_CODE_3ed5(CONCAT11(bVar6,BANK2_R0 + 5),BANK2_R2);
      DAT_INTMEM_85 = bVar5 & 0xf;
      DAT_INTMEM_86 = BANK0_R2;
      bVar5 = DAT_EXTMEM_c848;
      if ((DAT_EXTMEM_c848 & 1) != 0) {
        for (bVar3 = 0; bVar3 < 4; bVar3 = bVar3 + 1) {
          BANK0_R3 = *(byte *)(bVar3 + 0x83) & 0xc;
          BANK0_R6 = bVar6 >> 2;
          bVar1 = (-((CARRY1(bVar4,bVar6 & 3) << 7) >> 7) ^ 0x80U) -
                  (((3 < bVar4 + (bVar6 & 3)) << 7) >> 7);
          bVar5 = 0x80 - bVar1;
          bVar6 = BANK0_R6;
          if (0x80 < bVar1) {
            bVar6 = BANK0_R6 * '\x04';
            bVar5 = bVar6 | 3 - BANK0_R6;
            *(byte *)(bVar3 + 0x83) = bVar5;
          }
        }
      }
    }
  }
  else {
    bVar5 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
    DAT_EXTMEM_0120 = bVar5 & 0x1f;
    bVar5 = FUN_CODE_3ed5(CONCAT11(BANK2_R1 - (((0xfd < BANK2_R0) << 7) >> 7),BANK2_R0 + 2),BANK2_R2
                         );
    DAT_INTMEM_81 = BANK0_R3;
    bINTMEM8a = FUN_CODE_3ed5(CONCAT11(BANK2_R1 - (((0xfc < BANK2_R0) << 7) >> 7),BANK2_R0 + 3),
                              BANK2_R2);
    DAT_INTMEM_82 = BANK0_R4;
    bINTMEM87 = bVar5 & 1;
    bINTMEM88 = bVar5 & 0x10;
    bINTMEM89 = bINTMEM8a & 1;
    bINTMEM8a = bINTMEM8a & 0x10;
    bVar4 = FUN_CODE_3ed5(CONCAT11(BANK2_R1 - (((0xfb < BANK2_R0) << 7) >> 7),BANK2_R0 + 4),BANK2_R2
                         );
    bVar5 = bVar4 & 0xc0;
    BANK2_R3 = bVar4 & 1;
    BANK2_R7 = bVar5;
  }
  return bVar5;
}



/* =========================================================
 * CODE:1fe0  FUN_CODE_1fe0  size=397
 * callers: CODE:1f0b
 * ========================================================= */

byte FUN_CODE_1fe0(char param_1,char param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  
  if (param_2 == '\0') {
    bVar4 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
    DAT_INTMEM_81 = BANK0_R3;
    bVar3 = BANK2_R2;
    bINTMEM8a = FUN_CODE_3ed5(CONCAT11(BANK2_R1 - (((0xfe < BANK2_R0) << 7) >> 7),BANK2_R0 + 1),
                              BANK2_R2);
    DAT_INTMEM_82 = BANK0_R4;
    bINTMEM87 = bVar4 & 1;
    bINTMEM88 = bVar4 & 0x10;
    bINTMEM89 = bINTMEM8a & 1;
    bINTMEM8a = bINTMEM8a & 0x10;
    bVar5 = FUN_CODE_3ed5(CONCAT11(BANK2_R1 - (((0xfd < BANK2_R0) << 7) >> 7),BANK2_R0 + 2),BANK2_R2
                         );
    bVar4 = bVar5 & 0xc0;
    BANK2_R3 = bVar5 & 1;
    BANK2_R7 = bVar4;
    if (param_1 == '\x01') {
      bVar4 = FUN_CODE_3ed5(CONCAT11(BANK2_R1 - (((0xfb < BANK2_R0) << 7) >> 7),BANK2_R0 + 4),
                            BANK2_R2);
      DAT_INTMEM_83 = bVar4 & 0xf;
      DAT_INTMEM_84 = BANK0_R2;
      bVar5 = BANK2_R1 - (((0xfa < BANK2_R0) << 7) >> 7);
      bVar4 = FUN_CODE_3ed5(CONCAT11(bVar5,BANK2_R0 + 5),BANK2_R2);
      DAT_INTMEM_85 = bVar4 & 0xf;
      DAT_INTMEM_86 = BANK0_R2;
      bVar4 = DAT_EXTMEM_c848;
      if ((DAT_EXTMEM_c848 & 1) != 0) {
        for (bVar2 = 0; bVar2 < 4; bVar2 = bVar2 + 1) {
          BANK0_R3 = *(byte *)(bVar2 + 0x83) & 0xc;
          BANK0_R6 = bVar5 >> 2;
          bVar1 = (-((CARRY1(bVar3,bVar5 & 3) << 7) >> 7) ^ 0x80U) -
                  (((3 < bVar3 + (bVar5 & 3)) << 7) >> 7);
          bVar4 = 0x80 - bVar1;
          bVar5 = BANK0_R6;
          if (0x80 < bVar1) {
            bVar5 = BANK0_R6 * '\x04';
            bVar4 = bVar5 | 3 - BANK0_R6;
            *(byte *)(bVar2 + 0x83) = bVar4;
          }
        }
      }
    }
  }
  else {
    bVar4 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
    DAT_EXTMEM_0120 = bVar4 & 0x1f;
    bVar4 = FUN_CODE_3ed5(CONCAT11(BANK2_R1 - (((0xfd < BANK2_R0) << 7) >> 7),BANK2_R0 + 2),BANK2_R2
                         );
    DAT_INTMEM_81 = BANK0_R3;
    bINTMEM8a = FUN_CODE_3ed5(CONCAT11(BANK2_R1 - (((0xfc < BANK2_R0) << 7) >> 7),BANK2_R0 + 3),
                              BANK2_R2);
    DAT_INTMEM_82 = BANK0_R4;
    bINTMEM87 = bVar4 & 1;
    bINTMEM88 = bVar4 & 0x10;
    bINTMEM89 = bINTMEM8a & 1;
    bINTMEM8a = bINTMEM8a & 0x10;
    bVar3 = FUN_CODE_3ed5(CONCAT11(BANK2_R1 - (((0xfb < BANK2_R0) << 7) >> 7),BANK2_R0 + 4),BANK2_R2
                         );
    bVar4 = bVar3 & 0xc0;
    BANK2_R3 = bVar3 & 1;
    BANK2_R7 = bVar4;
  }
  return bVar4;
}



/* =========================================================
 * CODE:216d  FUN_CODE_216d  size=39
 * callers: CODE:2332
 * ========================================================= */

void FUN_CODE_216d(void)

{
  DAT_EXTMEM_cc00 = 1;
  DAT_EXTMEM_c200 = DAT_EXTMEM_c200 & 0xf0 | 2;
  uEXTMEMce51 = 0x10;
  if (BANK1_R2 == '\x10') {
    uEXTMEMd67d = 2;
    return;
  }
  if (BANK1_R2 == '\b') {
    uEXTMEMd67d = 1;
    return;
  }
  uEXTMEMd67d = 0;
  return;
}



/* =========================================================
 * CODE:2194  FUN_CODE_2194  size=12
 * ========================================================= */

void FUN_CODE_2194(void)

{
  if (BANK1_R2 == '\b') {
    uEXTMEMd67d = 1;
    return;
  }
  uEXTMEMd67d = 0;
  return;
}



/* =========================================================
 * CODE:21a0  FUN_CODE_21a0  size=6
 * ========================================================= */

void FUN_CODE_21a0(void)

{
  uEXTMEMd67d = 0;
  return;
}



/* =========================================================
 * CODE:21a6  FUN_CODE_21a6  size=149
 * callers: CODE:25b4, CODE:277b, CODE:26fe
 * ========================================================= */

void FUN_CODE_21a6(byte param_1,byte param_2)

{
  bool bVar1;
  byte bVar2;
  
  for (bVar2 = 0; bVar2 < BANK1_R1; bVar2 = bVar2 + 1) {
    BANK0_R3 = *(undefined1 *)(bVar2 + 0x83);
    BANK0_R7 = param_1 & 3;
    DAT_INTMEM_58 = param_1 >> 2;
    if (BANK0_R7 < 2) {
      DAT_INTMEM_59 = 0;
    }
    else {
      DAT_INTMEM_59 = 4;
    }
    if ((1 < DAT_INTMEM_58) << 7 < '\0') {
      DAT_INTMEM_5a = 0x20;
    }
    else {
      DAT_INTMEM_5a = 0;
    }
    bVar1 = CARRY1(DAT_INTMEM_58,param_2);
    param_2 = DAT_INTMEM_58 + param_2;
    if ((0x80U - (((param_2 < 3) << 7) >> 7) <= (-((bVar1 << 7) >> 7) ^ 0x80U)) &&
       ((DAT_EXTMEM_c848 >> 1 & 1) != 0)) {
      DAT_INTMEM_59 = 4;
    }
    param_1 = (DAT_INTMEM_58 & 0xf) << 3 | (param_1 >> 6) << 7;
    *(byte *)(bVar2 + 0x54) = param_1 | DAT_INTMEM_5a | DAT_INTMEM_59 | BANK0_R7;
  }
  DAT_INTMEM_30 = 0xf;
  DAT_INTMEM_31 = 0;
  DAT_INTMEM_32 = 0x40;
  DAT_INTMEM_33 = 0x10;
  DAT_INTMEM_34 = 0;
  DAT_INTMEM_35 = 0x40;
  DAT_INTMEM_2a = 3;
  DAT_INTMEM_2b = 1;
  DAT_INTMEM_2c = 0;
  DAT_INTMEM_2d = 0;
  DAT_INTMEM_2e = BANK1_R1;
  DAT_INTMEM_2f = 0x54;
  FUN_CODE_1aa9(8);
  return;
}



/* =========================================================
 * CODE:223b  FUN_CODE_223b  size=119
 * callers: CODE:395b
 * ========================================================= */

char FUN_CODE_223b(byte param_1,byte param_2)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  byte bVar4;
  char cVar5;
  byte *pbVar6;
  ushort uVar7;
  char cVar8;
  
  DAT_INTMEM_8b = 0;
  DAT_INTMEM_8c = 0;
  DAT_INTMEM_8d = 0;
  DAT_INTMEM_8e = 0;
  DAT_INTMEM_ee = 1;
  DAT_EXTMEM_4fe4 = 1;
  BANK1_R2 = DAT_INTMEM_5b;
  BANK2_R4 = DAT_INTMEM_5c;
  if (DAT_INTMEM_5b == 0x10) {
    DAT_EXTMEM_d672 = 0xf0;
  }
  else {
    DAT_EXTMEM_d672 = 0xf;
  }
  BANK1_R1 = param_1;
  if (BANK2_R5 != '\0') {
    cVar5 = FUN_CODE_2972();
    return cVar5;
  }
  DAT_INTMEM_2f = 0xee;
  DAT_INTMEM_30 = 0xf;
  DAT_INTMEM_31 = 0;
  DAT_INTMEM_32 = 0x40;
  DAT_INTMEM_33 = 0x10;
  DAT_INTMEM_34 = 0;
  DAT_INTMEM_35 = 0x40;
  DAT_INTMEM_2a = 0;
  DAT_INTMEM_2b = 6;
  DAT_INTMEM_2c = 0;
  DAT_INTMEM_2d = 0;
  DAT_INTMEM_2e = 1;
  cVar5 = '\b';
  FUN_CODE_1aa9();
  bVar4 = BANK0_R3;
  DAT_EXTMEM_4fe8 = cVar5;
  if (cVar5 != '\0') {
    return cVar5;
  }
  if ((BANK2_R4 >> 5 & 1) == 0) {
    BANK0_R2 = BANK0_R2 & 0xfe;
  }
  else {
    BANK0_R2 = BANK0_R2 | 1;
  }
  bVar1 = BANK0_R2;
  uVar7 = 0xc872;
  cVar5 = BANK1_R2 == 0;
  if (BANK1_R1 == 1) {
    BANK3_R2 = 1;
    BANK3_R4 = 7;
    BANK3_R5 = 0;
    BANK3_R3 = 0;
  }
  else if (BANK1_R1 == 2) {
    BANK3_R2 = 0x11;
    BANK3_R4 = 0x77;
    BANK3_R5 = 0;
    BANK3_R3 = 0;
  }
  else if (BANK1_R1 == 4) {
    BANK3_R2 = 0x11;
    BANK3_R4 = 0x77;
    BANK3_R3 = 0x11;
    BANK3_R5 = 0x77;
  }
  DAT_EXTMEM_4fe8 = 0;
  for (bVar2 = 0; BANK0_R2 = bVar1, BANK0_R3 = bVar4, bVar2 < BANK1_R1; bVar2 = bVar2 + 1) {
    DAT_INTMEM_7a = 0;
    uVar7 = uVar7 & 0xff00;
    DAT_INTMEM_7b = bVar2;
    FUN_CODE_0e94(uVar7);
  }
  FUN_CODE_216d();
  FUN_CODE_0f3d();
  do {
  } while (-1 < DAT_EXTMEM_d77f);
  BANK0_R2 = bVar1;
  FUN_CODE_1da2(0xf,DAT_EXTMEM_d77f);
  DAT_EXTMEM_cc00 = 0;
  BANK0_R3 = BANK0_R3 & 0xdd | 1;
  uVar7 = 0xc200;
  uVar3 = DAT_EXTMEM_c200;
  FUN_CODE_1043();
  if (BANK1_R2 == 0x10) {
    uVar3 = 0x14;
  }
  else if (BANK1_R2 == 8) {
    param_2 = 10;
    BANK0_R3 = param_2;
  }
  else {
    param_2 = 6;
    BANK0_R3 = param_2;
  }
  DAT_INTMEM_6f = (BANK2_R4 & 0x20) * '\x04' | BANK1_R1;
  DAT_INTMEM_7a = 4;
  DAT_INTMEM_7b = 0x11;
  BANK0_R2 = bVar1;
  DAT_INTMEM_6e = uVar3;
  FUN_CODE_0270(uVar7 & 0xff00);
  if (BANK2_R5 != '\0') {
    BANK0_R2 = bVar1;
    cVar5 = FUN_CODE_2972();
    return cVar5;
  }
  DAT_INTMEM_30 = 0xf;
  DAT_INTMEM_31 = 0;
  DAT_INTMEM_32 = 0x40;
  DAT_INTMEM_33 = 0x10;
  DAT_INTMEM_34 = 0;
  DAT_INTMEM_35 = 0x40;
  DAT_INTMEM_2a = 0;
  DAT_INTMEM_2b = 1;
  DAT_INTMEM_2c = 0;
  DAT_INTMEM_2d = 0;
  DAT_INTMEM_2e = 2;
  DAT_INTMEM_2f = 0x6e;
  cVar8 = '\b';
  BANK0_R2 = bVar1;
  FUN_CODE_1aa9();
  BANK0_R2 = bVar1;
  DAT_EXTMEM_4fe8 = cVar8;
  if (cVar8 != '\0') {
    return cVar8;
  }
  for (bVar4 = 0; bVar1 = BANK0_R2, bVar4 < BANK1_R1; bVar4 = bVar4 + 1) {
    *(undefined1 *)(bVar4 + 0x66) = 0;
    *(undefined1 *)(bVar4 + 0x6a) = 0;
  }
  DAT_EXTMEM_c600 = 1;
  BANK0_R3 = BANK0_R3 | 1;
  DAT_INTMEM_70 = DAT_EXTMEM_cc8c;
  FUN_CODE_1dc6(CONCAT11(0xcc,DAT_EXTMEM_cc8c));
  BANK0_R2 = bVar1;
  if (BANK2_R5 != '\0') {
    cVar5 = FUN_CODE_2972();
    return cVar5;
  }
  BANK3_R7 = 0x71;
  DAT_INTMEM_20 = 0;
  DAT_INTMEM_21 = 0x40;
  DAT_INTMEM_22 = 0xf;
  DAT_INTMEM_23 = 0;
  DAT_INTMEM_24 = 0x40;
  DAT_INTMEM_25 = 0x10;
  DAT_INTMEM_26 = 0;
  DAT_INTMEM_27 = 0x40;
  BANK3_R6 = 0;
  cVar8 = -0x80;
  FUN_CODE_17f4();
  BANK0_R2 = bVar1;
  DAT_EXTMEM_4fe8 = cVar8;
  if (cVar8 != '\0') {
    return cVar8;
  }
  uEXTMEMce51 = 0;
  bEXTMEM4fed = bEXTMEMc850 & 1;
  if (bEXTMEM4fed == 0) {
    DAT_INTMEM_7a = 4;
    DAT_INTMEM_7b = 0x14;
    FUN_CODE_0270(0x4f00,0);
    if (BANK2_R5 != '\0') {
      BANK0_R2 = bVar1;
      cVar5 = FUN_CODE_2972();
      return cVar5;
    }
    DAT_INTMEM_2f = 0x70;
    DAT_INTMEM_30 = 0xf;
    DAT_INTMEM_31 = 0;
    DAT_INTMEM_32 = 0x40;
    DAT_INTMEM_33 = 0x10;
    DAT_INTMEM_34 = 0;
    DAT_INTMEM_35 = 0x40;
    DAT_INTMEM_2a = 2;
    DAT_INTMEM_2b = 1;
    DAT_INTMEM_2c = 0;
    DAT_INTMEM_2d = 0;
    DAT_INTMEM_2e = 1;
    cVar8 = '\b';
    BANK0_R2 = bVar1;
    FUN_CODE_1aa9();
    BANK0_R2 = bVar1;
    DAT_EXTMEM_4fe8 = cVar8;
    if (cVar8 != '\0') {
      return cVar8;
    }
    DAT_INTMEM_7a = 4;
    DAT_INTMEM_7b = 0x17;
    FUN_CODE_0270(0x4f00);
    if (BANK2_R5 != '\0') {
      BANK0_R2 = bVar1;
      cVar5 = FUN_CODE_2972();
      return cVar5;
    }
    DAT_INTMEM_30 = 0xf;
    DAT_INTMEM_31 = 0;
    DAT_INTMEM_32 = 0x40;
    DAT_INTMEM_33 = 0x10;
    DAT_INTMEM_34 = 0;
    DAT_INTMEM_35 = 0x40;
    DAT_INTMEM_2a = 3;
    DAT_INTMEM_2b = 1;
    DAT_INTMEM_2c = 0;
    DAT_INTMEM_2d = 0;
    DAT_INTMEM_2e = 4;
    DAT_INTMEM_2f = 0x8b;
    cVar8 = '\b';
    BANK0_R2 = bVar1;
    FUN_CODE_1aa9();
    BANK0_R2 = bVar1;
    DAT_EXTMEM_4fe8 = cVar8;
    if (cVar8 == '\0') {
      bVar4 = 0;
      if (((0xf < BANK1_R2) << 7 < '\0') ||
         (bVar4 = DAT_EXTMEM_c848, (DAT_EXTMEM_c848 >> 5 & 1) == 0)) {
        FUN_CODE_1da2(100,bVar4);
      }
      else {
        FUN_CODE_1da2(100,DAT_EXTMEM_c848);
      }
      if (BANK2_R5 != '\0') {
        BANK0_R2 = bVar1;
        cVar5 = FUN_CODE_2972();
        return cVar5;
      }
      cVar8 = '\x01';
      BANK0_R2 = bVar1;
      FUN_CODE_1f0b();
      BANK0_R2 = bVar1;
      uVar7 = 0x4fe8;
      DAT_EXTMEM_4fe8 = cVar8;
      if (cVar8 != '\0') {
        return cVar8;
      }
      BANK0_R3 = DAT_INTMEM_81 & BANK3_R2;
      if ((BANK3_R2 == 0) && (BANK0_R3 = DAT_INTMEM_82 & BANK3_R3, BANK3_R3 == 0)) {
        cVar5 = FUN_CODE_2687();
        return cVar5;
      }
      bVar4 = 0;
      DAT_EXTMEM_4fe8 = 0;
      do {
        bVar2 = BANK0_R3;
        bVar1 = BANK0_R2;
        uVar3 = BANK0_R0;
        cVar8 = (char)uVar7;
        if (BANK1_R1 <= bVar4) {
          if (BANK2_R5 != '\0') {
            cVar5 = FUN_CODE_2972();
            return cVar5;
          }
          FUN_CODE_21a6();
          BANK0_R2 = bVar1;
          DAT_EXTMEM_4fe8 = cVar8;
          if (cVar8 != '\0') {
            return cVar8;
          }
          cVar5 = FUN_CODE_256e();
          return cVar5;
        }
        pbVar6 = (byte *)(bVar4 + 0x6a);
        BANK0_R5 = *pbVar6;
        if (param_2 == BANK0_R5) {
          if (*(char *)(bVar4 + 0x87) == '\0') {
            BANK0_R4 = *(undefined1 *)(bVar4 + 0x66);
            param_2 = param_2 + 1;
            *(undefined1 *)(bVar4 + 0x66) = BANK0_R4;
            if (param_2 == 5) {
              cVar5 = FUN_CODE_2661();
              return cVar5;
            }
          }
          BANK0_R4 = *(byte *)(bVar4 + 0x83) & 3;
          if (1 < param_2) {
            if (BANK1_R0 != '\0' || cVar5 != '\0') {
              cVar5 = FUN_CODE_2972();
              return cVar5;
            }
            if ((DAT_EXTMEM_d25c & 0xf) == 0) {
              if (BANK1_R2 == 8) {
                BANK1_R2 = 0;
              }
              else {
                BANK1_R2 = 8;
              }
              cVar5 = FUN_CODE_2332(1);
              return cVar5;
            }
            cVar5 = FUN_CODE_2972(DAT_EXTMEM_d25c);
            return cVar5;
          }
        }
        else {
          uVar7 = (ushort)(param_2 & 3);
          BANK0_R4 = *(byte *)(bVar4 + 0x83) & 0xc;
          DAT_INTMEM_7a = param_2 >> 2;
          DAT_INTMEM_7b = bVar4;
          FUN_CODE_0e94();
          BANK0_R4 = *(byte *)(bVar4 + 0x83);
          BANK0_R0 = uVar3;
          BANK0_R2 = bVar1;
          BANK0_R3 = bVar2;
          *pbVar6 = BANK0_R4;
          *(undefined1 *)(bVar4 + 0x66) = 0;
        }
        bVar4 = bVar4 + 1;
      } while( true );
    }
    return cVar8;
  }
  FUN_CODE_3ebc(0,CONCAT11(DAT_INTMEM_64,DAT_INTMEM_63),DAT_INTMEM_65);
  FUN_CODE_3ebc(BANK1_R2,CONCAT11(DAT_INTMEM_61,DAT_INTMEM_60),DAT_INTMEM_62);
  FUN_CODE_3ebc(BANK1_R1,CONCAT11(DAT_INTMEM_5e,DAT_INTMEM_5d),DAT_INTMEM_5f);
  FUN_CODE_1dc6(bINTMEM80);
  DAT_EXTMEM_c600 = (bINTMEM80 >> 5 & 1) != 0;
  DAT_EXTMEM_4fe4 = 0;
  return '\0';
}



/* =========================================================
 * CODE:22b2  FUN_CODE_22b2  size=128
 * ========================================================= */

char FUN_CODE_22b2(byte param_1)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  byte bVar4;
  char cVar5;
  byte *pbVar6;
  ushort uVar7;
  char cVar8;
  
  bVar4 = BANK0_R3;
  if ((BANK2_R4 >> 5 & 1) == 0) {
    BANK0_R2 = BANK0_R2 & 0xfe;
  }
  else {
    BANK0_R2 = BANK0_R2 | 1;
  }
  bVar1 = BANK0_R2;
  uVar7 = 0xc872;
  cVar5 = BANK1_R2 == 0;
  if (BANK1_R1 == 1) {
    BANK3_R2 = 1;
    BANK3_R4 = 7;
    BANK3_R5 = 0;
    BANK3_R3 = 0;
  }
  else if (BANK1_R1 == 2) {
    BANK3_R2 = 0x11;
    BANK3_R4 = 0x77;
    BANK3_R5 = 0;
    BANK3_R3 = 0;
  }
  else if (BANK1_R1 == 4) {
    BANK3_R2 = 0x11;
    BANK3_R4 = 0x77;
    BANK3_R3 = 0x11;
    BANK3_R5 = 0x77;
  }
  for (bVar2 = 0; BANK0_R2 = bVar1, BANK0_R3 = bVar4, bVar2 < BANK1_R1; bVar2 = bVar2 + 1) {
    DAT_INTMEM_7a = 0;
    uVar7 = uVar7 & 0xff00;
    DAT_INTMEM_7b = bVar2;
    FUN_CODE_0e94(uVar7);
  }
  FUN_CODE_216d();
  FUN_CODE_0f3d();
  do {
  } while (-1 < DAT_EXTMEM_d77f);
  BANK0_R2 = bVar1;
  FUN_CODE_1da2(0xf,DAT_EXTMEM_d77f);
  DAT_EXTMEM_cc00 = 0;
  BANK0_R3 = BANK0_R3 & 0xdd | 1;
  uVar7 = 0xc200;
  uVar3 = DAT_EXTMEM_c200;
  FUN_CODE_1043();
  if (BANK1_R2 == 0x10) {
    uVar3 = 0x14;
  }
  else if (BANK1_R2 == 8) {
    param_1 = 10;
    BANK0_R3 = param_1;
  }
  else {
    param_1 = 6;
    BANK0_R3 = param_1;
  }
  DAT_INTMEM_6f = (BANK2_R4 & 0x20) * '\x04' | BANK1_R1;
  DAT_INTMEM_7a = 4;
  DAT_INTMEM_7b = 0x11;
  BANK0_R2 = bVar1;
  DAT_INTMEM_6e = uVar3;
  FUN_CODE_0270(uVar7 & 0xff00);
  if (BANK2_R5 != '\0') {
    BANK0_R2 = bVar1;
    cVar5 = FUN_CODE_2972();
    return cVar5;
  }
  DAT_INTMEM_30 = 0xf;
  DAT_INTMEM_31 = 0;
  DAT_INTMEM_32 = 0x40;
  DAT_INTMEM_33 = 0x10;
  DAT_INTMEM_34 = 0;
  DAT_INTMEM_35 = 0x40;
  DAT_INTMEM_2a = 0;
  DAT_INTMEM_2b = 1;
  DAT_INTMEM_2c = 0;
  DAT_INTMEM_2d = 0;
  DAT_INTMEM_2e = 2;
  DAT_INTMEM_2f = 0x6e;
  cVar8 = '\b';
  BANK0_R2 = bVar1;
  FUN_CODE_1aa9();
  BANK0_R2 = bVar1;
  DAT_EXTMEM_4fe8 = cVar8;
  if (cVar8 != '\0') {
    return cVar8;
  }
  for (bVar4 = 0; bVar1 = BANK0_R2, bVar4 < BANK1_R1; bVar4 = bVar4 + 1) {
    *(undefined1 *)(bVar4 + 0x66) = 0;
    *(undefined1 *)(bVar4 + 0x6a) = 0;
  }
  DAT_EXTMEM_c600 = 1;
  BANK0_R3 = BANK0_R3 | 1;
  DAT_INTMEM_70 = DAT_EXTMEM_cc8c;
  FUN_CODE_1dc6(CONCAT11(0xcc,DAT_EXTMEM_cc8c));
  BANK0_R2 = bVar1;
  if (BANK2_R5 != '\0') {
    cVar5 = FUN_CODE_2972();
    return cVar5;
  }
  BANK3_R7 = 0x71;
  DAT_INTMEM_20 = 0;
  DAT_INTMEM_21 = 0x40;
  DAT_INTMEM_22 = 0xf;
  DAT_INTMEM_23 = 0;
  DAT_INTMEM_24 = 0x40;
  DAT_INTMEM_25 = 0x10;
  DAT_INTMEM_26 = 0;
  DAT_INTMEM_27 = 0x40;
  BANK3_R6 = 0;
  cVar8 = -0x80;
  FUN_CODE_17f4();
  BANK0_R2 = bVar1;
  DAT_EXTMEM_4fe8 = cVar8;
  if (cVar8 != '\0') {
    return cVar8;
  }
  uEXTMEMce51 = 0;
  bEXTMEM4fed = bEXTMEMc850 & 1;
  if (bEXTMEM4fed != 0) {
    FUN_CODE_3ebc(0,CONCAT11(DAT_INTMEM_64,DAT_INTMEM_63),DAT_INTMEM_65);
    FUN_CODE_3ebc(BANK1_R2,CONCAT11(DAT_INTMEM_61,DAT_INTMEM_60),DAT_INTMEM_62);
    FUN_CODE_3ebc(BANK1_R1,CONCAT11(DAT_INTMEM_5e,DAT_INTMEM_5d),DAT_INTMEM_5f);
    FUN_CODE_1dc6(bINTMEM80);
    DAT_EXTMEM_c600 = (bINTMEM80 >> 5 & 1) != 0;
    DAT_EXTMEM_4fe4 = 0;
    return '\0';
  }
  DAT_INTMEM_7a = 4;
  DAT_INTMEM_7b = 0x14;
  FUN_CODE_0270(0x4f00,0);
  if (BANK2_R5 != '\0') {
    BANK0_R2 = bVar1;
    cVar5 = FUN_CODE_2972();
    return cVar5;
  }
  DAT_INTMEM_2f = 0x70;
  DAT_INTMEM_30 = 0xf;
  DAT_INTMEM_31 = 0;
  DAT_INTMEM_32 = 0x40;
  DAT_INTMEM_33 = 0x10;
  DAT_INTMEM_34 = 0;
  DAT_INTMEM_35 = 0x40;
  DAT_INTMEM_2a = 2;
  DAT_INTMEM_2b = 1;
  DAT_INTMEM_2c = 0;
  DAT_INTMEM_2d = 0;
  DAT_INTMEM_2e = 1;
  cVar8 = '\b';
  BANK0_R2 = bVar1;
  FUN_CODE_1aa9();
  BANK0_R2 = bVar1;
  DAT_EXTMEM_4fe8 = cVar8;
  if (cVar8 == '\0') {
    DAT_INTMEM_7a = 4;
    DAT_INTMEM_7b = 0x17;
    FUN_CODE_0270(0x4f00);
    if (BANK2_R5 != '\0') {
      BANK0_R2 = bVar1;
      cVar5 = FUN_CODE_2972();
      return cVar5;
    }
    DAT_INTMEM_30 = 0xf;
    DAT_INTMEM_31 = 0;
    DAT_INTMEM_32 = 0x40;
    DAT_INTMEM_33 = 0x10;
    DAT_INTMEM_34 = 0;
    DAT_INTMEM_35 = 0x40;
    DAT_INTMEM_2a = 3;
    DAT_INTMEM_2b = 1;
    DAT_INTMEM_2c = 0;
    DAT_INTMEM_2d = 0;
    DAT_INTMEM_2e = 4;
    DAT_INTMEM_2f = 0x8b;
    cVar8 = '\b';
    BANK0_R2 = bVar1;
    FUN_CODE_1aa9();
    BANK0_R2 = bVar1;
    DAT_EXTMEM_4fe8 = cVar8;
    if (cVar8 != '\0') {
      return cVar8;
    }
    bVar4 = 0;
    if (((0xf < BANK1_R2) << 7 < '\0') || (bVar4 = DAT_EXTMEM_c848, (DAT_EXTMEM_c848 >> 5 & 1) == 0)
       ) {
      FUN_CODE_1da2(100,bVar4);
    }
    else {
      FUN_CODE_1da2(100,DAT_EXTMEM_c848);
    }
    if (BANK2_R5 != '\0') {
      BANK0_R2 = bVar1;
      cVar5 = FUN_CODE_2972();
      return cVar5;
    }
    cVar8 = '\x01';
    BANK0_R2 = bVar1;
    FUN_CODE_1f0b();
    BANK0_R2 = bVar1;
    uVar7 = 0x4fe8;
    DAT_EXTMEM_4fe8 = cVar8;
    if (cVar8 != '\0') {
      return cVar8;
    }
    BANK0_R3 = DAT_INTMEM_81 & BANK3_R2;
    if ((BANK3_R2 == 0) && (BANK0_R3 = DAT_INTMEM_82 & BANK3_R3, BANK3_R3 == 0)) {
      cVar5 = FUN_CODE_2687();
      return cVar5;
    }
    bVar4 = 0;
    DAT_EXTMEM_4fe8 = 0;
    do {
      bVar2 = BANK0_R3;
      bVar1 = BANK0_R2;
      uVar3 = BANK0_R0;
      cVar8 = (char)uVar7;
      if (BANK1_R1 <= bVar4) {
        if (BANK2_R5 != '\0') {
          cVar5 = FUN_CODE_2972();
          return cVar5;
        }
        FUN_CODE_21a6();
        BANK0_R2 = bVar1;
        DAT_EXTMEM_4fe8 = cVar8;
        if (cVar8 != '\0') {
          return cVar8;
        }
        cVar5 = FUN_CODE_256e();
        return cVar5;
      }
      pbVar6 = (byte *)(bVar4 + 0x6a);
      BANK0_R5 = *pbVar6;
      if (param_1 == BANK0_R5) {
        if (*(char *)(bVar4 + 0x87) == '\0') {
          BANK0_R4 = *(undefined1 *)(bVar4 + 0x66);
          param_1 = param_1 + 1;
          *(undefined1 *)(bVar4 + 0x66) = BANK0_R4;
          if (param_1 == 5) {
            cVar5 = FUN_CODE_2661();
            return cVar5;
          }
        }
        BANK0_R4 = *(byte *)(bVar4 + 0x83) & 3;
        if (1 < param_1) {
          if (BANK1_R0 != '\0' || cVar5 != '\0') {
            cVar5 = FUN_CODE_2972();
            return cVar5;
          }
          if ((DAT_EXTMEM_d25c & 0xf) == 0) {
            if (BANK1_R2 == 8) {
              BANK1_R2 = 0;
            }
            else {
              BANK1_R2 = 8;
            }
            cVar5 = FUN_CODE_2332(1);
            return cVar5;
          }
          cVar5 = FUN_CODE_2972(DAT_EXTMEM_d25c);
          return cVar5;
        }
      }
      else {
        uVar7 = (ushort)(param_1 & 3);
        BANK0_R4 = *(byte *)(bVar4 + 0x83) & 0xc;
        DAT_INTMEM_7a = param_1 >> 2;
        DAT_INTMEM_7b = bVar4;
        FUN_CODE_0e94();
        BANK0_R4 = *(byte *)(bVar4 + 0x83);
        BANK0_R0 = uVar3;
        BANK0_R2 = bVar1;
        BANK0_R3 = bVar2;
        *pbVar6 = BANK0_R4;
        *(undefined1 *)(bVar4 + 0x66) = 0;
      }
      bVar4 = bVar4 + 1;
    } while( true );
  }
  return cVar8;
}



/* =========================================================
 * CODE:2332  FUN_CODE_2332  size=182
 * callers: CODE:2661, CODE:280c
 * ========================================================= */

char FUN_CODE_2332(char param_1,byte param_2)

{
  undefined1 uVar1;
  byte bVar2;
  undefined1 uVar3;
  byte bVar4;
  char cVar5;
  byte *pbVar6;
  ushort uVar7;
  
  uVar1 = BANK0_R2;
  FUN_CODE_216d();
  FUN_CODE_0f3d();
  do {
  } while (-1 < DAT_EXTMEM_d77f);
  BANK0_R2 = uVar1;
  FUN_CODE_1da2(0xf,DAT_EXTMEM_d77f);
  DAT_EXTMEM_cc00 = 0;
  BANK0_R3 = BANK0_R3 & 0xdd | 1;
  uVar7 = 0xc200;
  uVar3 = DAT_EXTMEM_c200;
  FUN_CODE_1043();
  if (BANK1_R2 == 0x10) {
    uVar3 = 0x14;
  }
  else if (BANK1_R2 == 8) {
    param_2 = 10;
    BANK0_R3 = param_2;
  }
  else {
    param_2 = 6;
    BANK0_R3 = param_2;
  }
  DAT_INTMEM_6f = (BANK2_R4 & 0x20) * '\x04' | BANK1_R1;
  DAT_INTMEM_7a = 4;
  DAT_INTMEM_7b = 0x11;
  BANK0_R2 = uVar1;
  DAT_INTMEM_6e = uVar3;
  FUN_CODE_0270(uVar7 & 0xff00);
  if (BANK2_R5 != '\0') {
    BANK0_R2 = uVar1;
    cVar5 = FUN_CODE_2972();
    return cVar5;
  }
  DAT_INTMEM_30 = 0xf;
  DAT_INTMEM_31 = 0;
  DAT_INTMEM_32 = 0x40;
  DAT_INTMEM_33 = 0x10;
  DAT_INTMEM_34 = 0;
  DAT_INTMEM_35 = 0x40;
  DAT_INTMEM_2a = 0;
  DAT_INTMEM_2b = 1;
  DAT_INTMEM_2c = 0;
  DAT_INTMEM_2d = 0;
  DAT_INTMEM_2e = 2;
  DAT_INTMEM_2f = 0x6e;
  cVar5 = '\b';
  BANK0_R2 = uVar1;
  FUN_CODE_1aa9();
  BANK0_R2 = uVar1;
  DAT_EXTMEM_4fe8 = cVar5;
  if (cVar5 != '\0') {
    return cVar5;
  }
  for (bVar4 = 0; uVar1 = BANK0_R2, bVar4 < BANK1_R1; bVar4 = bVar4 + 1) {
    *(undefined1 *)(bVar4 + 0x66) = 0;
    *(undefined1 *)(bVar4 + 0x6a) = 0;
  }
  DAT_EXTMEM_c600 = 1;
  BANK0_R3 = BANK0_R3 | 1;
  DAT_INTMEM_70 = DAT_EXTMEM_cc8c;
  FUN_CODE_1dc6(CONCAT11(0xcc,DAT_EXTMEM_cc8c));
  BANK0_R2 = uVar1;
  if (BANK2_R5 != '\0') {
    cVar5 = FUN_CODE_2972();
    return cVar5;
  }
  BANK3_R7 = 0x71;
  DAT_INTMEM_20 = 0;
  DAT_INTMEM_21 = 0x40;
  DAT_INTMEM_22 = 0xf;
  DAT_INTMEM_23 = 0;
  DAT_INTMEM_24 = 0x40;
  DAT_INTMEM_25 = 0x10;
  DAT_INTMEM_26 = 0;
  DAT_INTMEM_27 = 0x40;
  BANK3_R6 = 0;
  cVar5 = -0x80;
  FUN_CODE_17f4();
  BANK0_R2 = uVar1;
  DAT_EXTMEM_4fe8 = cVar5;
  if (cVar5 != '\0') {
    return cVar5;
  }
  uEXTMEMce51 = 0;
  bEXTMEM4fed = bEXTMEMc850 & 1;
  if (bEXTMEM4fed != 0) {
    FUN_CODE_3ebc(0,CONCAT11(DAT_INTMEM_64,DAT_INTMEM_63),DAT_INTMEM_65);
    FUN_CODE_3ebc(BANK1_R2,CONCAT11(DAT_INTMEM_61,DAT_INTMEM_60),DAT_INTMEM_62);
    FUN_CODE_3ebc(BANK1_R1,CONCAT11(DAT_INTMEM_5e,DAT_INTMEM_5d),DAT_INTMEM_5f);
    FUN_CODE_1dc6(bINTMEM80);
    DAT_EXTMEM_c600 = (bINTMEM80 >> 5 & 1) != 0;
    DAT_EXTMEM_4fe4 = 0;
    return '\0';
  }
  DAT_INTMEM_7a = 4;
  DAT_INTMEM_7b = 0x14;
  FUN_CODE_0270(0x4f00,0);
  if (BANK2_R5 != '\0') {
    BANK0_R2 = uVar1;
    cVar5 = FUN_CODE_2972();
    return cVar5;
  }
  DAT_INTMEM_2f = 0x70;
  DAT_INTMEM_30 = 0xf;
  DAT_INTMEM_31 = 0;
  DAT_INTMEM_32 = 0x40;
  DAT_INTMEM_33 = 0x10;
  DAT_INTMEM_34 = 0;
  DAT_INTMEM_35 = 0x40;
  DAT_INTMEM_2a = 2;
  DAT_INTMEM_2b = 1;
  DAT_INTMEM_2c = 0;
  DAT_INTMEM_2d = 0;
  DAT_INTMEM_2e = 1;
  cVar5 = '\b';
  BANK0_R2 = uVar1;
  FUN_CODE_1aa9();
  BANK0_R2 = uVar1;
  DAT_EXTMEM_4fe8 = cVar5;
  if (cVar5 == '\0') {
    DAT_INTMEM_7a = 4;
    DAT_INTMEM_7b = 0x17;
    FUN_CODE_0270(0x4f00);
    if (BANK2_R5 != '\0') {
      BANK0_R2 = uVar1;
      cVar5 = FUN_CODE_2972();
      return cVar5;
    }
    DAT_INTMEM_30 = 0xf;
    DAT_INTMEM_31 = 0;
    DAT_INTMEM_32 = 0x40;
    DAT_INTMEM_33 = 0x10;
    DAT_INTMEM_34 = 0;
    DAT_INTMEM_35 = 0x40;
    DAT_INTMEM_2a = 3;
    DAT_INTMEM_2b = 1;
    DAT_INTMEM_2c = 0;
    DAT_INTMEM_2d = 0;
    DAT_INTMEM_2e = 4;
    DAT_INTMEM_2f = 0x8b;
    cVar5 = '\b';
    BANK0_R2 = uVar1;
    FUN_CODE_1aa9();
    BANK0_R2 = uVar1;
    DAT_EXTMEM_4fe8 = cVar5;
    if (cVar5 != '\0') {
      return cVar5;
    }
    bVar4 = 0;
    if (((0xf < BANK1_R2) << 7 < '\0') || (bVar4 = DAT_EXTMEM_c848, (DAT_EXTMEM_c848 >> 5 & 1) == 0)
       ) {
      FUN_CODE_1da2(100,bVar4);
    }
    else {
      FUN_CODE_1da2(100,DAT_EXTMEM_c848);
    }
    if (BANK2_R5 != '\0') {
      BANK0_R2 = uVar1;
      cVar5 = FUN_CODE_2972();
      return cVar5;
    }
    cVar5 = '\x01';
    BANK0_R2 = uVar1;
    FUN_CODE_1f0b();
    BANK0_R2 = uVar1;
    uVar7 = 0x4fe8;
    DAT_EXTMEM_4fe8 = cVar5;
    if (cVar5 != '\0') {
      return cVar5;
    }
    BANK0_R3 = DAT_INTMEM_81 & BANK3_R2;
    if ((BANK3_R2 == 0) && (BANK0_R3 = DAT_INTMEM_82 & BANK3_R3, BANK3_R3 == 0)) {
      cVar5 = FUN_CODE_2687();
      return cVar5;
    }
    bVar4 = 0;
    DAT_EXTMEM_4fe8 = 0;
    do {
      bVar2 = BANK0_R3;
      uVar3 = BANK0_R2;
      uVar1 = BANK0_R0;
      cVar5 = (char)uVar7;
      if (BANK1_R1 <= bVar4) {
        if (BANK2_R5 != '\0') {
          cVar5 = FUN_CODE_2972();
          return cVar5;
        }
        FUN_CODE_21a6();
        BANK0_R2 = uVar3;
        DAT_EXTMEM_4fe8 = cVar5;
        if (cVar5 != '\0') {
          return cVar5;
        }
        cVar5 = FUN_CODE_256e();
        return cVar5;
      }
      pbVar6 = (byte *)(bVar4 + 0x6a);
      BANK0_R5 = *pbVar6;
      if (param_2 == BANK0_R5) {
        if (*(char *)(bVar4 + 0x87) == '\0') {
          BANK0_R4 = *(undefined1 *)(bVar4 + 0x66);
          param_2 = param_2 + 1;
          *(undefined1 *)(bVar4 + 0x66) = BANK0_R4;
          if (param_2 == 5) {
            cVar5 = FUN_CODE_2661();
            return cVar5;
          }
        }
        BANK0_R4 = *(byte *)(bVar4 + 0x83) & 3;
        if (1 < param_2) {
          if (BANK1_R0 != '\0' || param_1 != '\0') {
            cVar5 = FUN_CODE_2972();
            return cVar5;
          }
          if ((DAT_EXTMEM_d25c & 0xf) == 0) {
            if (BANK1_R2 == 8) {
              BANK1_R2 = 0;
            }
            else {
              BANK1_R2 = 8;
            }
            cVar5 = FUN_CODE_2332(1);
            return cVar5;
          }
          cVar5 = FUN_CODE_2972(DAT_EXTMEM_d25c);
          return cVar5;
        }
      }
      else {
        uVar7 = (ushort)(param_2 & 3);
        BANK0_R4 = *(byte *)(bVar4 + 0x83) & 0xc;
        DAT_INTMEM_7a = param_2 >> 2;
        DAT_INTMEM_7b = bVar4;
        FUN_CODE_0e94();
        BANK0_R4 = *(byte *)(bVar4 + 0x83);
        BANK0_R0 = uVar1;
        BANK0_R2 = uVar3;
        BANK0_R3 = bVar2;
        *pbVar6 = BANK0_R4;
        *(undefined1 *)(bVar4 + 0x66) = 0;
      }
      bVar4 = bVar4 + 1;
    } while( true );
  }
  return cVar5;
}



/* =========================================================
 * CODE:23e8  FUN_CODE_23e8  size=112
 * ========================================================= */

char FUN_CODE_23e8(char param_1,byte param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  byte *pbVar6;
  ushort uVar7;
  
  for (bVar4 = 0; uVar1 = BANK0_R2, bVar4 < BANK1_R1; bVar4 = bVar4 + 1) {
    *(undefined1 *)(bVar4 + 0x66) = 0;
    *(undefined1 *)(bVar4 + 0x6a) = 0;
  }
  DAT_EXTMEM_c600 = 1;
  BANK0_R3 = BANK0_R3 | 1;
  DAT_INTMEM_70 = DAT_EXTMEM_cc8c;
  FUN_CODE_1dc6(CONCAT11(0xcc,DAT_EXTMEM_cc8c));
  BANK0_R2 = uVar1;
  if (BANK2_R5 != '\0') {
    cVar5 = FUN_CODE_2972();
    return cVar5;
  }
  BANK3_R7 = 0x71;
  DAT_INTMEM_20 = 0;
  DAT_INTMEM_21 = 0x40;
  DAT_INTMEM_22 = 0xf;
  DAT_INTMEM_23 = 0;
  DAT_INTMEM_24 = 0x40;
  DAT_INTMEM_25 = 0x10;
  DAT_INTMEM_26 = 0;
  DAT_INTMEM_27 = 0x40;
  BANK3_R6 = 0;
  cVar5 = -0x80;
  FUN_CODE_17f4();
  BANK0_R2 = uVar1;
  DAT_EXTMEM_4fe8 = cVar5;
  if (cVar5 != '\0') {
    return cVar5;
  }
  uEXTMEMce51 = 0;
  bEXTMEM4fed = bEXTMEMc850 & 1;
  if (bEXTMEM4fed != 0) {
    FUN_CODE_3ebc(0,CONCAT11(DAT_INTMEM_64,DAT_INTMEM_63),DAT_INTMEM_65);
    FUN_CODE_3ebc(BANK1_R2,CONCAT11(DAT_INTMEM_61,DAT_INTMEM_60),DAT_INTMEM_62);
    FUN_CODE_3ebc(BANK1_R1,CONCAT11(DAT_INTMEM_5e,DAT_INTMEM_5d),DAT_INTMEM_5f);
    FUN_CODE_1dc6(bINTMEM80);
    DAT_EXTMEM_c600 = (bINTMEM80 >> 5 & 1) != 0;
    DAT_EXTMEM_4fe4 = 0;
    return '\0';
  }
  DAT_INTMEM_7a = 4;
  DAT_INTMEM_7b = 0x14;
  FUN_CODE_0270(0x4f00,0);
  if (BANK2_R5 != '\0') {
    BANK0_R2 = uVar1;
    cVar5 = FUN_CODE_2972();
    return cVar5;
  }
  DAT_INTMEM_2f = 0x70;
  DAT_INTMEM_30 = 0xf;
  DAT_INTMEM_31 = 0;
  DAT_INTMEM_32 = 0x40;
  DAT_INTMEM_33 = 0x10;
  DAT_INTMEM_34 = 0;
  DAT_INTMEM_35 = 0x40;
  DAT_INTMEM_2a = 2;
  DAT_INTMEM_2b = 1;
  DAT_INTMEM_2c = 0;
  DAT_INTMEM_2d = 0;
  DAT_INTMEM_2e = 1;
  cVar5 = '\b';
  BANK0_R2 = uVar1;
  FUN_CODE_1aa9();
  BANK0_R2 = uVar1;
  DAT_EXTMEM_4fe8 = cVar5;
  if (cVar5 != '\0') {
    return cVar5;
  }
  DAT_INTMEM_7a = 4;
  DAT_INTMEM_7b = 0x17;
  FUN_CODE_0270(0x4f00);
  if (BANK2_R5 != '\0') {
    BANK0_R2 = uVar1;
    cVar5 = FUN_CODE_2972();
    return cVar5;
  }
  DAT_INTMEM_30 = 0xf;
  DAT_INTMEM_31 = 0;
  DAT_INTMEM_32 = 0x40;
  DAT_INTMEM_33 = 0x10;
  DAT_INTMEM_34 = 0;
  DAT_INTMEM_35 = 0x40;
  DAT_INTMEM_2a = 3;
  DAT_INTMEM_2b = 1;
  DAT_INTMEM_2c = 0;
  DAT_INTMEM_2d = 0;
  DAT_INTMEM_2e = 4;
  DAT_INTMEM_2f = 0x8b;
  cVar5 = '\b';
  BANK0_R2 = uVar1;
  FUN_CODE_1aa9();
  BANK0_R2 = uVar1;
  DAT_EXTMEM_4fe8 = cVar5;
  if (cVar5 == '\0') {
    bVar4 = 0;
    if (((0xf < BANK1_R2) << 7 < '\0') || (bVar4 = DAT_EXTMEM_c848, (DAT_EXTMEM_c848 >> 5 & 1) == 0)
       ) {
      FUN_CODE_1da2(100,bVar4);
    }
    else {
      FUN_CODE_1da2(100,DAT_EXTMEM_c848);
    }
    if (BANK2_R5 != '\0') {
      BANK0_R2 = uVar1;
      cVar5 = FUN_CODE_2972();
      return cVar5;
    }
    cVar5 = '\x01';
    BANK0_R2 = uVar1;
    FUN_CODE_1f0b();
    BANK0_R2 = uVar1;
    uVar7 = 0x4fe8;
    DAT_EXTMEM_4fe8 = cVar5;
    if (cVar5 != '\0') {
      return cVar5;
    }
    BANK0_R3 = DAT_INTMEM_81 & BANK3_R2;
    if ((BANK3_R2 == 0) && (BANK0_R3 = DAT_INTMEM_82 & BANK3_R3, BANK3_R3 == 0)) {
      cVar5 = FUN_CODE_2687();
      return cVar5;
    }
    bVar4 = 0;
    DAT_EXTMEM_4fe8 = 0;
    do {
      bVar3 = BANK0_R3;
      uVar2 = BANK0_R2;
      uVar1 = BANK0_R0;
      cVar5 = (char)uVar7;
      if (BANK1_R1 <= bVar4) {
        if (BANK2_R5 != '\0') {
          cVar5 = FUN_CODE_2972();
          return cVar5;
        }
        FUN_CODE_21a6();
        BANK0_R2 = uVar2;
        DAT_EXTMEM_4fe8 = cVar5;
        if (cVar5 != '\0') {
          return cVar5;
        }
        cVar5 = FUN_CODE_256e();
        return cVar5;
      }
      pbVar6 = (byte *)(bVar4 + 0x6a);
      BANK0_R5 = *pbVar6;
      if (param_2 == BANK0_R5) {
        if (*(char *)(bVar4 + 0x87) == '\0') {
          BANK0_R4 = *(undefined1 *)(bVar4 + 0x66);
          param_2 = param_2 + 1;
          *(undefined1 *)(bVar4 + 0x66) = BANK0_R4;
          if (param_2 == 5) {
            cVar5 = FUN_CODE_2661();
            return cVar5;
          }
        }
        BANK0_R4 = *(byte *)(bVar4 + 0x83) & 3;
        if (1 < param_2) {
          if (BANK1_R0 != '\0' || param_1 != '\0') {
            cVar5 = FUN_CODE_2972();
            return cVar5;
          }
          if ((DAT_EXTMEM_d25c & 0xf) == 0) {
            if (BANK1_R2 == 8) {
              BANK1_R2 = 0;
            }
            else {
              BANK1_R2 = 8;
            }
            cVar5 = FUN_CODE_2332(1);
            return cVar5;
          }
          cVar5 = FUN_CODE_2972(DAT_EXTMEM_d25c);
          return cVar5;
        }
      }
      else {
        uVar7 = (ushort)(param_2 & 3);
        BANK0_R4 = *(byte *)(bVar4 + 0x83) & 0xc;
        DAT_INTMEM_7a = param_2 >> 2;
        DAT_INTMEM_7b = bVar4;
        FUN_CODE_0e94();
        BANK0_R4 = *(byte *)(bVar4 + 0x83);
        BANK0_R0 = uVar1;
        BANK0_R2 = uVar2;
        BANK0_R3 = bVar3;
        *pbVar6 = BANK0_R4;
        *(undefined1 *)(bVar4 + 0x66) = 0;
      }
      bVar4 = bVar4 + 1;
    } while( true );
  }
  return cVar5;
}



/* =========================================================
 * CODE:2458  FUN_CODE_2458  size=108
 * ========================================================= */

char FUN_CODE_2458(char param_1,byte param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  byte *pbVar6;
  ushort uVar7;
  
  uVar1 = BANK0_R2;
  uEXTMEMce51 = 0;
  bEXTMEM4fed = bEXTMEMc850 & 1;
  if (bEXTMEM4fed != 0) {
    FUN_CODE_3ebc(0,CONCAT11(DAT_INTMEM_64,DAT_INTMEM_63),DAT_INTMEM_65);
    FUN_CODE_3ebc(BANK1_R2,CONCAT11(DAT_INTMEM_61,DAT_INTMEM_60),DAT_INTMEM_62);
    FUN_CODE_3ebc(BANK1_R1,CONCAT11(DAT_INTMEM_5e,DAT_INTMEM_5d),DAT_INTMEM_5f);
    FUN_CODE_1dc6(bINTMEM80);
    DAT_EXTMEM_c600 = (bINTMEM80 >> 5 & 1) != 0;
    DAT_EXTMEM_4fe4 = 0;
    return '\0';
  }
  DAT_INTMEM_7a = 4;
  DAT_INTMEM_7b = 0x14;
  FUN_CODE_0270(0x4f00,0);
  BANK0_R2 = uVar1;
  if (BANK2_R5 != '\0') {
    cVar5 = FUN_CODE_2972();
    return cVar5;
  }
  DAT_INTMEM_2f = 0x70;
  DAT_INTMEM_30 = 0xf;
  DAT_INTMEM_31 = 0;
  DAT_INTMEM_32 = 0x40;
  DAT_INTMEM_33 = 0x10;
  DAT_INTMEM_34 = 0;
  DAT_INTMEM_35 = 0x40;
  DAT_INTMEM_2a = 2;
  DAT_INTMEM_2b = 1;
  DAT_INTMEM_2c = 0;
  DAT_INTMEM_2d = 0;
  DAT_INTMEM_2e = 1;
  cVar5 = '\b';
  FUN_CODE_1aa9();
  BANK0_R2 = uVar1;
  DAT_EXTMEM_4fe8 = cVar5;
  if (cVar5 != '\0') {
    return cVar5;
  }
  DAT_INTMEM_7a = 4;
  DAT_INTMEM_7b = 0x17;
  FUN_CODE_0270(0x4f00);
  if (BANK2_R5 != '\0') {
    BANK0_R2 = uVar1;
    cVar5 = FUN_CODE_2972();
    return cVar5;
  }
  DAT_INTMEM_30 = 0xf;
  DAT_INTMEM_31 = 0;
  DAT_INTMEM_32 = 0x40;
  DAT_INTMEM_33 = 0x10;
  DAT_INTMEM_34 = 0;
  DAT_INTMEM_35 = 0x40;
  DAT_INTMEM_2a = 3;
  DAT_INTMEM_2b = 1;
  DAT_INTMEM_2c = 0;
  DAT_INTMEM_2d = 0;
  DAT_INTMEM_2e = 4;
  DAT_INTMEM_2f = 0x8b;
  cVar5 = '\b';
  BANK0_R2 = uVar1;
  FUN_CODE_1aa9();
  BANK0_R2 = uVar1;
  DAT_EXTMEM_4fe8 = cVar5;
  if (cVar5 != '\0') {
    return cVar5;
  }
  bVar4 = 0;
  if (((0xf < BANK1_R2) << 7 < '\0') || (bVar4 = DAT_EXTMEM_c848, (DAT_EXTMEM_c848 >> 5 & 1) == 0))
  {
    FUN_CODE_1da2(100,bVar4);
  }
  else {
    FUN_CODE_1da2(100,DAT_EXTMEM_c848);
  }
  if (BANK2_R5 != '\0') {
    BANK0_R2 = uVar1;
    cVar5 = FUN_CODE_2972();
    return cVar5;
  }
  cVar5 = '\x01';
  BANK0_R2 = uVar1;
  FUN_CODE_1f0b();
  BANK0_R2 = uVar1;
  uVar7 = 0x4fe8;
  DAT_EXTMEM_4fe8 = cVar5;
  if (cVar5 != '\0') {
    return cVar5;
  }
  BANK0_R3 = DAT_INTMEM_81 & BANK3_R2;
  if ((BANK3_R2 == 0) && (BANK0_R3 = DAT_INTMEM_82 & BANK3_R3, BANK3_R3 == 0)) {
    cVar5 = FUN_CODE_2687();
    return cVar5;
  }
  bVar4 = 0;
  DAT_EXTMEM_4fe8 = 0;
  do {
    bVar3 = BANK0_R3;
    uVar2 = BANK0_R2;
    uVar1 = BANK0_R0;
    cVar5 = (char)uVar7;
    if (BANK1_R1 <= bVar4) {
      if (BANK2_R5 != '\0') {
        cVar5 = FUN_CODE_2972();
        return cVar5;
      }
      FUN_CODE_21a6();
      BANK0_R2 = uVar2;
      DAT_EXTMEM_4fe8 = cVar5;
      if (cVar5 != '\0') {
        return cVar5;
      }
      cVar5 = FUN_CODE_256e();
      return cVar5;
    }
    pbVar6 = (byte *)(bVar4 + 0x6a);
    BANK0_R5 = *pbVar6;
    if (param_2 == BANK0_R5) {
      if (*(char *)(bVar4 + 0x87) == '\0') {
        BANK0_R4 = *(undefined1 *)(bVar4 + 0x66);
        param_2 = param_2 + 1;
        *(undefined1 *)(bVar4 + 0x66) = BANK0_R4;
        if (param_2 == 5) {
          cVar5 = FUN_CODE_2661();
          return cVar5;
        }
      }
      BANK0_R4 = *(byte *)(bVar4 + 0x83) & 3;
      if (1 < param_2) {
        if (BANK1_R0 != '\0' || param_1 != '\0') {
          cVar5 = FUN_CODE_2972();
          return cVar5;
        }
        if ((DAT_EXTMEM_d25c & 0xf) == 0) {
          if (BANK1_R2 == 8) {
            BANK1_R2 = 0;
          }
          else {
            BANK1_R2 = 8;
          }
          cVar5 = FUN_CODE_2332(1);
          return cVar5;
        }
        cVar5 = FUN_CODE_2972(DAT_EXTMEM_d25c);
        return cVar5;
      }
    }
    else {
      uVar7 = (ushort)(param_2 & 3);
      BANK0_R4 = *(byte *)(bVar4 + 0x83) & 0xc;
      DAT_INTMEM_7a = param_2 >> 2;
      DAT_INTMEM_7b = bVar4;
      FUN_CODE_0e94();
      BANK0_R4 = *(byte *)(bVar4 + 0x83);
      BANK0_R0 = uVar1;
      BANK0_R2 = uVar2;
      BANK0_R3 = bVar3;
      *pbVar6 = BANK0_R4;
      *(undefined1 *)(bVar4 + 0x66) = 0;
    }
    bVar4 = bVar4 + 1;
  } while( true );
}



/* =========================================================
 * CODE:24c4  FUN_CODE_24c4  size=85
 * ========================================================= */

char FUN_CODE_24c4(ushort param_1,char param_2,byte param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  byte *pbVar6;
  ushort uVar7;
  
  uVar1 = BANK0_R2;
  DAT_INTMEM_7a = 4;
  DAT_INTMEM_7b = 0x14;
  FUN_CODE_0270(param_1 & 0xff00);
  BANK0_R2 = uVar1;
  if (BANK2_R5 != '\0') {
    cVar5 = FUN_CODE_2972();
    return cVar5;
  }
  DAT_INTMEM_2f = 0x70;
  DAT_INTMEM_30 = 0xf;
  DAT_INTMEM_31 = 0;
  DAT_INTMEM_32 = 0x40;
  DAT_INTMEM_33 = 0x10;
  DAT_INTMEM_34 = 0;
  DAT_INTMEM_35 = 0x40;
  DAT_INTMEM_2a = 2;
  DAT_INTMEM_2b = 1;
  DAT_INTMEM_2c = 0;
  DAT_INTMEM_2d = 0;
  DAT_INTMEM_2e = 1;
  cVar5 = '\b';
  FUN_CODE_1aa9();
  BANK0_R2 = uVar1;
  DAT_EXTMEM_4fe8 = cVar5;
  if (cVar5 != '\0') {
    return cVar5;
  }
  DAT_INTMEM_7a = 4;
  DAT_INTMEM_7b = 0x17;
  FUN_CODE_0270(0x4f00);
  if (BANK2_R5 != '\0') {
    BANK0_R2 = uVar1;
    cVar5 = FUN_CODE_2972();
    return cVar5;
  }
  DAT_INTMEM_30 = 0xf;
  DAT_INTMEM_31 = 0;
  DAT_INTMEM_32 = 0x40;
  DAT_INTMEM_33 = 0x10;
  DAT_INTMEM_34 = 0;
  DAT_INTMEM_35 = 0x40;
  DAT_INTMEM_2a = 3;
  DAT_INTMEM_2b = 1;
  DAT_INTMEM_2c = 0;
  DAT_INTMEM_2d = 0;
  DAT_INTMEM_2e = 4;
  DAT_INTMEM_2f = 0x8b;
  cVar5 = '\b';
  BANK0_R2 = uVar1;
  FUN_CODE_1aa9();
  BANK0_R2 = uVar1;
  DAT_EXTMEM_4fe8 = cVar5;
  if (cVar5 == '\0') {
    bVar4 = 0;
    if (((0xf < BANK1_R2) << 7 < '\0') || (bVar4 = DAT_EXTMEM_c848, (DAT_EXTMEM_c848 >> 5 & 1) == 0)
       ) {
      FUN_CODE_1da2(100,bVar4);
    }
    else {
      FUN_CODE_1da2(100,DAT_EXTMEM_c848);
    }
    if (BANK2_R5 != '\0') {
      BANK0_R2 = uVar1;
      cVar5 = FUN_CODE_2972();
      return cVar5;
    }
    cVar5 = '\x01';
    BANK0_R2 = uVar1;
    FUN_CODE_1f0b();
    BANK0_R2 = uVar1;
    uVar7 = 0x4fe8;
    DAT_EXTMEM_4fe8 = cVar5;
    if (cVar5 != '\0') {
      return cVar5;
    }
    BANK0_R3 = DAT_INTMEM_81 & BANK3_R2;
    if ((BANK3_R2 == 0) && (BANK0_R3 = DAT_INTMEM_82 & BANK3_R3, BANK3_R3 == 0)) {
      cVar5 = FUN_CODE_2687();
      return cVar5;
    }
    bVar4 = 0;
    DAT_EXTMEM_4fe8 = 0;
    do {
      bVar3 = BANK0_R3;
      uVar2 = BANK0_R2;
      uVar1 = BANK0_R0;
      cVar5 = (char)uVar7;
      if (BANK1_R1 <= bVar4) {
        if (BANK2_R5 != '\0') {
          cVar5 = FUN_CODE_2972();
          return cVar5;
        }
        FUN_CODE_21a6();
        BANK0_R2 = uVar2;
        DAT_EXTMEM_4fe8 = cVar5;
        if (cVar5 != '\0') {
          return cVar5;
        }
        cVar5 = FUN_CODE_256e();
        return cVar5;
      }
      pbVar6 = (byte *)(bVar4 + 0x6a);
      BANK0_R5 = *pbVar6;
      if (param_3 == BANK0_R5) {
        if (*(char *)(bVar4 + 0x87) == '\0') {
          BANK0_R4 = *(undefined1 *)(bVar4 + 0x66);
          param_3 = param_3 + 1;
          *(undefined1 *)(bVar4 + 0x66) = BANK0_R4;
          if (param_3 == 5) {
            cVar5 = FUN_CODE_2661();
            return cVar5;
          }
        }
        BANK0_R4 = *(byte *)(bVar4 + 0x83) & 3;
        if (1 < param_3) {
          if (BANK1_R0 != '\0' || param_2 != '\0') {
            cVar5 = FUN_CODE_2972();
            return cVar5;
          }
          if ((DAT_EXTMEM_d25c & 0xf) == 0) {
            if (BANK1_R2 == 8) {
              BANK1_R2 = 0;
            }
            else {
              BANK1_R2 = 8;
            }
            cVar5 = FUN_CODE_2332(1);
            return cVar5;
          }
          cVar5 = FUN_CODE_2972(DAT_EXTMEM_d25c);
          return cVar5;
        }
      }
      else {
        uVar7 = (ushort)(param_3 & 3);
        BANK0_R4 = *(byte *)(bVar4 + 0x83) & 0xc;
        DAT_INTMEM_7a = param_3 >> 2;
        DAT_INTMEM_7b = bVar4;
        FUN_CODE_0e94();
        BANK0_R4 = *(byte *)(bVar4 + 0x83);
        BANK0_R0 = uVar1;
        BANK0_R2 = uVar2;
        BANK0_R3 = bVar3;
        *pbVar6 = BANK0_R4;
        *(undefined1 *)(bVar4 + 0x66) = 0;
      }
      bVar4 = bVar4 + 1;
    } while( true );
  }
  return cVar5;
}



/* =========================================================
 * CODE:2519  FUN_CODE_2519  size=85
 * ========================================================= */

char FUN_CODE_2519(ushort param_1,char param_2,byte param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  byte *pbVar6;
  ushort uVar7;
  
  uVar1 = BANK0_R2;
  DAT_INTMEM_7a = 4;
  DAT_INTMEM_7b = 0x17;
  FUN_CODE_0270(param_1 & 0xff00);
  BANK0_R2 = uVar1;
  if (BANK2_R5 != '\0') {
    cVar5 = FUN_CODE_2972();
    return cVar5;
  }
  DAT_INTMEM_30 = 0xf;
  DAT_INTMEM_31 = 0;
  DAT_INTMEM_32 = 0x40;
  DAT_INTMEM_33 = 0x10;
  DAT_INTMEM_34 = 0;
  DAT_INTMEM_35 = 0x40;
  DAT_INTMEM_2a = 3;
  DAT_INTMEM_2b = 1;
  DAT_INTMEM_2c = 0;
  DAT_INTMEM_2d = 0;
  DAT_INTMEM_2e = 4;
  DAT_INTMEM_2f = 0x8b;
  cVar5 = '\b';
  FUN_CODE_1aa9();
  BANK0_R2 = uVar1;
  DAT_EXTMEM_4fe8 = cVar5;
  if (cVar5 != '\0') {
    return cVar5;
  }
  bVar4 = 0;
  if (((0xf < BANK1_R2) << 7 < '\0') || (bVar4 = DAT_EXTMEM_c848, (DAT_EXTMEM_c848 >> 5 & 1) == 0))
  {
    FUN_CODE_1da2(100,bVar4);
  }
  else {
    FUN_CODE_1da2(100,DAT_EXTMEM_c848);
  }
  if (BANK2_R5 != '\0') {
    BANK0_R2 = uVar1;
    cVar5 = FUN_CODE_2972();
    return cVar5;
  }
  cVar5 = '\x01';
  BANK0_R2 = uVar1;
  FUN_CODE_1f0b();
  BANK0_R2 = uVar1;
  uVar7 = 0x4fe8;
  DAT_EXTMEM_4fe8 = cVar5;
  if (cVar5 != '\0') {
    return cVar5;
  }
  BANK0_R3 = DAT_INTMEM_81 & BANK3_R2;
  if ((BANK3_R2 == 0) && (BANK0_R3 = DAT_INTMEM_82 & BANK3_R3, BANK3_R3 == 0)) {
    cVar5 = FUN_CODE_2687();
    return cVar5;
  }
  bVar4 = 0;
  DAT_EXTMEM_4fe8 = 0;
  do {
    bVar3 = BANK0_R3;
    uVar2 = BANK0_R2;
    uVar1 = BANK0_R0;
    cVar5 = (char)uVar7;
    if (BANK1_R1 <= bVar4) {
      if (BANK2_R5 != '\0') {
        cVar5 = FUN_CODE_2972();
        return cVar5;
      }
      FUN_CODE_21a6();
      BANK0_R2 = uVar2;
      DAT_EXTMEM_4fe8 = cVar5;
      if (cVar5 != '\0') {
        return cVar5;
      }
      cVar5 = FUN_CODE_256e();
      return cVar5;
    }
    pbVar6 = (byte *)(bVar4 + 0x6a);
    BANK0_R5 = *pbVar6;
    if (param_3 == BANK0_R5) {
      if (*(char *)(bVar4 + 0x87) == '\0') {
        BANK0_R4 = *(undefined1 *)(bVar4 + 0x66);
        param_3 = param_3 + 1;
        *(undefined1 *)(bVar4 + 0x66) = BANK0_R4;
        if (param_3 == 5) {
          cVar5 = FUN_CODE_2661();
          return cVar5;
        }
      }
      BANK0_R4 = *(byte *)(bVar4 + 0x83) & 3;
      if (1 < param_3) {
        if (BANK1_R0 != '\0' || param_2 != '\0') {
          cVar5 = FUN_CODE_2972();
          return cVar5;
        }
        if ((DAT_EXTMEM_d25c & 0xf) == 0) {
          if (BANK1_R2 == 8) {
            BANK1_R2 = 0;
          }
          else {
            BANK1_R2 = 8;
          }
          cVar5 = FUN_CODE_2332(1);
          return cVar5;
        }
        cVar5 = FUN_CODE_2972(DAT_EXTMEM_d25c);
        return cVar5;
      }
    }
    else {
      uVar7 = (ushort)(param_3 & 3);
      BANK0_R4 = *(byte *)(bVar4 + 0x83) & 0xc;
      DAT_INTMEM_7a = param_3 >> 2;
      DAT_INTMEM_7b = bVar4;
      FUN_CODE_0e94();
      BANK0_R4 = *(byte *)(bVar4 + 0x83);
      BANK0_R0 = uVar1;
      BANK0_R2 = uVar2;
      BANK0_R3 = bVar3;
      *pbVar6 = BANK0_R4;
      *(undefined1 *)(bVar4 + 0x66) = 0;
    }
    bVar4 = bVar4 + 1;
  } while( true );
}



/* =========================================================
 * CODE:256e  FUN_CODE_256e  size=70
 * callers: CODE:25b4
 * ========================================================= */

char FUN_CODE_256e(char param_1,byte param_2,byte param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  byte *pbVar6;
  ushort uVar7;
  
  uVar1 = BANK0_R2;
  if (((0xf < BANK1_R2) << 7 < '\0') || (param_2 = DAT_EXTMEM_c848, (DAT_EXTMEM_c848 >> 5 & 1) == 0)
     ) {
    FUN_CODE_1da2(100,param_2);
  }
  else {
    FUN_CODE_1da2(100,DAT_EXTMEM_c848);
  }
  BANK0_R2 = uVar1;
  if (BANK2_R5 != '\0') {
    cVar5 = FUN_CODE_2972();
    return cVar5;
  }
  cVar5 = '\x01';
  FUN_CODE_1f0b();
  BANK0_R2 = uVar1;
  uVar7 = 0x4fe8;
  DAT_EXTMEM_4fe8 = cVar5;
  if (cVar5 != '\0') {
    return cVar5;
  }
  BANK0_R3 = DAT_INTMEM_81 & BANK3_R2;
  if ((BANK3_R2 == 0) && (BANK0_R3 = DAT_INTMEM_82 & BANK3_R3, BANK3_R3 == 0)) {
    cVar5 = FUN_CODE_2687();
    return cVar5;
  }
  bVar4 = 0;
  DAT_EXTMEM_4fe8 = 0;
  do {
    bVar3 = BANK0_R3;
    uVar2 = BANK0_R2;
    uVar1 = BANK0_R0;
    cVar5 = (char)uVar7;
    if (BANK1_R1 <= bVar4) {
      if (BANK2_R5 != '\0') {
        cVar5 = FUN_CODE_2972();
        return cVar5;
      }
      FUN_CODE_21a6();
      BANK0_R2 = uVar2;
      DAT_EXTMEM_4fe8 = cVar5;
      if (cVar5 != '\0') {
        return cVar5;
      }
      cVar5 = FUN_CODE_256e();
      return cVar5;
    }
    pbVar6 = (byte *)(bVar4 + 0x6a);
    BANK0_R5 = *pbVar6;
    if (param_3 == BANK0_R5) {
      if (*(char *)(bVar4 + 0x87) == '\0') {
        BANK0_R4 = *(undefined1 *)(bVar4 + 0x66);
        param_3 = param_3 + 1;
        *(undefined1 *)(bVar4 + 0x66) = BANK0_R4;
        if (param_3 == 5) {
          cVar5 = FUN_CODE_2661();
          return cVar5;
        }
      }
      BANK0_R4 = *(byte *)(bVar4 + 0x83) & 3;
      if (1 < param_3) {
        if (BANK1_R0 != '\0' || param_1 != '\0') {
          cVar5 = FUN_CODE_2972();
          return cVar5;
        }
        if ((DAT_EXTMEM_d25c & 0xf) == 0) {
          if (BANK1_R2 == 8) {
            BANK1_R2 = 0;
          }
          else {
            BANK1_R2 = 8;
          }
          cVar5 = FUN_CODE_2332(1);
          return cVar5;
        }
        cVar5 = FUN_CODE_2972(DAT_EXTMEM_d25c);
        return cVar5;
      }
    }
    else {
      uVar7 = (ushort)(param_3 & 3);
      BANK0_R4 = *(byte *)(bVar4 + 0x83) & 0xc;
      DAT_INTMEM_7a = param_3 >> 2;
      DAT_INTMEM_7b = bVar4;
      FUN_CODE_0e94();
      BANK0_R4 = *(byte *)(bVar4 + 0x83);
      BANK0_R0 = uVar1;
      BANK0_R2 = uVar2;
      BANK0_R3 = bVar3;
      *pbVar6 = BANK0_R4;
      *(undefined1 *)(bVar4 + 0x66) = 0;
    }
    bVar4 = bVar4 + 1;
  } while( true );
}



/* =========================================================
 * CODE:25b4  FUN_CODE_25b4  size=173
 * ========================================================= */

char FUN_CODE_25b4(ushort param_1,char param_2,byte param_3,byte param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  byte *pbVar6;
  
  BANK0_R3 = DAT_INTMEM_81 & BANK3_R2;
  if ((param_3 == BANK3_R2) && (BANK0_R3 = DAT_INTMEM_82 & BANK3_R3, param_3 == BANK3_R3)) {
    cVar5 = FUN_CODE_2687();
    return cVar5;
  }
  bVar4 = 0;
  do {
    bVar3 = BANK0_R3;
    uVar2 = BANK0_R2;
    uVar1 = BANK0_R0;
    cVar5 = (char)param_1;
    if (BANK1_R1 <= bVar4) {
      if (BANK2_R5 != '\0') {
        cVar5 = FUN_CODE_2972();
        return cVar5;
      }
      FUN_CODE_21a6();
      BANK0_R2 = uVar2;
      DAT_EXTMEM_4fe8 = cVar5;
      if (cVar5 != '\0') {
        return cVar5;
      }
      cVar5 = FUN_CODE_256e();
      return cVar5;
    }
    pbVar6 = (byte *)(bVar4 + 0x6a);
    BANK0_R5 = *pbVar6;
    if (param_4 == BANK0_R5) {
      if (*(char *)(bVar4 + 0x87) == '\0') {
        BANK0_R4 = *(undefined1 *)(bVar4 + 0x66);
        param_4 = param_4 + 1;
        *(undefined1 *)(bVar4 + 0x66) = BANK0_R4;
        if (param_4 == 5) {
          cVar5 = FUN_CODE_2661();
          return cVar5;
        }
      }
      BANK0_R4 = *(byte *)(bVar4 + 0x83) & 3;
      if (1 < param_4) {
        if (BANK1_R0 != '\0' || param_2 != '\0') {
          cVar5 = FUN_CODE_2972();
          return cVar5;
        }
        if ((DAT_EXTMEM_d25c & 0xf) == 0) {
          if (BANK1_R2 == '\b') {
            BANK1_R2 = 0;
          }
          else {
            BANK1_R2 = 8;
          }
          cVar5 = FUN_CODE_2332(1);
          return cVar5;
        }
        cVar5 = FUN_CODE_2972(DAT_EXTMEM_d25c);
        return cVar5;
      }
    }
    else {
      param_1 = (ushort)(param_4 & 3);
      BANK0_R4 = *(byte *)(bVar4 + 0x83) & 0xc;
      DAT_INTMEM_7a = param_4 >> 2;
      DAT_INTMEM_7b = bVar4;
      FUN_CODE_0e94();
      BANK0_R4 = *(byte *)(bVar4 + 0x83);
      BANK0_R0 = uVar1;
      BANK0_R2 = uVar2;
      BANK0_R3 = bVar3;
      *pbVar6 = BANK0_R4;
      *(undefined1 *)(bVar4 + 0x66) = 0;
    }
    bVar4 = bVar4 + 1;
  } while( true );
}



/* =========================================================
 * CODE:2661  FUN_CODE_2661  size=38
 * callers: CODE:25b4
 * ========================================================= */

void FUN_CODE_2661(char param_1)

{
  if (BANK1_R0 != '\0' || param_1 != '\0') {
    FUN_CODE_2972();
    return;
  }
  if ((DAT_EXTMEM_d25c & 0xf) != 0) {
    FUN_CODE_2972(DAT_EXTMEM_d25c);
    return;
  }
  if (BANK1_R2 == '\b') {
    BANK1_R2 = 0;
  }
  else {
    BANK1_R2 = 8;
  }
  FUN_CODE_2332(1);
  return;
}



/* =========================================================
 * CODE:2687  FUN_CODE_2687  size=119
 * callers: CODE:25b4
 * ========================================================= */

char FUN_CODE_2687(char param_1)

{
  byte bVar1;
  undefined1 uVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  byte bVar6;
  char cVar8;
  ushort uVar7;
  
  uVar2 = BANK0_R2;
  DAT_EXTMEM_c600 = 1;
  if (DAT_EXTMEM_4fae == '\0') {
    bVar3 = 2;
  }
  else {
    bVar3 = 3;
  }
  BANK0_R3 = BANK0_R3 | bVar3;
  DAT_INTMEM_70 = DAT_EXTMEM_cc8c;
  uVar7 = CONCAT11(0x4f,DAT_EXTMEM_cc8c);
  FUN_CODE_1dc6(uVar7);
  DAT_INTMEM_7a = 4;
  DAT_INTMEM_7b = 0x16;
  FUN_CODE_0270(uVar7 & 0xff00);
  BANK0_R2 = uVar2;
  if (BANK2_R5 != '\0') {
    cVar5 = FUN_CODE_2972();
    return cVar5;
  }
  DAT_INTMEM_2f = 0x70;
  DAT_INTMEM_30 = 0xf;
  DAT_INTMEM_31 = 0;
  DAT_INTMEM_32 = 0x40;
  DAT_INTMEM_33 = 0x10;
  DAT_INTMEM_34 = 0;
  DAT_INTMEM_35 = 0x40;
  DAT_INTMEM_2a = 2;
  DAT_INTMEM_2b = 1;
  DAT_INTMEM_2c = 0;
  DAT_INTMEM_2d = 0;
  DAT_INTMEM_2e = 1;
  cVar5 = '\b';
  FUN_CODE_1aa9();
  BANK0_R2 = uVar2;
  cVar8 = -0x18;
  DAT_EXTMEM_4fe8 = cVar5;
  if (cVar5 != '\0') {
    return cVar5;
  }
  if (BANK2_R5 != '\0') {
    cVar5 = FUN_CODE_2972();
    return cVar5;
  }
  FUN_CODE_21a6();
  bVar3 = BANK0_R3;
  BANK0_R2 = uVar2;
  DAT_EXTMEM_4fe8 = cVar8;
  if (cVar8 != '\0') {
    return cVar8;
  }
  while( true ) {
    DAT_EXTMEM_4fe8 = 0;
    BANK0_R3 = bVar3;
    if (((0xf < BANK1_R2) << 7 < '\0') || ((DAT_EXTMEM_c848 >> 5 & 1) == 0)) {
      BANK0_R2 = uVar2;
      FUN_CODE_1da2((ushort)DAT_EXTMEM_4fd8 * 100);
    }
    else {
      BANK0_R2 = uVar2;
      FUN_CODE_1da2(400,DAT_EXTMEM_c848);
    }
    if (BANK2_R5 != '\0') {
      BANK0_R2 = uVar2;
      BANK0_R3 = bVar3;
      cVar5 = FUN_CODE_2972();
      return cVar5;
    }
    cVar5 = '\x01';
    BANK0_R2 = uVar2;
    BANK0_R3 = bVar3;
    FUN_CODE_1f0b();
    BANK0_R3 = bVar3;
    BANK0_R2 = uVar2;
    uVar7 = 0x4fe8;
    DAT_EXTMEM_4fe8 = cVar5;
    if (cVar5 != '\0') {
      return cVar5;
    }
    BANK0_R4 = DAT_INTMEM_81;
    bVar6 = 0;
    if (BANK3_R2 != '\0') {
      cVar5 = FUN_CODE_280c();
      return cVar5;
    }
    BANK0_R5 = DAT_INTMEM_82;
    if (BANK3_R3 != '\0') break;
    bVar1 = DAT_INTMEM_81 & BANK3_R4;
    BANK0_R4 = bVar1;
    if (((BANK3_R4 == 0) && (BANK0_R5 = DAT_INTMEM_82 & BANK3_R5, BANK3_R5 == 0)) &&
       (BANK2_R3 != '\0')) {
      cVar5 = FUN_CODE_2832();
      return cVar5;
    }
    if ((5 < bVar3) << 7 < '\0') break;
    DAT_EXTMEM_4fe8 = 0;
    for (bVar4 = 0; cVar5 = (char)uVar7, bVar4 < BANK1_R1; bVar4 = bVar4 + 1) {
      uVar7 = (ushort)(bVar6 & 3);
      BANK0_R5 = *(byte *)(bVar4 + 0x83) & 0xc;
      DAT_INTMEM_7a = bVar6 >> 2;
      BANK0_R2 = uVar2;
      BANK0_R3 = bVar3;
      BANK0_R4 = bVar1;
      DAT_INTMEM_7b = bVar4;
      FUN_CODE_0e94();
    }
    if (BANK2_R5 != '\0') {
      BANK0_R2 = uVar2;
      BANK0_R3 = bVar3;
      BANK0_R4 = bVar1;
      cVar5 = FUN_CODE_2972();
      return cVar5;
    }
    BANK0_R2 = uVar2;
    BANK0_R3 = bVar3;
    BANK0_R4 = bVar1;
    FUN_CODE_21a6();
    BANK0_R3 = bVar3;
    BANK0_R2 = uVar2;
    DAT_EXTMEM_4fe8 = cVar5;
    if (cVar5 != '\0') {
      return cVar5;
    }
  }
  if (BANK1_R0 != '\0' || param_1 != '\0') {
    cVar5 = FUN_CODE_2972();
    return cVar5;
  }
  if ((DAT_EXTMEM_d25c & 0xf) != 0) {
    cVar5 = FUN_CODE_2972(DAT_EXTMEM_d25c);
    return cVar5;
  }
  if (BANK1_R2 == 8) {
    BANK1_R2 = 0;
  }
  else {
    BANK1_R2 = 8;
  }
  cVar5 = FUN_CODE_2332(1,0);
  return cVar5;
}



/* =========================================================
 * CODE:26fe  FUN_CODE_26fe  size=31
 * ========================================================= */

char FUN_CODE_26fe(char param_1,char param_2)

{
  byte bVar1;
  undefined1 uVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  byte bVar6;
  ushort uVar7;
  
  uVar2 = BANK0_R2;
  if (BANK2_R5 != '\0') {
    cVar5 = FUN_CODE_2972();
    return cVar5;
  }
  FUN_CODE_21a6();
  bVar3 = BANK0_R3;
  BANK0_R2 = uVar2;
  DAT_EXTMEM_4fe8 = param_1;
  if (param_1 != '\0') {
    return param_1;
  }
  while( true ) {
    DAT_EXTMEM_4fe8 = 0;
    BANK0_R2 = uVar2;
    BANK0_R3 = bVar3;
    if (((0xf < BANK1_R2) << 7 < '\0') || ((DAT_EXTMEM_c848 >> 5 & 1) == 0)) {
      FUN_CODE_1da2((ushort)DAT_EXTMEM_4fd8 * 100);
    }
    else {
      FUN_CODE_1da2(400,DAT_EXTMEM_c848);
    }
    if (BANK2_R5 != '\0') {
      BANK0_R2 = uVar2;
      BANK0_R3 = bVar3;
      cVar5 = FUN_CODE_2972();
      return cVar5;
    }
    cVar5 = '\x01';
    BANK0_R2 = uVar2;
    BANK0_R3 = bVar3;
    FUN_CODE_1f0b();
    BANK0_R3 = bVar3;
    BANK0_R2 = uVar2;
    uVar7 = 0x4fe8;
    DAT_EXTMEM_4fe8 = cVar5;
    if (cVar5 != '\0') {
      return cVar5;
    }
    BANK0_R4 = DAT_INTMEM_81;
    bVar6 = 0;
    if (BANK3_R2 != '\0') {
      cVar5 = FUN_CODE_280c();
      return cVar5;
    }
    BANK0_R5 = DAT_INTMEM_82;
    if (BANK3_R3 != '\0') break;
    bVar1 = DAT_INTMEM_81 & BANK3_R4;
    BANK0_R4 = bVar1;
    if (((BANK3_R4 == 0) && (BANK0_R5 = DAT_INTMEM_82 & BANK3_R5, BANK3_R5 == 0)) &&
       (BANK2_R3 != '\0')) {
      cVar5 = FUN_CODE_2832();
      return cVar5;
    }
    if ((5 < bVar3) << 7 < '\0') break;
    DAT_EXTMEM_4fe8 = 0;
    for (bVar4 = 0; cVar5 = (char)uVar7, bVar4 < BANK1_R1; bVar4 = bVar4 + 1) {
      uVar7 = (ushort)(bVar6 & 3);
      BANK0_R5 = *(byte *)(bVar4 + 0x83) & 0xc;
      DAT_INTMEM_7a = bVar6 >> 2;
      BANK0_R2 = uVar2;
      BANK0_R3 = bVar3;
      BANK0_R4 = bVar1;
      DAT_INTMEM_7b = bVar4;
      FUN_CODE_0e94();
    }
    if (BANK2_R5 != '\0') {
      BANK0_R2 = uVar2;
      BANK0_R3 = bVar3;
      BANK0_R4 = bVar1;
      cVar5 = FUN_CODE_2972();
      return cVar5;
    }
    BANK0_R2 = uVar2;
    BANK0_R3 = bVar3;
    BANK0_R4 = bVar1;
    FUN_CODE_21a6();
    BANK0_R3 = bVar3;
    BANK0_R2 = uVar2;
    DAT_EXTMEM_4fe8 = cVar5;
    if (cVar5 != '\0') {
      return cVar5;
    }
  }
  if (BANK1_R0 != '\0' || param_2 != '\0') {
    cVar5 = FUN_CODE_2972();
    return cVar5;
  }
  if ((DAT_EXTMEM_d25c & 0xf) != 0) {
    cVar5 = FUN_CODE_2972(DAT_EXTMEM_d25c);
    return cVar5;
  }
  if (BANK1_R2 == 8) {
    BANK1_R2 = 0;
  }
  else {
    BANK1_R2 = 8;
  }
  cVar5 = FUN_CODE_2332(1,0);
  return cVar5;
}



/* =========================================================
 * CODE:271d  FUN_CODE_271d  size=94
 * ========================================================= */

char FUN_CODE_271d(char param_1,byte param_2)

{
  byte bVar1;
  undefined1 uVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  byte bVar6;
  ushort uVar7;
  
  bVar3 = BANK0_R3;
  uVar2 = BANK0_R2;
  while( true ) {
    BANK0_R2 = uVar2;
    BANK0_R3 = bVar3;
    if (((0xf < BANK1_R2) << 7 < '\0') ||
       (param_2 = DAT_EXTMEM_c848, (DAT_EXTMEM_c848 >> 5 & 1) == 0)) {
      FUN_CODE_1da2((ushort)DAT_EXTMEM_4fd8 * 100,param_2);
    }
    else {
      FUN_CODE_1da2(400,DAT_EXTMEM_c848);
    }
    if (BANK2_R5 != '\0') {
      BANK0_R2 = uVar2;
      BANK0_R3 = bVar3;
      cVar5 = FUN_CODE_2972();
      return cVar5;
    }
    cVar5 = '\x01';
    BANK0_R2 = uVar2;
    BANK0_R3 = bVar3;
    FUN_CODE_1f0b();
    BANK0_R3 = bVar3;
    BANK0_R2 = uVar2;
    uVar7 = 0x4fe8;
    DAT_EXTMEM_4fe8 = cVar5;
    if (cVar5 != '\0') {
      return cVar5;
    }
    BANK0_R4 = DAT_INTMEM_81;
    bVar6 = 0;
    if (BANK3_R2 != '\0') {
      cVar5 = FUN_CODE_280c();
      return cVar5;
    }
    BANK0_R5 = DAT_INTMEM_82;
    if (BANK3_R3 != '\0') break;
    bVar1 = DAT_INTMEM_81 & BANK3_R4;
    BANK0_R4 = bVar1;
    if (((BANK3_R4 == 0) && (BANK0_R5 = DAT_INTMEM_82 & BANK3_R5, BANK3_R5 == 0)) &&
       (BANK2_R3 != '\0')) {
      cVar5 = FUN_CODE_2832();
      return cVar5;
    }
    if ((5 < bVar3) << 7 < '\0') break;
    DAT_EXTMEM_4fe8 = 0;
    for (bVar4 = 0; cVar5 = (char)uVar7, bVar4 < BANK1_R1; bVar4 = bVar4 + 1) {
      uVar7 = (ushort)(bVar6 & 3);
      BANK0_R5 = *(byte *)(bVar4 + 0x83) & 0xc;
      DAT_INTMEM_7a = bVar6 >> 2;
      BANK0_R2 = uVar2;
      BANK0_R3 = bVar3;
      BANK0_R4 = bVar1;
      DAT_INTMEM_7b = bVar4;
      FUN_CODE_0e94();
    }
    if (BANK2_R5 != '\0') {
      BANK0_R2 = uVar2;
      BANK0_R3 = bVar3;
      BANK0_R4 = bVar1;
      cVar5 = FUN_CODE_2972();
      return cVar5;
    }
    BANK0_R2 = uVar2;
    BANK0_R3 = bVar3;
    BANK0_R4 = bVar1;
    FUN_CODE_21a6();
    BANK0_R3 = bVar3;
    BANK0_R2 = uVar2;
    DAT_EXTMEM_4fe8 = cVar5;
    if (cVar5 != '\0') {
      return cVar5;
    }
    param_2 = 0;
    DAT_EXTMEM_4fe8 = 0;
  }
  if (BANK1_R0 != '\0' || param_1 != '\0') {
    cVar5 = FUN_CODE_2972();
    return cVar5;
  }
  if ((DAT_EXTMEM_d25c & 0xf) == 0) {
    if (BANK1_R2 == 8) {
      BANK1_R2 = 0;
    }
    else {
      BANK1_R2 = 8;
    }
    cVar5 = FUN_CODE_2332(1,0);
    return cVar5;
  }
  cVar5 = FUN_CODE_2972(DAT_EXTMEM_d25c);
  return cVar5;
}



/* =========================================================
 * CODE:277b  FUN_CODE_277b  size=145
 * ========================================================= */

char FUN_CODE_277b(ushort param_1,char param_2,byte param_3)

{
  byte bVar1;
  undefined1 uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  
  bVar3 = BANK0_R3;
  uVar2 = BANK0_R2;
  while( true ) {
    BANK0_R4 = DAT_INTMEM_81;
    bVar5 = BANK3_R2 & param_3;
    BANK0_R2 = uVar2;
    BANK0_R3 = bVar3;
    if (bVar5 != BANK3_R2) {
      cVar6 = FUN_CODE_280c();
      return cVar6;
    }
    BANK0_R5 = DAT_INTMEM_82;
    if ((BANK3_R3 & bVar5) != BANK3_R3) break;
    bVar1 = DAT_INTMEM_81 & BANK3_R4;
    BANK0_R4 = bVar1;
    if (((param_3 == BANK3_R4) && (BANK0_R5 = DAT_INTMEM_82 & BANK3_R5, bVar5 == BANK3_R5)) &&
       (BANK2_R3 != '\0')) {
      cVar6 = FUN_CODE_2832();
      return cVar6;
    }
    if ((5 < bVar3) << 7 < '\0') break;
    bVar4 = 0;
    while( true ) {
      cVar6 = (char)param_1;
      if (BANK1_R1 <= bVar4) break;
      param_1 = (ushort)(bVar5 & 3);
      BANK0_R5 = *(byte *)(bVar4 + 0x83) & 0xc;
      DAT_INTMEM_7a = bVar5 >> 2;
      BANK0_R2 = uVar2;
      BANK0_R3 = bVar3;
      BANK0_R4 = bVar1;
      DAT_INTMEM_7b = bVar4;
      FUN_CODE_0e94();
      bVar4 = bVar4 + 1;
    }
    if (BANK2_R5 != '\0') {
      BANK0_R2 = uVar2;
      BANK0_R3 = bVar3;
      BANK0_R4 = bVar1;
      cVar6 = FUN_CODE_2972();
      return cVar6;
    }
    BANK0_R2 = uVar2;
    BANK0_R3 = bVar3;
    BANK0_R4 = bVar1;
    FUN_CODE_21a6();
    BANK0_R3 = bVar3;
    BANK0_R2 = uVar2;
    DAT_EXTMEM_4fe8 = cVar6;
    if (cVar6 != '\0') {
      return cVar6;
    }
    bVar5 = 0;
    if (((0xf < BANK1_R2) << 7 < '\0') || (bVar5 = DAT_EXTMEM_c848, (DAT_EXTMEM_c848 >> 5 & 1) == 0)
       ) {
      FUN_CODE_1da2((ushort)DAT_EXTMEM_4fd8 * 100,bVar5);
    }
    else {
      FUN_CODE_1da2(400,DAT_EXTMEM_c848);
    }
    if (BANK2_R5 != '\0') {
      BANK0_R2 = uVar2;
      BANK0_R3 = bVar3;
      cVar6 = FUN_CODE_2972();
      return cVar6;
    }
    cVar6 = '\x01';
    BANK0_R2 = uVar2;
    BANK0_R3 = bVar3;
    FUN_CODE_1f0b();
    BANK0_R3 = bVar3;
    BANK0_R2 = uVar2;
    param_1 = 0x4fe8;
    DAT_EXTMEM_4fe8 = cVar6;
    param_3 = 0;
    if (cVar6 != '\0') {
      return cVar6;
    }
  }
  if (BANK1_R0 != '\0' || param_2 != '\0') {
    cVar6 = FUN_CODE_2972();
    return cVar6;
  }
  if ((DAT_EXTMEM_d25c & 0xf) != 0) {
    cVar6 = FUN_CODE_2972(DAT_EXTMEM_d25c);
    return cVar6;
  }
  if (BANK1_R2 == 8) {
    BANK1_R2 = 0;
  }
  else {
    BANK1_R2 = 8;
  }
  cVar6 = FUN_CODE_2332(1,BANK3_R3 & bVar5);
  return cVar6;
}



/* =========================================================
 * CODE:280c  FUN_CODE_280c  size=38
 * callers: CODE:277b
 * ========================================================= */

void FUN_CODE_280c(char param_1)

{
  if (BANK1_R0 != '\0' || param_1 != '\0') {
    FUN_CODE_2972();
    return;
  }
  if ((DAT_EXTMEM_d25c & 0xf) != 0) {
    FUN_CODE_2972(DAT_EXTMEM_d25c);
    return;
  }
  if (BANK1_R2 == '\b') {
    BANK1_R2 = 0;
  }
  else {
    BANK1_R2 = 8;
  }
  FUN_CODE_2332(1);
  return;
}



/* =========================================================
 * CODE:2832  FUN_CODE_2832  size=196
 * callers: CODE:277b
 * ========================================================= */

char FUN_CODE_2832(void)

{
  char cVar1;
  ushort uVar2;
  char cVar3;
  
  DAT_EXTMEM_4fe4 = 0;
  DAT_INTMEM_70 = DAT_EXTMEM_cc94;
  DAT_EXTMEM_c600 = 0;
  if (DAT_EXTMEM_4fe7 == '\0') {
    BANK0_R3 = BANK0_R3 & 0xf;
  }
  else {
    DAT_EXTMEM_c872 = 4;
    DAT_EXTMEM_c873 = 0xf0;
    DAT_EXTMEM_c874 = 0;
    DAT_EXTMEM_c878 = 0xbc;
    DAT_EXTMEM_4fe9 = 0;
    DAT_EXTMEM_c87c = 0;
    DAT_EXTMEM_c87d = 0x80;
    DAT_EXTMEM_c87e = 1;
    DAT_EXTMEM_c87f = 0;
    BANK0_R3 = 0;
  }
  DAT_EXTMEM_c870 = DAT_EXTMEM_d67e;
  uVar2 = CONCAT11(200,DAT_EXTMEM_cc94);
  FUN_CODE_1dc6(uVar2);
  DAT_INTMEM_7a = 4;
  DAT_INTMEM_7b = 0x13;
  FUN_CODE_0270(uVar2 & 0xff00);
  if (BANK2_R5 != '\0') {
    cVar1 = FUN_CODE_2972();
    return cVar1;
  }
  DAT_INTMEM_2f = 0x70;
  DAT_INTMEM_30 = 0xf;
  DAT_INTMEM_31 = 0;
  DAT_INTMEM_32 = 0x40;
  DAT_INTMEM_33 = 0x10;
  DAT_INTMEM_34 = 0;
  DAT_INTMEM_35 = 0x40;
  DAT_INTMEM_2a = 2;
  DAT_INTMEM_2b = 1;
  DAT_INTMEM_2c = 0;
  DAT_INTMEM_2d = 0;
  DAT_INTMEM_2e = 1;
  cVar1 = '\b';
  FUN_CODE_1aa9();
  DAT_EXTMEM_4fe8 = cVar1;
  if (cVar1 != '\0') {
    return cVar1;
  }
  cVar3 = '\0';
  FUN_CODE_1f0b();
  DAT_EXTMEM_4fe8 = cVar3;
  if (cVar3 == '\0') {
    BANK0_R2 = DAT_INTMEM_81 & BANK3_R4;
    if (((BANK3_R4 == 0) && (BANK0_R2 = DAT_INTMEM_82 & BANK3_R5, BANK3_R5 == 0)) &&
       (BANK2_R3 != '\0')) {
      FUN_CODE_3ebc(0,CONCAT11(DAT_INTMEM_64,DAT_INTMEM_63),DAT_INTMEM_65);
      FUN_CODE_3ebc(BANK1_R2,CONCAT11(DAT_INTMEM_61,DAT_INTMEM_60),DAT_INTMEM_62);
      cVar1 = FUN_CODE_3ebc(BANK1_R1,CONCAT11(DAT_INTMEM_5e,DAT_INTMEM_5d),DAT_INTMEM_5f);
      return cVar1;
    }
    cVar1 = FUN_CODE_3ebc(1,CONCAT11(DAT_INTMEM_64,DAT_INTMEM_63),DAT_INTMEM_65);
    return cVar1;
  }
  return cVar3;
}



/* =========================================================
 * CODE:28f6  FUN_CODE_28f6  size=23
 * ========================================================= */

char FUN_CODE_28f6(void)

{
  char cVar1;
  
  cVar1 = '\0';
  FUN_CODE_1f0b();
  DAT_EXTMEM_4fe8 = cVar1;
  if (cVar1 != '\0') {
    return cVar1;
  }
  BANK0_R2 = DAT_INTMEM_81 & BANK3_R4;
  if (((BANK3_R4 == 0) && (BANK0_R2 = DAT_INTMEM_82 & BANK3_R5, BANK3_R5 == 0)) &&
     (BANK2_R3 != '\0')) {
    FUN_CODE_3ebc(0,CONCAT11(DAT_INTMEM_64,DAT_INTMEM_63),DAT_INTMEM_65);
    FUN_CODE_3ebc(BANK1_R2,CONCAT11(DAT_INTMEM_61,DAT_INTMEM_60),DAT_INTMEM_62);
    cVar1 = FUN_CODE_3ebc(BANK1_R1,CONCAT11(DAT_INTMEM_5e,DAT_INTMEM_5d),DAT_INTMEM_5f);
    return cVar1;
  }
  cVar1 = FUN_CODE_3ebc(1,CONCAT11(DAT_INTMEM_64,DAT_INTMEM_63),DAT_INTMEM_65);
  return cVar1;
}



/* =========================================================
 * CODE:290d  FUN_CODE_290d  size=101
 * ========================================================= */

void FUN_CODE_290d(byte param_1)

{
  BANK0_R2 = DAT_INTMEM_81 & BANK3_R4;
  if (((param_1 == BANK3_R4) && (BANK0_R2 = DAT_INTMEM_82 & BANK3_R5, param_1 == BANK3_R5)) &&
     (BANK2_R3 != '\0')) {
    FUN_CODE_3ebc(0,DAT_INTMEM_63,DAT_INTMEM_65,DAT_INTMEM_64);
    FUN_CODE_3ebc(BANK1_R2,DAT_INTMEM_60,DAT_INTMEM_62,DAT_INTMEM_61);
    FUN_CODE_3ebc(BANK1_R1,DAT_INTMEM_5d,DAT_INTMEM_5f,DAT_INTMEM_5e);
    return;
  }
  FUN_CODE_3ebc(1,DAT_INTMEM_63,DAT_INTMEM_65,DAT_INTMEM_64);
  return;
}



/* =========================================================
 * CODE:2972  FUN_CODE_2972  size=124
 * callers: CODE:271d, CODE:2332, CODE:26fe, CODE:2661, CODE:2519, CODE:280c, CODE:223b, CODE:256e, CODE:277b, CODE:25b4, CODE:2832, CODE:24c4, CODE:2687, CODE:23e8
 * ========================================================= */

char FUN_CODE_2972(void)

{
  char cVar1;
  ushort uVar2;
  
  DAT_EXTMEM_4fe4 = 0;
  BANK2_R5 = 0;
  DAT_EXTMEM_c600 = 0;
  uVar2 = 0xc600;
  FUN_CODE_1dc6(0xc600);
  DAT_INTMEM_7a = 4;
  DAT_INTMEM_7b = 0x13;
  FUN_CODE_0270(uVar2 & 0xff00);
  DAT_EXTMEM_cc00 = 1;
  FUN_CODE_11d7();
  BANK0_R2 = BANK0_R2 & 0xfe | 1;
  DAT_INTMEM_30 = 0xf;
  DAT_INTMEM_31 = 0;
  DAT_INTMEM_32 = 0x40;
  DAT_INTMEM_33 = 0x10;
  DAT_INTMEM_34 = 0;
  DAT_INTMEM_35 = 0x40;
  DAT_INTMEM_2a = 2;
  DAT_INTMEM_2b = 1;
  DAT_INTMEM_2c = 0;
  DAT_INTMEM_2d = 0;
  DAT_INTMEM_2e = 1;
  DAT_INTMEM_2f = 0x8b;
  cVar1 = '\b';
  FUN_CODE_1aa9();
  DAT_EXTMEM_4fe8 = cVar1;
  if (cVar1 != '\0') {
    return cVar1;
  }
  cVar1 = FUN_CODE_3ebc(1,CONCAT11(DAT_INTMEM_64,DAT_INTMEM_63),DAT_INTMEM_65);
  return cVar1;
}



/* =========================================================
 * CODE:29ee  FUN_CODE_29ee  size=21
 * ========================================================= */

void FUN_CODE_29ee(void)

{
  FUN_CODE_3ebc(1,DAT_INTMEM_63,DAT_INTMEM_65,DAT_INTMEM_64);
  return;
}



/* =========================================================
 * CODE:2a03  FUN_CODE_2a03  size=2688
 * ========================================================= */

void FUN_CODE_2a03(void)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  undefined1 uVar8;
  ushort uVar9;
  undefined2 uVar10;
  
  DAT_INTMEM_78 = 0;
  DAT_INTMEM_79 = 0;
  uINTMEM8f = 0;
  uINTMEM90 = 0;
  uINTMEM91 = 0;
  uINTMEM92 = 0;
  cVar4 = '\0';
  uEXTMEMc8a0 = 0xe;
  BANK0_R2 = BANK0_R2 & 0xfc | 0x40;
  DAT_INTMEM_7a = 1;
  DAT_INTMEM_7b = 1;
  FUN_CODE_0270(0xc800,0,0,0,0,0,0);
  uEXTMEMd768 = 0;
  uEXTMEMd769 = 0;
  uEXTMEMd76a = 5;
  uEXTMEMcc18 = 6;
LAB_CODE_2a74:
  if ((bEXTMEMd66f >> 4 & 1) != 0) {
    uEXTMEMca10 = 3;
    uEXTMEMca15 = 0x20;
    uEXTMEMca14 = 7;
  }
  if ((bCODE0048 >> 4 & 1) != 0) {
    uEXTMEMd7fc = 1;
    uEXTMEMd7fa = 1;
    uEXTMEMd7f8 = 1;
    uEXTMEMd7f6 = 1;
  }
  do {
    BANK0_R2 = BANK0_R2 & 0xe;
  } while (bEXTMEMc800 == 0xe);
  BANK1_R0 = DAT_EXTMEM_c801 & 0x80;
  if (BANK1_R0 == 0) {
    BANK0_R2 = BANK0_R2 | 0x9b;
    uEXTMEMd21e = 0xff;
  }
  else {
    uEXTMEMcc8e = 0;
  }
  bVar7 = BANK0_R2;
  DAT_EXTMEM_4fe9 = 0;
  BANK1_R1 = 0;
  BANK1_R2 = 0;
  BANK2_R4 = 0;
  BANK1_R5 = '\0';
  BANK1_R6 = '\0';
  BANK2_R3 = '\0';
  BANK2_R7 = 0;
  DAT_EXTMEM_4fe4 = 0;
  BANK2_R5 = '\0';
  BANK2_R6 = '\0';
  BANK3_R0 = '\0';
  bEXTMEM4feb = 0;
  cVar3 = '\0';
  uEXTMEM4fe5 = 0;
  uEXTMEM4fe6 = 0;
  DAT_EXTMEM_4fe7 = 0;
  DAT_EXTMEM_4fae = 0;
  uEXTMEMd766 = 8;
  uEXTMEMd600 = 0;
  uEXTMEMd680 = 0;
  uEXTMEMd700 = 0;
  uEXTMEMd780 = 0;
  if (cCODE004b < '\0') {
    uEXTMEMd677 = 0;
  }
  else {
    uEXTMEMd677 = 0xf;
  }
  if (BANK1_R0 == 0) {
    BANK0_R3 = BANK0_R3 & 0xfc | 4;
    uEXTMEMd254 = 0xff;
    uEXTMEMd255 = 0xff;
  }
  else if ((bEXTMEMc84b >> 3 & 1) == 1) {
    BANK0_R3 = BANK0_R3 | 4;
  }
  else {
    BANK0_R3 = BANK0_R3 & 0xfa;
  }
  uEXTMEMcc92 = 8;
  BANK3_R1 = uEXTMEMcc8e;
  uEXTMEMcc96 = 1;
  BANK0_R3 = BANK0_R3 & 0xfe;
  FUN_CODE_1da2(5);
  DAT_EXTMEM_4fea = DAT_EXTMEM_c801 & 0x3f;
  if (DAT_EXTMEM_4fea == 8) {
    for (bEXTMEM4ff0 = 0; bEXTMEM4ff0 < 2; bEXTMEM4ff0 = bEXTMEM4ff0 + 1) {
    }
    BANK0_R3 = BANK0_R3 & 0xfd;
    DAT_INTMEM_7a = 0x10;
    DAT_INTMEM_7b = 0x1c;
    BANK0_R2 = bVar7;
    FUN_CODE_0270(0xd600);
    do {
    } while ((bEXTMEMd67c >> 2 & 1) == 0);
  }
  while ((((DAT_EXTMEM_c848 >> 2 & 1) != 0 &&
          (uVar9 = 0xcc93, bVar6 = DAT_EXTMEM_c848, DAT_EXTMEM_cc93 == '\0')) ||
         (uVar9 = 0xc808, bVar6 = DAT_EXTMEM_c808, (DAT_EXTMEM_c808 & 1) != 0))) {
    DAT_INTMEM_7a = 0x20;
    DAT_INTMEM_7b = 0x20;
    BANK0_R2 = bVar7;
    FUN_CODE_0270(uVar9 & 0xff00,bVar6);
  }
  do {
  } while ((DAT_EXTMEM_cc07 & 1) == 1);
  do {
  } while ((bEXTMEMc82f & 1) == 0);
  BANK0_R3 = BANK0_R3 | 3;
  if ((bEXTMEMc800 >> 4 & 1) != 0) {
    BANK0_R2 = bVar7;
    FUN_CODE_1da2(0x1c2,bEXTMEMc800);
  }
  if ((bEXTMEMc800 & 1) == 1) {
    if (cEXTMEMd66e == '\x01') {
      bEXTMEMc890 = 1;
      uEXTMEMc891 = 0xc;
      uEXTMEMd449 = 2;
      uEXTMEMd766 = 0;
      DAT_EXTMEM_d672 = 0;
      BANK0_R3 = BANK0_R3 & 3;
    }
    else if (cEXTMEMd66e == '\x02') {
      DAT_EXTMEM_d672 = 0xf;
      BANK0_R3 = BANK0_R3 & 2;
    }
    else {
      DAT_EXTMEM_d672 = 0xf;
      BANK0_R3 = BANK0_R3 & 3;
    }
    BANK0_R2 = bVar7;
    for (bEXTMEM4ff0 = 0; bEXTMEM4ff0 < 4; bEXTMEM4ff0 = bEXTMEM4ff0 + 1) {
      DAT_INTMEM_7b = bEXTMEM4ff0;
      DAT_INTMEM_7a = 0;
      FUN_CODE_0e94(0x4f00);
    }
    uEXTMEMca5a = 0;
    BANK0_R3 = BANK0_R3 | 1;
    uEXTMEMd767 = 0x3f;
    BANK1_R1 = 4;
    do {
      if (bEXTMEMc890 != 0) {
        DAT_INTMEM_7a = 0x20;
        DAT_INTMEM_7b = 4;
        FUN_CODE_0270(0xc800);
        do {
        } while( true );
      }
      DAT_INTMEM_7a = 1;
      DAT_INTMEM_7b = 2;
      FUN_CODE_0270(0xc800);
      uEXTMEMd446 = 0xc4;
      uEXTMEMd447 = 0;
      uEXTMEMd453 = 0x3a;
      uEXTMEMd47d = 0x3a;
      uEXTMEMd454 = 0x54;
      uEXTMEMd47e = 0x54;
      FUN_CODE_0478();
      while (FUN_CODE_0aba(), (DAT_EXTMEM_c802 & 1) == 0) {
        if ((DAT_EXTMEM_cc07 & 1) != 0) {
          FUN_CODE_0e61(DAT_EXTMEM_cc07);
          goto LAB_CODE_2a74;
        }
      }
      FUN_CODE_0f3d(DAT_EXTMEM_c802);
      FUN_CODE_1010();
      FUN_CODE_1da2(0xf);
      BANK0_R3 = BANK0_R3 & 0xdd;
      DAT_EXTMEM_cc00 = 0;
      FUN_CODE_1043();
      uEXTMEMce51 = 0;
      DAT_INTMEM_7a = 1;
      DAT_INTMEM_7b = 3;
      bVar7 = FUN_CODE_0270(0xce00);
      while( true ) {
        FUN_CODE_0aba(bVar7);
        while (DAT_EXTMEM_cc93 == '\x01') {
          DAT_INTMEM_7a = 0x20;
          DAT_INTMEM_7b = 0x21;
          FUN_CODE_0270(0xcc00);
        }
        if (((((DAT_EXTMEM_c802 & 1) != 1) && ((bEXTMEMc890 & 1) == 0)) ||
            (-1 < (char)DAT_EXTMEM_d77f)) && ((bEXTMEMc890 & 1) != 1)) break;
        DAT_EXTMEM_4fea = DAT_EXTMEM_cc07;
        if ((DAT_EXTMEM_cc07 & 1) != 0) {
          FUN_CODE_0e61(DAT_EXTMEM_cc07);
          goto LAB_CODE_2a74;
        }
        bVar7 = DAT_EXTMEM_cc07;
        if ((DAT_EXTMEM_cc07 >> 2 & 1) != 0) {
          bINTMEM7f = BANK0_R3;
          bINTMEM80 = BANK0_R3;
          bVar7 = bEXTMEMcc37;
        }
      }
      FUN_CODE_0e61(bEXTMEMc890);
    } while( true );
  }
  uEXTMEMca5a = 0;
  DAT_INTMEM_7a = 1;
  DAT_INTMEM_7b = 5;
  BANK0_R2 = bVar7;
  FUN_CODE_0270(0xca00,bEXTMEMc800);
  cEXTMEM4fef = '\0';
  uVar8 = 200;
  BANK0_R2 = bVar7;
  if (((DAT_EXTMEM_c848 >> 4 & 1) == 1) &&
     ((bVar6 = DAT_EXTMEM_c848, BANK1_R0 != 0 ||
      (uVar8 = 0xd2, bVar6 = DAT_EXTMEM_d252, (DAT_EXTMEM_d252 >> 5 & 1) == 0)))) {
    DAT_INTMEM_ee = 1;
    DAT_INTMEM_2f = 0xee;
    DAT_INTMEM_30 = 0xf;
    DAT_INTMEM_31 = 0;
    DAT_INTMEM_32 = 0x40;
    DAT_INTMEM_33 = 0x10;
    DAT_INTMEM_34 = 0;
    DAT_INTMEM_35 = 0x40;
    DAT_INTMEM_2a = 0;
    DAT_INTMEM_2b = 6;
    DAT_INTMEM_2c = 0;
    DAT_INTMEM_2d = 0;
    DAT_INTMEM_2e = 1;
    uVar10 = CONCAT11(uVar8,8);
    FUN_CODE_1aa9(uVar10,bVar6);
    uVar8 = (undefined1)((ushort)uVar10 >> 8);
    if (BANK1_R0 == 0) {
      uEXTMEMcc0c = 199;
      uEXTMEMcc0b = 0;
      do {
        if (((cEXTMEMcc29 == '\0') && (99 < bEXTMEMcc0a)) || ((bEXTMEMcc90 & 1) == 1)) {
          uVar8 = 0xcc;
          uEXTMEMcc0c = 99;
          goto LAB_CODE_2f76;
        }
      } while ((DAT_EXTMEM_cc07 & 1) == 0);
      DAT_EXTMEM_cc00 = 1;
      BANK0_R2 = bVar7;
      FUN_CODE_11d7(DAT_EXTMEM_cc07);
      BANK0_R3 = BANK0_R3 & 0xfe;
      DAT_EXTMEM_c200 = DAT_EXTMEM_c200 & 0xf1 | 3;
      DAT_EXTMEM_d67e = 0;
      DAT_EXTMEM_d67f = 0;
      goto LAB_CODE_2a74;
    }
LAB_CODE_2f76:
    DAT_INTMEM_30 = 0xf;
    DAT_INTMEM_31 = 0;
    DAT_INTMEM_32 = 0x40;
    DAT_INTMEM_33 = 0x10;
    DAT_INTMEM_34 = 0;
    DAT_INTMEM_35 = 0x40;
    DAT_INTMEM_2a = 0;
    DAT_INTMEM_2b = 0;
    DAT_INTMEM_2c = 0;
    DAT_INTMEM_2d = 0;
    DAT_INTMEM_2e = 0xc;
    DAT_INTMEM_2f = 0;
    BANK0_R2 = bVar7;
    FUN_CODE_1aa9(CONCAT11(uVar8,9));
    BANK0_R2 = bVar7;
    bVar7 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
    cEXTMEM4fef = 0x11 < bVar7;
    cVar4 = BANK2_R2;
    bVar7 = FUN_CODE_3ed5(CONCAT11(BANK2_R1 - (((0xfd < BANK2_R0) << 7) >> 7),BANK2_R0 + 2),BANK2_R2
                         );
    DAT_EXTMEM_4fae = bVar7 & 0x40;
    if (BANK1_R0 == 0) {
      uEXTMEMd257 = 0x11;
      BANK0_R3 = 0;
      cVar4 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
      if ((cVar4 != '\x10') && (cVar4 != '\x11')) {
        if (cVar4 == '\x12') {
          BANK0_R3 = BANK0_R3 | 0x10;
        }
        else {
          BANK0_R3 = BANK0_R3 | 0x10;
        }
      }
      if ((bEXTMEMc80a & 0xf) == 0) {
        cVar4 = FUN_CODE_3ed5(CONCAT11(BANK2_R1 - (((0xfe < BANK2_R0) << 7) >> 7),BANK2_R0 + 1),
                              BANK2_R2);
        if (cVar4 != '\x06') {
          if (cVar4 == '\n') {
            BANK0_R3 = BANK0_R3 | 1;
          }
          else if (cVar4 == '\x14') {
            BANK0_R3 = BANK0_R3 | 2;
          }
          else {
            BANK0_R3 = BANK0_R3 | 2;
          }
        }
      }
      else {
        BANK0_R3 = BANK0_R3 & 0xf;
        if (bEXTMEMc80a != 1) {
          if (bEXTMEMc80a == 2) {
            BANK0_R3 = BANK0_R3 | 1;
          }
          else if (bEXTMEMc80a == 3) {
            BANK0_R3 = BANK0_R3 | 2;
          }
          else {
            BANK0_R3 = BANK0_R3 | 2;
          }
        }
      }
      if ((bEXTMEMc80a & 0xf0) == 0) {
        cVar4 = FUN_CODE_3ed5(CONCAT11(BANK2_R1 - (((0xfd < BANK2_R0) << 7) >> 7),BANK2_R0 + 2),
                              BANK2_R2);
        BANK0_R3 = BANK0_R3 & 0x1f;
        if (cVar4 != '\x01') {
          if (cVar4 == '\x02') {
            BANK0_R3 = BANK0_R3 | 0x10;
          }
          else if (cVar4 == '\x04') {
            BANK0_R3 = BANK0_R3 | 0x20;
          }
          else {
            BANK0_R3 = BANK0_R3 | 0x20;
          }
        }
      }
      else {
        BANK0_R3 = BANK0_R3 & 0xf0;
        if (bEXTMEMc80a != 0x10) {
          if (bEXTMEMc80a == 0x20) {
            BANK0_R3 = BANK0_R3 | 0x10;
          }
          else if (bEXTMEMc80a == 0x40) {
            BANK0_R3 = BANK0_R3 | 0x20;
          }
          else {
            BANK0_R3 = BANK0_R3 | 0x20;
          }
        }
      }
      cVar4 = BANK2_R1 - (((0xfd < BANK2_R0) << 7) >> 7);
      bVar7 = FUN_CODE_3ed5(CONCAT11(cVar4,BANK2_R0 + 2),BANK2_R2);
      BANK0_R3 = BANK0_R3 & 0xfe | bVar7 & 0xc0;
    }
    bVar7 = BANK0_R2;
    if ((bCODE0048 >> 2 & 1) != 0) {
      DAT_INTMEM_30 = 0xf;
      DAT_INTMEM_31 = 0;
      DAT_INTMEM_32 = 0x40;
      DAT_INTMEM_33 = 0x10;
      DAT_INTMEM_34 = 0;
      DAT_INTMEM_35 = 0x40;
      DAT_INTMEM_2a = 0;
      DAT_INTMEM_2b = 2;
      DAT_INTMEM_2c = 0;
      DAT_INTMEM_2d = 0;
      DAT_INTMEM_2e = 1;
      DAT_INTMEM_2f = 0;
      FUN_CODE_1aa9(9,bCODE0048);
      cVar4 = BANK2_R2;
      bVar6 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
      DAT_EXTMEM_0120 = bVar6 & 0x1f;
      FUN_CODE_0326();
    }
    BANK0_R2 = bVar7;
    if (cEXTMEM4fef != '\0') {
      DAT_INTMEM_30 = 0xf;
      DAT_INTMEM_31 = 0;
      DAT_INTMEM_32 = 0x40;
      DAT_INTMEM_33 = 0x10;
      DAT_INTMEM_34 = 0;
      DAT_INTMEM_35 = 0x40;
      DAT_INTMEM_2a = 0xe;
      DAT_INTMEM_2b = 0;
      DAT_INTMEM_2c = 0;
      DAT_INTMEM_2d = 0;
      DAT_INTMEM_2e = 1;
      DAT_INTMEM_2f = 0;
      FUN_CODE_1aa9(0x4f09,cEXTMEM4fef);
      cVar4 = BANK2_R2;
      if ((bEXTMEMc809 & 1) == 1) {
        BANK0_R2 = bVar7;
        cVar5 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
        BANK0_R3 = BANK0_R3 & 0x7f;
        if (BANK0_R3 < 5) {
                    /* WARNING: Could not recover jumptable at 0x32a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ushort)(byte)(cVar5 * '\x03') + 0x32aa))();
          return;
        }
      }
      else {
        BANK0_R2 = bVar7;
        cVar5 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
        BANK0_R3 = BANK0_R3 & 0x7f;
        if (BANK0_R3 < 5) {
                    /* WARNING: Could not recover jumptable at 0x3333. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ushort)(byte)(cVar5 * '\x03') + 0x3334))();
          return;
        }
      }
    }
  }
  bVar7 = BANK0_R2;
  uEXTMEM4fd9 = 1;
  DAT_EXTMEM_4fd8 = 4;
  BANK0_R3 = BANK0_R3 & 0xfe;
  uVar9 = 0x4fef;
  if (cEXTMEM4fef == '\0') {
    bVar7 = 0;
  }
  else {
    DAT_INTMEM_30 = 0xf;
    DAT_INTMEM_31 = 0;
    DAT_INTMEM_32 = 0x40;
    DAT_INTMEM_33 = 0x10;
    DAT_INTMEM_34 = 0;
    DAT_INTMEM_35 = 0x40;
    DAT_INTMEM_2a = 0x21;
    DAT_INTMEM_2b = 0;
    DAT_INTMEM_2c = 0;
    DAT_INTMEM_2d = 0;
    DAT_INTMEM_2e = 1;
    DAT_INTMEM_2f = 0;
    FUN_CODE_1aa9(0x4f09);
    uVar9 = CONCAT11(BANK2_R1,BANK2_R0);
    cVar4 = BANK2_R2;
    BANK0_R2 = bVar7;
    bVar7 = FUN_CODE_3ed5(uVar9,BANK2_R2);
    bVar6 = BANK0_R2;
    BANK0_R2 = bVar6;
    if ((bVar7 & 1) != 0) {
      DAT_EXTMEM_4fe7 = 0;
      uINTMEMd4 = 0;
      DAT_INTMEM_2f = 0xd4;
      DAT_INTMEM_30 = 0xf;
      DAT_INTMEM_31 = 0;
      DAT_INTMEM_32 = 0x40;
      DAT_INTMEM_33 = 0x10;
      DAT_INTMEM_34 = 0;
      DAT_INTMEM_35 = 0x40;
      DAT_INTMEM_2a = 0x11;
      DAT_INTMEM_2b = 1;
      DAT_INTMEM_2c = 0;
      DAT_INTMEM_2d = 0;
      DAT_INTMEM_2e = 1;
      uVar8 = 0x4f;
      FUN_CODE_1aa9(0x4f08);
      uINTMEMd5 = 0;
      uINTMEMd6 = 0;
      uINTMEMd7 = 0x3f;
      DAT_INTMEM_2f = 0xd5;
      DAT_INTMEM_30 = 0xf;
      DAT_INTMEM_31 = 0;
      DAT_INTMEM_32 = 0x40;
      DAT_INTMEM_33 = 0x10;
      DAT_INTMEM_34 = 0;
      DAT_INTMEM_35 = 0x40;
      DAT_INTMEM_2a = 0xc0;
      DAT_INTMEM_2b = 1;
      DAT_INTMEM_2c = 0;
      DAT_INTMEM_2d = 0;
      DAT_INTMEM_2e = 3;
      uVar9 = CONCAT11(uVar8,8);
      FUN_CODE_1aa9(uVar9);
      BANK0_R2 = bVar6;
    }
  }
  if (BANK1_R5 == '\0') goto LAB_CODE_3479;
LAB_CODE_3b47:
  bVar6 = BANK0_R2;
  DAT_INTMEM_7a = 0x20;
  DAT_INTMEM_7b = 0xb;
  uVar9 = uVar9 & 0xff00;
  FUN_CODE_0270(uVar9);
  uVar8 = (undefined1)(uVar9 >> 8);
  BANK1_R5 = '\0';
  if (((BANK3_R0 != '\0') || (uVar8 = 0x4f, bVar7 = bEXTMEM4feb, bEXTMEM4feb != 0)) ||
     ((uVar8 = 0xcc, cEXTMEMcc8d != '\0' || (cVar3 == '\0')))) goto LAB_CODE_3e82;
  uVar9 = 0xcc02;
  BANK0_R2 = bVar6;
  FUN_CODE_1f0b();
  bVar7 = (byte)uVar9;
  BANK0_R2 = bVar6;
  if (bVar7 != 1) goto LAB_CODE_3b8c;
  goto LAB_CODE_2a74;
LAB_CODE_3b8c:
  if (BANK1_R5 == '\0') {
    if (BANK1_R6 != '\0') goto LAB_CODE_3be5;
    uVar9 = 0;
    bVar7 = bCODE0048;
    if ((bCODE0048 >> 2 & 1) != 0) {
      uVar9 = 0;
      if ((bCODE0048 >> 5 & 1) != 0) {
        DAT_INTMEM_7d = DAT_EXTMEM_0120;
        DAT_INTMEM_7a = BANK1_R1;
        DAT_INTMEM_7b = BANK1_R2;
        DAT_INTMEM_7c = BANK2_R4;
        uVar9 = 0x10c;
        FUN_CODE_11f9(0x10c);
      }
      BANK0_R2 = bVar6;
      FUN_CODE_0326();
    }
    uVar8 = (undefined1)(uVar9 >> 8);
    BANK0_R3 = DAT_INTMEM_81 & BANK3_R4;
    BANK0_R2 = bVar6;
    if (bVar7 != BANK3_R4) goto LAB_CODE_3be5;
    BANK0_R3 = DAT_INTMEM_82 & BANK3_R5;
    if (bVar7 != BANK3_R5) goto LAB_CODE_3be5;
    if (BANK2_R3 == '\0') goto LAB_CODE_3be5;
    bVar7 = BANK2_R7 & 0xc0;
    if (bVar7 == 0xc0) {
      DAT_INTMEM_7a = BANK1_R1;
      DAT_INTMEM_7b = BANK1_R2;
      DAT_INTMEM_7c = BANK2_R4;
      DAT_INTMEM_7d = BANK2_R7;
      uVar9 = CONCAT11(uVar8,4);
      FUN_CODE_11f9(uVar9);
      BANK0_R2 = bVar6;
    }
    else {
LAB_CODE_3e82:
      if ((BANK1_R0 == 0) && (uVar8 = 0xd2, bVar7 = DAT_EXTMEM_d25c, (DAT_EXTMEM_d25c & 0xf) == 0))
      {
        uVar9 = 0xcc21;
        uEXTMEMcc21 = 1;
        BANK0_R2 = bVar6;
      }
      else {
        DAT_INTMEM_7a = BANK1_R1;
        DAT_INTMEM_7b = BANK1_R2;
        DAT_INTMEM_7c = BANK2_R4;
        DAT_INTMEM_7d = 0;
        uVar9 = CONCAT11(uVar8,0xd);
        BANK0_R2 = bVar6;
        FUN_CODE_11f9(uVar9);
        BANK0_R2 = bVar6;
      }
    }
LAB_CODE_3479:
    do {
      while (bVar6 = BANK0_R2, BANK2_R6 != '\0') {
LAB_CODE_34eb:
        uVar8 = BANK0_R4;
        BANK2_R6 = '\0';
        DAT_INTMEM_77 = bVar7 & 7;
        bVar1 = bINTMEM7e & 0x60;
        DAT_INTMEM_76 = bINTMEM80;
        DAT_INTMEM_7a = 0x20;
        DAT_INTMEM_7b = 0x19;
        uVar9 = uVar9 & 0xff00;
        BANK0_R2 = bVar6;
        BANK0_R3 = bVar1;
        FUN_CODE_0270(uVar9,bVar7 & 0x18);
        BANK0_R5 = bINTMEM7f & 0xf;
        BANK0_R2 = bVar6;
        BANK0_R3 = bVar1;
        BANK0_R4 = uVar8;
        if (BANK0_R5 < 0x10) {
                    /* WARNING: Could not recover jumptable at 0x3531. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ushort)(byte)(cVar4 * '\x03') + 0x3532))();
          return;
        }
      }
      DAT_INTMEM_7a = 0x20;
      DAT_INTMEM_7b = 6;
      FUN_CODE_0270(uVar9 & 0xff00);
      uEXTMEMcc2d = 0xfe;
      do {
        BANK3_R7 = 0xec;
        DAT_INTMEM_20 = 0x4f;
        DAT_INTMEM_21 = 0;
        DAT_INTMEM_22 = 0x72;
        DAT_INTMEM_23 = 0;
        DAT_INTMEM_24 = 0x40;
        DAT_INTMEM_25 = 0x73;
        DAT_INTMEM_26 = 0;
        DAT_INTMEM_27 = 0x40;
        BANK3_R6 = 0;
        bVar7 = 0x26;
        BANK0_R2 = bVar6;
        FUN_CODE_17f4();
        uVar9 = 0x4fea;
        DAT_EXTMEM_4fea = bVar7;
        if (bVar7 == 0) {
          BANK0_R2 = bVar6;
          if (BANK1_R5 != '\0') goto LAB_CODE_3b47;
          if (BANK1_R6 == '\0') goto LAB_CODE_34eb;
          break;
        }
        uVar9 = 0x4fea;
        BANK0_R2 = bVar6;
        if (bVar7 == 1) goto LAB_CODE_2a74;
        if (BANK1_R5 != '\0') goto LAB_CODE_3b47;
      } while (BANK1_R6 == '\0');
LAB_CODE_3be5:
      bVar7 = BANK0_R2;
      DAT_INTMEM_7a = 1;
      DAT_INTMEM_7b = 0xc;
      FUN_CODE_0270(uVar9 & 0xff00);
      BANK0_R3 = BANK0_R3 & 0xfc;
      uVar8 = 0x4f;
      bVar6 = DAT_EXTMEM_4fbf;
      if ((DAT_EXTMEM_4fbf == 1) && (uVar8 = 0, bVar6 = bCODE0049, (bCODE0049 >> 1 & 1) != 0)) {
        BANK0_R3 = BANK0_R3 | 1;
        DAT_EXTMEM_d67e = 0;
        uVar8 = 0xd6;
        DAT_EXTMEM_d67f = 0;
        bVar6 = DAT_EXTMEM_d77f;
      }
      BANK0_R2 = bVar7;
      if (BANK1_R6 != '\0') {
        DAT_INTMEM_30 = 0xf;
        DAT_INTMEM_31 = 0;
        DAT_INTMEM_32 = 0x40;
        DAT_INTMEM_33 = 0x10;
        DAT_INTMEM_34 = 0;
        DAT_INTMEM_35 = 0x40;
        DAT_INTMEM_2a = 0x21;
        DAT_INTMEM_2b = 0;
        DAT_INTMEM_2c = 0;
        DAT_INTMEM_2d = 0;
        DAT_INTMEM_2e = 1;
        DAT_INTMEM_2f = 0;
        FUN_CODE_1aa9(CONCAT11(uVar8,9),bVar6);
        cVar4 = BANK2_R2;
        BANK0_R2 = bVar7;
        bVar6 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
        bVar7 = BANK0_R2;
        BANK0_R2 = bVar7;
        if ((bVar6 & 1) != 0) {
          DAT_EXTMEM_4fe7 = 0;
          uINTMEMd4 = 0;
          DAT_INTMEM_2f = 0xd4;
          DAT_INTMEM_30 = 0xf;
          DAT_INTMEM_31 = 0;
          DAT_INTMEM_32 = 0x40;
          DAT_INTMEM_33 = 0x10;
          DAT_INTMEM_34 = 0;
          DAT_INTMEM_35 = 0x40;
          DAT_INTMEM_2a = 0x11;
          DAT_INTMEM_2b = 1;
          DAT_INTMEM_2c = 0;
          DAT_INTMEM_2d = 0;
          DAT_INTMEM_2e = 1;
          uVar8 = 0x4f;
          FUN_CODE_1aa9(0x4f08,bVar6);
          uINTMEMd5 = 0;
          uINTMEMd6 = 0;
          uINTMEMd7 = 0x3f;
          DAT_INTMEM_2f = 0xd5;
          DAT_INTMEM_30 = 0xf;
          DAT_INTMEM_31 = 0;
          DAT_INTMEM_32 = 0x40;
          DAT_INTMEM_33 = 0x10;
          DAT_INTMEM_34 = 0;
          DAT_INTMEM_35 = 0x40;
          DAT_INTMEM_2a = 0xc0;
          DAT_INTMEM_2b = 1;
          DAT_INTMEM_2c = 0;
          DAT_INTMEM_2d = 0;
          DAT_INTMEM_2e = 3;
          FUN_CODE_1aa9(CONCAT11(uVar8,8));
          BANK0_R2 = bVar7;
        }
      }
      BANK1_R6 = '\0';
      uEXTMEM4fe6 = 0;
      DAT_EXTMEM_cc00 = 1;
      DAT_EXTMEM_c200 = DAT_EXTMEM_c200 & 0xf1 | 3;
      if ((bCODE0048 >> 1 & 1) == 1) {
        bVar7 = bEXTMEM4feb != 1;
        bVar2 = DAT_EXTMEM_4fbf != 1;
        if (bVar2 && (bool)bVar7) {
          DAT_INTMEM_7a = BANK1_R1;
          DAT_INTMEM_7b = BANK1_R2;
          DAT_INTMEM_7c = BANK2_R4;
          DAT_INTMEM_7d = BANK2_R7;
          uVar9 = 0x4f03;
          FUN_CODE_11f9(0x4f03);
        }
        else {
          DAT_EXTMEM_4fbf = 0;
          if ((BANK2_R5 != '\0') || (uVar9 = 0x4fe4, bVar7 = DAT_EXTMEM_4fe4, DAT_EXTMEM_4fe4 != 0))
          {
            do {
              bVar7 = DAT_EXTMEM_ca40;
              if ((DAT_EXTMEM_ca40 >> 1 & 1) == 1) break;
              bVar7 = bEXTMEMcb40;
            } while ((bEXTMEMcb40 & 6) != 0);
            uEXTMEMca0c = 1;
            DAT_INTMEM_30 = 0xf;
            DAT_INTMEM_31 = 0;
            DAT_INTMEM_32 = 0x40;
            DAT_INTMEM_33 = 0x10;
            DAT_INTMEM_34 = 0;
            DAT_INTMEM_35 = 0x40;
            DAT_INTMEM_2a = 2;
            DAT_INTMEM_2b = 1;
            DAT_INTMEM_2c = 0;
            DAT_INTMEM_2d = 0;
            DAT_INTMEM_2e = 1;
            DAT_INTMEM_2f = 0x8f;
            FUN_CODE_1aa9(0xca08,bVar7,bVar2);
            uEXTMEMce51 = 0x10;
            FUN_CODE_11d7();
            BANK0_R3 = BANK0_R3 & 0xfe;
            BANK2_R5 = '\0';
            uVar9 = 0x4fe4;
            DAT_EXTMEM_4fe4 = 0;
            bVar7 = DAT_EXTMEM_d76d;
          }
        }
      }
      else if (cVar3 == '\0') {
        if ((BANK2_R5 != '\0') || (uVar9 = 0x4fe4, bVar7 = DAT_EXTMEM_4fe4, DAT_EXTMEM_4fe4 != 0)) {
          do {
            bVar7 = DAT_EXTMEM_ca40;
            if ((DAT_EXTMEM_ca40 >> 1 & 1) == 1) break;
            bVar7 = bEXTMEMcb40;
          } while ((bEXTMEMcb40 & 6) != 0);
          uEXTMEMca0c = 1;
          DAT_INTMEM_30 = 0xf;
          DAT_INTMEM_31 = 0;
          DAT_INTMEM_32 = 0x40;
          DAT_INTMEM_33 = 0x10;
          DAT_INTMEM_34 = 0;
          DAT_INTMEM_35 = 0x40;
          DAT_INTMEM_2a = 2;
          DAT_INTMEM_2b = 1;
          DAT_INTMEM_2c = 0;
          DAT_INTMEM_2d = 0;
          DAT_INTMEM_2e = 1;
          DAT_INTMEM_2f = 0x8f;
          FUN_CODE_1aa9(0xca08,bVar7);
          uEXTMEMce51 = 0x10;
          FUN_CODE_11d7();
          BANK0_R3 = BANK0_R3 & 0xfe;
          BANK2_R5 = '\0';
          uVar9 = 0x4fe4;
          DAT_EXTMEM_4fe4 = 0;
          bVar7 = DAT_EXTMEM_d76d;
        }
      }
      else {
        while (bEXTMEM4fb1 != 0) {
          DAT_INTMEM_7a = 0x20;
          DAT_INTMEM_7b = 0x28;
          FUN_CODE_0270(0x4f00);
        }
        DAT_INTMEM_7a = BANK1_R1;
        DAT_INTMEM_7b = BANK1_R2;
        DAT_INTMEM_7c = BANK2_R4;
        DAT_INTMEM_7d = BANK2_R7;
        uVar9 = 0x4f03;
        bVar7 = bEXTMEM4fb1;
        FUN_CODE_11f9(0x4f03);
      }
      cVar3 = '\0';
    } while( true );
  }
  goto LAB_CODE_3b47;
}



/* =========================================================
 * CODE:3535  thunk_FUN_CODE_3604  size=3
 * ========================================================= */

void thunk_FUN_CODE_3604(ushort param_1,char param_2,byte param_3,undefined1 param_4)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  undefined1 uVar7;
  undefined2 uVar8;
  ushort uVar9;
  
  bVar2 = BANK0_R4;
  bVar5 = BANK0_R3;
  bVar4 = BANK0_R2;
  if (DAT_INTMEM_77 == 0) {
    if (DAT_EXTMEM_4fe4 != 0) {
      BANK2_R5 = '\x01';
    }
    uVar9 = 0x4fbf;
    DAT_EXTMEM_4fbf = 1;
    bVar3 = DAT_EXTMEM_4fe4;
    BANK0_R2 = bVar4;
    BANK0_R3 = bVar5;
  }
  else {
    if (BANK1_R0 == 0) {
      BANK0_R5 = BANK0_R5 & 0xfc;
      param_1 = 0xd200;
    }
    DAT_INTMEM_7a = 1;
    DAT_INTMEM_7b = 8;
    FUN_CODE_0270(param_1 & 0xff00);
    if (BANK1_R0 == 0) {
      if ((DAT_EXTMEM_d25c & 0xf) == 0) {
        BANK0_R5 = BANK0_R5 | 0x40;
      }
      else {
        BANK0_R5 = BANK0_R5 & 0xbf;
      }
      if (((DAT_EXTMEM_d252 >> 5 & 1) == 1) ||
         ((((DAT_EXTMEM_d25c & 0xf) != 0 || ((DAT_EXTMEM_d252 >> 3 & 1) != 1)) &&
          (((DAT_EXTMEM_d25c & 0xf) == 0 || ((DAT_EXTMEM_d252 >> 2 & 1) == 0)))))) {
        uEXTMEM4fe5 = false;
      }
      else {
        uEXTMEM4fe5 = true;
      }
    }
    else {
      BANK0_R5 = BANK0_R5 & 8;
      uEXTMEM4fe5 = bEXTMEMc84b == 0;
    }
    bVar3 = bEXTMEMc806;
    if ((bool)uEXTMEM4fe5 == false) {
      BANK0_R5 = BANK0_R5 | 1;
    }
    else {
      BANK0_R5 = BANK0_R5 & 0xfe;
      if (BANK1_R0 == 0) {
        BANK0_R5 = BANK0_R5 | 4;
        bVar3 = bEXTMEMd208;
      }
    }
    cEXTMEM4fec = '\x01';
    DAT_INTMEM_5d = 0x78;
    DAT_INTMEM_5e = 0;
    DAT_INTMEM_5f = 0x40;
    DAT_INTMEM_60 = 0x79;
    DAT_INTMEM_61 = 0;
    DAT_INTMEM_62 = 0x40;
    DAT_INTMEM_63 = 0xec;
    DAT_INTMEM_64 = 0x4f;
    DAT_INTMEM_65 = 0;
    uVar9 = CONCAT11(0x4f,DAT_INTMEM_77);
    BANK0_R2 = bVar4;
    BANK0_R3 = bVar5;
    BANK0_R4 = bVar2;
    DAT_INTMEM_5b = param_4;
    DAT_INTMEM_5c = param_3;
    FUN_CODE_223b(uVar9);
    BANK0_R2 = bVar4;
    BANK0_R3 = bVar5;
    if ((BANK1_R6 == '\0') && (BANK2_R5 == '\0')) {
      if (cEXTMEM4fec == '\x01') {
        DAT_INTMEM_7a = 1;
        DAT_INTMEM_7b = 9;
        uVar7 = 0x4f;
        FUN_CODE_0270(0x4f00);
        DAT_INTMEM_7a = BANK1_R1;
        DAT_INTMEM_7b = BANK1_R2;
        DAT_INTMEM_7c = BANK2_R4;
        DAT_INTMEM_7d = 0;
        uVar9 = CONCAT11(uVar7,2);
        FUN_CODE_11f9(uVar9);
        BANK0_R2 = bVar4;
        goto LAB_CODE_3479;
      }
      uVar9 = (ushort)BANK3_R1 << 8;
      FUN_CODE_1da2(uVar9);
      DAT_INTMEM_7a = 1;
      DAT_INTMEM_7b = 10;
      FUN_CODE_0270(uVar9 & 0xff00);
      bVar4 = BANK0_R2;
      param_2 = '\x01';
      if (DAT_EXTMEM_4fe7 == '\0') {
        uEXTMEMd20b = 0x85;
        BANK0_R4 = BANK0_R4 & 0xf5 | 1;
      }
      else {
        uEXTMEMd20b = 0x84;
        BANK0_R4 = BANK0_R4 & 0xfe | 10;
      }
      uVar9 = 0;
      BANK0_R3 = bVar5;
      if ((bCODE0048 >> 3 & 1) != 1) {
        DAT_INTMEM_7a = DAT_INTMEM_78;
        DAT_INTMEM_7b = DAT_INTMEM_79;
        DAT_INTMEM_7d = 0;
        uVar9 = 0;
        DAT_INTMEM_7c = param_3;
        FUN_CODE_11f9(1,bCODE0048);
      }
      BANK0_R2 = bVar4;
      if (BANK1_R5 != '\0') goto LAB_CODE_3b47;
      goto LAB_CODE_3479;
    }
  }
LAB_CODE_3be5:
  bVar4 = BANK0_R2;
  DAT_INTMEM_7a = 1;
  DAT_INTMEM_7b = 0xc;
  FUN_CODE_0270(uVar9 & 0xff00);
  BANK0_R3 = BANK0_R3 & 0xfc;
  uVar7 = 0x4f;
  bVar5 = DAT_EXTMEM_4fbf;
  if ((DAT_EXTMEM_4fbf == 1) && (uVar7 = 0, bVar5 = bCODE0049, (bCODE0049 >> 1 & 1) != 0)) {
    BANK0_R3 = BANK0_R3 | 1;
    DAT_EXTMEM_d67e = 0;
    uVar7 = 0xd6;
    DAT_EXTMEM_d67f = 0;
    bVar5 = DAT_EXTMEM_d77f;
  }
  BANK0_R2 = bVar4;
  if (BANK1_R6 != '\0') {
    DAT_INTMEM_30 = 0xf;
    DAT_INTMEM_31 = 0;
    DAT_INTMEM_32 = 0x40;
    DAT_INTMEM_33 = 0x10;
    DAT_INTMEM_34 = 0;
    DAT_INTMEM_35 = 0x40;
    DAT_INTMEM_2a = 0x21;
    DAT_INTMEM_2b = 0;
    DAT_INTMEM_2c = 0;
    DAT_INTMEM_2d = 0;
    DAT_INTMEM_2e = 1;
    DAT_INTMEM_2f = 0;
    FUN_CODE_1aa9(CONCAT11(uVar7,9),bVar5);
    bVar3 = BANK2_R2;
    BANK0_R2 = bVar4;
    bVar5 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
    bVar4 = BANK0_R2;
    BANK0_R2 = bVar4;
    if ((bVar5 & 1) != 0) {
      DAT_EXTMEM_4fe7 = '\0';
      uINTMEMd4 = 0;
      DAT_INTMEM_2f = 0xd4;
      DAT_INTMEM_30 = 0xf;
      DAT_INTMEM_31 = 0;
      DAT_INTMEM_32 = 0x40;
      DAT_INTMEM_33 = 0x10;
      DAT_INTMEM_34 = 0;
      DAT_INTMEM_35 = 0x40;
      DAT_INTMEM_2a = 0x11;
      DAT_INTMEM_2b = 1;
      DAT_INTMEM_2c = 0;
      DAT_INTMEM_2d = 0;
      DAT_INTMEM_2e = 1;
      uVar7 = 0x4f;
      FUN_CODE_1aa9(0x4f08,bVar5);
      uINTMEMd5 = 0;
      uINTMEMd6 = 0;
      uINTMEMd7 = 0x3f;
      DAT_INTMEM_2f = 0xd5;
      DAT_INTMEM_30 = 0xf;
      DAT_INTMEM_31 = 0;
      DAT_INTMEM_32 = 0x40;
      DAT_INTMEM_33 = 0x10;
      DAT_INTMEM_34 = 0;
      DAT_INTMEM_35 = 0x40;
      DAT_INTMEM_2a = 0xc0;
      DAT_INTMEM_2b = 1;
      DAT_INTMEM_2c = 0;
      DAT_INTMEM_2d = 0;
      DAT_INTMEM_2e = 3;
      FUN_CODE_1aa9(CONCAT11(uVar7,8));
      BANK0_R2 = bVar4;
    }
  }
  BANK1_R6 = '\0';
  uEXTMEM4fe6 = 0;
  DAT_EXTMEM_cc00 = 1;
  DAT_EXTMEM_c200 = DAT_EXTMEM_c200 & 0xf1 | 3;
  if ((bCODE0048 >> 1 & 1) == 1) {
    param_3 = bEXTMEM4feb != 1;
    bVar1 = DAT_EXTMEM_4fbf != 1;
    if (bVar1 && (bool)param_3) {
      DAT_INTMEM_7a = BANK1_R1;
      DAT_INTMEM_7b = BANK1_R2;
      DAT_INTMEM_7c = BANK2_R4;
      DAT_INTMEM_7d = BANK2_R7;
      uVar9 = 0x4f03;
      FUN_CODE_11f9(0x4f03);
    }
    else {
      DAT_EXTMEM_4fbf = 0;
      if ((BANK2_R5 != '\0') || (uVar9 = 0x4fe4, param_3 = DAT_EXTMEM_4fe4, DAT_EXTMEM_4fe4 != 0)) {
        do {
          bVar4 = DAT_EXTMEM_ca40;
          if ((DAT_EXTMEM_ca40 >> 1 & 1) == 1) break;
          bVar4 = bEXTMEMcb40;
        } while ((bEXTMEMcb40 & 6) != 0);
        uEXTMEMca0c = 1;
        DAT_INTMEM_30 = 0xf;
        DAT_INTMEM_31 = 0;
        DAT_INTMEM_32 = 0x40;
        DAT_INTMEM_33 = 0x10;
        DAT_INTMEM_34 = 0;
        DAT_INTMEM_35 = 0x40;
        DAT_INTMEM_2a = 2;
        DAT_INTMEM_2b = 1;
        DAT_INTMEM_2c = 0;
        DAT_INTMEM_2d = 0;
        DAT_INTMEM_2e = 1;
        DAT_INTMEM_2f = 0x8f;
        FUN_CODE_1aa9(0xca08,bVar4,bVar1);
        uEXTMEMce51 = 0x10;
        FUN_CODE_11d7();
        BANK0_R3 = BANK0_R3 & 0xfe;
        BANK2_R5 = '\0';
        uVar9 = 0x4fe4;
        DAT_EXTMEM_4fe4 = 0;
        param_3 = DAT_EXTMEM_d76d;
      }
    }
  }
  else if (param_2 == '\0') {
    if ((BANK2_R5 != '\0') || (uVar9 = 0x4fe4, param_3 = DAT_EXTMEM_4fe4, DAT_EXTMEM_4fe4 != 0)) {
      do {
        bVar4 = DAT_EXTMEM_ca40;
        if ((DAT_EXTMEM_ca40 >> 1 & 1) == 1) break;
        bVar4 = bEXTMEMcb40;
      } while ((bEXTMEMcb40 & 6) != 0);
      uEXTMEMca0c = 1;
      DAT_INTMEM_30 = 0xf;
      DAT_INTMEM_31 = 0;
      DAT_INTMEM_32 = 0x40;
      DAT_INTMEM_33 = 0x10;
      DAT_INTMEM_34 = 0;
      DAT_INTMEM_35 = 0x40;
      DAT_INTMEM_2a = 2;
      DAT_INTMEM_2b = 1;
      DAT_INTMEM_2c = 0;
      DAT_INTMEM_2d = 0;
      DAT_INTMEM_2e = 1;
      DAT_INTMEM_2f = 0x8f;
      FUN_CODE_1aa9(0xca08,bVar4);
      uEXTMEMce51 = 0x10;
      FUN_CODE_11d7();
      BANK0_R3 = BANK0_R3 & 0xfe;
      BANK2_R5 = '\0';
      uVar9 = 0x4fe4;
      DAT_EXTMEM_4fe4 = 0;
      param_3 = DAT_EXTMEM_d76d;
    }
  }
  else {
    while (bEXTMEM4fb1 != 0) {
      DAT_INTMEM_7a = 0x20;
      DAT_INTMEM_7b = 0x28;
      FUN_CODE_0270(0x4f00);
    }
    DAT_INTMEM_7a = BANK1_R1;
    DAT_INTMEM_7b = BANK1_R2;
    DAT_INTMEM_7c = BANK2_R4;
    DAT_INTMEM_7d = BANK2_R7;
    uVar9 = 0x4f03;
    param_3 = bEXTMEM4fb1;
    FUN_CODE_11f9(0x4f03);
  }
  param_2 = '\0';
LAB_CODE_3479:
  do {
    bVar4 = BANK0_R2;
    if (BANK2_R6 == '\0') {
      DAT_INTMEM_7a = 0x20;
      DAT_INTMEM_7b = 6;
      FUN_CODE_0270(uVar9 & 0xff00);
      uEXTMEMcc2d = 0xfe;
      while( true ) {
        BANK3_R7 = 0xec;
        DAT_INTMEM_20 = 0x4f;
        DAT_INTMEM_21 = 0;
        DAT_INTMEM_22 = 0x72;
        DAT_INTMEM_23 = 0;
        DAT_INTMEM_24 = 0x40;
        DAT_INTMEM_25 = 0x73;
        DAT_INTMEM_26 = 0;
        DAT_INTMEM_27 = 0x40;
        BANK3_R6 = 0;
        param_3 = 0x26;
        BANK0_R2 = bVar4;
        FUN_CODE_17f4();
        uVar9 = 0x4fea;
        DAT_EXTMEM_4fea = param_3;
        if (param_3 == 0) break;
        uVar9 = 0x4fea;
        BANK0_R2 = bVar4;
        if (param_3 == 1) goto LAB_CODE_2a74;
        if (BANK1_R5 != '\0') goto LAB_CODE_3b47;
        if (BANK1_R6 != '\0') goto LAB_CODE_3be5;
      }
      BANK0_R2 = bVar4;
      if (BANK1_R5 != '\0') {
LAB_CODE_3b47:
        bVar4 = BANK0_R2;
        DAT_INTMEM_7a = 0x20;
        DAT_INTMEM_7b = 0xb;
        uVar9 = uVar9 & 0xff00;
        FUN_CODE_0270(uVar9);
        uVar7 = (undefined1)(uVar9 >> 8);
        BANK1_R5 = '\0';
        if ((((BANK3_R0 == '\0') && (uVar7 = 0x4f, param_3 = bEXTMEM4feb, bEXTMEM4feb == 0)) &&
            (uVar7 = 0xcc, cEXTMEMcc8d == '\0')) && (param_2 != '\0')) {
          uVar9 = 0xcc02;
          BANK0_R2 = bVar4;
          FUN_CODE_1f0b();
          param_3 = (byte)uVar9;
          BANK0_R2 = bVar4;
          if (param_3 == 1) {
LAB_CODE_2a74:
            do {
              if ((bEXTMEMd66f >> 4 & 1) != 0) {
                uEXTMEMca10 = 3;
                uEXTMEMca15 = 0x20;
                uEXTMEMca14 = 7;
              }
              if ((bCODE0048 >> 4 & 1) != 0) {
                uEXTMEMd7fc = 1;
                uEXTMEMd7fa = 1;
                uEXTMEMd7f8 = 1;
                uEXTMEMd7f6 = 1;
              }
              do {
                BANK0_R2 = BANK0_R2 & 0xe;
              } while (bEXTMEMc800 == 0xe);
              BANK1_R0 = DAT_EXTMEM_c801 & 0x80;
              if (BANK1_R0 == 0) {
                BANK0_R2 = BANK0_R2 | 0x9b;
                uEXTMEMd21e = 0xff;
              }
              else {
                bEXTMEMcc8e = 0;
              }
              bVar4 = BANK0_R2;
              DAT_EXTMEM_4fe9 = 0;
              BANK1_R1 = 0;
              BANK1_R2 = 0;
              BANK2_R4 = 0;
              BANK1_R5 = '\0';
              BANK1_R6 = '\0';
              BANK2_R3 = '\0';
              BANK2_R7 = 0;
              DAT_EXTMEM_4fe4 = 0;
              BANK2_R5 = '\0';
              BANK2_R6 = '\0';
              BANK3_R0 = '\0';
              bEXTMEM4feb = 0;
              param_2 = '\0';
              uEXTMEM4fe5 = 0;
              uEXTMEM4fe6 = 0;
              DAT_EXTMEM_4fe7 = '\0';
              DAT_EXTMEM_4fae = 0;
              uEXTMEMd766 = 8;
              uEXTMEMd600 = 0;
              uEXTMEMd680 = 0;
              uEXTMEMd700 = 0;
              uEXTMEMd780 = 0;
              if (cCODE004b < '\0') {
                uEXTMEMd677 = 0;
              }
              else {
                uEXTMEMd677 = 0xf;
              }
              if (BANK1_R0 == 0) {
                BANK0_R3 = BANK0_R3 & 0xfc | 4;
                uEXTMEMd254 = 0xff;
                uEXTMEMd255 = 0xff;
              }
              else if ((bEXTMEMc84b >> 3 & 1) == 1) {
                BANK0_R3 = BANK0_R3 | 4;
              }
              else {
                BANK0_R3 = BANK0_R3 & 0xfa;
              }
              uEXTMEMcc92 = 8;
              BANK3_R1 = bEXTMEMcc8e;
              uEXTMEMcc96 = 1;
              BANK0_R3 = BANK0_R3 & 0xfe;
              FUN_CODE_1da2(5);
              DAT_EXTMEM_4fea = DAT_EXTMEM_c801 & 0x3f;
              if (DAT_EXTMEM_4fea == 8) {
                for (bEXTMEM4ff0 = 0; bEXTMEM4ff0 < 2; bEXTMEM4ff0 = bEXTMEM4ff0 + 1) {
                }
                BANK0_R3 = BANK0_R3 & 0xfd;
                DAT_INTMEM_7a = 0x10;
                DAT_INTMEM_7b = 0x1c;
                BANK0_R2 = bVar4;
                FUN_CODE_0270(0xd600);
                do {
                } while ((bEXTMEMd67c >> 2 & 1) == 0);
              }
              while ((((DAT_EXTMEM_c848 >> 2 & 1) != 0 &&
                      (uVar9 = 0xcc93, bVar5 = DAT_EXTMEM_c848, DAT_EXTMEM_cc93 == '\0')) ||
                     (uVar9 = 0xc808, bVar5 = DAT_EXTMEM_c808, (DAT_EXTMEM_c808 & 1) != 0))) {
                DAT_INTMEM_7a = 0x20;
                DAT_INTMEM_7b = 0x20;
                BANK0_R2 = bVar4;
                FUN_CODE_0270(uVar9 & 0xff00,bVar5);
              }
              do {
              } while ((DAT_EXTMEM_cc07 & 1) == 1);
              do {
              } while ((bEXTMEMc82f & 1) == 0);
              BANK0_R3 = BANK0_R3 | 3;
              if ((bEXTMEMc800 >> 4 & 1) != 0) {
                BANK0_R2 = bVar4;
                FUN_CODE_1da2(0x1c2,bEXTMEMc800);
              }
              if ((bEXTMEMc800 & 1) == 1) {
                if (cEXTMEMd66e == '\x01') {
                  bEXTMEMc890 = 1;
                  uEXTMEMc891 = 0xc;
                  uEXTMEMd449 = 2;
                  uEXTMEMd766 = 0;
                  DAT_EXTMEM_d672 = 0;
                  BANK0_R3 = BANK0_R3 & 3;
                }
                else if (cEXTMEMd66e == '\x02') {
                  DAT_EXTMEM_d672 = 0xf;
                  BANK0_R3 = BANK0_R3 & 2;
                }
                else {
                  DAT_EXTMEM_d672 = 0xf;
                  BANK0_R3 = BANK0_R3 & 3;
                }
                BANK0_R2 = bVar4;
                for (bEXTMEM4ff0 = 0; bEXTMEM4ff0 < 4; bEXTMEM4ff0 = bEXTMEM4ff0 + 1) {
                  DAT_INTMEM_7b = bEXTMEM4ff0;
                  DAT_INTMEM_7a = 0;
                  FUN_CODE_0e94(0x4f00);
                }
                uEXTMEMca5a = 0;
                BANK0_R3 = BANK0_R3 | 1;
                uEXTMEMd767 = 0x3f;
                BANK1_R1 = 4;
                do {
                  if (bEXTMEMc890 != 0) {
                    DAT_INTMEM_7a = 0x20;
                    DAT_INTMEM_7b = 4;
                    FUN_CODE_0270(0xc800);
                    do {
                    } while( true );
                  }
                  DAT_INTMEM_7a = 1;
                  DAT_INTMEM_7b = 2;
                  FUN_CODE_0270(0xc800);
                  uEXTMEMd446 = 0xc4;
                  uEXTMEMd447 = 0;
                  uEXTMEMd453 = 0x3a;
                  uEXTMEMd47d = 0x3a;
                  uEXTMEMd454 = 0x54;
                  uEXTMEMd47e = 0x54;
                  FUN_CODE_0478();
                  while (FUN_CODE_0aba(), (DAT_EXTMEM_c802 & 1) == 0) {
                    if ((DAT_EXTMEM_cc07 & 1) != 0) {
                      FUN_CODE_0e61(DAT_EXTMEM_cc07);
                      goto LAB_CODE_2a74;
                    }
                  }
                  FUN_CODE_0f3d(DAT_EXTMEM_c802);
                  FUN_CODE_1010();
                  FUN_CODE_1da2(0xf);
                  BANK0_R3 = BANK0_R3 & 0xdd;
                  DAT_EXTMEM_cc00 = 0;
                  FUN_CODE_1043();
                  uEXTMEMce51 = 0;
                  DAT_INTMEM_7a = 1;
                  DAT_INTMEM_7b = 3;
                  bVar4 = FUN_CODE_0270(0xce00);
                  while( true ) {
                    FUN_CODE_0aba(bVar4);
                    while (DAT_EXTMEM_cc93 == '\x01') {
                      DAT_INTMEM_7a = 0x20;
                      DAT_INTMEM_7b = 0x21;
                      FUN_CODE_0270(0xcc00);
                    }
                    if (((((DAT_EXTMEM_c802 & 1) != 1) && ((bEXTMEMc890 & 1) == 0)) ||
                        (-1 < (char)DAT_EXTMEM_d77f)) && ((bEXTMEMc890 & 1) != 1)) break;
                    DAT_EXTMEM_4fea = DAT_EXTMEM_cc07;
                    if ((DAT_EXTMEM_cc07 & 1) != 0) {
                      FUN_CODE_0e61(DAT_EXTMEM_cc07);
                      goto LAB_CODE_2a74;
                    }
                    bVar4 = DAT_EXTMEM_cc07;
                    if ((DAT_EXTMEM_cc07 >> 2 & 1) != 0) {
                      bINTMEM7f = BANK0_R3;
                      bINTMEM80 = BANK0_R3;
                      bVar4 = bEXTMEMcc37;
                    }
                  }
                  FUN_CODE_0e61(bEXTMEMc890);
                } while( true );
              }
              uEXTMEMca5a = 0;
              DAT_INTMEM_7a = 1;
              DAT_INTMEM_7b = 5;
              BANK0_R2 = bVar4;
              FUN_CODE_0270(0xca00,bEXTMEMc800);
              cEXTMEM4fef = '\0';
              uVar7 = 200;
              BANK0_R2 = bVar4;
              if (((DAT_EXTMEM_c848 >> 4 & 1) != 1) ||
                 ((bVar5 = DAT_EXTMEM_c848, BANK1_R0 == 0 &&
                  (uVar7 = 0xd2, bVar5 = DAT_EXTMEM_d252, (DAT_EXTMEM_d252 >> 5 & 1) != 0))))
              goto LAB_CODE_33b1;
              DAT_INTMEM_ee = 1;
              DAT_INTMEM_2f = 0xee;
              DAT_INTMEM_30 = 0xf;
              DAT_INTMEM_31 = 0;
              DAT_INTMEM_32 = 0x40;
              DAT_INTMEM_33 = 0x10;
              DAT_INTMEM_34 = 0;
              DAT_INTMEM_35 = 0x40;
              DAT_INTMEM_2a = 0;
              DAT_INTMEM_2b = 6;
              DAT_INTMEM_2c = 0;
              DAT_INTMEM_2d = 0;
              DAT_INTMEM_2e = 1;
              uVar8 = CONCAT11(uVar7,8);
              FUN_CODE_1aa9(uVar8,bVar5);
              uVar7 = (undefined1)((ushort)uVar8 >> 8);
              if (BANK1_R0 != 0) goto LAB_CODE_2f76;
              uEXTMEMcc0c = 199;
              uEXTMEMcc0b = 0;
              do {
                if (((cEXTMEMcc29 == '\0') && (99 < bEXTMEMcc0a)) || ((bEXTMEMcc90 & 1) == 1)) {
                  uVar7 = 0xcc;
                  uEXTMEMcc0c = 99;
                  goto LAB_CODE_2f76;
                }
              } while ((DAT_EXTMEM_cc07 & 1) == 0);
              DAT_EXTMEM_cc00 = 1;
              BANK0_R2 = bVar4;
              FUN_CODE_11d7(DAT_EXTMEM_cc07);
              BANK0_R3 = BANK0_R3 & 0xfe;
              DAT_EXTMEM_c200 = DAT_EXTMEM_c200 & 0xf1 | 3;
              DAT_EXTMEM_d67e = 0;
              DAT_EXTMEM_d67f = 0;
            } while( true );
          }
          if (BANK1_R5 != '\0') goto LAB_CODE_3b47;
          if (BANK1_R6 != '\0') goto LAB_CODE_3be5;
          uVar9 = 0;
          bVar5 = bCODE0048;
          if ((bCODE0048 >> 2 & 1) != 0) {
            uVar9 = 0;
            if ((bCODE0048 >> 5 & 1) != 0) {
              DAT_INTMEM_7d = DAT_EXTMEM_0120;
              DAT_INTMEM_7a = BANK1_R1;
              DAT_INTMEM_7b = BANK1_R2;
              DAT_INTMEM_7c = BANK2_R4;
              uVar9 = 0x10c;
              FUN_CODE_11f9(0x10c);
            }
            BANK0_R2 = bVar4;
            FUN_CODE_0326();
          }
          uVar7 = (undefined1)(uVar9 >> 8);
          BANK0_R2 = bVar4;
          BANK0_R3 = DAT_INTMEM_81 & BANK3_R4;
          if (((bVar5 != BANK3_R4) || (BANK0_R3 = DAT_INTMEM_82 & BANK3_R5, bVar5 != BANK3_R5)) ||
             (BANK2_R3 == '\0')) goto LAB_CODE_3be5;
          param_3 = BANK2_R7 & 0xc0;
          if (param_3 == 0xc0) {
            DAT_INTMEM_7a = BANK1_R1;
            DAT_INTMEM_7b = BANK1_R2;
            DAT_INTMEM_7c = BANK2_R4;
            DAT_INTMEM_7d = BANK2_R7;
            uVar9 = CONCAT11(uVar7,4);
            FUN_CODE_11f9(uVar9);
            BANK0_R2 = bVar4;
            goto LAB_CODE_3479;
          }
        }
        if ((BANK1_R0 == 0) &&
           (uVar7 = 0xd2, param_3 = DAT_EXTMEM_d25c, (DAT_EXTMEM_d25c & 0xf) == 0)) {
          uVar9 = 0xcc21;
          uEXTMEMcc21 = 1;
          BANK0_R2 = bVar4;
        }
        else {
          DAT_INTMEM_7a = BANK1_R1;
          DAT_INTMEM_7b = BANK1_R2;
          DAT_INTMEM_7c = BANK2_R4;
          DAT_INTMEM_7d = 0;
          uVar9 = CONCAT11(uVar7,0xd);
          BANK0_R2 = bVar4;
          FUN_CODE_11f9(uVar9);
          BANK0_R2 = bVar4;
        }
        goto LAB_CODE_3479;
      }
      if (BANK1_R6 != '\0') goto LAB_CODE_3be5;
    }
    bVar2 = BANK0_R4;
    BANK2_R6 = '\0';
    DAT_INTMEM_77 = param_3 & 7;
    bVar5 = bINTMEM7e & 0x60;
    DAT_INTMEM_76 = bINTMEM80;
    DAT_INTMEM_7a = 0x20;
    DAT_INTMEM_7b = 0x19;
    uVar9 = uVar9 & 0xff00;
    BANK0_R2 = bVar4;
    BANK0_R3 = bVar5;
    FUN_CODE_0270(uVar9,param_3 & 0x18);
    BANK0_R5 = bINTMEM7f & 0xf;
    BANK0_R2 = bVar4;
    BANK0_R3 = bVar5;
    BANK0_R4 = bVar2;
    if (BANK0_R5 < 0x10) {
                    /* WARNING: Could not recover jumptable at 0x3531. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ushort)(bVar3 * '\x03') + 0x3532))();
      return;
    }
  } while( true );
LAB_CODE_2f76:
  DAT_INTMEM_30 = 0xf;
  DAT_INTMEM_31 = 0;
  DAT_INTMEM_32 = 0x40;
  DAT_INTMEM_33 = 0x10;
  DAT_INTMEM_34 = 0;
  DAT_INTMEM_35 = 0x40;
  DAT_INTMEM_2a = 0;
  DAT_INTMEM_2b = 0;
  DAT_INTMEM_2c = 0;
  DAT_INTMEM_2d = 0;
  DAT_INTMEM_2e = 0xc;
  DAT_INTMEM_2f = 0;
  BANK0_R2 = bVar4;
  FUN_CODE_1aa9(CONCAT11(uVar7,9));
  BANK0_R2 = bVar4;
  bVar4 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
  cEXTMEM4fef = 0x11 < bVar4;
  bVar3 = BANK2_R2;
  bVar4 = FUN_CODE_3ed5(CONCAT11(BANK2_R1 - (((0xfd < BANK2_R0) << 7) >> 7),BANK2_R0 + 2),BANK2_R2);
  DAT_EXTMEM_4fae = bVar4 & 0x40;
  if (BANK1_R0 == 0) {
    uEXTMEMd257 = 0x11;
    BANK0_R3 = 0;
    cVar6 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
    if ((cVar6 != '\x10') && (cVar6 != '\x11')) {
      if (cVar6 == '\x12') {
        BANK0_R3 = BANK0_R3 | 0x10;
      }
      else {
        BANK0_R3 = BANK0_R3 | 0x10;
      }
    }
    if ((bEXTMEMc80a & 0xf) == 0) {
      cVar6 = FUN_CODE_3ed5(CONCAT11(BANK2_R1 - (((0xfe < BANK2_R0) << 7) >> 7),BANK2_R0 + 1),
                            BANK2_R2);
      if (cVar6 != '\x06') {
        if (cVar6 == '\n') {
          BANK0_R3 = BANK0_R3 | 1;
        }
        else if (cVar6 == '\x14') {
          BANK0_R3 = BANK0_R3 | 2;
        }
        else {
          BANK0_R3 = BANK0_R3 | 2;
        }
      }
    }
    else {
      BANK0_R3 = BANK0_R3 & 0xf;
      if (bEXTMEMc80a != 1) {
        if (bEXTMEMc80a == 2) {
          BANK0_R3 = BANK0_R3 | 1;
        }
        else if (bEXTMEMc80a == 3) {
          BANK0_R3 = BANK0_R3 | 2;
        }
        else {
          BANK0_R3 = BANK0_R3 | 2;
        }
      }
    }
    if ((bEXTMEMc80a & 0xf0) == 0) {
      cVar6 = FUN_CODE_3ed5(CONCAT11(BANK2_R1 - (((0xfd < BANK2_R0) << 7) >> 7),BANK2_R0 + 2),
                            BANK2_R2);
      BANK0_R3 = BANK0_R3 & 0x1f;
      if (cVar6 != '\x01') {
        if (cVar6 == '\x02') {
          BANK0_R3 = BANK0_R3 | 0x10;
        }
        else if (cVar6 == '\x04') {
          BANK0_R3 = BANK0_R3 | 0x20;
        }
        else {
          BANK0_R3 = BANK0_R3 | 0x20;
        }
      }
    }
    else {
      BANK0_R3 = BANK0_R3 & 0xf0;
      if (bEXTMEMc80a != 0x10) {
        if (bEXTMEMc80a == 0x20) {
          BANK0_R3 = BANK0_R3 | 0x10;
        }
        else if (bEXTMEMc80a == 0x40) {
          BANK0_R3 = BANK0_R3 | 0x20;
        }
        else {
          BANK0_R3 = BANK0_R3 | 0x20;
        }
      }
    }
    bVar3 = BANK2_R1 - (((0xfd < BANK2_R0) << 7) >> 7);
    bVar4 = FUN_CODE_3ed5(CONCAT11(bVar3,BANK2_R0 + 2),BANK2_R2);
    BANK0_R3 = BANK0_R3 & 0xfe | bVar4 & 0xc0;
  }
  bVar4 = BANK0_R2;
  if ((bCODE0048 >> 2 & 1) != 0) {
    DAT_INTMEM_30 = 0xf;
    DAT_INTMEM_31 = 0;
    DAT_INTMEM_32 = 0x40;
    DAT_INTMEM_33 = 0x10;
    DAT_INTMEM_34 = 0;
    DAT_INTMEM_35 = 0x40;
    DAT_INTMEM_2a = 0;
    DAT_INTMEM_2b = 2;
    DAT_INTMEM_2c = 0;
    DAT_INTMEM_2d = 0;
    DAT_INTMEM_2e = 1;
    DAT_INTMEM_2f = 0;
    FUN_CODE_1aa9(9,bCODE0048);
    bVar3 = BANK2_R2;
    bVar5 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
    DAT_EXTMEM_0120 = bVar5 & 0x1f;
    FUN_CODE_0326();
  }
  BANK0_R2 = bVar4;
  if (cEXTMEM4fef != '\0') {
    DAT_INTMEM_30 = 0xf;
    DAT_INTMEM_31 = 0;
    DAT_INTMEM_32 = 0x40;
    DAT_INTMEM_33 = 0x10;
    DAT_INTMEM_34 = 0;
    DAT_INTMEM_35 = 0x40;
    DAT_INTMEM_2a = 0xe;
    DAT_INTMEM_2b = 0;
    DAT_INTMEM_2c = 0;
    DAT_INTMEM_2d = 0;
    DAT_INTMEM_2e = 1;
    DAT_INTMEM_2f = 0;
    FUN_CODE_1aa9(0x4f09,cEXTMEM4fef);
    bVar3 = BANK2_R2;
    if ((bEXTMEMc809 & 1) == 1) {
      BANK0_R2 = bVar4;
      cVar6 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
      BANK0_R3 = BANK0_R3 & 0x7f;
      if (BANK0_R3 < 5) {
                    /* WARNING: Could not recover jumptable at 0x32a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ushort)(byte)(cVar6 * '\x03') + 0x32aa))();
        return;
      }
    }
    else {
      BANK0_R2 = bVar4;
      cVar6 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
      BANK0_R3 = BANK0_R3 & 0x7f;
      if (BANK0_R3 < 5) {
                    /* WARNING: Could not recover jumptable at 0x3333. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ushort)(byte)(cVar6 * '\x03') + 0x3334))();
        return;
      }
    }
  }
LAB_CODE_33b1:
  bVar4 = BANK0_R2;
  uEXTMEM4fd9 = 1;
  DAT_EXTMEM_4fd8 = 4;
  BANK0_R3 = BANK0_R3 & 0xfe;
  uVar9 = 0x4fef;
  if (cEXTMEM4fef == '\0') {
    param_3 = 0;
  }
  else {
    DAT_INTMEM_30 = 0xf;
    DAT_INTMEM_31 = 0;
    DAT_INTMEM_32 = 0x40;
    DAT_INTMEM_33 = 0x10;
    DAT_INTMEM_34 = 0;
    DAT_INTMEM_35 = 0x40;
    DAT_INTMEM_2a = 0x21;
    DAT_INTMEM_2b = 0;
    DAT_INTMEM_2c = 0;
    DAT_INTMEM_2d = 0;
    DAT_INTMEM_2e = 1;
    DAT_INTMEM_2f = 0;
    FUN_CODE_1aa9(0x4f09);
    uVar9 = CONCAT11(BANK2_R1,BANK2_R0);
    bVar3 = BANK2_R2;
    BANK0_R2 = bVar4;
    param_3 = FUN_CODE_3ed5(uVar9,BANK2_R2);
    bVar4 = BANK0_R2;
    BANK0_R2 = bVar4;
    if ((param_3 & 1) != 0) {
      DAT_EXTMEM_4fe7 = '\0';
      uINTMEMd4 = 0;
      DAT_INTMEM_2f = 0xd4;
      DAT_INTMEM_30 = 0xf;
      DAT_INTMEM_31 = 0;
      DAT_INTMEM_32 = 0x40;
      DAT_INTMEM_33 = 0x10;
      DAT_INTMEM_34 = 0;
      DAT_INTMEM_35 = 0x40;
      DAT_INTMEM_2a = 0x11;
      DAT_INTMEM_2b = 1;
      DAT_INTMEM_2c = 0;
      DAT_INTMEM_2d = 0;
      DAT_INTMEM_2e = 1;
      uVar7 = 0x4f;
      FUN_CODE_1aa9(0x4f08);
      uINTMEMd5 = 0;
      uINTMEMd6 = 0;
      uINTMEMd7 = 0x3f;
      DAT_INTMEM_2f = 0xd5;
      DAT_INTMEM_30 = 0xf;
      DAT_INTMEM_31 = 0;
      DAT_INTMEM_32 = 0x40;
      DAT_INTMEM_33 = 0x10;
      DAT_INTMEM_34 = 0;
      DAT_INTMEM_35 = 0x40;
      DAT_INTMEM_2a = 0xc0;
      DAT_INTMEM_2b = 1;
      DAT_INTMEM_2c = 0;
      DAT_INTMEM_2d = 0;
      DAT_INTMEM_2e = 3;
      uVar9 = CONCAT11(uVar7,8);
      FUN_CODE_1aa9(uVar9);
      BANK0_R2 = bVar4;
    }
  }
  if (BANK1_R5 == '\0') goto LAB_CODE_3479;
  goto LAB_CODE_3b47;
}



/* =========================================================
 * CODE:3538  thunk_FUN_CODE_3958  size=3
 * ========================================================= */

void thunk_FUN_CODE_3958(ushort param_1,char param_2,byte param_3,char param_4)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  undefined1 uVar5;
  ushort uVar6;
  undefined2 uVar7;
  
LAB_CODE_3479:
  do {
    while (bVar2 = BANK0_R2, BANK2_R6 != '\0') {
LAB_CODE_34eb:
      uVar5 = BANK0_R4;
      BANK2_R6 = '\0';
      DAT_INTMEM_77 = param_3 & 7;
      bVar4 = bINTMEM7e & 0x60;
      DAT_INTMEM_76 = bINTMEM80;
      DAT_INTMEM_7a = 0x20;
      DAT_INTMEM_7b = 0x19;
      param_1 = param_1 & 0xff00;
      BANK0_R2 = bVar2;
      BANK0_R3 = bVar4;
      FUN_CODE_0270(param_1,param_3 & 0x18);
      BANK0_R5 = bINTMEM7f & 0xf;
      BANK0_R2 = bVar2;
      BANK0_R3 = bVar4;
      BANK0_R4 = uVar5;
      if (BANK0_R5 < 0x10) {
                    /* WARNING: Could not recover jumptable at 0x3531. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ushort)(byte)(param_4 * '\x03') + 0x3532))();
        return;
      }
    }
    DAT_INTMEM_7a = 0x20;
    DAT_INTMEM_7b = 6;
    FUN_CODE_0270(0);
    uEXTMEMcc2d = 0xfe;
    do {
      BANK3_R7 = 0xec;
      DAT_INTMEM_20 = 0x4f;
      DAT_INTMEM_21 = 0;
      DAT_INTMEM_22 = 0x72;
      DAT_INTMEM_23 = 0;
      DAT_INTMEM_24 = 0x40;
      DAT_INTMEM_25 = 0x73;
      DAT_INTMEM_26 = 0;
      DAT_INTMEM_27 = 0x40;
      BANK3_R6 = 0;
      param_3 = 0x26;
      BANK0_R2 = bVar2;
      FUN_CODE_17f4();
      param_1 = 0x4fea;
      DAT_EXTMEM_4fea = param_3;
      if (param_3 == 0) {
        BANK0_R2 = bVar2;
        if (BANK1_R5 != '\0') goto LAB_CODE_3b47;
        if (BANK1_R6 == '\0') goto LAB_CODE_34eb;
        break;
      }
      param_1 = 0x4fea;
      BANK0_R2 = bVar2;
      if (param_3 == 1) goto LAB_CODE_2a74;
      if (BANK1_R5 != '\0') goto LAB_CODE_3b47;
    } while (BANK1_R6 == '\0');
LAB_CODE_3be5:
    bVar2 = BANK0_R2;
    DAT_INTMEM_7a = 1;
    DAT_INTMEM_7b = 0xc;
    FUN_CODE_0270(param_1 & 0xff00);
    BANK0_R3 = BANK0_R3 & 0xfc;
    uVar5 = 0x4f;
    bVar4 = DAT_EXTMEM_4fbf;
    if ((DAT_EXTMEM_4fbf == 1) && (uVar5 = 0, bVar4 = bCODE0049, (bCODE0049 >> 1 & 1) != 0)) {
      BANK0_R3 = BANK0_R3 | 1;
      DAT_EXTMEM_d67e = 0;
      uVar5 = 0xd6;
      DAT_EXTMEM_d67f = 0;
      bVar4 = DAT_EXTMEM_d77f;
    }
    BANK0_R2 = bVar2;
    if (BANK1_R6 != '\0') {
      DAT_INTMEM_30 = 0xf;
      DAT_INTMEM_31 = 0;
      DAT_INTMEM_32 = 0x40;
      DAT_INTMEM_33 = 0x10;
      DAT_INTMEM_34 = 0;
      DAT_INTMEM_35 = 0x40;
      DAT_INTMEM_2a = 0x21;
      DAT_INTMEM_2b = 0;
      DAT_INTMEM_2c = 0;
      DAT_INTMEM_2d = 0;
      DAT_INTMEM_2e = 1;
      DAT_INTMEM_2f = 0;
      FUN_CODE_1aa9(CONCAT11(uVar5,9),bVar4);
      param_4 = BANK2_R2;
      BANK0_R2 = bVar2;
      bVar4 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
      bVar2 = BANK0_R2;
      BANK0_R2 = bVar2;
      if ((bVar4 & 1) != 0) {
        DAT_EXTMEM_4fe7 = 0;
        uINTMEMd4 = 0;
        DAT_INTMEM_2f = 0xd4;
        DAT_INTMEM_30 = 0xf;
        DAT_INTMEM_31 = 0;
        DAT_INTMEM_32 = 0x40;
        DAT_INTMEM_33 = 0x10;
        DAT_INTMEM_34 = 0;
        DAT_INTMEM_35 = 0x40;
        DAT_INTMEM_2a = 0x11;
        DAT_INTMEM_2b = 1;
        DAT_INTMEM_2c = 0;
        DAT_INTMEM_2d = 0;
        DAT_INTMEM_2e = 1;
        uVar5 = 0x4f;
        FUN_CODE_1aa9(0x4f08,bVar4);
        uINTMEMd5 = 0;
        uINTMEMd6 = 0;
        uINTMEMd7 = 0x3f;
        DAT_INTMEM_2f = 0xd5;
        DAT_INTMEM_30 = 0xf;
        DAT_INTMEM_31 = 0;
        DAT_INTMEM_32 = 0x40;
        DAT_INTMEM_33 = 0x10;
        DAT_INTMEM_34 = 0;
        DAT_INTMEM_35 = 0x40;
        DAT_INTMEM_2a = 0xc0;
        DAT_INTMEM_2b = 1;
        DAT_INTMEM_2c = 0;
        DAT_INTMEM_2d = 0;
        DAT_INTMEM_2e = 3;
        FUN_CODE_1aa9(CONCAT11(uVar5,8));
        BANK0_R2 = bVar2;
      }
    }
    BANK1_R6 = '\0';
    uEXTMEM4fe6 = 0;
    DAT_EXTMEM_cc00 = 1;
    DAT_EXTMEM_c200 = DAT_EXTMEM_c200 & 0xf1 | 3;
    if ((bCODE0048 >> 1 & 1) == 1) {
      param_3 = bEXTMEM4feb != 1;
      bVar1 = DAT_EXTMEM_4fbf != 1;
      if (bVar1 && (bool)param_3) {
        DAT_INTMEM_7a = BANK1_R1;
        DAT_INTMEM_7b = BANK1_R2;
        DAT_INTMEM_7c = BANK2_R4;
        DAT_INTMEM_7d = BANK2_R7;
        param_1 = 0x4f03;
        FUN_CODE_11f9(0x4f03);
      }
      else {
        DAT_EXTMEM_4fbf = 0;
        if ((BANK2_R5 != '\0') ||
           (param_1 = 0x4fe4, param_3 = DAT_EXTMEM_4fe4, DAT_EXTMEM_4fe4 != 0)) {
          do {
            bVar2 = DAT_EXTMEM_ca40;
            if ((DAT_EXTMEM_ca40 >> 1 & 1) == 1) break;
            bVar2 = bEXTMEMcb40;
          } while ((bEXTMEMcb40 & 6) != 0);
          uEXTMEMca0c = 1;
          DAT_INTMEM_30 = 0xf;
          DAT_INTMEM_31 = 0;
          DAT_INTMEM_32 = 0x40;
          DAT_INTMEM_33 = 0x10;
          DAT_INTMEM_34 = 0;
          DAT_INTMEM_35 = 0x40;
          DAT_INTMEM_2a = 2;
          DAT_INTMEM_2b = 1;
          DAT_INTMEM_2c = 0;
          DAT_INTMEM_2d = 0;
          DAT_INTMEM_2e = 1;
          DAT_INTMEM_2f = 0x8f;
          FUN_CODE_1aa9(0xca08,bVar2,bVar1);
          uEXTMEMce51 = 0x10;
          FUN_CODE_11d7();
          BANK0_R3 = BANK0_R3 & 0xfe;
          BANK2_R5 = '\0';
          param_1 = 0x4fe4;
          DAT_EXTMEM_4fe4 = 0;
          param_3 = DAT_EXTMEM_d76d;
        }
      }
    }
    else if (param_2 == '\0') {
      if ((BANK2_R5 != '\0') || (param_1 = 0x4fe4, param_3 = DAT_EXTMEM_4fe4, DAT_EXTMEM_4fe4 != 0))
      {
        do {
          bVar2 = DAT_EXTMEM_ca40;
          if ((DAT_EXTMEM_ca40 >> 1 & 1) == 1) break;
          bVar2 = bEXTMEMcb40;
        } while ((bEXTMEMcb40 & 6) != 0);
        uEXTMEMca0c = 1;
        DAT_INTMEM_30 = 0xf;
        DAT_INTMEM_31 = 0;
        DAT_INTMEM_32 = 0x40;
        DAT_INTMEM_33 = 0x10;
        DAT_INTMEM_34 = 0;
        DAT_INTMEM_35 = 0x40;
        DAT_INTMEM_2a = 2;
        DAT_INTMEM_2b = 1;
        DAT_INTMEM_2c = 0;
        DAT_INTMEM_2d = 0;
        DAT_INTMEM_2e = 1;
        DAT_INTMEM_2f = 0x8f;
        FUN_CODE_1aa9(0xca08,bVar2);
        uEXTMEMce51 = 0x10;
        FUN_CODE_11d7();
        BANK0_R3 = BANK0_R3 & 0xfe;
        BANK2_R5 = '\0';
        param_1 = 0x4fe4;
        DAT_EXTMEM_4fe4 = 0;
        param_3 = DAT_EXTMEM_d76d;
      }
    }
    else {
      while (bEXTMEM4fb1 != 0) {
        DAT_INTMEM_7a = 0x20;
        DAT_INTMEM_7b = 0x28;
        FUN_CODE_0270(0x4f00);
      }
      DAT_INTMEM_7a = BANK1_R1;
      DAT_INTMEM_7b = BANK1_R2;
      DAT_INTMEM_7c = BANK2_R4;
      DAT_INTMEM_7d = BANK2_R7;
      param_1 = 0x4f03;
      param_3 = bEXTMEM4fb1;
      FUN_CODE_11f9(0x4f03);
    }
    param_2 = '\0';
  } while( true );
LAB_CODE_3b47:
  bVar2 = BANK0_R2;
  DAT_INTMEM_7a = 0x20;
  DAT_INTMEM_7b = 0xb;
  param_1 = param_1 & 0xff00;
  FUN_CODE_0270(param_1);
  uVar5 = (undefined1)(param_1 >> 8);
  BANK1_R5 = '\0';
  if ((((BANK3_R0 == '\0') && (uVar5 = 0x4f, param_3 = bEXTMEM4feb, bEXTMEM4feb == 0)) &&
      (uVar5 = 0xcc, cEXTMEMcc8d == '\0')) && (param_2 != '\0')) {
    param_1 = 0xcc02;
    BANK0_R2 = bVar2;
    FUN_CODE_1f0b();
    param_3 = (byte)param_1;
    BANK0_R2 = bVar2;
    if (param_3 == 1) {
LAB_CODE_2a74:
      do {
        if ((bEXTMEMd66f >> 4 & 1) != 0) {
          uEXTMEMca10 = 3;
          uEXTMEMca15 = 0x20;
          uEXTMEMca14 = 7;
        }
        if ((bCODE0048 >> 4 & 1) != 0) {
          uEXTMEMd7fc = 1;
          uEXTMEMd7fa = 1;
          uEXTMEMd7f8 = 1;
          uEXTMEMd7f6 = 1;
        }
        do {
          BANK0_R2 = BANK0_R2 & 0xe;
        } while (bEXTMEMc800 == 0xe);
        BANK1_R0 = DAT_EXTMEM_c801 & 0x80;
        if (BANK1_R0 == 0) {
          BANK0_R2 = BANK0_R2 | 0x9b;
          uEXTMEMd21e = 0xff;
        }
        else {
          uEXTMEMcc8e = 0;
        }
        bVar2 = BANK0_R2;
        DAT_EXTMEM_4fe9 = 0;
        BANK1_R1 = 0;
        BANK1_R2 = 0;
        BANK2_R4 = 0;
        BANK1_R5 = '\0';
        BANK1_R6 = '\0';
        BANK2_R3 = '\0';
        BANK2_R7 = 0;
        DAT_EXTMEM_4fe4 = 0;
        BANK2_R5 = '\0';
        BANK2_R6 = '\0';
        BANK3_R0 = '\0';
        bEXTMEM4feb = 0;
        param_2 = '\0';
        uEXTMEM4fe5 = 0;
        uEXTMEM4fe6 = 0;
        DAT_EXTMEM_4fe7 = 0;
        DAT_EXTMEM_4fae = 0;
        uEXTMEMd766 = 8;
        uEXTMEMd600 = 0;
        uEXTMEMd680 = 0;
        uEXTMEMd700 = 0;
        uEXTMEMd780 = 0;
        if (cCODE004b < '\0') {
          uEXTMEMd677 = 0;
        }
        else {
          uEXTMEMd677 = 0xf;
        }
        if (BANK1_R0 == 0) {
          BANK0_R3 = BANK0_R3 & 0xfc | 4;
          uEXTMEMd254 = 0xff;
          uEXTMEMd255 = 0xff;
        }
        else if ((bEXTMEMc84b >> 3 & 1) == 1) {
          BANK0_R3 = BANK0_R3 | 4;
        }
        else {
          BANK0_R3 = BANK0_R3 & 0xfa;
        }
        uEXTMEMcc92 = 8;
        BANK3_R1 = uEXTMEMcc8e;
        uEXTMEMcc96 = 1;
        BANK0_R3 = BANK0_R3 & 0xfe;
        FUN_CODE_1da2(5);
        DAT_EXTMEM_4fea = DAT_EXTMEM_c801 & 0x3f;
        if (DAT_EXTMEM_4fea == 8) {
          for (bEXTMEM4ff0 = 0; bEXTMEM4ff0 < 2; bEXTMEM4ff0 = bEXTMEM4ff0 + 1) {
          }
          BANK0_R3 = BANK0_R3 & 0xfd;
          DAT_INTMEM_7a = 0x10;
          DAT_INTMEM_7b = 0x1c;
          BANK0_R2 = bVar2;
          FUN_CODE_0270(0xd600);
          do {
          } while ((bEXTMEMd67c >> 2 & 1) == 0);
        }
        while ((((DAT_EXTMEM_c848 >> 2 & 1) != 0 &&
                (uVar6 = 0xcc93, bVar4 = DAT_EXTMEM_c848, DAT_EXTMEM_cc93 == '\0')) ||
               (uVar6 = 0xc808, bVar4 = DAT_EXTMEM_c808, (DAT_EXTMEM_c808 & 1) != 0))) {
          DAT_INTMEM_7a = 0x20;
          DAT_INTMEM_7b = 0x20;
          BANK0_R2 = bVar2;
          FUN_CODE_0270(uVar6 & 0xff00,bVar4);
        }
        do {
        } while ((DAT_EXTMEM_cc07 & 1) == 1);
        do {
        } while ((bEXTMEMc82f & 1) == 0);
        BANK0_R3 = BANK0_R3 | 3;
        if ((bEXTMEMc800 >> 4 & 1) != 0) {
          BANK0_R2 = bVar2;
          FUN_CODE_1da2(0x1c2,bEXTMEMc800);
        }
        if ((bEXTMEMc800 & 1) == 1) {
          if (cEXTMEMd66e == '\x01') {
            bEXTMEMc890 = 1;
            uEXTMEMc891 = 0xc;
            uEXTMEMd449 = 2;
            uEXTMEMd766 = 0;
            DAT_EXTMEM_d672 = 0;
            BANK0_R3 = BANK0_R3 & 3;
          }
          else if (cEXTMEMd66e == '\x02') {
            DAT_EXTMEM_d672 = 0xf;
            BANK0_R3 = BANK0_R3 & 2;
          }
          else {
            DAT_EXTMEM_d672 = 0xf;
            BANK0_R3 = BANK0_R3 & 3;
          }
          BANK0_R2 = bVar2;
          for (bEXTMEM4ff0 = 0; bEXTMEM4ff0 < 4; bEXTMEM4ff0 = bEXTMEM4ff0 + 1) {
            DAT_INTMEM_7b = bEXTMEM4ff0;
            DAT_INTMEM_7a = 0;
            FUN_CODE_0e94(0x4f00);
          }
          uEXTMEMca5a = 0;
          BANK0_R3 = BANK0_R3 | 1;
          uEXTMEMd767 = 0x3f;
          BANK1_R1 = 4;
          do {
            if (bEXTMEMc890 != 0) {
              DAT_INTMEM_7a = 0x20;
              DAT_INTMEM_7b = 4;
              FUN_CODE_0270(0xc800);
              do {
              } while( true );
            }
            DAT_INTMEM_7a = 1;
            DAT_INTMEM_7b = 2;
            FUN_CODE_0270(0xc800);
            uEXTMEMd446 = 0xc4;
            uEXTMEMd447 = 0;
            uEXTMEMd453 = 0x3a;
            uEXTMEMd47d = 0x3a;
            uEXTMEMd454 = 0x54;
            uEXTMEMd47e = 0x54;
            FUN_CODE_0478();
            while (FUN_CODE_0aba(), (DAT_EXTMEM_c802 & 1) == 0) {
              if ((DAT_EXTMEM_cc07 & 1) != 0) {
                FUN_CODE_0e61(DAT_EXTMEM_cc07);
                goto LAB_CODE_2a74;
              }
            }
            FUN_CODE_0f3d(DAT_EXTMEM_c802);
            FUN_CODE_1010();
            FUN_CODE_1da2(0xf);
            BANK0_R3 = BANK0_R3 & 0xdd;
            DAT_EXTMEM_cc00 = 0;
            FUN_CODE_1043();
            uEXTMEMce51 = 0;
            DAT_INTMEM_7a = 1;
            DAT_INTMEM_7b = 3;
            bVar2 = FUN_CODE_0270(0xce00);
            while( true ) {
              FUN_CODE_0aba(bVar2);
              while (DAT_EXTMEM_cc93 == '\x01') {
                DAT_INTMEM_7a = 0x20;
                DAT_INTMEM_7b = 0x21;
                FUN_CODE_0270(0xcc00);
              }
              if (((((DAT_EXTMEM_c802 & 1) != 1) && ((bEXTMEMc890 & 1) == 0)) ||
                  (-1 < (char)DAT_EXTMEM_d77f)) && ((bEXTMEMc890 & 1) != 1)) break;
              DAT_EXTMEM_4fea = DAT_EXTMEM_cc07;
              if ((DAT_EXTMEM_cc07 & 1) != 0) {
                FUN_CODE_0e61(DAT_EXTMEM_cc07);
                goto LAB_CODE_2a74;
              }
              bVar2 = DAT_EXTMEM_cc07;
              if ((DAT_EXTMEM_cc07 >> 2 & 1) != 0) {
                bINTMEM7f = BANK0_R3;
                bINTMEM80 = BANK0_R3;
                bVar2 = bEXTMEMcc37;
              }
            }
            FUN_CODE_0e61(bEXTMEMc890);
          } while( true );
        }
        uEXTMEMca5a = 0;
        DAT_INTMEM_7a = 1;
        DAT_INTMEM_7b = 5;
        BANK0_R2 = bVar2;
        FUN_CODE_0270(0xca00,bEXTMEMc800);
        cEXTMEM4fef = '\0';
        uVar5 = 200;
        BANK0_R2 = bVar2;
        if (((DAT_EXTMEM_c848 >> 4 & 1) != 1) ||
           ((bVar4 = DAT_EXTMEM_c848, BANK1_R0 == 0 &&
            (uVar5 = 0xd2, bVar4 = DAT_EXTMEM_d252, (DAT_EXTMEM_d252 >> 5 & 1) != 0))))
        goto LAB_CODE_33b1;
        DAT_INTMEM_ee = 1;
        DAT_INTMEM_2f = 0xee;
        DAT_INTMEM_30 = 0xf;
        DAT_INTMEM_31 = 0;
        DAT_INTMEM_32 = 0x40;
        DAT_INTMEM_33 = 0x10;
        DAT_INTMEM_34 = 0;
        DAT_INTMEM_35 = 0x40;
        DAT_INTMEM_2a = 0;
        DAT_INTMEM_2b = 6;
        DAT_INTMEM_2c = 0;
        DAT_INTMEM_2d = 0;
        DAT_INTMEM_2e = 1;
        uVar7 = CONCAT11(uVar5,8);
        FUN_CODE_1aa9(uVar7,bVar4);
        uVar5 = (undefined1)((ushort)uVar7 >> 8);
        if (BANK1_R0 != 0) goto LAB_CODE_2f76;
        uEXTMEMcc0c = 199;
        uEXTMEMcc0b = 0;
        do {
          if (((cEXTMEMcc29 == '\0') && (99 < bEXTMEMcc0a)) || ((bEXTMEMcc90 & 1) == 1)) {
            uVar5 = 0xcc;
            uEXTMEMcc0c = 99;
            goto LAB_CODE_2f76;
          }
        } while ((DAT_EXTMEM_cc07 & 1) == 0);
        DAT_EXTMEM_cc00 = 1;
        BANK0_R2 = bVar2;
        FUN_CODE_11d7(DAT_EXTMEM_cc07);
        BANK0_R3 = BANK0_R3 & 0xfe;
        DAT_EXTMEM_c200 = DAT_EXTMEM_c200 & 0xf1 | 3;
        DAT_EXTMEM_d67e = 0;
        DAT_EXTMEM_d67f = 0;
      } while( true );
    }
    if (BANK1_R5 != '\0') goto LAB_CODE_3b47;
    if (BANK1_R6 != '\0') goto LAB_CODE_3be5;
    param_1 = 0;
    bVar4 = bCODE0048;
    if ((bCODE0048 >> 2 & 1) != 0) {
      param_1 = 0;
      if ((bCODE0048 >> 5 & 1) != 0) {
        DAT_INTMEM_7d = DAT_EXTMEM_0120;
        DAT_INTMEM_7a = BANK1_R1;
        DAT_INTMEM_7b = BANK1_R2;
        DAT_INTMEM_7c = BANK2_R4;
        param_1 = 0x10c;
        FUN_CODE_11f9(0x10c);
      }
      BANK0_R2 = bVar2;
      FUN_CODE_0326();
    }
    uVar5 = (undefined1)(param_1 >> 8);
    BANK0_R3 = DAT_INTMEM_81 & BANK3_R4;
    BANK0_R2 = bVar2;
    if (((bVar4 != BANK3_R4) || (BANK0_R3 = DAT_INTMEM_82 & BANK3_R5, bVar4 != BANK3_R5)) ||
       (BANK2_R3 == '\0')) goto LAB_CODE_3be5;
    param_3 = BANK2_R7 & 0xc0;
    if (param_3 == 0xc0) {
      DAT_INTMEM_7a = BANK1_R1;
      DAT_INTMEM_7b = BANK1_R2;
      DAT_INTMEM_7c = BANK2_R4;
      DAT_INTMEM_7d = BANK2_R7;
      param_1 = CONCAT11(uVar5,4);
      FUN_CODE_11f9(param_1);
      BANK0_R2 = bVar2;
      goto LAB_CODE_3479;
    }
  }
  if ((BANK1_R0 == 0) && (uVar5 = 0xd2, param_3 = DAT_EXTMEM_d25c, (DAT_EXTMEM_d25c & 0xf) == 0)) {
    param_1 = 0xcc21;
    uEXTMEMcc21 = 1;
    BANK0_R2 = bVar2;
  }
  else {
    DAT_INTMEM_7a = BANK1_R1;
    DAT_INTMEM_7b = BANK1_R2;
    DAT_INTMEM_7c = BANK2_R4;
    DAT_INTMEM_7d = 0;
    param_1 = CONCAT11(uVar5,0xd);
    BANK0_R2 = bVar2;
    FUN_CODE_11f9(param_1);
    BANK0_R2 = bVar2;
  }
  goto LAB_CODE_3479;
LAB_CODE_2f76:
  DAT_INTMEM_30 = 0xf;
  DAT_INTMEM_31 = 0;
  DAT_INTMEM_32 = 0x40;
  DAT_INTMEM_33 = 0x10;
  DAT_INTMEM_34 = 0;
  DAT_INTMEM_35 = 0x40;
  DAT_INTMEM_2a = 0;
  DAT_INTMEM_2b = 0;
  DAT_INTMEM_2c = 0;
  DAT_INTMEM_2d = 0;
  DAT_INTMEM_2e = 0xc;
  DAT_INTMEM_2f = 0;
  BANK0_R2 = bVar2;
  FUN_CODE_1aa9(CONCAT11(uVar5,9));
  BANK0_R2 = bVar2;
  bVar2 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
  cEXTMEM4fef = 0x11 < bVar2;
  param_4 = BANK2_R2;
  bVar2 = FUN_CODE_3ed5(CONCAT11(BANK2_R1 - (((0xfd < BANK2_R0) << 7) >> 7),BANK2_R0 + 2),BANK2_R2);
  DAT_EXTMEM_4fae = bVar2 & 0x40;
  if (BANK1_R0 == 0) {
    uEXTMEMd257 = 0x11;
    BANK0_R3 = 0;
    cVar3 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
    if ((cVar3 != '\x10') && (cVar3 != '\x11')) {
      if (cVar3 == '\x12') {
        BANK0_R3 = BANK0_R3 | 0x10;
      }
      else {
        BANK0_R3 = BANK0_R3 | 0x10;
      }
    }
    if ((bEXTMEMc80a & 0xf) == 0) {
      cVar3 = FUN_CODE_3ed5(CONCAT11(BANK2_R1 - (((0xfe < BANK2_R0) << 7) >> 7),BANK2_R0 + 1),
                            BANK2_R2);
      if (cVar3 != '\x06') {
        if (cVar3 == '\n') {
          BANK0_R3 = BANK0_R3 | 1;
        }
        else if (cVar3 == '\x14') {
          BANK0_R3 = BANK0_R3 | 2;
        }
        else {
          BANK0_R3 = BANK0_R3 | 2;
        }
      }
    }
    else {
      BANK0_R3 = BANK0_R3 & 0xf;
      if (bEXTMEMc80a != 1) {
        if (bEXTMEMc80a == 2) {
          BANK0_R3 = BANK0_R3 | 1;
        }
        else if (bEXTMEMc80a == 3) {
          BANK0_R3 = BANK0_R3 | 2;
        }
        else {
          BANK0_R3 = BANK0_R3 | 2;
        }
      }
    }
    if ((bEXTMEMc80a & 0xf0) == 0) {
      cVar3 = FUN_CODE_3ed5(CONCAT11(BANK2_R1 - (((0xfd < BANK2_R0) << 7) >> 7),BANK2_R0 + 2),
                            BANK2_R2);
      BANK0_R3 = BANK0_R3 & 0x1f;
      if (cVar3 != '\x01') {
        if (cVar3 == '\x02') {
          BANK0_R3 = BANK0_R3 | 0x10;
        }
        else if (cVar3 == '\x04') {
          BANK0_R3 = BANK0_R3 | 0x20;
        }
        else {
          BANK0_R3 = BANK0_R3 | 0x20;
        }
      }
    }
    else {
      BANK0_R3 = BANK0_R3 & 0xf0;
      if (bEXTMEMc80a != 0x10) {
        if (bEXTMEMc80a == 0x20) {
          BANK0_R3 = BANK0_R3 | 0x10;
        }
        else if (bEXTMEMc80a == 0x40) {
          BANK0_R3 = BANK0_R3 | 0x20;
        }
        else {
          BANK0_R3 = BANK0_R3 | 0x20;
        }
      }
    }
    param_4 = BANK2_R1 - (((0xfd < BANK2_R0) << 7) >> 7);
    bVar2 = FUN_CODE_3ed5(CONCAT11(param_4,BANK2_R0 + 2),BANK2_R2);
    BANK0_R3 = BANK0_R3 & 0xfe | bVar2 & 0xc0;
  }
  bVar2 = BANK0_R2;
  if ((bCODE0048 >> 2 & 1) != 0) {
    DAT_INTMEM_30 = 0xf;
    DAT_INTMEM_31 = 0;
    DAT_INTMEM_32 = 0x40;
    DAT_INTMEM_33 = 0x10;
    DAT_INTMEM_34 = 0;
    DAT_INTMEM_35 = 0x40;
    DAT_INTMEM_2a = 0;
    DAT_INTMEM_2b = 2;
    DAT_INTMEM_2c = 0;
    DAT_INTMEM_2d = 0;
    DAT_INTMEM_2e = 1;
    DAT_INTMEM_2f = 0;
    FUN_CODE_1aa9(9,bCODE0048);
    param_4 = BANK2_R2;
    bVar4 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
    DAT_EXTMEM_0120 = bVar4 & 0x1f;
    FUN_CODE_0326();
  }
  BANK0_R2 = bVar2;
  if (cEXTMEM4fef != '\0') {
    DAT_INTMEM_30 = 0xf;
    DAT_INTMEM_31 = 0;
    DAT_INTMEM_32 = 0x40;
    DAT_INTMEM_33 = 0x10;
    DAT_INTMEM_34 = 0;
    DAT_INTMEM_35 = 0x40;
    DAT_INTMEM_2a = 0xe;
    DAT_INTMEM_2b = 0;
    DAT_INTMEM_2c = 0;
    DAT_INTMEM_2d = 0;
    DAT_INTMEM_2e = 1;
    DAT_INTMEM_2f = 0;
    FUN_CODE_1aa9(0x4f09,cEXTMEM4fef);
    param_4 = BANK2_R2;
    if ((bEXTMEMc809 & 1) == 1) {
      BANK0_R2 = bVar2;
      cVar3 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
      BANK0_R3 = BANK0_R3 & 0x7f;
      if (BANK0_R3 < 5) {
                    /* WARNING: Could not recover jumptable at 0x32a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ushort)(byte)(cVar3 * '\x03') + 0x32aa))();
        return;
      }
    }
    else {
      BANK0_R2 = bVar2;
      cVar3 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
      BANK0_R3 = BANK0_R3 & 0x7f;
      if (BANK0_R3 < 5) {
                    /* WARNING: Could not recover jumptable at 0x3333. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ushort)(byte)(cVar3 * '\x03') + 0x3334))();
        return;
      }
    }
  }
LAB_CODE_33b1:
  bVar2 = BANK0_R2;
  uEXTMEM4fd9 = 1;
  DAT_EXTMEM_4fd8 = 4;
  BANK0_R3 = BANK0_R3 & 0xfe;
  param_1 = 0x4fef;
  if (cEXTMEM4fef == '\0') {
    param_3 = 0;
  }
  else {
    DAT_INTMEM_30 = 0xf;
    DAT_INTMEM_31 = 0;
    DAT_INTMEM_32 = 0x40;
    DAT_INTMEM_33 = 0x10;
    DAT_INTMEM_34 = 0;
    DAT_INTMEM_35 = 0x40;
    DAT_INTMEM_2a = 0x21;
    DAT_INTMEM_2b = 0;
    DAT_INTMEM_2c = 0;
    DAT_INTMEM_2d = 0;
    DAT_INTMEM_2e = 1;
    DAT_INTMEM_2f = 0;
    FUN_CODE_1aa9(0x4f09);
    param_1 = CONCAT11(BANK2_R1,BANK2_R0);
    param_4 = BANK2_R2;
    BANK0_R2 = bVar2;
    param_3 = FUN_CODE_3ed5(param_1,BANK2_R2);
    bVar2 = BANK0_R2;
    BANK0_R2 = bVar2;
    if ((param_3 & 1) != 0) {
      DAT_EXTMEM_4fe7 = 0;
      uINTMEMd4 = 0;
      DAT_INTMEM_2f = 0xd4;
      DAT_INTMEM_30 = 0xf;
      DAT_INTMEM_31 = 0;
      DAT_INTMEM_32 = 0x40;
      DAT_INTMEM_33 = 0x10;
      DAT_INTMEM_34 = 0;
      DAT_INTMEM_35 = 0x40;
      DAT_INTMEM_2a = 0x11;
      DAT_INTMEM_2b = 1;
      DAT_INTMEM_2c = 0;
      DAT_INTMEM_2d = 0;
      DAT_INTMEM_2e = 1;
      uVar5 = 0x4f;
      FUN_CODE_1aa9(0x4f08);
      uINTMEMd5 = 0;
      uINTMEMd6 = 0;
      uINTMEMd7 = 0x3f;
      DAT_INTMEM_2f = 0xd5;
      DAT_INTMEM_30 = 0xf;
      DAT_INTMEM_31 = 0;
      DAT_INTMEM_32 = 0x40;
      DAT_INTMEM_33 = 0x10;
      DAT_INTMEM_34 = 0;
      DAT_INTMEM_35 = 0x40;
      DAT_INTMEM_2a = 0xc0;
      DAT_INTMEM_2b = 1;
      DAT_INTMEM_2c = 0;
      DAT_INTMEM_2d = 0;
      DAT_INTMEM_2e = 3;
      param_1 = CONCAT11(uVar5,8);
      FUN_CODE_1aa9(param_1);
      BANK0_R2 = bVar2;
    }
  }
  if (BANK1_R5 == '\0') goto LAB_CODE_3479;
  goto LAB_CODE_3b47;
}



/* =========================================================
 * CODE:353b  thunk_FUN_CODE_3958  size=3
 * ========================================================= */

void thunk_FUN_CODE_3958(ushort param_1,char param_2,byte param_3,char param_4)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  undefined1 uVar5;
  ushort uVar6;
  undefined2 uVar7;
  
LAB_CODE_3479:
  do {
    while (bVar2 = BANK0_R2, BANK2_R6 != '\0') {
LAB_CODE_34eb:
      uVar5 = BANK0_R4;
      BANK2_R6 = '\0';
      DAT_INTMEM_77 = param_3 & 7;
      bVar4 = bINTMEM7e & 0x60;
      DAT_INTMEM_76 = bINTMEM80;
      DAT_INTMEM_7a = 0x20;
      DAT_INTMEM_7b = 0x19;
      param_1 = param_1 & 0xff00;
      BANK0_R2 = bVar2;
      BANK0_R3 = bVar4;
      FUN_CODE_0270(param_1,param_3 & 0x18);
      BANK0_R5 = bINTMEM7f & 0xf;
      BANK0_R2 = bVar2;
      BANK0_R3 = bVar4;
      BANK0_R4 = uVar5;
      if (BANK0_R5 < 0x10) {
                    /* WARNING: Could not recover jumptable at 0x3531. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ushort)(byte)(param_4 * '\x03') + 0x3532))();
        return;
      }
    }
    DAT_INTMEM_7a = 0x20;
    DAT_INTMEM_7b = 6;
    FUN_CODE_0270(0);
    uEXTMEMcc2d = 0xfe;
    do {
      BANK3_R7 = 0xec;
      DAT_INTMEM_20 = 0x4f;
      DAT_INTMEM_21 = 0;
      DAT_INTMEM_22 = 0x72;
      DAT_INTMEM_23 = 0;
      DAT_INTMEM_24 = 0x40;
      DAT_INTMEM_25 = 0x73;
      DAT_INTMEM_26 = 0;
      DAT_INTMEM_27 = 0x40;
      BANK3_R6 = 0;
      param_3 = 0x26;
      BANK0_R2 = bVar2;
      FUN_CODE_17f4();
      param_1 = 0x4fea;
      DAT_EXTMEM_4fea = param_3;
      if (param_3 == 0) {
        BANK0_R2 = bVar2;
        if (BANK1_R5 != '\0') goto LAB_CODE_3b47;
        if (BANK1_R6 == '\0') goto LAB_CODE_34eb;
        break;
      }
      param_1 = 0x4fea;
      BANK0_R2 = bVar2;
      if (param_3 == 1) goto LAB_CODE_2a74;
      if (BANK1_R5 != '\0') goto LAB_CODE_3b47;
    } while (BANK1_R6 == '\0');
LAB_CODE_3be5:
    bVar2 = BANK0_R2;
    DAT_INTMEM_7a = 1;
    DAT_INTMEM_7b = 0xc;
    FUN_CODE_0270(param_1 & 0xff00);
    BANK0_R3 = BANK0_R3 & 0xfc;
    uVar5 = 0x4f;
    bVar4 = DAT_EXTMEM_4fbf;
    if ((DAT_EXTMEM_4fbf == 1) && (uVar5 = 0, bVar4 = bCODE0049, (bCODE0049 >> 1 & 1) != 0)) {
      BANK0_R3 = BANK0_R3 | 1;
      DAT_EXTMEM_d67e = 0;
      uVar5 = 0xd6;
      DAT_EXTMEM_d67f = 0;
      bVar4 = DAT_EXTMEM_d77f;
    }
    BANK0_R2 = bVar2;
    if (BANK1_R6 != '\0') {
      DAT_INTMEM_30 = 0xf;
      DAT_INTMEM_31 = 0;
      DAT_INTMEM_32 = 0x40;
      DAT_INTMEM_33 = 0x10;
      DAT_INTMEM_34 = 0;
      DAT_INTMEM_35 = 0x40;
      DAT_INTMEM_2a = 0x21;
      DAT_INTMEM_2b = 0;
      DAT_INTMEM_2c = 0;
      DAT_INTMEM_2d = 0;
      DAT_INTMEM_2e = 1;
      DAT_INTMEM_2f = 0;
      FUN_CODE_1aa9(CONCAT11(uVar5,9),bVar4);
      param_4 = BANK2_R2;
      BANK0_R2 = bVar2;
      bVar4 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
      bVar2 = BANK0_R2;
      BANK0_R2 = bVar2;
      if ((bVar4 & 1) != 0) {
        DAT_EXTMEM_4fe7 = 0;
        uINTMEMd4 = 0;
        DAT_INTMEM_2f = 0xd4;
        DAT_INTMEM_30 = 0xf;
        DAT_INTMEM_31 = 0;
        DAT_INTMEM_32 = 0x40;
        DAT_INTMEM_33 = 0x10;
        DAT_INTMEM_34 = 0;
        DAT_INTMEM_35 = 0x40;
        DAT_INTMEM_2a = 0x11;
        DAT_INTMEM_2b = 1;
        DAT_INTMEM_2c = 0;
        DAT_INTMEM_2d = 0;
        DAT_INTMEM_2e = 1;
        uVar5 = 0x4f;
        FUN_CODE_1aa9(0x4f08,bVar4);
        uINTMEMd5 = 0;
        uINTMEMd6 = 0;
        uINTMEMd7 = 0x3f;
        DAT_INTMEM_2f = 0xd5;
        DAT_INTMEM_30 = 0xf;
        DAT_INTMEM_31 = 0;
        DAT_INTMEM_32 = 0x40;
        DAT_INTMEM_33 = 0x10;
        DAT_INTMEM_34 = 0;
        DAT_INTMEM_35 = 0x40;
        DAT_INTMEM_2a = 0xc0;
        DAT_INTMEM_2b = 1;
        DAT_INTMEM_2c = 0;
        DAT_INTMEM_2d = 0;
        DAT_INTMEM_2e = 3;
        FUN_CODE_1aa9(CONCAT11(uVar5,8));
        BANK0_R2 = bVar2;
      }
    }
    BANK1_R6 = '\0';
    uEXTMEM4fe6 = 0;
    DAT_EXTMEM_cc00 = 1;
    DAT_EXTMEM_c200 = DAT_EXTMEM_c200 & 0xf1 | 3;
    if ((bCODE0048 >> 1 & 1) == 1) {
      param_3 = bEXTMEM4feb != 1;
      bVar1 = DAT_EXTMEM_4fbf != 1;
      if (bVar1 && (bool)param_3) {
        DAT_INTMEM_7a = BANK1_R1;
        DAT_INTMEM_7b = BANK1_R2;
        DAT_INTMEM_7c = BANK2_R4;
        DAT_INTMEM_7d = BANK2_R7;
        param_1 = 0x4f03;
        FUN_CODE_11f9(0x4f03);
      }
      else {
        DAT_EXTMEM_4fbf = 0;
        if ((BANK2_R5 != '\0') ||
           (param_1 = 0x4fe4, param_3 = DAT_EXTMEM_4fe4, DAT_EXTMEM_4fe4 != 0)) {
          do {
            bVar2 = DAT_EXTMEM_ca40;
            if ((DAT_EXTMEM_ca40 >> 1 & 1) == 1) break;
            bVar2 = bEXTMEMcb40;
          } while ((bEXTMEMcb40 & 6) != 0);
          uEXTMEMca0c = 1;
          DAT_INTMEM_30 = 0xf;
          DAT_INTMEM_31 = 0;
          DAT_INTMEM_32 = 0x40;
          DAT_INTMEM_33 = 0x10;
          DAT_INTMEM_34 = 0;
          DAT_INTMEM_35 = 0x40;
          DAT_INTMEM_2a = 2;
          DAT_INTMEM_2b = 1;
          DAT_INTMEM_2c = 0;
          DAT_INTMEM_2d = 0;
          DAT_INTMEM_2e = 1;
          DAT_INTMEM_2f = 0x8f;
          FUN_CODE_1aa9(0xca08,bVar2,bVar1);
          uEXTMEMce51 = 0x10;
          FUN_CODE_11d7();
          BANK0_R3 = BANK0_R3 & 0xfe;
          BANK2_R5 = '\0';
          param_1 = 0x4fe4;
          DAT_EXTMEM_4fe4 = 0;
          param_3 = DAT_EXTMEM_d76d;
        }
      }
    }
    else if (param_2 == '\0') {
      if ((BANK2_R5 != '\0') || (param_1 = 0x4fe4, param_3 = DAT_EXTMEM_4fe4, DAT_EXTMEM_4fe4 != 0))
      {
        do {
          bVar2 = DAT_EXTMEM_ca40;
          if ((DAT_EXTMEM_ca40 >> 1 & 1) == 1) break;
          bVar2 = bEXTMEMcb40;
        } while ((bEXTMEMcb40 & 6) != 0);
        uEXTMEMca0c = 1;
        DAT_INTMEM_30 = 0xf;
        DAT_INTMEM_31 = 0;
        DAT_INTMEM_32 = 0x40;
        DAT_INTMEM_33 = 0x10;
        DAT_INTMEM_34 = 0;
        DAT_INTMEM_35 = 0x40;
        DAT_INTMEM_2a = 2;
        DAT_INTMEM_2b = 1;
        DAT_INTMEM_2c = 0;
        DAT_INTMEM_2d = 0;
        DAT_INTMEM_2e = 1;
        DAT_INTMEM_2f = 0x8f;
        FUN_CODE_1aa9(0xca08,bVar2);
        uEXTMEMce51 = 0x10;
        FUN_CODE_11d7();
        BANK0_R3 = BANK0_R3 & 0xfe;
        BANK2_R5 = '\0';
        param_1 = 0x4fe4;
        DAT_EXTMEM_4fe4 = 0;
        param_3 = DAT_EXTMEM_d76d;
      }
    }
    else {
      while (bEXTMEM4fb1 != 0) {
        DAT_INTMEM_7a = 0x20;
        DAT_INTMEM_7b = 0x28;
        FUN_CODE_0270(0x4f00);
      }
      DAT_INTMEM_7a = BANK1_R1;
      DAT_INTMEM_7b = BANK1_R2;
      DAT_INTMEM_7c = BANK2_R4;
      DAT_INTMEM_7d = BANK2_R7;
      param_1 = 0x4f03;
      param_3 = bEXTMEM4fb1;
      FUN_CODE_11f9(0x4f03);
    }
    param_2 = '\0';
  } while( true );
LAB_CODE_3b47:
  bVar2 = BANK0_R2;
  DAT_INTMEM_7a = 0x20;
  DAT_INTMEM_7b = 0xb;
  param_1 = param_1 & 0xff00;
  FUN_CODE_0270(param_1);
  uVar5 = (undefined1)(param_1 >> 8);
  BANK1_R5 = '\0';
  if ((((BANK3_R0 == '\0') && (uVar5 = 0x4f, param_3 = bEXTMEM4feb, bEXTMEM4feb == 0)) &&
      (uVar5 = 0xcc, cEXTMEMcc8d == '\0')) && (param_2 != '\0')) {
    param_1 = 0xcc02;
    BANK0_R2 = bVar2;
    FUN_CODE_1f0b();
    param_3 = (byte)param_1;
    BANK0_R2 = bVar2;
    if (param_3 == 1) {
LAB_CODE_2a74:
      do {
        if ((bEXTMEMd66f >> 4 & 1) != 0) {
          uEXTMEMca10 = 3;
          uEXTMEMca15 = 0x20;
          uEXTMEMca14 = 7;
        }
        if ((bCODE0048 >> 4 & 1) != 0) {
          uEXTMEMd7fc = 1;
          uEXTMEMd7fa = 1;
          uEXTMEMd7f8 = 1;
          uEXTMEMd7f6 = 1;
        }
        do {
          BANK0_R2 = BANK0_R2 & 0xe;
        } while (bEXTMEMc800 == 0xe);
        BANK1_R0 = DAT_EXTMEM_c801 & 0x80;
        if (BANK1_R0 == 0) {
          BANK0_R2 = BANK0_R2 | 0x9b;
          uEXTMEMd21e = 0xff;
        }
        else {
          uEXTMEMcc8e = 0;
        }
        bVar2 = BANK0_R2;
        DAT_EXTMEM_4fe9 = 0;
        BANK1_R1 = 0;
        BANK1_R2 = 0;
        BANK2_R4 = 0;
        BANK1_R5 = '\0';
        BANK1_R6 = '\0';
        BANK2_R3 = '\0';
        BANK2_R7 = 0;
        DAT_EXTMEM_4fe4 = 0;
        BANK2_R5 = '\0';
        BANK2_R6 = '\0';
        BANK3_R0 = '\0';
        bEXTMEM4feb = 0;
        param_2 = '\0';
        uEXTMEM4fe5 = 0;
        uEXTMEM4fe6 = 0;
        DAT_EXTMEM_4fe7 = 0;
        DAT_EXTMEM_4fae = 0;
        uEXTMEMd766 = 8;
        uEXTMEMd600 = 0;
        uEXTMEMd680 = 0;
        uEXTMEMd700 = 0;
        uEXTMEMd780 = 0;
        if (cCODE004b < '\0') {
          uEXTMEMd677 = 0;
        }
        else {
          uEXTMEMd677 = 0xf;
        }
        if (BANK1_R0 == 0) {
          BANK0_R3 = BANK0_R3 & 0xfc | 4;
          uEXTMEMd254 = 0xff;
          uEXTMEMd255 = 0xff;
        }
        else if ((bEXTMEMc84b >> 3 & 1) == 1) {
          BANK0_R3 = BANK0_R3 | 4;
        }
        else {
          BANK0_R3 = BANK0_R3 & 0xfa;
        }
        uEXTMEMcc92 = 8;
        BANK3_R1 = uEXTMEMcc8e;
        uEXTMEMcc96 = 1;
        BANK0_R3 = BANK0_R3 & 0xfe;
        FUN_CODE_1da2(5);
        DAT_EXTMEM_4fea = DAT_EXTMEM_c801 & 0x3f;
        if (DAT_EXTMEM_4fea == 8) {
          for (bEXTMEM4ff0 = 0; bEXTMEM4ff0 < 2; bEXTMEM4ff0 = bEXTMEM4ff0 + 1) {
          }
          BANK0_R3 = BANK0_R3 & 0xfd;
          DAT_INTMEM_7a = 0x10;
          DAT_INTMEM_7b = 0x1c;
          BANK0_R2 = bVar2;
          FUN_CODE_0270(0xd600);
          do {
          } while ((bEXTMEMd67c >> 2 & 1) == 0);
        }
        while ((((DAT_EXTMEM_c848 >> 2 & 1) != 0 &&
                (uVar6 = 0xcc93, bVar4 = DAT_EXTMEM_c848, DAT_EXTMEM_cc93 == '\0')) ||
               (uVar6 = 0xc808, bVar4 = DAT_EXTMEM_c808, (DAT_EXTMEM_c808 & 1) != 0))) {
          DAT_INTMEM_7a = 0x20;
          DAT_INTMEM_7b = 0x20;
          BANK0_R2 = bVar2;
          FUN_CODE_0270(uVar6 & 0xff00,bVar4);
        }
        do {
        } while ((DAT_EXTMEM_cc07 & 1) == 1);
        do {
        } while ((bEXTMEMc82f & 1) == 0);
        BANK0_R3 = BANK0_R3 | 3;
        if ((bEXTMEMc800 >> 4 & 1) != 0) {
          BANK0_R2 = bVar2;
          FUN_CODE_1da2(0x1c2,bEXTMEMc800);
        }
        if ((bEXTMEMc800 & 1) == 1) {
          if (cEXTMEMd66e == '\x01') {
            bEXTMEMc890 = 1;
            uEXTMEMc891 = 0xc;
            uEXTMEMd449 = 2;
            uEXTMEMd766 = 0;
            DAT_EXTMEM_d672 = 0;
            BANK0_R3 = BANK0_R3 & 3;
          }
          else if (cEXTMEMd66e == '\x02') {
            DAT_EXTMEM_d672 = 0xf;
            BANK0_R3 = BANK0_R3 & 2;
          }
          else {
            DAT_EXTMEM_d672 = 0xf;
            BANK0_R3 = BANK0_R3 & 3;
          }
          BANK0_R2 = bVar2;
          for (bEXTMEM4ff0 = 0; bEXTMEM4ff0 < 4; bEXTMEM4ff0 = bEXTMEM4ff0 + 1) {
            DAT_INTMEM_7b = bEXTMEM4ff0;
            DAT_INTMEM_7a = 0;
            FUN_CODE_0e94(0x4f00);
          }
          uEXTMEMca5a = 0;
          BANK0_R3 = BANK0_R3 | 1;
          uEXTMEMd767 = 0x3f;
          BANK1_R1 = 4;
          do {
            if (bEXTMEMc890 != 0) {
              DAT_INTMEM_7a = 0x20;
              DAT_INTMEM_7b = 4;
              FUN_CODE_0270(0xc800);
              do {
              } while( true );
            }
            DAT_INTMEM_7a = 1;
            DAT_INTMEM_7b = 2;
            FUN_CODE_0270(0xc800);
            uEXTMEMd446 = 0xc4;
            uEXTMEMd447 = 0;
            uEXTMEMd453 = 0x3a;
            uEXTMEMd47d = 0x3a;
            uEXTMEMd454 = 0x54;
            uEXTMEMd47e = 0x54;
            FUN_CODE_0478();
            while (FUN_CODE_0aba(), (DAT_EXTMEM_c802 & 1) == 0) {
              if ((DAT_EXTMEM_cc07 & 1) != 0) {
                FUN_CODE_0e61(DAT_EXTMEM_cc07);
                goto LAB_CODE_2a74;
              }
            }
            FUN_CODE_0f3d(DAT_EXTMEM_c802);
            FUN_CODE_1010();
            FUN_CODE_1da2(0xf);
            BANK0_R3 = BANK0_R3 & 0xdd;
            DAT_EXTMEM_cc00 = 0;
            FUN_CODE_1043();
            uEXTMEMce51 = 0;
            DAT_INTMEM_7a = 1;
            DAT_INTMEM_7b = 3;
            bVar2 = FUN_CODE_0270(0xce00);
            while( true ) {
              FUN_CODE_0aba(bVar2);
              while (DAT_EXTMEM_cc93 == '\x01') {
                DAT_INTMEM_7a = 0x20;
                DAT_INTMEM_7b = 0x21;
                FUN_CODE_0270(0xcc00);
              }
              if (((((DAT_EXTMEM_c802 & 1) != 1) && ((bEXTMEMc890 & 1) == 0)) ||
                  (-1 < (char)DAT_EXTMEM_d77f)) && ((bEXTMEMc890 & 1) != 1)) break;
              DAT_EXTMEM_4fea = DAT_EXTMEM_cc07;
              if ((DAT_EXTMEM_cc07 & 1) != 0) {
                FUN_CODE_0e61(DAT_EXTMEM_cc07);
                goto LAB_CODE_2a74;
              }
              bVar2 = DAT_EXTMEM_cc07;
              if ((DAT_EXTMEM_cc07 >> 2 & 1) != 0) {
                bINTMEM7f = BANK0_R3;
                bINTMEM80 = BANK0_R3;
                bVar2 = bEXTMEMcc37;
              }
            }
            FUN_CODE_0e61(bEXTMEMc890);
          } while( true );
        }
        uEXTMEMca5a = 0;
        DAT_INTMEM_7a = 1;
        DAT_INTMEM_7b = 5;
        BANK0_R2 = bVar2;
        FUN_CODE_0270(0xca00,bEXTMEMc800);
        cEXTMEM4fef = '\0';
        uVar5 = 200;
        BANK0_R2 = bVar2;
        if (((DAT_EXTMEM_c848 >> 4 & 1) != 1) ||
           ((bVar4 = DAT_EXTMEM_c848, BANK1_R0 == 0 &&
            (uVar5 = 0xd2, bVar4 = DAT_EXTMEM_d252, (DAT_EXTMEM_d252 >> 5 & 1) != 0))))
        goto LAB_CODE_33b1;
        DAT_INTMEM_ee = 1;
        DAT_INTMEM_2f = 0xee;
        DAT_INTMEM_30 = 0xf;
        DAT_INTMEM_31 = 0;
        DAT_INTMEM_32 = 0x40;
        DAT_INTMEM_33 = 0x10;
        DAT_INTMEM_34 = 0;
        DAT_INTMEM_35 = 0x40;
        DAT_INTMEM_2a = 0;
        DAT_INTMEM_2b = 6;
        DAT_INTMEM_2c = 0;
        DAT_INTMEM_2d = 0;
        DAT_INTMEM_2e = 1;
        uVar7 = CONCAT11(uVar5,8);
        FUN_CODE_1aa9(uVar7,bVar4);
        uVar5 = (undefined1)((ushort)uVar7 >> 8);
        if (BANK1_R0 != 0) goto LAB_CODE_2f76;
        uEXTMEMcc0c = 199;
        uEXTMEMcc0b = 0;
        do {
          if (((cEXTMEMcc29 == '\0') && (99 < bEXTMEMcc0a)) || ((bEXTMEMcc90 & 1) == 1)) {
            uVar5 = 0xcc;
            uEXTMEMcc0c = 99;
            goto LAB_CODE_2f76;
          }
        } while ((DAT_EXTMEM_cc07 & 1) == 0);
        DAT_EXTMEM_cc00 = 1;
        BANK0_R2 = bVar2;
        FUN_CODE_11d7(DAT_EXTMEM_cc07);
        BANK0_R3 = BANK0_R3 & 0xfe;
        DAT_EXTMEM_c200 = DAT_EXTMEM_c200 & 0xf1 | 3;
        DAT_EXTMEM_d67e = 0;
        DAT_EXTMEM_d67f = 0;
      } while( true );
    }
    if (BANK1_R5 != '\0') goto LAB_CODE_3b47;
    if (BANK1_R6 != '\0') goto LAB_CODE_3be5;
    param_1 = 0;
    bVar4 = bCODE0048;
    if ((bCODE0048 >> 2 & 1) != 0) {
      param_1 = 0;
      if ((bCODE0048 >> 5 & 1) != 0) {
        DAT_INTMEM_7d = DAT_EXTMEM_0120;
        DAT_INTMEM_7a = BANK1_R1;
        DAT_INTMEM_7b = BANK1_R2;
        DAT_INTMEM_7c = BANK2_R4;
        param_1 = 0x10c;
        FUN_CODE_11f9(0x10c);
      }
      BANK0_R2 = bVar2;
      FUN_CODE_0326();
    }
    uVar5 = (undefined1)(param_1 >> 8);
    BANK0_R3 = DAT_INTMEM_81 & BANK3_R4;
    BANK0_R2 = bVar2;
    if (((bVar4 != BANK3_R4) || (BANK0_R3 = DAT_INTMEM_82 & BANK3_R5, bVar4 != BANK3_R5)) ||
       (BANK2_R3 == '\0')) goto LAB_CODE_3be5;
    param_3 = BANK2_R7 & 0xc0;
    if (param_3 == 0xc0) {
      DAT_INTMEM_7a = BANK1_R1;
      DAT_INTMEM_7b = BANK1_R2;
      DAT_INTMEM_7c = BANK2_R4;
      DAT_INTMEM_7d = BANK2_R7;
      param_1 = CONCAT11(uVar5,4);
      FUN_CODE_11f9(param_1);
      BANK0_R2 = bVar2;
      goto LAB_CODE_3479;
    }
  }
  if ((BANK1_R0 == 0) && (uVar5 = 0xd2, param_3 = DAT_EXTMEM_d25c, (DAT_EXTMEM_d25c & 0xf) == 0)) {
    param_1 = 0xcc21;
    uEXTMEMcc21 = 1;
    BANK0_R2 = bVar2;
  }
  else {
    DAT_INTMEM_7a = BANK1_R1;
    DAT_INTMEM_7b = BANK1_R2;
    DAT_INTMEM_7c = BANK2_R4;
    DAT_INTMEM_7d = 0;
    param_1 = CONCAT11(uVar5,0xd);
    BANK0_R2 = bVar2;
    FUN_CODE_11f9(param_1);
    BANK0_R2 = bVar2;
  }
  goto LAB_CODE_3479;
LAB_CODE_2f76:
  DAT_INTMEM_30 = 0xf;
  DAT_INTMEM_31 = 0;
  DAT_INTMEM_32 = 0x40;
  DAT_INTMEM_33 = 0x10;
  DAT_INTMEM_34 = 0;
  DAT_INTMEM_35 = 0x40;
  DAT_INTMEM_2a = 0;
  DAT_INTMEM_2b = 0;
  DAT_INTMEM_2c = 0;
  DAT_INTMEM_2d = 0;
  DAT_INTMEM_2e = 0xc;
  DAT_INTMEM_2f = 0;
  BANK0_R2 = bVar2;
  FUN_CODE_1aa9(CONCAT11(uVar5,9));
  BANK0_R2 = bVar2;
  bVar2 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
  cEXTMEM4fef = 0x11 < bVar2;
  param_4 = BANK2_R2;
  bVar2 = FUN_CODE_3ed5(CONCAT11(BANK2_R1 - (((0xfd < BANK2_R0) << 7) >> 7),BANK2_R0 + 2),BANK2_R2);
  DAT_EXTMEM_4fae = bVar2 & 0x40;
  if (BANK1_R0 == 0) {
    uEXTMEMd257 = 0x11;
    BANK0_R3 = 0;
    cVar3 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
    if ((cVar3 != '\x10') && (cVar3 != '\x11')) {
      if (cVar3 == '\x12') {
        BANK0_R3 = BANK0_R3 | 0x10;
      }
      else {
        BANK0_R3 = BANK0_R3 | 0x10;
      }
    }
    if ((bEXTMEMc80a & 0xf) == 0) {
      cVar3 = FUN_CODE_3ed5(CONCAT11(BANK2_R1 - (((0xfe < BANK2_R0) << 7) >> 7),BANK2_R0 + 1),
                            BANK2_R2);
      if (cVar3 != '\x06') {
        if (cVar3 == '\n') {
          BANK0_R3 = BANK0_R3 | 1;
        }
        else if (cVar3 == '\x14') {
          BANK0_R3 = BANK0_R3 | 2;
        }
        else {
          BANK0_R3 = BANK0_R3 | 2;
        }
      }
    }
    else {
      BANK0_R3 = BANK0_R3 & 0xf;
      if (bEXTMEMc80a != 1) {
        if (bEXTMEMc80a == 2) {
          BANK0_R3 = BANK0_R3 | 1;
        }
        else if (bEXTMEMc80a == 3) {
          BANK0_R3 = BANK0_R3 | 2;
        }
        else {
          BANK0_R3 = BANK0_R3 | 2;
        }
      }
    }
    if ((bEXTMEMc80a & 0xf0) == 0) {
      cVar3 = FUN_CODE_3ed5(CONCAT11(BANK2_R1 - (((0xfd < BANK2_R0) << 7) >> 7),BANK2_R0 + 2),
                            BANK2_R2);
      BANK0_R3 = BANK0_R3 & 0x1f;
      if (cVar3 != '\x01') {
        if (cVar3 == '\x02') {
          BANK0_R3 = BANK0_R3 | 0x10;
        }
        else if (cVar3 == '\x04') {
          BANK0_R3 = BANK0_R3 | 0x20;
        }
        else {
          BANK0_R3 = BANK0_R3 | 0x20;
        }
      }
    }
    else {
      BANK0_R3 = BANK0_R3 & 0xf0;
      if (bEXTMEMc80a != 0x10) {
        if (bEXTMEMc80a == 0x20) {
          BANK0_R3 = BANK0_R3 | 0x10;
        }
        else if (bEXTMEMc80a == 0x40) {
          BANK0_R3 = BANK0_R3 | 0x20;
        }
        else {
          BANK0_R3 = BANK0_R3 | 0x20;
        }
      }
    }
    param_4 = BANK2_R1 - (((0xfd < BANK2_R0) << 7) >> 7);
    bVar2 = FUN_CODE_3ed5(CONCAT11(param_4,BANK2_R0 + 2),BANK2_R2);
    BANK0_R3 = BANK0_R3 & 0xfe | bVar2 & 0xc0;
  }
  bVar2 = BANK0_R2;
  if ((bCODE0048 >> 2 & 1) != 0) {
    DAT_INTMEM_30 = 0xf;
    DAT_INTMEM_31 = 0;
    DAT_INTMEM_32 = 0x40;
    DAT_INTMEM_33 = 0x10;
    DAT_INTMEM_34 = 0;
    DAT_INTMEM_35 = 0x40;
    DAT_INTMEM_2a = 0;
    DAT_INTMEM_2b = 2;
    DAT_INTMEM_2c = 0;
    DAT_INTMEM_2d = 0;
    DAT_INTMEM_2e = 1;
    DAT_INTMEM_2f = 0;
    FUN_CODE_1aa9(9,bCODE0048);
    param_4 = BANK2_R2;
    bVar4 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
    DAT_EXTMEM_0120 = bVar4 & 0x1f;
    FUN_CODE_0326();
  }
  BANK0_R2 = bVar2;
  if (cEXTMEM4fef != '\0') {
    DAT_INTMEM_30 = 0xf;
    DAT_INTMEM_31 = 0;
    DAT_INTMEM_32 = 0x40;
    DAT_INTMEM_33 = 0x10;
    DAT_INTMEM_34 = 0;
    DAT_INTMEM_35 = 0x40;
    DAT_INTMEM_2a = 0xe;
    DAT_INTMEM_2b = 0;
    DAT_INTMEM_2c = 0;
    DAT_INTMEM_2d = 0;
    DAT_INTMEM_2e = 1;
    DAT_INTMEM_2f = 0;
    FUN_CODE_1aa9(0x4f09,cEXTMEM4fef);
    param_4 = BANK2_R2;
    if ((bEXTMEMc809 & 1) == 1) {
      BANK0_R2 = bVar2;
      cVar3 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
      BANK0_R3 = BANK0_R3 & 0x7f;
      if (BANK0_R3 < 5) {
                    /* WARNING: Could not recover jumptable at 0x32a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ushort)(byte)(cVar3 * '\x03') + 0x32aa))();
        return;
      }
    }
    else {
      BANK0_R2 = bVar2;
      cVar3 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
      BANK0_R3 = BANK0_R3 & 0x7f;
      if (BANK0_R3 < 5) {
                    /* WARNING: Could not recover jumptable at 0x3333. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ushort)(byte)(cVar3 * '\x03') + 0x3334))();
        return;
      }
    }
  }
LAB_CODE_33b1:
  bVar2 = BANK0_R2;
  uEXTMEM4fd9 = 1;
  DAT_EXTMEM_4fd8 = 4;
  BANK0_R3 = BANK0_R3 & 0xfe;
  param_1 = 0x4fef;
  if (cEXTMEM4fef == '\0') {
    param_3 = 0;
  }
  else {
    DAT_INTMEM_30 = 0xf;
    DAT_INTMEM_31 = 0;
    DAT_INTMEM_32 = 0x40;
    DAT_INTMEM_33 = 0x10;
    DAT_INTMEM_34 = 0;
    DAT_INTMEM_35 = 0x40;
    DAT_INTMEM_2a = 0x21;
    DAT_INTMEM_2b = 0;
    DAT_INTMEM_2c = 0;
    DAT_INTMEM_2d = 0;
    DAT_INTMEM_2e = 1;
    DAT_INTMEM_2f = 0;
    FUN_CODE_1aa9(0x4f09);
    param_1 = CONCAT11(BANK2_R1,BANK2_R0);
    param_4 = BANK2_R2;
    BANK0_R2 = bVar2;
    param_3 = FUN_CODE_3ed5(param_1,BANK2_R2);
    bVar2 = BANK0_R2;
    BANK0_R2 = bVar2;
    if ((param_3 & 1) != 0) {
      DAT_EXTMEM_4fe7 = 0;
      uINTMEMd4 = 0;
      DAT_INTMEM_2f = 0xd4;
      DAT_INTMEM_30 = 0xf;
      DAT_INTMEM_31 = 0;
      DAT_INTMEM_32 = 0x40;
      DAT_INTMEM_33 = 0x10;
      DAT_INTMEM_34 = 0;
      DAT_INTMEM_35 = 0x40;
      DAT_INTMEM_2a = 0x11;
      DAT_INTMEM_2b = 1;
      DAT_INTMEM_2c = 0;
      DAT_INTMEM_2d = 0;
      DAT_INTMEM_2e = 1;
      uVar5 = 0x4f;
      FUN_CODE_1aa9(0x4f08);
      uINTMEMd5 = 0;
      uINTMEMd6 = 0;
      uINTMEMd7 = 0x3f;
      DAT_INTMEM_2f = 0xd5;
      DAT_INTMEM_30 = 0xf;
      DAT_INTMEM_31 = 0;
      DAT_INTMEM_32 = 0x40;
      DAT_INTMEM_33 = 0x10;
      DAT_INTMEM_34 = 0;
      DAT_INTMEM_35 = 0x40;
      DAT_INTMEM_2a = 0xc0;
      DAT_INTMEM_2b = 1;
      DAT_INTMEM_2c = 0;
      DAT_INTMEM_2d = 0;
      DAT_INTMEM_2e = 3;
      param_1 = CONCAT11(uVar5,8);
      FUN_CODE_1aa9(param_1);
      BANK0_R2 = bVar2;
    }
  }
  if (BANK1_R5 == '\0') goto LAB_CODE_3479;
  goto LAB_CODE_3b47;
}



/* =========================================================
 * CODE:353e  thunk_FUN_CODE_3958  size=3
 * ========================================================= */

void thunk_FUN_CODE_3958(ushort param_1,char param_2,byte param_3,char param_4)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  undefined1 uVar5;
  ushort uVar6;
  undefined2 uVar7;
  
LAB_CODE_3479:
  do {
    while (bVar2 = BANK0_R2, BANK2_R6 != '\0') {
LAB_CODE_34eb:
      uVar5 = BANK0_R4;
      BANK2_R6 = '\0';
      DAT_INTMEM_77 = param_3 & 7;
      bVar4 = bINTMEM7e & 0x60;
      DAT_INTMEM_76 = bINTMEM80;
      DAT_INTMEM_7a = 0x20;
      DAT_INTMEM_7b = 0x19;
      param_1 = param_1 & 0xff00;
      BANK0_R2 = bVar2;
      BANK0_R3 = bVar4;
      FUN_CODE_0270(param_1,param_3 & 0x18);
      BANK0_R5 = bINTMEM7f & 0xf;
      BANK0_R2 = bVar2;
      BANK0_R3 = bVar4;
      BANK0_R4 = uVar5;
      if (BANK0_R5 < 0x10) {
                    /* WARNING: Could not recover jumptable at 0x3531. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ushort)(byte)(param_4 * '\x03') + 0x3532))();
        return;
      }
    }
    DAT_INTMEM_7a = 0x20;
    DAT_INTMEM_7b = 6;
    FUN_CODE_0270(0);
    uEXTMEMcc2d = 0xfe;
    do {
      BANK3_R7 = 0xec;
      DAT_INTMEM_20 = 0x4f;
      DAT_INTMEM_21 = 0;
      DAT_INTMEM_22 = 0x72;
      DAT_INTMEM_23 = 0;
      DAT_INTMEM_24 = 0x40;
      DAT_INTMEM_25 = 0x73;
      DAT_INTMEM_26 = 0;
      DAT_INTMEM_27 = 0x40;
      BANK3_R6 = 0;
      param_3 = 0x26;
      BANK0_R2 = bVar2;
      FUN_CODE_17f4();
      param_1 = 0x4fea;
      DAT_EXTMEM_4fea = param_3;
      if (param_3 == 0) {
        BANK0_R2 = bVar2;
        if (BANK1_R5 != '\0') goto LAB_CODE_3b47;
        if (BANK1_R6 == '\0') goto LAB_CODE_34eb;
        break;
      }
      param_1 = 0x4fea;
      BANK0_R2 = bVar2;
      if (param_3 == 1) goto LAB_CODE_2a74;
      if (BANK1_R5 != '\0') goto LAB_CODE_3b47;
    } while (BANK1_R6 == '\0');
LAB_CODE_3be5:
    bVar2 = BANK0_R2;
    DAT_INTMEM_7a = 1;
    DAT_INTMEM_7b = 0xc;
    FUN_CODE_0270(param_1 & 0xff00);
    BANK0_R3 = BANK0_R3 & 0xfc;
    uVar5 = 0x4f;
    bVar4 = DAT_EXTMEM_4fbf;
    if ((DAT_EXTMEM_4fbf == 1) && (uVar5 = 0, bVar4 = bCODE0049, (bCODE0049 >> 1 & 1) != 0)) {
      BANK0_R3 = BANK0_R3 | 1;
      DAT_EXTMEM_d67e = 0;
      uVar5 = 0xd6;
      DAT_EXTMEM_d67f = 0;
      bVar4 = DAT_EXTMEM_d77f;
    }
    BANK0_R2 = bVar2;
    if (BANK1_R6 != '\0') {
      DAT_INTMEM_30 = 0xf;
      DAT_INTMEM_31 = 0;
      DAT_INTMEM_32 = 0x40;
      DAT_INTMEM_33 = 0x10;
      DAT_INTMEM_34 = 0;
      DAT_INTMEM_35 = 0x40;
      DAT_INTMEM_2a = 0x21;
      DAT_INTMEM_2b = 0;
      DAT_INTMEM_2c = 0;
      DAT_INTMEM_2d = 0;
      DAT_INTMEM_2e = 1;
      DAT_INTMEM_2f = 0;
      FUN_CODE_1aa9(CONCAT11(uVar5,9),bVar4);
      param_4 = BANK2_R2;
      BANK0_R2 = bVar2;
      bVar4 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
      bVar2 = BANK0_R2;
      BANK0_R2 = bVar2;
      if ((bVar4 & 1) != 0) {
        DAT_EXTMEM_4fe7 = 0;
        uINTMEMd4 = 0;
        DAT_INTMEM_2f = 0xd4;
        DAT_INTMEM_30 = 0xf;
        DAT_INTMEM_31 = 0;
        DAT_INTMEM_32 = 0x40;
        DAT_INTMEM_33 = 0x10;
        DAT_INTMEM_34 = 0;
        DAT_INTMEM_35 = 0x40;
        DAT_INTMEM_2a = 0x11;
        DAT_INTMEM_2b = 1;
        DAT_INTMEM_2c = 0;
        DAT_INTMEM_2d = 0;
        DAT_INTMEM_2e = 1;
        uVar5 = 0x4f;
        FUN_CODE_1aa9(0x4f08,bVar4);
        uINTMEMd5 = 0;
        uINTMEMd6 = 0;
        uINTMEMd7 = 0x3f;
        DAT_INTMEM_2f = 0xd5;
        DAT_INTMEM_30 = 0xf;
        DAT_INTMEM_31 = 0;
        DAT_INTMEM_32 = 0x40;
        DAT_INTMEM_33 = 0x10;
        DAT_INTMEM_34 = 0;
        DAT_INTMEM_35 = 0x40;
        DAT_INTMEM_2a = 0xc0;
        DAT_INTMEM_2b = 1;
        DAT_INTMEM_2c = 0;
        DAT_INTMEM_2d = 0;
        DAT_INTMEM_2e = 3;
        FUN_CODE_1aa9(CONCAT11(uVar5,8));
        BANK0_R2 = bVar2;
      }
    }
    BANK1_R6 = '\0';
    uEXTMEM4fe6 = 0;
    DAT_EXTMEM_cc00 = 1;
    DAT_EXTMEM_c200 = DAT_EXTMEM_c200 & 0xf1 | 3;
    if ((bCODE0048 >> 1 & 1) == 1) {
      param_3 = bEXTMEM4feb != 1;
      bVar1 = DAT_EXTMEM_4fbf != 1;
      if (bVar1 && (bool)param_3) {
        DAT_INTMEM_7a = BANK1_R1;
        DAT_INTMEM_7b = BANK1_R2;
        DAT_INTMEM_7c = BANK2_R4;
        DAT_INTMEM_7d = BANK2_R7;
        param_1 = 0x4f03;
        FUN_CODE_11f9(0x4f03);
      }
      else {
        DAT_EXTMEM_4fbf = 0;
        if ((BANK2_R5 != '\0') ||
           (param_1 = 0x4fe4, param_3 = DAT_EXTMEM_4fe4, DAT_EXTMEM_4fe4 != 0)) {
          do {
            bVar2 = DAT_EXTMEM_ca40;
            if ((DAT_EXTMEM_ca40 >> 1 & 1) == 1) break;
            bVar2 = bEXTMEMcb40;
          } while ((bEXTMEMcb40 & 6) != 0);
          uEXTMEMca0c = 1;
          DAT_INTMEM_30 = 0xf;
          DAT_INTMEM_31 = 0;
          DAT_INTMEM_32 = 0x40;
          DAT_INTMEM_33 = 0x10;
          DAT_INTMEM_34 = 0;
          DAT_INTMEM_35 = 0x40;
          DAT_INTMEM_2a = 2;
          DAT_INTMEM_2b = 1;
          DAT_INTMEM_2c = 0;
          DAT_INTMEM_2d = 0;
          DAT_INTMEM_2e = 1;
          DAT_INTMEM_2f = 0x8f;
          FUN_CODE_1aa9(0xca08,bVar2,bVar1);
          uEXTMEMce51 = 0x10;
          FUN_CODE_11d7();
          BANK0_R3 = BANK0_R3 & 0xfe;
          BANK2_R5 = '\0';
          param_1 = 0x4fe4;
          DAT_EXTMEM_4fe4 = 0;
          param_3 = DAT_EXTMEM_d76d;
        }
      }
    }
    else if (param_2 == '\0') {
      if ((BANK2_R5 != '\0') || (param_1 = 0x4fe4, param_3 = DAT_EXTMEM_4fe4, DAT_EXTMEM_4fe4 != 0))
      {
        do {
          bVar2 = DAT_EXTMEM_ca40;
          if ((DAT_EXTMEM_ca40 >> 1 & 1) == 1) break;
          bVar2 = bEXTMEMcb40;
        } while ((bEXTMEMcb40 & 6) != 0);
        uEXTMEMca0c = 1;
        DAT_INTMEM_30 = 0xf;
        DAT_INTMEM_31 = 0;
        DAT_INTMEM_32 = 0x40;
        DAT_INTMEM_33 = 0x10;
        DAT_INTMEM_34 = 0;
        DAT_INTMEM_35 = 0x40;
        DAT_INTMEM_2a = 2;
        DAT_INTMEM_2b = 1;
        DAT_INTMEM_2c = 0;
        DAT_INTMEM_2d = 0;
        DAT_INTMEM_2e = 1;
        DAT_INTMEM_2f = 0x8f;
        FUN_CODE_1aa9(0xca08,bVar2);
        uEXTMEMce51 = 0x10;
        FUN_CODE_11d7();
        BANK0_R3 = BANK0_R3 & 0xfe;
        BANK2_R5 = '\0';
        param_1 = 0x4fe4;
        DAT_EXTMEM_4fe4 = 0;
        param_3 = DAT_EXTMEM_d76d;
      }
    }
    else {
      while (bEXTMEM4fb1 != 0) {
        DAT_INTMEM_7a = 0x20;
        DAT_INTMEM_7b = 0x28;
        FUN_CODE_0270(0x4f00);
      }
      DAT_INTMEM_7a = BANK1_R1;
      DAT_INTMEM_7b = BANK1_R2;
      DAT_INTMEM_7c = BANK2_R4;
      DAT_INTMEM_7d = BANK2_R7;
      param_1 = 0x4f03;
      param_3 = bEXTMEM4fb1;
      FUN_CODE_11f9(0x4f03);
    }
    param_2 = '\0';
  } while( true );
LAB_CODE_3b47:
  bVar2 = BANK0_R2;
  DAT_INTMEM_7a = 0x20;
  DAT_INTMEM_7b = 0xb;
  param_1 = param_1 & 0xff00;
  FUN_CODE_0270(param_1);
  uVar5 = (undefined1)(param_1 >> 8);
  BANK1_R5 = '\0';
  if ((((BANK3_R0 == '\0') && (uVar5 = 0x4f, param_3 = bEXTMEM4feb, bEXTMEM4feb == 0)) &&
      (uVar5 = 0xcc, cEXTMEMcc8d == '\0')) && (param_2 != '\0')) {
    param_1 = 0xcc02;
    BANK0_R2 = bVar2;
    FUN_CODE_1f0b();
    param_3 = (byte)param_1;
    BANK0_R2 = bVar2;
    if (param_3 == 1) {
LAB_CODE_2a74:
      do {
        if ((bEXTMEMd66f >> 4 & 1) != 0) {
          uEXTMEMca10 = 3;
          uEXTMEMca15 = 0x20;
          uEXTMEMca14 = 7;
        }
        if ((bCODE0048 >> 4 & 1) != 0) {
          uEXTMEMd7fc = 1;
          uEXTMEMd7fa = 1;
          uEXTMEMd7f8 = 1;
          uEXTMEMd7f6 = 1;
        }
        do {
          BANK0_R2 = BANK0_R2 & 0xe;
        } while (bEXTMEMc800 == 0xe);
        BANK1_R0 = DAT_EXTMEM_c801 & 0x80;
        if (BANK1_R0 == 0) {
          BANK0_R2 = BANK0_R2 | 0x9b;
          uEXTMEMd21e = 0xff;
        }
        else {
          uEXTMEMcc8e = 0;
        }
        bVar2 = BANK0_R2;
        DAT_EXTMEM_4fe9 = 0;
        BANK1_R1 = 0;
        BANK1_R2 = 0;
        BANK2_R4 = 0;
        BANK1_R5 = '\0';
        BANK1_R6 = '\0';
        BANK2_R3 = '\0';
        BANK2_R7 = 0;
        DAT_EXTMEM_4fe4 = 0;
        BANK2_R5 = '\0';
        BANK2_R6 = '\0';
        BANK3_R0 = '\0';
        bEXTMEM4feb = 0;
        param_2 = '\0';
        uEXTMEM4fe5 = 0;
        uEXTMEM4fe6 = 0;
        DAT_EXTMEM_4fe7 = 0;
        DAT_EXTMEM_4fae = 0;
        uEXTMEMd766 = 8;
        uEXTMEMd600 = 0;
        uEXTMEMd680 = 0;
        uEXTMEMd700 = 0;
        uEXTMEMd780 = 0;
        if (cCODE004b < '\0') {
          uEXTMEMd677 = 0;
        }
        else {
          uEXTMEMd677 = 0xf;
        }
        if (BANK1_R0 == 0) {
          BANK0_R3 = BANK0_R3 & 0xfc | 4;
          uEXTMEMd254 = 0xff;
          uEXTMEMd255 = 0xff;
        }
        else if ((bEXTMEMc84b >> 3 & 1) == 1) {
          BANK0_R3 = BANK0_R3 | 4;
        }
        else {
          BANK0_R3 = BANK0_R3 & 0xfa;
        }
        uEXTMEMcc92 = 8;
        BANK3_R1 = uEXTMEMcc8e;
        uEXTMEMcc96 = 1;
        BANK0_R3 = BANK0_R3 & 0xfe;
        FUN_CODE_1da2(5);
        DAT_EXTMEM_4fea = DAT_EXTMEM_c801 & 0x3f;
        if (DAT_EXTMEM_4fea == 8) {
          for (bEXTMEM4ff0 = 0; bEXTMEM4ff0 < 2; bEXTMEM4ff0 = bEXTMEM4ff0 + 1) {
          }
          BANK0_R3 = BANK0_R3 & 0xfd;
          DAT_INTMEM_7a = 0x10;
          DAT_INTMEM_7b = 0x1c;
          BANK0_R2 = bVar2;
          FUN_CODE_0270(0xd600);
          do {
          } while ((bEXTMEMd67c >> 2 & 1) == 0);
        }
        while ((((DAT_EXTMEM_c848 >> 2 & 1) != 0 &&
                (uVar6 = 0xcc93, bVar4 = DAT_EXTMEM_c848, DAT_EXTMEM_cc93 == '\0')) ||
               (uVar6 = 0xc808, bVar4 = DAT_EXTMEM_c808, (DAT_EXTMEM_c808 & 1) != 0))) {
          DAT_INTMEM_7a = 0x20;
          DAT_INTMEM_7b = 0x20;
          BANK0_R2 = bVar2;
          FUN_CODE_0270(uVar6 & 0xff00,bVar4);
        }
        do {
        } while ((DAT_EXTMEM_cc07 & 1) == 1);
        do {
        } while ((bEXTMEMc82f & 1) == 0);
        BANK0_R3 = BANK0_R3 | 3;
        if ((bEXTMEMc800 >> 4 & 1) != 0) {
          BANK0_R2 = bVar2;
          FUN_CODE_1da2(0x1c2,bEXTMEMc800);
        }
        if ((bEXTMEMc800 & 1) == 1) {
          if (cEXTMEMd66e == '\x01') {
            bEXTMEMc890 = 1;
            uEXTMEMc891 = 0xc;
            uEXTMEMd449 = 2;
            uEXTMEMd766 = 0;
            DAT_EXTMEM_d672 = 0;
            BANK0_R3 = BANK0_R3 & 3;
          }
          else if (cEXTMEMd66e == '\x02') {
            DAT_EXTMEM_d672 = 0xf;
            BANK0_R3 = BANK0_R3 & 2;
          }
          else {
            DAT_EXTMEM_d672 = 0xf;
            BANK0_R3 = BANK0_R3 & 3;
          }
          BANK0_R2 = bVar2;
          for (bEXTMEM4ff0 = 0; bEXTMEM4ff0 < 4; bEXTMEM4ff0 = bEXTMEM4ff0 + 1) {
            DAT_INTMEM_7b = bEXTMEM4ff0;
            DAT_INTMEM_7a = 0;
            FUN_CODE_0e94(0x4f00);
          }
          uEXTMEMca5a = 0;
          BANK0_R3 = BANK0_R3 | 1;
          uEXTMEMd767 = 0x3f;
          BANK1_R1 = 4;
          do {
            if (bEXTMEMc890 != 0) {
              DAT_INTMEM_7a = 0x20;
              DAT_INTMEM_7b = 4;
              FUN_CODE_0270(0xc800);
              do {
              } while( true );
            }
            DAT_INTMEM_7a = 1;
            DAT_INTMEM_7b = 2;
            FUN_CODE_0270(0xc800);
            uEXTMEMd446 = 0xc4;
            uEXTMEMd447 = 0;
            uEXTMEMd453 = 0x3a;
            uEXTMEMd47d = 0x3a;
            uEXTMEMd454 = 0x54;
            uEXTMEMd47e = 0x54;
            FUN_CODE_0478();
            while (FUN_CODE_0aba(), (DAT_EXTMEM_c802 & 1) == 0) {
              if ((DAT_EXTMEM_cc07 & 1) != 0) {
                FUN_CODE_0e61(DAT_EXTMEM_cc07);
                goto LAB_CODE_2a74;
              }
            }
            FUN_CODE_0f3d(DAT_EXTMEM_c802);
            FUN_CODE_1010();
            FUN_CODE_1da2(0xf);
            BANK0_R3 = BANK0_R3 & 0xdd;
            DAT_EXTMEM_cc00 = 0;
            FUN_CODE_1043();
            uEXTMEMce51 = 0;
            DAT_INTMEM_7a = 1;
            DAT_INTMEM_7b = 3;
            bVar2 = FUN_CODE_0270(0xce00);
            while( true ) {
              FUN_CODE_0aba(bVar2);
              while (DAT_EXTMEM_cc93 == '\x01') {
                DAT_INTMEM_7a = 0x20;
                DAT_INTMEM_7b = 0x21;
                FUN_CODE_0270(0xcc00);
              }
              if (((((DAT_EXTMEM_c802 & 1) != 1) && ((bEXTMEMc890 & 1) == 0)) ||
                  (-1 < (char)DAT_EXTMEM_d77f)) && ((bEXTMEMc890 & 1) != 1)) break;
              DAT_EXTMEM_4fea = DAT_EXTMEM_cc07;
              if ((DAT_EXTMEM_cc07 & 1) != 0) {
                FUN_CODE_0e61(DAT_EXTMEM_cc07);
                goto LAB_CODE_2a74;
              }
              bVar2 = DAT_EXTMEM_cc07;
              if ((DAT_EXTMEM_cc07 >> 2 & 1) != 0) {
                bINTMEM7f = BANK0_R3;
                bINTMEM80 = BANK0_R3;
                bVar2 = bEXTMEMcc37;
              }
            }
            FUN_CODE_0e61(bEXTMEMc890);
          } while( true );
        }
        uEXTMEMca5a = 0;
        DAT_INTMEM_7a = 1;
        DAT_INTMEM_7b = 5;
        BANK0_R2 = bVar2;
        FUN_CODE_0270(0xca00,bEXTMEMc800);
        cEXTMEM4fef = '\0';
        uVar5 = 200;
        BANK0_R2 = bVar2;
        if (((DAT_EXTMEM_c848 >> 4 & 1) != 1) ||
           ((bVar4 = DAT_EXTMEM_c848, BANK1_R0 == 0 &&
            (uVar5 = 0xd2, bVar4 = DAT_EXTMEM_d252, (DAT_EXTMEM_d252 >> 5 & 1) != 0))))
        goto LAB_CODE_33b1;
        DAT_INTMEM_ee = 1;
        DAT_INTMEM_2f = 0xee;
        DAT_INTMEM_30 = 0xf;
        DAT_INTMEM_31 = 0;
        DAT_INTMEM_32 = 0x40;
        DAT_INTMEM_33 = 0x10;
        DAT_INTMEM_34 = 0;
        DAT_INTMEM_35 = 0x40;
        DAT_INTMEM_2a = 0;
        DAT_INTMEM_2b = 6;
        DAT_INTMEM_2c = 0;
        DAT_INTMEM_2d = 0;
        DAT_INTMEM_2e = 1;
        uVar7 = CONCAT11(uVar5,8);
        FUN_CODE_1aa9(uVar7,bVar4);
        uVar5 = (undefined1)((ushort)uVar7 >> 8);
        if (BANK1_R0 != 0) goto LAB_CODE_2f76;
        uEXTMEMcc0c = 199;
        uEXTMEMcc0b = 0;
        do {
          if (((cEXTMEMcc29 == '\0') && (99 < bEXTMEMcc0a)) || ((bEXTMEMcc90 & 1) == 1)) {
            uVar5 = 0xcc;
            uEXTMEMcc0c = 99;
            goto LAB_CODE_2f76;
          }
        } while ((DAT_EXTMEM_cc07 & 1) == 0);
        DAT_EXTMEM_cc00 = 1;
        BANK0_R2 = bVar2;
        FUN_CODE_11d7(DAT_EXTMEM_cc07);
        BANK0_R3 = BANK0_R3 & 0xfe;
        DAT_EXTMEM_c200 = DAT_EXTMEM_c200 & 0xf1 | 3;
        DAT_EXTMEM_d67e = 0;
        DAT_EXTMEM_d67f = 0;
      } while( true );
    }
    if (BANK1_R5 != '\0') goto LAB_CODE_3b47;
    if (BANK1_R6 != '\0') goto LAB_CODE_3be5;
    param_1 = 0;
    bVar4 = bCODE0048;
    if ((bCODE0048 >> 2 & 1) != 0) {
      param_1 = 0;
      if ((bCODE0048 >> 5 & 1) != 0) {
        DAT_INTMEM_7d = DAT_EXTMEM_0120;
        DAT_INTMEM_7a = BANK1_R1;
        DAT_INTMEM_7b = BANK1_R2;
        DAT_INTMEM_7c = BANK2_R4;
        param_1 = 0x10c;
        FUN_CODE_11f9(0x10c);
      }
      BANK0_R2 = bVar2;
      FUN_CODE_0326();
    }
    uVar5 = (undefined1)(param_1 >> 8);
    BANK0_R3 = DAT_INTMEM_81 & BANK3_R4;
    BANK0_R2 = bVar2;
    if (((bVar4 != BANK3_R4) || (BANK0_R3 = DAT_INTMEM_82 & BANK3_R5, bVar4 != BANK3_R5)) ||
       (BANK2_R3 == '\0')) goto LAB_CODE_3be5;
    param_3 = BANK2_R7 & 0xc0;
    if (param_3 == 0xc0) {
      DAT_INTMEM_7a = BANK1_R1;
      DAT_INTMEM_7b = BANK1_R2;
      DAT_INTMEM_7c = BANK2_R4;
      DAT_INTMEM_7d = BANK2_R7;
      param_1 = CONCAT11(uVar5,4);
      FUN_CODE_11f9(param_1);
      BANK0_R2 = bVar2;
      goto LAB_CODE_3479;
    }
  }
  if ((BANK1_R0 == 0) && (uVar5 = 0xd2, param_3 = DAT_EXTMEM_d25c, (DAT_EXTMEM_d25c & 0xf) == 0)) {
    param_1 = 0xcc21;
    uEXTMEMcc21 = 1;
    BANK0_R2 = bVar2;
  }
  else {
    DAT_INTMEM_7a = BANK1_R1;
    DAT_INTMEM_7b = BANK1_R2;
    DAT_INTMEM_7c = BANK2_R4;
    DAT_INTMEM_7d = 0;
    param_1 = CONCAT11(uVar5,0xd);
    BANK0_R2 = bVar2;
    FUN_CODE_11f9(param_1);
    BANK0_R2 = bVar2;
  }
  goto LAB_CODE_3479;
LAB_CODE_2f76:
  DAT_INTMEM_30 = 0xf;
  DAT_INTMEM_31 = 0;
  DAT_INTMEM_32 = 0x40;
  DAT_INTMEM_33 = 0x10;
  DAT_INTMEM_34 = 0;
  DAT_INTMEM_35 = 0x40;
  DAT_INTMEM_2a = 0;
  DAT_INTMEM_2b = 0;
  DAT_INTMEM_2c = 0;
  DAT_INTMEM_2d = 0;
  DAT_INTMEM_2e = 0xc;
  DAT_INTMEM_2f = 0;
  BANK0_R2 = bVar2;
  FUN_CODE_1aa9(CONCAT11(uVar5,9));
  BANK0_R2 = bVar2;
  bVar2 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
  cEXTMEM4fef = 0x11 < bVar2;
  param_4 = BANK2_R2;
  bVar2 = FUN_CODE_3ed5(CONCAT11(BANK2_R1 - (((0xfd < BANK2_R0) << 7) >> 7),BANK2_R0 + 2),BANK2_R2);
  DAT_EXTMEM_4fae = bVar2 & 0x40;
  if (BANK1_R0 == 0) {
    uEXTMEMd257 = 0x11;
    BANK0_R3 = 0;
    cVar3 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
    if ((cVar3 != '\x10') && (cVar3 != '\x11')) {
      if (cVar3 == '\x12') {
        BANK0_R3 = BANK0_R3 | 0x10;
      }
      else {
        BANK0_R3 = BANK0_R3 | 0x10;
      }
    }
    if ((bEXTMEMc80a & 0xf) == 0) {
      cVar3 = FUN_CODE_3ed5(CONCAT11(BANK2_R1 - (((0xfe < BANK2_R0) << 7) >> 7),BANK2_R0 + 1),
                            BANK2_R2);
      if (cVar3 != '\x06') {
        if (cVar3 == '\n') {
          BANK0_R3 = BANK0_R3 | 1;
        }
        else if (cVar3 == '\x14') {
          BANK0_R3 = BANK0_R3 | 2;
        }
        else {
          BANK0_R3 = BANK0_R3 | 2;
        }
      }
    }
    else {
      BANK0_R3 = BANK0_R3 & 0xf;
      if (bEXTMEMc80a != 1) {
        if (bEXTMEMc80a == 2) {
          BANK0_R3 = BANK0_R3 | 1;
        }
        else if (bEXTMEMc80a == 3) {
          BANK0_R3 = BANK0_R3 | 2;
        }
        else {
          BANK0_R3 = BANK0_R3 | 2;
        }
      }
    }
    if ((bEXTMEMc80a & 0xf0) == 0) {
      cVar3 = FUN_CODE_3ed5(CONCAT11(BANK2_R1 - (((0xfd < BANK2_R0) << 7) >> 7),BANK2_R0 + 2),
                            BANK2_R2);
      BANK0_R3 = BANK0_R3 & 0x1f;
      if (cVar3 != '\x01') {
        if (cVar3 == '\x02') {
          BANK0_R3 = BANK0_R3 | 0x10;
        }
        else if (cVar3 == '\x04') {
          BANK0_R3 = BANK0_R3 | 0x20;
        }
        else {
          BANK0_R3 = BANK0_R3 | 0x20;
        }
      }
    }
    else {
      BANK0_R3 = BANK0_R3 & 0xf0;
      if (bEXTMEMc80a != 0x10) {
        if (bEXTMEMc80a == 0x20) {
          BANK0_R3 = BANK0_R3 | 0x10;
        }
        else if (bEXTMEMc80a == 0x40) {
          BANK0_R3 = BANK0_R3 | 0x20;
        }
        else {
          BANK0_R3 = BANK0_R3 | 0x20;
        }
      }
    }
    param_4 = BANK2_R1 - (((0xfd < BANK2_R0) << 7) >> 7);
    bVar2 = FUN_CODE_3ed5(CONCAT11(param_4,BANK2_R0 + 2),BANK2_R2);
    BANK0_R3 = BANK0_R3 & 0xfe | bVar2 & 0xc0;
  }
  bVar2 = BANK0_R2;
  if ((bCODE0048 >> 2 & 1) != 0) {
    DAT_INTMEM_30 = 0xf;
    DAT_INTMEM_31 = 0;
    DAT_INTMEM_32 = 0x40;
    DAT_INTMEM_33 = 0x10;
    DAT_INTMEM_34 = 0;
    DAT_INTMEM_35 = 0x40;
    DAT_INTMEM_2a = 0;
    DAT_INTMEM_2b = 2;
    DAT_INTMEM_2c = 0;
    DAT_INTMEM_2d = 0;
    DAT_INTMEM_2e = 1;
    DAT_INTMEM_2f = 0;
    FUN_CODE_1aa9(9,bCODE0048);
    param_4 = BANK2_R2;
    bVar4 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
    DAT_EXTMEM_0120 = bVar4 & 0x1f;
    FUN_CODE_0326();
  }
  BANK0_R2 = bVar2;
  if (cEXTMEM4fef != '\0') {
    DAT_INTMEM_30 = 0xf;
    DAT_INTMEM_31 = 0;
    DAT_INTMEM_32 = 0x40;
    DAT_INTMEM_33 = 0x10;
    DAT_INTMEM_34 = 0;
    DAT_INTMEM_35 = 0x40;
    DAT_INTMEM_2a = 0xe;
    DAT_INTMEM_2b = 0;
    DAT_INTMEM_2c = 0;
    DAT_INTMEM_2d = 0;
    DAT_INTMEM_2e = 1;
    DAT_INTMEM_2f = 0;
    FUN_CODE_1aa9(0x4f09,cEXTMEM4fef);
    param_4 = BANK2_R2;
    if ((bEXTMEMc809 & 1) == 1) {
      BANK0_R2 = bVar2;
      cVar3 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
      BANK0_R3 = BANK0_R3 & 0x7f;
      if (BANK0_R3 < 5) {
                    /* WARNING: Could not recover jumptable at 0x32a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ushort)(byte)(cVar3 * '\x03') + 0x32aa))();
        return;
      }
    }
    else {
      BANK0_R2 = bVar2;
      cVar3 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
      BANK0_R3 = BANK0_R3 & 0x7f;
      if (BANK0_R3 < 5) {
                    /* WARNING: Could not recover jumptable at 0x3333. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ushort)(byte)(cVar3 * '\x03') + 0x3334))();
        return;
      }
    }
  }
LAB_CODE_33b1:
  bVar2 = BANK0_R2;
  uEXTMEM4fd9 = 1;
  DAT_EXTMEM_4fd8 = 4;
  BANK0_R3 = BANK0_R3 & 0xfe;
  param_1 = 0x4fef;
  if (cEXTMEM4fef == '\0') {
    param_3 = 0;
  }
  else {
    DAT_INTMEM_30 = 0xf;
    DAT_INTMEM_31 = 0;
    DAT_INTMEM_32 = 0x40;
    DAT_INTMEM_33 = 0x10;
    DAT_INTMEM_34 = 0;
    DAT_INTMEM_35 = 0x40;
    DAT_INTMEM_2a = 0x21;
    DAT_INTMEM_2b = 0;
    DAT_INTMEM_2c = 0;
    DAT_INTMEM_2d = 0;
    DAT_INTMEM_2e = 1;
    DAT_INTMEM_2f = 0;
    FUN_CODE_1aa9(0x4f09);
    param_1 = CONCAT11(BANK2_R1,BANK2_R0);
    param_4 = BANK2_R2;
    BANK0_R2 = bVar2;
    param_3 = FUN_CODE_3ed5(param_1,BANK2_R2);
    bVar2 = BANK0_R2;
    BANK0_R2 = bVar2;
    if ((param_3 & 1) != 0) {
      DAT_EXTMEM_4fe7 = 0;
      uINTMEMd4 = 0;
      DAT_INTMEM_2f = 0xd4;
      DAT_INTMEM_30 = 0xf;
      DAT_INTMEM_31 = 0;
      DAT_INTMEM_32 = 0x40;
      DAT_INTMEM_33 = 0x10;
      DAT_INTMEM_34 = 0;
      DAT_INTMEM_35 = 0x40;
      DAT_INTMEM_2a = 0x11;
      DAT_INTMEM_2b = 1;
      DAT_INTMEM_2c = 0;
      DAT_INTMEM_2d = 0;
      DAT_INTMEM_2e = 1;
      uVar5 = 0x4f;
      FUN_CODE_1aa9(0x4f08);
      uINTMEMd5 = 0;
      uINTMEMd6 = 0;
      uINTMEMd7 = 0x3f;
      DAT_INTMEM_2f = 0xd5;
      DAT_INTMEM_30 = 0xf;
      DAT_INTMEM_31 = 0;
      DAT_INTMEM_32 = 0x40;
      DAT_INTMEM_33 = 0x10;
      DAT_INTMEM_34 = 0;
      DAT_INTMEM_35 = 0x40;
      DAT_INTMEM_2a = 0xc0;
      DAT_INTMEM_2b = 1;
      DAT_INTMEM_2c = 0;
      DAT_INTMEM_2d = 0;
      DAT_INTMEM_2e = 3;
      param_1 = CONCAT11(uVar5,8);
      FUN_CODE_1aa9(param_1);
      BANK0_R2 = bVar2;
    }
  }
  if (BANK1_R5 == '\0') goto LAB_CODE_3479;
  goto LAB_CODE_3b47;
}



/* =========================================================
 * CODE:3541  thunk_FUN_CODE_3677  size=3
 * ========================================================= */

void thunk_FUN_CODE_3677(char param_1,byte param_2)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  ushort uVar8;
  
  bVar2 = BANK0_R2;
  DAT_EXTMEM_c600 = (DAT_INTMEM_76 >> 5 & 1) != 0;
  BANK0_R5 = BANK0_R5 & 1;
  uVar6 = 0xc6;
  cVar3 = DAT_EXTMEM_c600;
  if ((DAT_INTMEM_76 & 0xc) != 0) {
    cVar3 = DAT_EXTMEM_c872;
    if ((BANK2_R4 >> 5 & 1) == 0) {
      BANK0_R5 = 0;
      uVar6 = 200;
    }
    else {
      BANK0_R5 = 1;
      uVar6 = 200;
    }
  }
  uVar8 = CONCAT11(uVar6,DAT_INTMEM_76);
  FUN_CODE_1dc6(uVar8);
  DAT_INTMEM_7a = 0x20;
  DAT_INTMEM_7b = 0x18;
  uVar8 = uVar8 & 0xff00;
  FUN_CODE_0270(uVar8);
  DAT_INTMEM_2f = 0x76;
  DAT_INTMEM_30 = 0xf;
  DAT_INTMEM_31 = 0;
  DAT_INTMEM_32 = 0x40;
  DAT_INTMEM_33 = 0x10;
  DAT_INTMEM_34 = 0;
  DAT_INTMEM_35 = 0x40;
  DAT_INTMEM_2a = 2;
  DAT_INTMEM_2b = 1;
  DAT_INTMEM_2c = 0;
  DAT_INTMEM_2d = 0;
  DAT_INTMEM_2e = 1;
  uVar8 = CONCAT11((char)(uVar8 >> 8),8);
  FUN_CODE_1aa9(uVar8);
  BANK0_R2 = bVar2;
LAB_CODE_3479:
  do {
    while (bVar2 = BANK0_R2, BANK2_R6 != '\0') {
LAB_CODE_34eb:
      uVar6 = BANK0_R4;
      BANK2_R6 = '\0';
      DAT_INTMEM_77 = param_2 & 7;
      bVar5 = bINTMEM7e & 0x60;
      DAT_INTMEM_76 = bINTMEM80;
      DAT_INTMEM_7a = 0x20;
      DAT_INTMEM_7b = 0x19;
      uVar8 = uVar8 & 0xff00;
      BANK0_R2 = bVar2;
      BANK0_R3 = bVar5;
      FUN_CODE_0270(uVar8,param_2 & 0x18);
      BANK0_R5 = bINTMEM7f & 0xf;
      BANK0_R2 = bVar2;
      BANK0_R3 = bVar5;
      BANK0_R4 = uVar6;
      if (BANK0_R5 < 0x10) {
                    /* WARNING: Could not recover jumptable at 0x3531. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ushort)(byte)(cVar3 * '\x03') + 0x3532))();
        return;
      }
    }
    DAT_INTMEM_7a = 0x20;
    DAT_INTMEM_7b = 6;
    FUN_CODE_0270(uVar8 & 0xff00);
    uEXTMEMcc2d = 0xfe;
    do {
      BANK3_R7 = 0xec;
      DAT_INTMEM_20 = 0x4f;
      DAT_INTMEM_21 = 0;
      DAT_INTMEM_22 = 0x72;
      DAT_INTMEM_23 = 0;
      DAT_INTMEM_24 = 0x40;
      DAT_INTMEM_25 = 0x73;
      DAT_INTMEM_26 = 0;
      DAT_INTMEM_27 = 0x40;
      BANK3_R6 = 0;
      param_2 = 0x26;
      BANK0_R2 = bVar2;
      FUN_CODE_17f4();
      uVar8 = 0x4fea;
      DAT_EXTMEM_4fea = param_2;
      if (param_2 == 0) {
        BANK0_R2 = bVar2;
        if (BANK1_R5 != '\0') goto LAB_CODE_3b47;
        if (BANK1_R6 == '\0') goto LAB_CODE_34eb;
        break;
      }
      uVar8 = 0x4fea;
      BANK0_R2 = bVar2;
      if (param_2 == 1) goto LAB_CODE_2a74;
      if (BANK1_R5 != '\0') goto LAB_CODE_3b47;
    } while (BANK1_R6 == '\0');
LAB_CODE_3be5:
    bVar2 = BANK0_R2;
    DAT_INTMEM_7a = 1;
    DAT_INTMEM_7b = 0xc;
    FUN_CODE_0270(uVar8 & 0xff00);
    BANK0_R3 = BANK0_R3 & 0xfc;
    uVar6 = 0x4f;
    bVar5 = DAT_EXTMEM_4fbf;
    if ((DAT_EXTMEM_4fbf == 1) && (uVar6 = 0, bVar5 = bCODE0049, (bCODE0049 >> 1 & 1) != 0)) {
      BANK0_R3 = BANK0_R3 | 1;
      DAT_EXTMEM_d67e = 0;
      uVar6 = 0xd6;
      DAT_EXTMEM_d67f = 0;
      bVar5 = DAT_EXTMEM_d77f;
    }
    BANK0_R2 = bVar2;
    if (BANK1_R6 != '\0') {
      DAT_INTMEM_30 = 0xf;
      DAT_INTMEM_31 = 0;
      DAT_INTMEM_32 = 0x40;
      DAT_INTMEM_33 = 0x10;
      DAT_INTMEM_34 = 0;
      DAT_INTMEM_35 = 0x40;
      DAT_INTMEM_2a = 0x21;
      DAT_INTMEM_2b = 0;
      DAT_INTMEM_2c = 0;
      DAT_INTMEM_2d = 0;
      DAT_INTMEM_2e = 1;
      DAT_INTMEM_2f = 0;
      FUN_CODE_1aa9(CONCAT11(uVar6,9),bVar5);
      cVar3 = BANK2_R2;
      BANK0_R2 = bVar2;
      bVar5 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
      bVar2 = BANK0_R2;
      BANK0_R2 = bVar2;
      if ((bVar5 & 1) != 0) {
        DAT_EXTMEM_4fe7 = 0;
        uINTMEMd4 = 0;
        DAT_INTMEM_2f = 0xd4;
        DAT_INTMEM_30 = 0xf;
        DAT_INTMEM_31 = 0;
        DAT_INTMEM_32 = 0x40;
        DAT_INTMEM_33 = 0x10;
        DAT_INTMEM_34 = 0;
        DAT_INTMEM_35 = 0x40;
        DAT_INTMEM_2a = 0x11;
        DAT_INTMEM_2b = 1;
        DAT_INTMEM_2c = 0;
        DAT_INTMEM_2d = 0;
        DAT_INTMEM_2e = 1;
        uVar6 = 0x4f;
        FUN_CODE_1aa9(0x4f08,bVar5);
        uINTMEMd5 = 0;
        uINTMEMd6 = 0;
        uINTMEMd7 = 0x3f;
        DAT_INTMEM_2f = 0xd5;
        DAT_INTMEM_30 = 0xf;
        DAT_INTMEM_31 = 0;
        DAT_INTMEM_32 = 0x40;
        DAT_INTMEM_33 = 0x10;
        DAT_INTMEM_34 = 0;
        DAT_INTMEM_35 = 0x40;
        DAT_INTMEM_2a = 0xc0;
        DAT_INTMEM_2b = 1;
        DAT_INTMEM_2c = 0;
        DAT_INTMEM_2d = 0;
        DAT_INTMEM_2e = 3;
        FUN_CODE_1aa9(CONCAT11(uVar6,8));
        BANK0_R2 = bVar2;
      }
    }
    BANK1_R6 = '\0';
    uEXTMEM4fe6 = 0;
    DAT_EXTMEM_cc00 = 1;
    DAT_EXTMEM_c200 = DAT_EXTMEM_c200 & 0xf1 | 3;
    if ((bCODE0048 >> 1 & 1) == 1) {
      param_2 = bEXTMEM4feb != 1;
      bVar1 = DAT_EXTMEM_4fbf != 1;
      if (bVar1 && (bool)param_2) {
        DAT_INTMEM_7a = BANK1_R1;
        DAT_INTMEM_7b = BANK1_R2;
        DAT_INTMEM_7c = BANK2_R4;
        DAT_INTMEM_7d = BANK2_R7;
        uVar8 = 0x4f03;
        FUN_CODE_11f9(0x4f03);
      }
      else {
        DAT_EXTMEM_4fbf = 0;
        if ((BANK2_R5 != '\0') || (uVar8 = 0x4fe4, param_2 = DAT_EXTMEM_4fe4, DAT_EXTMEM_4fe4 != 0))
        {
          do {
            bVar2 = DAT_EXTMEM_ca40;
            if ((DAT_EXTMEM_ca40 >> 1 & 1) == 1) break;
            bVar2 = bEXTMEMcb40;
          } while ((bEXTMEMcb40 & 6) != 0);
          uEXTMEMca0c = 1;
          DAT_INTMEM_30 = 0xf;
          DAT_INTMEM_31 = 0;
          DAT_INTMEM_32 = 0x40;
          DAT_INTMEM_33 = 0x10;
          DAT_INTMEM_34 = 0;
          DAT_INTMEM_35 = 0x40;
          DAT_INTMEM_2a = 2;
          DAT_INTMEM_2b = 1;
          DAT_INTMEM_2c = 0;
          DAT_INTMEM_2d = 0;
          DAT_INTMEM_2e = 1;
          DAT_INTMEM_2f = 0x8f;
          FUN_CODE_1aa9(0xca08,bVar2,bVar1);
          uEXTMEMce51 = 0x10;
          FUN_CODE_11d7();
          BANK0_R3 = BANK0_R3 & 0xfe;
          BANK2_R5 = '\0';
          uVar8 = 0x4fe4;
          DAT_EXTMEM_4fe4 = 0;
          param_2 = DAT_EXTMEM_d76d;
        }
      }
    }
    else if (param_1 == '\0') {
      if ((BANK2_R5 != '\0') || (uVar8 = 0x4fe4, param_2 = DAT_EXTMEM_4fe4, DAT_EXTMEM_4fe4 != 0)) {
        do {
          bVar2 = DAT_EXTMEM_ca40;
          if ((DAT_EXTMEM_ca40 >> 1 & 1) == 1) break;
          bVar2 = bEXTMEMcb40;
        } while ((bEXTMEMcb40 & 6) != 0);
        uEXTMEMca0c = 1;
        DAT_INTMEM_30 = 0xf;
        DAT_INTMEM_31 = 0;
        DAT_INTMEM_32 = 0x40;
        DAT_INTMEM_33 = 0x10;
        DAT_INTMEM_34 = 0;
        DAT_INTMEM_35 = 0x40;
        DAT_INTMEM_2a = 2;
        DAT_INTMEM_2b = 1;
        DAT_INTMEM_2c = 0;
        DAT_INTMEM_2d = 0;
        DAT_INTMEM_2e = 1;
        DAT_INTMEM_2f = 0x8f;
        FUN_CODE_1aa9(0xca08,bVar2);
        uEXTMEMce51 = 0x10;
        FUN_CODE_11d7();
        BANK0_R3 = BANK0_R3 & 0xfe;
        BANK2_R5 = '\0';
        uVar8 = 0x4fe4;
        DAT_EXTMEM_4fe4 = 0;
        param_2 = DAT_EXTMEM_d76d;
      }
    }
    else {
      while (bEXTMEM4fb1 != 0) {
        DAT_INTMEM_7a = 0x20;
        DAT_INTMEM_7b = 0x28;
        FUN_CODE_0270(0x4f00);
      }
      DAT_INTMEM_7a = BANK1_R1;
      DAT_INTMEM_7b = BANK1_R2;
      DAT_INTMEM_7c = BANK2_R4;
      DAT_INTMEM_7d = BANK2_R7;
      uVar8 = 0x4f03;
      param_2 = bEXTMEM4fb1;
      FUN_CODE_11f9(0x4f03);
    }
    param_1 = '\0';
  } while( true );
LAB_CODE_3b47:
  bVar2 = BANK0_R2;
  DAT_INTMEM_7a = 0x20;
  DAT_INTMEM_7b = 0xb;
  uVar8 = uVar8 & 0xff00;
  FUN_CODE_0270(uVar8);
  uVar6 = (undefined1)(uVar8 >> 8);
  BANK1_R5 = '\0';
  if ((((BANK3_R0 == '\0') && (uVar6 = 0x4f, param_2 = bEXTMEM4feb, bEXTMEM4feb == 0)) &&
      (uVar6 = 0xcc, cEXTMEMcc8d == '\0')) && (param_1 != '\0')) {
    uVar8 = 0xcc02;
    BANK0_R2 = bVar2;
    FUN_CODE_1f0b();
    param_2 = (byte)uVar8;
    BANK0_R2 = bVar2;
    if (param_2 == 1) {
LAB_CODE_2a74:
      do {
        if ((bEXTMEMd66f >> 4 & 1) != 0) {
          uEXTMEMca10 = 3;
          uEXTMEMca15 = 0x20;
          uEXTMEMca14 = 7;
        }
        if ((bCODE0048 >> 4 & 1) != 0) {
          uEXTMEMd7fc = 1;
          uEXTMEMd7fa = 1;
          uEXTMEMd7f8 = 1;
          uEXTMEMd7f6 = 1;
        }
        do {
          BANK0_R2 = BANK0_R2 & 0xe;
        } while (bEXTMEMc800 == 0xe);
        BANK1_R0 = DAT_EXTMEM_c801 & 0x80;
        if (BANK1_R0 == 0) {
          BANK0_R2 = BANK0_R2 | 0x9b;
          uEXTMEMd21e = 0xff;
        }
        else {
          uEXTMEMcc8e = 0;
        }
        bVar2 = BANK0_R2;
        DAT_EXTMEM_4fe9 = 0;
        BANK1_R1 = 0;
        BANK1_R2 = 0;
        BANK2_R4 = 0;
        BANK1_R5 = '\0';
        BANK1_R6 = '\0';
        BANK2_R3 = '\0';
        BANK2_R7 = 0;
        DAT_EXTMEM_4fe4 = 0;
        BANK2_R5 = '\0';
        BANK2_R6 = '\0';
        BANK3_R0 = '\0';
        bEXTMEM4feb = 0;
        param_1 = '\0';
        uEXTMEM4fe5 = 0;
        uEXTMEM4fe6 = 0;
        DAT_EXTMEM_4fe7 = 0;
        DAT_EXTMEM_4fae = 0;
        uEXTMEMd766 = 8;
        uEXTMEMd600 = 0;
        uEXTMEMd680 = 0;
        uEXTMEMd700 = 0;
        uEXTMEMd780 = 0;
        if (cCODE004b < '\0') {
          uEXTMEMd677 = 0;
        }
        else {
          uEXTMEMd677 = 0xf;
        }
        if (BANK1_R0 == 0) {
          BANK0_R3 = BANK0_R3 & 0xfc | 4;
          uEXTMEMd254 = 0xff;
          uEXTMEMd255 = 0xff;
        }
        else if ((bEXTMEMc84b >> 3 & 1) == 1) {
          BANK0_R3 = BANK0_R3 | 4;
        }
        else {
          BANK0_R3 = BANK0_R3 & 0xfa;
        }
        uEXTMEMcc92 = 8;
        BANK3_R1 = uEXTMEMcc8e;
        uEXTMEMcc96 = 1;
        BANK0_R3 = BANK0_R3 & 0xfe;
        FUN_CODE_1da2(5);
        DAT_EXTMEM_4fea = DAT_EXTMEM_c801 & 0x3f;
        if (DAT_EXTMEM_4fea == 8) {
          for (bEXTMEM4ff0 = 0; bEXTMEM4ff0 < 2; bEXTMEM4ff0 = bEXTMEM4ff0 + 1) {
          }
          BANK0_R3 = BANK0_R3 & 0xfd;
          DAT_INTMEM_7a = 0x10;
          DAT_INTMEM_7b = 0x1c;
          BANK0_R2 = bVar2;
          FUN_CODE_0270(0xd600);
          do {
          } while ((bEXTMEMd67c >> 2 & 1) == 0);
        }
        while ((((DAT_EXTMEM_c848 >> 2 & 1) != 0 &&
                (uVar8 = 0xcc93, bVar5 = DAT_EXTMEM_c848, DAT_EXTMEM_cc93 == '\0')) ||
               (uVar8 = 0xc808, bVar5 = DAT_EXTMEM_c808, (DAT_EXTMEM_c808 & 1) != 0))) {
          DAT_INTMEM_7a = 0x20;
          DAT_INTMEM_7b = 0x20;
          BANK0_R2 = bVar2;
          FUN_CODE_0270(uVar8 & 0xff00,bVar5);
        }
        do {
        } while ((DAT_EXTMEM_cc07 & 1) == 1);
        do {
        } while ((bEXTMEMc82f & 1) == 0);
        BANK0_R3 = BANK0_R3 | 3;
        if ((bEXTMEMc800 >> 4 & 1) != 0) {
          BANK0_R2 = bVar2;
          FUN_CODE_1da2(0x1c2,bEXTMEMc800);
        }
        if ((bEXTMEMc800 & 1) == 1) {
          if (cEXTMEMd66e == '\x01') {
            bEXTMEMc890 = 1;
            uEXTMEMc891 = 0xc;
            uEXTMEMd449 = 2;
            uEXTMEMd766 = 0;
            DAT_EXTMEM_d672 = 0;
            BANK0_R3 = BANK0_R3 & 3;
          }
          else if (cEXTMEMd66e == '\x02') {
            DAT_EXTMEM_d672 = 0xf;
            BANK0_R3 = BANK0_R3 & 2;
          }
          else {
            DAT_EXTMEM_d672 = 0xf;
            BANK0_R3 = BANK0_R3 & 3;
          }
          BANK0_R2 = bVar2;
          for (bEXTMEM4ff0 = 0; bEXTMEM4ff0 < 4; bEXTMEM4ff0 = bEXTMEM4ff0 + 1) {
            DAT_INTMEM_7b = bEXTMEM4ff0;
            DAT_INTMEM_7a = 0;
            FUN_CODE_0e94(0x4f00);
          }
          uEXTMEMca5a = 0;
          BANK0_R3 = BANK0_R3 | 1;
          uEXTMEMd767 = 0x3f;
          BANK1_R1 = 4;
          do {
            if (bEXTMEMc890 != 0) {
              DAT_INTMEM_7a = 0x20;
              DAT_INTMEM_7b = 4;
              FUN_CODE_0270(0xc800);
              do {
              } while( true );
            }
            DAT_INTMEM_7a = 1;
            DAT_INTMEM_7b = 2;
            FUN_CODE_0270(0xc800);
            uEXTMEMd446 = 0xc4;
            uEXTMEMd447 = 0;
            uEXTMEMd453 = 0x3a;
            uEXTMEMd47d = 0x3a;
            uEXTMEMd454 = 0x54;
            uEXTMEMd47e = 0x54;
            FUN_CODE_0478();
            while (FUN_CODE_0aba(), (DAT_EXTMEM_c802 & 1) == 0) {
              if ((DAT_EXTMEM_cc07 & 1) != 0) {
                FUN_CODE_0e61(DAT_EXTMEM_cc07);
                goto LAB_CODE_2a74;
              }
            }
            FUN_CODE_0f3d(DAT_EXTMEM_c802);
            FUN_CODE_1010();
            FUN_CODE_1da2(0xf);
            BANK0_R3 = BANK0_R3 & 0xdd;
            DAT_EXTMEM_cc00 = 0;
            FUN_CODE_1043();
            uEXTMEMce51 = 0;
            DAT_INTMEM_7a = 1;
            DAT_INTMEM_7b = 3;
            bVar2 = FUN_CODE_0270(0xce00);
            while( true ) {
              FUN_CODE_0aba(bVar2);
              while (DAT_EXTMEM_cc93 == '\x01') {
                DAT_INTMEM_7a = 0x20;
                DAT_INTMEM_7b = 0x21;
                FUN_CODE_0270(0xcc00);
              }
              if (((((DAT_EXTMEM_c802 & 1) != 1) && ((bEXTMEMc890 & 1) == 0)) ||
                  (-1 < (char)DAT_EXTMEM_d77f)) && ((bEXTMEMc890 & 1) != 1)) break;
              DAT_EXTMEM_4fea = DAT_EXTMEM_cc07;
              if ((DAT_EXTMEM_cc07 & 1) != 0) {
                FUN_CODE_0e61(DAT_EXTMEM_cc07);
                goto LAB_CODE_2a74;
              }
              bVar2 = DAT_EXTMEM_cc07;
              if ((DAT_EXTMEM_cc07 >> 2 & 1) != 0) {
                bINTMEM7f = BANK0_R3;
                bINTMEM80 = BANK0_R3;
                bVar2 = bEXTMEMcc37;
              }
            }
            FUN_CODE_0e61(bEXTMEMc890);
          } while( true );
        }
        uEXTMEMca5a = 0;
        DAT_INTMEM_7a = 1;
        DAT_INTMEM_7b = 5;
        BANK0_R2 = bVar2;
        FUN_CODE_0270(0xca00,bEXTMEMc800);
        cEXTMEM4fef = '\0';
        uVar6 = 200;
        BANK0_R2 = bVar2;
        if (((DAT_EXTMEM_c848 >> 4 & 1) != 1) ||
           ((bVar5 = DAT_EXTMEM_c848, BANK1_R0 == 0 &&
            (uVar6 = 0xd2, bVar5 = DAT_EXTMEM_d252, (DAT_EXTMEM_d252 >> 5 & 1) != 0))))
        goto LAB_CODE_33b1;
        DAT_INTMEM_ee = 1;
        DAT_INTMEM_2f = 0xee;
        DAT_INTMEM_30 = 0xf;
        DAT_INTMEM_31 = 0;
        DAT_INTMEM_32 = 0x40;
        DAT_INTMEM_33 = 0x10;
        DAT_INTMEM_34 = 0;
        DAT_INTMEM_35 = 0x40;
        DAT_INTMEM_2a = 0;
        DAT_INTMEM_2b = 6;
        DAT_INTMEM_2c = 0;
        DAT_INTMEM_2d = 0;
        DAT_INTMEM_2e = 1;
        uVar7 = CONCAT11(uVar6,8);
        FUN_CODE_1aa9(uVar7,bVar5);
        uVar6 = (undefined1)((ushort)uVar7 >> 8);
        if (BANK1_R0 != 0) goto LAB_CODE_2f76;
        uEXTMEMcc0c = 199;
        uEXTMEMcc0b = 0;
        do {
          if (((cEXTMEMcc29 == '\0') && (99 < bEXTMEMcc0a)) || ((bEXTMEMcc90 & 1) == 1)) {
            uVar6 = 0xcc;
            uEXTMEMcc0c = 99;
            goto LAB_CODE_2f76;
          }
        } while ((DAT_EXTMEM_cc07 & 1) == 0);
        DAT_EXTMEM_cc00 = 1;
        BANK0_R2 = bVar2;
        FUN_CODE_11d7(DAT_EXTMEM_cc07);
        BANK0_R3 = BANK0_R3 & 0xfe;
        DAT_EXTMEM_c200 = DAT_EXTMEM_c200 & 0xf1 | 3;
        DAT_EXTMEM_d67e = 0;
        DAT_EXTMEM_d67f = 0;
      } while( true );
    }
    if (BANK1_R5 != '\0') goto LAB_CODE_3b47;
    if (BANK1_R6 != '\0') goto LAB_CODE_3be5;
    uVar8 = 0;
    bVar5 = bCODE0048;
    if ((bCODE0048 >> 2 & 1) != 0) {
      uVar8 = 0;
      if ((bCODE0048 >> 5 & 1) != 0) {
        DAT_INTMEM_7d = DAT_EXTMEM_0120;
        DAT_INTMEM_7a = BANK1_R1;
        DAT_INTMEM_7b = BANK1_R2;
        DAT_INTMEM_7c = BANK2_R4;
        uVar8 = 0x10c;
        FUN_CODE_11f9(0x10c);
      }
      BANK0_R2 = bVar2;
      FUN_CODE_0326();
    }
    uVar6 = (undefined1)(uVar8 >> 8);
    BANK0_R3 = DAT_INTMEM_81 & BANK3_R4;
    BANK0_R2 = bVar2;
    if (((bVar5 != BANK3_R4) || (BANK0_R3 = DAT_INTMEM_82 & BANK3_R5, bVar5 != BANK3_R5)) ||
       (BANK2_R3 == '\0')) goto LAB_CODE_3be5;
    param_2 = BANK2_R7 & 0xc0;
    if (param_2 == 0xc0) {
      DAT_INTMEM_7a = BANK1_R1;
      DAT_INTMEM_7b = BANK1_R2;
      DAT_INTMEM_7c = BANK2_R4;
      DAT_INTMEM_7d = BANK2_R7;
      uVar8 = CONCAT11(uVar6,4);
      FUN_CODE_11f9(uVar8);
      BANK0_R2 = bVar2;
      goto LAB_CODE_3479;
    }
  }
  if ((BANK1_R0 == 0) && (uVar6 = 0xd2, param_2 = DAT_EXTMEM_d25c, (DAT_EXTMEM_d25c & 0xf) == 0)) {
    uVar8 = 0xcc21;
    uEXTMEMcc21 = 1;
    BANK0_R2 = bVar2;
  }
  else {
    DAT_INTMEM_7a = BANK1_R1;
    DAT_INTMEM_7b = BANK1_R2;
    DAT_INTMEM_7c = BANK2_R4;
    DAT_INTMEM_7d = 0;
    uVar8 = CONCAT11(uVar6,0xd);
    BANK0_R2 = bVar2;
    FUN_CODE_11f9(uVar8);
    BANK0_R2 = bVar2;
  }
  goto LAB_CODE_3479;
LAB_CODE_2f76:
  DAT_INTMEM_30 = 0xf;
  DAT_INTMEM_31 = 0;
  DAT_INTMEM_32 = 0x40;
  DAT_INTMEM_33 = 0x10;
  DAT_INTMEM_34 = 0;
  DAT_INTMEM_35 = 0x40;
  DAT_INTMEM_2a = 0;
  DAT_INTMEM_2b = 0;
  DAT_INTMEM_2c = 0;
  DAT_INTMEM_2d = 0;
  DAT_INTMEM_2e = 0xc;
  DAT_INTMEM_2f = 0;
  BANK0_R2 = bVar2;
  FUN_CODE_1aa9(CONCAT11(uVar6,9));
  BANK0_R2 = bVar2;
  bVar2 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
  cEXTMEM4fef = 0x11 < bVar2;
  cVar3 = BANK2_R2;
  bVar2 = FUN_CODE_3ed5(CONCAT11(BANK2_R1 - (((0xfd < BANK2_R0) << 7) >> 7),BANK2_R0 + 2),BANK2_R2);
  DAT_EXTMEM_4fae = bVar2 & 0x40;
  if (BANK1_R0 == 0) {
    uEXTMEMd257 = 0x11;
    BANK0_R3 = 0;
    cVar3 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
    if ((cVar3 != '\x10') && (cVar3 != '\x11')) {
      if (cVar3 == '\x12') {
        BANK0_R3 = BANK0_R3 | 0x10;
      }
      else {
        BANK0_R3 = BANK0_R3 | 0x10;
      }
    }
    if ((bEXTMEMc80a & 0xf) == 0) {
      cVar3 = FUN_CODE_3ed5(CONCAT11(BANK2_R1 - (((0xfe < BANK2_R0) << 7) >> 7),BANK2_R0 + 1),
                            BANK2_R2);
      if (cVar3 != '\x06') {
        if (cVar3 == '\n') {
          BANK0_R3 = BANK0_R3 | 1;
        }
        else if (cVar3 == '\x14') {
          BANK0_R3 = BANK0_R3 | 2;
        }
        else {
          BANK0_R3 = BANK0_R3 | 2;
        }
      }
    }
    else {
      BANK0_R3 = BANK0_R3 & 0xf;
      if (bEXTMEMc80a != 1) {
        if (bEXTMEMc80a == 2) {
          BANK0_R3 = BANK0_R3 | 1;
        }
        else if (bEXTMEMc80a == 3) {
          BANK0_R3 = BANK0_R3 | 2;
        }
        else {
          BANK0_R3 = BANK0_R3 | 2;
        }
      }
    }
    if ((bEXTMEMc80a & 0xf0) == 0) {
      cVar3 = FUN_CODE_3ed5(CONCAT11(BANK2_R1 - (((0xfd < BANK2_R0) << 7) >> 7),BANK2_R0 + 2),
                            BANK2_R2);
      BANK0_R3 = BANK0_R3 & 0x1f;
      if (cVar3 != '\x01') {
        if (cVar3 == '\x02') {
          BANK0_R3 = BANK0_R3 | 0x10;
        }
        else if (cVar3 == '\x04') {
          BANK0_R3 = BANK0_R3 | 0x20;
        }
        else {
          BANK0_R3 = BANK0_R3 | 0x20;
        }
      }
    }
    else {
      BANK0_R3 = BANK0_R3 & 0xf0;
      if (bEXTMEMc80a != 0x10) {
        if (bEXTMEMc80a == 0x20) {
          BANK0_R3 = BANK0_R3 | 0x10;
        }
        else if (bEXTMEMc80a == 0x40) {
          BANK0_R3 = BANK0_R3 | 0x20;
        }
        else {
          BANK0_R3 = BANK0_R3 | 0x20;
        }
      }
    }
    cVar3 = BANK2_R1 - (((0xfd < BANK2_R0) << 7) >> 7);
    bVar2 = FUN_CODE_3ed5(CONCAT11(cVar3,BANK2_R0 + 2),BANK2_R2);
    BANK0_R3 = BANK0_R3 & 0xfe | bVar2 & 0xc0;
  }
  bVar2 = BANK0_R2;
  if ((bCODE0048 >> 2 & 1) != 0) {
    DAT_INTMEM_30 = 0xf;
    DAT_INTMEM_31 = 0;
    DAT_INTMEM_32 = 0x40;
    DAT_INTMEM_33 = 0x10;
    DAT_INTMEM_34 = 0;
    DAT_INTMEM_35 = 0x40;
    DAT_INTMEM_2a = 0;
    DAT_INTMEM_2b = 2;
    DAT_INTMEM_2c = 0;
    DAT_INTMEM_2d = 0;
    DAT_INTMEM_2e = 1;
    DAT_INTMEM_2f = 0;
    FUN_CODE_1aa9(9,bCODE0048);
    cVar3 = BANK2_R2;
    bVar5 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
    DAT_EXTMEM_0120 = bVar5 & 0x1f;
    FUN_CODE_0326();
  }
  BANK0_R2 = bVar2;
  if (cEXTMEM4fef != '\0') {
    DAT_INTMEM_30 = 0xf;
    DAT_INTMEM_31 = 0;
    DAT_INTMEM_32 = 0x40;
    DAT_INTMEM_33 = 0x10;
    DAT_INTMEM_34 = 0;
    DAT_INTMEM_35 = 0x40;
    DAT_INTMEM_2a = 0xe;
    DAT_INTMEM_2b = 0;
    DAT_INTMEM_2c = 0;
    DAT_INTMEM_2d = 0;
    DAT_INTMEM_2e = 1;
    DAT_INTMEM_2f = 0;
    FUN_CODE_1aa9(0x4f09,cEXTMEM4fef);
    cVar3 = BANK2_R2;
    if ((bEXTMEMc809 & 1) == 1) {
      BANK0_R2 = bVar2;
      cVar4 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
      BANK0_R3 = BANK0_R3 & 0x7f;
      if (BANK0_R3 < 5) {
                    /* WARNING: Could not recover jumptable at 0x32a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ushort)(byte)(cVar4 * '\x03') + 0x32aa))();
        return;
      }
    }
    else {
      BANK0_R2 = bVar2;
      cVar4 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
      BANK0_R3 = BANK0_R3 & 0x7f;
      if (BANK0_R3 < 5) {
                    /* WARNING: Could not recover jumptable at 0x3333. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ushort)(byte)(cVar4 * '\x03') + 0x3334))();
        return;
      }
    }
  }
LAB_CODE_33b1:
  bVar2 = BANK0_R2;
  uEXTMEM4fd9 = 1;
  DAT_EXTMEM_4fd8 = 4;
  BANK0_R3 = BANK0_R3 & 0xfe;
  uVar8 = 0x4fef;
  if (cEXTMEM4fef == '\0') {
    param_2 = 0;
  }
  else {
    DAT_INTMEM_30 = 0xf;
    DAT_INTMEM_31 = 0;
    DAT_INTMEM_32 = 0x40;
    DAT_INTMEM_33 = 0x10;
    DAT_INTMEM_34 = 0;
    DAT_INTMEM_35 = 0x40;
    DAT_INTMEM_2a = 0x21;
    DAT_INTMEM_2b = 0;
    DAT_INTMEM_2c = 0;
    DAT_INTMEM_2d = 0;
    DAT_INTMEM_2e = 1;
    DAT_INTMEM_2f = 0;
    FUN_CODE_1aa9(0x4f09);
    uVar8 = CONCAT11(BANK2_R1,BANK2_R0);
    cVar3 = BANK2_R2;
    BANK0_R2 = bVar2;
    param_2 = FUN_CODE_3ed5(uVar8,BANK2_R2);
    bVar2 = BANK0_R2;
    BANK0_R2 = bVar2;
    if ((param_2 & 1) != 0) {
      DAT_EXTMEM_4fe7 = 0;
      uINTMEMd4 = 0;
      DAT_INTMEM_2f = 0xd4;
      DAT_INTMEM_30 = 0xf;
      DAT_INTMEM_31 = 0;
      DAT_INTMEM_32 = 0x40;
      DAT_INTMEM_33 = 0x10;
      DAT_INTMEM_34 = 0;
      DAT_INTMEM_35 = 0x40;
      DAT_INTMEM_2a = 0x11;
      DAT_INTMEM_2b = 1;
      DAT_INTMEM_2c = 0;
      DAT_INTMEM_2d = 0;
      DAT_INTMEM_2e = 1;
      uVar6 = 0x4f;
      FUN_CODE_1aa9(0x4f08);
      uINTMEMd5 = 0;
      uINTMEMd6 = 0;
      uINTMEMd7 = 0x3f;
      DAT_INTMEM_2f = 0xd5;
      DAT_INTMEM_30 = 0xf;
      DAT_INTMEM_31 = 0;
      DAT_INTMEM_32 = 0x40;
      DAT_INTMEM_33 = 0x10;
      DAT_INTMEM_34 = 0;
      DAT_INTMEM_35 = 0x40;
      DAT_INTMEM_2a = 0xc0;
      DAT_INTMEM_2b = 1;
      DAT_INTMEM_2c = 0;
      DAT_INTMEM_2d = 0;
      DAT_INTMEM_2e = 3;
      uVar8 = CONCAT11(uVar6,8);
      FUN_CODE_1aa9(uVar8);
      BANK0_R2 = bVar2;
    }
  }
  if (BANK1_R5 == '\0') goto LAB_CODE_3479;
  goto LAB_CODE_3b47;
}



/* =========================================================
 * CODE:3544  thunk_FUN_CODE_3562  size=3
 * ========================================================= */

void thunk_FUN_CODE_3562(undefined2 param_1,char param_2,byte param_3)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  undefined1 uVar6;
  ushort uVar7;
  undefined2 uVar8;
  
  bVar3 = BANK0_R2;
  DAT_INTMEM_2f = 0x77;
  DAT_INTMEM_30 = 0xf;
  DAT_INTMEM_31 = 0;
  DAT_INTMEM_32 = 0x40;
  DAT_INTMEM_33 = 0x10;
  DAT_INTMEM_34 = 0;
  DAT_INTMEM_35 = 0x40;
  DAT_INTMEM_2a = 1;
  DAT_INTMEM_2b = 1;
  DAT_INTMEM_2c = 0;
  DAT_INTMEM_2d = 0;
  DAT_INTMEM_2e = 1;
  uVar7 = CONCAT11((char)((ushort)param_1 >> 8),8);
  FUN_CODE_1aa9();
  bVar2 = (byte)uVar7;
  BANK0_R2 = bVar3;
  if (bVar2 != 1) {
    if (BANK1_R5 != '\0') goto LAB_CODE_3b47;
    if (BANK1_R6 != '\0') goto LAB_CODE_3be5;
    BANK1_R1 = DAT_INTMEM_77;
    if ((bEXTMEMd200 >> 1 & 1) == 0) {
      if ((bEXTMEMd200 & 1) != 0) {
        BANK0_R5 = BANK0_R5 & 0xfe | 1;
      }
    }
    else {
      BANK0_R5 = BANK0_R5 & 0xfd | 2;
    }
    uVar6 = 0xd2;
    bVar2 = bEXTMEMd200;
    FUN_CODE_1043();
    DAT_INTMEM_7a = BANK1_R1;
    DAT_INTMEM_7b = BANK1_R2;
    DAT_INTMEM_7c = BANK2_R4;
    DAT_INTMEM_7d = 0;
    uVar7 = CONCAT11(uVar6,6);
    FUN_CODE_11f9(uVar7);
    BANK0_R2 = bVar3;
    goto LAB_CODE_3479;
  }
LAB_CODE_2a74:
  if ((bEXTMEMd66f >> 4 & 1) != 0) {
    uEXTMEMca10 = 3;
    uEXTMEMca15 = 0x20;
    uEXTMEMca14 = 7;
  }
  if ((bCODE0048 >> 4 & 1) != 0) {
    uEXTMEMd7fc = 1;
    uEXTMEMd7fa = 1;
    uEXTMEMd7f8 = 1;
    uEXTMEMd7f6 = 1;
  }
  do {
    BANK0_R2 = BANK0_R2 & 0xe;
  } while (bEXTMEMc800 == 0xe);
  BANK1_R0 = DAT_EXTMEM_c801 & 0x80;
  if (BANK1_R0 == 0) {
    BANK0_R2 = BANK0_R2 | 0x9b;
    uEXTMEMd21e = 0xff;
  }
  else {
    uEXTMEMcc8e = 0;
  }
  bVar3 = BANK0_R2;
  DAT_EXTMEM_4fe9 = 0;
  BANK1_R1 = 0;
  BANK1_R2 = 0;
  BANK2_R4 = 0;
  BANK1_R5 = '\0';
  BANK1_R6 = '\0';
  BANK2_R3 = '\0';
  BANK2_R7 = 0;
  DAT_EXTMEM_4fe4 = 0;
  BANK2_R5 = '\0';
  BANK2_R6 = '\0';
  BANK3_R0 = '\0';
  bEXTMEM4feb = 0;
  param_2 = '\0';
  uEXTMEM4fe5 = 0;
  uEXTMEM4fe6 = 0;
  DAT_EXTMEM_4fe7 = 0;
  DAT_EXTMEM_4fae = 0;
  uEXTMEMd766 = 8;
  uEXTMEMd600 = 0;
  uEXTMEMd680 = 0;
  uEXTMEMd700 = 0;
  uEXTMEMd780 = 0;
  if (cCODE004b < '\0') {
    uEXTMEMd677 = 0;
  }
  else {
    uEXTMEMd677 = 0xf;
  }
  if (BANK1_R0 == 0) {
    BANK0_R3 = BANK0_R3 & 0xfc | 4;
    uEXTMEMd254 = 0xff;
    uEXTMEMd255 = 0xff;
  }
  else if ((bEXTMEMc84b >> 3 & 1) == 1) {
    BANK0_R3 = BANK0_R3 | 4;
  }
  else {
    BANK0_R3 = BANK0_R3 & 0xfa;
  }
  uEXTMEMcc92 = 8;
  BANK3_R1 = uEXTMEMcc8e;
  uEXTMEMcc96 = 1;
  BANK0_R3 = BANK0_R3 & 0xfe;
  FUN_CODE_1da2(5);
  DAT_EXTMEM_4fea = DAT_EXTMEM_c801 & 0x3f;
  if (DAT_EXTMEM_4fea == 8) {
    for (bEXTMEM4ff0 = 0; bEXTMEM4ff0 < 2; bEXTMEM4ff0 = bEXTMEM4ff0 + 1) {
    }
    BANK0_R3 = BANK0_R3 & 0xfd;
    DAT_INTMEM_7a = 0x10;
    DAT_INTMEM_7b = 0x1c;
    BANK0_R2 = bVar3;
    FUN_CODE_0270(0xd600);
    do {
    } while ((bEXTMEMd67c >> 2 & 1) == 0);
  }
  while ((((DAT_EXTMEM_c848 >> 2 & 1) != 0 &&
          (uVar7 = 0xcc93, bVar5 = DAT_EXTMEM_c848, DAT_EXTMEM_cc93 == '\0')) ||
         (uVar7 = 0xc808, bVar5 = DAT_EXTMEM_c808, (DAT_EXTMEM_c808 & 1) != 0))) {
    DAT_INTMEM_7a = 0x20;
    DAT_INTMEM_7b = 0x20;
    BANK0_R2 = bVar3;
    FUN_CODE_0270(uVar7 & 0xff00,bVar5);
  }
  do {
  } while ((DAT_EXTMEM_cc07 & 1) == 1);
  do {
  } while ((bEXTMEMc82f & 1) == 0);
  BANK0_R3 = BANK0_R3 | 3;
  if ((bEXTMEMc800 >> 4 & 1) != 0) {
    BANK0_R2 = bVar3;
    FUN_CODE_1da2(0x1c2,bEXTMEMc800);
  }
  if ((bEXTMEMc800 & 1) == 1) {
    if (cEXTMEMd66e == '\x01') {
      bEXTMEMc890 = 1;
      uEXTMEMc891 = 0xc;
      uEXTMEMd449 = 2;
      uEXTMEMd766 = 0;
      DAT_EXTMEM_d672 = 0;
      BANK0_R3 = BANK0_R3 & 3;
    }
    else if (cEXTMEMd66e == '\x02') {
      DAT_EXTMEM_d672 = 0xf;
      BANK0_R3 = BANK0_R3 & 2;
    }
    else {
      DAT_EXTMEM_d672 = 0xf;
      BANK0_R3 = BANK0_R3 & 3;
    }
    BANK0_R2 = bVar3;
    for (bEXTMEM4ff0 = 0; bEXTMEM4ff0 < 4; bEXTMEM4ff0 = bEXTMEM4ff0 + 1) {
      DAT_INTMEM_7b = bEXTMEM4ff0;
      DAT_INTMEM_7a = 0;
      FUN_CODE_0e94(0x4f00);
    }
    uEXTMEMca5a = 0;
    BANK0_R3 = BANK0_R3 | 1;
    uEXTMEMd767 = 0x3f;
    BANK1_R1 = 4;
    do {
      if (bEXTMEMc890 != 0) {
        DAT_INTMEM_7a = 0x20;
        DAT_INTMEM_7b = 4;
        FUN_CODE_0270(0xc800);
        do {
        } while( true );
      }
      DAT_INTMEM_7a = 1;
      DAT_INTMEM_7b = 2;
      FUN_CODE_0270(0xc800);
      uEXTMEMd446 = 0xc4;
      uEXTMEMd447 = 0;
      uEXTMEMd453 = 0x3a;
      uEXTMEMd47d = 0x3a;
      uEXTMEMd454 = 0x54;
      uEXTMEMd47e = 0x54;
      FUN_CODE_0478();
      while (FUN_CODE_0aba(), (DAT_EXTMEM_c802 & 1) == 0) {
        if ((DAT_EXTMEM_cc07 & 1) != 0) {
          FUN_CODE_0e61(DAT_EXTMEM_cc07);
          goto LAB_CODE_2a74;
        }
      }
      FUN_CODE_0f3d(DAT_EXTMEM_c802);
      FUN_CODE_1010();
      FUN_CODE_1da2(0xf);
      BANK0_R3 = BANK0_R3 & 0xdd;
      DAT_EXTMEM_cc00 = 0;
      FUN_CODE_1043();
      uEXTMEMce51 = 0;
      DAT_INTMEM_7a = 1;
      DAT_INTMEM_7b = 3;
      bVar3 = FUN_CODE_0270(0xce00);
      while( true ) {
        FUN_CODE_0aba(bVar3);
        while (DAT_EXTMEM_cc93 == '\x01') {
          DAT_INTMEM_7a = 0x20;
          DAT_INTMEM_7b = 0x21;
          FUN_CODE_0270(0xcc00);
        }
        if (((((DAT_EXTMEM_c802 & 1) != 1) && ((bEXTMEMc890 & 1) == 0)) ||
            (-1 < (char)DAT_EXTMEM_d77f)) && ((bEXTMEMc890 & 1) != 1)) break;
        DAT_EXTMEM_4fea = DAT_EXTMEM_cc07;
        if ((DAT_EXTMEM_cc07 & 1) != 0) {
          FUN_CODE_0e61(DAT_EXTMEM_cc07);
          goto LAB_CODE_2a74;
        }
        bVar3 = DAT_EXTMEM_cc07;
        if ((DAT_EXTMEM_cc07 >> 2 & 1) != 0) {
          bINTMEM7f = BANK0_R3;
          bINTMEM80 = BANK0_R3;
          bVar3 = bEXTMEMcc37;
        }
      }
      FUN_CODE_0e61(bEXTMEMc890);
    } while( true );
  }
  uEXTMEMca5a = 0;
  DAT_INTMEM_7a = 1;
  DAT_INTMEM_7b = 5;
  BANK0_R2 = bVar3;
  FUN_CODE_0270(0xca00,bEXTMEMc800);
  cEXTMEM4fef = '\0';
  uVar6 = 200;
  BANK0_R2 = bVar3;
  if (((DAT_EXTMEM_c848 >> 4 & 1) == 1) &&
     ((bVar5 = DAT_EXTMEM_c848, BANK1_R0 != 0 ||
      (uVar6 = 0xd2, bVar5 = DAT_EXTMEM_d252, (DAT_EXTMEM_d252 >> 5 & 1) == 0)))) {
    DAT_INTMEM_ee = 1;
    DAT_INTMEM_2f = 0xee;
    DAT_INTMEM_30 = 0xf;
    DAT_INTMEM_31 = 0;
    DAT_INTMEM_32 = 0x40;
    DAT_INTMEM_33 = 0x10;
    DAT_INTMEM_34 = 0;
    DAT_INTMEM_35 = 0x40;
    DAT_INTMEM_2a = 0;
    DAT_INTMEM_2b = 6;
    DAT_INTMEM_2c = 0;
    DAT_INTMEM_2d = 0;
    DAT_INTMEM_2e = 1;
    uVar8 = CONCAT11(uVar6,8);
    FUN_CODE_1aa9(uVar8,bVar5);
    uVar6 = (undefined1)((ushort)uVar8 >> 8);
    if (BANK1_R0 == 0) {
      uEXTMEMcc0c = 199;
      uEXTMEMcc0b = 0;
      do {
        if (((cEXTMEMcc29 == '\0') && (99 < bEXTMEMcc0a)) || ((bEXTMEMcc90 & 1) == 1)) {
          uVar6 = 0xcc;
          uEXTMEMcc0c = 99;
          goto LAB_CODE_2f76;
        }
      } while ((DAT_EXTMEM_cc07 & 1) == 0);
      DAT_EXTMEM_cc00 = 1;
      BANK0_R2 = bVar3;
      FUN_CODE_11d7(DAT_EXTMEM_cc07);
      BANK0_R3 = BANK0_R3 & 0xfe;
      DAT_EXTMEM_c200 = DAT_EXTMEM_c200 & 0xf1 | 3;
      DAT_EXTMEM_d67e = 0;
      DAT_EXTMEM_d67f = 0;
      goto LAB_CODE_2a74;
    }
LAB_CODE_2f76:
    DAT_INTMEM_30 = 0xf;
    DAT_INTMEM_31 = 0;
    DAT_INTMEM_32 = 0x40;
    DAT_INTMEM_33 = 0x10;
    DAT_INTMEM_34 = 0;
    DAT_INTMEM_35 = 0x40;
    DAT_INTMEM_2a = 0;
    DAT_INTMEM_2b = 0;
    DAT_INTMEM_2c = 0;
    DAT_INTMEM_2d = 0;
    DAT_INTMEM_2e = 0xc;
    DAT_INTMEM_2f = 0;
    BANK0_R2 = bVar3;
    FUN_CODE_1aa9(CONCAT11(uVar6,9));
    BANK0_R2 = bVar3;
    bVar2 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
    cEXTMEM4fef = 0x11 < bVar2;
    bVar2 = BANK2_R2;
    bVar3 = FUN_CODE_3ed5(CONCAT11(BANK2_R1 - (((0xfd < BANK2_R0) << 7) >> 7),BANK2_R0 + 2),BANK2_R2
                         );
    DAT_EXTMEM_4fae = bVar3 & 0x40;
    if (BANK1_R0 == 0) {
      uEXTMEMd257 = 0x11;
      BANK0_R3 = 0;
      cVar4 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
      if ((cVar4 != '\x10') && (cVar4 != '\x11')) {
        if (cVar4 == '\x12') {
          BANK0_R3 = BANK0_R3 | 0x10;
        }
        else {
          BANK0_R3 = BANK0_R3 | 0x10;
        }
      }
      if ((bEXTMEMc80a & 0xf) == 0) {
        cVar4 = FUN_CODE_3ed5(CONCAT11(BANK2_R1 - (((0xfe < BANK2_R0) << 7) >> 7),BANK2_R0 + 1),
                              BANK2_R2);
        if (cVar4 != '\x06') {
          if (cVar4 == '\n') {
            BANK0_R3 = BANK0_R3 | 1;
          }
          else if (cVar4 == '\x14') {
            BANK0_R3 = BANK0_R3 | 2;
          }
          else {
            BANK0_R3 = BANK0_R3 | 2;
          }
        }
      }
      else {
        BANK0_R3 = BANK0_R3 & 0xf;
        if (bEXTMEMc80a != 1) {
          if (bEXTMEMc80a == 2) {
            BANK0_R3 = BANK0_R3 | 1;
          }
          else if (bEXTMEMc80a == 3) {
            BANK0_R3 = BANK0_R3 | 2;
          }
          else {
            BANK0_R3 = BANK0_R3 | 2;
          }
        }
      }
      if ((bEXTMEMc80a & 0xf0) == 0) {
        cVar4 = FUN_CODE_3ed5(CONCAT11(BANK2_R1 - (((0xfd < BANK2_R0) << 7) >> 7),BANK2_R0 + 2),
                              BANK2_R2);
        BANK0_R3 = BANK0_R3 & 0x1f;
        if (cVar4 != '\x01') {
          if (cVar4 == '\x02') {
            BANK0_R3 = BANK0_R3 | 0x10;
          }
          else if (cVar4 == '\x04') {
            BANK0_R3 = BANK0_R3 | 0x20;
          }
          else {
            BANK0_R3 = BANK0_R3 | 0x20;
          }
        }
      }
      else {
        BANK0_R3 = BANK0_R3 & 0xf0;
        if (bEXTMEMc80a != 0x10) {
          if (bEXTMEMc80a == 0x20) {
            BANK0_R3 = BANK0_R3 | 0x10;
          }
          else if (bEXTMEMc80a == 0x40) {
            BANK0_R3 = BANK0_R3 | 0x20;
          }
          else {
            BANK0_R3 = BANK0_R3 | 0x20;
          }
        }
      }
      bVar2 = BANK2_R1 - (((0xfd < BANK2_R0) << 7) >> 7);
      bVar3 = FUN_CODE_3ed5(CONCAT11(bVar2,BANK2_R0 + 2),BANK2_R2);
      BANK0_R3 = BANK0_R3 & 0xfe | bVar3 & 0xc0;
    }
    bVar3 = BANK0_R2;
    if ((bCODE0048 >> 2 & 1) != 0) {
      DAT_INTMEM_30 = 0xf;
      DAT_INTMEM_31 = 0;
      DAT_INTMEM_32 = 0x40;
      DAT_INTMEM_33 = 0x10;
      DAT_INTMEM_34 = 0;
      DAT_INTMEM_35 = 0x40;
      DAT_INTMEM_2a = 0;
      DAT_INTMEM_2b = 2;
      DAT_INTMEM_2c = 0;
      DAT_INTMEM_2d = 0;
      DAT_INTMEM_2e = 1;
      DAT_INTMEM_2f = 0;
      FUN_CODE_1aa9(9,bCODE0048);
      bVar2 = BANK2_R2;
      bVar5 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
      DAT_EXTMEM_0120 = bVar5 & 0x1f;
      FUN_CODE_0326();
    }
    BANK0_R2 = bVar3;
    if (cEXTMEM4fef != '\0') {
      DAT_INTMEM_30 = 0xf;
      DAT_INTMEM_31 = 0;
      DAT_INTMEM_32 = 0x40;
      DAT_INTMEM_33 = 0x10;
      DAT_INTMEM_34 = 0;
      DAT_INTMEM_35 = 0x40;
      DAT_INTMEM_2a = 0xe;
      DAT_INTMEM_2b = 0;
      DAT_INTMEM_2c = 0;
      DAT_INTMEM_2d = 0;
      DAT_INTMEM_2e = 1;
      DAT_INTMEM_2f = 0;
      FUN_CODE_1aa9(0x4f09,cEXTMEM4fef);
      bVar2 = BANK2_R2;
      if ((bEXTMEMc809 & 1) == 1) {
        BANK0_R2 = bVar3;
        cVar4 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
        BANK0_R3 = BANK0_R3 & 0x7f;
        if (BANK0_R3 < 5) {
                    /* WARNING: Could not recover jumptable at 0x32a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ushort)(byte)(cVar4 * '\x03') + 0x32aa))();
          return;
        }
      }
      else {
        BANK0_R2 = bVar3;
        cVar4 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
        BANK0_R3 = BANK0_R3 & 0x7f;
        if (BANK0_R3 < 5) {
                    /* WARNING: Could not recover jumptable at 0x3333. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ushort)(byte)(cVar4 * '\x03') + 0x3334))();
          return;
        }
      }
    }
  }
  bVar3 = BANK0_R2;
  uEXTMEM4fd9 = 1;
  DAT_EXTMEM_4fd8 = 4;
  BANK0_R3 = BANK0_R3 & 0xfe;
  uVar7 = 0x4fef;
  if (cEXTMEM4fef == '\0') {
    param_3 = 0;
  }
  else {
    DAT_INTMEM_30 = 0xf;
    DAT_INTMEM_31 = 0;
    DAT_INTMEM_32 = 0x40;
    DAT_INTMEM_33 = 0x10;
    DAT_INTMEM_34 = 0;
    DAT_INTMEM_35 = 0x40;
    DAT_INTMEM_2a = 0x21;
    DAT_INTMEM_2b = 0;
    DAT_INTMEM_2c = 0;
    DAT_INTMEM_2d = 0;
    DAT_INTMEM_2e = 1;
    DAT_INTMEM_2f = 0;
    FUN_CODE_1aa9(0x4f09);
    uVar7 = CONCAT11(BANK2_R1,BANK2_R0);
    bVar2 = BANK2_R2;
    BANK0_R2 = bVar3;
    param_3 = FUN_CODE_3ed5(uVar7,BANK2_R2);
    bVar3 = BANK0_R2;
    BANK0_R2 = bVar3;
    if ((param_3 & 1) != 0) {
      DAT_EXTMEM_4fe7 = 0;
      uINTMEMd4 = 0;
      DAT_INTMEM_2f = 0xd4;
      DAT_INTMEM_30 = 0xf;
      DAT_INTMEM_31 = 0;
      DAT_INTMEM_32 = 0x40;
      DAT_INTMEM_33 = 0x10;
      DAT_INTMEM_34 = 0;
      DAT_INTMEM_35 = 0x40;
      DAT_INTMEM_2a = 0x11;
      DAT_INTMEM_2b = 1;
      DAT_INTMEM_2c = 0;
      DAT_INTMEM_2d = 0;
      DAT_INTMEM_2e = 1;
      uVar6 = 0x4f;
      FUN_CODE_1aa9(0x4f08);
      uINTMEMd5 = 0;
      uINTMEMd6 = 0;
      uINTMEMd7 = 0x3f;
      DAT_INTMEM_2f = 0xd5;
      DAT_INTMEM_30 = 0xf;
      DAT_INTMEM_31 = 0;
      DAT_INTMEM_32 = 0x40;
      DAT_INTMEM_33 = 0x10;
      DAT_INTMEM_34 = 0;
      DAT_INTMEM_35 = 0x40;
      DAT_INTMEM_2a = 0xc0;
      DAT_INTMEM_2b = 1;
      DAT_INTMEM_2c = 0;
      DAT_INTMEM_2d = 0;
      DAT_INTMEM_2e = 3;
      uVar7 = CONCAT11(uVar6,8);
      FUN_CODE_1aa9(uVar7);
      BANK0_R2 = bVar3;
    }
  }
  if (BANK1_R5 == '\0') goto LAB_CODE_3479;
LAB_CODE_3b47:
  bVar3 = BANK0_R2;
  DAT_INTMEM_7a = 0x20;
  DAT_INTMEM_7b = 0xb;
  uVar7 = uVar7 & 0xff00;
  FUN_CODE_0270(uVar7);
  uVar6 = (undefined1)(uVar7 >> 8);
  BANK1_R5 = '\0';
  if (((BANK3_R0 != '\0') || (uVar6 = 0x4f, param_3 = bEXTMEM4feb, bEXTMEM4feb != 0)) ||
     ((uVar6 = 0xcc, cEXTMEMcc8d != '\0' || (param_2 == '\0')))) goto LAB_CODE_3e82;
  uVar7 = 0xcc02;
  BANK0_R2 = bVar3;
  FUN_CODE_1f0b();
  param_3 = (byte)uVar7;
  BANK0_R2 = bVar3;
  if (param_3 != 1) goto LAB_CODE_3b8c;
  goto LAB_CODE_2a74;
LAB_CODE_3b8c:
  if (BANK1_R5 == '\0') {
    if (BANK1_R6 != '\0') goto LAB_CODE_3be5;
    uVar7 = 0;
    bVar5 = bCODE0048;
    if ((bCODE0048 >> 2 & 1) != 0) {
      uVar7 = 0;
      if ((bCODE0048 >> 5 & 1) != 0) {
        DAT_INTMEM_7d = DAT_EXTMEM_0120;
        DAT_INTMEM_7a = BANK1_R1;
        DAT_INTMEM_7b = BANK1_R2;
        DAT_INTMEM_7c = BANK2_R4;
        uVar7 = 0x10c;
        FUN_CODE_11f9(0x10c);
      }
      BANK0_R2 = bVar3;
      FUN_CODE_0326();
    }
    uVar6 = (undefined1)(uVar7 >> 8);
    BANK0_R3 = DAT_INTMEM_81 & BANK3_R4;
    BANK0_R2 = bVar3;
    if (bVar5 != BANK3_R4) goto LAB_CODE_3be5;
    BANK0_R3 = DAT_INTMEM_82 & BANK3_R5;
    if (bVar5 != BANK3_R5) goto LAB_CODE_3be5;
    if (BANK2_R3 == '\0') goto LAB_CODE_3be5;
    param_3 = BANK2_R7 & 0xc0;
    if (param_3 == 0xc0) {
      DAT_INTMEM_7a = BANK1_R1;
      DAT_INTMEM_7b = BANK1_R2;
      DAT_INTMEM_7c = BANK2_R4;
      DAT_INTMEM_7d = BANK2_R7;
      uVar7 = CONCAT11(uVar6,4);
      FUN_CODE_11f9(uVar7);
      BANK0_R2 = bVar3;
    }
    else {
LAB_CODE_3e82:
      if ((BANK1_R0 == 0) && (uVar6 = 0xd2, param_3 = DAT_EXTMEM_d25c, (DAT_EXTMEM_d25c & 0xf) == 0)
         ) {
        uVar7 = 0xcc21;
        uEXTMEMcc21 = 1;
        BANK0_R2 = bVar3;
      }
      else {
        DAT_INTMEM_7a = BANK1_R1;
        DAT_INTMEM_7b = BANK1_R2;
        DAT_INTMEM_7c = BANK2_R4;
        DAT_INTMEM_7d = 0;
        uVar7 = CONCAT11(uVar6,0xd);
        BANK0_R2 = bVar3;
        FUN_CODE_11f9(uVar7);
        BANK0_R2 = bVar3;
      }
    }
LAB_CODE_3479:
    do {
      while (bVar3 = BANK0_R2, BANK2_R6 != '\0') {
LAB_CODE_34eb:
        uVar6 = BANK0_R4;
        BANK2_R6 = '\0';
        DAT_INTMEM_77 = param_3 & 7;
        bVar5 = bINTMEM7e & 0x60;
        DAT_INTMEM_76 = bINTMEM80;
        DAT_INTMEM_7a = 0x20;
        DAT_INTMEM_7b = 0x19;
        uVar7 = uVar7 & 0xff00;
        BANK0_R2 = bVar3;
        BANK0_R3 = bVar5;
        FUN_CODE_0270(uVar7,param_3 & 0x18);
        BANK0_R5 = bINTMEM7f & 0xf;
        BANK0_R2 = bVar3;
        BANK0_R3 = bVar5;
        BANK0_R4 = uVar6;
        if (BANK0_R5 < 0x10) {
                    /* WARNING: Could not recover jumptable at 0x3531. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ushort)(bVar2 * '\x03') + 0x3532))();
          return;
        }
      }
      DAT_INTMEM_7a = 0x20;
      DAT_INTMEM_7b = 6;
      FUN_CODE_0270(uVar7 & 0xff00);
      uEXTMEMcc2d = 0xfe;
      do {
        BANK3_R7 = 0xec;
        DAT_INTMEM_20 = 0x4f;
        DAT_INTMEM_21 = 0;
        DAT_INTMEM_22 = 0x72;
        DAT_INTMEM_23 = 0;
        DAT_INTMEM_24 = 0x40;
        DAT_INTMEM_25 = 0x73;
        DAT_INTMEM_26 = 0;
        DAT_INTMEM_27 = 0x40;
        BANK3_R6 = 0;
        param_3 = 0x26;
        BANK0_R2 = bVar3;
        FUN_CODE_17f4();
        uVar7 = 0x4fea;
        DAT_EXTMEM_4fea = param_3;
        if (param_3 == 0) {
          BANK0_R2 = bVar3;
          if (BANK1_R5 != '\0') goto LAB_CODE_3b47;
          if (BANK1_R6 == '\0') goto LAB_CODE_34eb;
          break;
        }
        uVar7 = 0x4fea;
        BANK0_R2 = bVar3;
        if (param_3 == 1) goto LAB_CODE_2a74;
        if (BANK1_R5 != '\0') goto LAB_CODE_3b47;
      } while (BANK1_R6 == '\0');
LAB_CODE_3be5:
      bVar3 = BANK0_R2;
      DAT_INTMEM_7a = 1;
      DAT_INTMEM_7b = 0xc;
      FUN_CODE_0270(uVar7 & 0xff00);
      BANK0_R3 = BANK0_R3 & 0xfc;
      uVar6 = 0x4f;
      bVar5 = DAT_EXTMEM_4fbf;
      if ((DAT_EXTMEM_4fbf == 1) && (uVar6 = 0, bVar5 = bCODE0049, (bCODE0049 >> 1 & 1) != 0)) {
        BANK0_R3 = BANK0_R3 | 1;
        DAT_EXTMEM_d67e = 0;
        uVar6 = 0xd6;
        DAT_EXTMEM_d67f = 0;
        bVar5 = DAT_EXTMEM_d77f;
      }
      BANK0_R2 = bVar3;
      if (BANK1_R6 != '\0') {
        DAT_INTMEM_30 = 0xf;
        DAT_INTMEM_31 = 0;
        DAT_INTMEM_32 = 0x40;
        DAT_INTMEM_33 = 0x10;
        DAT_INTMEM_34 = 0;
        DAT_INTMEM_35 = 0x40;
        DAT_INTMEM_2a = 0x21;
        DAT_INTMEM_2b = 0;
        DAT_INTMEM_2c = 0;
        DAT_INTMEM_2d = 0;
        DAT_INTMEM_2e = 1;
        DAT_INTMEM_2f = 0;
        FUN_CODE_1aa9(CONCAT11(uVar6,9),bVar5);
        bVar2 = BANK2_R2;
        BANK0_R2 = bVar3;
        bVar5 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
        bVar3 = BANK0_R2;
        BANK0_R2 = bVar3;
        if ((bVar5 & 1) != 0) {
          DAT_EXTMEM_4fe7 = 0;
          uINTMEMd4 = 0;
          DAT_INTMEM_2f = 0xd4;
          DAT_INTMEM_30 = 0xf;
          DAT_INTMEM_31 = 0;
          DAT_INTMEM_32 = 0x40;
          DAT_INTMEM_33 = 0x10;
          DAT_INTMEM_34 = 0;
          DAT_INTMEM_35 = 0x40;
          DAT_INTMEM_2a = 0x11;
          DAT_INTMEM_2b = 1;
          DAT_INTMEM_2c = 0;
          DAT_INTMEM_2d = 0;
          DAT_INTMEM_2e = 1;
          uVar6 = 0x4f;
          FUN_CODE_1aa9(0x4f08,bVar5);
          uINTMEMd5 = 0;
          uINTMEMd6 = 0;
          uINTMEMd7 = 0x3f;
          DAT_INTMEM_2f = 0xd5;
          DAT_INTMEM_30 = 0xf;
          DAT_INTMEM_31 = 0;
          DAT_INTMEM_32 = 0x40;
          DAT_INTMEM_33 = 0x10;
          DAT_INTMEM_34 = 0;
          DAT_INTMEM_35 = 0x40;
          DAT_INTMEM_2a = 0xc0;
          DAT_INTMEM_2b = 1;
          DAT_INTMEM_2c = 0;
          DAT_INTMEM_2d = 0;
          DAT_INTMEM_2e = 3;
          FUN_CODE_1aa9(CONCAT11(uVar6,8));
          BANK0_R2 = bVar3;
        }
      }
      BANK1_R6 = '\0';
      uEXTMEM4fe6 = 0;
      DAT_EXTMEM_cc00 = 1;
      DAT_EXTMEM_c200 = DAT_EXTMEM_c200 & 0xf1 | 3;
      if ((bCODE0048 >> 1 & 1) == 1) {
        param_3 = bEXTMEM4feb != 1;
        bVar1 = DAT_EXTMEM_4fbf != 1;
        if (bVar1 && (bool)param_3) {
          DAT_INTMEM_7a = BANK1_R1;
          DAT_INTMEM_7b = BANK1_R2;
          DAT_INTMEM_7c = BANK2_R4;
          DAT_INTMEM_7d = BANK2_R7;
          uVar7 = 0x4f03;
          FUN_CODE_11f9(0x4f03);
        }
        else {
          DAT_EXTMEM_4fbf = 0;
          if ((BANK2_R5 != '\0') ||
             (uVar7 = 0x4fe4, param_3 = DAT_EXTMEM_4fe4, DAT_EXTMEM_4fe4 != 0)) {
            do {
              bVar3 = DAT_EXTMEM_ca40;
              if ((DAT_EXTMEM_ca40 >> 1 & 1) == 1) break;
              bVar3 = bEXTMEMcb40;
            } while ((bEXTMEMcb40 & 6) != 0);
            uEXTMEMca0c = 1;
            DAT_INTMEM_30 = 0xf;
            DAT_INTMEM_31 = 0;
            DAT_INTMEM_32 = 0x40;
            DAT_INTMEM_33 = 0x10;
            DAT_INTMEM_34 = 0;
            DAT_INTMEM_35 = 0x40;
            DAT_INTMEM_2a = 2;
            DAT_INTMEM_2b = 1;
            DAT_INTMEM_2c = 0;
            DAT_INTMEM_2d = 0;
            DAT_INTMEM_2e = 1;
            DAT_INTMEM_2f = 0x8f;
            FUN_CODE_1aa9(0xca08,bVar3,bVar1);
            uEXTMEMce51 = 0x10;
            FUN_CODE_11d7();
            BANK0_R3 = BANK0_R3 & 0xfe;
            BANK2_R5 = '\0';
            uVar7 = 0x4fe4;
            DAT_EXTMEM_4fe4 = 0;
            param_3 = DAT_EXTMEM_d76d;
          }
        }
      }
      else if (param_2 == '\0') {
        if ((BANK2_R5 != '\0') || (uVar7 = 0x4fe4, param_3 = DAT_EXTMEM_4fe4, DAT_EXTMEM_4fe4 != 0))
        {
          do {
            bVar3 = DAT_EXTMEM_ca40;
            if ((DAT_EXTMEM_ca40 >> 1 & 1) == 1) break;
            bVar3 = bEXTMEMcb40;
          } while ((bEXTMEMcb40 & 6) != 0);
          uEXTMEMca0c = 1;
          DAT_INTMEM_30 = 0xf;
          DAT_INTMEM_31 = 0;
          DAT_INTMEM_32 = 0x40;
          DAT_INTMEM_33 = 0x10;
          DAT_INTMEM_34 = 0;
          DAT_INTMEM_35 = 0x40;
          DAT_INTMEM_2a = 2;
          DAT_INTMEM_2b = 1;
          DAT_INTMEM_2c = 0;
          DAT_INTMEM_2d = 0;
          DAT_INTMEM_2e = 1;
          DAT_INTMEM_2f = 0x8f;
          FUN_CODE_1aa9(0xca08,bVar3);
          uEXTMEMce51 = 0x10;
          FUN_CODE_11d7();
          BANK0_R3 = BANK0_R3 & 0xfe;
          BANK2_R5 = '\0';
          uVar7 = 0x4fe4;
          DAT_EXTMEM_4fe4 = 0;
          param_3 = DAT_EXTMEM_d76d;
        }
      }
      else {
        while (bEXTMEM4fb1 != 0) {
          DAT_INTMEM_7a = 0x20;
          DAT_INTMEM_7b = 0x28;
          FUN_CODE_0270(0x4f00);
        }
        DAT_INTMEM_7a = BANK1_R1;
        DAT_INTMEM_7b = BANK1_R2;
        DAT_INTMEM_7c = BANK2_R4;
        DAT_INTMEM_7d = BANK2_R7;
        uVar7 = 0x4f03;
        param_3 = bEXTMEM4fb1;
        FUN_CODE_11f9(0x4f03);
      }
      param_2 = '\0';
    } while( true );
  }
  goto LAB_CODE_3b47;
}



/* =========================================================
 * CODE:3562  FUN_CODE_3562  size=162
 * ========================================================= */

void FUN_CODE_3562(undefined2 param_1,char param_2,byte param_3)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  undefined1 uVar6;
  ushort uVar7;
  undefined2 uVar8;
  
  bVar3 = BANK0_R2;
  DAT_INTMEM_2f = 0x77;
  DAT_INTMEM_30 = 0xf;
  DAT_INTMEM_31 = 0;
  DAT_INTMEM_32 = 0x40;
  DAT_INTMEM_33 = 0x10;
  DAT_INTMEM_34 = 0;
  DAT_INTMEM_35 = 0x40;
  DAT_INTMEM_2a = 1;
  DAT_INTMEM_2b = 1;
  DAT_INTMEM_2c = 0;
  DAT_INTMEM_2d = 0;
  DAT_INTMEM_2e = 1;
  uVar7 = CONCAT11((char)((ushort)param_1 >> 8),8);
  FUN_CODE_1aa9();
  bVar2 = (byte)uVar7;
  BANK0_R2 = bVar3;
  if (bVar2 != 1) {
    if (BANK1_R5 != '\0') goto LAB_CODE_3b47;
    if (BANK1_R6 != '\0') goto LAB_CODE_3be5;
    BANK1_R1 = DAT_INTMEM_77;
    if ((bEXTMEMd200 >> 1 & 1) == 0) {
      if ((bEXTMEMd200 & 1) != 0) {
        BANK0_R5 = BANK0_R5 & 0xfe | 1;
      }
    }
    else {
      BANK0_R5 = BANK0_R5 & 0xfd | 2;
    }
    uVar6 = 0xd2;
    bVar2 = bEXTMEMd200;
    FUN_CODE_1043();
    DAT_INTMEM_7a = BANK1_R1;
    DAT_INTMEM_7b = BANK1_R2;
    DAT_INTMEM_7c = BANK2_R4;
    DAT_INTMEM_7d = 0;
    uVar7 = CONCAT11(uVar6,6);
    FUN_CODE_11f9(uVar7);
    BANK0_R2 = bVar3;
    goto LAB_CODE_3479;
  }
LAB_CODE_2a74:
  if ((bEXTMEMd66f >> 4 & 1) != 0) {
    uEXTMEMca10 = 3;
    uEXTMEMca15 = 0x20;
    uEXTMEMca14 = 7;
  }
  if ((bCODE0048 >> 4 & 1) != 0) {
    uEXTMEMd7fc = 1;
    uEXTMEMd7fa = 1;
    uEXTMEMd7f8 = 1;
    uEXTMEMd7f6 = 1;
  }
  do {
    BANK0_R2 = BANK0_R2 & 0xe;
  } while (bEXTMEMc800 == 0xe);
  BANK1_R0 = DAT_EXTMEM_c801 & 0x80;
  if (BANK1_R0 == 0) {
    BANK0_R2 = BANK0_R2 | 0x9b;
    uEXTMEMd21e = 0xff;
  }
  else {
    uEXTMEMcc8e = 0;
  }
  bVar3 = BANK0_R2;
  DAT_EXTMEM_4fe9 = 0;
  BANK1_R1 = 0;
  BANK1_R2 = 0;
  BANK2_R4 = 0;
  BANK1_R5 = '\0';
  BANK1_R6 = '\0';
  BANK2_R3 = '\0';
  BANK2_R7 = 0;
  DAT_EXTMEM_4fe4 = 0;
  BANK2_R5 = '\0';
  BANK2_R6 = '\0';
  BANK3_R0 = '\0';
  bEXTMEM4feb = 0;
  param_2 = '\0';
  uEXTMEM4fe5 = 0;
  uEXTMEM4fe6 = 0;
  DAT_EXTMEM_4fe7 = 0;
  DAT_EXTMEM_4fae = 0;
  uEXTMEMd766 = 8;
  uEXTMEMd600 = 0;
  uEXTMEMd680 = 0;
  uEXTMEMd700 = 0;
  uEXTMEMd780 = 0;
  if (cCODE004b < '\0') {
    uEXTMEMd677 = 0;
  }
  else {
    uEXTMEMd677 = 0xf;
  }
  if (BANK1_R0 == 0) {
    BANK0_R3 = BANK0_R3 & 0xfc | 4;
    uEXTMEMd254 = 0xff;
    uEXTMEMd255 = 0xff;
  }
  else if ((bEXTMEMc84b >> 3 & 1) == 1) {
    BANK0_R3 = BANK0_R3 | 4;
  }
  else {
    BANK0_R3 = BANK0_R3 & 0xfa;
  }
  uEXTMEMcc92 = 8;
  BANK3_R1 = uEXTMEMcc8e;
  uEXTMEMcc96 = 1;
  BANK0_R3 = BANK0_R3 & 0xfe;
  FUN_CODE_1da2(5);
  DAT_EXTMEM_4fea = DAT_EXTMEM_c801 & 0x3f;
  if (DAT_EXTMEM_4fea == 8) {
    for (bEXTMEM4ff0 = 0; bEXTMEM4ff0 < 2; bEXTMEM4ff0 = bEXTMEM4ff0 + 1) {
    }
    BANK0_R3 = BANK0_R3 & 0xfd;
    DAT_INTMEM_7a = 0x10;
    DAT_INTMEM_7b = 0x1c;
    BANK0_R2 = bVar3;
    FUN_CODE_0270(0xd600);
    do {
    } while ((bEXTMEMd67c >> 2 & 1) == 0);
  }
  while ((((DAT_EXTMEM_c848 >> 2 & 1) != 0 &&
          (uVar7 = 0xcc93, bVar5 = DAT_EXTMEM_c848, DAT_EXTMEM_cc93 == '\0')) ||
         (uVar7 = 0xc808, bVar5 = DAT_EXTMEM_c808, (DAT_EXTMEM_c808 & 1) != 0))) {
    DAT_INTMEM_7a = 0x20;
    DAT_INTMEM_7b = 0x20;
    BANK0_R2 = bVar3;
    FUN_CODE_0270(uVar7 & 0xff00,bVar5);
  }
  do {
  } while ((DAT_EXTMEM_cc07 & 1) == 1);
  do {
  } while ((bEXTMEMc82f & 1) == 0);
  BANK0_R3 = BANK0_R3 | 3;
  if ((bEXTMEMc800 >> 4 & 1) != 0) {
    BANK0_R2 = bVar3;
    FUN_CODE_1da2(0x1c2,bEXTMEMc800);
  }
  if ((bEXTMEMc800 & 1) == 1) {
    if (cEXTMEMd66e == '\x01') {
      bEXTMEMc890 = 1;
      uEXTMEMc891 = 0xc;
      uEXTMEMd449 = 2;
      uEXTMEMd766 = 0;
      DAT_EXTMEM_d672 = 0;
      BANK0_R3 = BANK0_R3 & 3;
    }
    else if (cEXTMEMd66e == '\x02') {
      DAT_EXTMEM_d672 = 0xf;
      BANK0_R3 = BANK0_R3 & 2;
    }
    else {
      DAT_EXTMEM_d672 = 0xf;
      BANK0_R3 = BANK0_R3 & 3;
    }
    BANK0_R2 = bVar3;
    for (bEXTMEM4ff0 = 0; bEXTMEM4ff0 < 4; bEXTMEM4ff0 = bEXTMEM4ff0 + 1) {
      DAT_INTMEM_7b = bEXTMEM4ff0;
      DAT_INTMEM_7a = 0;
      FUN_CODE_0e94(0x4f00);
    }
    uEXTMEMca5a = 0;
    BANK0_R3 = BANK0_R3 | 1;
    uEXTMEMd767 = 0x3f;
    BANK1_R1 = 4;
    do {
      if (bEXTMEMc890 != 0) {
        DAT_INTMEM_7a = 0x20;
        DAT_INTMEM_7b = 4;
        FUN_CODE_0270(0xc800);
        do {
        } while( true );
      }
      DAT_INTMEM_7a = 1;
      DAT_INTMEM_7b = 2;
      FUN_CODE_0270(0xc800);
      uEXTMEMd446 = 0xc4;
      uEXTMEMd447 = 0;
      uEXTMEMd453 = 0x3a;
      uEXTMEMd47d = 0x3a;
      uEXTMEMd454 = 0x54;
      uEXTMEMd47e = 0x54;
      FUN_CODE_0478();
      while (FUN_CODE_0aba(), (DAT_EXTMEM_c802 & 1) == 0) {
        if ((DAT_EXTMEM_cc07 & 1) != 0) {
          FUN_CODE_0e61(DAT_EXTMEM_cc07);
          goto LAB_CODE_2a74;
        }
      }
      FUN_CODE_0f3d(DAT_EXTMEM_c802);
      FUN_CODE_1010();
      FUN_CODE_1da2(0xf);
      BANK0_R3 = BANK0_R3 & 0xdd;
      DAT_EXTMEM_cc00 = 0;
      FUN_CODE_1043();
      uEXTMEMce51 = 0;
      DAT_INTMEM_7a = 1;
      DAT_INTMEM_7b = 3;
      bVar3 = FUN_CODE_0270(0xce00);
      while( true ) {
        FUN_CODE_0aba(bVar3);
        while (DAT_EXTMEM_cc93 == '\x01') {
          DAT_INTMEM_7a = 0x20;
          DAT_INTMEM_7b = 0x21;
          FUN_CODE_0270(0xcc00);
        }
        if (((((DAT_EXTMEM_c802 & 1) != 1) && ((bEXTMEMc890 & 1) == 0)) ||
            (-1 < (char)DAT_EXTMEM_d77f)) && ((bEXTMEMc890 & 1) != 1)) break;
        DAT_EXTMEM_4fea = DAT_EXTMEM_cc07;
        if ((DAT_EXTMEM_cc07 & 1) != 0) {
          FUN_CODE_0e61(DAT_EXTMEM_cc07);
          goto LAB_CODE_2a74;
        }
        bVar3 = DAT_EXTMEM_cc07;
        if ((DAT_EXTMEM_cc07 >> 2 & 1) != 0) {
          bINTMEM7f = BANK0_R3;
          bINTMEM80 = BANK0_R3;
          bVar3 = bEXTMEMcc37;
        }
      }
      FUN_CODE_0e61(bEXTMEMc890);
    } while( true );
  }
  uEXTMEMca5a = 0;
  DAT_INTMEM_7a = 1;
  DAT_INTMEM_7b = 5;
  BANK0_R2 = bVar3;
  FUN_CODE_0270(0xca00,bEXTMEMc800);
  cEXTMEM4fef = '\0';
  uVar6 = 200;
  BANK0_R2 = bVar3;
  if (((DAT_EXTMEM_c848 >> 4 & 1) == 1) &&
     ((bVar5 = DAT_EXTMEM_c848, BANK1_R0 != 0 ||
      (uVar6 = 0xd2, bVar5 = DAT_EXTMEM_d252, (DAT_EXTMEM_d252 >> 5 & 1) == 0)))) {
    DAT_INTMEM_ee = 1;
    DAT_INTMEM_2f = 0xee;
    DAT_INTMEM_30 = 0xf;
    DAT_INTMEM_31 = 0;
    DAT_INTMEM_32 = 0x40;
    DAT_INTMEM_33 = 0x10;
    DAT_INTMEM_34 = 0;
    DAT_INTMEM_35 = 0x40;
    DAT_INTMEM_2a = 0;
    DAT_INTMEM_2b = 6;
    DAT_INTMEM_2c = 0;
    DAT_INTMEM_2d = 0;
    DAT_INTMEM_2e = 1;
    uVar8 = CONCAT11(uVar6,8);
    FUN_CODE_1aa9(uVar8,bVar5);
    uVar6 = (undefined1)((ushort)uVar8 >> 8);
    if (BANK1_R0 == 0) {
      uEXTMEMcc0c = 199;
      uEXTMEMcc0b = 0;
      do {
        if (((cEXTMEMcc29 == '\0') && (99 < bEXTMEMcc0a)) || ((bEXTMEMcc90 & 1) == 1)) {
          uVar6 = 0xcc;
          uEXTMEMcc0c = 99;
          goto LAB_CODE_2f76;
        }
      } while ((DAT_EXTMEM_cc07 & 1) == 0);
      DAT_EXTMEM_cc00 = 1;
      BANK0_R2 = bVar3;
      FUN_CODE_11d7(DAT_EXTMEM_cc07);
      BANK0_R3 = BANK0_R3 & 0xfe;
      DAT_EXTMEM_c200 = DAT_EXTMEM_c200 & 0xf1 | 3;
      DAT_EXTMEM_d67e = 0;
      DAT_EXTMEM_d67f = 0;
      goto LAB_CODE_2a74;
    }
LAB_CODE_2f76:
    DAT_INTMEM_30 = 0xf;
    DAT_INTMEM_31 = 0;
    DAT_INTMEM_32 = 0x40;
    DAT_INTMEM_33 = 0x10;
    DAT_INTMEM_34 = 0;
    DAT_INTMEM_35 = 0x40;
    DAT_INTMEM_2a = 0;
    DAT_INTMEM_2b = 0;
    DAT_INTMEM_2c = 0;
    DAT_INTMEM_2d = 0;
    DAT_INTMEM_2e = 0xc;
    DAT_INTMEM_2f = 0;
    BANK0_R2 = bVar3;
    FUN_CODE_1aa9(CONCAT11(uVar6,9));
    BANK0_R2 = bVar3;
    bVar2 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
    cEXTMEM4fef = 0x11 < bVar2;
    bVar2 = BANK2_R2;
    bVar3 = FUN_CODE_3ed5(CONCAT11(BANK2_R1 - (((0xfd < BANK2_R0) << 7) >> 7),BANK2_R0 + 2),BANK2_R2
                         );
    DAT_EXTMEM_4fae = bVar3 & 0x40;
    if (BANK1_R0 == 0) {
      uEXTMEMd257 = 0x11;
      BANK0_R3 = 0;
      cVar4 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
      if ((cVar4 != '\x10') && (cVar4 != '\x11')) {
        if (cVar4 == '\x12') {
          BANK0_R3 = BANK0_R3 | 0x10;
        }
        else {
          BANK0_R3 = BANK0_R3 | 0x10;
        }
      }
      if ((bEXTMEMc80a & 0xf) == 0) {
        cVar4 = FUN_CODE_3ed5(CONCAT11(BANK2_R1 - (((0xfe < BANK2_R0) << 7) >> 7),BANK2_R0 + 1),
                              BANK2_R2);
        if (cVar4 != '\x06') {
          if (cVar4 == '\n') {
            BANK0_R3 = BANK0_R3 | 1;
          }
          else if (cVar4 == '\x14') {
            BANK0_R3 = BANK0_R3 | 2;
          }
          else {
            BANK0_R3 = BANK0_R3 | 2;
          }
        }
      }
      else {
        BANK0_R3 = BANK0_R3 & 0xf;
        if (bEXTMEMc80a != 1) {
          if (bEXTMEMc80a == 2) {
            BANK0_R3 = BANK0_R3 | 1;
          }
          else if (bEXTMEMc80a == 3) {
            BANK0_R3 = BANK0_R3 | 2;
          }
          else {
            BANK0_R3 = BANK0_R3 | 2;
          }
        }
      }
      if ((bEXTMEMc80a & 0xf0) == 0) {
        cVar4 = FUN_CODE_3ed5(CONCAT11(BANK2_R1 - (((0xfd < BANK2_R0) << 7) >> 7),BANK2_R0 + 2),
                              BANK2_R2);
        BANK0_R3 = BANK0_R3 & 0x1f;
        if (cVar4 != '\x01') {
          if (cVar4 == '\x02') {
            BANK0_R3 = BANK0_R3 | 0x10;
          }
          else if (cVar4 == '\x04') {
            BANK0_R3 = BANK0_R3 | 0x20;
          }
          else {
            BANK0_R3 = BANK0_R3 | 0x20;
          }
        }
      }
      else {
        BANK0_R3 = BANK0_R3 & 0xf0;
        if (bEXTMEMc80a != 0x10) {
          if (bEXTMEMc80a == 0x20) {
            BANK0_R3 = BANK0_R3 | 0x10;
          }
          else if (bEXTMEMc80a == 0x40) {
            BANK0_R3 = BANK0_R3 | 0x20;
          }
          else {
            BANK0_R3 = BANK0_R3 | 0x20;
          }
        }
      }
      bVar2 = BANK2_R1 - (((0xfd < BANK2_R0) << 7) >> 7);
      bVar3 = FUN_CODE_3ed5(CONCAT11(bVar2,BANK2_R0 + 2),BANK2_R2);
      BANK0_R3 = BANK0_R3 & 0xfe | bVar3 & 0xc0;
    }
    bVar3 = BANK0_R2;
    if ((bCODE0048 >> 2 & 1) != 0) {
      DAT_INTMEM_30 = 0xf;
      DAT_INTMEM_31 = 0;
      DAT_INTMEM_32 = 0x40;
      DAT_INTMEM_33 = 0x10;
      DAT_INTMEM_34 = 0;
      DAT_INTMEM_35 = 0x40;
      DAT_INTMEM_2a = 0;
      DAT_INTMEM_2b = 2;
      DAT_INTMEM_2c = 0;
      DAT_INTMEM_2d = 0;
      DAT_INTMEM_2e = 1;
      DAT_INTMEM_2f = 0;
      FUN_CODE_1aa9(9,bCODE0048);
      bVar2 = BANK2_R2;
      bVar5 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
      DAT_EXTMEM_0120 = bVar5 & 0x1f;
      FUN_CODE_0326();
    }
    BANK0_R2 = bVar3;
    if (cEXTMEM4fef != '\0') {
      DAT_INTMEM_30 = 0xf;
      DAT_INTMEM_31 = 0;
      DAT_INTMEM_32 = 0x40;
      DAT_INTMEM_33 = 0x10;
      DAT_INTMEM_34 = 0;
      DAT_INTMEM_35 = 0x40;
      DAT_INTMEM_2a = 0xe;
      DAT_INTMEM_2b = 0;
      DAT_INTMEM_2c = 0;
      DAT_INTMEM_2d = 0;
      DAT_INTMEM_2e = 1;
      DAT_INTMEM_2f = 0;
      FUN_CODE_1aa9(0x4f09,cEXTMEM4fef);
      bVar2 = BANK2_R2;
      if ((bEXTMEMc809 & 1) == 1) {
        BANK0_R2 = bVar3;
        cVar4 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
        BANK0_R3 = BANK0_R3 & 0x7f;
        if (BANK0_R3 < 5) {
                    /* WARNING: Could not recover jumptable at 0x32a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ushort)(byte)(cVar4 * '\x03') + 0x32aa))();
          return;
        }
      }
      else {
        BANK0_R2 = bVar3;
        cVar4 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
        BANK0_R3 = BANK0_R3 & 0x7f;
        if (BANK0_R3 < 5) {
                    /* WARNING: Could not recover jumptable at 0x3333. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ushort)(byte)(cVar4 * '\x03') + 0x3334))();
          return;
        }
      }
    }
  }
  bVar3 = BANK0_R2;
  uEXTMEM4fd9 = 1;
  DAT_EXTMEM_4fd8 = 4;
  BANK0_R3 = BANK0_R3 & 0xfe;
  uVar7 = 0x4fef;
  if (cEXTMEM4fef == '\0') {
    param_3 = 0;
  }
  else {
    DAT_INTMEM_30 = 0xf;
    DAT_INTMEM_31 = 0;
    DAT_INTMEM_32 = 0x40;
    DAT_INTMEM_33 = 0x10;
    DAT_INTMEM_34 = 0;
    DAT_INTMEM_35 = 0x40;
    DAT_INTMEM_2a = 0x21;
    DAT_INTMEM_2b = 0;
    DAT_INTMEM_2c = 0;
    DAT_INTMEM_2d = 0;
    DAT_INTMEM_2e = 1;
    DAT_INTMEM_2f = 0;
    FUN_CODE_1aa9(0x4f09);
    uVar7 = CONCAT11(BANK2_R1,BANK2_R0);
    bVar2 = BANK2_R2;
    BANK0_R2 = bVar3;
    param_3 = FUN_CODE_3ed5(uVar7,BANK2_R2);
    bVar3 = BANK0_R2;
    BANK0_R2 = bVar3;
    if ((param_3 & 1) != 0) {
      DAT_EXTMEM_4fe7 = 0;
      uINTMEMd4 = 0;
      DAT_INTMEM_2f = 0xd4;
      DAT_INTMEM_30 = 0xf;
      DAT_INTMEM_31 = 0;
      DAT_INTMEM_32 = 0x40;
      DAT_INTMEM_33 = 0x10;
      DAT_INTMEM_34 = 0;
      DAT_INTMEM_35 = 0x40;
      DAT_INTMEM_2a = 0x11;
      DAT_INTMEM_2b = 1;
      DAT_INTMEM_2c = 0;
      DAT_INTMEM_2d = 0;
      DAT_INTMEM_2e = 1;
      uVar6 = 0x4f;
      FUN_CODE_1aa9(0x4f08);
      uINTMEMd5 = 0;
      uINTMEMd6 = 0;
      uINTMEMd7 = 0x3f;
      DAT_INTMEM_2f = 0xd5;
      DAT_INTMEM_30 = 0xf;
      DAT_INTMEM_31 = 0;
      DAT_INTMEM_32 = 0x40;
      DAT_INTMEM_33 = 0x10;
      DAT_INTMEM_34 = 0;
      DAT_INTMEM_35 = 0x40;
      DAT_INTMEM_2a = 0xc0;
      DAT_INTMEM_2b = 1;
      DAT_INTMEM_2c = 0;
      DAT_INTMEM_2d = 0;
      DAT_INTMEM_2e = 3;
      uVar7 = CONCAT11(uVar6,8);
      FUN_CODE_1aa9(uVar7);
      BANK0_R2 = bVar3;
    }
  }
  if (BANK1_R5 == '\0') goto LAB_CODE_3479;
LAB_CODE_3b47:
  bVar3 = BANK0_R2;
  DAT_INTMEM_7a = 0x20;
  DAT_INTMEM_7b = 0xb;
  uVar7 = uVar7 & 0xff00;
  FUN_CODE_0270(uVar7);
  uVar6 = (undefined1)(uVar7 >> 8);
  BANK1_R5 = '\0';
  if (((BANK3_R0 != '\0') || (uVar6 = 0x4f, param_3 = bEXTMEM4feb, bEXTMEM4feb != 0)) ||
     ((uVar6 = 0xcc, cEXTMEMcc8d != '\0' || (param_2 == '\0')))) goto LAB_CODE_3e82;
  uVar7 = 0xcc02;
  BANK0_R2 = bVar3;
  FUN_CODE_1f0b();
  param_3 = (byte)uVar7;
  BANK0_R2 = bVar3;
  if (param_3 != 1) goto LAB_CODE_3b8c;
  goto LAB_CODE_2a74;
LAB_CODE_3b8c:
  if (BANK1_R5 == '\0') {
    if (BANK1_R6 != '\0') goto LAB_CODE_3be5;
    uVar7 = 0;
    bVar5 = bCODE0048;
    if ((bCODE0048 >> 2 & 1) != 0) {
      uVar7 = 0;
      if ((bCODE0048 >> 5 & 1) != 0) {
        DAT_INTMEM_7d = DAT_EXTMEM_0120;
        DAT_INTMEM_7a = BANK1_R1;
        DAT_INTMEM_7b = BANK1_R2;
        DAT_INTMEM_7c = BANK2_R4;
        uVar7 = 0x10c;
        FUN_CODE_11f9(0x10c);
      }
      BANK0_R2 = bVar3;
      FUN_CODE_0326();
    }
    uVar6 = (undefined1)(uVar7 >> 8);
    BANK0_R3 = DAT_INTMEM_81 & BANK3_R4;
    BANK0_R2 = bVar3;
    if (bVar5 != BANK3_R4) goto LAB_CODE_3be5;
    BANK0_R3 = DAT_INTMEM_82 & BANK3_R5;
    if (bVar5 != BANK3_R5) goto LAB_CODE_3be5;
    if (BANK2_R3 == '\0') goto LAB_CODE_3be5;
    param_3 = BANK2_R7 & 0xc0;
    if (param_3 == 0xc0) {
      DAT_INTMEM_7a = BANK1_R1;
      DAT_INTMEM_7b = BANK1_R2;
      DAT_INTMEM_7c = BANK2_R4;
      DAT_INTMEM_7d = BANK2_R7;
      uVar7 = CONCAT11(uVar6,4);
      FUN_CODE_11f9(uVar7);
      BANK0_R2 = bVar3;
    }
    else {
LAB_CODE_3e82:
      if ((BANK1_R0 == 0) && (uVar6 = 0xd2, param_3 = DAT_EXTMEM_d25c, (DAT_EXTMEM_d25c & 0xf) == 0)
         ) {
        uVar7 = 0xcc21;
        uEXTMEMcc21 = 1;
        BANK0_R2 = bVar3;
      }
      else {
        DAT_INTMEM_7a = BANK1_R1;
        DAT_INTMEM_7b = BANK1_R2;
        DAT_INTMEM_7c = BANK2_R4;
        DAT_INTMEM_7d = 0;
        uVar7 = CONCAT11(uVar6,0xd);
        BANK0_R2 = bVar3;
        FUN_CODE_11f9(uVar7);
        BANK0_R2 = bVar3;
      }
    }
LAB_CODE_3479:
    do {
      while (bVar3 = BANK0_R2, BANK2_R6 != '\0') {
LAB_CODE_34eb:
        uVar6 = BANK0_R4;
        BANK2_R6 = '\0';
        DAT_INTMEM_77 = param_3 & 7;
        bVar5 = bINTMEM7e & 0x60;
        DAT_INTMEM_76 = bINTMEM80;
        DAT_INTMEM_7a = 0x20;
        DAT_INTMEM_7b = 0x19;
        uVar7 = uVar7 & 0xff00;
        BANK0_R2 = bVar3;
        BANK0_R3 = bVar5;
        FUN_CODE_0270(uVar7,param_3 & 0x18);
        BANK0_R5 = bINTMEM7f & 0xf;
        BANK0_R2 = bVar3;
        BANK0_R3 = bVar5;
        BANK0_R4 = uVar6;
        if (BANK0_R5 < 0x10) {
                    /* WARNING: Could not recover jumptable at 0x3531. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ushort)(bVar2 * '\x03') + 0x3532))();
          return;
        }
      }
      DAT_INTMEM_7a = 0x20;
      DAT_INTMEM_7b = 6;
      FUN_CODE_0270(uVar7 & 0xff00);
      uEXTMEMcc2d = 0xfe;
      do {
        BANK3_R7 = 0xec;
        DAT_INTMEM_20 = 0x4f;
        DAT_INTMEM_21 = 0;
        DAT_INTMEM_22 = 0x72;
        DAT_INTMEM_23 = 0;
        DAT_INTMEM_24 = 0x40;
        DAT_INTMEM_25 = 0x73;
        DAT_INTMEM_26 = 0;
        DAT_INTMEM_27 = 0x40;
        BANK3_R6 = 0;
        param_3 = 0x26;
        BANK0_R2 = bVar3;
        FUN_CODE_17f4();
        uVar7 = 0x4fea;
        DAT_EXTMEM_4fea = param_3;
        if (param_3 == 0) {
          BANK0_R2 = bVar3;
          if (BANK1_R5 != '\0') goto LAB_CODE_3b47;
          if (BANK1_R6 == '\0') goto LAB_CODE_34eb;
          break;
        }
        uVar7 = 0x4fea;
        BANK0_R2 = bVar3;
        if (param_3 == 1) goto LAB_CODE_2a74;
        if (BANK1_R5 != '\0') goto LAB_CODE_3b47;
      } while (BANK1_R6 == '\0');
LAB_CODE_3be5:
      bVar3 = BANK0_R2;
      DAT_INTMEM_7a = 1;
      DAT_INTMEM_7b = 0xc;
      FUN_CODE_0270(uVar7 & 0xff00);
      BANK0_R3 = BANK0_R3 & 0xfc;
      uVar6 = 0x4f;
      bVar5 = DAT_EXTMEM_4fbf;
      if ((DAT_EXTMEM_4fbf == 1) && (uVar6 = 0, bVar5 = bCODE0049, (bCODE0049 >> 1 & 1) != 0)) {
        BANK0_R3 = BANK0_R3 | 1;
        DAT_EXTMEM_d67e = 0;
        uVar6 = 0xd6;
        DAT_EXTMEM_d67f = 0;
        bVar5 = DAT_EXTMEM_d77f;
      }
      BANK0_R2 = bVar3;
      if (BANK1_R6 != '\0') {
        DAT_INTMEM_30 = 0xf;
        DAT_INTMEM_31 = 0;
        DAT_INTMEM_32 = 0x40;
        DAT_INTMEM_33 = 0x10;
        DAT_INTMEM_34 = 0;
        DAT_INTMEM_35 = 0x40;
        DAT_INTMEM_2a = 0x21;
        DAT_INTMEM_2b = 0;
        DAT_INTMEM_2c = 0;
        DAT_INTMEM_2d = 0;
        DAT_INTMEM_2e = 1;
        DAT_INTMEM_2f = 0;
        FUN_CODE_1aa9(CONCAT11(uVar6,9),bVar5);
        bVar2 = BANK2_R2;
        BANK0_R2 = bVar3;
        bVar5 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
        bVar3 = BANK0_R2;
        BANK0_R2 = bVar3;
        if ((bVar5 & 1) != 0) {
          DAT_EXTMEM_4fe7 = 0;
          uINTMEMd4 = 0;
          DAT_INTMEM_2f = 0xd4;
          DAT_INTMEM_30 = 0xf;
          DAT_INTMEM_31 = 0;
          DAT_INTMEM_32 = 0x40;
          DAT_INTMEM_33 = 0x10;
          DAT_INTMEM_34 = 0;
          DAT_INTMEM_35 = 0x40;
          DAT_INTMEM_2a = 0x11;
          DAT_INTMEM_2b = 1;
          DAT_INTMEM_2c = 0;
          DAT_INTMEM_2d = 0;
          DAT_INTMEM_2e = 1;
          uVar6 = 0x4f;
          FUN_CODE_1aa9(0x4f08,bVar5);
          uINTMEMd5 = 0;
          uINTMEMd6 = 0;
          uINTMEMd7 = 0x3f;
          DAT_INTMEM_2f = 0xd5;
          DAT_INTMEM_30 = 0xf;
          DAT_INTMEM_31 = 0;
          DAT_INTMEM_32 = 0x40;
          DAT_INTMEM_33 = 0x10;
          DAT_INTMEM_34 = 0;
          DAT_INTMEM_35 = 0x40;
          DAT_INTMEM_2a = 0xc0;
          DAT_INTMEM_2b = 1;
          DAT_INTMEM_2c = 0;
          DAT_INTMEM_2d = 0;
          DAT_INTMEM_2e = 3;
          FUN_CODE_1aa9(CONCAT11(uVar6,8));
          BANK0_R2 = bVar3;
        }
      }
      BANK1_R6 = '\0';
      uEXTMEM4fe6 = 0;
      DAT_EXTMEM_cc00 = 1;
      DAT_EXTMEM_c200 = DAT_EXTMEM_c200 & 0xf1 | 3;
      if ((bCODE0048 >> 1 & 1) == 1) {
        param_3 = bEXTMEM4feb != 1;
        bVar1 = DAT_EXTMEM_4fbf != 1;
        if (bVar1 && (bool)param_3) {
          DAT_INTMEM_7a = BANK1_R1;
          DAT_INTMEM_7b = BANK1_R2;
          DAT_INTMEM_7c = BANK2_R4;
          DAT_INTMEM_7d = BANK2_R7;
          uVar7 = 0x4f03;
          FUN_CODE_11f9(0x4f03);
        }
        else {
          DAT_EXTMEM_4fbf = 0;
          if ((BANK2_R5 != '\0') ||
             (uVar7 = 0x4fe4, param_3 = DAT_EXTMEM_4fe4, DAT_EXTMEM_4fe4 != 0)) {
            do {
              bVar3 = DAT_EXTMEM_ca40;
              if ((DAT_EXTMEM_ca40 >> 1 & 1) == 1) break;
              bVar3 = bEXTMEMcb40;
            } while ((bEXTMEMcb40 & 6) != 0);
            uEXTMEMca0c = 1;
            DAT_INTMEM_30 = 0xf;
            DAT_INTMEM_31 = 0;
            DAT_INTMEM_32 = 0x40;
            DAT_INTMEM_33 = 0x10;
            DAT_INTMEM_34 = 0;
            DAT_INTMEM_35 = 0x40;
            DAT_INTMEM_2a = 2;
            DAT_INTMEM_2b = 1;
            DAT_INTMEM_2c = 0;
            DAT_INTMEM_2d = 0;
            DAT_INTMEM_2e = 1;
            DAT_INTMEM_2f = 0x8f;
            FUN_CODE_1aa9(0xca08,bVar3,bVar1);
            uEXTMEMce51 = 0x10;
            FUN_CODE_11d7();
            BANK0_R3 = BANK0_R3 & 0xfe;
            BANK2_R5 = '\0';
            uVar7 = 0x4fe4;
            DAT_EXTMEM_4fe4 = 0;
            param_3 = DAT_EXTMEM_d76d;
          }
        }
      }
      else if (param_2 == '\0') {
        if ((BANK2_R5 != '\0') || (uVar7 = 0x4fe4, param_3 = DAT_EXTMEM_4fe4, DAT_EXTMEM_4fe4 != 0))
        {
          do {
            bVar3 = DAT_EXTMEM_ca40;
            if ((DAT_EXTMEM_ca40 >> 1 & 1) == 1) break;
            bVar3 = bEXTMEMcb40;
          } while ((bEXTMEMcb40 & 6) != 0);
          uEXTMEMca0c = 1;
          DAT_INTMEM_30 = 0xf;
          DAT_INTMEM_31 = 0;
          DAT_INTMEM_32 = 0x40;
          DAT_INTMEM_33 = 0x10;
          DAT_INTMEM_34 = 0;
          DAT_INTMEM_35 = 0x40;
          DAT_INTMEM_2a = 2;
          DAT_INTMEM_2b = 1;
          DAT_INTMEM_2c = 0;
          DAT_INTMEM_2d = 0;
          DAT_INTMEM_2e = 1;
          DAT_INTMEM_2f = 0x8f;
          FUN_CODE_1aa9(0xca08,bVar3);
          uEXTMEMce51 = 0x10;
          FUN_CODE_11d7();
          BANK0_R3 = BANK0_R3 & 0xfe;
          BANK2_R5 = '\0';
          uVar7 = 0x4fe4;
          DAT_EXTMEM_4fe4 = 0;
          param_3 = DAT_EXTMEM_d76d;
        }
      }
      else {
        while (bEXTMEM4fb1 != 0) {
          DAT_INTMEM_7a = 0x20;
          DAT_INTMEM_7b = 0x28;
          FUN_CODE_0270(0x4f00);
        }
        DAT_INTMEM_7a = BANK1_R1;
        DAT_INTMEM_7b = BANK1_R2;
        DAT_INTMEM_7c = BANK2_R4;
        DAT_INTMEM_7d = BANK2_R7;
        uVar7 = 0x4f03;
        param_3 = bEXTMEM4fb1;
        FUN_CODE_11f9(0x4f03);
      }
      param_2 = '\0';
    } while( true );
  }
  goto LAB_CODE_3b47;
}



/* =========================================================
 * CODE:3604  FUN_CODE_3604  size=26
 * ========================================================= */

void FUN_CODE_3604(ushort param_1,char param_2,byte param_3,undefined1 param_4)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  undefined1 uVar7;
  undefined2 uVar8;
  ushort uVar9;
  
  bVar2 = BANK0_R4;
  bVar5 = BANK0_R3;
  bVar4 = BANK0_R2;
  if (DAT_INTMEM_77 == 0) {
    if (DAT_EXTMEM_4fe4 != 0) {
      BANK2_R5 = '\x01';
    }
    uVar9 = 0x4fbf;
    DAT_EXTMEM_4fbf = 1;
    bVar3 = DAT_EXTMEM_4fe4;
    BANK0_R2 = bVar4;
    BANK0_R3 = bVar5;
  }
  else {
    if (BANK1_R0 == 0) {
      BANK0_R5 = BANK0_R5 & 0xfc;
      param_1 = 0xd200;
    }
    DAT_INTMEM_7a = 1;
    DAT_INTMEM_7b = 8;
    FUN_CODE_0270(param_1 & 0xff00);
    if (BANK1_R0 == 0) {
      if ((DAT_EXTMEM_d25c & 0xf) == 0) {
        BANK0_R5 = BANK0_R5 | 0x40;
      }
      else {
        BANK0_R5 = BANK0_R5 & 0xbf;
      }
      if (((DAT_EXTMEM_d252 >> 5 & 1) == 1) ||
         ((((DAT_EXTMEM_d25c & 0xf) != 0 || ((DAT_EXTMEM_d252 >> 3 & 1) != 1)) &&
          (((DAT_EXTMEM_d25c & 0xf) == 0 || ((DAT_EXTMEM_d252 >> 2 & 1) == 0)))))) {
        uEXTMEM4fe5 = false;
      }
      else {
        uEXTMEM4fe5 = true;
      }
    }
    else {
      BANK0_R5 = BANK0_R5 & 8;
      uEXTMEM4fe5 = bEXTMEMc84b == 0;
    }
    bVar3 = bEXTMEMc806;
    if ((bool)uEXTMEM4fe5 == false) {
      BANK0_R5 = BANK0_R5 | 1;
    }
    else {
      BANK0_R5 = BANK0_R5 & 0xfe;
      if (BANK1_R0 == 0) {
        BANK0_R5 = BANK0_R5 | 4;
        bVar3 = bEXTMEMd208;
      }
    }
    cEXTMEM4fec = '\x01';
    DAT_INTMEM_5d = 0x78;
    DAT_INTMEM_5e = 0;
    DAT_INTMEM_5f = 0x40;
    DAT_INTMEM_60 = 0x79;
    DAT_INTMEM_61 = 0;
    DAT_INTMEM_62 = 0x40;
    DAT_INTMEM_63 = 0xec;
    DAT_INTMEM_64 = 0x4f;
    DAT_INTMEM_65 = 0;
    uVar9 = CONCAT11(0x4f,DAT_INTMEM_77);
    BANK0_R2 = bVar4;
    BANK0_R3 = bVar5;
    BANK0_R4 = bVar2;
    DAT_INTMEM_5b = param_4;
    DAT_INTMEM_5c = param_3;
    FUN_CODE_223b(uVar9);
    BANK0_R2 = bVar4;
    BANK0_R3 = bVar5;
    if ((BANK1_R6 == '\0') && (BANK2_R5 == '\0')) {
      if (cEXTMEM4fec == '\x01') {
        DAT_INTMEM_7a = 1;
        DAT_INTMEM_7b = 9;
        uVar7 = 0x4f;
        FUN_CODE_0270(0x4f00);
        DAT_INTMEM_7a = BANK1_R1;
        DAT_INTMEM_7b = BANK1_R2;
        DAT_INTMEM_7c = BANK2_R4;
        DAT_INTMEM_7d = 0;
        uVar9 = CONCAT11(uVar7,2);
        FUN_CODE_11f9(uVar9);
        BANK0_R2 = bVar4;
        goto LAB_CODE_3479;
      }
      uVar9 = (ushort)BANK3_R1 << 8;
      FUN_CODE_1da2(uVar9);
      DAT_INTMEM_7a = 1;
      DAT_INTMEM_7b = 10;
      FUN_CODE_0270(uVar9 & 0xff00);
      bVar4 = BANK0_R2;
      param_2 = '\x01';
      if (DAT_EXTMEM_4fe7 == '\0') {
        uEXTMEMd20b = 0x85;
        BANK0_R4 = BANK0_R4 & 0xf5 | 1;
      }
      else {
        uEXTMEMd20b = 0x84;
        BANK0_R4 = BANK0_R4 & 0xfe | 10;
      }
      uVar9 = 0;
      BANK0_R3 = bVar5;
      if ((bCODE0048 >> 3 & 1) != 1) {
        DAT_INTMEM_7a = DAT_INTMEM_78;
        DAT_INTMEM_7b = DAT_INTMEM_79;
        DAT_INTMEM_7d = 0;
        uVar9 = 0;
        DAT_INTMEM_7c = param_3;
        FUN_CODE_11f9(1,bCODE0048);
      }
      BANK0_R2 = bVar4;
      if (BANK1_R5 != '\0') goto LAB_CODE_3b47;
      goto LAB_CODE_3479;
    }
  }
LAB_CODE_3be5:
  bVar4 = BANK0_R2;
  DAT_INTMEM_7a = 1;
  DAT_INTMEM_7b = 0xc;
  FUN_CODE_0270(uVar9 & 0xff00);
  BANK0_R3 = BANK0_R3 & 0xfc;
  uVar7 = 0x4f;
  bVar5 = DAT_EXTMEM_4fbf;
  if ((DAT_EXTMEM_4fbf == 1) && (uVar7 = 0, bVar5 = bCODE0049, (bCODE0049 >> 1 & 1) != 0)) {
    BANK0_R3 = BANK0_R3 | 1;
    DAT_EXTMEM_d67e = 0;
    uVar7 = 0xd6;
    DAT_EXTMEM_d67f = 0;
    bVar5 = DAT_EXTMEM_d77f;
  }
  BANK0_R2 = bVar4;
  if (BANK1_R6 != '\0') {
    DAT_INTMEM_30 = 0xf;
    DAT_INTMEM_31 = 0;
    DAT_INTMEM_32 = 0x40;
    DAT_INTMEM_33 = 0x10;
    DAT_INTMEM_34 = 0;
    DAT_INTMEM_35 = 0x40;
    DAT_INTMEM_2a = 0x21;
    DAT_INTMEM_2b = 0;
    DAT_INTMEM_2c = 0;
    DAT_INTMEM_2d = 0;
    DAT_INTMEM_2e = 1;
    DAT_INTMEM_2f = 0;
    FUN_CODE_1aa9(CONCAT11(uVar7,9),bVar5);
    bVar3 = BANK2_R2;
    BANK0_R2 = bVar4;
    bVar5 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
    bVar4 = BANK0_R2;
    BANK0_R2 = bVar4;
    if ((bVar5 & 1) != 0) {
      DAT_EXTMEM_4fe7 = '\0';
      uINTMEMd4 = 0;
      DAT_INTMEM_2f = 0xd4;
      DAT_INTMEM_30 = 0xf;
      DAT_INTMEM_31 = 0;
      DAT_INTMEM_32 = 0x40;
      DAT_INTMEM_33 = 0x10;
      DAT_INTMEM_34 = 0;
      DAT_INTMEM_35 = 0x40;
      DAT_INTMEM_2a = 0x11;
      DAT_INTMEM_2b = 1;
      DAT_INTMEM_2c = 0;
      DAT_INTMEM_2d = 0;
      DAT_INTMEM_2e = 1;
      uVar7 = 0x4f;
      FUN_CODE_1aa9(0x4f08,bVar5);
      uINTMEMd5 = 0;
      uINTMEMd6 = 0;
      uINTMEMd7 = 0x3f;
      DAT_INTMEM_2f = 0xd5;
      DAT_INTMEM_30 = 0xf;
      DAT_INTMEM_31 = 0;
      DAT_INTMEM_32 = 0x40;
      DAT_INTMEM_33 = 0x10;
      DAT_INTMEM_34 = 0;
      DAT_INTMEM_35 = 0x40;
      DAT_INTMEM_2a = 0xc0;
      DAT_INTMEM_2b = 1;
      DAT_INTMEM_2c = 0;
      DAT_INTMEM_2d = 0;
      DAT_INTMEM_2e = 3;
      FUN_CODE_1aa9(CONCAT11(uVar7,8));
      BANK0_R2 = bVar4;
    }
  }
  BANK1_R6 = '\0';
  uEXTMEM4fe6 = 0;
  DAT_EXTMEM_cc00 = 1;
  DAT_EXTMEM_c200 = DAT_EXTMEM_c200 & 0xf1 | 3;
  if ((bCODE0048 >> 1 & 1) == 1) {
    param_3 = bEXTMEM4feb != 1;
    bVar1 = DAT_EXTMEM_4fbf != 1;
    if (bVar1 && (bool)param_3) {
      DAT_INTMEM_7a = BANK1_R1;
      DAT_INTMEM_7b = BANK1_R2;
      DAT_INTMEM_7c = BANK2_R4;
      DAT_INTMEM_7d = BANK2_R7;
      uVar9 = 0x4f03;
      FUN_CODE_11f9(0x4f03);
    }
    else {
      DAT_EXTMEM_4fbf = 0;
      if ((BANK2_R5 != '\0') || (uVar9 = 0x4fe4, param_3 = DAT_EXTMEM_4fe4, DAT_EXTMEM_4fe4 != 0)) {
        do {
          bVar4 = DAT_EXTMEM_ca40;
          if ((DAT_EXTMEM_ca40 >> 1 & 1) == 1) break;
          bVar4 = bEXTMEMcb40;
        } while ((bEXTMEMcb40 & 6) != 0);
        uEXTMEMca0c = 1;
        DAT_INTMEM_30 = 0xf;
        DAT_INTMEM_31 = 0;
        DAT_INTMEM_32 = 0x40;
        DAT_INTMEM_33 = 0x10;
        DAT_INTMEM_34 = 0;
        DAT_INTMEM_35 = 0x40;
        DAT_INTMEM_2a = 2;
        DAT_INTMEM_2b = 1;
        DAT_INTMEM_2c = 0;
        DAT_INTMEM_2d = 0;
        DAT_INTMEM_2e = 1;
        DAT_INTMEM_2f = 0x8f;
        FUN_CODE_1aa9(0xca08,bVar4,bVar1);
        uEXTMEMce51 = 0x10;
        FUN_CODE_11d7();
        BANK0_R3 = BANK0_R3 & 0xfe;
        BANK2_R5 = '\0';
        uVar9 = 0x4fe4;
        DAT_EXTMEM_4fe4 = 0;
        param_3 = DAT_EXTMEM_d76d;
      }
    }
  }
  else if (param_2 == '\0') {
    if ((BANK2_R5 != '\0') || (uVar9 = 0x4fe4, param_3 = DAT_EXTMEM_4fe4, DAT_EXTMEM_4fe4 != 0)) {
      do {
        bVar4 = DAT_EXTMEM_ca40;
        if ((DAT_EXTMEM_ca40 >> 1 & 1) == 1) break;
        bVar4 = bEXTMEMcb40;
      } while ((bEXTMEMcb40 & 6) != 0);
      uEXTMEMca0c = 1;
      DAT_INTMEM_30 = 0xf;
      DAT_INTMEM_31 = 0;
      DAT_INTMEM_32 = 0x40;
      DAT_INTMEM_33 = 0x10;
      DAT_INTMEM_34 = 0;
      DAT_INTMEM_35 = 0x40;
      DAT_INTMEM_2a = 2;
      DAT_INTMEM_2b = 1;
      DAT_INTMEM_2c = 0;
      DAT_INTMEM_2d = 0;
      DAT_INTMEM_2e = 1;
      DAT_INTMEM_2f = 0x8f;
      FUN_CODE_1aa9(0xca08,bVar4);
      uEXTMEMce51 = 0x10;
      FUN_CODE_11d7();
      BANK0_R3 = BANK0_R3 & 0xfe;
      BANK2_R5 = '\0';
      uVar9 = 0x4fe4;
      DAT_EXTMEM_4fe4 = 0;
      param_3 = DAT_EXTMEM_d76d;
    }
  }
  else {
    while (bEXTMEM4fb1 != 0) {
      DAT_INTMEM_7a = 0x20;
      DAT_INTMEM_7b = 0x28;
      FUN_CODE_0270(0x4f00);
    }
    DAT_INTMEM_7a = BANK1_R1;
    DAT_INTMEM_7b = BANK1_R2;
    DAT_INTMEM_7c = BANK2_R4;
    DAT_INTMEM_7d = BANK2_R7;
    uVar9 = 0x4f03;
    param_3 = bEXTMEM4fb1;
    FUN_CODE_11f9(0x4f03);
  }
  param_2 = '\0';
LAB_CODE_3479:
  do {
    bVar4 = BANK0_R2;
    if (BANK2_R6 == '\0') {
      DAT_INTMEM_7a = 0x20;
      DAT_INTMEM_7b = 6;
      FUN_CODE_0270(uVar9 & 0xff00);
      uEXTMEMcc2d = 0xfe;
      while( true ) {
        BANK3_R7 = 0xec;
        DAT_INTMEM_20 = 0x4f;
        DAT_INTMEM_21 = 0;
        DAT_INTMEM_22 = 0x72;
        DAT_INTMEM_23 = 0;
        DAT_INTMEM_24 = 0x40;
        DAT_INTMEM_25 = 0x73;
        DAT_INTMEM_26 = 0;
        DAT_INTMEM_27 = 0x40;
        BANK3_R6 = 0;
        param_3 = 0x26;
        BANK0_R2 = bVar4;
        FUN_CODE_17f4();
        uVar9 = 0x4fea;
        DAT_EXTMEM_4fea = param_3;
        if (param_3 == 0) break;
        uVar9 = 0x4fea;
        BANK0_R2 = bVar4;
        if (param_3 == 1) goto LAB_CODE_2a74;
        if (BANK1_R5 != '\0') goto LAB_CODE_3b47;
        if (BANK1_R6 != '\0') goto LAB_CODE_3be5;
      }
      BANK0_R2 = bVar4;
      if (BANK1_R5 != '\0') {
LAB_CODE_3b47:
        bVar4 = BANK0_R2;
        DAT_INTMEM_7a = 0x20;
        DAT_INTMEM_7b = 0xb;
        uVar9 = uVar9 & 0xff00;
        FUN_CODE_0270(uVar9);
        uVar7 = (undefined1)(uVar9 >> 8);
        BANK1_R5 = '\0';
        if ((((BANK3_R0 == '\0') && (uVar7 = 0x4f, param_3 = bEXTMEM4feb, bEXTMEM4feb == 0)) &&
            (uVar7 = 0xcc, cEXTMEMcc8d == '\0')) && (param_2 != '\0')) {
          uVar9 = 0xcc02;
          BANK0_R2 = bVar4;
          FUN_CODE_1f0b();
          param_3 = (byte)uVar9;
          BANK0_R2 = bVar4;
          if (param_3 == 1) {
LAB_CODE_2a74:
            do {
              if ((bEXTMEMd66f >> 4 & 1) != 0) {
                uEXTMEMca10 = 3;
                uEXTMEMca15 = 0x20;
                uEXTMEMca14 = 7;
              }
              if ((bCODE0048 >> 4 & 1) != 0) {
                uEXTMEMd7fc = 1;
                uEXTMEMd7fa = 1;
                uEXTMEMd7f8 = 1;
                uEXTMEMd7f6 = 1;
              }
              do {
                BANK0_R2 = BANK0_R2 & 0xe;
              } while (bEXTMEMc800 == 0xe);
              BANK1_R0 = DAT_EXTMEM_c801 & 0x80;
              if (BANK1_R0 == 0) {
                BANK0_R2 = BANK0_R2 | 0x9b;
                uEXTMEMd21e = 0xff;
              }
              else {
                bEXTMEMcc8e = 0;
              }
              bVar4 = BANK0_R2;
              DAT_EXTMEM_4fe9 = 0;
              BANK1_R1 = 0;
              BANK1_R2 = 0;
              BANK2_R4 = 0;
              BANK1_R5 = '\0';
              BANK1_R6 = '\0';
              BANK2_R3 = '\0';
              BANK2_R7 = 0;
              DAT_EXTMEM_4fe4 = 0;
              BANK2_R5 = '\0';
              BANK2_R6 = '\0';
              BANK3_R0 = '\0';
              bEXTMEM4feb = 0;
              param_2 = '\0';
              uEXTMEM4fe5 = 0;
              uEXTMEM4fe6 = 0;
              DAT_EXTMEM_4fe7 = '\0';
              DAT_EXTMEM_4fae = 0;
              uEXTMEMd766 = 8;
              uEXTMEMd600 = 0;
              uEXTMEMd680 = 0;
              uEXTMEMd700 = 0;
              uEXTMEMd780 = 0;
              if (cCODE004b < '\0') {
                uEXTMEMd677 = 0;
              }
              else {
                uEXTMEMd677 = 0xf;
              }
              if (BANK1_R0 == 0) {
                BANK0_R3 = BANK0_R3 & 0xfc | 4;
                uEXTMEMd254 = 0xff;
                uEXTMEMd255 = 0xff;
              }
              else if ((bEXTMEMc84b >> 3 & 1) == 1) {
                BANK0_R3 = BANK0_R3 | 4;
              }
              else {
                BANK0_R3 = BANK0_R3 & 0xfa;
              }
              uEXTMEMcc92 = 8;
              BANK3_R1 = bEXTMEMcc8e;
              uEXTMEMcc96 = 1;
              BANK0_R3 = BANK0_R3 & 0xfe;
              FUN_CODE_1da2(5);
              DAT_EXTMEM_4fea = DAT_EXTMEM_c801 & 0x3f;
              if (DAT_EXTMEM_4fea == 8) {
                for (bEXTMEM4ff0 = 0; bEXTMEM4ff0 < 2; bEXTMEM4ff0 = bEXTMEM4ff0 + 1) {
                }
                BANK0_R3 = BANK0_R3 & 0xfd;
                DAT_INTMEM_7a = 0x10;
                DAT_INTMEM_7b = 0x1c;
                BANK0_R2 = bVar4;
                FUN_CODE_0270(0xd600);
                do {
                } while ((bEXTMEMd67c >> 2 & 1) == 0);
              }
              while ((((DAT_EXTMEM_c848 >> 2 & 1) != 0 &&
                      (uVar9 = 0xcc93, bVar5 = DAT_EXTMEM_c848, DAT_EXTMEM_cc93 == '\0')) ||
                     (uVar9 = 0xc808, bVar5 = DAT_EXTMEM_c808, (DAT_EXTMEM_c808 & 1) != 0))) {
                DAT_INTMEM_7a = 0x20;
                DAT_INTMEM_7b = 0x20;
                BANK0_R2 = bVar4;
                FUN_CODE_0270(uVar9 & 0xff00,bVar5);
              }
              do {
              } while ((DAT_EXTMEM_cc07 & 1) == 1);
              do {
              } while ((bEXTMEMc82f & 1) == 0);
              BANK0_R3 = BANK0_R3 | 3;
              if ((bEXTMEMc800 >> 4 & 1) != 0) {
                BANK0_R2 = bVar4;
                FUN_CODE_1da2(0x1c2,bEXTMEMc800);
              }
              if ((bEXTMEMc800 & 1) == 1) {
                if (cEXTMEMd66e == '\x01') {
                  bEXTMEMc890 = 1;
                  uEXTMEMc891 = 0xc;
                  uEXTMEMd449 = 2;
                  uEXTMEMd766 = 0;
                  DAT_EXTMEM_d672 = 0;
                  BANK0_R3 = BANK0_R3 & 3;
                }
                else if (cEXTMEMd66e == '\x02') {
                  DAT_EXTMEM_d672 = 0xf;
                  BANK0_R3 = BANK0_R3 & 2;
                }
                else {
                  DAT_EXTMEM_d672 = 0xf;
                  BANK0_R3 = BANK0_R3 & 3;
                }
                BANK0_R2 = bVar4;
                for (bEXTMEM4ff0 = 0; bEXTMEM4ff0 < 4; bEXTMEM4ff0 = bEXTMEM4ff0 + 1) {
                  DAT_INTMEM_7b = bEXTMEM4ff0;
                  DAT_INTMEM_7a = 0;
                  FUN_CODE_0e94(0x4f00);
                }
                uEXTMEMca5a = 0;
                BANK0_R3 = BANK0_R3 | 1;
                uEXTMEMd767 = 0x3f;
                BANK1_R1 = 4;
                do {
                  if (bEXTMEMc890 != 0) {
                    DAT_INTMEM_7a = 0x20;
                    DAT_INTMEM_7b = 4;
                    FUN_CODE_0270(0xc800);
                    do {
                    } while( true );
                  }
                  DAT_INTMEM_7a = 1;
                  DAT_INTMEM_7b = 2;
                  FUN_CODE_0270(0xc800);
                  uEXTMEMd446 = 0xc4;
                  uEXTMEMd447 = 0;
                  uEXTMEMd453 = 0x3a;
                  uEXTMEMd47d = 0x3a;
                  uEXTMEMd454 = 0x54;
                  uEXTMEMd47e = 0x54;
                  FUN_CODE_0478();
                  while (FUN_CODE_0aba(), (DAT_EXTMEM_c802 & 1) == 0) {
                    if ((DAT_EXTMEM_cc07 & 1) != 0) {
                      FUN_CODE_0e61(DAT_EXTMEM_cc07);
                      goto LAB_CODE_2a74;
                    }
                  }
                  FUN_CODE_0f3d(DAT_EXTMEM_c802);
                  FUN_CODE_1010();
                  FUN_CODE_1da2(0xf);
                  BANK0_R3 = BANK0_R3 & 0xdd;
                  DAT_EXTMEM_cc00 = 0;
                  FUN_CODE_1043();
                  uEXTMEMce51 = 0;
                  DAT_INTMEM_7a = 1;
                  DAT_INTMEM_7b = 3;
                  bVar4 = FUN_CODE_0270(0xce00);
                  while( true ) {
                    FUN_CODE_0aba(bVar4);
                    while (DAT_EXTMEM_cc93 == '\x01') {
                      DAT_INTMEM_7a = 0x20;
                      DAT_INTMEM_7b = 0x21;
                      FUN_CODE_0270(0xcc00);
                    }
                    if (((((DAT_EXTMEM_c802 & 1) != 1) && ((bEXTMEMc890 & 1) == 0)) ||
                        (-1 < (char)DAT_EXTMEM_d77f)) && ((bEXTMEMc890 & 1) != 1)) break;
                    DAT_EXTMEM_4fea = DAT_EXTMEM_cc07;
                    if ((DAT_EXTMEM_cc07 & 1) != 0) {
                      FUN_CODE_0e61(DAT_EXTMEM_cc07);
                      goto LAB_CODE_2a74;
                    }
                    bVar4 = DAT_EXTMEM_cc07;
                    if ((DAT_EXTMEM_cc07 >> 2 & 1) != 0) {
                      bINTMEM7f = BANK0_R3;
                      bINTMEM80 = BANK0_R3;
                      bVar4 = bEXTMEMcc37;
                    }
                  }
                  FUN_CODE_0e61(bEXTMEMc890);
                } while( true );
              }
              uEXTMEMca5a = 0;
              DAT_INTMEM_7a = 1;
              DAT_INTMEM_7b = 5;
              BANK0_R2 = bVar4;
              FUN_CODE_0270(0xca00,bEXTMEMc800);
              cEXTMEM4fef = '\0';
              uVar7 = 200;
              BANK0_R2 = bVar4;
              if (((DAT_EXTMEM_c848 >> 4 & 1) != 1) ||
                 ((bVar5 = DAT_EXTMEM_c848, BANK1_R0 == 0 &&
                  (uVar7 = 0xd2, bVar5 = DAT_EXTMEM_d252, (DAT_EXTMEM_d252 >> 5 & 1) != 0))))
              goto LAB_CODE_33b1;
              DAT_INTMEM_ee = 1;
              DAT_INTMEM_2f = 0xee;
              DAT_INTMEM_30 = 0xf;
              DAT_INTMEM_31 = 0;
              DAT_INTMEM_32 = 0x40;
              DAT_INTMEM_33 = 0x10;
              DAT_INTMEM_34 = 0;
              DAT_INTMEM_35 = 0x40;
              DAT_INTMEM_2a = 0;
              DAT_INTMEM_2b = 6;
              DAT_INTMEM_2c = 0;
              DAT_INTMEM_2d = 0;
              DAT_INTMEM_2e = 1;
              uVar8 = CONCAT11(uVar7,8);
              FUN_CODE_1aa9(uVar8,bVar5);
              uVar7 = (undefined1)((ushort)uVar8 >> 8);
              if (BANK1_R0 != 0) goto LAB_CODE_2f76;
              uEXTMEMcc0c = 199;
              uEXTMEMcc0b = 0;
              do {
                if (((cEXTMEMcc29 == '\0') && (99 < bEXTMEMcc0a)) || ((bEXTMEMcc90 & 1) == 1)) {
                  uVar7 = 0xcc;
                  uEXTMEMcc0c = 99;
                  goto LAB_CODE_2f76;
                }
              } while ((DAT_EXTMEM_cc07 & 1) == 0);
              DAT_EXTMEM_cc00 = 1;
              BANK0_R2 = bVar4;
              FUN_CODE_11d7(DAT_EXTMEM_cc07);
              BANK0_R3 = BANK0_R3 & 0xfe;
              DAT_EXTMEM_c200 = DAT_EXTMEM_c200 & 0xf1 | 3;
              DAT_EXTMEM_d67e = 0;
              DAT_EXTMEM_d67f = 0;
            } while( true );
          }
          if (BANK1_R5 != '\0') goto LAB_CODE_3b47;
          if (BANK1_R6 != '\0') goto LAB_CODE_3be5;
          uVar9 = 0;
          bVar5 = bCODE0048;
          if ((bCODE0048 >> 2 & 1) != 0) {
            uVar9 = 0;
            if ((bCODE0048 >> 5 & 1) != 0) {
              DAT_INTMEM_7d = DAT_EXTMEM_0120;
              DAT_INTMEM_7a = BANK1_R1;
              DAT_INTMEM_7b = BANK1_R2;
              DAT_INTMEM_7c = BANK2_R4;
              uVar9 = 0x10c;
              FUN_CODE_11f9(0x10c);
            }
            BANK0_R2 = bVar4;
            FUN_CODE_0326();
          }
          uVar7 = (undefined1)(uVar9 >> 8);
          BANK0_R2 = bVar4;
          BANK0_R3 = DAT_INTMEM_81 & BANK3_R4;
          if (((bVar5 != BANK3_R4) || (BANK0_R3 = DAT_INTMEM_82 & BANK3_R5, bVar5 != BANK3_R5)) ||
             (BANK2_R3 == '\0')) goto LAB_CODE_3be5;
          param_3 = BANK2_R7 & 0xc0;
          if (param_3 == 0xc0) {
            DAT_INTMEM_7a = BANK1_R1;
            DAT_INTMEM_7b = BANK1_R2;
            DAT_INTMEM_7c = BANK2_R4;
            DAT_INTMEM_7d = BANK2_R7;
            uVar9 = CONCAT11(uVar7,4);
            FUN_CODE_11f9(uVar9);
            BANK0_R2 = bVar4;
            goto LAB_CODE_3479;
          }
        }
        if ((BANK1_R0 == 0) &&
           (uVar7 = 0xd2, param_3 = DAT_EXTMEM_d25c, (DAT_EXTMEM_d25c & 0xf) == 0)) {
          uVar9 = 0xcc21;
          uEXTMEMcc21 = 1;
          BANK0_R2 = bVar4;
        }
        else {
          DAT_INTMEM_7a = BANK1_R1;
          DAT_INTMEM_7b = BANK1_R2;
          DAT_INTMEM_7c = BANK2_R4;
          DAT_INTMEM_7d = 0;
          uVar9 = CONCAT11(uVar7,0xd);
          BANK0_R2 = bVar4;
          FUN_CODE_11f9(uVar9);
          BANK0_R2 = bVar4;
        }
        goto LAB_CODE_3479;
      }
      if (BANK1_R6 != '\0') goto LAB_CODE_3be5;
    }
    bVar2 = BANK0_R4;
    BANK2_R6 = '\0';
    DAT_INTMEM_77 = param_3 & 7;
    bVar5 = bINTMEM7e & 0x60;
    DAT_INTMEM_76 = bINTMEM80;
    DAT_INTMEM_7a = 0x20;
    DAT_INTMEM_7b = 0x19;
    uVar9 = uVar9 & 0xff00;
    BANK0_R2 = bVar4;
    BANK0_R3 = bVar5;
    FUN_CODE_0270(uVar9,param_3 & 0x18);
    BANK0_R5 = bINTMEM7f & 0xf;
    BANK0_R2 = bVar4;
    BANK0_R3 = bVar5;
    BANK0_R4 = bVar2;
    if (BANK0_R5 < 0x10) {
                    /* WARNING: Could not recover jumptable at 0x3531. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ushort)(bVar3 * '\x03') + 0x3532))();
      return;
    }
  } while( true );
LAB_CODE_2f76:
  DAT_INTMEM_30 = 0xf;
  DAT_INTMEM_31 = 0;
  DAT_INTMEM_32 = 0x40;
  DAT_INTMEM_33 = 0x10;
  DAT_INTMEM_34 = 0;
  DAT_INTMEM_35 = 0x40;
  DAT_INTMEM_2a = 0;
  DAT_INTMEM_2b = 0;
  DAT_INTMEM_2c = 0;
  DAT_INTMEM_2d = 0;
  DAT_INTMEM_2e = 0xc;
  DAT_INTMEM_2f = 0;
  BANK0_R2 = bVar4;
  FUN_CODE_1aa9(CONCAT11(uVar7,9));
  BANK0_R2 = bVar4;
  bVar4 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
  cEXTMEM4fef = 0x11 < bVar4;
  bVar3 = BANK2_R2;
  bVar4 = FUN_CODE_3ed5(CONCAT11(BANK2_R1 - (((0xfd < BANK2_R0) << 7) >> 7),BANK2_R0 + 2),BANK2_R2);
  DAT_EXTMEM_4fae = bVar4 & 0x40;
  if (BANK1_R0 == 0) {
    uEXTMEMd257 = 0x11;
    BANK0_R3 = 0;
    cVar6 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
    if ((cVar6 != '\x10') && (cVar6 != '\x11')) {
      if (cVar6 == '\x12') {
        BANK0_R3 = BANK0_R3 | 0x10;
      }
      else {
        BANK0_R3 = BANK0_R3 | 0x10;
      }
    }
    if ((bEXTMEMc80a & 0xf) == 0) {
      cVar6 = FUN_CODE_3ed5(CONCAT11(BANK2_R1 - (((0xfe < BANK2_R0) << 7) >> 7),BANK2_R0 + 1),
                            BANK2_R2);
      if (cVar6 != '\x06') {
        if (cVar6 == '\n') {
          BANK0_R3 = BANK0_R3 | 1;
        }
        else if (cVar6 == '\x14') {
          BANK0_R3 = BANK0_R3 | 2;
        }
        else {
          BANK0_R3 = BANK0_R3 | 2;
        }
      }
    }
    else {
      BANK0_R3 = BANK0_R3 & 0xf;
      if (bEXTMEMc80a != 1) {
        if (bEXTMEMc80a == 2) {
          BANK0_R3 = BANK0_R3 | 1;
        }
        else if (bEXTMEMc80a == 3) {
          BANK0_R3 = BANK0_R3 | 2;
        }
        else {
          BANK0_R3 = BANK0_R3 | 2;
        }
      }
    }
    if ((bEXTMEMc80a & 0xf0) == 0) {
      cVar6 = FUN_CODE_3ed5(CONCAT11(BANK2_R1 - (((0xfd < BANK2_R0) << 7) >> 7),BANK2_R0 + 2),
                            BANK2_R2);
      BANK0_R3 = BANK0_R3 & 0x1f;
      if (cVar6 != '\x01') {
        if (cVar6 == '\x02') {
          BANK0_R3 = BANK0_R3 | 0x10;
        }
        else if (cVar6 == '\x04') {
          BANK0_R3 = BANK0_R3 | 0x20;
        }
        else {
          BANK0_R3 = BANK0_R3 | 0x20;
        }
      }
    }
    else {
      BANK0_R3 = BANK0_R3 & 0xf0;
      if (bEXTMEMc80a != 0x10) {
        if (bEXTMEMc80a == 0x20) {
          BANK0_R3 = BANK0_R3 | 0x10;
        }
        else if (bEXTMEMc80a == 0x40) {
          BANK0_R3 = BANK0_R3 | 0x20;
        }
        else {
          BANK0_R3 = BANK0_R3 | 0x20;
        }
      }
    }
    bVar3 = BANK2_R1 - (((0xfd < BANK2_R0) << 7) >> 7);
    bVar4 = FUN_CODE_3ed5(CONCAT11(bVar3,BANK2_R0 + 2),BANK2_R2);
    BANK0_R3 = BANK0_R3 & 0xfe | bVar4 & 0xc0;
  }
  bVar4 = BANK0_R2;
  if ((bCODE0048 >> 2 & 1) != 0) {
    DAT_INTMEM_30 = 0xf;
    DAT_INTMEM_31 = 0;
    DAT_INTMEM_32 = 0x40;
    DAT_INTMEM_33 = 0x10;
    DAT_INTMEM_34 = 0;
    DAT_INTMEM_35 = 0x40;
    DAT_INTMEM_2a = 0;
    DAT_INTMEM_2b = 2;
    DAT_INTMEM_2c = 0;
    DAT_INTMEM_2d = 0;
    DAT_INTMEM_2e = 1;
    DAT_INTMEM_2f = 0;
    FUN_CODE_1aa9(9,bCODE0048);
    bVar3 = BANK2_R2;
    bVar5 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
    DAT_EXTMEM_0120 = bVar5 & 0x1f;
    FUN_CODE_0326();
  }
  BANK0_R2 = bVar4;
  if (cEXTMEM4fef != '\0') {
    DAT_INTMEM_30 = 0xf;
    DAT_INTMEM_31 = 0;
    DAT_INTMEM_32 = 0x40;
    DAT_INTMEM_33 = 0x10;
    DAT_INTMEM_34 = 0;
    DAT_INTMEM_35 = 0x40;
    DAT_INTMEM_2a = 0xe;
    DAT_INTMEM_2b = 0;
    DAT_INTMEM_2c = 0;
    DAT_INTMEM_2d = 0;
    DAT_INTMEM_2e = 1;
    DAT_INTMEM_2f = 0;
    FUN_CODE_1aa9(0x4f09,cEXTMEM4fef);
    bVar3 = BANK2_R2;
    if ((bEXTMEMc809 & 1) == 1) {
      BANK0_R2 = bVar4;
      cVar6 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
      BANK0_R3 = BANK0_R3 & 0x7f;
      if (BANK0_R3 < 5) {
                    /* WARNING: Could not recover jumptable at 0x32a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ushort)(byte)(cVar6 * '\x03') + 0x32aa))();
        return;
      }
    }
    else {
      BANK0_R2 = bVar4;
      cVar6 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
      BANK0_R3 = BANK0_R3 & 0x7f;
      if (BANK0_R3 < 5) {
                    /* WARNING: Could not recover jumptable at 0x3333. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ushort)(byte)(cVar6 * '\x03') + 0x3334))();
        return;
      }
    }
  }
LAB_CODE_33b1:
  bVar4 = BANK0_R2;
  uEXTMEM4fd9 = 1;
  DAT_EXTMEM_4fd8 = 4;
  BANK0_R3 = BANK0_R3 & 0xfe;
  uVar9 = 0x4fef;
  if (cEXTMEM4fef == '\0') {
    param_3 = 0;
  }
  else {
    DAT_INTMEM_30 = 0xf;
    DAT_INTMEM_31 = 0;
    DAT_INTMEM_32 = 0x40;
    DAT_INTMEM_33 = 0x10;
    DAT_INTMEM_34 = 0;
    DAT_INTMEM_35 = 0x40;
    DAT_INTMEM_2a = 0x21;
    DAT_INTMEM_2b = 0;
    DAT_INTMEM_2c = 0;
    DAT_INTMEM_2d = 0;
    DAT_INTMEM_2e = 1;
    DAT_INTMEM_2f = 0;
    FUN_CODE_1aa9(0x4f09);
    uVar9 = CONCAT11(BANK2_R1,BANK2_R0);
    bVar3 = BANK2_R2;
    BANK0_R2 = bVar4;
    param_3 = FUN_CODE_3ed5(uVar9,BANK2_R2);
    bVar4 = BANK0_R2;
    BANK0_R2 = bVar4;
    if ((param_3 & 1) != 0) {
      DAT_EXTMEM_4fe7 = '\0';
      uINTMEMd4 = 0;
      DAT_INTMEM_2f = 0xd4;
      DAT_INTMEM_30 = 0xf;
      DAT_INTMEM_31 = 0;
      DAT_INTMEM_32 = 0x40;
      DAT_INTMEM_33 = 0x10;
      DAT_INTMEM_34 = 0;
      DAT_INTMEM_35 = 0x40;
      DAT_INTMEM_2a = 0x11;
      DAT_INTMEM_2b = 1;
      DAT_INTMEM_2c = 0;
      DAT_INTMEM_2d = 0;
      DAT_INTMEM_2e = 1;
      uVar7 = 0x4f;
      FUN_CODE_1aa9(0x4f08);
      uINTMEMd5 = 0;
      uINTMEMd6 = 0;
      uINTMEMd7 = 0x3f;
      DAT_INTMEM_2f = 0xd5;
      DAT_INTMEM_30 = 0xf;
      DAT_INTMEM_31 = 0;
      DAT_INTMEM_32 = 0x40;
      DAT_INTMEM_33 = 0x10;
      DAT_INTMEM_34 = 0;
      DAT_INTMEM_35 = 0x40;
      DAT_INTMEM_2a = 0xc0;
      DAT_INTMEM_2b = 1;
      DAT_INTMEM_2c = 0;
      DAT_INTMEM_2d = 0;
      DAT_INTMEM_2e = 3;
      uVar9 = CONCAT11(uVar7,8);
      FUN_CODE_1aa9(uVar9);
      BANK0_R2 = bVar4;
    }
  }
  if (BANK1_R5 == '\0') goto LAB_CODE_3479;
  goto LAB_CODE_3b47;
}



/* =========================================================
 * CODE:361e  FUN_CODE_361e  size=89
 * ========================================================= */

void FUN_CODE_361e(char param_1,byte param_2)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  undefined1 uVar6;
  ushort uVar7;
  undefined2 uVar8;
  
  bVar2 = BANK0_R2;
  uEXTMEMcc0e = (DAT_INTMEM_76 >> 4 & 1) != 0;
  BANK0_R5 = BANK0_R5 & 1;
  DAT_INTMEM_2f = 0x76;
  DAT_INTMEM_30 = 0xf;
  DAT_INTMEM_31 = 0;
  DAT_INTMEM_32 = 0x40;
  DAT_INTMEM_33 = 0x10;
  DAT_INTMEM_34 = 0;
  DAT_INTMEM_35 = 0x40;
  DAT_INTMEM_2a = 7;
  DAT_INTMEM_2b = 1;
  DAT_INTMEM_2c = 0;
  DAT_INTMEM_2d = 0;
  DAT_INTMEM_2e = 1;
  uVar7 = 0xcc08;
  FUN_CODE_1aa9();
  cVar3 = (char)uVar7;
  BANK0_R2 = bVar2;
  if (cVar3 != '\x01') {
    if (BANK1_R5 != '\0') goto LAB_CODE_3b47;
    if (BANK1_R6 == '\0') goto LAB_CODE_3479;
    goto LAB_CODE_3be5;
  }
LAB_CODE_2a74:
  if ((bEXTMEMd66f >> 4 & 1) != 0) {
    uEXTMEMca10 = 3;
    uEXTMEMca15 = 0x20;
    uEXTMEMca14 = 7;
  }
  if ((bCODE0048 >> 4 & 1) != 0) {
    uEXTMEMd7fc = 1;
    uEXTMEMd7fa = 1;
    uEXTMEMd7f8 = 1;
    uEXTMEMd7f6 = 1;
  }
  do {
    BANK0_R2 = BANK0_R2 & 0xe;
  } while (bEXTMEMc800 == 0xe);
  BANK1_R0 = DAT_EXTMEM_c801 & 0x80;
  if (BANK1_R0 == 0) {
    BANK0_R2 = BANK0_R2 | 0x9b;
    uEXTMEMd21e = 0xff;
  }
  else {
    uEXTMEMcc8e = 0;
  }
  bVar2 = BANK0_R2;
  DAT_EXTMEM_4fe9 = 0;
  BANK1_R1 = 0;
  BANK1_R2 = 0;
  BANK2_R4 = 0;
  BANK1_R5 = '\0';
  BANK1_R6 = '\0';
  BANK2_R3 = '\0';
  BANK2_R7 = 0;
  DAT_EXTMEM_4fe4 = 0;
  BANK2_R5 = '\0';
  BANK2_R6 = '\0';
  BANK3_R0 = '\0';
  bEXTMEM4feb = 0;
  param_1 = '\0';
  uEXTMEM4fe5 = 0;
  uEXTMEM4fe6 = 0;
  DAT_EXTMEM_4fe7 = 0;
  DAT_EXTMEM_4fae = 0;
  uEXTMEMd766 = 8;
  uEXTMEMd600 = 0;
  uEXTMEMd680 = 0;
  uEXTMEMd700 = 0;
  uEXTMEMd780 = 0;
  if (cCODE004b < '\0') {
    uEXTMEMd677 = 0;
  }
  else {
    uEXTMEMd677 = 0xf;
  }
  if (BANK1_R0 == 0) {
    BANK0_R3 = BANK0_R3 & 0xfc | 4;
    uEXTMEMd254 = 0xff;
    uEXTMEMd255 = 0xff;
  }
  else if ((bEXTMEMc84b >> 3 & 1) == 1) {
    BANK0_R3 = BANK0_R3 | 4;
  }
  else {
    BANK0_R3 = BANK0_R3 & 0xfa;
  }
  uEXTMEMcc92 = 8;
  BANK3_R1 = uEXTMEMcc8e;
  uEXTMEMcc96 = 1;
  BANK0_R3 = BANK0_R3 & 0xfe;
  FUN_CODE_1da2(5);
  DAT_EXTMEM_4fea = DAT_EXTMEM_c801 & 0x3f;
  if (DAT_EXTMEM_4fea == 8) {
    for (bEXTMEM4ff0 = 0; bEXTMEM4ff0 < 2; bEXTMEM4ff0 = bEXTMEM4ff0 + 1) {
    }
    BANK0_R3 = BANK0_R3 & 0xfd;
    DAT_INTMEM_7a = 0x10;
    DAT_INTMEM_7b = 0x1c;
    BANK0_R2 = bVar2;
    FUN_CODE_0270(0xd600);
    do {
    } while ((bEXTMEMd67c >> 2 & 1) == 0);
  }
  while ((((DAT_EXTMEM_c848 >> 2 & 1) != 0 &&
          (uVar7 = 0xcc93, bVar5 = DAT_EXTMEM_c848, DAT_EXTMEM_cc93 == '\0')) ||
         (uVar7 = 0xc808, bVar5 = DAT_EXTMEM_c808, (DAT_EXTMEM_c808 & 1) != 0))) {
    DAT_INTMEM_7a = 0x20;
    DAT_INTMEM_7b = 0x20;
    BANK0_R2 = bVar2;
    FUN_CODE_0270(uVar7 & 0xff00,bVar5);
  }
  do {
  } while ((DAT_EXTMEM_cc07 & 1) == 1);
  do {
  } while ((bEXTMEMc82f & 1) == 0);
  BANK0_R3 = BANK0_R3 | 3;
  if ((bEXTMEMc800 >> 4 & 1) != 0) {
    BANK0_R2 = bVar2;
    FUN_CODE_1da2(0x1c2,bEXTMEMc800);
  }
  if ((bEXTMEMc800 & 1) == 1) {
    if (cEXTMEMd66e == '\x01') {
      bEXTMEMc890 = 1;
      uEXTMEMc891 = 0xc;
      uEXTMEMd449 = 2;
      uEXTMEMd766 = 0;
      DAT_EXTMEM_d672 = 0;
      BANK0_R3 = BANK0_R3 & 3;
    }
    else if (cEXTMEMd66e == '\x02') {
      DAT_EXTMEM_d672 = 0xf;
      BANK0_R3 = BANK0_R3 & 2;
    }
    else {
      DAT_EXTMEM_d672 = 0xf;
      BANK0_R3 = BANK0_R3 & 3;
    }
    BANK0_R2 = bVar2;
    for (bEXTMEM4ff0 = 0; bEXTMEM4ff0 < 4; bEXTMEM4ff0 = bEXTMEM4ff0 + 1) {
      DAT_INTMEM_7b = bEXTMEM4ff0;
      DAT_INTMEM_7a = 0;
      FUN_CODE_0e94(0x4f00);
    }
    uEXTMEMca5a = 0;
    BANK0_R3 = BANK0_R3 | 1;
    uEXTMEMd767 = 0x3f;
    BANK1_R1 = 4;
    do {
      if (bEXTMEMc890 != 0) {
        DAT_INTMEM_7a = 0x20;
        DAT_INTMEM_7b = 4;
        FUN_CODE_0270(0xc800);
        do {
        } while( true );
      }
      DAT_INTMEM_7a = 1;
      DAT_INTMEM_7b = 2;
      FUN_CODE_0270(0xc800);
      uEXTMEMd446 = 0xc4;
      uEXTMEMd447 = 0;
      uEXTMEMd453 = 0x3a;
      uEXTMEMd47d = 0x3a;
      uEXTMEMd454 = 0x54;
      uEXTMEMd47e = 0x54;
      FUN_CODE_0478();
      while (FUN_CODE_0aba(), (DAT_EXTMEM_c802 & 1) == 0) {
        if ((DAT_EXTMEM_cc07 & 1) != 0) {
          FUN_CODE_0e61(DAT_EXTMEM_cc07);
          goto LAB_CODE_2a74;
        }
      }
      FUN_CODE_0f3d(DAT_EXTMEM_c802);
      FUN_CODE_1010();
      FUN_CODE_1da2(0xf);
      BANK0_R3 = BANK0_R3 & 0xdd;
      DAT_EXTMEM_cc00 = 0;
      FUN_CODE_1043();
      uEXTMEMce51 = 0;
      DAT_INTMEM_7a = 1;
      DAT_INTMEM_7b = 3;
      bVar2 = FUN_CODE_0270(0xce00);
      while( true ) {
        FUN_CODE_0aba(bVar2);
        while (DAT_EXTMEM_cc93 == '\x01') {
          DAT_INTMEM_7a = 0x20;
          DAT_INTMEM_7b = 0x21;
          FUN_CODE_0270(0xcc00);
        }
        if (((((DAT_EXTMEM_c802 & 1) != 1) && ((bEXTMEMc890 & 1) == 0)) ||
            (-1 < (char)DAT_EXTMEM_d77f)) && ((bEXTMEMc890 & 1) != 1)) break;
        DAT_EXTMEM_4fea = DAT_EXTMEM_cc07;
        if ((DAT_EXTMEM_cc07 & 1) != 0) {
          FUN_CODE_0e61(DAT_EXTMEM_cc07);
          goto LAB_CODE_2a74;
        }
        bVar2 = DAT_EXTMEM_cc07;
        if ((DAT_EXTMEM_cc07 >> 2 & 1) != 0) {
          bINTMEM7f = BANK0_R3;
          bINTMEM80 = BANK0_R3;
          bVar2 = bEXTMEMcc37;
        }
      }
      FUN_CODE_0e61(bEXTMEMc890);
    } while( true );
  }
  uEXTMEMca5a = 0;
  DAT_INTMEM_7a = 1;
  DAT_INTMEM_7b = 5;
  BANK0_R2 = bVar2;
  FUN_CODE_0270(0xca00,bEXTMEMc800);
  cEXTMEM4fef = '\0';
  uVar6 = 200;
  BANK0_R2 = bVar2;
  if (((DAT_EXTMEM_c848 >> 4 & 1) == 1) &&
     ((bVar5 = DAT_EXTMEM_c848, BANK1_R0 != 0 ||
      (uVar6 = 0xd2, bVar5 = DAT_EXTMEM_d252, (DAT_EXTMEM_d252 >> 5 & 1) == 0)))) {
    DAT_INTMEM_ee = 1;
    DAT_INTMEM_2f = 0xee;
    DAT_INTMEM_30 = 0xf;
    DAT_INTMEM_31 = 0;
    DAT_INTMEM_32 = 0x40;
    DAT_INTMEM_33 = 0x10;
    DAT_INTMEM_34 = 0;
    DAT_INTMEM_35 = 0x40;
    DAT_INTMEM_2a = 0;
    DAT_INTMEM_2b = 6;
    DAT_INTMEM_2c = 0;
    DAT_INTMEM_2d = 0;
    DAT_INTMEM_2e = 1;
    uVar8 = CONCAT11(uVar6,8);
    FUN_CODE_1aa9(uVar8,bVar5);
    uVar6 = (undefined1)((ushort)uVar8 >> 8);
    if (BANK1_R0 == 0) {
      uEXTMEMcc0c = 199;
      uEXTMEMcc0b = 0;
      do {
        if (((cEXTMEMcc29 == '\0') && (99 < bEXTMEMcc0a)) || ((bEXTMEMcc90 & 1) == 1)) {
          uVar6 = 0xcc;
          uEXTMEMcc0c = 99;
          goto LAB_CODE_2f76;
        }
      } while ((DAT_EXTMEM_cc07 & 1) == 0);
      DAT_EXTMEM_cc00 = 1;
      BANK0_R2 = bVar2;
      FUN_CODE_11d7(DAT_EXTMEM_cc07);
      BANK0_R3 = BANK0_R3 & 0xfe;
      DAT_EXTMEM_c200 = DAT_EXTMEM_c200 & 0xf1 | 3;
      DAT_EXTMEM_d67e = 0;
      DAT_EXTMEM_d67f = 0;
      goto LAB_CODE_2a74;
    }
LAB_CODE_2f76:
    DAT_INTMEM_30 = 0xf;
    DAT_INTMEM_31 = 0;
    DAT_INTMEM_32 = 0x40;
    DAT_INTMEM_33 = 0x10;
    DAT_INTMEM_34 = 0;
    DAT_INTMEM_35 = 0x40;
    DAT_INTMEM_2a = 0;
    DAT_INTMEM_2b = 0;
    DAT_INTMEM_2c = 0;
    DAT_INTMEM_2d = 0;
    DAT_INTMEM_2e = 0xc;
    DAT_INTMEM_2f = 0;
    BANK0_R2 = bVar2;
    FUN_CODE_1aa9(CONCAT11(uVar6,9));
    BANK0_R2 = bVar2;
    bVar2 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
    cEXTMEM4fef = 0x11 < bVar2;
    cVar3 = BANK2_R2;
    bVar2 = FUN_CODE_3ed5(CONCAT11(BANK2_R1 - (((0xfd < BANK2_R0) << 7) >> 7),BANK2_R0 + 2),BANK2_R2
                         );
    DAT_EXTMEM_4fae = bVar2 & 0x40;
    if (BANK1_R0 == 0) {
      uEXTMEMd257 = 0x11;
      BANK0_R3 = 0;
      cVar3 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
      if ((cVar3 != '\x10') && (cVar3 != '\x11')) {
        if (cVar3 == '\x12') {
          BANK0_R3 = BANK0_R3 | 0x10;
        }
        else {
          BANK0_R3 = BANK0_R3 | 0x10;
        }
      }
      if ((bEXTMEMc80a & 0xf) == 0) {
        cVar3 = FUN_CODE_3ed5(CONCAT11(BANK2_R1 - (((0xfe < BANK2_R0) << 7) >> 7),BANK2_R0 + 1),
                              BANK2_R2);
        if (cVar3 != '\x06') {
          if (cVar3 == '\n') {
            BANK0_R3 = BANK0_R3 | 1;
          }
          else if (cVar3 == '\x14') {
            BANK0_R3 = BANK0_R3 | 2;
          }
          else {
            BANK0_R3 = BANK0_R3 | 2;
          }
        }
      }
      else {
        BANK0_R3 = BANK0_R3 & 0xf;
        if (bEXTMEMc80a != 1) {
          if (bEXTMEMc80a == 2) {
            BANK0_R3 = BANK0_R3 | 1;
          }
          else if (bEXTMEMc80a == 3) {
            BANK0_R3 = BANK0_R3 | 2;
          }
          else {
            BANK0_R3 = BANK0_R3 | 2;
          }
        }
      }
      if ((bEXTMEMc80a & 0xf0) == 0) {
        cVar3 = FUN_CODE_3ed5(CONCAT11(BANK2_R1 - (((0xfd < BANK2_R0) << 7) >> 7),BANK2_R0 + 2),
                              BANK2_R2);
        BANK0_R3 = BANK0_R3 & 0x1f;
        if (cVar3 != '\x01') {
          if (cVar3 == '\x02') {
            BANK0_R3 = BANK0_R3 | 0x10;
          }
          else if (cVar3 == '\x04') {
            BANK0_R3 = BANK0_R3 | 0x20;
          }
          else {
            BANK0_R3 = BANK0_R3 | 0x20;
          }
        }
      }
      else {
        BANK0_R3 = BANK0_R3 & 0xf0;
        if (bEXTMEMc80a != 0x10) {
          if (bEXTMEMc80a == 0x20) {
            BANK0_R3 = BANK0_R3 | 0x10;
          }
          else if (bEXTMEMc80a == 0x40) {
            BANK0_R3 = BANK0_R3 | 0x20;
          }
          else {
            BANK0_R3 = BANK0_R3 | 0x20;
          }
        }
      }
      cVar3 = BANK2_R1 - (((0xfd < BANK2_R0) << 7) >> 7);
      bVar2 = FUN_CODE_3ed5(CONCAT11(cVar3,BANK2_R0 + 2),BANK2_R2);
      BANK0_R3 = BANK0_R3 & 0xfe | bVar2 & 0xc0;
    }
    bVar2 = BANK0_R2;
    if ((bCODE0048 >> 2 & 1) != 0) {
      DAT_INTMEM_30 = 0xf;
      DAT_INTMEM_31 = 0;
      DAT_INTMEM_32 = 0x40;
      DAT_INTMEM_33 = 0x10;
      DAT_INTMEM_34 = 0;
      DAT_INTMEM_35 = 0x40;
      DAT_INTMEM_2a = 0;
      DAT_INTMEM_2b = 2;
      DAT_INTMEM_2c = 0;
      DAT_INTMEM_2d = 0;
      DAT_INTMEM_2e = 1;
      DAT_INTMEM_2f = 0;
      FUN_CODE_1aa9(9,bCODE0048);
      cVar3 = BANK2_R2;
      bVar5 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
      DAT_EXTMEM_0120 = bVar5 & 0x1f;
      FUN_CODE_0326();
    }
    BANK0_R2 = bVar2;
    if (cEXTMEM4fef != '\0') {
      DAT_INTMEM_30 = 0xf;
      DAT_INTMEM_31 = 0;
      DAT_INTMEM_32 = 0x40;
      DAT_INTMEM_33 = 0x10;
      DAT_INTMEM_34 = 0;
      DAT_INTMEM_35 = 0x40;
      DAT_INTMEM_2a = 0xe;
      DAT_INTMEM_2b = 0;
      DAT_INTMEM_2c = 0;
      DAT_INTMEM_2d = 0;
      DAT_INTMEM_2e = 1;
      DAT_INTMEM_2f = 0;
      FUN_CODE_1aa9(0x4f09,cEXTMEM4fef);
      cVar3 = BANK2_R2;
      if ((bEXTMEMc809 & 1) == 1) {
        BANK0_R2 = bVar2;
        cVar4 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
        BANK0_R3 = BANK0_R3 & 0x7f;
        if (BANK0_R3 < 5) {
                    /* WARNING: Could not recover jumptable at 0x32a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ushort)(byte)(cVar4 * '\x03') + 0x32aa))();
          return;
        }
      }
      else {
        BANK0_R2 = bVar2;
        cVar4 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
        BANK0_R3 = BANK0_R3 & 0x7f;
        if (BANK0_R3 < 5) {
                    /* WARNING: Could not recover jumptable at 0x3333. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ushort)(byte)(cVar4 * '\x03') + 0x3334))();
          return;
        }
      }
    }
  }
  bVar2 = BANK0_R2;
  uEXTMEM4fd9 = 1;
  DAT_EXTMEM_4fd8 = 4;
  BANK0_R3 = BANK0_R3 & 0xfe;
  uVar7 = 0x4fef;
  if (cEXTMEM4fef == '\0') {
    param_2 = 0;
  }
  else {
    DAT_INTMEM_30 = 0xf;
    DAT_INTMEM_31 = 0;
    DAT_INTMEM_32 = 0x40;
    DAT_INTMEM_33 = 0x10;
    DAT_INTMEM_34 = 0;
    DAT_INTMEM_35 = 0x40;
    DAT_INTMEM_2a = 0x21;
    DAT_INTMEM_2b = 0;
    DAT_INTMEM_2c = 0;
    DAT_INTMEM_2d = 0;
    DAT_INTMEM_2e = 1;
    DAT_INTMEM_2f = 0;
    FUN_CODE_1aa9(0x4f09);
    uVar7 = CONCAT11(BANK2_R1,BANK2_R0);
    cVar3 = BANK2_R2;
    BANK0_R2 = bVar2;
    param_2 = FUN_CODE_3ed5(uVar7,BANK2_R2);
    bVar2 = BANK0_R2;
    BANK0_R2 = bVar2;
    if ((param_2 & 1) != 0) {
      DAT_EXTMEM_4fe7 = 0;
      uINTMEMd4 = 0;
      DAT_INTMEM_2f = 0xd4;
      DAT_INTMEM_30 = 0xf;
      DAT_INTMEM_31 = 0;
      DAT_INTMEM_32 = 0x40;
      DAT_INTMEM_33 = 0x10;
      DAT_INTMEM_34 = 0;
      DAT_INTMEM_35 = 0x40;
      DAT_INTMEM_2a = 0x11;
      DAT_INTMEM_2b = 1;
      DAT_INTMEM_2c = 0;
      DAT_INTMEM_2d = 0;
      DAT_INTMEM_2e = 1;
      uVar6 = 0x4f;
      FUN_CODE_1aa9(0x4f08);
      uINTMEMd5 = 0;
      uINTMEMd6 = 0;
      uINTMEMd7 = 0x3f;
      DAT_INTMEM_2f = 0xd5;
      DAT_INTMEM_30 = 0xf;
      DAT_INTMEM_31 = 0;
      DAT_INTMEM_32 = 0x40;
      DAT_INTMEM_33 = 0x10;
      DAT_INTMEM_34 = 0;
      DAT_INTMEM_35 = 0x40;
      DAT_INTMEM_2a = 0xc0;
      DAT_INTMEM_2b = 1;
      DAT_INTMEM_2c = 0;
      DAT_INTMEM_2d = 0;
      DAT_INTMEM_2e = 3;
      uVar7 = CONCAT11(uVar6,8);
      FUN_CODE_1aa9(uVar7);
      BANK0_R2 = bVar2;
    }
  }
  if (BANK1_R5 == '\0') goto LAB_CODE_3479;
LAB_CODE_3b47:
  bVar2 = BANK0_R2;
  DAT_INTMEM_7a = 0x20;
  DAT_INTMEM_7b = 0xb;
  uVar7 = uVar7 & 0xff00;
  FUN_CODE_0270(uVar7);
  uVar6 = (undefined1)(uVar7 >> 8);
  BANK1_R5 = '\0';
  if (((BANK3_R0 != '\0') || (uVar6 = 0x4f, param_2 = bEXTMEM4feb, bEXTMEM4feb != 0)) ||
     ((uVar6 = 0xcc, cEXTMEMcc8d != '\0' || (param_1 == '\0')))) goto LAB_CODE_3e82;
  uVar7 = 0xcc02;
  BANK0_R2 = bVar2;
  FUN_CODE_1f0b();
  param_2 = (byte)uVar7;
  BANK0_R2 = bVar2;
  if (param_2 != 1) goto LAB_CODE_3b8c;
  goto LAB_CODE_2a74;
LAB_CODE_3b8c:
  if (BANK1_R5 == '\0') {
    if (BANK1_R6 != '\0') goto LAB_CODE_3be5;
    uVar7 = 0;
    bVar5 = bCODE0048;
    if ((bCODE0048 >> 2 & 1) != 0) {
      uVar7 = 0;
      if ((bCODE0048 >> 5 & 1) != 0) {
        DAT_INTMEM_7d = DAT_EXTMEM_0120;
        DAT_INTMEM_7a = BANK1_R1;
        DAT_INTMEM_7b = BANK1_R2;
        DAT_INTMEM_7c = BANK2_R4;
        uVar7 = 0x10c;
        FUN_CODE_11f9(0x10c);
      }
      BANK0_R2 = bVar2;
      FUN_CODE_0326();
    }
    uVar6 = (undefined1)(uVar7 >> 8);
    BANK0_R3 = DAT_INTMEM_81 & BANK3_R4;
    BANK0_R2 = bVar2;
    if (bVar5 != BANK3_R4) goto LAB_CODE_3be5;
    BANK0_R3 = DAT_INTMEM_82 & BANK3_R5;
    if (bVar5 != BANK3_R5) goto LAB_CODE_3be5;
    if (BANK2_R3 == '\0') goto LAB_CODE_3be5;
    param_2 = BANK2_R7 & 0xc0;
    if (param_2 == 0xc0) {
      DAT_INTMEM_7a = BANK1_R1;
      DAT_INTMEM_7b = BANK1_R2;
      DAT_INTMEM_7c = BANK2_R4;
      DAT_INTMEM_7d = BANK2_R7;
      uVar7 = CONCAT11(uVar6,4);
      FUN_CODE_11f9(uVar7);
      BANK0_R2 = bVar2;
    }
    else {
LAB_CODE_3e82:
      if ((BANK1_R0 == 0) && (uVar6 = 0xd2, param_2 = DAT_EXTMEM_d25c, (DAT_EXTMEM_d25c & 0xf) == 0)
         ) {
        uVar7 = 0xcc21;
        uEXTMEMcc21 = 1;
        BANK0_R2 = bVar2;
      }
      else {
        DAT_INTMEM_7a = BANK1_R1;
        DAT_INTMEM_7b = BANK1_R2;
        DAT_INTMEM_7c = BANK2_R4;
        DAT_INTMEM_7d = 0;
        uVar7 = CONCAT11(uVar6,0xd);
        BANK0_R2 = bVar2;
        FUN_CODE_11f9(uVar7);
        BANK0_R2 = bVar2;
      }
    }
LAB_CODE_3479:
    do {
      while (bVar2 = BANK0_R2, BANK2_R6 != '\0') {
LAB_CODE_34eb:
        uVar6 = BANK0_R4;
        BANK2_R6 = '\0';
        DAT_INTMEM_77 = param_2 & 7;
        bVar5 = bINTMEM7e & 0x60;
        DAT_INTMEM_76 = bINTMEM80;
        DAT_INTMEM_7a = 0x20;
        DAT_INTMEM_7b = 0x19;
        uVar7 = uVar7 & 0xff00;
        BANK0_R2 = bVar2;
        BANK0_R3 = bVar5;
        FUN_CODE_0270(uVar7,param_2 & 0x18);
        BANK0_R5 = bINTMEM7f & 0xf;
        BANK0_R2 = bVar2;
        BANK0_R3 = bVar5;
        BANK0_R4 = uVar6;
        if (BANK0_R5 < 0x10) {
                    /* WARNING: Could not recover jumptable at 0x3531. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ushort)(byte)(cVar3 * '\x03') + 0x3532))();
          return;
        }
      }
      DAT_INTMEM_7a = 0x20;
      DAT_INTMEM_7b = 6;
      FUN_CODE_0270(uVar7 & 0xff00);
      uEXTMEMcc2d = 0xfe;
      do {
        BANK3_R7 = 0xec;
        DAT_INTMEM_20 = 0x4f;
        DAT_INTMEM_21 = 0;
        DAT_INTMEM_22 = 0x72;
        DAT_INTMEM_23 = 0;
        DAT_INTMEM_24 = 0x40;
        DAT_INTMEM_25 = 0x73;
        DAT_INTMEM_26 = 0;
        DAT_INTMEM_27 = 0x40;
        BANK3_R6 = 0;
        param_2 = 0x26;
        BANK0_R2 = bVar2;
        FUN_CODE_17f4();
        uVar7 = 0x4fea;
        DAT_EXTMEM_4fea = param_2;
        if (param_2 == 0) {
          BANK0_R2 = bVar2;
          if (BANK1_R5 != '\0') goto LAB_CODE_3b47;
          if (BANK1_R6 == '\0') goto LAB_CODE_34eb;
          break;
        }
        uVar7 = 0x4fea;
        BANK0_R2 = bVar2;
        if (param_2 == 1) goto LAB_CODE_2a74;
        if (BANK1_R5 != '\0') goto LAB_CODE_3b47;
      } while (BANK1_R6 == '\0');
LAB_CODE_3be5:
      bVar2 = BANK0_R2;
      DAT_INTMEM_7a = 1;
      DAT_INTMEM_7b = 0xc;
      FUN_CODE_0270(uVar7 & 0xff00);
      BANK0_R3 = BANK0_R3 & 0xfc;
      uVar6 = 0x4f;
      bVar5 = DAT_EXTMEM_4fbf;
      if ((DAT_EXTMEM_4fbf == 1) && (uVar6 = 0, bVar5 = bCODE0049, (bCODE0049 >> 1 & 1) != 0)) {
        BANK0_R3 = BANK0_R3 | 1;
        DAT_EXTMEM_d67e = 0;
        uVar6 = 0xd6;
        DAT_EXTMEM_d67f = 0;
        bVar5 = DAT_EXTMEM_d77f;
      }
      BANK0_R2 = bVar2;
      if (BANK1_R6 != '\0') {
        DAT_INTMEM_30 = 0xf;
        DAT_INTMEM_31 = 0;
        DAT_INTMEM_32 = 0x40;
        DAT_INTMEM_33 = 0x10;
        DAT_INTMEM_34 = 0;
        DAT_INTMEM_35 = 0x40;
        DAT_INTMEM_2a = 0x21;
        DAT_INTMEM_2b = 0;
        DAT_INTMEM_2c = 0;
        DAT_INTMEM_2d = 0;
        DAT_INTMEM_2e = 1;
        DAT_INTMEM_2f = 0;
        FUN_CODE_1aa9(CONCAT11(uVar6,9),bVar5);
        cVar3 = BANK2_R2;
        BANK0_R2 = bVar2;
        bVar5 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
        bVar2 = BANK0_R2;
        BANK0_R2 = bVar2;
        if ((bVar5 & 1) != 0) {
          DAT_EXTMEM_4fe7 = 0;
          uINTMEMd4 = 0;
          DAT_INTMEM_2f = 0xd4;
          DAT_INTMEM_30 = 0xf;
          DAT_INTMEM_31 = 0;
          DAT_INTMEM_32 = 0x40;
          DAT_INTMEM_33 = 0x10;
          DAT_INTMEM_34 = 0;
          DAT_INTMEM_35 = 0x40;
          DAT_INTMEM_2a = 0x11;
          DAT_INTMEM_2b = 1;
          DAT_INTMEM_2c = 0;
          DAT_INTMEM_2d = 0;
          DAT_INTMEM_2e = 1;
          uVar6 = 0x4f;
          FUN_CODE_1aa9(0x4f08,bVar5);
          uINTMEMd5 = 0;
          uINTMEMd6 = 0;
          uINTMEMd7 = 0x3f;
          DAT_INTMEM_2f = 0xd5;
          DAT_INTMEM_30 = 0xf;
          DAT_INTMEM_31 = 0;
          DAT_INTMEM_32 = 0x40;
          DAT_INTMEM_33 = 0x10;
          DAT_INTMEM_34 = 0;
          DAT_INTMEM_35 = 0x40;
          DAT_INTMEM_2a = 0xc0;
          DAT_INTMEM_2b = 1;
          DAT_INTMEM_2c = 0;
          DAT_INTMEM_2d = 0;
          DAT_INTMEM_2e = 3;
          FUN_CODE_1aa9(CONCAT11(uVar6,8));
          BANK0_R2 = bVar2;
        }
      }
      BANK1_R6 = '\0';
      uEXTMEM4fe6 = 0;
      DAT_EXTMEM_cc00 = 1;
      DAT_EXTMEM_c200 = DAT_EXTMEM_c200 & 0xf1 | 3;
      if ((bCODE0048 >> 1 & 1) == 1) {
        param_2 = bEXTMEM4feb != 1;
        bVar1 = DAT_EXTMEM_4fbf != 1;
        if (bVar1 && (bool)param_2) {
          DAT_INTMEM_7a = BANK1_R1;
          DAT_INTMEM_7b = BANK1_R2;
          DAT_INTMEM_7c = BANK2_R4;
          DAT_INTMEM_7d = BANK2_R7;
          uVar7 = 0x4f03;
          FUN_CODE_11f9(0x4f03);
        }
        else {
          DAT_EXTMEM_4fbf = 0;
          if ((BANK2_R5 != '\0') ||
             (uVar7 = 0x4fe4, param_2 = DAT_EXTMEM_4fe4, DAT_EXTMEM_4fe4 != 0)) {
            do {
              bVar2 = DAT_EXTMEM_ca40;
              if ((DAT_EXTMEM_ca40 >> 1 & 1) == 1) break;
              bVar2 = bEXTMEMcb40;
            } while ((bEXTMEMcb40 & 6) != 0);
            uEXTMEMca0c = 1;
            DAT_INTMEM_30 = 0xf;
            DAT_INTMEM_31 = 0;
            DAT_INTMEM_32 = 0x40;
            DAT_INTMEM_33 = 0x10;
            DAT_INTMEM_34 = 0;
            DAT_INTMEM_35 = 0x40;
            DAT_INTMEM_2a = 2;
            DAT_INTMEM_2b = 1;
            DAT_INTMEM_2c = 0;
            DAT_INTMEM_2d = 0;
            DAT_INTMEM_2e = 1;
            DAT_INTMEM_2f = 0x8f;
            FUN_CODE_1aa9(0xca08,bVar2,bVar1);
            uEXTMEMce51 = 0x10;
            FUN_CODE_11d7();
            BANK0_R3 = BANK0_R3 & 0xfe;
            BANK2_R5 = '\0';
            uVar7 = 0x4fe4;
            DAT_EXTMEM_4fe4 = 0;
            param_2 = DAT_EXTMEM_d76d;
          }
        }
      }
      else if (param_1 == '\0') {
        if ((BANK2_R5 != '\0') || (uVar7 = 0x4fe4, param_2 = DAT_EXTMEM_4fe4, DAT_EXTMEM_4fe4 != 0))
        {
          do {
            bVar2 = DAT_EXTMEM_ca40;
            if ((DAT_EXTMEM_ca40 >> 1 & 1) == 1) break;
            bVar2 = bEXTMEMcb40;
          } while ((bEXTMEMcb40 & 6) != 0);
          uEXTMEMca0c = 1;
          DAT_INTMEM_30 = 0xf;
          DAT_INTMEM_31 = 0;
          DAT_INTMEM_32 = 0x40;
          DAT_INTMEM_33 = 0x10;
          DAT_INTMEM_34 = 0;
          DAT_INTMEM_35 = 0x40;
          DAT_INTMEM_2a = 2;
          DAT_INTMEM_2b = 1;
          DAT_INTMEM_2c = 0;
          DAT_INTMEM_2d = 0;
          DAT_INTMEM_2e = 1;
          DAT_INTMEM_2f = 0x8f;
          FUN_CODE_1aa9(0xca08,bVar2);
          uEXTMEMce51 = 0x10;
          FUN_CODE_11d7();
          BANK0_R3 = BANK0_R3 & 0xfe;
          BANK2_R5 = '\0';
          uVar7 = 0x4fe4;
          DAT_EXTMEM_4fe4 = 0;
          param_2 = DAT_EXTMEM_d76d;
        }
      }
      else {
        while (bEXTMEM4fb1 != 0) {
          DAT_INTMEM_7a = 0x20;
          DAT_INTMEM_7b = 0x28;
          FUN_CODE_0270(0x4f00);
        }
        DAT_INTMEM_7a = BANK1_R1;
        DAT_INTMEM_7b = BANK1_R2;
        DAT_INTMEM_7c = BANK2_R4;
        DAT_INTMEM_7d = BANK2_R7;
        uVar7 = 0x4f03;
        param_2 = bEXTMEM4fb1;
        FUN_CODE_11f9(0x4f03);
      }
      param_1 = '\0';
    } while( true );
  }
  goto LAB_CODE_3b47;
}



/* =========================================================
 * CODE:3677  FUN_CODE_3677  size=124
 * ========================================================= */

void FUN_CODE_3677(char param_1,byte param_2)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  ushort uVar8;
  
  bVar2 = BANK0_R2;
  DAT_EXTMEM_c600 = (DAT_INTMEM_76 >> 5 & 1) != 0;
  BANK0_R5 = BANK0_R5 & 1;
  uVar6 = 0xc6;
  cVar3 = DAT_EXTMEM_c600;
  if ((DAT_INTMEM_76 & 0xc) != 0) {
    cVar3 = DAT_EXTMEM_c872;
    if ((BANK2_R4 >> 5 & 1) == 0) {
      BANK0_R5 = 0;
      uVar6 = 200;
    }
    else {
      BANK0_R5 = 1;
      uVar6 = 200;
    }
  }
  uVar8 = CONCAT11(uVar6,DAT_INTMEM_76);
  FUN_CODE_1dc6(uVar8);
  DAT_INTMEM_7a = 0x20;
  DAT_INTMEM_7b = 0x18;
  uVar8 = uVar8 & 0xff00;
  FUN_CODE_0270(uVar8);
  DAT_INTMEM_2f = 0x76;
  DAT_INTMEM_30 = 0xf;
  DAT_INTMEM_31 = 0;
  DAT_INTMEM_32 = 0x40;
  DAT_INTMEM_33 = 0x10;
  DAT_INTMEM_34 = 0;
  DAT_INTMEM_35 = 0x40;
  DAT_INTMEM_2a = 2;
  DAT_INTMEM_2b = 1;
  DAT_INTMEM_2c = 0;
  DAT_INTMEM_2d = 0;
  DAT_INTMEM_2e = 1;
  uVar8 = CONCAT11((char)(uVar8 >> 8),8);
  FUN_CODE_1aa9(uVar8);
  BANK0_R2 = bVar2;
LAB_CODE_3479:
  do {
    while (bVar2 = BANK0_R2, BANK2_R6 != '\0') {
LAB_CODE_34eb:
      uVar6 = BANK0_R4;
      BANK2_R6 = '\0';
      DAT_INTMEM_77 = param_2 & 7;
      bVar5 = bINTMEM7e & 0x60;
      DAT_INTMEM_76 = bINTMEM80;
      DAT_INTMEM_7a = 0x20;
      DAT_INTMEM_7b = 0x19;
      uVar8 = uVar8 & 0xff00;
      BANK0_R2 = bVar2;
      BANK0_R3 = bVar5;
      FUN_CODE_0270(uVar8,param_2 & 0x18);
      BANK0_R5 = bINTMEM7f & 0xf;
      BANK0_R2 = bVar2;
      BANK0_R3 = bVar5;
      BANK0_R4 = uVar6;
      if (BANK0_R5 < 0x10) {
                    /* WARNING: Could not recover jumptable at 0x3531. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ushort)(byte)(cVar3 * '\x03') + 0x3532))();
        return;
      }
    }
    DAT_INTMEM_7a = 0x20;
    DAT_INTMEM_7b = 6;
    FUN_CODE_0270(uVar8 & 0xff00);
    uEXTMEMcc2d = 0xfe;
    do {
      BANK3_R7 = 0xec;
      DAT_INTMEM_20 = 0x4f;
      DAT_INTMEM_21 = 0;
      DAT_INTMEM_22 = 0x72;
      DAT_INTMEM_23 = 0;
      DAT_INTMEM_24 = 0x40;
      DAT_INTMEM_25 = 0x73;
      DAT_INTMEM_26 = 0;
      DAT_INTMEM_27 = 0x40;
      BANK3_R6 = 0;
      param_2 = 0x26;
      BANK0_R2 = bVar2;
      FUN_CODE_17f4();
      uVar8 = 0x4fea;
      DAT_EXTMEM_4fea = param_2;
      if (param_2 == 0) {
        BANK0_R2 = bVar2;
        if (BANK1_R5 != '\0') goto LAB_CODE_3b47;
        if (BANK1_R6 == '\0') goto LAB_CODE_34eb;
        break;
      }
      uVar8 = 0x4fea;
      BANK0_R2 = bVar2;
      if (param_2 == 1) goto LAB_CODE_2a74;
      if (BANK1_R5 != '\0') goto LAB_CODE_3b47;
    } while (BANK1_R6 == '\0');
LAB_CODE_3be5:
    bVar2 = BANK0_R2;
    DAT_INTMEM_7a = 1;
    DAT_INTMEM_7b = 0xc;
    FUN_CODE_0270(uVar8 & 0xff00);
    BANK0_R3 = BANK0_R3 & 0xfc;
    uVar6 = 0x4f;
    bVar5 = DAT_EXTMEM_4fbf;
    if ((DAT_EXTMEM_4fbf == 1) && (uVar6 = 0, bVar5 = bCODE0049, (bCODE0049 >> 1 & 1) != 0)) {
      BANK0_R3 = BANK0_R3 | 1;
      DAT_EXTMEM_d67e = 0;
      uVar6 = 0xd6;
      DAT_EXTMEM_d67f = 0;
      bVar5 = DAT_EXTMEM_d77f;
    }
    BANK0_R2 = bVar2;
    if (BANK1_R6 != '\0') {
      DAT_INTMEM_30 = 0xf;
      DAT_INTMEM_31 = 0;
      DAT_INTMEM_32 = 0x40;
      DAT_INTMEM_33 = 0x10;
      DAT_INTMEM_34 = 0;
      DAT_INTMEM_35 = 0x40;
      DAT_INTMEM_2a = 0x21;
      DAT_INTMEM_2b = 0;
      DAT_INTMEM_2c = 0;
      DAT_INTMEM_2d = 0;
      DAT_INTMEM_2e = 1;
      DAT_INTMEM_2f = 0;
      FUN_CODE_1aa9(CONCAT11(uVar6,9),bVar5);
      cVar3 = BANK2_R2;
      BANK0_R2 = bVar2;
      bVar5 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
      bVar2 = BANK0_R2;
      BANK0_R2 = bVar2;
      if ((bVar5 & 1) != 0) {
        DAT_EXTMEM_4fe7 = 0;
        uINTMEMd4 = 0;
        DAT_INTMEM_2f = 0xd4;
        DAT_INTMEM_30 = 0xf;
        DAT_INTMEM_31 = 0;
        DAT_INTMEM_32 = 0x40;
        DAT_INTMEM_33 = 0x10;
        DAT_INTMEM_34 = 0;
        DAT_INTMEM_35 = 0x40;
        DAT_INTMEM_2a = 0x11;
        DAT_INTMEM_2b = 1;
        DAT_INTMEM_2c = 0;
        DAT_INTMEM_2d = 0;
        DAT_INTMEM_2e = 1;
        uVar6 = 0x4f;
        FUN_CODE_1aa9(0x4f08,bVar5);
        uINTMEMd5 = 0;
        uINTMEMd6 = 0;
        uINTMEMd7 = 0x3f;
        DAT_INTMEM_2f = 0xd5;
        DAT_INTMEM_30 = 0xf;
        DAT_INTMEM_31 = 0;
        DAT_INTMEM_32 = 0x40;
        DAT_INTMEM_33 = 0x10;
        DAT_INTMEM_34 = 0;
        DAT_INTMEM_35 = 0x40;
        DAT_INTMEM_2a = 0xc0;
        DAT_INTMEM_2b = 1;
        DAT_INTMEM_2c = 0;
        DAT_INTMEM_2d = 0;
        DAT_INTMEM_2e = 3;
        FUN_CODE_1aa9(CONCAT11(uVar6,8));
        BANK0_R2 = bVar2;
      }
    }
    BANK1_R6 = '\0';
    uEXTMEM4fe6 = 0;
    DAT_EXTMEM_cc00 = 1;
    DAT_EXTMEM_c200 = DAT_EXTMEM_c200 & 0xf1 | 3;
    if ((bCODE0048 >> 1 & 1) == 1) {
      param_2 = bEXTMEM4feb != 1;
      bVar1 = DAT_EXTMEM_4fbf != 1;
      if (bVar1 && (bool)param_2) {
        DAT_INTMEM_7a = BANK1_R1;
        DAT_INTMEM_7b = BANK1_R2;
        DAT_INTMEM_7c = BANK2_R4;
        DAT_INTMEM_7d = BANK2_R7;
        uVar8 = 0x4f03;
        FUN_CODE_11f9(0x4f03);
      }
      else {
        DAT_EXTMEM_4fbf = 0;
        if ((BANK2_R5 != '\0') || (uVar8 = 0x4fe4, param_2 = DAT_EXTMEM_4fe4, DAT_EXTMEM_4fe4 != 0))
        {
          do {
            bVar2 = DAT_EXTMEM_ca40;
            if ((DAT_EXTMEM_ca40 >> 1 & 1) == 1) break;
            bVar2 = bEXTMEMcb40;
          } while ((bEXTMEMcb40 & 6) != 0);
          uEXTMEMca0c = 1;
          DAT_INTMEM_30 = 0xf;
          DAT_INTMEM_31 = 0;
          DAT_INTMEM_32 = 0x40;
          DAT_INTMEM_33 = 0x10;
          DAT_INTMEM_34 = 0;
          DAT_INTMEM_35 = 0x40;
          DAT_INTMEM_2a = 2;
          DAT_INTMEM_2b = 1;
          DAT_INTMEM_2c = 0;
          DAT_INTMEM_2d = 0;
          DAT_INTMEM_2e = 1;
          DAT_INTMEM_2f = 0x8f;
          FUN_CODE_1aa9(0xca08,bVar2,bVar1);
          uEXTMEMce51 = 0x10;
          FUN_CODE_11d7();
          BANK0_R3 = BANK0_R3 & 0xfe;
          BANK2_R5 = '\0';
          uVar8 = 0x4fe4;
          DAT_EXTMEM_4fe4 = 0;
          param_2 = DAT_EXTMEM_d76d;
        }
      }
    }
    else if (param_1 == '\0') {
      if ((BANK2_R5 != '\0') || (uVar8 = 0x4fe4, param_2 = DAT_EXTMEM_4fe4, DAT_EXTMEM_4fe4 != 0)) {
        do {
          bVar2 = DAT_EXTMEM_ca40;
          if ((DAT_EXTMEM_ca40 >> 1 & 1) == 1) break;
          bVar2 = bEXTMEMcb40;
        } while ((bEXTMEMcb40 & 6) != 0);
        uEXTMEMca0c = 1;
        DAT_INTMEM_30 = 0xf;
        DAT_INTMEM_31 = 0;
        DAT_INTMEM_32 = 0x40;
        DAT_INTMEM_33 = 0x10;
        DAT_INTMEM_34 = 0;
        DAT_INTMEM_35 = 0x40;
        DAT_INTMEM_2a = 2;
        DAT_INTMEM_2b = 1;
        DAT_INTMEM_2c = 0;
        DAT_INTMEM_2d = 0;
        DAT_INTMEM_2e = 1;
        DAT_INTMEM_2f = 0x8f;
        FUN_CODE_1aa9(0xca08,bVar2);
        uEXTMEMce51 = 0x10;
        FUN_CODE_11d7();
        BANK0_R3 = BANK0_R3 & 0xfe;
        BANK2_R5 = '\0';
        uVar8 = 0x4fe4;
        DAT_EXTMEM_4fe4 = 0;
        param_2 = DAT_EXTMEM_d76d;
      }
    }
    else {
      while (bEXTMEM4fb1 != 0) {
        DAT_INTMEM_7a = 0x20;
        DAT_INTMEM_7b = 0x28;
        FUN_CODE_0270(0x4f00);
      }
      DAT_INTMEM_7a = BANK1_R1;
      DAT_INTMEM_7b = BANK1_R2;
      DAT_INTMEM_7c = BANK2_R4;
      DAT_INTMEM_7d = BANK2_R7;
      uVar8 = 0x4f03;
      param_2 = bEXTMEM4fb1;
      FUN_CODE_11f9(0x4f03);
    }
    param_1 = '\0';
  } while( true );
LAB_CODE_3b47:
  bVar2 = BANK0_R2;
  DAT_INTMEM_7a = 0x20;
  DAT_INTMEM_7b = 0xb;
  uVar8 = uVar8 & 0xff00;
  FUN_CODE_0270(uVar8);
  uVar6 = (undefined1)(uVar8 >> 8);
  BANK1_R5 = '\0';
  if ((((BANK3_R0 == '\0') && (uVar6 = 0x4f, param_2 = bEXTMEM4feb, bEXTMEM4feb == 0)) &&
      (uVar6 = 0xcc, cEXTMEMcc8d == '\0')) && (param_1 != '\0')) {
    uVar8 = 0xcc02;
    BANK0_R2 = bVar2;
    FUN_CODE_1f0b();
    param_2 = (byte)uVar8;
    BANK0_R2 = bVar2;
    if (param_2 == 1) {
LAB_CODE_2a74:
      do {
        if ((bEXTMEMd66f >> 4 & 1) != 0) {
          uEXTMEMca10 = 3;
          uEXTMEMca15 = 0x20;
          uEXTMEMca14 = 7;
        }
        if ((bCODE0048 >> 4 & 1) != 0) {
          uEXTMEMd7fc = 1;
          uEXTMEMd7fa = 1;
          uEXTMEMd7f8 = 1;
          uEXTMEMd7f6 = 1;
        }
        do {
          BANK0_R2 = BANK0_R2 & 0xe;
        } while (bEXTMEMc800 == 0xe);
        BANK1_R0 = DAT_EXTMEM_c801 & 0x80;
        if (BANK1_R0 == 0) {
          BANK0_R2 = BANK0_R2 | 0x9b;
          uEXTMEMd21e = 0xff;
        }
        else {
          uEXTMEMcc8e = 0;
        }
        bVar2 = BANK0_R2;
        DAT_EXTMEM_4fe9 = 0;
        BANK1_R1 = 0;
        BANK1_R2 = 0;
        BANK2_R4 = 0;
        BANK1_R5 = '\0';
        BANK1_R6 = '\0';
        BANK2_R3 = '\0';
        BANK2_R7 = 0;
        DAT_EXTMEM_4fe4 = 0;
        BANK2_R5 = '\0';
        BANK2_R6 = '\0';
        BANK3_R0 = '\0';
        bEXTMEM4feb = 0;
        param_1 = '\0';
        uEXTMEM4fe5 = 0;
        uEXTMEM4fe6 = 0;
        DAT_EXTMEM_4fe7 = 0;
        DAT_EXTMEM_4fae = 0;
        uEXTMEMd766 = 8;
        uEXTMEMd600 = 0;
        uEXTMEMd680 = 0;
        uEXTMEMd700 = 0;
        uEXTMEMd780 = 0;
        if (cCODE004b < '\0') {
          uEXTMEMd677 = 0;
        }
        else {
          uEXTMEMd677 = 0xf;
        }
        if (BANK1_R0 == 0) {
          BANK0_R3 = BANK0_R3 & 0xfc | 4;
          uEXTMEMd254 = 0xff;
          uEXTMEMd255 = 0xff;
        }
        else if ((bEXTMEMc84b >> 3 & 1) == 1) {
          BANK0_R3 = BANK0_R3 | 4;
        }
        else {
          BANK0_R3 = BANK0_R3 & 0xfa;
        }
        uEXTMEMcc92 = 8;
        BANK3_R1 = uEXTMEMcc8e;
        uEXTMEMcc96 = 1;
        BANK0_R3 = BANK0_R3 & 0xfe;
        FUN_CODE_1da2(5);
        DAT_EXTMEM_4fea = DAT_EXTMEM_c801 & 0x3f;
        if (DAT_EXTMEM_4fea == 8) {
          for (bEXTMEM4ff0 = 0; bEXTMEM4ff0 < 2; bEXTMEM4ff0 = bEXTMEM4ff0 + 1) {
          }
          BANK0_R3 = BANK0_R3 & 0xfd;
          DAT_INTMEM_7a = 0x10;
          DAT_INTMEM_7b = 0x1c;
          BANK0_R2 = bVar2;
          FUN_CODE_0270(0xd600);
          do {
          } while ((bEXTMEMd67c >> 2 & 1) == 0);
        }
        while ((((DAT_EXTMEM_c848 >> 2 & 1) != 0 &&
                (uVar8 = 0xcc93, bVar5 = DAT_EXTMEM_c848, DAT_EXTMEM_cc93 == '\0')) ||
               (uVar8 = 0xc808, bVar5 = DAT_EXTMEM_c808, (DAT_EXTMEM_c808 & 1) != 0))) {
          DAT_INTMEM_7a = 0x20;
          DAT_INTMEM_7b = 0x20;
          BANK0_R2 = bVar2;
          FUN_CODE_0270(uVar8 & 0xff00,bVar5);
        }
        do {
        } while ((DAT_EXTMEM_cc07 & 1) == 1);
        do {
        } while ((bEXTMEMc82f & 1) == 0);
        BANK0_R3 = BANK0_R3 | 3;
        if ((bEXTMEMc800 >> 4 & 1) != 0) {
          BANK0_R2 = bVar2;
          FUN_CODE_1da2(0x1c2,bEXTMEMc800);
        }
        if ((bEXTMEMc800 & 1) == 1) {
          if (cEXTMEMd66e == '\x01') {
            bEXTMEMc890 = 1;
            uEXTMEMc891 = 0xc;
            uEXTMEMd449 = 2;
            uEXTMEMd766 = 0;
            DAT_EXTMEM_d672 = 0;
            BANK0_R3 = BANK0_R3 & 3;
          }
          else if (cEXTMEMd66e == '\x02') {
            DAT_EXTMEM_d672 = 0xf;
            BANK0_R3 = BANK0_R3 & 2;
          }
          else {
            DAT_EXTMEM_d672 = 0xf;
            BANK0_R3 = BANK0_R3 & 3;
          }
          BANK0_R2 = bVar2;
          for (bEXTMEM4ff0 = 0; bEXTMEM4ff0 < 4; bEXTMEM4ff0 = bEXTMEM4ff0 + 1) {
            DAT_INTMEM_7b = bEXTMEM4ff0;
            DAT_INTMEM_7a = 0;
            FUN_CODE_0e94(0x4f00);
          }
          uEXTMEMca5a = 0;
          BANK0_R3 = BANK0_R3 | 1;
          uEXTMEMd767 = 0x3f;
          BANK1_R1 = 4;
          do {
            if (bEXTMEMc890 != 0) {
              DAT_INTMEM_7a = 0x20;
              DAT_INTMEM_7b = 4;
              FUN_CODE_0270(0xc800);
              do {
              } while( true );
            }
            DAT_INTMEM_7a = 1;
            DAT_INTMEM_7b = 2;
            FUN_CODE_0270(0xc800);
            uEXTMEMd446 = 0xc4;
            uEXTMEMd447 = 0;
            uEXTMEMd453 = 0x3a;
            uEXTMEMd47d = 0x3a;
            uEXTMEMd454 = 0x54;
            uEXTMEMd47e = 0x54;
            FUN_CODE_0478();
            while (FUN_CODE_0aba(), (DAT_EXTMEM_c802 & 1) == 0) {
              if ((DAT_EXTMEM_cc07 & 1) != 0) {
                FUN_CODE_0e61(DAT_EXTMEM_cc07);
                goto LAB_CODE_2a74;
              }
            }
            FUN_CODE_0f3d(DAT_EXTMEM_c802);
            FUN_CODE_1010();
            FUN_CODE_1da2(0xf);
            BANK0_R3 = BANK0_R3 & 0xdd;
            DAT_EXTMEM_cc00 = 0;
            FUN_CODE_1043();
            uEXTMEMce51 = 0;
            DAT_INTMEM_7a = 1;
            DAT_INTMEM_7b = 3;
            bVar2 = FUN_CODE_0270(0xce00);
            while( true ) {
              FUN_CODE_0aba(bVar2);
              while (DAT_EXTMEM_cc93 == '\x01') {
                DAT_INTMEM_7a = 0x20;
                DAT_INTMEM_7b = 0x21;
                FUN_CODE_0270(0xcc00);
              }
              if (((((DAT_EXTMEM_c802 & 1) != 1) && ((bEXTMEMc890 & 1) == 0)) ||
                  (-1 < (char)DAT_EXTMEM_d77f)) && ((bEXTMEMc890 & 1) != 1)) break;
              DAT_EXTMEM_4fea = DAT_EXTMEM_cc07;
              if ((DAT_EXTMEM_cc07 & 1) != 0) {
                FUN_CODE_0e61(DAT_EXTMEM_cc07);
                goto LAB_CODE_2a74;
              }
              bVar2 = DAT_EXTMEM_cc07;
              if ((DAT_EXTMEM_cc07 >> 2 & 1) != 0) {
                bINTMEM7f = BANK0_R3;
                bINTMEM80 = BANK0_R3;
                bVar2 = bEXTMEMcc37;
              }
            }
            FUN_CODE_0e61(bEXTMEMc890);
          } while( true );
        }
        uEXTMEMca5a = 0;
        DAT_INTMEM_7a = 1;
        DAT_INTMEM_7b = 5;
        BANK0_R2 = bVar2;
        FUN_CODE_0270(0xca00,bEXTMEMc800);
        cEXTMEM4fef = '\0';
        uVar6 = 200;
        BANK0_R2 = bVar2;
        if (((DAT_EXTMEM_c848 >> 4 & 1) != 1) ||
           ((bVar5 = DAT_EXTMEM_c848, BANK1_R0 == 0 &&
            (uVar6 = 0xd2, bVar5 = DAT_EXTMEM_d252, (DAT_EXTMEM_d252 >> 5 & 1) != 0))))
        goto LAB_CODE_33b1;
        DAT_INTMEM_ee = 1;
        DAT_INTMEM_2f = 0xee;
        DAT_INTMEM_30 = 0xf;
        DAT_INTMEM_31 = 0;
        DAT_INTMEM_32 = 0x40;
        DAT_INTMEM_33 = 0x10;
        DAT_INTMEM_34 = 0;
        DAT_INTMEM_35 = 0x40;
        DAT_INTMEM_2a = 0;
        DAT_INTMEM_2b = 6;
        DAT_INTMEM_2c = 0;
        DAT_INTMEM_2d = 0;
        DAT_INTMEM_2e = 1;
        uVar7 = CONCAT11(uVar6,8);
        FUN_CODE_1aa9(uVar7,bVar5);
        uVar6 = (undefined1)((ushort)uVar7 >> 8);
        if (BANK1_R0 != 0) goto LAB_CODE_2f76;
        uEXTMEMcc0c = 199;
        uEXTMEMcc0b = 0;
        do {
          if (((cEXTMEMcc29 == '\0') && (99 < bEXTMEMcc0a)) || ((bEXTMEMcc90 & 1) == 1)) {
            uVar6 = 0xcc;
            uEXTMEMcc0c = 99;
            goto LAB_CODE_2f76;
          }
        } while ((DAT_EXTMEM_cc07 & 1) == 0);
        DAT_EXTMEM_cc00 = 1;
        BANK0_R2 = bVar2;
        FUN_CODE_11d7(DAT_EXTMEM_cc07);
        BANK0_R3 = BANK0_R3 & 0xfe;
        DAT_EXTMEM_c200 = DAT_EXTMEM_c200 & 0xf1 | 3;
        DAT_EXTMEM_d67e = 0;
        DAT_EXTMEM_d67f = 0;
      } while( true );
    }
    if (BANK1_R5 != '\0') goto LAB_CODE_3b47;
    if (BANK1_R6 != '\0') goto LAB_CODE_3be5;
    uVar8 = 0;
    bVar5 = bCODE0048;
    if ((bCODE0048 >> 2 & 1) != 0) {
      uVar8 = 0;
      if ((bCODE0048 >> 5 & 1) != 0) {
        DAT_INTMEM_7d = DAT_EXTMEM_0120;
        DAT_INTMEM_7a = BANK1_R1;
        DAT_INTMEM_7b = BANK1_R2;
        DAT_INTMEM_7c = BANK2_R4;
        uVar8 = 0x10c;
        FUN_CODE_11f9(0x10c);
      }
      BANK0_R2 = bVar2;
      FUN_CODE_0326();
    }
    uVar6 = (undefined1)(uVar8 >> 8);
    BANK0_R3 = DAT_INTMEM_81 & BANK3_R4;
    BANK0_R2 = bVar2;
    if (((bVar5 != BANK3_R4) || (BANK0_R3 = DAT_INTMEM_82 & BANK3_R5, bVar5 != BANK3_R5)) ||
       (BANK2_R3 == '\0')) goto LAB_CODE_3be5;
    param_2 = BANK2_R7 & 0xc0;
    if (param_2 == 0xc0) {
      DAT_INTMEM_7a = BANK1_R1;
      DAT_INTMEM_7b = BANK1_R2;
      DAT_INTMEM_7c = BANK2_R4;
      DAT_INTMEM_7d = BANK2_R7;
      uVar8 = CONCAT11(uVar6,4);
      FUN_CODE_11f9(uVar8);
      BANK0_R2 = bVar2;
      goto LAB_CODE_3479;
    }
  }
  if ((BANK1_R0 == 0) && (uVar6 = 0xd2, param_2 = DAT_EXTMEM_d25c, (DAT_EXTMEM_d25c & 0xf) == 0)) {
    uVar8 = 0xcc21;
    uEXTMEMcc21 = 1;
    BANK0_R2 = bVar2;
  }
  else {
    DAT_INTMEM_7a = BANK1_R1;
    DAT_INTMEM_7b = BANK1_R2;
    DAT_INTMEM_7c = BANK2_R4;
    DAT_INTMEM_7d = 0;
    uVar8 = CONCAT11(uVar6,0xd);
    BANK0_R2 = bVar2;
    FUN_CODE_11f9(uVar8);
    BANK0_R2 = bVar2;
  }
  goto LAB_CODE_3479;
LAB_CODE_2f76:
  DAT_INTMEM_30 = 0xf;
  DAT_INTMEM_31 = 0;
  DAT_INTMEM_32 = 0x40;
  DAT_INTMEM_33 = 0x10;
  DAT_INTMEM_34 = 0;
  DAT_INTMEM_35 = 0x40;
  DAT_INTMEM_2a = 0;
  DAT_INTMEM_2b = 0;
  DAT_INTMEM_2c = 0;
  DAT_INTMEM_2d = 0;
  DAT_INTMEM_2e = 0xc;
  DAT_INTMEM_2f = 0;
  BANK0_R2 = bVar2;
  FUN_CODE_1aa9(CONCAT11(uVar6,9));
  BANK0_R2 = bVar2;
  bVar2 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
  cEXTMEM4fef = 0x11 < bVar2;
  cVar3 = BANK2_R2;
  bVar2 = FUN_CODE_3ed5(CONCAT11(BANK2_R1 - (((0xfd < BANK2_R0) << 7) >> 7),BANK2_R0 + 2),BANK2_R2);
  DAT_EXTMEM_4fae = bVar2 & 0x40;
  if (BANK1_R0 == 0) {
    uEXTMEMd257 = 0x11;
    BANK0_R3 = 0;
    cVar3 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
    if ((cVar3 != '\x10') && (cVar3 != '\x11')) {
      if (cVar3 == '\x12') {
        BANK0_R3 = BANK0_R3 | 0x10;
      }
      else {
        BANK0_R3 = BANK0_R3 | 0x10;
      }
    }
    if ((bEXTMEMc80a & 0xf) == 0) {
      cVar3 = FUN_CODE_3ed5(CONCAT11(BANK2_R1 - (((0xfe < BANK2_R0) << 7) >> 7),BANK2_R0 + 1),
                            BANK2_R2);
      if (cVar3 != '\x06') {
        if (cVar3 == '\n') {
          BANK0_R3 = BANK0_R3 | 1;
        }
        else if (cVar3 == '\x14') {
          BANK0_R3 = BANK0_R3 | 2;
        }
        else {
          BANK0_R3 = BANK0_R3 | 2;
        }
      }
    }
    else {
      BANK0_R3 = BANK0_R3 & 0xf;
      if (bEXTMEMc80a != 1) {
        if (bEXTMEMc80a == 2) {
          BANK0_R3 = BANK0_R3 | 1;
        }
        else if (bEXTMEMc80a == 3) {
          BANK0_R3 = BANK0_R3 | 2;
        }
        else {
          BANK0_R3 = BANK0_R3 | 2;
        }
      }
    }
    if ((bEXTMEMc80a & 0xf0) == 0) {
      cVar3 = FUN_CODE_3ed5(CONCAT11(BANK2_R1 - (((0xfd < BANK2_R0) << 7) >> 7),BANK2_R0 + 2),
                            BANK2_R2);
      BANK0_R3 = BANK0_R3 & 0x1f;
      if (cVar3 != '\x01') {
        if (cVar3 == '\x02') {
          BANK0_R3 = BANK0_R3 | 0x10;
        }
        else if (cVar3 == '\x04') {
          BANK0_R3 = BANK0_R3 | 0x20;
        }
        else {
          BANK0_R3 = BANK0_R3 | 0x20;
        }
      }
    }
    else {
      BANK0_R3 = BANK0_R3 & 0xf0;
      if (bEXTMEMc80a != 0x10) {
        if (bEXTMEMc80a == 0x20) {
          BANK0_R3 = BANK0_R3 | 0x10;
        }
        else if (bEXTMEMc80a == 0x40) {
          BANK0_R3 = BANK0_R3 | 0x20;
        }
        else {
          BANK0_R3 = BANK0_R3 | 0x20;
        }
      }
    }
    cVar3 = BANK2_R1 - (((0xfd < BANK2_R0) << 7) >> 7);
    bVar2 = FUN_CODE_3ed5(CONCAT11(cVar3,BANK2_R0 + 2),BANK2_R2);
    BANK0_R3 = BANK0_R3 & 0xfe | bVar2 & 0xc0;
  }
  bVar2 = BANK0_R2;
  if ((bCODE0048 >> 2 & 1) != 0) {
    DAT_INTMEM_30 = 0xf;
    DAT_INTMEM_31 = 0;
    DAT_INTMEM_32 = 0x40;
    DAT_INTMEM_33 = 0x10;
    DAT_INTMEM_34 = 0;
    DAT_INTMEM_35 = 0x40;
    DAT_INTMEM_2a = 0;
    DAT_INTMEM_2b = 2;
    DAT_INTMEM_2c = 0;
    DAT_INTMEM_2d = 0;
    DAT_INTMEM_2e = 1;
    DAT_INTMEM_2f = 0;
    FUN_CODE_1aa9(9,bCODE0048);
    cVar3 = BANK2_R2;
    bVar5 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
    DAT_EXTMEM_0120 = bVar5 & 0x1f;
    FUN_CODE_0326();
  }
  BANK0_R2 = bVar2;
  if (cEXTMEM4fef != '\0') {
    DAT_INTMEM_30 = 0xf;
    DAT_INTMEM_31 = 0;
    DAT_INTMEM_32 = 0x40;
    DAT_INTMEM_33 = 0x10;
    DAT_INTMEM_34 = 0;
    DAT_INTMEM_35 = 0x40;
    DAT_INTMEM_2a = 0xe;
    DAT_INTMEM_2b = 0;
    DAT_INTMEM_2c = 0;
    DAT_INTMEM_2d = 0;
    DAT_INTMEM_2e = 1;
    DAT_INTMEM_2f = 0;
    FUN_CODE_1aa9(0x4f09,cEXTMEM4fef);
    cVar3 = BANK2_R2;
    if ((bEXTMEMc809 & 1) == 1) {
      BANK0_R2 = bVar2;
      cVar4 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
      BANK0_R3 = BANK0_R3 & 0x7f;
      if (BANK0_R3 < 5) {
                    /* WARNING: Could not recover jumptable at 0x32a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ushort)(byte)(cVar4 * '\x03') + 0x32aa))();
        return;
      }
    }
    else {
      BANK0_R2 = bVar2;
      cVar4 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
      BANK0_R3 = BANK0_R3 & 0x7f;
      if (BANK0_R3 < 5) {
                    /* WARNING: Could not recover jumptable at 0x3333. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ushort)(byte)(cVar4 * '\x03') + 0x3334))();
        return;
      }
    }
  }
LAB_CODE_33b1:
  bVar2 = BANK0_R2;
  uEXTMEM4fd9 = 1;
  DAT_EXTMEM_4fd8 = 4;
  BANK0_R3 = BANK0_R3 & 0xfe;
  uVar8 = 0x4fef;
  if (cEXTMEM4fef == '\0') {
    param_2 = 0;
  }
  else {
    DAT_INTMEM_30 = 0xf;
    DAT_INTMEM_31 = 0;
    DAT_INTMEM_32 = 0x40;
    DAT_INTMEM_33 = 0x10;
    DAT_INTMEM_34 = 0;
    DAT_INTMEM_35 = 0x40;
    DAT_INTMEM_2a = 0x21;
    DAT_INTMEM_2b = 0;
    DAT_INTMEM_2c = 0;
    DAT_INTMEM_2d = 0;
    DAT_INTMEM_2e = 1;
    DAT_INTMEM_2f = 0;
    FUN_CODE_1aa9(0x4f09);
    uVar8 = CONCAT11(BANK2_R1,BANK2_R0);
    cVar3 = BANK2_R2;
    BANK0_R2 = bVar2;
    param_2 = FUN_CODE_3ed5(uVar8,BANK2_R2);
    bVar2 = BANK0_R2;
    BANK0_R2 = bVar2;
    if ((param_2 & 1) != 0) {
      DAT_EXTMEM_4fe7 = 0;
      uINTMEMd4 = 0;
      DAT_INTMEM_2f = 0xd4;
      DAT_INTMEM_30 = 0xf;
      DAT_INTMEM_31 = 0;
      DAT_INTMEM_32 = 0x40;
      DAT_INTMEM_33 = 0x10;
      DAT_INTMEM_34 = 0;
      DAT_INTMEM_35 = 0x40;
      DAT_INTMEM_2a = 0x11;
      DAT_INTMEM_2b = 1;
      DAT_INTMEM_2c = 0;
      DAT_INTMEM_2d = 0;
      DAT_INTMEM_2e = 1;
      uVar6 = 0x4f;
      FUN_CODE_1aa9(0x4f08);
      uINTMEMd5 = 0;
      uINTMEMd6 = 0;
      uINTMEMd7 = 0x3f;
      DAT_INTMEM_2f = 0xd5;
      DAT_INTMEM_30 = 0xf;
      DAT_INTMEM_31 = 0;
      DAT_INTMEM_32 = 0x40;
      DAT_INTMEM_33 = 0x10;
      DAT_INTMEM_34 = 0;
      DAT_INTMEM_35 = 0x40;
      DAT_INTMEM_2a = 0xc0;
      DAT_INTMEM_2b = 1;
      DAT_INTMEM_2c = 0;
      DAT_INTMEM_2d = 0;
      DAT_INTMEM_2e = 3;
      uVar8 = CONCAT11(uVar6,8);
      FUN_CODE_1aa9(uVar8);
      BANK0_R2 = bVar2;
    }
  }
  if (BANK1_R5 == '\0') goto LAB_CODE_3479;
  goto LAB_CODE_3b47;
}



/* =========================================================
 * CODE:36f3  FUN_CODE_36f3  size=151
 * ========================================================= */

void FUN_CODE_36f3(char param_1,byte param_2)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  undefined1 uVar6;
  ushort uVar7;
  undefined2 uVar8;
  
  bVar2 = BANK0_R2;
  bVar5 = DAT_EXTMEM_4fe7;
  if (((DAT_INTMEM_76 & 7) == 2) || ((DAT_INTMEM_76 & 7) == 5)) {
    bEXTMEM4feb = 1;
    uVar6 = 0x4f;
    if ((DAT_EXTMEM_4fe7 == 0) && (BANK1_R0 == 0)) {
      BANK0_R5 = BANK0_R5 & 0xfe;
      uVar6 = 0xd2;
      bVar5 = bEXTMEMd200;
    }
  }
  else {
    uVar6 = 0x4f;
    bEXTMEM4feb = 0;
    bVar5 = DAT_INTMEM_76 & 7;
    if (((param_1 == '\x01') && (uVar6 = 0x4f, bVar5 = DAT_EXTMEM_4fe7, DAT_EXTMEM_4fe7 == 0)) &&
       (BANK1_R0 == 0)) {
      BANK0_R5 = BANK0_R5 | 1;
      uVar6 = 0xd2;
      bVar5 = bEXTMEMd200;
    }
  }
  DAT_INTMEM_2f = 0x76;
  DAT_INTMEM_30 = 0xf;
  DAT_INTMEM_31 = 0;
  DAT_INTMEM_32 = 0x40;
  DAT_INTMEM_33 = 0x10;
  DAT_INTMEM_34 = 0;
  DAT_INTMEM_35 = 0x40;
  DAT_INTMEM_2a = 0;
  DAT_INTMEM_2b = 6;
  DAT_INTMEM_2c = 0;
  DAT_INTMEM_2d = 0;
  DAT_INTMEM_2e = 1;
  uVar7 = CONCAT11(uVar6,8);
  FUN_CODE_1aa9(bVar5);
  cVar3 = (char)uVar7;
  BANK0_R2 = bVar2;
  if (cVar3 != '\x01') {
    if (BANK1_R5 != '\0') goto LAB_CODE_3b47;
    if (BANK1_R6 == '\0') goto LAB_CODE_3479;
    goto LAB_CODE_3be5;
  }
LAB_CODE_2a74:
  if ((bEXTMEMd66f >> 4 & 1) != 0) {
    uEXTMEMca10 = 3;
    uEXTMEMca15 = 0x20;
    uEXTMEMca14 = 7;
  }
  if ((bCODE0048 >> 4 & 1) != 0) {
    uEXTMEMd7fc = 1;
    uEXTMEMd7fa = 1;
    uEXTMEMd7f8 = 1;
    uEXTMEMd7f6 = 1;
  }
  do {
    BANK0_R2 = BANK0_R2 & 0xe;
  } while (bEXTMEMc800 == 0xe);
  BANK1_R0 = DAT_EXTMEM_c801 & 0x80;
  if (BANK1_R0 == 0) {
    BANK0_R2 = BANK0_R2 | 0x9b;
    uEXTMEMd21e = 0xff;
  }
  else {
    uEXTMEMcc8e = 0;
  }
  bVar2 = BANK0_R2;
  DAT_EXTMEM_4fe9 = 0;
  BANK1_R1 = 0;
  BANK1_R2 = 0;
  BANK2_R4 = 0;
  BANK1_R5 = '\0';
  BANK1_R6 = '\0';
  BANK2_R3 = '\0';
  BANK2_R7 = 0;
  DAT_EXTMEM_4fe4 = 0;
  BANK2_R5 = '\0';
  BANK2_R6 = '\0';
  BANK3_R0 = '\0';
  bEXTMEM4feb = 0;
  param_1 = '\0';
  uEXTMEM4fe5 = 0;
  uEXTMEM4fe6 = 0;
  DAT_EXTMEM_4fe7 = 0;
  DAT_EXTMEM_4fae = 0;
  uEXTMEMd766 = 8;
  uEXTMEMd600 = 0;
  uEXTMEMd680 = 0;
  uEXTMEMd700 = 0;
  uEXTMEMd780 = 0;
  if (cCODE004b < '\0') {
    uEXTMEMd677 = 0;
  }
  else {
    uEXTMEMd677 = 0xf;
  }
  if (BANK1_R0 == 0) {
    BANK0_R3 = BANK0_R3 & 0xfc | 4;
    uEXTMEMd254 = 0xff;
    uEXTMEMd255 = 0xff;
  }
  else if ((bEXTMEMc84b >> 3 & 1) == 1) {
    BANK0_R3 = BANK0_R3 | 4;
  }
  else {
    BANK0_R3 = BANK0_R3 & 0xfa;
  }
  uEXTMEMcc92 = 8;
  BANK3_R1 = uEXTMEMcc8e;
  uEXTMEMcc96 = 1;
  BANK0_R3 = BANK0_R3 & 0xfe;
  FUN_CODE_1da2(5);
  DAT_EXTMEM_4fea = DAT_EXTMEM_c801 & 0x3f;
  if (DAT_EXTMEM_4fea == 8) {
    for (bEXTMEM4ff0 = 0; bEXTMEM4ff0 < 2; bEXTMEM4ff0 = bEXTMEM4ff0 + 1) {
    }
    BANK0_R3 = BANK0_R3 & 0xfd;
    DAT_INTMEM_7a = 0x10;
    DAT_INTMEM_7b = 0x1c;
    BANK0_R2 = bVar2;
    FUN_CODE_0270(0xd600);
    do {
    } while ((bEXTMEMd67c >> 2 & 1) == 0);
  }
  while ((((DAT_EXTMEM_c848 >> 2 & 1) != 0 &&
          (uVar7 = 0xcc93, bVar5 = DAT_EXTMEM_c848, DAT_EXTMEM_cc93 == '\0')) ||
         (uVar7 = 0xc808, bVar5 = DAT_EXTMEM_c808, (DAT_EXTMEM_c808 & 1) != 0))) {
    DAT_INTMEM_7a = 0x20;
    DAT_INTMEM_7b = 0x20;
    BANK0_R2 = bVar2;
    FUN_CODE_0270(uVar7 & 0xff00,bVar5);
  }
  do {
  } while ((DAT_EXTMEM_cc07 & 1) == 1);
  do {
  } while ((bEXTMEMc82f & 1) == 0);
  BANK0_R3 = BANK0_R3 | 3;
  if ((bEXTMEMc800 >> 4 & 1) != 0) {
    BANK0_R2 = bVar2;
    FUN_CODE_1da2(0x1c2,bEXTMEMc800);
  }
  if ((bEXTMEMc800 & 1) == 1) {
    if (cEXTMEMd66e == '\x01') {
      bEXTMEMc890 = 1;
      uEXTMEMc891 = 0xc;
      uEXTMEMd449 = 2;
      uEXTMEMd766 = 0;
      DAT_EXTMEM_d672 = 0;
      BANK0_R3 = BANK0_R3 & 3;
    }
    else if (cEXTMEMd66e == '\x02') {
      DAT_EXTMEM_d672 = 0xf;
      BANK0_R3 = BANK0_R3 & 2;
    }
    else {
      DAT_EXTMEM_d672 = 0xf;
      BANK0_R3 = BANK0_R3 & 3;
    }
    BANK0_R2 = bVar2;
    for (bEXTMEM4ff0 = 0; bEXTMEM4ff0 < 4; bEXTMEM4ff0 = bEXTMEM4ff0 + 1) {
      DAT_INTMEM_7b = bEXTMEM4ff0;
      DAT_INTMEM_7a = 0;
      FUN_CODE_0e94(0x4f00);
    }
    uEXTMEMca5a = 0;
    BANK0_R3 = BANK0_R3 | 1;
    uEXTMEMd767 = 0x3f;
    BANK1_R1 = 4;
    do {
      if (bEXTMEMc890 != 0) {
        DAT_INTMEM_7a = 0x20;
        DAT_INTMEM_7b = 4;
        FUN_CODE_0270(0xc800);
        do {
        } while( true );
      }
      DAT_INTMEM_7a = 1;
      DAT_INTMEM_7b = 2;
      FUN_CODE_0270(0xc800);
      uEXTMEMd446 = 0xc4;
      uEXTMEMd447 = 0;
      uEXTMEMd453 = 0x3a;
      uEXTMEMd47d = 0x3a;
      uEXTMEMd454 = 0x54;
      uEXTMEMd47e = 0x54;
      FUN_CODE_0478();
      while (FUN_CODE_0aba(), (DAT_EXTMEM_c802 & 1) == 0) {
        if ((DAT_EXTMEM_cc07 & 1) != 0) {
          FUN_CODE_0e61(DAT_EXTMEM_cc07);
          goto LAB_CODE_2a74;
        }
      }
      FUN_CODE_0f3d(DAT_EXTMEM_c802);
      FUN_CODE_1010();
      FUN_CODE_1da2(0xf);
      BANK0_R3 = BANK0_R3 & 0xdd;
      DAT_EXTMEM_cc00 = 0;
      FUN_CODE_1043();
      uEXTMEMce51 = 0;
      DAT_INTMEM_7a = 1;
      DAT_INTMEM_7b = 3;
      bVar2 = FUN_CODE_0270(0xce00);
      while( true ) {
        FUN_CODE_0aba(bVar2);
        while (DAT_EXTMEM_cc93 == '\x01') {
          DAT_INTMEM_7a = 0x20;
          DAT_INTMEM_7b = 0x21;
          FUN_CODE_0270(0xcc00);
        }
        if (((((DAT_EXTMEM_c802 & 1) != 1) && ((bEXTMEMc890 & 1) == 0)) ||
            (-1 < (char)DAT_EXTMEM_d77f)) && ((bEXTMEMc890 & 1) != 1)) break;
        DAT_EXTMEM_4fea = DAT_EXTMEM_cc07;
        if ((DAT_EXTMEM_cc07 & 1) != 0) {
          FUN_CODE_0e61(DAT_EXTMEM_cc07);
          goto LAB_CODE_2a74;
        }
        bVar2 = DAT_EXTMEM_cc07;
        if ((DAT_EXTMEM_cc07 >> 2 & 1) != 0) {
          bINTMEM7f = BANK0_R3;
          bINTMEM80 = BANK0_R3;
          bVar2 = bEXTMEMcc37;
        }
      }
      FUN_CODE_0e61(bEXTMEMc890);
    } while( true );
  }
  uEXTMEMca5a = 0;
  DAT_INTMEM_7a = 1;
  DAT_INTMEM_7b = 5;
  BANK0_R2 = bVar2;
  FUN_CODE_0270(0xca00,bEXTMEMc800);
  cEXTMEM4fef = '\0';
  uVar6 = 200;
  BANK0_R2 = bVar2;
  if (((DAT_EXTMEM_c848 >> 4 & 1) == 1) &&
     ((bVar5 = DAT_EXTMEM_c848, BANK1_R0 != 0 ||
      (uVar6 = 0xd2, bVar5 = DAT_EXTMEM_d252, (DAT_EXTMEM_d252 >> 5 & 1) == 0)))) {
    DAT_INTMEM_ee = 1;
    DAT_INTMEM_2f = 0xee;
    DAT_INTMEM_30 = 0xf;
    DAT_INTMEM_31 = 0;
    DAT_INTMEM_32 = 0x40;
    DAT_INTMEM_33 = 0x10;
    DAT_INTMEM_34 = 0;
    DAT_INTMEM_35 = 0x40;
    DAT_INTMEM_2a = 0;
    DAT_INTMEM_2b = 6;
    DAT_INTMEM_2c = 0;
    DAT_INTMEM_2d = 0;
    DAT_INTMEM_2e = 1;
    uVar8 = CONCAT11(uVar6,8);
    FUN_CODE_1aa9(uVar8,bVar5);
    uVar6 = (undefined1)((ushort)uVar8 >> 8);
    if (BANK1_R0 == 0) {
      uEXTMEMcc0c = 199;
      uEXTMEMcc0b = 0;
      do {
        if (((cEXTMEMcc29 == '\0') && (99 < bEXTMEMcc0a)) || ((bEXTMEMcc90 & 1) == 1)) {
          uVar6 = 0xcc;
          uEXTMEMcc0c = 99;
          goto LAB_CODE_2f76;
        }
      } while ((DAT_EXTMEM_cc07 & 1) == 0);
      DAT_EXTMEM_cc00 = 1;
      BANK0_R2 = bVar2;
      FUN_CODE_11d7(DAT_EXTMEM_cc07);
      BANK0_R3 = BANK0_R3 & 0xfe;
      DAT_EXTMEM_c200 = DAT_EXTMEM_c200 & 0xf1 | 3;
      DAT_EXTMEM_d67e = 0;
      DAT_EXTMEM_d67f = 0;
      goto LAB_CODE_2a74;
    }
LAB_CODE_2f76:
    DAT_INTMEM_30 = 0xf;
    DAT_INTMEM_31 = 0;
    DAT_INTMEM_32 = 0x40;
    DAT_INTMEM_33 = 0x10;
    DAT_INTMEM_34 = 0;
    DAT_INTMEM_35 = 0x40;
    DAT_INTMEM_2a = 0;
    DAT_INTMEM_2b = 0;
    DAT_INTMEM_2c = 0;
    DAT_INTMEM_2d = 0;
    DAT_INTMEM_2e = 0xc;
    DAT_INTMEM_2f = 0;
    BANK0_R2 = bVar2;
    FUN_CODE_1aa9(CONCAT11(uVar6,9));
    BANK0_R2 = bVar2;
    bVar2 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
    cEXTMEM4fef = 0x11 < bVar2;
    cVar3 = BANK2_R2;
    bVar2 = FUN_CODE_3ed5(CONCAT11(BANK2_R1 - (((0xfd < BANK2_R0) << 7) >> 7),BANK2_R0 + 2),BANK2_R2
                         );
    DAT_EXTMEM_4fae = bVar2 & 0x40;
    if (BANK1_R0 == 0) {
      uEXTMEMd257 = 0x11;
      BANK0_R3 = 0;
      cVar3 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
      if ((cVar3 != '\x10') && (cVar3 != '\x11')) {
        if (cVar3 == '\x12') {
          BANK0_R3 = BANK0_R3 | 0x10;
        }
        else {
          BANK0_R3 = BANK0_R3 | 0x10;
        }
      }
      if ((bEXTMEMc80a & 0xf) == 0) {
        cVar3 = FUN_CODE_3ed5(CONCAT11(BANK2_R1 - (((0xfe < BANK2_R0) << 7) >> 7),BANK2_R0 + 1),
                              BANK2_R2);
        if (cVar3 != '\x06') {
          if (cVar3 == '\n') {
            BANK0_R3 = BANK0_R3 | 1;
          }
          else if (cVar3 == '\x14') {
            BANK0_R3 = BANK0_R3 | 2;
          }
          else {
            BANK0_R3 = BANK0_R3 | 2;
          }
        }
      }
      else {
        BANK0_R3 = BANK0_R3 & 0xf;
        if (bEXTMEMc80a != 1) {
          if (bEXTMEMc80a == 2) {
            BANK0_R3 = BANK0_R3 | 1;
          }
          else if (bEXTMEMc80a == 3) {
            BANK0_R3 = BANK0_R3 | 2;
          }
          else {
            BANK0_R3 = BANK0_R3 | 2;
          }
        }
      }
      if ((bEXTMEMc80a & 0xf0) == 0) {
        cVar3 = FUN_CODE_3ed5(CONCAT11(BANK2_R1 - (((0xfd < BANK2_R0) << 7) >> 7),BANK2_R0 + 2),
                              BANK2_R2);
        BANK0_R3 = BANK0_R3 & 0x1f;
        if (cVar3 != '\x01') {
          if (cVar3 == '\x02') {
            BANK0_R3 = BANK0_R3 | 0x10;
          }
          else if (cVar3 == '\x04') {
            BANK0_R3 = BANK0_R3 | 0x20;
          }
          else {
            BANK0_R3 = BANK0_R3 | 0x20;
          }
        }
      }
      else {
        BANK0_R3 = BANK0_R3 & 0xf0;
        if (bEXTMEMc80a != 0x10) {
          if (bEXTMEMc80a == 0x20) {
            BANK0_R3 = BANK0_R3 | 0x10;
          }
          else if (bEXTMEMc80a == 0x40) {
            BANK0_R3 = BANK0_R3 | 0x20;
          }
          else {
            BANK0_R3 = BANK0_R3 | 0x20;
          }
        }
      }
      cVar3 = BANK2_R1 - (((0xfd < BANK2_R0) << 7) >> 7);
      bVar2 = FUN_CODE_3ed5(CONCAT11(cVar3,BANK2_R0 + 2),BANK2_R2);
      BANK0_R3 = BANK0_R3 & 0xfe | bVar2 & 0xc0;
    }
    bVar2 = BANK0_R2;
    if ((bCODE0048 >> 2 & 1) != 0) {
      DAT_INTMEM_30 = 0xf;
      DAT_INTMEM_31 = 0;
      DAT_INTMEM_32 = 0x40;
      DAT_INTMEM_33 = 0x10;
      DAT_INTMEM_34 = 0;
      DAT_INTMEM_35 = 0x40;
      DAT_INTMEM_2a = 0;
      DAT_INTMEM_2b = 2;
      DAT_INTMEM_2c = 0;
      DAT_INTMEM_2d = 0;
      DAT_INTMEM_2e = 1;
      DAT_INTMEM_2f = 0;
      FUN_CODE_1aa9(9,bCODE0048);
      cVar3 = BANK2_R2;
      bVar5 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
      DAT_EXTMEM_0120 = bVar5 & 0x1f;
      FUN_CODE_0326();
    }
    BANK0_R2 = bVar2;
    if (cEXTMEM4fef != '\0') {
      DAT_INTMEM_30 = 0xf;
      DAT_INTMEM_31 = 0;
      DAT_INTMEM_32 = 0x40;
      DAT_INTMEM_33 = 0x10;
      DAT_INTMEM_34 = 0;
      DAT_INTMEM_35 = 0x40;
      DAT_INTMEM_2a = 0xe;
      DAT_INTMEM_2b = 0;
      DAT_INTMEM_2c = 0;
      DAT_INTMEM_2d = 0;
      DAT_INTMEM_2e = 1;
      DAT_INTMEM_2f = 0;
      FUN_CODE_1aa9(0x4f09,cEXTMEM4fef);
      cVar3 = BANK2_R2;
      if ((bEXTMEMc809 & 1) == 1) {
        BANK0_R2 = bVar2;
        cVar4 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
        BANK0_R3 = BANK0_R3 & 0x7f;
        if (BANK0_R3 < 5) {
                    /* WARNING: Could not recover jumptable at 0x32a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ushort)(byte)(cVar4 * '\x03') + 0x32aa))();
          return;
        }
      }
      else {
        BANK0_R2 = bVar2;
        cVar4 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
        BANK0_R3 = BANK0_R3 & 0x7f;
        if (BANK0_R3 < 5) {
                    /* WARNING: Could not recover jumptable at 0x3333. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ushort)(byte)(cVar4 * '\x03') + 0x3334))();
          return;
        }
      }
    }
  }
  bVar2 = BANK0_R2;
  uEXTMEM4fd9 = 1;
  DAT_EXTMEM_4fd8 = 4;
  BANK0_R3 = BANK0_R3 & 0xfe;
  uVar7 = 0x4fef;
  if (cEXTMEM4fef == '\0') {
    param_2 = 0;
  }
  else {
    DAT_INTMEM_30 = 0xf;
    DAT_INTMEM_31 = 0;
    DAT_INTMEM_32 = 0x40;
    DAT_INTMEM_33 = 0x10;
    DAT_INTMEM_34 = 0;
    DAT_INTMEM_35 = 0x40;
    DAT_INTMEM_2a = 0x21;
    DAT_INTMEM_2b = 0;
    DAT_INTMEM_2c = 0;
    DAT_INTMEM_2d = 0;
    DAT_INTMEM_2e = 1;
    DAT_INTMEM_2f = 0;
    FUN_CODE_1aa9(0x4f09);
    uVar7 = CONCAT11(BANK2_R1,BANK2_R0);
    cVar3 = BANK2_R2;
    BANK0_R2 = bVar2;
    param_2 = FUN_CODE_3ed5(uVar7,BANK2_R2);
    bVar2 = BANK0_R2;
    BANK0_R2 = bVar2;
    if ((param_2 & 1) != 0) {
      DAT_EXTMEM_4fe7 = 0;
      uINTMEMd4 = 0;
      DAT_INTMEM_2f = 0xd4;
      DAT_INTMEM_30 = 0xf;
      DAT_INTMEM_31 = 0;
      DAT_INTMEM_32 = 0x40;
      DAT_INTMEM_33 = 0x10;
      DAT_INTMEM_34 = 0;
      DAT_INTMEM_35 = 0x40;
      DAT_INTMEM_2a = 0x11;
      DAT_INTMEM_2b = 1;
      DAT_INTMEM_2c = 0;
      DAT_INTMEM_2d = 0;
      DAT_INTMEM_2e = 1;
      uVar6 = 0x4f;
      FUN_CODE_1aa9(0x4f08);
      uINTMEMd5 = 0;
      uINTMEMd6 = 0;
      uINTMEMd7 = 0x3f;
      DAT_INTMEM_2f = 0xd5;
      DAT_INTMEM_30 = 0xf;
      DAT_INTMEM_31 = 0;
      DAT_INTMEM_32 = 0x40;
      DAT_INTMEM_33 = 0x10;
      DAT_INTMEM_34 = 0;
      DAT_INTMEM_35 = 0x40;
      DAT_INTMEM_2a = 0xc0;
      DAT_INTMEM_2b = 1;
      DAT_INTMEM_2c = 0;
      DAT_INTMEM_2d = 0;
      DAT_INTMEM_2e = 3;
      uVar7 = CONCAT11(uVar6,8);
      FUN_CODE_1aa9(uVar7);
      BANK0_R2 = bVar2;
    }
  }
  if (BANK1_R5 == '\0') goto LAB_CODE_3479;
LAB_CODE_3b47:
  bVar2 = BANK0_R2;
  DAT_INTMEM_7a = 0x20;
  DAT_INTMEM_7b = 0xb;
  uVar7 = uVar7 & 0xff00;
  FUN_CODE_0270(uVar7);
  uVar6 = (undefined1)(uVar7 >> 8);
  BANK1_R5 = '\0';
  if (((BANK3_R0 != '\0') || (uVar6 = 0x4f, param_2 = bEXTMEM4feb, bEXTMEM4feb != 0)) ||
     ((uVar6 = 0xcc, cEXTMEMcc8d != '\0' || (param_1 == '\0')))) goto LAB_CODE_3e82;
  uVar7 = 0xcc02;
  BANK0_R2 = bVar2;
  FUN_CODE_1f0b();
  param_2 = (byte)uVar7;
  BANK0_R2 = bVar2;
  if (param_2 != 1) goto LAB_CODE_3b8c;
  goto LAB_CODE_2a74;
LAB_CODE_3b8c:
  if (BANK1_R5 == '\0') {
    if (BANK1_R6 != '\0') goto LAB_CODE_3be5;
    uVar7 = 0;
    bVar5 = bCODE0048;
    if ((bCODE0048 >> 2 & 1) != 0) {
      uVar7 = 0;
      if ((bCODE0048 >> 5 & 1) != 0) {
        DAT_INTMEM_7d = DAT_EXTMEM_0120;
        DAT_INTMEM_7a = BANK1_R1;
        DAT_INTMEM_7b = BANK1_R2;
        DAT_INTMEM_7c = BANK2_R4;
        uVar7 = 0x10c;
        FUN_CODE_11f9(0x10c);
      }
      BANK0_R2 = bVar2;
      FUN_CODE_0326();
    }
    uVar6 = (undefined1)(uVar7 >> 8);
    BANK0_R3 = DAT_INTMEM_81 & BANK3_R4;
    BANK0_R2 = bVar2;
    if (bVar5 != BANK3_R4) goto LAB_CODE_3be5;
    BANK0_R3 = DAT_INTMEM_82 & BANK3_R5;
    if (bVar5 != BANK3_R5) goto LAB_CODE_3be5;
    if (BANK2_R3 == '\0') goto LAB_CODE_3be5;
    param_2 = BANK2_R7 & 0xc0;
    if (param_2 == 0xc0) {
      DAT_INTMEM_7a = BANK1_R1;
      DAT_INTMEM_7b = BANK1_R2;
      DAT_INTMEM_7c = BANK2_R4;
      DAT_INTMEM_7d = BANK2_R7;
      uVar7 = CONCAT11(uVar6,4);
      FUN_CODE_11f9(uVar7);
      BANK0_R2 = bVar2;
    }
    else {
LAB_CODE_3e82:
      if ((BANK1_R0 == 0) && (uVar6 = 0xd2, param_2 = DAT_EXTMEM_d25c, (DAT_EXTMEM_d25c & 0xf) == 0)
         ) {
        uVar7 = 0xcc21;
        uEXTMEMcc21 = 1;
        BANK0_R2 = bVar2;
      }
      else {
        DAT_INTMEM_7a = BANK1_R1;
        DAT_INTMEM_7b = BANK1_R2;
        DAT_INTMEM_7c = BANK2_R4;
        DAT_INTMEM_7d = 0;
        uVar7 = CONCAT11(uVar6,0xd);
        BANK0_R2 = bVar2;
        FUN_CODE_11f9(uVar7);
        BANK0_R2 = bVar2;
      }
    }
LAB_CODE_3479:
    do {
      while (bVar2 = BANK0_R2, BANK2_R6 != '\0') {
LAB_CODE_34eb:
        uVar6 = BANK0_R4;
        BANK2_R6 = '\0';
        DAT_INTMEM_77 = param_2 & 7;
        bVar5 = bINTMEM7e & 0x60;
        DAT_INTMEM_76 = bINTMEM80;
        DAT_INTMEM_7a = 0x20;
        DAT_INTMEM_7b = 0x19;
        uVar7 = uVar7 & 0xff00;
        BANK0_R2 = bVar2;
        BANK0_R3 = bVar5;
        FUN_CODE_0270(uVar7,param_2 & 0x18);
        BANK0_R5 = bINTMEM7f & 0xf;
        BANK0_R2 = bVar2;
        BANK0_R3 = bVar5;
        BANK0_R4 = uVar6;
        if (BANK0_R5 < 0x10) {
                    /* WARNING: Could not recover jumptable at 0x3531. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ushort)(byte)(cVar3 * '\x03') + 0x3532))();
          return;
        }
      }
      DAT_INTMEM_7a = 0x20;
      DAT_INTMEM_7b = 6;
      FUN_CODE_0270(uVar7 & 0xff00);
      uEXTMEMcc2d = 0xfe;
      do {
        BANK3_R7 = 0xec;
        DAT_INTMEM_20 = 0x4f;
        DAT_INTMEM_21 = 0;
        DAT_INTMEM_22 = 0x72;
        DAT_INTMEM_23 = 0;
        DAT_INTMEM_24 = 0x40;
        DAT_INTMEM_25 = 0x73;
        DAT_INTMEM_26 = 0;
        DAT_INTMEM_27 = 0x40;
        BANK3_R6 = 0;
        param_2 = 0x26;
        BANK0_R2 = bVar2;
        FUN_CODE_17f4();
        uVar7 = 0x4fea;
        DAT_EXTMEM_4fea = param_2;
        if (param_2 == 0) {
          BANK0_R2 = bVar2;
          if (BANK1_R5 != '\0') goto LAB_CODE_3b47;
          if (BANK1_R6 == '\0') goto LAB_CODE_34eb;
          break;
        }
        uVar7 = 0x4fea;
        BANK0_R2 = bVar2;
        if (param_2 == 1) goto LAB_CODE_2a74;
        if (BANK1_R5 != '\0') goto LAB_CODE_3b47;
      } while (BANK1_R6 == '\0');
LAB_CODE_3be5:
      bVar2 = BANK0_R2;
      DAT_INTMEM_7a = 1;
      DAT_INTMEM_7b = 0xc;
      FUN_CODE_0270(uVar7 & 0xff00);
      BANK0_R3 = BANK0_R3 & 0xfc;
      uVar6 = 0x4f;
      bVar5 = DAT_EXTMEM_4fbf;
      if ((DAT_EXTMEM_4fbf == 1) && (uVar6 = 0, bVar5 = bCODE0049, (bCODE0049 >> 1 & 1) != 0)) {
        BANK0_R3 = BANK0_R3 | 1;
        DAT_EXTMEM_d67e = 0;
        uVar6 = 0xd6;
        DAT_EXTMEM_d67f = 0;
        bVar5 = DAT_EXTMEM_d77f;
      }
      BANK0_R2 = bVar2;
      if (BANK1_R6 != '\0') {
        DAT_INTMEM_30 = 0xf;
        DAT_INTMEM_31 = 0;
        DAT_INTMEM_32 = 0x40;
        DAT_INTMEM_33 = 0x10;
        DAT_INTMEM_34 = 0;
        DAT_INTMEM_35 = 0x40;
        DAT_INTMEM_2a = 0x21;
        DAT_INTMEM_2b = 0;
        DAT_INTMEM_2c = 0;
        DAT_INTMEM_2d = 0;
        DAT_INTMEM_2e = 1;
        DAT_INTMEM_2f = 0;
        FUN_CODE_1aa9(CONCAT11(uVar6,9),bVar5);
        cVar3 = BANK2_R2;
        BANK0_R2 = bVar2;
        bVar5 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
        bVar2 = BANK0_R2;
        BANK0_R2 = bVar2;
        if ((bVar5 & 1) != 0) {
          DAT_EXTMEM_4fe7 = 0;
          uINTMEMd4 = 0;
          DAT_INTMEM_2f = 0xd4;
          DAT_INTMEM_30 = 0xf;
          DAT_INTMEM_31 = 0;
          DAT_INTMEM_32 = 0x40;
          DAT_INTMEM_33 = 0x10;
          DAT_INTMEM_34 = 0;
          DAT_INTMEM_35 = 0x40;
          DAT_INTMEM_2a = 0x11;
          DAT_INTMEM_2b = 1;
          DAT_INTMEM_2c = 0;
          DAT_INTMEM_2d = 0;
          DAT_INTMEM_2e = 1;
          uVar6 = 0x4f;
          FUN_CODE_1aa9(0x4f08,bVar5);
          uINTMEMd5 = 0;
          uINTMEMd6 = 0;
          uINTMEMd7 = 0x3f;
          DAT_INTMEM_2f = 0xd5;
          DAT_INTMEM_30 = 0xf;
          DAT_INTMEM_31 = 0;
          DAT_INTMEM_32 = 0x40;
          DAT_INTMEM_33 = 0x10;
          DAT_INTMEM_34 = 0;
          DAT_INTMEM_35 = 0x40;
          DAT_INTMEM_2a = 0xc0;
          DAT_INTMEM_2b = 1;
          DAT_INTMEM_2c = 0;
          DAT_INTMEM_2d = 0;
          DAT_INTMEM_2e = 3;
          FUN_CODE_1aa9(CONCAT11(uVar6,8));
          BANK0_R2 = bVar2;
        }
      }
      BANK1_R6 = '\0';
      uEXTMEM4fe6 = 0;
      DAT_EXTMEM_cc00 = 1;
      DAT_EXTMEM_c200 = DAT_EXTMEM_c200 & 0xf1 | 3;
      if ((bCODE0048 >> 1 & 1) == 1) {
        param_2 = bEXTMEM4feb != 1;
        bVar1 = DAT_EXTMEM_4fbf != 1;
        if (bVar1 && (bool)param_2) {
          DAT_INTMEM_7a = BANK1_R1;
          DAT_INTMEM_7b = BANK1_R2;
          DAT_INTMEM_7c = BANK2_R4;
          DAT_INTMEM_7d = BANK2_R7;
          uVar7 = 0x4f03;
          FUN_CODE_11f9(0x4f03);
        }
        else {
          DAT_EXTMEM_4fbf = 0;
          if ((BANK2_R5 != '\0') ||
             (uVar7 = 0x4fe4, param_2 = DAT_EXTMEM_4fe4, DAT_EXTMEM_4fe4 != 0)) {
            do {
              bVar2 = DAT_EXTMEM_ca40;
              if ((DAT_EXTMEM_ca40 >> 1 & 1) == 1) break;
              bVar2 = bEXTMEMcb40;
            } while ((bEXTMEMcb40 & 6) != 0);
            uEXTMEMca0c = 1;
            DAT_INTMEM_30 = 0xf;
            DAT_INTMEM_31 = 0;
            DAT_INTMEM_32 = 0x40;
            DAT_INTMEM_33 = 0x10;
            DAT_INTMEM_34 = 0;
            DAT_INTMEM_35 = 0x40;
            DAT_INTMEM_2a = 2;
            DAT_INTMEM_2b = 1;
            DAT_INTMEM_2c = 0;
            DAT_INTMEM_2d = 0;
            DAT_INTMEM_2e = 1;
            DAT_INTMEM_2f = 0x8f;
            FUN_CODE_1aa9(0xca08,bVar2,bVar1);
            uEXTMEMce51 = 0x10;
            FUN_CODE_11d7();
            BANK0_R3 = BANK0_R3 & 0xfe;
            BANK2_R5 = '\0';
            uVar7 = 0x4fe4;
            DAT_EXTMEM_4fe4 = 0;
            param_2 = DAT_EXTMEM_d76d;
          }
        }
      }
      else if (param_1 == '\0') {
        if ((BANK2_R5 != '\0') || (uVar7 = 0x4fe4, param_2 = DAT_EXTMEM_4fe4, DAT_EXTMEM_4fe4 != 0))
        {
          do {
            bVar2 = DAT_EXTMEM_ca40;
            if ((DAT_EXTMEM_ca40 >> 1 & 1) == 1) break;
            bVar2 = bEXTMEMcb40;
          } while ((bEXTMEMcb40 & 6) != 0);
          uEXTMEMca0c = 1;
          DAT_INTMEM_30 = 0xf;
          DAT_INTMEM_31 = 0;
          DAT_INTMEM_32 = 0x40;
          DAT_INTMEM_33 = 0x10;
          DAT_INTMEM_34 = 0;
          DAT_INTMEM_35 = 0x40;
          DAT_INTMEM_2a = 2;
          DAT_INTMEM_2b = 1;
          DAT_INTMEM_2c = 0;
          DAT_INTMEM_2d = 0;
          DAT_INTMEM_2e = 1;
          DAT_INTMEM_2f = 0x8f;
          FUN_CODE_1aa9(0xca08,bVar2);
          uEXTMEMce51 = 0x10;
          FUN_CODE_11d7();
          BANK0_R3 = BANK0_R3 & 0xfe;
          BANK2_R5 = '\0';
          uVar7 = 0x4fe4;
          DAT_EXTMEM_4fe4 = 0;
          param_2 = DAT_EXTMEM_d76d;
        }
      }
      else {
        while (bEXTMEM4fb1 != 0) {
          DAT_INTMEM_7a = 0x20;
          DAT_INTMEM_7b = 0x28;
          FUN_CODE_0270(0x4f00);
        }
        DAT_INTMEM_7a = BANK1_R1;
        DAT_INTMEM_7b = BANK1_R2;
        DAT_INTMEM_7c = BANK2_R4;
        DAT_INTMEM_7d = BANK2_R7;
        uVar7 = 0x4f03;
        param_2 = bEXTMEM4fb1;
        FUN_CODE_11f9(0x4f03);
      }
      param_1 = '\0';
    } while( true );
  }
  goto LAB_CODE_3b47;
}



/* =========================================================
 * CODE:378a  FUN_CODE_378a  size=102
 * ========================================================= */

void FUN_CODE_378a(ushort param_1,char param_2,byte param_3)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  ushort uVar8;
  
  bVar2 = BANK0_R2;
  DAT_INTMEM_7a = 0x20;
  DAT_INTMEM_7b = 0x23;
  FUN_CODE_0270(param_1 & 0xff00);
  if (DAT_EXTMEM_4fe9 == '\0') {
    DAT_EXTMEM_c873 = 0xff;
    DAT_EXTMEM_c874 = 0xbc;
    DAT_EXTMEM_c878 = 0x1c;
    DAT_EXTMEM_c87c = 0;
    DAT_EXTMEM_c87d = 0x20;
    DAT_EXTMEM_c87e = 0xff;
    DAT_EXTMEM_c87f = 1;
  }
  BANK0_R5 = BANK0_R5 & 0xfb;
  DAT_INTMEM_7a = BANK1_R1;
  DAT_INTMEM_7b = BANK1_R2;
  DAT_INTMEM_7c = BANK2_R4;
  DAT_INTMEM_7d = DAT_INTMEM_76;
  uVar8 = 0xca0e;
  cVar3 = cEXTMEMca00;
  BANK0_R2 = bVar2;
  FUN_CODE_11f9(0xca0e);
  BANK0_R2 = bVar2;
LAB_CODE_3479:
  do {
    while (bVar2 = BANK0_R2, BANK2_R6 != '\0') {
LAB_CODE_34eb:
      uVar6 = BANK0_R4;
      BANK2_R6 = '\0';
      DAT_INTMEM_77 = param_3 & 7;
      bVar5 = bINTMEM7e & 0x60;
      DAT_INTMEM_76 = bINTMEM80;
      DAT_INTMEM_7a = 0x20;
      DAT_INTMEM_7b = 0x19;
      uVar8 = uVar8 & 0xff00;
      BANK0_R2 = bVar2;
      BANK0_R3 = bVar5;
      FUN_CODE_0270(uVar8,param_3 & 0x18);
      BANK0_R5 = bINTMEM7f & 0xf;
      BANK0_R2 = bVar2;
      BANK0_R3 = bVar5;
      BANK0_R4 = uVar6;
      if (BANK0_R5 < 0x10) {
                    /* WARNING: Could not recover jumptable at 0x3531. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ushort)(byte)(cVar3 * '\x03') + 0x3532))();
        return;
      }
    }
    DAT_INTMEM_7a = 0x20;
    DAT_INTMEM_7b = 6;
    FUN_CODE_0270(uVar8 & 0xff00);
    uEXTMEMcc2d = 0xfe;
    do {
      BANK3_R7 = 0xec;
      DAT_INTMEM_20 = 0x4f;
      DAT_INTMEM_21 = 0;
      DAT_INTMEM_22 = 0x72;
      DAT_INTMEM_23 = 0;
      DAT_INTMEM_24 = 0x40;
      DAT_INTMEM_25 = 0x73;
      DAT_INTMEM_26 = 0;
      DAT_INTMEM_27 = 0x40;
      BANK3_R6 = 0;
      param_3 = 0x26;
      BANK0_R2 = bVar2;
      FUN_CODE_17f4();
      uVar8 = 0x4fea;
      DAT_EXTMEM_4fea = param_3;
      if (param_3 == 0) {
        BANK0_R2 = bVar2;
        if (BANK1_R5 != '\0') goto LAB_CODE_3b47;
        if (BANK1_R6 == '\0') goto LAB_CODE_34eb;
        break;
      }
      uVar8 = 0x4fea;
      BANK0_R2 = bVar2;
      if (param_3 == 1) goto LAB_CODE_2a74;
      if (BANK1_R5 != '\0') goto LAB_CODE_3b47;
    } while (BANK1_R6 == '\0');
LAB_CODE_3be5:
    bVar2 = BANK0_R2;
    DAT_INTMEM_7a = 1;
    DAT_INTMEM_7b = 0xc;
    FUN_CODE_0270(uVar8 & 0xff00);
    BANK0_R3 = BANK0_R3 & 0xfc;
    uVar6 = 0x4f;
    bVar5 = DAT_EXTMEM_4fbf;
    if ((DAT_EXTMEM_4fbf == 1) && (uVar6 = 0, bVar5 = bCODE0049, (bCODE0049 >> 1 & 1) != 0)) {
      BANK0_R3 = BANK0_R3 | 1;
      DAT_EXTMEM_d67e = 0;
      uVar6 = 0xd6;
      DAT_EXTMEM_d67f = 0;
      bVar5 = DAT_EXTMEM_d77f;
    }
    BANK0_R2 = bVar2;
    if (BANK1_R6 != '\0') {
      DAT_INTMEM_30 = 0xf;
      DAT_INTMEM_31 = 0;
      DAT_INTMEM_32 = 0x40;
      DAT_INTMEM_33 = 0x10;
      DAT_INTMEM_34 = 0;
      DAT_INTMEM_35 = 0x40;
      DAT_INTMEM_2a = 0x21;
      DAT_INTMEM_2b = 0;
      DAT_INTMEM_2c = 0;
      DAT_INTMEM_2d = 0;
      DAT_INTMEM_2e = 1;
      DAT_INTMEM_2f = 0;
      FUN_CODE_1aa9(CONCAT11(uVar6,9),bVar5);
      cVar3 = BANK2_R2;
      BANK0_R2 = bVar2;
      bVar5 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
      bVar2 = BANK0_R2;
      BANK0_R2 = bVar2;
      if ((bVar5 & 1) != 0) {
        DAT_EXTMEM_4fe7 = 0;
        uINTMEMd4 = 0;
        DAT_INTMEM_2f = 0xd4;
        DAT_INTMEM_30 = 0xf;
        DAT_INTMEM_31 = 0;
        DAT_INTMEM_32 = 0x40;
        DAT_INTMEM_33 = 0x10;
        DAT_INTMEM_34 = 0;
        DAT_INTMEM_35 = 0x40;
        DAT_INTMEM_2a = 0x11;
        DAT_INTMEM_2b = 1;
        DAT_INTMEM_2c = 0;
        DAT_INTMEM_2d = 0;
        DAT_INTMEM_2e = 1;
        uVar6 = 0x4f;
        FUN_CODE_1aa9(0x4f08,bVar5);
        uINTMEMd5 = 0;
        uINTMEMd6 = 0;
        uINTMEMd7 = 0x3f;
        DAT_INTMEM_2f = 0xd5;
        DAT_INTMEM_30 = 0xf;
        DAT_INTMEM_31 = 0;
        DAT_INTMEM_32 = 0x40;
        DAT_INTMEM_33 = 0x10;
        DAT_INTMEM_34 = 0;
        DAT_INTMEM_35 = 0x40;
        DAT_INTMEM_2a = 0xc0;
        DAT_INTMEM_2b = 1;
        DAT_INTMEM_2c = 0;
        DAT_INTMEM_2d = 0;
        DAT_INTMEM_2e = 3;
        FUN_CODE_1aa9(CONCAT11(uVar6,8));
        BANK0_R2 = bVar2;
      }
    }
    BANK1_R6 = '\0';
    uEXTMEM4fe6 = 0;
    DAT_EXTMEM_cc00 = 1;
    DAT_EXTMEM_c200 = DAT_EXTMEM_c200 & 0xf1 | 3;
    if ((bCODE0048 >> 1 & 1) == 1) {
      param_3 = bEXTMEM4feb != 1;
      bVar1 = DAT_EXTMEM_4fbf != 1;
      if (bVar1 && (bool)param_3) {
        DAT_INTMEM_7a = BANK1_R1;
        DAT_INTMEM_7b = BANK1_R2;
        DAT_INTMEM_7c = BANK2_R4;
        DAT_INTMEM_7d = BANK2_R7;
        uVar8 = 0x4f03;
        FUN_CODE_11f9(0x4f03);
      }
      else {
        DAT_EXTMEM_4fbf = 0;
        if ((BANK2_R5 != '\0') || (uVar8 = 0x4fe4, param_3 = DAT_EXTMEM_4fe4, DAT_EXTMEM_4fe4 != 0))
        {
          do {
            bVar2 = DAT_EXTMEM_ca40;
            if ((DAT_EXTMEM_ca40 >> 1 & 1) == 1) break;
            bVar2 = bEXTMEMcb40;
          } while ((bEXTMEMcb40 & 6) != 0);
          uEXTMEMca0c = 1;
          DAT_INTMEM_30 = 0xf;
          DAT_INTMEM_31 = 0;
          DAT_INTMEM_32 = 0x40;
          DAT_INTMEM_33 = 0x10;
          DAT_INTMEM_34 = 0;
          DAT_INTMEM_35 = 0x40;
          DAT_INTMEM_2a = 2;
          DAT_INTMEM_2b = 1;
          DAT_INTMEM_2c = 0;
          DAT_INTMEM_2d = 0;
          DAT_INTMEM_2e = 1;
          DAT_INTMEM_2f = 0x8f;
          FUN_CODE_1aa9(0xca08,bVar2,bVar1);
          uEXTMEMce51 = 0x10;
          FUN_CODE_11d7();
          BANK0_R3 = BANK0_R3 & 0xfe;
          BANK2_R5 = '\0';
          uVar8 = 0x4fe4;
          DAT_EXTMEM_4fe4 = 0;
          param_3 = DAT_EXTMEM_d76d;
        }
      }
    }
    else if (param_2 == '\0') {
      if ((BANK2_R5 != '\0') || (uVar8 = 0x4fe4, param_3 = DAT_EXTMEM_4fe4, DAT_EXTMEM_4fe4 != 0)) {
        do {
          bVar2 = DAT_EXTMEM_ca40;
          if ((DAT_EXTMEM_ca40 >> 1 & 1) == 1) break;
          bVar2 = bEXTMEMcb40;
        } while ((bEXTMEMcb40 & 6) != 0);
        uEXTMEMca0c = 1;
        DAT_INTMEM_30 = 0xf;
        DAT_INTMEM_31 = 0;
        DAT_INTMEM_32 = 0x40;
        DAT_INTMEM_33 = 0x10;
        DAT_INTMEM_34 = 0;
        DAT_INTMEM_35 = 0x40;
        DAT_INTMEM_2a = 2;
        DAT_INTMEM_2b = 1;
        DAT_INTMEM_2c = 0;
        DAT_INTMEM_2d = 0;
        DAT_INTMEM_2e = 1;
        DAT_INTMEM_2f = 0x8f;
        FUN_CODE_1aa9(0xca08,bVar2);
        uEXTMEMce51 = 0x10;
        FUN_CODE_11d7();
        BANK0_R3 = BANK0_R3 & 0xfe;
        BANK2_R5 = '\0';
        uVar8 = 0x4fe4;
        DAT_EXTMEM_4fe4 = 0;
        param_3 = DAT_EXTMEM_d76d;
      }
    }
    else {
      while (bEXTMEM4fb1 != 0) {
        DAT_INTMEM_7a = 0x20;
        DAT_INTMEM_7b = 0x28;
        FUN_CODE_0270(0x4f00);
      }
      DAT_INTMEM_7a = BANK1_R1;
      DAT_INTMEM_7b = BANK1_R2;
      DAT_INTMEM_7c = BANK2_R4;
      DAT_INTMEM_7d = BANK2_R7;
      uVar8 = 0x4f03;
      param_3 = bEXTMEM4fb1;
      FUN_CODE_11f9(0x4f03);
    }
    param_2 = '\0';
  } while( true );
LAB_CODE_3b47:
  bVar2 = BANK0_R2;
  DAT_INTMEM_7a = 0x20;
  DAT_INTMEM_7b = 0xb;
  uVar8 = uVar8 & 0xff00;
  FUN_CODE_0270(uVar8);
  uVar6 = (undefined1)(uVar8 >> 8);
  BANK1_R5 = '\0';
  if ((((BANK3_R0 == '\0') && (uVar6 = 0x4f, param_3 = bEXTMEM4feb, bEXTMEM4feb == 0)) &&
      (uVar6 = 0xcc, cEXTMEMcc8d == '\0')) && (param_2 != '\0')) {
    uVar8 = 0xcc02;
    BANK0_R2 = bVar2;
    FUN_CODE_1f0b();
    param_3 = (byte)uVar8;
    BANK0_R2 = bVar2;
    if (param_3 == 1) {
LAB_CODE_2a74:
      do {
        if ((bEXTMEMd66f >> 4 & 1) != 0) {
          uEXTMEMca10 = 3;
          uEXTMEMca15 = 0x20;
          uEXTMEMca14 = 7;
        }
        if ((bCODE0048 >> 4 & 1) != 0) {
          uEXTMEMd7fc = 1;
          uEXTMEMd7fa = 1;
          uEXTMEMd7f8 = 1;
          uEXTMEMd7f6 = 1;
        }
        do {
          BANK0_R2 = BANK0_R2 & 0xe;
        } while (bEXTMEMc800 == 0xe);
        BANK1_R0 = DAT_EXTMEM_c801 & 0x80;
        if (BANK1_R0 == 0) {
          BANK0_R2 = BANK0_R2 | 0x9b;
          uEXTMEMd21e = 0xff;
        }
        else {
          uEXTMEMcc8e = 0;
        }
        bVar2 = BANK0_R2;
        DAT_EXTMEM_4fe9 = '\0';
        BANK1_R1 = 0;
        BANK1_R2 = 0;
        BANK2_R4 = 0;
        BANK1_R5 = '\0';
        BANK1_R6 = '\0';
        BANK2_R3 = '\0';
        BANK2_R7 = 0;
        DAT_EXTMEM_4fe4 = 0;
        BANK2_R5 = '\0';
        BANK2_R6 = '\0';
        BANK3_R0 = '\0';
        bEXTMEM4feb = 0;
        param_2 = '\0';
        uEXTMEM4fe5 = 0;
        uEXTMEM4fe6 = 0;
        DAT_EXTMEM_4fe7 = 0;
        DAT_EXTMEM_4fae = 0;
        uEXTMEMd766 = 8;
        uEXTMEMd600 = 0;
        uEXTMEMd680 = 0;
        uEXTMEMd700 = 0;
        uEXTMEMd780 = 0;
        if (cCODE004b < '\0') {
          uEXTMEMd677 = 0;
        }
        else {
          uEXTMEMd677 = 0xf;
        }
        if (BANK1_R0 == 0) {
          BANK0_R3 = BANK0_R3 & 0xfc | 4;
          uEXTMEMd254 = 0xff;
          uEXTMEMd255 = 0xff;
        }
        else if ((bEXTMEMc84b >> 3 & 1) == 1) {
          BANK0_R3 = BANK0_R3 | 4;
        }
        else {
          BANK0_R3 = BANK0_R3 & 0xfa;
        }
        uEXTMEMcc92 = 8;
        BANK3_R1 = uEXTMEMcc8e;
        uEXTMEMcc96 = 1;
        BANK0_R3 = BANK0_R3 & 0xfe;
        FUN_CODE_1da2(5);
        DAT_EXTMEM_4fea = DAT_EXTMEM_c801 & 0x3f;
        if (DAT_EXTMEM_4fea == 8) {
          for (bEXTMEM4ff0 = 0; bEXTMEM4ff0 < 2; bEXTMEM4ff0 = bEXTMEM4ff0 + 1) {
          }
          BANK0_R3 = BANK0_R3 & 0xfd;
          DAT_INTMEM_7a = 0x10;
          DAT_INTMEM_7b = 0x1c;
          BANK0_R2 = bVar2;
          FUN_CODE_0270(0xd600);
          do {
          } while ((bEXTMEMd67c >> 2 & 1) == 0);
        }
        while ((((DAT_EXTMEM_c848 >> 2 & 1) != 0 &&
                (uVar8 = 0xcc93, bVar5 = DAT_EXTMEM_c848, DAT_EXTMEM_cc93 == '\0')) ||
               (uVar8 = 0xc808, bVar5 = DAT_EXTMEM_c808, (DAT_EXTMEM_c808 & 1) != 0))) {
          DAT_INTMEM_7a = 0x20;
          DAT_INTMEM_7b = 0x20;
          BANK0_R2 = bVar2;
          FUN_CODE_0270(uVar8 & 0xff00,bVar5);
        }
        do {
        } while ((DAT_EXTMEM_cc07 & 1) == 1);
        do {
        } while ((bEXTMEMc82f & 1) == 0);
        BANK0_R3 = BANK0_R3 | 3;
        if ((bEXTMEMc800 >> 4 & 1) != 0) {
          BANK0_R2 = bVar2;
          FUN_CODE_1da2(0x1c2,bEXTMEMc800);
        }
        if ((bEXTMEMc800 & 1) == 1) {
          if (cEXTMEMd66e == '\x01') {
            bEXTMEMc890 = 1;
            uEXTMEMc891 = 0xc;
            uEXTMEMd449 = 2;
            uEXTMEMd766 = 0;
            DAT_EXTMEM_d672 = 0;
            BANK0_R3 = BANK0_R3 & 3;
          }
          else if (cEXTMEMd66e == '\x02') {
            DAT_EXTMEM_d672 = 0xf;
            BANK0_R3 = BANK0_R3 & 2;
          }
          else {
            DAT_EXTMEM_d672 = 0xf;
            BANK0_R3 = BANK0_R3 & 3;
          }
          BANK0_R2 = bVar2;
          for (bEXTMEM4ff0 = 0; bEXTMEM4ff0 < 4; bEXTMEM4ff0 = bEXTMEM4ff0 + 1) {
            DAT_INTMEM_7b = bEXTMEM4ff0;
            DAT_INTMEM_7a = 0;
            FUN_CODE_0e94(0x4f00);
          }
          uEXTMEMca5a = 0;
          BANK0_R3 = BANK0_R3 | 1;
          uEXTMEMd767 = 0x3f;
          BANK1_R1 = 4;
          do {
            if (bEXTMEMc890 != 0) {
              DAT_INTMEM_7a = 0x20;
              DAT_INTMEM_7b = 4;
              FUN_CODE_0270(0xc800);
              do {
              } while( true );
            }
            DAT_INTMEM_7a = 1;
            DAT_INTMEM_7b = 2;
            FUN_CODE_0270(0xc800);
            uEXTMEMd446 = 0xc4;
            uEXTMEMd447 = 0;
            uEXTMEMd453 = 0x3a;
            uEXTMEMd47d = 0x3a;
            uEXTMEMd454 = 0x54;
            uEXTMEMd47e = 0x54;
            FUN_CODE_0478();
            while (FUN_CODE_0aba(), (DAT_EXTMEM_c802 & 1) == 0) {
              if ((DAT_EXTMEM_cc07 & 1) != 0) {
                FUN_CODE_0e61(DAT_EXTMEM_cc07);
                goto LAB_CODE_2a74;
              }
            }
            FUN_CODE_0f3d(DAT_EXTMEM_c802);
            FUN_CODE_1010();
            FUN_CODE_1da2(0xf);
            BANK0_R3 = BANK0_R3 & 0xdd;
            DAT_EXTMEM_cc00 = 0;
            FUN_CODE_1043();
            uEXTMEMce51 = 0;
            DAT_INTMEM_7a = 1;
            DAT_INTMEM_7b = 3;
            bVar2 = FUN_CODE_0270(0xce00);
            while( true ) {
              FUN_CODE_0aba(bVar2);
              while (DAT_EXTMEM_cc93 == '\x01') {
                DAT_INTMEM_7a = 0x20;
                DAT_INTMEM_7b = 0x21;
                FUN_CODE_0270(0xcc00);
              }
              if (((((DAT_EXTMEM_c802 & 1) != 1) && ((bEXTMEMc890 & 1) == 0)) ||
                  (-1 < (char)DAT_EXTMEM_d77f)) && ((bEXTMEMc890 & 1) != 1)) break;
              DAT_EXTMEM_4fea = DAT_EXTMEM_cc07;
              if ((DAT_EXTMEM_cc07 & 1) != 0) {
                FUN_CODE_0e61(DAT_EXTMEM_cc07);
                goto LAB_CODE_2a74;
              }
              bVar2 = DAT_EXTMEM_cc07;
              if ((DAT_EXTMEM_cc07 >> 2 & 1) != 0) {
                bINTMEM7f = BANK0_R3;
                bINTMEM80 = BANK0_R3;
                bVar2 = bEXTMEMcc37;
              }
            }
            FUN_CODE_0e61(bEXTMEMc890);
          } while( true );
        }
        uEXTMEMca5a = 0;
        DAT_INTMEM_7a = 1;
        DAT_INTMEM_7b = 5;
        BANK0_R2 = bVar2;
        FUN_CODE_0270(0xca00,bEXTMEMc800);
        cEXTMEM4fef = '\0';
        uVar6 = 200;
        BANK0_R2 = bVar2;
        if (((DAT_EXTMEM_c848 >> 4 & 1) != 1) ||
           ((bVar5 = DAT_EXTMEM_c848, BANK1_R0 == 0 &&
            (uVar6 = 0xd2, bVar5 = DAT_EXTMEM_d252, (DAT_EXTMEM_d252 >> 5 & 1) != 0))))
        goto LAB_CODE_33b1;
        DAT_INTMEM_ee = 1;
        DAT_INTMEM_2f = 0xee;
        DAT_INTMEM_30 = 0xf;
        DAT_INTMEM_31 = 0;
        DAT_INTMEM_32 = 0x40;
        DAT_INTMEM_33 = 0x10;
        DAT_INTMEM_34 = 0;
        DAT_INTMEM_35 = 0x40;
        DAT_INTMEM_2a = 0;
        DAT_INTMEM_2b = 6;
        DAT_INTMEM_2c = 0;
        DAT_INTMEM_2d = 0;
        DAT_INTMEM_2e = 1;
        uVar7 = CONCAT11(uVar6,8);
        FUN_CODE_1aa9(uVar7,bVar5);
        uVar6 = (undefined1)((ushort)uVar7 >> 8);
        if (BANK1_R0 != 0) goto LAB_CODE_2f76;
        uEXTMEMcc0c = 199;
        uEXTMEMcc0b = 0;
        do {
          if (((cEXTMEMcc29 == '\0') && (99 < bEXTMEMcc0a)) || ((bEXTMEMcc90 & 1) == 1)) {
            uVar6 = 0xcc;
            uEXTMEMcc0c = 99;
            goto LAB_CODE_2f76;
          }
        } while ((DAT_EXTMEM_cc07 & 1) == 0);
        DAT_EXTMEM_cc00 = 1;
        BANK0_R2 = bVar2;
        FUN_CODE_11d7(DAT_EXTMEM_cc07);
        BANK0_R3 = BANK0_R3 & 0xfe;
        DAT_EXTMEM_c200 = DAT_EXTMEM_c200 & 0xf1 | 3;
        DAT_EXTMEM_d67e = 0;
        DAT_EXTMEM_d67f = 0;
      } while( true );
    }
    if (BANK1_R5 != '\0') goto LAB_CODE_3b47;
    if (BANK1_R6 != '\0') goto LAB_CODE_3be5;
    uVar8 = 0;
    bVar5 = bCODE0048;
    if ((bCODE0048 >> 2 & 1) != 0) {
      uVar8 = 0;
      if ((bCODE0048 >> 5 & 1) != 0) {
        DAT_INTMEM_7d = DAT_EXTMEM_0120;
        DAT_INTMEM_7a = BANK1_R1;
        DAT_INTMEM_7b = BANK1_R2;
        DAT_INTMEM_7c = BANK2_R4;
        uVar8 = 0x10c;
        FUN_CODE_11f9(0x10c);
      }
      BANK0_R2 = bVar2;
      FUN_CODE_0326();
    }
    uVar6 = (undefined1)(uVar8 >> 8);
    BANK0_R3 = DAT_INTMEM_81 & BANK3_R4;
    BANK0_R2 = bVar2;
    if (((bVar5 != BANK3_R4) || (BANK0_R3 = DAT_INTMEM_82 & BANK3_R5, bVar5 != BANK3_R5)) ||
       (BANK2_R3 == '\0')) goto LAB_CODE_3be5;
    param_3 = BANK2_R7 & 0xc0;
    if (param_3 == 0xc0) {
      DAT_INTMEM_7a = BANK1_R1;
      DAT_INTMEM_7b = BANK1_R2;
      DAT_INTMEM_7c = BANK2_R4;
      DAT_INTMEM_7d = BANK2_R7;
      uVar8 = CONCAT11(uVar6,4);
      FUN_CODE_11f9(uVar8);
      BANK0_R2 = bVar2;
      goto LAB_CODE_3479;
    }
  }
  if ((BANK1_R0 == 0) && (uVar6 = 0xd2, param_3 = DAT_EXTMEM_d25c, (DAT_EXTMEM_d25c & 0xf) == 0)) {
    uVar8 = 0xcc21;
    uEXTMEMcc21 = 1;
    BANK0_R2 = bVar2;
  }
  else {
    DAT_INTMEM_7a = BANK1_R1;
    DAT_INTMEM_7b = BANK1_R2;
    DAT_INTMEM_7c = BANK2_R4;
    DAT_INTMEM_7d = 0;
    uVar8 = CONCAT11(uVar6,0xd);
    BANK0_R2 = bVar2;
    FUN_CODE_11f9(uVar8);
    BANK0_R2 = bVar2;
  }
  goto LAB_CODE_3479;
LAB_CODE_2f76:
  DAT_INTMEM_30 = 0xf;
  DAT_INTMEM_31 = 0;
  DAT_INTMEM_32 = 0x40;
  DAT_INTMEM_33 = 0x10;
  DAT_INTMEM_34 = 0;
  DAT_INTMEM_35 = 0x40;
  DAT_INTMEM_2a = 0;
  DAT_INTMEM_2b = 0;
  DAT_INTMEM_2c = 0;
  DAT_INTMEM_2d = 0;
  DAT_INTMEM_2e = 0xc;
  DAT_INTMEM_2f = 0;
  BANK0_R2 = bVar2;
  FUN_CODE_1aa9(CONCAT11(uVar6,9));
  BANK0_R2 = bVar2;
  bVar2 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
  cEXTMEM4fef = 0x11 < bVar2;
  cVar3 = BANK2_R2;
  bVar2 = FUN_CODE_3ed5(CONCAT11(BANK2_R1 - (((0xfd < BANK2_R0) << 7) >> 7),BANK2_R0 + 2),BANK2_R2);
  DAT_EXTMEM_4fae = bVar2 & 0x40;
  if (BANK1_R0 == 0) {
    uEXTMEMd257 = 0x11;
    BANK0_R3 = 0;
    cVar3 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
    if ((cVar3 != '\x10') && (cVar3 != '\x11')) {
      if (cVar3 == '\x12') {
        BANK0_R3 = BANK0_R3 | 0x10;
      }
      else {
        BANK0_R3 = BANK0_R3 | 0x10;
      }
    }
    if ((bEXTMEMc80a & 0xf) == 0) {
      cVar3 = FUN_CODE_3ed5(CONCAT11(BANK2_R1 - (((0xfe < BANK2_R0) << 7) >> 7),BANK2_R0 + 1),
                            BANK2_R2);
      if (cVar3 != '\x06') {
        if (cVar3 == '\n') {
          BANK0_R3 = BANK0_R3 | 1;
        }
        else if (cVar3 == '\x14') {
          BANK0_R3 = BANK0_R3 | 2;
        }
        else {
          BANK0_R3 = BANK0_R3 | 2;
        }
      }
    }
    else {
      BANK0_R3 = BANK0_R3 & 0xf;
      if (bEXTMEMc80a != 1) {
        if (bEXTMEMc80a == 2) {
          BANK0_R3 = BANK0_R3 | 1;
        }
        else if (bEXTMEMc80a == 3) {
          BANK0_R3 = BANK0_R3 | 2;
        }
        else {
          BANK0_R3 = BANK0_R3 | 2;
        }
      }
    }
    if ((bEXTMEMc80a & 0xf0) == 0) {
      cVar3 = FUN_CODE_3ed5(CONCAT11(BANK2_R1 - (((0xfd < BANK2_R0) << 7) >> 7),BANK2_R0 + 2),
                            BANK2_R2);
      BANK0_R3 = BANK0_R3 & 0x1f;
      if (cVar3 != '\x01') {
        if (cVar3 == '\x02') {
          BANK0_R3 = BANK0_R3 | 0x10;
        }
        else if (cVar3 == '\x04') {
          BANK0_R3 = BANK0_R3 | 0x20;
        }
        else {
          BANK0_R3 = BANK0_R3 | 0x20;
        }
      }
    }
    else {
      BANK0_R3 = BANK0_R3 & 0xf0;
      if (bEXTMEMc80a != 0x10) {
        if (bEXTMEMc80a == 0x20) {
          BANK0_R3 = BANK0_R3 | 0x10;
        }
        else if (bEXTMEMc80a == 0x40) {
          BANK0_R3 = BANK0_R3 | 0x20;
        }
        else {
          BANK0_R3 = BANK0_R3 | 0x20;
        }
      }
    }
    cVar3 = BANK2_R1 - (((0xfd < BANK2_R0) << 7) >> 7);
    bVar2 = FUN_CODE_3ed5(CONCAT11(cVar3,BANK2_R0 + 2),BANK2_R2);
    BANK0_R3 = BANK0_R3 & 0xfe | bVar2 & 0xc0;
  }
  bVar2 = BANK0_R2;
  if ((bCODE0048 >> 2 & 1) != 0) {
    DAT_INTMEM_30 = 0xf;
    DAT_INTMEM_31 = 0;
    DAT_INTMEM_32 = 0x40;
    DAT_INTMEM_33 = 0x10;
    DAT_INTMEM_34 = 0;
    DAT_INTMEM_35 = 0x40;
    DAT_INTMEM_2a = 0;
    DAT_INTMEM_2b = 2;
    DAT_INTMEM_2c = 0;
    DAT_INTMEM_2d = 0;
    DAT_INTMEM_2e = 1;
    DAT_INTMEM_2f = 0;
    FUN_CODE_1aa9(9,bCODE0048);
    cVar3 = BANK2_R2;
    bVar5 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
    DAT_EXTMEM_0120 = bVar5 & 0x1f;
    FUN_CODE_0326();
  }
  BANK0_R2 = bVar2;
  if (cEXTMEM4fef != '\0') {
    DAT_INTMEM_30 = 0xf;
    DAT_INTMEM_31 = 0;
    DAT_INTMEM_32 = 0x40;
    DAT_INTMEM_33 = 0x10;
    DAT_INTMEM_34 = 0;
    DAT_INTMEM_35 = 0x40;
    DAT_INTMEM_2a = 0xe;
    DAT_INTMEM_2b = 0;
    DAT_INTMEM_2c = 0;
    DAT_INTMEM_2d = 0;
    DAT_INTMEM_2e = 1;
    DAT_INTMEM_2f = 0;
    FUN_CODE_1aa9(0x4f09,cEXTMEM4fef);
    cVar3 = BANK2_R2;
    if ((bEXTMEMc809 & 1) == 1) {
      BANK0_R2 = bVar2;
      cVar4 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
      BANK0_R3 = BANK0_R3 & 0x7f;
      if (BANK0_R3 < 5) {
                    /* WARNING: Could not recover jumptable at 0x32a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ushort)(byte)(cVar4 * '\x03') + 0x32aa))();
        return;
      }
    }
    else {
      BANK0_R2 = bVar2;
      cVar4 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
      BANK0_R3 = BANK0_R3 & 0x7f;
      if (BANK0_R3 < 5) {
                    /* WARNING: Could not recover jumptable at 0x3333. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ushort)(byte)(cVar4 * '\x03') + 0x3334))();
        return;
      }
    }
  }
LAB_CODE_33b1:
  bVar2 = BANK0_R2;
  uEXTMEM4fd9 = 1;
  DAT_EXTMEM_4fd8 = 4;
  BANK0_R3 = BANK0_R3 & 0xfe;
  uVar8 = 0x4fef;
  if (cEXTMEM4fef == '\0') {
    param_3 = 0;
  }
  else {
    DAT_INTMEM_30 = 0xf;
    DAT_INTMEM_31 = 0;
    DAT_INTMEM_32 = 0x40;
    DAT_INTMEM_33 = 0x10;
    DAT_INTMEM_34 = 0;
    DAT_INTMEM_35 = 0x40;
    DAT_INTMEM_2a = 0x21;
    DAT_INTMEM_2b = 0;
    DAT_INTMEM_2c = 0;
    DAT_INTMEM_2d = 0;
    DAT_INTMEM_2e = 1;
    DAT_INTMEM_2f = 0;
    FUN_CODE_1aa9(0x4f09);
    uVar8 = CONCAT11(BANK2_R1,BANK2_R0);
    cVar3 = BANK2_R2;
    BANK0_R2 = bVar2;
    param_3 = FUN_CODE_3ed5(uVar8,BANK2_R2);
    bVar2 = BANK0_R2;
    BANK0_R2 = bVar2;
    if ((param_3 & 1) != 0) {
      DAT_EXTMEM_4fe7 = 0;
      uINTMEMd4 = 0;
      DAT_INTMEM_2f = 0xd4;
      DAT_INTMEM_30 = 0xf;
      DAT_INTMEM_31 = 0;
      DAT_INTMEM_32 = 0x40;
      DAT_INTMEM_33 = 0x10;
      DAT_INTMEM_34 = 0;
      DAT_INTMEM_35 = 0x40;
      DAT_INTMEM_2a = 0x11;
      DAT_INTMEM_2b = 1;
      DAT_INTMEM_2c = 0;
      DAT_INTMEM_2d = 0;
      DAT_INTMEM_2e = 1;
      uVar6 = 0x4f;
      FUN_CODE_1aa9(0x4f08);
      uINTMEMd5 = 0;
      uINTMEMd6 = 0;
      uINTMEMd7 = 0x3f;
      DAT_INTMEM_2f = 0xd5;
      DAT_INTMEM_30 = 0xf;
      DAT_INTMEM_31 = 0;
      DAT_INTMEM_32 = 0x40;
      DAT_INTMEM_33 = 0x10;
      DAT_INTMEM_34 = 0;
      DAT_INTMEM_35 = 0x40;
      DAT_INTMEM_2a = 0xc0;
      DAT_INTMEM_2b = 1;
      DAT_INTMEM_2c = 0;
      DAT_INTMEM_2d = 0;
      DAT_INTMEM_2e = 3;
      uVar8 = CONCAT11(uVar6,8);
      FUN_CODE_1aa9(uVar8);
      BANK0_R2 = bVar2;
    }
  }
  if (BANK1_R5 == '\0') goto LAB_CODE_3479;
  goto LAB_CODE_3b47;
}



/* =========================================================
 * CODE:37f0  FUN_CODE_37f0  size=241
 * ========================================================= */

void FUN_CODE_37f0(ushort param_1,char param_2,byte param_3)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  ushort uVar8;
  
  bVar2 = BANK0_R2;
  DAT_INTMEM_7a = 0x20;
  DAT_INTMEM_7b = 0x24;
  FUN_CODE_0270(param_1 & 0xff00);
  cVar3 = (DAT_INTMEM_76 & 1) == 0;
  uVar6 = 0x4f;
  DAT_EXTMEM_4fe7 = !(bool)cVar3;
  if (BANK1_R0 == 0) {
    cVar3 = cEXTMEMd208;
    if ((bool)DAT_EXTMEM_4fe7) {
      if (param_2 == '\x01') {
        if ((DAT_EXTMEM_c848 >> 6 & 1) != 0) {
          BANK0_R5 = BANK0_R5 | 0x24;
        }
        uEXTMEMd20b = 0x84;
        BANK0_R5 = BANK0_R5 & 0xfe | 10;
      }
      BANK0_R5 = BANK0_R5 | 8;
      uVar6 = 0xd2;
    }
    else {
      if (param_2 == '\x01') {
        if ((DAT_EXTMEM_c848 >> 6 & 1) != 0) {
          BANK0_R5 = BANK0_R5 | 0x28;
        }
        uEXTMEMd20b = 0x85;
        BANK0_R5 = BANK0_R5 & 0xf5 | 1;
      }
      BANK0_R5 = BANK0_R5 & 0xf7;
      uVar6 = 0xd2;
    }
  }
  DAT_INTMEM_7a = BANK1_R1;
  DAT_INTMEM_7b = BANK1_R2;
  DAT_INTMEM_7c = BANK2_R4;
  DAT_INTMEM_7d = 0x80;
  uVar8 = CONCAT11(uVar6,0xf);
  BANK0_R2 = bVar2;
  FUN_CODE_11f9(uVar8);
  BANK0_R2 = bVar2;
LAB_CODE_3479:
  do {
    while (bVar2 = BANK0_R2, BANK2_R6 != '\0') {
LAB_CODE_34eb:
      uVar6 = BANK0_R4;
      BANK2_R6 = '\0';
      DAT_INTMEM_77 = param_3 & 7;
      bVar5 = bINTMEM7e & 0x60;
      DAT_INTMEM_76 = bINTMEM80;
      DAT_INTMEM_7a = 0x20;
      DAT_INTMEM_7b = 0x19;
      uVar8 = uVar8 & 0xff00;
      BANK0_R2 = bVar2;
      BANK0_R3 = bVar5;
      FUN_CODE_0270(uVar8,param_3 & 0x18);
      BANK0_R5 = bINTMEM7f & 0xf;
      BANK0_R2 = bVar2;
      BANK0_R3 = bVar5;
      BANK0_R4 = uVar6;
      if (BANK0_R5 < 0x10) {
                    /* WARNING: Could not recover jumptable at 0x3531. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ushort)(byte)(cVar3 * '\x03') + 0x3532))();
        return;
      }
    }
    DAT_INTMEM_7a = 0x20;
    DAT_INTMEM_7b = 6;
    FUN_CODE_0270(uVar8 & 0xff00);
    uEXTMEMcc2d = 0xfe;
    do {
      BANK3_R7 = 0xec;
      DAT_INTMEM_20 = 0x4f;
      DAT_INTMEM_21 = 0;
      DAT_INTMEM_22 = 0x72;
      DAT_INTMEM_23 = 0;
      DAT_INTMEM_24 = 0x40;
      DAT_INTMEM_25 = 0x73;
      DAT_INTMEM_26 = 0;
      DAT_INTMEM_27 = 0x40;
      BANK3_R6 = 0;
      param_3 = 0x26;
      BANK0_R2 = bVar2;
      FUN_CODE_17f4();
      uVar8 = 0x4fea;
      DAT_EXTMEM_4fea = param_3;
      if (param_3 == 0) {
        BANK0_R2 = bVar2;
        if (BANK1_R5 != '\0') goto LAB_CODE_3b47;
        if (BANK1_R6 == '\0') goto LAB_CODE_34eb;
        break;
      }
      uVar8 = 0x4fea;
      BANK0_R2 = bVar2;
      if (param_3 == 1) goto LAB_CODE_2a74;
      if (BANK1_R5 != '\0') goto LAB_CODE_3b47;
    } while (BANK1_R6 == '\0');
LAB_CODE_3be5:
    bVar2 = BANK0_R2;
    DAT_INTMEM_7a = 1;
    DAT_INTMEM_7b = 0xc;
    FUN_CODE_0270(uVar8 & 0xff00);
    BANK0_R3 = BANK0_R3 & 0xfc;
    uVar6 = 0x4f;
    bVar5 = DAT_EXTMEM_4fbf;
    if ((DAT_EXTMEM_4fbf == 1) && (uVar6 = 0, bVar5 = bCODE0049, (bCODE0049 >> 1 & 1) != 0)) {
      BANK0_R3 = BANK0_R3 | 1;
      DAT_EXTMEM_d67e = 0;
      uVar6 = 0xd6;
      DAT_EXTMEM_d67f = 0;
      bVar5 = DAT_EXTMEM_d77f;
    }
    BANK0_R2 = bVar2;
    if (BANK1_R6 != '\0') {
      DAT_INTMEM_30 = 0xf;
      DAT_INTMEM_31 = 0;
      DAT_INTMEM_32 = 0x40;
      DAT_INTMEM_33 = 0x10;
      DAT_INTMEM_34 = 0;
      DAT_INTMEM_35 = 0x40;
      DAT_INTMEM_2a = 0x21;
      DAT_INTMEM_2b = 0;
      DAT_INTMEM_2c = 0;
      DAT_INTMEM_2d = 0;
      DAT_INTMEM_2e = 1;
      DAT_INTMEM_2f = 0;
      FUN_CODE_1aa9(CONCAT11(uVar6,9),bVar5);
      cVar3 = BANK2_R2;
      BANK0_R2 = bVar2;
      bVar5 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
      bVar2 = BANK0_R2;
      BANK0_R2 = bVar2;
      if ((bVar5 & 1) != 0) {
        DAT_EXTMEM_4fe7 = 0;
        uINTMEMd4 = 0;
        DAT_INTMEM_2f = 0xd4;
        DAT_INTMEM_30 = 0xf;
        DAT_INTMEM_31 = 0;
        DAT_INTMEM_32 = 0x40;
        DAT_INTMEM_33 = 0x10;
        DAT_INTMEM_34 = 0;
        DAT_INTMEM_35 = 0x40;
        DAT_INTMEM_2a = 0x11;
        DAT_INTMEM_2b = 1;
        DAT_INTMEM_2c = 0;
        DAT_INTMEM_2d = 0;
        DAT_INTMEM_2e = 1;
        uVar6 = 0x4f;
        FUN_CODE_1aa9(0x4f08,bVar5);
        uINTMEMd5 = 0;
        uINTMEMd6 = 0;
        uINTMEMd7 = 0x3f;
        DAT_INTMEM_2f = 0xd5;
        DAT_INTMEM_30 = 0xf;
        DAT_INTMEM_31 = 0;
        DAT_INTMEM_32 = 0x40;
        DAT_INTMEM_33 = 0x10;
        DAT_INTMEM_34 = 0;
        DAT_INTMEM_35 = 0x40;
        DAT_INTMEM_2a = 0xc0;
        DAT_INTMEM_2b = 1;
        DAT_INTMEM_2c = 0;
        DAT_INTMEM_2d = 0;
        DAT_INTMEM_2e = 3;
        FUN_CODE_1aa9(CONCAT11(uVar6,8));
        BANK0_R2 = bVar2;
      }
    }
    BANK1_R6 = '\0';
    uEXTMEM4fe6 = 0;
    DAT_EXTMEM_cc00 = 1;
    DAT_EXTMEM_c200 = DAT_EXTMEM_c200 & 0xf1 | 3;
    if ((bCODE0048 >> 1 & 1) == 1) {
      param_3 = bEXTMEM4feb != 1;
      bVar1 = DAT_EXTMEM_4fbf != 1;
      if (bVar1 && (bool)param_3) {
        DAT_INTMEM_7a = BANK1_R1;
        DAT_INTMEM_7b = BANK1_R2;
        DAT_INTMEM_7c = BANK2_R4;
        DAT_INTMEM_7d = BANK2_R7;
        uVar8 = 0x4f03;
        FUN_CODE_11f9(0x4f03);
      }
      else {
        DAT_EXTMEM_4fbf = 0;
        if ((BANK2_R5 != '\0') || (uVar8 = 0x4fe4, param_3 = DAT_EXTMEM_4fe4, DAT_EXTMEM_4fe4 != 0))
        {
          do {
            bVar2 = DAT_EXTMEM_ca40;
            if ((DAT_EXTMEM_ca40 >> 1 & 1) == 1) break;
            bVar2 = bEXTMEMcb40;
          } while ((bEXTMEMcb40 & 6) != 0);
          uEXTMEMca0c = 1;
          DAT_INTMEM_30 = 0xf;
          DAT_INTMEM_31 = 0;
          DAT_INTMEM_32 = 0x40;
          DAT_INTMEM_33 = 0x10;
          DAT_INTMEM_34 = 0;
          DAT_INTMEM_35 = 0x40;
          DAT_INTMEM_2a = 2;
          DAT_INTMEM_2b = 1;
          DAT_INTMEM_2c = 0;
          DAT_INTMEM_2d = 0;
          DAT_INTMEM_2e = 1;
          DAT_INTMEM_2f = 0x8f;
          FUN_CODE_1aa9(0xca08,bVar2,bVar1);
          uEXTMEMce51 = 0x10;
          FUN_CODE_11d7();
          BANK0_R3 = BANK0_R3 & 0xfe;
          BANK2_R5 = '\0';
          uVar8 = 0x4fe4;
          DAT_EXTMEM_4fe4 = 0;
          param_3 = DAT_EXTMEM_d76d;
        }
      }
    }
    else if (param_2 == '\0') {
      if ((BANK2_R5 != '\0') || (uVar8 = 0x4fe4, param_3 = DAT_EXTMEM_4fe4, DAT_EXTMEM_4fe4 != 0)) {
        do {
          bVar2 = DAT_EXTMEM_ca40;
          if ((DAT_EXTMEM_ca40 >> 1 & 1) == 1) break;
          bVar2 = bEXTMEMcb40;
        } while ((bEXTMEMcb40 & 6) != 0);
        uEXTMEMca0c = 1;
        DAT_INTMEM_30 = 0xf;
        DAT_INTMEM_31 = 0;
        DAT_INTMEM_32 = 0x40;
        DAT_INTMEM_33 = 0x10;
        DAT_INTMEM_34 = 0;
        DAT_INTMEM_35 = 0x40;
        DAT_INTMEM_2a = 2;
        DAT_INTMEM_2b = 1;
        DAT_INTMEM_2c = 0;
        DAT_INTMEM_2d = 0;
        DAT_INTMEM_2e = 1;
        DAT_INTMEM_2f = 0x8f;
        FUN_CODE_1aa9(0xca08,bVar2);
        uEXTMEMce51 = 0x10;
        FUN_CODE_11d7();
        BANK0_R3 = BANK0_R3 & 0xfe;
        BANK2_R5 = '\0';
        uVar8 = 0x4fe4;
        DAT_EXTMEM_4fe4 = 0;
        param_3 = DAT_EXTMEM_d76d;
      }
    }
    else {
      while (bEXTMEM4fb1 != 0) {
        DAT_INTMEM_7a = 0x20;
        DAT_INTMEM_7b = 0x28;
        FUN_CODE_0270(0x4f00);
      }
      DAT_INTMEM_7a = BANK1_R1;
      DAT_INTMEM_7b = BANK1_R2;
      DAT_INTMEM_7c = BANK2_R4;
      DAT_INTMEM_7d = BANK2_R7;
      uVar8 = 0x4f03;
      param_3 = bEXTMEM4fb1;
      FUN_CODE_11f9(0x4f03);
    }
    param_2 = '\0';
  } while( true );
LAB_CODE_3b47:
  bVar2 = BANK0_R2;
  DAT_INTMEM_7a = 0x20;
  DAT_INTMEM_7b = 0xb;
  uVar8 = uVar8 & 0xff00;
  FUN_CODE_0270(uVar8);
  uVar6 = (undefined1)(uVar8 >> 8);
  BANK1_R5 = '\0';
  if ((((BANK3_R0 == '\0') && (uVar6 = 0x4f, param_3 = bEXTMEM4feb, bEXTMEM4feb == 0)) &&
      (uVar6 = 0xcc, cEXTMEMcc8d == '\0')) && (param_2 != '\0')) {
    uVar8 = 0xcc02;
    BANK0_R2 = bVar2;
    FUN_CODE_1f0b();
    param_3 = (byte)uVar8;
    BANK0_R2 = bVar2;
    if (param_3 == 1) {
LAB_CODE_2a74:
      do {
        if ((bEXTMEMd66f >> 4 & 1) != 0) {
          uEXTMEMca10 = 3;
          uEXTMEMca15 = 0x20;
          uEXTMEMca14 = 7;
        }
        if ((bCODE0048 >> 4 & 1) != 0) {
          uEXTMEMd7fc = 1;
          uEXTMEMd7fa = 1;
          uEXTMEMd7f8 = 1;
          uEXTMEMd7f6 = 1;
        }
        do {
          BANK0_R2 = BANK0_R2 & 0xe;
        } while (bEXTMEMc800 == 0xe);
        BANK1_R0 = DAT_EXTMEM_c801 & 0x80;
        if (BANK1_R0 == 0) {
          BANK0_R2 = BANK0_R2 | 0x9b;
          uEXTMEMd21e = 0xff;
        }
        else {
          uEXTMEMcc8e = 0;
        }
        bVar2 = BANK0_R2;
        DAT_EXTMEM_4fe9 = 0;
        BANK1_R1 = 0;
        BANK1_R2 = 0;
        BANK2_R4 = 0;
        BANK1_R5 = '\0';
        BANK1_R6 = '\0';
        BANK2_R3 = '\0';
        BANK2_R7 = 0;
        DAT_EXTMEM_4fe4 = 0;
        BANK2_R5 = '\0';
        BANK2_R6 = '\0';
        BANK3_R0 = '\0';
        bEXTMEM4feb = 0;
        param_2 = '\0';
        uEXTMEM4fe5 = 0;
        uEXTMEM4fe6 = 0;
        DAT_EXTMEM_4fe7 = 0;
        DAT_EXTMEM_4fae = 0;
        uEXTMEMd766 = 8;
        uEXTMEMd600 = 0;
        uEXTMEMd680 = 0;
        uEXTMEMd700 = 0;
        uEXTMEMd780 = 0;
        if (cCODE004b < '\0') {
          uEXTMEMd677 = 0;
        }
        else {
          uEXTMEMd677 = 0xf;
        }
        if (BANK1_R0 == 0) {
          BANK0_R3 = BANK0_R3 & 0xfc | 4;
          uEXTMEMd254 = 0xff;
          uEXTMEMd255 = 0xff;
        }
        else if ((bEXTMEMc84b >> 3 & 1) == 1) {
          BANK0_R3 = BANK0_R3 | 4;
        }
        else {
          BANK0_R3 = BANK0_R3 & 0xfa;
        }
        uEXTMEMcc92 = 8;
        BANK3_R1 = uEXTMEMcc8e;
        uEXTMEMcc96 = 1;
        BANK0_R3 = BANK0_R3 & 0xfe;
        FUN_CODE_1da2(5);
        DAT_EXTMEM_4fea = DAT_EXTMEM_c801 & 0x3f;
        if (DAT_EXTMEM_4fea == 8) {
          for (bEXTMEM4ff0 = 0; bEXTMEM4ff0 < 2; bEXTMEM4ff0 = bEXTMEM4ff0 + 1) {
          }
          BANK0_R3 = BANK0_R3 & 0xfd;
          DAT_INTMEM_7a = 0x10;
          DAT_INTMEM_7b = 0x1c;
          BANK0_R2 = bVar2;
          FUN_CODE_0270(0xd600);
          do {
          } while ((bEXTMEMd67c >> 2 & 1) == 0);
        }
        while ((((DAT_EXTMEM_c848 >> 2 & 1) != 0 &&
                (uVar8 = 0xcc93, bVar5 = DAT_EXTMEM_c848, DAT_EXTMEM_cc93 == '\0')) ||
               (uVar8 = 0xc808, bVar5 = DAT_EXTMEM_c808, (DAT_EXTMEM_c808 & 1) != 0))) {
          DAT_INTMEM_7a = 0x20;
          DAT_INTMEM_7b = 0x20;
          BANK0_R2 = bVar2;
          FUN_CODE_0270(uVar8 & 0xff00,bVar5);
        }
        do {
        } while ((DAT_EXTMEM_cc07 & 1) == 1);
        do {
        } while ((bEXTMEMc82f & 1) == 0);
        BANK0_R3 = BANK0_R3 | 3;
        if ((bEXTMEMc800 >> 4 & 1) != 0) {
          BANK0_R2 = bVar2;
          FUN_CODE_1da2(0x1c2,bEXTMEMc800);
        }
        if ((bEXTMEMc800 & 1) == 1) {
          if (cEXTMEMd66e == '\x01') {
            bEXTMEMc890 = 1;
            uEXTMEMc891 = 0xc;
            uEXTMEMd449 = 2;
            uEXTMEMd766 = 0;
            DAT_EXTMEM_d672 = 0;
            BANK0_R3 = BANK0_R3 & 3;
          }
          else if (cEXTMEMd66e == '\x02') {
            DAT_EXTMEM_d672 = 0xf;
            BANK0_R3 = BANK0_R3 & 2;
          }
          else {
            DAT_EXTMEM_d672 = 0xf;
            BANK0_R3 = BANK0_R3 & 3;
          }
          BANK0_R2 = bVar2;
          for (bEXTMEM4ff0 = 0; bEXTMEM4ff0 < 4; bEXTMEM4ff0 = bEXTMEM4ff0 + 1) {
            DAT_INTMEM_7b = bEXTMEM4ff0;
            DAT_INTMEM_7a = 0;
            FUN_CODE_0e94(0x4f00);
          }
          uEXTMEMca5a = 0;
          BANK0_R3 = BANK0_R3 | 1;
          uEXTMEMd767 = 0x3f;
          BANK1_R1 = 4;
          do {
            if (bEXTMEMc890 != 0) {
              DAT_INTMEM_7a = 0x20;
              DAT_INTMEM_7b = 4;
              FUN_CODE_0270(0xc800);
              do {
              } while( true );
            }
            DAT_INTMEM_7a = 1;
            DAT_INTMEM_7b = 2;
            FUN_CODE_0270(0xc800);
            uEXTMEMd446 = 0xc4;
            uEXTMEMd447 = 0;
            uEXTMEMd453 = 0x3a;
            uEXTMEMd47d = 0x3a;
            uEXTMEMd454 = 0x54;
            uEXTMEMd47e = 0x54;
            FUN_CODE_0478();
            while (FUN_CODE_0aba(), (DAT_EXTMEM_c802 & 1) == 0) {
              if ((DAT_EXTMEM_cc07 & 1) != 0) {
                FUN_CODE_0e61(DAT_EXTMEM_cc07);
                goto LAB_CODE_2a74;
              }
            }
            FUN_CODE_0f3d(DAT_EXTMEM_c802);
            FUN_CODE_1010();
            FUN_CODE_1da2(0xf);
            BANK0_R3 = BANK0_R3 & 0xdd;
            DAT_EXTMEM_cc00 = 0;
            FUN_CODE_1043();
            uEXTMEMce51 = 0;
            DAT_INTMEM_7a = 1;
            DAT_INTMEM_7b = 3;
            bVar2 = FUN_CODE_0270(0xce00);
            while( true ) {
              FUN_CODE_0aba(bVar2);
              while (DAT_EXTMEM_cc93 == '\x01') {
                DAT_INTMEM_7a = 0x20;
                DAT_INTMEM_7b = 0x21;
                FUN_CODE_0270(0xcc00);
              }
              if (((((DAT_EXTMEM_c802 & 1) != 1) && ((bEXTMEMc890 & 1) == 0)) ||
                  (-1 < (char)DAT_EXTMEM_d77f)) && ((bEXTMEMc890 & 1) != 1)) break;
              DAT_EXTMEM_4fea = DAT_EXTMEM_cc07;
              if ((DAT_EXTMEM_cc07 & 1) != 0) {
                FUN_CODE_0e61(DAT_EXTMEM_cc07);
                goto LAB_CODE_2a74;
              }
              bVar2 = DAT_EXTMEM_cc07;
              if ((DAT_EXTMEM_cc07 >> 2 & 1) != 0) {
                bINTMEM7f = BANK0_R3;
                bINTMEM80 = BANK0_R3;
                bVar2 = bEXTMEMcc37;
              }
            }
            FUN_CODE_0e61(bEXTMEMc890);
          } while( true );
        }
        uEXTMEMca5a = 0;
        DAT_INTMEM_7a = 1;
        DAT_INTMEM_7b = 5;
        BANK0_R2 = bVar2;
        FUN_CODE_0270(0xca00,bEXTMEMc800);
        cEXTMEM4fef = '\0';
        uVar6 = 200;
        BANK0_R2 = bVar2;
        if (((DAT_EXTMEM_c848 >> 4 & 1) != 1) ||
           ((bVar5 = DAT_EXTMEM_c848, BANK1_R0 == 0 &&
            (uVar6 = 0xd2, bVar5 = DAT_EXTMEM_d252, (DAT_EXTMEM_d252 >> 5 & 1) != 0))))
        goto LAB_CODE_33b1;
        DAT_INTMEM_ee = 1;
        DAT_INTMEM_2f = 0xee;
        DAT_INTMEM_30 = 0xf;
        DAT_INTMEM_31 = 0;
        DAT_INTMEM_32 = 0x40;
        DAT_INTMEM_33 = 0x10;
        DAT_INTMEM_34 = 0;
        DAT_INTMEM_35 = 0x40;
        DAT_INTMEM_2a = 0;
        DAT_INTMEM_2b = 6;
        DAT_INTMEM_2c = 0;
        DAT_INTMEM_2d = 0;
        DAT_INTMEM_2e = 1;
        uVar7 = CONCAT11(uVar6,8);
        FUN_CODE_1aa9(uVar7,bVar5);
        uVar6 = (undefined1)((ushort)uVar7 >> 8);
        if (BANK1_R0 != 0) goto LAB_CODE_2f76;
        uEXTMEMcc0c = 199;
        uEXTMEMcc0b = 0;
        do {
          if (((cEXTMEMcc29 == '\0') && (99 < bEXTMEMcc0a)) || ((bEXTMEMcc90 & 1) == 1)) {
            uVar6 = 0xcc;
            uEXTMEMcc0c = 99;
            goto LAB_CODE_2f76;
          }
        } while ((DAT_EXTMEM_cc07 & 1) == 0);
        DAT_EXTMEM_cc00 = 1;
        BANK0_R2 = bVar2;
        FUN_CODE_11d7(DAT_EXTMEM_cc07);
        BANK0_R3 = BANK0_R3 & 0xfe;
        DAT_EXTMEM_c200 = DAT_EXTMEM_c200 & 0xf1 | 3;
        DAT_EXTMEM_d67e = 0;
        DAT_EXTMEM_d67f = 0;
      } while( true );
    }
    if (BANK1_R5 != '\0') goto LAB_CODE_3b47;
    if (BANK1_R6 != '\0') goto LAB_CODE_3be5;
    uVar8 = 0;
    bVar5 = bCODE0048;
    if ((bCODE0048 >> 2 & 1) != 0) {
      uVar8 = 0;
      if ((bCODE0048 >> 5 & 1) != 0) {
        DAT_INTMEM_7d = DAT_EXTMEM_0120;
        DAT_INTMEM_7a = BANK1_R1;
        DAT_INTMEM_7b = BANK1_R2;
        DAT_INTMEM_7c = BANK2_R4;
        uVar8 = 0x10c;
        FUN_CODE_11f9(0x10c);
      }
      BANK0_R2 = bVar2;
      FUN_CODE_0326();
    }
    uVar6 = (undefined1)(uVar8 >> 8);
    BANK0_R3 = DAT_INTMEM_81 & BANK3_R4;
    BANK0_R2 = bVar2;
    if (((bVar5 != BANK3_R4) || (BANK0_R3 = DAT_INTMEM_82 & BANK3_R5, bVar5 != BANK3_R5)) ||
       (BANK2_R3 == '\0')) goto LAB_CODE_3be5;
    param_3 = BANK2_R7 & 0xc0;
    if (param_3 == 0xc0) {
      DAT_INTMEM_7a = BANK1_R1;
      DAT_INTMEM_7b = BANK1_R2;
      DAT_INTMEM_7c = BANK2_R4;
      DAT_INTMEM_7d = BANK2_R7;
      uVar8 = CONCAT11(uVar6,4);
      FUN_CODE_11f9(uVar8);
      BANK0_R2 = bVar2;
      goto LAB_CODE_3479;
    }
  }
  if ((BANK1_R0 == 0) && (uVar6 = 0xd2, param_3 = DAT_EXTMEM_d25c, (DAT_EXTMEM_d25c & 0xf) == 0)) {
    uVar8 = 0xcc21;
    uEXTMEMcc21 = 1;
    BANK0_R2 = bVar2;
  }
  else {
    DAT_INTMEM_7a = BANK1_R1;
    DAT_INTMEM_7b = BANK1_R2;
    DAT_INTMEM_7c = BANK2_R4;
    DAT_INTMEM_7d = 0;
    uVar8 = CONCAT11(uVar6,0xd);
    BANK0_R2 = bVar2;
    FUN_CODE_11f9(uVar8);
    BANK0_R2 = bVar2;
  }
  goto LAB_CODE_3479;
LAB_CODE_2f76:
  DAT_INTMEM_30 = 0xf;
  DAT_INTMEM_31 = 0;
  DAT_INTMEM_32 = 0x40;
  DAT_INTMEM_33 = 0x10;
  DAT_INTMEM_34 = 0;
  DAT_INTMEM_35 = 0x40;
  DAT_INTMEM_2a = 0;
  DAT_INTMEM_2b = 0;
  DAT_INTMEM_2c = 0;
  DAT_INTMEM_2d = 0;
  DAT_INTMEM_2e = 0xc;
  DAT_INTMEM_2f = 0;
  BANK0_R2 = bVar2;
  FUN_CODE_1aa9(CONCAT11(uVar6,9));
  BANK0_R2 = bVar2;
  bVar2 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
  cEXTMEM4fef = 0x11 < bVar2;
  cVar3 = BANK2_R2;
  bVar2 = FUN_CODE_3ed5(CONCAT11(BANK2_R1 - (((0xfd < BANK2_R0) << 7) >> 7),BANK2_R0 + 2),BANK2_R2);
  DAT_EXTMEM_4fae = bVar2 & 0x40;
  if (BANK1_R0 == 0) {
    uEXTMEMd257 = 0x11;
    BANK0_R3 = 0;
    cVar3 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
    if ((cVar3 != '\x10') && (cVar3 != '\x11')) {
      if (cVar3 == '\x12') {
        BANK0_R3 = BANK0_R3 | 0x10;
      }
      else {
        BANK0_R3 = BANK0_R3 | 0x10;
      }
    }
    if ((bEXTMEMc80a & 0xf) == 0) {
      cVar3 = FUN_CODE_3ed5(CONCAT11(BANK2_R1 - (((0xfe < BANK2_R0) << 7) >> 7),BANK2_R0 + 1),
                            BANK2_R2);
      if (cVar3 != '\x06') {
        if (cVar3 == '\n') {
          BANK0_R3 = BANK0_R3 | 1;
        }
        else if (cVar3 == '\x14') {
          BANK0_R3 = BANK0_R3 | 2;
        }
        else {
          BANK0_R3 = BANK0_R3 | 2;
        }
      }
    }
    else {
      BANK0_R3 = BANK0_R3 & 0xf;
      if (bEXTMEMc80a != 1) {
        if (bEXTMEMc80a == 2) {
          BANK0_R3 = BANK0_R3 | 1;
        }
        else if (bEXTMEMc80a == 3) {
          BANK0_R3 = BANK0_R3 | 2;
        }
        else {
          BANK0_R3 = BANK0_R3 | 2;
        }
      }
    }
    if ((bEXTMEMc80a & 0xf0) == 0) {
      cVar3 = FUN_CODE_3ed5(CONCAT11(BANK2_R1 - (((0xfd < BANK2_R0) << 7) >> 7),BANK2_R0 + 2),
                            BANK2_R2);
      BANK0_R3 = BANK0_R3 & 0x1f;
      if (cVar3 != '\x01') {
        if (cVar3 == '\x02') {
          BANK0_R3 = BANK0_R3 | 0x10;
        }
        else if (cVar3 == '\x04') {
          BANK0_R3 = BANK0_R3 | 0x20;
        }
        else {
          BANK0_R3 = BANK0_R3 | 0x20;
        }
      }
    }
    else {
      BANK0_R3 = BANK0_R3 & 0xf0;
      if (bEXTMEMc80a != 0x10) {
        if (bEXTMEMc80a == 0x20) {
          BANK0_R3 = BANK0_R3 | 0x10;
        }
        else if (bEXTMEMc80a == 0x40) {
          BANK0_R3 = BANK0_R3 | 0x20;
        }
        else {
          BANK0_R3 = BANK0_R3 | 0x20;
        }
      }
    }
    cVar3 = BANK2_R1 - (((0xfd < BANK2_R0) << 7) >> 7);
    bVar2 = FUN_CODE_3ed5(CONCAT11(cVar3,BANK2_R0 + 2),BANK2_R2);
    BANK0_R3 = BANK0_R3 & 0xfe | bVar2 & 0xc0;
  }
  bVar2 = BANK0_R2;
  if ((bCODE0048 >> 2 & 1) != 0) {
    DAT_INTMEM_30 = 0xf;
    DAT_INTMEM_31 = 0;
    DAT_INTMEM_32 = 0x40;
    DAT_INTMEM_33 = 0x10;
    DAT_INTMEM_34 = 0;
    DAT_INTMEM_35 = 0x40;
    DAT_INTMEM_2a = 0;
    DAT_INTMEM_2b = 2;
    DAT_INTMEM_2c = 0;
    DAT_INTMEM_2d = 0;
    DAT_INTMEM_2e = 1;
    DAT_INTMEM_2f = 0;
    FUN_CODE_1aa9(9,bCODE0048);
    cVar3 = BANK2_R2;
    bVar5 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
    DAT_EXTMEM_0120 = bVar5 & 0x1f;
    FUN_CODE_0326();
  }
  BANK0_R2 = bVar2;
  if (cEXTMEM4fef != '\0') {
    DAT_INTMEM_30 = 0xf;
    DAT_INTMEM_31 = 0;
    DAT_INTMEM_32 = 0x40;
    DAT_INTMEM_33 = 0x10;
    DAT_INTMEM_34 = 0;
    DAT_INTMEM_35 = 0x40;
    DAT_INTMEM_2a = 0xe;
    DAT_INTMEM_2b = 0;
    DAT_INTMEM_2c = 0;
    DAT_INTMEM_2d = 0;
    DAT_INTMEM_2e = 1;
    DAT_INTMEM_2f = 0;
    FUN_CODE_1aa9(0x4f09,cEXTMEM4fef);
    cVar3 = BANK2_R2;
    if ((bEXTMEMc809 & 1) == 1) {
      BANK0_R2 = bVar2;
      cVar4 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
      BANK0_R3 = BANK0_R3 & 0x7f;
      if (BANK0_R3 < 5) {
                    /* WARNING: Could not recover jumptable at 0x32a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ushort)(byte)(cVar4 * '\x03') + 0x32aa))();
        return;
      }
    }
    else {
      BANK0_R2 = bVar2;
      cVar4 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
      BANK0_R3 = BANK0_R3 & 0x7f;
      if (BANK0_R3 < 5) {
                    /* WARNING: Could not recover jumptable at 0x3333. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ushort)(byte)(cVar4 * '\x03') + 0x3334))();
        return;
      }
    }
  }
LAB_CODE_33b1:
  bVar2 = BANK0_R2;
  uEXTMEM4fd9 = 1;
  DAT_EXTMEM_4fd8 = 4;
  BANK0_R3 = BANK0_R3 & 0xfe;
  uVar8 = 0x4fef;
  if (cEXTMEM4fef == '\0') {
    param_3 = 0;
  }
  else {
    DAT_INTMEM_30 = 0xf;
    DAT_INTMEM_31 = 0;
    DAT_INTMEM_32 = 0x40;
    DAT_INTMEM_33 = 0x10;
    DAT_INTMEM_34 = 0;
    DAT_INTMEM_35 = 0x40;
    DAT_INTMEM_2a = 0x21;
    DAT_INTMEM_2b = 0;
    DAT_INTMEM_2c = 0;
    DAT_INTMEM_2d = 0;
    DAT_INTMEM_2e = 1;
    DAT_INTMEM_2f = 0;
    FUN_CODE_1aa9(0x4f09);
    uVar8 = CONCAT11(BANK2_R1,BANK2_R0);
    cVar3 = BANK2_R2;
    BANK0_R2 = bVar2;
    param_3 = FUN_CODE_3ed5(uVar8,BANK2_R2);
    bVar2 = BANK0_R2;
    BANK0_R2 = bVar2;
    if ((param_3 & 1) != 0) {
      DAT_EXTMEM_4fe7 = 0;
      uINTMEMd4 = 0;
      DAT_INTMEM_2f = 0xd4;
      DAT_INTMEM_30 = 0xf;
      DAT_INTMEM_31 = 0;
      DAT_INTMEM_32 = 0x40;
      DAT_INTMEM_33 = 0x10;
      DAT_INTMEM_34 = 0;
      DAT_INTMEM_35 = 0x40;
      DAT_INTMEM_2a = 0x11;
      DAT_INTMEM_2b = 1;
      DAT_INTMEM_2c = 0;
      DAT_INTMEM_2d = 0;
      DAT_INTMEM_2e = 1;
      uVar6 = 0x4f;
      FUN_CODE_1aa9(0x4f08);
      uINTMEMd5 = 0;
      uINTMEMd6 = 0;
      uINTMEMd7 = 0x3f;
      DAT_INTMEM_2f = 0xd5;
      DAT_INTMEM_30 = 0xf;
      DAT_INTMEM_31 = 0;
      DAT_INTMEM_32 = 0x40;
      DAT_INTMEM_33 = 0x10;
      DAT_INTMEM_34 = 0;
      DAT_INTMEM_35 = 0x40;
      DAT_INTMEM_2a = 0xc0;
      DAT_INTMEM_2b = 1;
      DAT_INTMEM_2c = 0;
      DAT_INTMEM_2d = 0;
      DAT_INTMEM_2e = 3;
      uVar8 = CONCAT11(uVar6,8);
      FUN_CODE_1aa9(uVar8);
      BANK0_R2 = bVar2;
    }
  }
  if (BANK1_R5 == '\0') goto LAB_CODE_3479;
  goto LAB_CODE_3b47;
}



/* =========================================================
 * CODE:3958  FUN_CODE_3958  size=3
 * ========================================================= */

void FUN_CODE_3958(ushort param_1,char param_2,byte param_3,char param_4)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  undefined1 uVar5;
  ushort uVar6;
  undefined2 uVar7;
  
LAB_CODE_3479:
  do {
    while (bVar2 = BANK0_R2, BANK2_R6 != '\0') {
LAB_CODE_34eb:
      uVar5 = BANK0_R4;
      BANK2_R6 = '\0';
      DAT_INTMEM_77 = param_3 & 7;
      bVar4 = bINTMEM7e & 0x60;
      DAT_INTMEM_76 = bINTMEM80;
      DAT_INTMEM_7a = 0x20;
      DAT_INTMEM_7b = 0x19;
      param_1 = param_1 & 0xff00;
      BANK0_R2 = bVar2;
      BANK0_R3 = bVar4;
      FUN_CODE_0270(param_1,param_3 & 0x18);
      BANK0_R5 = bINTMEM7f & 0xf;
      BANK0_R2 = bVar2;
      BANK0_R3 = bVar4;
      BANK0_R4 = uVar5;
      if (BANK0_R5 < 0x10) {
                    /* WARNING: Could not recover jumptable at 0x3531. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ushort)(byte)(param_4 * '\x03') + 0x3532))();
        return;
      }
    }
    DAT_INTMEM_7a = 0x20;
    DAT_INTMEM_7b = 6;
    FUN_CODE_0270(0);
    uEXTMEMcc2d = 0xfe;
    do {
      BANK3_R7 = 0xec;
      DAT_INTMEM_20 = 0x4f;
      DAT_INTMEM_21 = 0;
      DAT_INTMEM_22 = 0x72;
      DAT_INTMEM_23 = 0;
      DAT_INTMEM_24 = 0x40;
      DAT_INTMEM_25 = 0x73;
      DAT_INTMEM_26 = 0;
      DAT_INTMEM_27 = 0x40;
      BANK3_R6 = 0;
      param_3 = 0x26;
      BANK0_R2 = bVar2;
      FUN_CODE_17f4();
      param_1 = 0x4fea;
      DAT_EXTMEM_4fea = param_3;
      if (param_3 == 0) {
        BANK0_R2 = bVar2;
        if (BANK1_R5 != '\0') goto LAB_CODE_3b47;
        if (BANK1_R6 == '\0') goto LAB_CODE_34eb;
        break;
      }
      param_1 = 0x4fea;
      BANK0_R2 = bVar2;
      if (param_3 == 1) goto LAB_CODE_2a74;
      if (BANK1_R5 != '\0') goto LAB_CODE_3b47;
    } while (BANK1_R6 == '\0');
LAB_CODE_3be5:
    bVar2 = BANK0_R2;
    DAT_INTMEM_7a = 1;
    DAT_INTMEM_7b = 0xc;
    FUN_CODE_0270(param_1 & 0xff00);
    BANK0_R3 = BANK0_R3 & 0xfc;
    uVar5 = 0x4f;
    bVar4 = DAT_EXTMEM_4fbf;
    if ((DAT_EXTMEM_4fbf == 1) && (uVar5 = 0, bVar4 = bCODE0049, (bCODE0049 >> 1 & 1) != 0)) {
      BANK0_R3 = BANK0_R3 | 1;
      DAT_EXTMEM_d67e = 0;
      uVar5 = 0xd6;
      DAT_EXTMEM_d67f = 0;
      bVar4 = DAT_EXTMEM_d77f;
    }
    BANK0_R2 = bVar2;
    if (BANK1_R6 != '\0') {
      DAT_INTMEM_30 = 0xf;
      DAT_INTMEM_31 = 0;
      DAT_INTMEM_32 = 0x40;
      DAT_INTMEM_33 = 0x10;
      DAT_INTMEM_34 = 0;
      DAT_INTMEM_35 = 0x40;
      DAT_INTMEM_2a = 0x21;
      DAT_INTMEM_2b = 0;
      DAT_INTMEM_2c = 0;
      DAT_INTMEM_2d = 0;
      DAT_INTMEM_2e = 1;
      DAT_INTMEM_2f = 0;
      FUN_CODE_1aa9(CONCAT11(uVar5,9),bVar4);
      param_4 = BANK2_R2;
      BANK0_R2 = bVar2;
      bVar4 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
      bVar2 = BANK0_R2;
      BANK0_R2 = bVar2;
      if ((bVar4 & 1) != 0) {
        DAT_EXTMEM_4fe7 = 0;
        uINTMEMd4 = 0;
        DAT_INTMEM_2f = 0xd4;
        DAT_INTMEM_30 = 0xf;
        DAT_INTMEM_31 = 0;
        DAT_INTMEM_32 = 0x40;
        DAT_INTMEM_33 = 0x10;
        DAT_INTMEM_34 = 0;
        DAT_INTMEM_35 = 0x40;
        DAT_INTMEM_2a = 0x11;
        DAT_INTMEM_2b = 1;
        DAT_INTMEM_2c = 0;
        DAT_INTMEM_2d = 0;
        DAT_INTMEM_2e = 1;
        uVar5 = 0x4f;
        FUN_CODE_1aa9(0x4f08,bVar4);
        uINTMEMd5 = 0;
        uINTMEMd6 = 0;
        uINTMEMd7 = 0x3f;
        DAT_INTMEM_2f = 0xd5;
        DAT_INTMEM_30 = 0xf;
        DAT_INTMEM_31 = 0;
        DAT_INTMEM_32 = 0x40;
        DAT_INTMEM_33 = 0x10;
        DAT_INTMEM_34 = 0;
        DAT_INTMEM_35 = 0x40;
        DAT_INTMEM_2a = 0xc0;
        DAT_INTMEM_2b = 1;
        DAT_INTMEM_2c = 0;
        DAT_INTMEM_2d = 0;
        DAT_INTMEM_2e = 3;
        FUN_CODE_1aa9(CONCAT11(uVar5,8));
        BANK0_R2 = bVar2;
      }
    }
    BANK1_R6 = '\0';
    uEXTMEM4fe6 = 0;
    DAT_EXTMEM_cc00 = 1;
    DAT_EXTMEM_c200 = DAT_EXTMEM_c200 & 0xf1 | 3;
    if ((bCODE0048 >> 1 & 1) == 1) {
      param_3 = bEXTMEM4feb != 1;
      bVar1 = DAT_EXTMEM_4fbf != 1;
      if (bVar1 && (bool)param_3) {
        DAT_INTMEM_7a = BANK1_R1;
        DAT_INTMEM_7b = BANK1_R2;
        DAT_INTMEM_7c = BANK2_R4;
        DAT_INTMEM_7d = BANK2_R7;
        param_1 = 0x4f03;
        FUN_CODE_11f9(0x4f03);
      }
      else {
        DAT_EXTMEM_4fbf = 0;
        if ((BANK2_R5 != '\0') ||
           (param_1 = 0x4fe4, param_3 = DAT_EXTMEM_4fe4, DAT_EXTMEM_4fe4 != 0)) {
          do {
            bVar2 = DAT_EXTMEM_ca40;
            if ((DAT_EXTMEM_ca40 >> 1 & 1) == 1) break;
            bVar2 = bEXTMEMcb40;
          } while ((bEXTMEMcb40 & 6) != 0);
          uEXTMEMca0c = 1;
          DAT_INTMEM_30 = 0xf;
          DAT_INTMEM_31 = 0;
          DAT_INTMEM_32 = 0x40;
          DAT_INTMEM_33 = 0x10;
          DAT_INTMEM_34 = 0;
          DAT_INTMEM_35 = 0x40;
          DAT_INTMEM_2a = 2;
          DAT_INTMEM_2b = 1;
          DAT_INTMEM_2c = 0;
          DAT_INTMEM_2d = 0;
          DAT_INTMEM_2e = 1;
          DAT_INTMEM_2f = 0x8f;
          FUN_CODE_1aa9(0xca08,bVar2,bVar1);
          uEXTMEMce51 = 0x10;
          FUN_CODE_11d7();
          BANK0_R3 = BANK0_R3 & 0xfe;
          BANK2_R5 = '\0';
          param_1 = 0x4fe4;
          DAT_EXTMEM_4fe4 = 0;
          param_3 = DAT_EXTMEM_d76d;
        }
      }
    }
    else if (param_2 == '\0') {
      if ((BANK2_R5 != '\0') || (param_1 = 0x4fe4, param_3 = DAT_EXTMEM_4fe4, DAT_EXTMEM_4fe4 != 0))
      {
        do {
          bVar2 = DAT_EXTMEM_ca40;
          if ((DAT_EXTMEM_ca40 >> 1 & 1) == 1) break;
          bVar2 = bEXTMEMcb40;
        } while ((bEXTMEMcb40 & 6) != 0);
        uEXTMEMca0c = 1;
        DAT_INTMEM_30 = 0xf;
        DAT_INTMEM_31 = 0;
        DAT_INTMEM_32 = 0x40;
        DAT_INTMEM_33 = 0x10;
        DAT_INTMEM_34 = 0;
        DAT_INTMEM_35 = 0x40;
        DAT_INTMEM_2a = 2;
        DAT_INTMEM_2b = 1;
        DAT_INTMEM_2c = 0;
        DAT_INTMEM_2d = 0;
        DAT_INTMEM_2e = 1;
        DAT_INTMEM_2f = 0x8f;
        FUN_CODE_1aa9(0xca08,bVar2);
        uEXTMEMce51 = 0x10;
        FUN_CODE_11d7();
        BANK0_R3 = BANK0_R3 & 0xfe;
        BANK2_R5 = '\0';
        param_1 = 0x4fe4;
        DAT_EXTMEM_4fe4 = 0;
        param_3 = DAT_EXTMEM_d76d;
      }
    }
    else {
      while (bEXTMEM4fb1 != 0) {
        DAT_INTMEM_7a = 0x20;
        DAT_INTMEM_7b = 0x28;
        FUN_CODE_0270(0x4f00);
      }
      DAT_INTMEM_7a = BANK1_R1;
      DAT_INTMEM_7b = BANK1_R2;
      DAT_INTMEM_7c = BANK2_R4;
      DAT_INTMEM_7d = BANK2_R7;
      param_1 = 0x4f03;
      param_3 = bEXTMEM4fb1;
      FUN_CODE_11f9(0x4f03);
    }
    param_2 = '\0';
  } while( true );
LAB_CODE_3b47:
  bVar2 = BANK0_R2;
  DAT_INTMEM_7a = 0x20;
  DAT_INTMEM_7b = 0xb;
  param_1 = param_1 & 0xff00;
  FUN_CODE_0270(param_1);
  uVar5 = (undefined1)(param_1 >> 8);
  BANK1_R5 = '\0';
  if ((((BANK3_R0 == '\0') && (uVar5 = 0x4f, param_3 = bEXTMEM4feb, bEXTMEM4feb == 0)) &&
      (uVar5 = 0xcc, cEXTMEMcc8d == '\0')) && (param_2 != '\0')) {
    param_1 = 0xcc02;
    BANK0_R2 = bVar2;
    FUN_CODE_1f0b();
    param_3 = (byte)param_1;
    BANK0_R2 = bVar2;
    if (param_3 == 1) {
LAB_CODE_2a74:
      do {
        if ((bEXTMEMd66f >> 4 & 1) != 0) {
          uEXTMEMca10 = 3;
          uEXTMEMca15 = 0x20;
          uEXTMEMca14 = 7;
        }
        if ((bCODE0048 >> 4 & 1) != 0) {
          uEXTMEMd7fc = 1;
          uEXTMEMd7fa = 1;
          uEXTMEMd7f8 = 1;
          uEXTMEMd7f6 = 1;
        }
        do {
          BANK0_R2 = BANK0_R2 & 0xe;
        } while (bEXTMEMc800 == 0xe);
        BANK1_R0 = DAT_EXTMEM_c801 & 0x80;
        if (BANK1_R0 == 0) {
          BANK0_R2 = BANK0_R2 | 0x9b;
          uEXTMEMd21e = 0xff;
        }
        else {
          uEXTMEMcc8e = 0;
        }
        bVar2 = BANK0_R2;
        DAT_EXTMEM_4fe9 = 0;
        BANK1_R1 = 0;
        BANK1_R2 = 0;
        BANK2_R4 = 0;
        BANK1_R5 = '\0';
        BANK1_R6 = '\0';
        BANK2_R3 = '\0';
        BANK2_R7 = 0;
        DAT_EXTMEM_4fe4 = 0;
        BANK2_R5 = '\0';
        BANK2_R6 = '\0';
        BANK3_R0 = '\0';
        bEXTMEM4feb = 0;
        param_2 = '\0';
        uEXTMEM4fe5 = 0;
        uEXTMEM4fe6 = 0;
        DAT_EXTMEM_4fe7 = 0;
        DAT_EXTMEM_4fae = 0;
        uEXTMEMd766 = 8;
        uEXTMEMd600 = 0;
        uEXTMEMd680 = 0;
        uEXTMEMd700 = 0;
        uEXTMEMd780 = 0;
        if (cCODE004b < '\0') {
          uEXTMEMd677 = 0;
        }
        else {
          uEXTMEMd677 = 0xf;
        }
        if (BANK1_R0 == 0) {
          BANK0_R3 = BANK0_R3 & 0xfc | 4;
          uEXTMEMd254 = 0xff;
          uEXTMEMd255 = 0xff;
        }
        else if ((bEXTMEMc84b >> 3 & 1) == 1) {
          BANK0_R3 = BANK0_R3 | 4;
        }
        else {
          BANK0_R3 = BANK0_R3 & 0xfa;
        }
        uEXTMEMcc92 = 8;
        BANK3_R1 = uEXTMEMcc8e;
        uEXTMEMcc96 = 1;
        BANK0_R3 = BANK0_R3 & 0xfe;
        FUN_CODE_1da2(5);
        DAT_EXTMEM_4fea = DAT_EXTMEM_c801 & 0x3f;
        if (DAT_EXTMEM_4fea == 8) {
          for (bEXTMEM4ff0 = 0; bEXTMEM4ff0 < 2; bEXTMEM4ff0 = bEXTMEM4ff0 + 1) {
          }
          BANK0_R3 = BANK0_R3 & 0xfd;
          DAT_INTMEM_7a = 0x10;
          DAT_INTMEM_7b = 0x1c;
          BANK0_R2 = bVar2;
          FUN_CODE_0270(0xd600);
          do {
          } while ((bEXTMEMd67c >> 2 & 1) == 0);
        }
        while ((((DAT_EXTMEM_c848 >> 2 & 1) != 0 &&
                (uVar6 = 0xcc93, bVar4 = DAT_EXTMEM_c848, DAT_EXTMEM_cc93 == '\0')) ||
               (uVar6 = 0xc808, bVar4 = DAT_EXTMEM_c808, (DAT_EXTMEM_c808 & 1) != 0))) {
          DAT_INTMEM_7a = 0x20;
          DAT_INTMEM_7b = 0x20;
          BANK0_R2 = bVar2;
          FUN_CODE_0270(uVar6 & 0xff00,bVar4);
        }
        do {
        } while ((DAT_EXTMEM_cc07 & 1) == 1);
        do {
        } while ((bEXTMEMc82f & 1) == 0);
        BANK0_R3 = BANK0_R3 | 3;
        if ((bEXTMEMc800 >> 4 & 1) != 0) {
          BANK0_R2 = bVar2;
          FUN_CODE_1da2(0x1c2,bEXTMEMc800);
        }
        if ((bEXTMEMc800 & 1) == 1) {
          if (cEXTMEMd66e == '\x01') {
            bEXTMEMc890 = 1;
            uEXTMEMc891 = 0xc;
            uEXTMEMd449 = 2;
            uEXTMEMd766 = 0;
            DAT_EXTMEM_d672 = 0;
            BANK0_R3 = BANK0_R3 & 3;
          }
          else if (cEXTMEMd66e == '\x02') {
            DAT_EXTMEM_d672 = 0xf;
            BANK0_R3 = BANK0_R3 & 2;
          }
          else {
            DAT_EXTMEM_d672 = 0xf;
            BANK0_R3 = BANK0_R3 & 3;
          }
          BANK0_R2 = bVar2;
          for (bEXTMEM4ff0 = 0; bEXTMEM4ff0 < 4; bEXTMEM4ff0 = bEXTMEM4ff0 + 1) {
            DAT_INTMEM_7b = bEXTMEM4ff0;
            DAT_INTMEM_7a = 0;
            FUN_CODE_0e94(0x4f00);
          }
          uEXTMEMca5a = 0;
          BANK0_R3 = BANK0_R3 | 1;
          uEXTMEMd767 = 0x3f;
          BANK1_R1 = 4;
          do {
            if (bEXTMEMc890 != 0) {
              DAT_INTMEM_7a = 0x20;
              DAT_INTMEM_7b = 4;
              FUN_CODE_0270(0xc800);
              do {
              } while( true );
            }
            DAT_INTMEM_7a = 1;
            DAT_INTMEM_7b = 2;
            FUN_CODE_0270(0xc800);
            uEXTMEMd446 = 0xc4;
            uEXTMEMd447 = 0;
            uEXTMEMd453 = 0x3a;
            uEXTMEMd47d = 0x3a;
            uEXTMEMd454 = 0x54;
            uEXTMEMd47e = 0x54;
            FUN_CODE_0478();
            while (FUN_CODE_0aba(), (DAT_EXTMEM_c802 & 1) == 0) {
              if ((DAT_EXTMEM_cc07 & 1) != 0) {
                FUN_CODE_0e61(DAT_EXTMEM_cc07);
                goto LAB_CODE_2a74;
              }
            }
            FUN_CODE_0f3d(DAT_EXTMEM_c802);
            FUN_CODE_1010();
            FUN_CODE_1da2(0xf);
            BANK0_R3 = BANK0_R3 & 0xdd;
            DAT_EXTMEM_cc00 = 0;
            FUN_CODE_1043();
            uEXTMEMce51 = 0;
            DAT_INTMEM_7a = 1;
            DAT_INTMEM_7b = 3;
            bVar2 = FUN_CODE_0270(0xce00);
            while( true ) {
              FUN_CODE_0aba(bVar2);
              while (DAT_EXTMEM_cc93 == '\x01') {
                DAT_INTMEM_7a = 0x20;
                DAT_INTMEM_7b = 0x21;
                FUN_CODE_0270(0xcc00);
              }
              if (((((DAT_EXTMEM_c802 & 1) != 1) && ((bEXTMEMc890 & 1) == 0)) ||
                  (-1 < (char)DAT_EXTMEM_d77f)) && ((bEXTMEMc890 & 1) != 1)) break;
              DAT_EXTMEM_4fea = DAT_EXTMEM_cc07;
              if ((DAT_EXTMEM_cc07 & 1) != 0) {
                FUN_CODE_0e61(DAT_EXTMEM_cc07);
                goto LAB_CODE_2a74;
              }
              bVar2 = DAT_EXTMEM_cc07;
              if ((DAT_EXTMEM_cc07 >> 2 & 1) != 0) {
                bINTMEM7f = BANK0_R3;
                bINTMEM80 = BANK0_R3;
                bVar2 = bEXTMEMcc37;
              }
            }
            FUN_CODE_0e61(bEXTMEMc890);
          } while( true );
        }
        uEXTMEMca5a = 0;
        DAT_INTMEM_7a = 1;
        DAT_INTMEM_7b = 5;
        BANK0_R2 = bVar2;
        FUN_CODE_0270(0xca00,bEXTMEMc800);
        cEXTMEM4fef = '\0';
        uVar5 = 200;
        BANK0_R2 = bVar2;
        if (((DAT_EXTMEM_c848 >> 4 & 1) != 1) ||
           ((bVar4 = DAT_EXTMEM_c848, BANK1_R0 == 0 &&
            (uVar5 = 0xd2, bVar4 = DAT_EXTMEM_d252, (DAT_EXTMEM_d252 >> 5 & 1) != 0))))
        goto LAB_CODE_33b1;
        DAT_INTMEM_ee = 1;
        DAT_INTMEM_2f = 0xee;
        DAT_INTMEM_30 = 0xf;
        DAT_INTMEM_31 = 0;
        DAT_INTMEM_32 = 0x40;
        DAT_INTMEM_33 = 0x10;
        DAT_INTMEM_34 = 0;
        DAT_INTMEM_35 = 0x40;
        DAT_INTMEM_2a = 0;
        DAT_INTMEM_2b = 6;
        DAT_INTMEM_2c = 0;
        DAT_INTMEM_2d = 0;
        DAT_INTMEM_2e = 1;
        uVar7 = CONCAT11(uVar5,8);
        FUN_CODE_1aa9(uVar7,bVar4);
        uVar5 = (undefined1)((ushort)uVar7 >> 8);
        if (BANK1_R0 != 0) goto LAB_CODE_2f76;
        uEXTMEMcc0c = 199;
        uEXTMEMcc0b = 0;
        do {
          if (((cEXTMEMcc29 == '\0') && (99 < bEXTMEMcc0a)) || ((bEXTMEMcc90 & 1) == 1)) {
            uVar5 = 0xcc;
            uEXTMEMcc0c = 99;
            goto LAB_CODE_2f76;
          }
        } while ((DAT_EXTMEM_cc07 & 1) == 0);
        DAT_EXTMEM_cc00 = 1;
        BANK0_R2 = bVar2;
        FUN_CODE_11d7(DAT_EXTMEM_cc07);
        BANK0_R3 = BANK0_R3 & 0xfe;
        DAT_EXTMEM_c200 = DAT_EXTMEM_c200 & 0xf1 | 3;
        DAT_EXTMEM_d67e = 0;
        DAT_EXTMEM_d67f = 0;
      } while( true );
    }
    if (BANK1_R5 != '\0') goto LAB_CODE_3b47;
    if (BANK1_R6 != '\0') goto LAB_CODE_3be5;
    param_1 = 0;
    bVar4 = bCODE0048;
    if ((bCODE0048 >> 2 & 1) != 0) {
      param_1 = 0;
      if ((bCODE0048 >> 5 & 1) != 0) {
        DAT_INTMEM_7d = DAT_EXTMEM_0120;
        DAT_INTMEM_7a = BANK1_R1;
        DAT_INTMEM_7b = BANK1_R2;
        DAT_INTMEM_7c = BANK2_R4;
        param_1 = 0x10c;
        FUN_CODE_11f9(0x10c);
      }
      BANK0_R2 = bVar2;
      FUN_CODE_0326();
    }
    uVar5 = (undefined1)(param_1 >> 8);
    BANK0_R3 = DAT_INTMEM_81 & BANK3_R4;
    BANK0_R2 = bVar2;
    if (((bVar4 != BANK3_R4) || (BANK0_R3 = DAT_INTMEM_82 & BANK3_R5, bVar4 != BANK3_R5)) ||
       (BANK2_R3 == '\0')) goto LAB_CODE_3be5;
    param_3 = BANK2_R7 & 0xc0;
    if (param_3 == 0xc0) {
      DAT_INTMEM_7a = BANK1_R1;
      DAT_INTMEM_7b = BANK1_R2;
      DAT_INTMEM_7c = BANK2_R4;
      DAT_INTMEM_7d = BANK2_R7;
      param_1 = CONCAT11(uVar5,4);
      FUN_CODE_11f9(param_1);
      BANK0_R2 = bVar2;
      goto LAB_CODE_3479;
    }
  }
  if ((BANK1_R0 == 0) && (uVar5 = 0xd2, param_3 = DAT_EXTMEM_d25c, (DAT_EXTMEM_d25c & 0xf) == 0)) {
    param_1 = 0xcc21;
    uEXTMEMcc21 = 1;
    BANK0_R2 = bVar2;
  }
  else {
    DAT_INTMEM_7a = BANK1_R1;
    DAT_INTMEM_7b = BANK1_R2;
    DAT_INTMEM_7c = BANK2_R4;
    DAT_INTMEM_7d = 0;
    param_1 = CONCAT11(uVar5,0xd);
    BANK0_R2 = bVar2;
    FUN_CODE_11f9(param_1);
    BANK0_R2 = bVar2;
  }
  goto LAB_CODE_3479;
LAB_CODE_2f76:
  DAT_INTMEM_30 = 0xf;
  DAT_INTMEM_31 = 0;
  DAT_INTMEM_32 = 0x40;
  DAT_INTMEM_33 = 0x10;
  DAT_INTMEM_34 = 0;
  DAT_INTMEM_35 = 0x40;
  DAT_INTMEM_2a = 0;
  DAT_INTMEM_2b = 0;
  DAT_INTMEM_2c = 0;
  DAT_INTMEM_2d = 0;
  DAT_INTMEM_2e = 0xc;
  DAT_INTMEM_2f = 0;
  BANK0_R2 = bVar2;
  FUN_CODE_1aa9(CONCAT11(uVar5,9));
  BANK0_R2 = bVar2;
  bVar2 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
  cEXTMEM4fef = 0x11 < bVar2;
  param_4 = BANK2_R2;
  bVar2 = FUN_CODE_3ed5(CONCAT11(BANK2_R1 - (((0xfd < BANK2_R0) << 7) >> 7),BANK2_R0 + 2),BANK2_R2);
  DAT_EXTMEM_4fae = bVar2 & 0x40;
  if (BANK1_R0 == 0) {
    uEXTMEMd257 = 0x11;
    BANK0_R3 = 0;
    cVar3 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
    if ((cVar3 != '\x10') && (cVar3 != '\x11')) {
      if (cVar3 == '\x12') {
        BANK0_R3 = BANK0_R3 | 0x10;
      }
      else {
        BANK0_R3 = BANK0_R3 | 0x10;
      }
    }
    if ((bEXTMEMc80a & 0xf) == 0) {
      cVar3 = FUN_CODE_3ed5(CONCAT11(BANK2_R1 - (((0xfe < BANK2_R0) << 7) >> 7),BANK2_R0 + 1),
                            BANK2_R2);
      if (cVar3 != '\x06') {
        if (cVar3 == '\n') {
          BANK0_R3 = BANK0_R3 | 1;
        }
        else if (cVar3 == '\x14') {
          BANK0_R3 = BANK0_R3 | 2;
        }
        else {
          BANK0_R3 = BANK0_R3 | 2;
        }
      }
    }
    else {
      BANK0_R3 = BANK0_R3 & 0xf;
      if (bEXTMEMc80a != 1) {
        if (bEXTMEMc80a == 2) {
          BANK0_R3 = BANK0_R3 | 1;
        }
        else if (bEXTMEMc80a == 3) {
          BANK0_R3 = BANK0_R3 | 2;
        }
        else {
          BANK0_R3 = BANK0_R3 | 2;
        }
      }
    }
    if ((bEXTMEMc80a & 0xf0) == 0) {
      cVar3 = FUN_CODE_3ed5(CONCAT11(BANK2_R1 - (((0xfd < BANK2_R0) << 7) >> 7),BANK2_R0 + 2),
                            BANK2_R2);
      BANK0_R3 = BANK0_R3 & 0x1f;
      if (cVar3 != '\x01') {
        if (cVar3 == '\x02') {
          BANK0_R3 = BANK0_R3 | 0x10;
        }
        else if (cVar3 == '\x04') {
          BANK0_R3 = BANK0_R3 | 0x20;
        }
        else {
          BANK0_R3 = BANK0_R3 | 0x20;
        }
      }
    }
    else {
      BANK0_R3 = BANK0_R3 & 0xf0;
      if (bEXTMEMc80a != 0x10) {
        if (bEXTMEMc80a == 0x20) {
          BANK0_R3 = BANK0_R3 | 0x10;
        }
        else if (bEXTMEMc80a == 0x40) {
          BANK0_R3 = BANK0_R3 | 0x20;
        }
        else {
          BANK0_R3 = BANK0_R3 | 0x20;
        }
      }
    }
    param_4 = BANK2_R1 - (((0xfd < BANK2_R0) << 7) >> 7);
    bVar2 = FUN_CODE_3ed5(CONCAT11(param_4,BANK2_R0 + 2),BANK2_R2);
    BANK0_R3 = BANK0_R3 & 0xfe | bVar2 & 0xc0;
  }
  bVar2 = BANK0_R2;
  if ((bCODE0048 >> 2 & 1) != 0) {
    DAT_INTMEM_30 = 0xf;
    DAT_INTMEM_31 = 0;
    DAT_INTMEM_32 = 0x40;
    DAT_INTMEM_33 = 0x10;
    DAT_INTMEM_34 = 0;
    DAT_INTMEM_35 = 0x40;
    DAT_INTMEM_2a = 0;
    DAT_INTMEM_2b = 2;
    DAT_INTMEM_2c = 0;
    DAT_INTMEM_2d = 0;
    DAT_INTMEM_2e = 1;
    DAT_INTMEM_2f = 0;
    FUN_CODE_1aa9(9,bCODE0048);
    param_4 = BANK2_R2;
    bVar4 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
    DAT_EXTMEM_0120 = bVar4 & 0x1f;
    FUN_CODE_0326();
  }
  BANK0_R2 = bVar2;
  if (cEXTMEM4fef != '\0') {
    DAT_INTMEM_30 = 0xf;
    DAT_INTMEM_31 = 0;
    DAT_INTMEM_32 = 0x40;
    DAT_INTMEM_33 = 0x10;
    DAT_INTMEM_34 = 0;
    DAT_INTMEM_35 = 0x40;
    DAT_INTMEM_2a = 0xe;
    DAT_INTMEM_2b = 0;
    DAT_INTMEM_2c = 0;
    DAT_INTMEM_2d = 0;
    DAT_INTMEM_2e = 1;
    DAT_INTMEM_2f = 0;
    FUN_CODE_1aa9(0x4f09,cEXTMEM4fef);
    param_4 = BANK2_R2;
    if ((bEXTMEMc809 & 1) == 1) {
      BANK0_R2 = bVar2;
      cVar3 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
      BANK0_R3 = BANK0_R3 & 0x7f;
      if (BANK0_R3 < 5) {
                    /* WARNING: Could not recover jumptable at 0x32a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ushort)(byte)(cVar3 * '\x03') + 0x32aa))();
        return;
      }
    }
    else {
      BANK0_R2 = bVar2;
      cVar3 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
      BANK0_R3 = BANK0_R3 & 0x7f;
      if (BANK0_R3 < 5) {
                    /* WARNING: Could not recover jumptable at 0x3333. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ushort)(byte)(cVar3 * '\x03') + 0x3334))();
        return;
      }
    }
  }
LAB_CODE_33b1:
  bVar2 = BANK0_R2;
  uEXTMEM4fd9 = 1;
  DAT_EXTMEM_4fd8 = 4;
  BANK0_R3 = BANK0_R3 & 0xfe;
  param_1 = 0x4fef;
  if (cEXTMEM4fef == '\0') {
    param_3 = 0;
  }
  else {
    DAT_INTMEM_30 = 0xf;
    DAT_INTMEM_31 = 0;
    DAT_INTMEM_32 = 0x40;
    DAT_INTMEM_33 = 0x10;
    DAT_INTMEM_34 = 0;
    DAT_INTMEM_35 = 0x40;
    DAT_INTMEM_2a = 0x21;
    DAT_INTMEM_2b = 0;
    DAT_INTMEM_2c = 0;
    DAT_INTMEM_2d = 0;
    DAT_INTMEM_2e = 1;
    DAT_INTMEM_2f = 0;
    FUN_CODE_1aa9(0x4f09);
    param_1 = CONCAT11(BANK2_R1,BANK2_R0);
    param_4 = BANK2_R2;
    BANK0_R2 = bVar2;
    param_3 = FUN_CODE_3ed5(param_1,BANK2_R2);
    bVar2 = BANK0_R2;
    BANK0_R2 = bVar2;
    if ((param_3 & 1) != 0) {
      DAT_EXTMEM_4fe7 = 0;
      uINTMEMd4 = 0;
      DAT_INTMEM_2f = 0xd4;
      DAT_INTMEM_30 = 0xf;
      DAT_INTMEM_31 = 0;
      DAT_INTMEM_32 = 0x40;
      DAT_INTMEM_33 = 0x10;
      DAT_INTMEM_34 = 0;
      DAT_INTMEM_35 = 0x40;
      DAT_INTMEM_2a = 0x11;
      DAT_INTMEM_2b = 1;
      DAT_INTMEM_2c = 0;
      DAT_INTMEM_2d = 0;
      DAT_INTMEM_2e = 1;
      uVar5 = 0x4f;
      FUN_CODE_1aa9(0x4f08);
      uINTMEMd5 = 0;
      uINTMEMd6 = 0;
      uINTMEMd7 = 0x3f;
      DAT_INTMEM_2f = 0xd5;
      DAT_INTMEM_30 = 0xf;
      DAT_INTMEM_31 = 0;
      DAT_INTMEM_32 = 0x40;
      DAT_INTMEM_33 = 0x10;
      DAT_INTMEM_34 = 0;
      DAT_INTMEM_35 = 0x40;
      DAT_INTMEM_2a = 0xc0;
      DAT_INTMEM_2b = 1;
      DAT_INTMEM_2c = 0;
      DAT_INTMEM_2d = 0;
      DAT_INTMEM_2e = 3;
      param_1 = CONCAT11(uVar5,8);
      FUN_CODE_1aa9(param_1);
      BANK0_R2 = bVar2;
    }
  }
  if (BANK1_R5 == '\0') goto LAB_CODE_3479;
  goto LAB_CODE_3b47;
}



/* =========================================================
 * CODE:395b  FUN_CODE_395b  size=1366
 * ========================================================= */

void FUN_CODE_395b(ushort param_1,char param_2,byte param_3,undefined1 param_4)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  char cVar6;
  undefined1 uVar7;
  undefined2 uVar8;
  ushort uVar9;
  
  bVar2 = BANK0_R4;
  bVar5 = BANK0_R3;
  bVar3 = BANK0_R2;
  if (BANK1_R0 == 0) {
    BANK0_R5 = BANK0_R5 & 0xfc;
    param_1 = 0xd200;
  }
  DAT_INTMEM_7a = 1;
  DAT_INTMEM_7b = 8;
  FUN_CODE_0270(param_1 & 0xff00);
  if (BANK1_R0 == 0) {
    if ((DAT_EXTMEM_d25c & 0xf) == 0) {
      BANK0_R5 = BANK0_R5 | 0x40;
    }
    else {
      BANK0_R5 = BANK0_R5 & 0xbf;
    }
    if (((DAT_EXTMEM_d252 >> 5 & 1) == 1) ||
       ((((DAT_EXTMEM_d25c & 0xf) != 0 || ((DAT_EXTMEM_d252 >> 3 & 1) != 1)) &&
        (((DAT_EXTMEM_d25c & 0xf) == 0 || ((DAT_EXTMEM_d252 >> 2 & 1) == 0)))))) {
      uEXTMEM4fe5 = false;
    }
    else {
      uEXTMEM4fe5 = true;
    }
  }
  else {
    BANK0_R5 = BANK0_R5 & 8;
    uEXTMEM4fe5 = bEXTMEMc84b == 0;
  }
  cVar4 = cEXTMEMc806;
  if ((bool)uEXTMEM4fe5 == false) {
    BANK0_R5 = BANK0_R5 | 1;
  }
  else {
    BANK0_R5 = BANK0_R5 & 0xfe;
    if (BANK1_R0 == 0) {
      BANK0_R5 = BANK0_R5 | 4;
      cVar4 = cEXTMEMd208;
    }
  }
  cEXTMEM4fec = '\x01';
  DAT_INTMEM_5d = 0x78;
  DAT_INTMEM_5e = 0;
  DAT_INTMEM_5f = 0x40;
  DAT_INTMEM_60 = 0x79;
  DAT_INTMEM_61 = 0;
  DAT_INTMEM_62 = 0x40;
  DAT_INTMEM_63 = 0xec;
  DAT_INTMEM_64 = 0x4f;
  DAT_INTMEM_65 = 0;
  uVar9 = CONCAT11(0x4f,DAT_INTMEM_77);
  BANK0_R2 = bVar3;
  BANK0_R3 = bVar5;
  BANK0_R4 = bVar2;
  DAT_INTMEM_5b = param_4;
  DAT_INTMEM_5c = param_3;
  FUN_CODE_223b(uVar9);
  BANK0_R2 = bVar3;
  BANK0_R3 = bVar5;
  if ((BANK1_R6 == '\0') && (BANK2_R5 == '\0')) {
    if (cEXTMEM4fec == '\x01') {
      DAT_INTMEM_7a = 1;
      DAT_INTMEM_7b = 9;
      uVar7 = 0x4f;
      FUN_CODE_0270(0x4f00);
      DAT_INTMEM_7a = BANK1_R1;
      DAT_INTMEM_7b = BANK1_R2;
      DAT_INTMEM_7c = BANK2_R4;
      DAT_INTMEM_7d = 0;
      uVar9 = CONCAT11(uVar7,2);
      FUN_CODE_11f9(uVar9);
      BANK0_R2 = bVar3;
      goto LAB_CODE_3479;
    }
    uVar9 = (ushort)BANK3_R1 << 8;
    FUN_CODE_1da2(uVar9);
    DAT_INTMEM_7a = 1;
    DAT_INTMEM_7b = 10;
    FUN_CODE_0270(uVar9 & 0xff00);
    bVar3 = BANK0_R2;
    param_2 = '\x01';
    if (DAT_EXTMEM_4fe7 == '\0') {
      uEXTMEMd20b = 0x85;
      BANK0_R4 = BANK0_R4 & 0xf5 | 1;
    }
    else {
      uEXTMEMd20b = 0x84;
      BANK0_R4 = BANK0_R4 & 0xfe | 10;
    }
    uVar9 = 0;
    BANK0_R3 = bVar5;
    if ((bCODE0048 >> 3 & 1) != 1) {
      DAT_INTMEM_7a = DAT_INTMEM_78;
      DAT_INTMEM_7b = DAT_INTMEM_79;
      DAT_INTMEM_7d = 0;
      uVar9 = 0;
      DAT_INTMEM_7c = param_3;
      FUN_CODE_11f9(1,bCODE0048);
    }
    BANK0_R2 = bVar3;
    if (BANK1_R5 != '\0') goto LAB_CODE_3b47;
    goto LAB_CODE_3479;
  }
LAB_CODE_3be5:
  bVar3 = BANK0_R2;
  DAT_INTMEM_7a = 1;
  DAT_INTMEM_7b = 0xc;
  FUN_CODE_0270(uVar9 & 0xff00);
  BANK0_R3 = BANK0_R3 & 0xfc;
  uVar7 = 0x4f;
  bVar5 = DAT_EXTMEM_4fbf;
  if ((DAT_EXTMEM_4fbf == 1) && (uVar7 = 0, bVar5 = bCODE0049, (bCODE0049 >> 1 & 1) != 0)) {
    BANK0_R3 = BANK0_R3 | 1;
    DAT_EXTMEM_d67e = 0;
    uVar7 = 0xd6;
    DAT_EXTMEM_d67f = 0;
    bVar5 = DAT_EXTMEM_d77f;
  }
  BANK0_R2 = bVar3;
  if (BANK1_R6 != '\0') {
    DAT_INTMEM_30 = 0xf;
    DAT_INTMEM_31 = 0;
    DAT_INTMEM_32 = 0x40;
    DAT_INTMEM_33 = 0x10;
    DAT_INTMEM_34 = 0;
    DAT_INTMEM_35 = 0x40;
    DAT_INTMEM_2a = 0x21;
    DAT_INTMEM_2b = 0;
    DAT_INTMEM_2c = 0;
    DAT_INTMEM_2d = 0;
    DAT_INTMEM_2e = 1;
    DAT_INTMEM_2f = 0;
    FUN_CODE_1aa9(CONCAT11(uVar7,9),bVar5);
    cVar4 = BANK2_R2;
    BANK0_R2 = bVar3;
    bVar5 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
    bVar3 = BANK0_R2;
    BANK0_R2 = bVar3;
    if ((bVar5 & 1) != 0) {
      DAT_EXTMEM_4fe7 = '\0';
      uINTMEMd4 = 0;
      DAT_INTMEM_2f = 0xd4;
      DAT_INTMEM_30 = 0xf;
      DAT_INTMEM_31 = 0;
      DAT_INTMEM_32 = 0x40;
      DAT_INTMEM_33 = 0x10;
      DAT_INTMEM_34 = 0;
      DAT_INTMEM_35 = 0x40;
      DAT_INTMEM_2a = 0x11;
      DAT_INTMEM_2b = 1;
      DAT_INTMEM_2c = 0;
      DAT_INTMEM_2d = 0;
      DAT_INTMEM_2e = 1;
      uVar7 = 0x4f;
      FUN_CODE_1aa9(0x4f08,bVar5);
      uINTMEMd5 = 0;
      uINTMEMd6 = 0;
      uINTMEMd7 = 0x3f;
      DAT_INTMEM_2f = 0xd5;
      DAT_INTMEM_30 = 0xf;
      DAT_INTMEM_31 = 0;
      DAT_INTMEM_32 = 0x40;
      DAT_INTMEM_33 = 0x10;
      DAT_INTMEM_34 = 0;
      DAT_INTMEM_35 = 0x40;
      DAT_INTMEM_2a = 0xc0;
      DAT_INTMEM_2b = 1;
      DAT_INTMEM_2c = 0;
      DAT_INTMEM_2d = 0;
      DAT_INTMEM_2e = 3;
      FUN_CODE_1aa9(CONCAT11(uVar7,8));
      BANK0_R2 = bVar3;
    }
  }
  BANK1_R6 = '\0';
  uEXTMEM4fe6 = 0;
  DAT_EXTMEM_cc00 = 1;
  DAT_EXTMEM_c200 = DAT_EXTMEM_c200 & 0xf1 | 3;
  if ((bCODE0048 >> 1 & 1) == 1) {
    param_3 = bEXTMEM4feb != 1;
    bVar1 = DAT_EXTMEM_4fbf != 1;
    if (bVar1 && (bool)param_3) {
      DAT_INTMEM_7a = BANK1_R1;
      DAT_INTMEM_7b = BANK1_R2;
      DAT_INTMEM_7c = BANK2_R4;
      DAT_INTMEM_7d = BANK2_R7;
      uVar9 = 0x4f03;
      FUN_CODE_11f9(0x4f03);
    }
    else {
      DAT_EXTMEM_4fbf = 0;
      if ((BANK2_R5 != '\0') || (uVar9 = 0x4fe4, param_3 = DAT_EXTMEM_4fe4, DAT_EXTMEM_4fe4 != 0)) {
        do {
          bVar3 = DAT_EXTMEM_ca40;
          if ((DAT_EXTMEM_ca40 >> 1 & 1) == 1) break;
          bVar3 = bEXTMEMcb40;
        } while ((bEXTMEMcb40 & 6) != 0);
        uEXTMEMca0c = 1;
        DAT_INTMEM_30 = 0xf;
        DAT_INTMEM_31 = 0;
        DAT_INTMEM_32 = 0x40;
        DAT_INTMEM_33 = 0x10;
        DAT_INTMEM_34 = 0;
        DAT_INTMEM_35 = 0x40;
        DAT_INTMEM_2a = 2;
        DAT_INTMEM_2b = 1;
        DAT_INTMEM_2c = 0;
        DAT_INTMEM_2d = 0;
        DAT_INTMEM_2e = 1;
        DAT_INTMEM_2f = 0x8f;
        FUN_CODE_1aa9(0xca08,bVar3,bVar1);
        uEXTMEMce51 = 0x10;
        FUN_CODE_11d7();
        BANK0_R3 = BANK0_R3 & 0xfe;
        BANK2_R5 = '\0';
        uVar9 = 0x4fe4;
        DAT_EXTMEM_4fe4 = 0;
        param_3 = DAT_EXTMEM_d76d;
      }
    }
  }
  else if (param_2 == '\0') {
    if ((BANK2_R5 != '\0') || (uVar9 = 0x4fe4, param_3 = DAT_EXTMEM_4fe4, DAT_EXTMEM_4fe4 != 0)) {
      do {
        bVar3 = DAT_EXTMEM_ca40;
        if ((DAT_EXTMEM_ca40 >> 1 & 1) == 1) break;
        bVar3 = bEXTMEMcb40;
      } while ((bEXTMEMcb40 & 6) != 0);
      uEXTMEMca0c = 1;
      DAT_INTMEM_30 = 0xf;
      DAT_INTMEM_31 = 0;
      DAT_INTMEM_32 = 0x40;
      DAT_INTMEM_33 = 0x10;
      DAT_INTMEM_34 = 0;
      DAT_INTMEM_35 = 0x40;
      DAT_INTMEM_2a = 2;
      DAT_INTMEM_2b = 1;
      DAT_INTMEM_2c = 0;
      DAT_INTMEM_2d = 0;
      DAT_INTMEM_2e = 1;
      DAT_INTMEM_2f = 0x8f;
      FUN_CODE_1aa9(0xca08,bVar3);
      uEXTMEMce51 = 0x10;
      FUN_CODE_11d7();
      BANK0_R3 = BANK0_R3 & 0xfe;
      BANK2_R5 = '\0';
      uVar9 = 0x4fe4;
      DAT_EXTMEM_4fe4 = 0;
      param_3 = DAT_EXTMEM_d76d;
    }
  }
  else {
    while (bEXTMEM4fb1 != 0) {
      DAT_INTMEM_7a = 0x20;
      DAT_INTMEM_7b = 0x28;
      FUN_CODE_0270(0x4f00);
    }
    DAT_INTMEM_7a = BANK1_R1;
    DAT_INTMEM_7b = BANK1_R2;
    DAT_INTMEM_7c = BANK2_R4;
    DAT_INTMEM_7d = BANK2_R7;
    uVar9 = 0x4f03;
    param_3 = bEXTMEM4fb1;
    FUN_CODE_11f9(0x4f03);
  }
  param_2 = '\0';
LAB_CODE_3479:
  do {
    bVar3 = BANK0_R2;
    if (BANK2_R6 == '\0') {
      DAT_INTMEM_7a = 0x20;
      DAT_INTMEM_7b = 6;
      FUN_CODE_0270(uVar9 & 0xff00);
      uEXTMEMcc2d = 0xfe;
      while( true ) {
        BANK3_R7 = 0xec;
        DAT_INTMEM_20 = 0x4f;
        DAT_INTMEM_21 = 0;
        DAT_INTMEM_22 = 0x72;
        DAT_INTMEM_23 = 0;
        DAT_INTMEM_24 = 0x40;
        DAT_INTMEM_25 = 0x73;
        DAT_INTMEM_26 = 0;
        DAT_INTMEM_27 = 0x40;
        BANK3_R6 = 0;
        param_3 = 0x26;
        BANK0_R2 = bVar3;
        FUN_CODE_17f4();
        uVar9 = 0x4fea;
        DAT_EXTMEM_4fea = param_3;
        if (param_3 == 0) break;
        uVar9 = 0x4fea;
        BANK0_R2 = bVar3;
        if (param_3 == 1) goto LAB_CODE_2a74;
        if (BANK1_R5 != '\0') goto LAB_CODE_3b47;
        if (BANK1_R6 != '\0') goto LAB_CODE_3be5;
      }
      BANK0_R2 = bVar3;
      if (BANK1_R5 != '\0') {
LAB_CODE_3b47:
        bVar3 = BANK0_R2;
        DAT_INTMEM_7a = 0x20;
        DAT_INTMEM_7b = 0xb;
        uVar9 = uVar9 & 0xff00;
        FUN_CODE_0270(uVar9);
        uVar7 = (undefined1)(uVar9 >> 8);
        BANK1_R5 = '\0';
        if ((((BANK3_R0 == '\0') && (uVar7 = 0x4f, param_3 = bEXTMEM4feb, bEXTMEM4feb == 0)) &&
            (uVar7 = 0xcc, cEXTMEMcc8d == '\0')) && (param_2 != '\0')) {
          uVar9 = 0xcc02;
          BANK0_R2 = bVar3;
          FUN_CODE_1f0b();
          param_3 = (byte)uVar9;
          BANK0_R2 = bVar3;
          if (param_3 == 1) {
LAB_CODE_2a74:
            do {
              if ((bEXTMEMd66f >> 4 & 1) != 0) {
                uEXTMEMca10 = 3;
                uEXTMEMca15 = 0x20;
                uEXTMEMca14 = 7;
              }
              if ((bCODE0048 >> 4 & 1) != 0) {
                uEXTMEMd7fc = 1;
                uEXTMEMd7fa = 1;
                uEXTMEMd7f8 = 1;
                uEXTMEMd7f6 = 1;
              }
              do {
                BANK0_R2 = BANK0_R2 & 0xe;
              } while (bEXTMEMc800 == 0xe);
              BANK1_R0 = DAT_EXTMEM_c801 & 0x80;
              if (BANK1_R0 == 0) {
                BANK0_R2 = BANK0_R2 | 0x9b;
                uEXTMEMd21e = 0xff;
              }
              else {
                bEXTMEMcc8e = 0;
              }
              bVar3 = BANK0_R2;
              DAT_EXTMEM_4fe9 = 0;
              BANK1_R1 = 0;
              BANK1_R2 = 0;
              BANK2_R4 = 0;
              BANK1_R5 = '\0';
              BANK1_R6 = '\0';
              BANK2_R3 = '\0';
              BANK2_R7 = 0;
              DAT_EXTMEM_4fe4 = 0;
              BANK2_R5 = '\0';
              BANK2_R6 = '\0';
              BANK3_R0 = '\0';
              bEXTMEM4feb = 0;
              param_2 = '\0';
              uEXTMEM4fe5 = 0;
              uEXTMEM4fe6 = 0;
              DAT_EXTMEM_4fe7 = '\0';
              DAT_EXTMEM_4fae = 0;
              uEXTMEMd766 = 8;
              uEXTMEMd600 = 0;
              uEXTMEMd680 = 0;
              uEXTMEMd700 = 0;
              uEXTMEMd780 = 0;
              if (cCODE004b < '\0') {
                uEXTMEMd677 = 0;
              }
              else {
                uEXTMEMd677 = 0xf;
              }
              if (BANK1_R0 == 0) {
                BANK0_R3 = BANK0_R3 & 0xfc | 4;
                uEXTMEMd254 = 0xff;
                uEXTMEMd255 = 0xff;
              }
              else if ((bEXTMEMc84b >> 3 & 1) == 1) {
                BANK0_R3 = BANK0_R3 | 4;
              }
              else {
                BANK0_R3 = BANK0_R3 & 0xfa;
              }
              uEXTMEMcc92 = 8;
              BANK3_R1 = bEXTMEMcc8e;
              uEXTMEMcc96 = 1;
              BANK0_R3 = BANK0_R3 & 0xfe;
              FUN_CODE_1da2(5);
              DAT_EXTMEM_4fea = DAT_EXTMEM_c801 & 0x3f;
              if (DAT_EXTMEM_4fea == 8) {
                for (bEXTMEM4ff0 = 0; bEXTMEM4ff0 < 2; bEXTMEM4ff0 = bEXTMEM4ff0 + 1) {
                }
                BANK0_R3 = BANK0_R3 & 0xfd;
                DAT_INTMEM_7a = 0x10;
                DAT_INTMEM_7b = 0x1c;
                BANK0_R2 = bVar3;
                FUN_CODE_0270(0xd600);
                do {
                } while ((bEXTMEMd67c >> 2 & 1) == 0);
              }
              while ((((DAT_EXTMEM_c848 >> 2 & 1) != 0 &&
                      (uVar9 = 0xcc93, bVar5 = DAT_EXTMEM_c848, DAT_EXTMEM_cc93 == '\0')) ||
                     (uVar9 = 0xc808, bVar5 = DAT_EXTMEM_c808, (DAT_EXTMEM_c808 & 1) != 0))) {
                DAT_INTMEM_7a = 0x20;
                DAT_INTMEM_7b = 0x20;
                BANK0_R2 = bVar3;
                FUN_CODE_0270(uVar9 & 0xff00,bVar5);
              }
              do {
              } while ((DAT_EXTMEM_cc07 & 1) == 1);
              do {
              } while ((bEXTMEMc82f & 1) == 0);
              BANK0_R3 = BANK0_R3 | 3;
              if ((bEXTMEMc800 >> 4 & 1) != 0) {
                BANK0_R2 = bVar3;
                FUN_CODE_1da2(0x1c2,bEXTMEMc800);
              }
              if ((bEXTMEMc800 & 1) == 1) {
                if (cEXTMEMd66e == '\x01') {
                  bEXTMEMc890 = 1;
                  uEXTMEMc891 = 0xc;
                  uEXTMEMd449 = 2;
                  uEXTMEMd766 = 0;
                  DAT_EXTMEM_d672 = 0;
                  BANK0_R3 = BANK0_R3 & 3;
                }
                else if (cEXTMEMd66e == '\x02') {
                  DAT_EXTMEM_d672 = 0xf;
                  BANK0_R3 = BANK0_R3 & 2;
                }
                else {
                  DAT_EXTMEM_d672 = 0xf;
                  BANK0_R3 = BANK0_R3 & 3;
                }
                BANK0_R2 = bVar3;
                for (bEXTMEM4ff0 = 0; bEXTMEM4ff0 < 4; bEXTMEM4ff0 = bEXTMEM4ff0 + 1) {
                  DAT_INTMEM_7b = bEXTMEM4ff0;
                  DAT_INTMEM_7a = 0;
                  FUN_CODE_0e94(0x4f00);
                }
                uEXTMEMca5a = 0;
                BANK0_R3 = BANK0_R3 | 1;
                uEXTMEMd767 = 0x3f;
                BANK1_R1 = 4;
                do {
                  if (bEXTMEMc890 != 0) {
                    DAT_INTMEM_7a = 0x20;
                    DAT_INTMEM_7b = 4;
                    FUN_CODE_0270(0xc800);
                    do {
                    } while( true );
                  }
                  DAT_INTMEM_7a = 1;
                  DAT_INTMEM_7b = 2;
                  FUN_CODE_0270(0xc800);
                  uEXTMEMd446 = 0xc4;
                  uEXTMEMd447 = 0;
                  uEXTMEMd453 = 0x3a;
                  uEXTMEMd47d = 0x3a;
                  uEXTMEMd454 = 0x54;
                  uEXTMEMd47e = 0x54;
                  FUN_CODE_0478();
                  while (FUN_CODE_0aba(), (DAT_EXTMEM_c802 & 1) == 0) {
                    if ((DAT_EXTMEM_cc07 & 1) != 0) {
                      FUN_CODE_0e61(DAT_EXTMEM_cc07);
                      goto LAB_CODE_2a74;
                    }
                  }
                  FUN_CODE_0f3d(DAT_EXTMEM_c802);
                  FUN_CODE_1010();
                  FUN_CODE_1da2(0xf);
                  BANK0_R3 = BANK0_R3 & 0xdd;
                  DAT_EXTMEM_cc00 = 0;
                  FUN_CODE_1043();
                  uEXTMEMce51 = 0;
                  DAT_INTMEM_7a = 1;
                  DAT_INTMEM_7b = 3;
                  bVar3 = FUN_CODE_0270(0xce00);
                  while( true ) {
                    FUN_CODE_0aba(bVar3);
                    while (DAT_EXTMEM_cc93 == '\x01') {
                      DAT_INTMEM_7a = 0x20;
                      DAT_INTMEM_7b = 0x21;
                      FUN_CODE_0270(0xcc00);
                    }
                    if (((((DAT_EXTMEM_c802 & 1) != 1) && ((bEXTMEMc890 & 1) == 0)) ||
                        (-1 < (char)DAT_EXTMEM_d77f)) && ((bEXTMEMc890 & 1) != 1)) break;
                    DAT_EXTMEM_4fea = DAT_EXTMEM_cc07;
                    if ((DAT_EXTMEM_cc07 & 1) != 0) {
                      FUN_CODE_0e61(DAT_EXTMEM_cc07);
                      goto LAB_CODE_2a74;
                    }
                    bVar3 = DAT_EXTMEM_cc07;
                    if ((DAT_EXTMEM_cc07 >> 2 & 1) != 0) {
                      bINTMEM7f = BANK0_R3;
                      bINTMEM80 = BANK0_R3;
                      bVar3 = bEXTMEMcc37;
                    }
                  }
                  FUN_CODE_0e61(bEXTMEMc890);
                } while( true );
              }
              uEXTMEMca5a = 0;
              DAT_INTMEM_7a = 1;
              DAT_INTMEM_7b = 5;
              BANK0_R2 = bVar3;
              FUN_CODE_0270(0xca00,bEXTMEMc800);
              cEXTMEM4fef = '\0';
              uVar7 = 200;
              BANK0_R2 = bVar3;
              if (((DAT_EXTMEM_c848 >> 4 & 1) != 1) ||
                 ((bVar5 = DAT_EXTMEM_c848, BANK1_R0 == 0 &&
                  (uVar7 = 0xd2, bVar5 = DAT_EXTMEM_d252, (DAT_EXTMEM_d252 >> 5 & 1) != 0))))
              goto LAB_CODE_33b1;
              DAT_INTMEM_ee = 1;
              DAT_INTMEM_2f = 0xee;
              DAT_INTMEM_30 = 0xf;
              DAT_INTMEM_31 = 0;
              DAT_INTMEM_32 = 0x40;
              DAT_INTMEM_33 = 0x10;
              DAT_INTMEM_34 = 0;
              DAT_INTMEM_35 = 0x40;
              DAT_INTMEM_2a = 0;
              DAT_INTMEM_2b = 6;
              DAT_INTMEM_2c = 0;
              DAT_INTMEM_2d = 0;
              DAT_INTMEM_2e = 1;
              uVar8 = CONCAT11(uVar7,8);
              FUN_CODE_1aa9(uVar8,bVar5);
              uVar7 = (undefined1)((ushort)uVar8 >> 8);
              if (BANK1_R0 != 0) goto LAB_CODE_2f76;
              uEXTMEMcc0c = 199;
              uEXTMEMcc0b = 0;
              do {
                if (((cEXTMEMcc29 == '\0') && (99 < bEXTMEMcc0a)) || ((bEXTMEMcc90 & 1) == 1)) {
                  uVar7 = 0xcc;
                  uEXTMEMcc0c = 99;
                  goto LAB_CODE_2f76;
                }
              } while ((DAT_EXTMEM_cc07 & 1) == 0);
              DAT_EXTMEM_cc00 = 1;
              BANK0_R2 = bVar3;
              FUN_CODE_11d7(DAT_EXTMEM_cc07);
              BANK0_R3 = BANK0_R3 & 0xfe;
              DAT_EXTMEM_c200 = DAT_EXTMEM_c200 & 0xf1 | 3;
              DAT_EXTMEM_d67e = 0;
              DAT_EXTMEM_d67f = 0;
            } while( true );
          }
          if (BANK1_R5 != '\0') goto LAB_CODE_3b47;
          if (BANK1_R6 != '\0') goto LAB_CODE_3be5;
          uVar9 = 0;
          bVar5 = bCODE0048;
          if ((bCODE0048 >> 2 & 1) != 0) {
            uVar9 = 0;
            if ((bCODE0048 >> 5 & 1) != 0) {
              DAT_INTMEM_7d = DAT_EXTMEM_0120;
              DAT_INTMEM_7a = BANK1_R1;
              DAT_INTMEM_7b = BANK1_R2;
              DAT_INTMEM_7c = BANK2_R4;
              uVar9 = 0x10c;
              FUN_CODE_11f9(0x10c);
            }
            BANK0_R2 = bVar3;
            FUN_CODE_0326();
          }
          uVar7 = (undefined1)(uVar9 >> 8);
          BANK0_R2 = bVar3;
          BANK0_R3 = DAT_INTMEM_81 & BANK3_R4;
          if (((bVar5 != BANK3_R4) || (BANK0_R3 = DAT_INTMEM_82 & BANK3_R5, bVar5 != BANK3_R5)) ||
             (BANK2_R3 == '\0')) goto LAB_CODE_3be5;
          param_3 = BANK2_R7 & 0xc0;
          if (param_3 == 0xc0) {
            DAT_INTMEM_7a = BANK1_R1;
            DAT_INTMEM_7b = BANK1_R2;
            DAT_INTMEM_7c = BANK2_R4;
            DAT_INTMEM_7d = BANK2_R7;
            uVar9 = CONCAT11(uVar7,4);
            FUN_CODE_11f9(uVar9);
            BANK0_R2 = bVar3;
            goto LAB_CODE_3479;
          }
        }
        if ((BANK1_R0 == 0) &&
           (uVar7 = 0xd2, param_3 = DAT_EXTMEM_d25c, (DAT_EXTMEM_d25c & 0xf) == 0)) {
          uVar9 = 0xcc21;
          uEXTMEMcc21 = 1;
          BANK0_R2 = bVar3;
        }
        else {
          DAT_INTMEM_7a = BANK1_R1;
          DAT_INTMEM_7b = BANK1_R2;
          DAT_INTMEM_7c = BANK2_R4;
          DAT_INTMEM_7d = 0;
          uVar9 = CONCAT11(uVar7,0xd);
          BANK0_R2 = bVar3;
          FUN_CODE_11f9(uVar9);
          BANK0_R2 = bVar3;
        }
        goto LAB_CODE_3479;
      }
      if (BANK1_R6 != '\0') goto LAB_CODE_3be5;
    }
    bVar2 = BANK0_R4;
    BANK2_R6 = '\0';
    DAT_INTMEM_77 = param_3 & 7;
    bVar5 = bINTMEM7e & 0x60;
    DAT_INTMEM_76 = bINTMEM80;
    DAT_INTMEM_7a = 0x20;
    DAT_INTMEM_7b = 0x19;
    uVar9 = uVar9 & 0xff00;
    BANK0_R2 = bVar3;
    BANK0_R3 = bVar5;
    FUN_CODE_0270(uVar9,param_3 & 0x18);
    BANK0_R5 = bINTMEM7f & 0xf;
    BANK0_R2 = bVar3;
    BANK0_R3 = bVar5;
    BANK0_R4 = bVar2;
    if (BANK0_R5 < 0x10) {
                    /* WARNING: Could not recover jumptable at 0x3531. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ushort)(byte)(cVar4 * '\x03') + 0x3532))();
      return;
    }
  } while( true );
LAB_CODE_2f76:
  DAT_INTMEM_30 = 0xf;
  DAT_INTMEM_31 = 0;
  DAT_INTMEM_32 = 0x40;
  DAT_INTMEM_33 = 0x10;
  DAT_INTMEM_34 = 0;
  DAT_INTMEM_35 = 0x40;
  DAT_INTMEM_2a = 0;
  DAT_INTMEM_2b = 0;
  DAT_INTMEM_2c = 0;
  DAT_INTMEM_2d = 0;
  DAT_INTMEM_2e = 0xc;
  DAT_INTMEM_2f = 0;
  BANK0_R2 = bVar3;
  FUN_CODE_1aa9(CONCAT11(uVar7,9));
  BANK0_R2 = bVar3;
  bVar3 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
  cEXTMEM4fef = 0x11 < bVar3;
  cVar4 = BANK2_R2;
  bVar3 = FUN_CODE_3ed5(CONCAT11(BANK2_R1 - (((0xfd < BANK2_R0) << 7) >> 7),BANK2_R0 + 2),BANK2_R2);
  DAT_EXTMEM_4fae = bVar3 & 0x40;
  if (BANK1_R0 == 0) {
    uEXTMEMd257 = 0x11;
    BANK0_R3 = 0;
    cVar4 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
    if ((cVar4 != '\x10') && (cVar4 != '\x11')) {
      if (cVar4 == '\x12') {
        BANK0_R3 = BANK0_R3 | 0x10;
      }
      else {
        BANK0_R3 = BANK0_R3 | 0x10;
      }
    }
    if ((bEXTMEMc80a & 0xf) == 0) {
      cVar4 = FUN_CODE_3ed5(CONCAT11(BANK2_R1 - (((0xfe < BANK2_R0) << 7) >> 7),BANK2_R0 + 1),
                            BANK2_R2);
      if (cVar4 != '\x06') {
        if (cVar4 == '\n') {
          BANK0_R3 = BANK0_R3 | 1;
        }
        else if (cVar4 == '\x14') {
          BANK0_R3 = BANK0_R3 | 2;
        }
        else {
          BANK0_R3 = BANK0_R3 | 2;
        }
      }
    }
    else {
      BANK0_R3 = BANK0_R3 & 0xf;
      if (bEXTMEMc80a != 1) {
        if (bEXTMEMc80a == 2) {
          BANK0_R3 = BANK0_R3 | 1;
        }
        else if (bEXTMEMc80a == 3) {
          BANK0_R3 = BANK0_R3 | 2;
        }
        else {
          BANK0_R3 = BANK0_R3 | 2;
        }
      }
    }
    if ((bEXTMEMc80a & 0xf0) == 0) {
      cVar4 = FUN_CODE_3ed5(CONCAT11(BANK2_R1 - (((0xfd < BANK2_R0) << 7) >> 7),BANK2_R0 + 2),
                            BANK2_R2);
      BANK0_R3 = BANK0_R3 & 0x1f;
      if (cVar4 != '\x01') {
        if (cVar4 == '\x02') {
          BANK0_R3 = BANK0_R3 | 0x10;
        }
        else if (cVar4 == '\x04') {
          BANK0_R3 = BANK0_R3 | 0x20;
        }
        else {
          BANK0_R3 = BANK0_R3 | 0x20;
        }
      }
    }
    else {
      BANK0_R3 = BANK0_R3 & 0xf0;
      if (bEXTMEMc80a != 0x10) {
        if (bEXTMEMc80a == 0x20) {
          BANK0_R3 = BANK0_R3 | 0x10;
        }
        else if (bEXTMEMc80a == 0x40) {
          BANK0_R3 = BANK0_R3 | 0x20;
        }
        else {
          BANK0_R3 = BANK0_R3 | 0x20;
        }
      }
    }
    cVar4 = BANK2_R1 - (((0xfd < BANK2_R0) << 7) >> 7);
    bVar3 = FUN_CODE_3ed5(CONCAT11(cVar4,BANK2_R0 + 2),BANK2_R2);
    BANK0_R3 = BANK0_R3 & 0xfe | bVar3 & 0xc0;
  }
  bVar3 = BANK0_R2;
  if ((bCODE0048 >> 2 & 1) != 0) {
    DAT_INTMEM_30 = 0xf;
    DAT_INTMEM_31 = 0;
    DAT_INTMEM_32 = 0x40;
    DAT_INTMEM_33 = 0x10;
    DAT_INTMEM_34 = 0;
    DAT_INTMEM_35 = 0x40;
    DAT_INTMEM_2a = 0;
    DAT_INTMEM_2b = 2;
    DAT_INTMEM_2c = 0;
    DAT_INTMEM_2d = 0;
    DAT_INTMEM_2e = 1;
    DAT_INTMEM_2f = 0;
    FUN_CODE_1aa9(9,bCODE0048);
    cVar4 = BANK2_R2;
    bVar5 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
    DAT_EXTMEM_0120 = bVar5 & 0x1f;
    FUN_CODE_0326();
  }
  BANK0_R2 = bVar3;
  if (cEXTMEM4fef != '\0') {
    DAT_INTMEM_30 = 0xf;
    DAT_INTMEM_31 = 0;
    DAT_INTMEM_32 = 0x40;
    DAT_INTMEM_33 = 0x10;
    DAT_INTMEM_34 = 0;
    DAT_INTMEM_35 = 0x40;
    DAT_INTMEM_2a = 0xe;
    DAT_INTMEM_2b = 0;
    DAT_INTMEM_2c = 0;
    DAT_INTMEM_2d = 0;
    DAT_INTMEM_2e = 1;
    DAT_INTMEM_2f = 0;
    FUN_CODE_1aa9(0x4f09,cEXTMEM4fef);
    cVar4 = BANK2_R2;
    if ((bEXTMEMc809 & 1) == 1) {
      BANK0_R2 = bVar3;
      cVar6 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
      BANK0_R3 = BANK0_R3 & 0x7f;
      if (BANK0_R3 < 5) {
                    /* WARNING: Could not recover jumptable at 0x32a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ushort)(byte)(cVar6 * '\x03') + 0x32aa))();
        return;
      }
    }
    else {
      BANK0_R2 = bVar3;
      cVar6 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
      BANK0_R3 = BANK0_R3 & 0x7f;
      if (BANK0_R3 < 5) {
                    /* WARNING: Could not recover jumptable at 0x3333. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ushort)(byte)(cVar6 * '\x03') + 0x3334))();
        return;
      }
    }
  }
LAB_CODE_33b1:
  bVar3 = BANK0_R2;
  uEXTMEM4fd9 = 1;
  DAT_EXTMEM_4fd8 = 4;
  BANK0_R3 = BANK0_R3 & 0xfe;
  uVar9 = 0x4fef;
  if (cEXTMEM4fef == '\0') {
    param_3 = 0;
  }
  else {
    DAT_INTMEM_30 = 0xf;
    DAT_INTMEM_31 = 0;
    DAT_INTMEM_32 = 0x40;
    DAT_INTMEM_33 = 0x10;
    DAT_INTMEM_34 = 0;
    DAT_INTMEM_35 = 0x40;
    DAT_INTMEM_2a = 0x21;
    DAT_INTMEM_2b = 0;
    DAT_INTMEM_2c = 0;
    DAT_INTMEM_2d = 0;
    DAT_INTMEM_2e = 1;
    DAT_INTMEM_2f = 0;
    FUN_CODE_1aa9(0x4f09);
    uVar9 = CONCAT11(BANK2_R1,BANK2_R0);
    cVar4 = BANK2_R2;
    BANK0_R2 = bVar3;
    param_3 = FUN_CODE_3ed5(uVar9,BANK2_R2);
    bVar3 = BANK0_R2;
    BANK0_R2 = bVar3;
    if ((param_3 & 1) != 0) {
      DAT_EXTMEM_4fe7 = '\0';
      uINTMEMd4 = 0;
      DAT_INTMEM_2f = 0xd4;
      DAT_INTMEM_30 = 0xf;
      DAT_INTMEM_31 = 0;
      DAT_INTMEM_32 = 0x40;
      DAT_INTMEM_33 = 0x10;
      DAT_INTMEM_34 = 0;
      DAT_INTMEM_35 = 0x40;
      DAT_INTMEM_2a = 0x11;
      DAT_INTMEM_2b = 1;
      DAT_INTMEM_2c = 0;
      DAT_INTMEM_2d = 0;
      DAT_INTMEM_2e = 1;
      uVar7 = 0x4f;
      FUN_CODE_1aa9(0x4f08);
      uINTMEMd5 = 0;
      uINTMEMd6 = 0;
      uINTMEMd7 = 0x3f;
      DAT_INTMEM_2f = 0xd5;
      DAT_INTMEM_30 = 0xf;
      DAT_INTMEM_31 = 0;
      DAT_INTMEM_32 = 0x40;
      DAT_INTMEM_33 = 0x10;
      DAT_INTMEM_34 = 0;
      DAT_INTMEM_35 = 0x40;
      DAT_INTMEM_2a = 0xc0;
      DAT_INTMEM_2b = 1;
      DAT_INTMEM_2c = 0;
      DAT_INTMEM_2d = 0;
      DAT_INTMEM_2e = 3;
      uVar9 = CONCAT11(uVar7,8);
      FUN_CODE_1aa9(uVar9);
      BANK0_R2 = bVar3;
    }
  }
  if (BANK1_R5 == '\0') goto LAB_CODE_3479;
  goto LAB_CODE_3b47;
}



/* =========================================================
 * CODE:3eb9  thunk_FUN_CODE_2a03  size=3
 * callers: CODE:0203
 * ========================================================= */

void thunk_FUN_CODE_2a03(void)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  undefined1 uVar8;
  ushort uVar9;
  undefined2 uVar10;
  
  DAT_INTMEM_78 = 0;
  DAT_INTMEM_79 = 0;
  uINTMEM8f = 0;
  uINTMEM90 = 0;
  uINTMEM91 = 0;
  uINTMEM92 = 0;
  cVar4 = '\0';
  uEXTMEMc8a0 = 0xe;
  BANK0_R2 = BANK0_R2 & 0xfc | 0x40;
  DAT_INTMEM_7a = 1;
  DAT_INTMEM_7b = 1;
  FUN_CODE_0270(0xc800,0,0,0,0,0,0);
  uEXTMEMd768 = 0;
  uEXTMEMd769 = 0;
  uEXTMEMd76a = 5;
  uEXTMEMcc18 = 6;
LAB_CODE_2a74:
  if ((bEXTMEMd66f >> 4 & 1) != 0) {
    uEXTMEMca10 = 3;
    uEXTMEMca15 = 0x20;
    uEXTMEMca14 = 7;
  }
  if ((bCODE0048 >> 4 & 1) != 0) {
    uEXTMEMd7fc = 1;
    uEXTMEMd7fa = 1;
    uEXTMEMd7f8 = 1;
    uEXTMEMd7f6 = 1;
  }
  do {
    BANK0_R2 = BANK0_R2 & 0xe;
  } while (bEXTMEMc800 == 0xe);
  BANK1_R0 = DAT_EXTMEM_c801 & 0x80;
  if (BANK1_R0 == 0) {
    BANK0_R2 = BANK0_R2 | 0x9b;
    uEXTMEMd21e = 0xff;
  }
  else {
    uEXTMEMcc8e = 0;
  }
  bVar7 = BANK0_R2;
  DAT_EXTMEM_4fe9 = 0;
  BANK1_R1 = 0;
  BANK1_R2 = 0;
  BANK2_R4 = 0;
  BANK1_R5 = '\0';
  BANK1_R6 = '\0';
  BANK2_R3 = '\0';
  BANK2_R7 = 0;
  DAT_EXTMEM_4fe4 = 0;
  BANK2_R5 = '\0';
  BANK2_R6 = '\0';
  BANK3_R0 = '\0';
  bEXTMEM4feb = 0;
  cVar3 = '\0';
  uEXTMEM4fe5 = 0;
  uEXTMEM4fe6 = 0;
  DAT_EXTMEM_4fe7 = 0;
  DAT_EXTMEM_4fae = 0;
  uEXTMEMd766 = 8;
  uEXTMEMd600 = 0;
  uEXTMEMd680 = 0;
  uEXTMEMd700 = 0;
  uEXTMEMd780 = 0;
  if (cCODE004b < '\0') {
    uEXTMEMd677 = 0;
  }
  else {
    uEXTMEMd677 = 0xf;
  }
  if (BANK1_R0 == 0) {
    BANK0_R3 = BANK0_R3 & 0xfc | 4;
    uEXTMEMd254 = 0xff;
    uEXTMEMd255 = 0xff;
  }
  else if ((bEXTMEMc84b >> 3 & 1) == 1) {
    BANK0_R3 = BANK0_R3 | 4;
  }
  else {
    BANK0_R3 = BANK0_R3 & 0xfa;
  }
  uEXTMEMcc92 = 8;
  BANK3_R1 = uEXTMEMcc8e;
  uEXTMEMcc96 = 1;
  BANK0_R3 = BANK0_R3 & 0xfe;
  FUN_CODE_1da2(5);
  DAT_EXTMEM_4fea = DAT_EXTMEM_c801 & 0x3f;
  if (DAT_EXTMEM_4fea == 8) {
    for (bEXTMEM4ff0 = 0; bEXTMEM4ff0 < 2; bEXTMEM4ff0 = bEXTMEM4ff0 + 1) {
    }
    BANK0_R3 = BANK0_R3 & 0xfd;
    DAT_INTMEM_7a = 0x10;
    DAT_INTMEM_7b = 0x1c;
    BANK0_R2 = bVar7;
    FUN_CODE_0270(0xd600);
    do {
    } while ((bEXTMEMd67c >> 2 & 1) == 0);
  }
  while ((((DAT_EXTMEM_c848 >> 2 & 1) != 0 &&
          (uVar9 = 0xcc93, bVar6 = DAT_EXTMEM_c848, DAT_EXTMEM_cc93 == '\0')) ||
         (uVar9 = 0xc808, bVar6 = DAT_EXTMEM_c808, (DAT_EXTMEM_c808 & 1) != 0))) {
    DAT_INTMEM_7a = 0x20;
    DAT_INTMEM_7b = 0x20;
    BANK0_R2 = bVar7;
    FUN_CODE_0270(uVar9 & 0xff00,bVar6);
  }
  do {
  } while ((DAT_EXTMEM_cc07 & 1) == 1);
  do {
  } while ((bEXTMEMc82f & 1) == 0);
  BANK0_R3 = BANK0_R3 | 3;
  if ((bEXTMEMc800 >> 4 & 1) != 0) {
    BANK0_R2 = bVar7;
    FUN_CODE_1da2(0x1c2,bEXTMEMc800);
  }
  if ((bEXTMEMc800 & 1) == 1) {
    if (cEXTMEMd66e == '\x01') {
      bEXTMEMc890 = 1;
      uEXTMEMc891 = 0xc;
      uEXTMEMd449 = 2;
      uEXTMEMd766 = 0;
      DAT_EXTMEM_d672 = 0;
      BANK0_R3 = BANK0_R3 & 3;
    }
    else if (cEXTMEMd66e == '\x02') {
      DAT_EXTMEM_d672 = 0xf;
      BANK0_R3 = BANK0_R3 & 2;
    }
    else {
      DAT_EXTMEM_d672 = 0xf;
      BANK0_R3 = BANK0_R3 & 3;
    }
    BANK0_R2 = bVar7;
    for (bEXTMEM4ff0 = 0; bEXTMEM4ff0 < 4; bEXTMEM4ff0 = bEXTMEM4ff0 + 1) {
      DAT_INTMEM_7b = bEXTMEM4ff0;
      DAT_INTMEM_7a = 0;
      FUN_CODE_0e94(0x4f00);
    }
    uEXTMEMca5a = 0;
    BANK0_R3 = BANK0_R3 | 1;
    uEXTMEMd767 = 0x3f;
    BANK1_R1 = 4;
    do {
      if (bEXTMEMc890 != 0) {
        DAT_INTMEM_7a = 0x20;
        DAT_INTMEM_7b = 4;
        FUN_CODE_0270(0xc800);
        do {
        } while( true );
      }
      DAT_INTMEM_7a = 1;
      DAT_INTMEM_7b = 2;
      FUN_CODE_0270(0xc800);
      uEXTMEMd446 = 0xc4;
      uEXTMEMd447 = 0;
      uEXTMEMd453 = 0x3a;
      uEXTMEMd47d = 0x3a;
      uEXTMEMd454 = 0x54;
      uEXTMEMd47e = 0x54;
      FUN_CODE_0478();
      while (FUN_CODE_0aba(), (DAT_EXTMEM_c802 & 1) == 0) {
        if ((DAT_EXTMEM_cc07 & 1) != 0) {
          FUN_CODE_0e61(DAT_EXTMEM_cc07);
          goto LAB_CODE_2a74;
        }
      }
      FUN_CODE_0f3d(DAT_EXTMEM_c802);
      FUN_CODE_1010();
      FUN_CODE_1da2(0xf);
      BANK0_R3 = BANK0_R3 & 0xdd;
      DAT_EXTMEM_cc00 = 0;
      FUN_CODE_1043();
      uEXTMEMce51 = 0;
      DAT_INTMEM_7a = 1;
      DAT_INTMEM_7b = 3;
      bVar7 = FUN_CODE_0270(0xce00);
      while( true ) {
        FUN_CODE_0aba(bVar7);
        while (DAT_EXTMEM_cc93 == '\x01') {
          DAT_INTMEM_7a = 0x20;
          DAT_INTMEM_7b = 0x21;
          FUN_CODE_0270(0xcc00);
        }
        if (((((DAT_EXTMEM_c802 & 1) != 1) && ((bEXTMEMc890 & 1) == 0)) ||
            (-1 < (char)DAT_EXTMEM_d77f)) && ((bEXTMEMc890 & 1) != 1)) break;
        DAT_EXTMEM_4fea = DAT_EXTMEM_cc07;
        if ((DAT_EXTMEM_cc07 & 1) != 0) {
          FUN_CODE_0e61(DAT_EXTMEM_cc07);
          goto LAB_CODE_2a74;
        }
        bVar7 = DAT_EXTMEM_cc07;
        if ((DAT_EXTMEM_cc07 >> 2 & 1) != 0) {
          bINTMEM7f = BANK0_R3;
          bINTMEM80 = BANK0_R3;
          bVar7 = bEXTMEMcc37;
        }
      }
      FUN_CODE_0e61(bEXTMEMc890);
    } while( true );
  }
  uEXTMEMca5a = 0;
  DAT_INTMEM_7a = 1;
  DAT_INTMEM_7b = 5;
  BANK0_R2 = bVar7;
  FUN_CODE_0270(0xca00,bEXTMEMc800);
  cEXTMEM4fef = '\0';
  uVar8 = 200;
  BANK0_R2 = bVar7;
  if (((DAT_EXTMEM_c848 >> 4 & 1) == 1) &&
     ((bVar6 = DAT_EXTMEM_c848, BANK1_R0 != 0 ||
      (uVar8 = 0xd2, bVar6 = DAT_EXTMEM_d252, (DAT_EXTMEM_d252 >> 5 & 1) == 0)))) {
    DAT_INTMEM_ee = 1;
    DAT_INTMEM_2f = 0xee;
    DAT_INTMEM_30 = 0xf;
    DAT_INTMEM_31 = 0;
    DAT_INTMEM_32 = 0x40;
    DAT_INTMEM_33 = 0x10;
    DAT_INTMEM_34 = 0;
    DAT_INTMEM_35 = 0x40;
    DAT_INTMEM_2a = 0;
    DAT_INTMEM_2b = 6;
    DAT_INTMEM_2c = 0;
    DAT_INTMEM_2d = 0;
    DAT_INTMEM_2e = 1;
    uVar10 = CONCAT11(uVar8,8);
    FUN_CODE_1aa9(uVar10,bVar6);
    uVar8 = (undefined1)((ushort)uVar10 >> 8);
    if (BANK1_R0 == 0) {
      uEXTMEMcc0c = 199;
      uEXTMEMcc0b = 0;
      do {
        if (((cEXTMEMcc29 == '\0') && (99 < bEXTMEMcc0a)) || ((bEXTMEMcc90 & 1) == 1)) {
          uVar8 = 0xcc;
          uEXTMEMcc0c = 99;
          goto LAB_CODE_2f76;
        }
      } while ((DAT_EXTMEM_cc07 & 1) == 0);
      DAT_EXTMEM_cc00 = 1;
      BANK0_R2 = bVar7;
      FUN_CODE_11d7(DAT_EXTMEM_cc07);
      BANK0_R3 = BANK0_R3 & 0xfe;
      DAT_EXTMEM_c200 = DAT_EXTMEM_c200 & 0xf1 | 3;
      DAT_EXTMEM_d67e = 0;
      DAT_EXTMEM_d67f = 0;
      goto LAB_CODE_2a74;
    }
LAB_CODE_2f76:
    DAT_INTMEM_30 = 0xf;
    DAT_INTMEM_31 = 0;
    DAT_INTMEM_32 = 0x40;
    DAT_INTMEM_33 = 0x10;
    DAT_INTMEM_34 = 0;
    DAT_INTMEM_35 = 0x40;
    DAT_INTMEM_2a = 0;
    DAT_INTMEM_2b = 0;
    DAT_INTMEM_2c = 0;
    DAT_INTMEM_2d = 0;
    DAT_INTMEM_2e = 0xc;
    DAT_INTMEM_2f = 0;
    BANK0_R2 = bVar7;
    FUN_CODE_1aa9(CONCAT11(uVar8,9));
    BANK0_R2 = bVar7;
    bVar7 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
    cEXTMEM4fef = 0x11 < bVar7;
    cVar4 = BANK2_R2;
    bVar7 = FUN_CODE_3ed5(CONCAT11(BANK2_R1 - (((0xfd < BANK2_R0) << 7) >> 7),BANK2_R0 + 2),BANK2_R2
                         );
    DAT_EXTMEM_4fae = bVar7 & 0x40;
    if (BANK1_R0 == 0) {
      uEXTMEMd257 = 0x11;
      BANK0_R3 = 0;
      cVar4 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
      if ((cVar4 != '\x10') && (cVar4 != '\x11')) {
        if (cVar4 == '\x12') {
          BANK0_R3 = BANK0_R3 | 0x10;
        }
        else {
          BANK0_R3 = BANK0_R3 | 0x10;
        }
      }
      if ((bEXTMEMc80a & 0xf) == 0) {
        cVar4 = FUN_CODE_3ed5(CONCAT11(BANK2_R1 - (((0xfe < BANK2_R0) << 7) >> 7),BANK2_R0 + 1),
                              BANK2_R2);
        if (cVar4 != '\x06') {
          if (cVar4 == '\n') {
            BANK0_R3 = BANK0_R3 | 1;
          }
          else if (cVar4 == '\x14') {
            BANK0_R3 = BANK0_R3 | 2;
          }
          else {
            BANK0_R3 = BANK0_R3 | 2;
          }
        }
      }
      else {
        BANK0_R3 = BANK0_R3 & 0xf;
        if (bEXTMEMc80a != 1) {
          if (bEXTMEMc80a == 2) {
            BANK0_R3 = BANK0_R3 | 1;
          }
          else if (bEXTMEMc80a == 3) {
            BANK0_R3 = BANK0_R3 | 2;
          }
          else {
            BANK0_R3 = BANK0_R3 | 2;
          }
        }
      }
      if ((bEXTMEMc80a & 0xf0) == 0) {
        cVar4 = FUN_CODE_3ed5(CONCAT11(BANK2_R1 - (((0xfd < BANK2_R0) << 7) >> 7),BANK2_R0 + 2),
                              BANK2_R2);
        BANK0_R3 = BANK0_R3 & 0x1f;
        if (cVar4 != '\x01') {
          if (cVar4 == '\x02') {
            BANK0_R3 = BANK0_R3 | 0x10;
          }
          else if (cVar4 == '\x04') {
            BANK0_R3 = BANK0_R3 | 0x20;
          }
          else {
            BANK0_R3 = BANK0_R3 | 0x20;
          }
        }
      }
      else {
        BANK0_R3 = BANK0_R3 & 0xf0;
        if (bEXTMEMc80a != 0x10) {
          if (bEXTMEMc80a == 0x20) {
            BANK0_R3 = BANK0_R3 | 0x10;
          }
          else if (bEXTMEMc80a == 0x40) {
            BANK0_R3 = BANK0_R3 | 0x20;
          }
          else {
            BANK0_R3 = BANK0_R3 | 0x20;
          }
        }
      }
      cVar4 = BANK2_R1 - (((0xfd < BANK2_R0) << 7) >> 7);
      bVar7 = FUN_CODE_3ed5(CONCAT11(cVar4,BANK2_R0 + 2),BANK2_R2);
      BANK0_R3 = BANK0_R3 & 0xfe | bVar7 & 0xc0;
    }
    bVar7 = BANK0_R2;
    if ((bCODE0048 >> 2 & 1) != 0) {
      DAT_INTMEM_30 = 0xf;
      DAT_INTMEM_31 = 0;
      DAT_INTMEM_32 = 0x40;
      DAT_INTMEM_33 = 0x10;
      DAT_INTMEM_34 = 0;
      DAT_INTMEM_35 = 0x40;
      DAT_INTMEM_2a = 0;
      DAT_INTMEM_2b = 2;
      DAT_INTMEM_2c = 0;
      DAT_INTMEM_2d = 0;
      DAT_INTMEM_2e = 1;
      DAT_INTMEM_2f = 0;
      FUN_CODE_1aa9(9,bCODE0048);
      cVar4 = BANK2_R2;
      bVar6 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
      DAT_EXTMEM_0120 = bVar6 & 0x1f;
      FUN_CODE_0326();
    }
    BANK0_R2 = bVar7;
    if (cEXTMEM4fef != '\0') {
      DAT_INTMEM_30 = 0xf;
      DAT_INTMEM_31 = 0;
      DAT_INTMEM_32 = 0x40;
      DAT_INTMEM_33 = 0x10;
      DAT_INTMEM_34 = 0;
      DAT_INTMEM_35 = 0x40;
      DAT_INTMEM_2a = 0xe;
      DAT_INTMEM_2b = 0;
      DAT_INTMEM_2c = 0;
      DAT_INTMEM_2d = 0;
      DAT_INTMEM_2e = 1;
      DAT_INTMEM_2f = 0;
      FUN_CODE_1aa9(0x4f09,cEXTMEM4fef);
      cVar4 = BANK2_R2;
      if ((bEXTMEMc809 & 1) == 1) {
        BANK0_R2 = bVar7;
        cVar5 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
        BANK0_R3 = BANK0_R3 & 0x7f;
        if (BANK0_R3 < 5) {
                    /* WARNING: Could not recover jumptable at 0x32a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ushort)(byte)(cVar5 * '\x03') + 0x32aa))();
          return;
        }
      }
      else {
        BANK0_R2 = bVar7;
        cVar5 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
        BANK0_R3 = BANK0_R3 & 0x7f;
        if (BANK0_R3 < 5) {
                    /* WARNING: Could not recover jumptable at 0x3333. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ushort)(byte)(cVar5 * '\x03') + 0x3334))();
          return;
        }
      }
    }
  }
  bVar7 = BANK0_R2;
  uEXTMEM4fd9 = 1;
  DAT_EXTMEM_4fd8 = 4;
  BANK0_R3 = BANK0_R3 & 0xfe;
  uVar9 = 0x4fef;
  if (cEXTMEM4fef == '\0') {
    bVar7 = 0;
  }
  else {
    DAT_INTMEM_30 = 0xf;
    DAT_INTMEM_31 = 0;
    DAT_INTMEM_32 = 0x40;
    DAT_INTMEM_33 = 0x10;
    DAT_INTMEM_34 = 0;
    DAT_INTMEM_35 = 0x40;
    DAT_INTMEM_2a = 0x21;
    DAT_INTMEM_2b = 0;
    DAT_INTMEM_2c = 0;
    DAT_INTMEM_2d = 0;
    DAT_INTMEM_2e = 1;
    DAT_INTMEM_2f = 0;
    FUN_CODE_1aa9(0x4f09);
    uVar9 = CONCAT11(BANK2_R1,BANK2_R0);
    cVar4 = BANK2_R2;
    BANK0_R2 = bVar7;
    bVar7 = FUN_CODE_3ed5(uVar9,BANK2_R2);
    bVar6 = BANK0_R2;
    BANK0_R2 = bVar6;
    if ((bVar7 & 1) != 0) {
      DAT_EXTMEM_4fe7 = 0;
      uINTMEMd4 = 0;
      DAT_INTMEM_2f = 0xd4;
      DAT_INTMEM_30 = 0xf;
      DAT_INTMEM_31 = 0;
      DAT_INTMEM_32 = 0x40;
      DAT_INTMEM_33 = 0x10;
      DAT_INTMEM_34 = 0;
      DAT_INTMEM_35 = 0x40;
      DAT_INTMEM_2a = 0x11;
      DAT_INTMEM_2b = 1;
      DAT_INTMEM_2c = 0;
      DAT_INTMEM_2d = 0;
      DAT_INTMEM_2e = 1;
      uVar8 = 0x4f;
      FUN_CODE_1aa9(0x4f08);
      uINTMEMd5 = 0;
      uINTMEMd6 = 0;
      uINTMEMd7 = 0x3f;
      DAT_INTMEM_2f = 0xd5;
      DAT_INTMEM_30 = 0xf;
      DAT_INTMEM_31 = 0;
      DAT_INTMEM_32 = 0x40;
      DAT_INTMEM_33 = 0x10;
      DAT_INTMEM_34 = 0;
      DAT_INTMEM_35 = 0x40;
      DAT_INTMEM_2a = 0xc0;
      DAT_INTMEM_2b = 1;
      DAT_INTMEM_2c = 0;
      DAT_INTMEM_2d = 0;
      DAT_INTMEM_2e = 3;
      uVar9 = CONCAT11(uVar8,8);
      FUN_CODE_1aa9(uVar9);
      BANK0_R2 = bVar6;
    }
  }
  if (BANK1_R5 == '\0') goto LAB_CODE_3479;
LAB_CODE_3b47:
  bVar6 = BANK0_R2;
  DAT_INTMEM_7a = 0x20;
  DAT_INTMEM_7b = 0xb;
  uVar9 = uVar9 & 0xff00;
  FUN_CODE_0270(uVar9);
  uVar8 = (undefined1)(uVar9 >> 8);
  BANK1_R5 = '\0';
  if (((BANK3_R0 != '\0') || (uVar8 = 0x4f, bVar7 = bEXTMEM4feb, bEXTMEM4feb != 0)) ||
     ((uVar8 = 0xcc, cEXTMEMcc8d != '\0' || (cVar3 == '\0')))) goto LAB_CODE_3e82;
  uVar9 = 0xcc02;
  BANK0_R2 = bVar6;
  FUN_CODE_1f0b();
  bVar7 = (byte)uVar9;
  BANK0_R2 = bVar6;
  if (bVar7 != 1) goto LAB_CODE_3b8c;
  goto LAB_CODE_2a74;
LAB_CODE_3b8c:
  if (BANK1_R5 == '\0') {
    if (BANK1_R6 != '\0') goto LAB_CODE_3be5;
    uVar9 = 0;
    bVar7 = bCODE0048;
    if ((bCODE0048 >> 2 & 1) != 0) {
      uVar9 = 0;
      if ((bCODE0048 >> 5 & 1) != 0) {
        DAT_INTMEM_7d = DAT_EXTMEM_0120;
        DAT_INTMEM_7a = BANK1_R1;
        DAT_INTMEM_7b = BANK1_R2;
        DAT_INTMEM_7c = BANK2_R4;
        uVar9 = 0x10c;
        FUN_CODE_11f9(0x10c);
      }
      BANK0_R2 = bVar6;
      FUN_CODE_0326();
    }
    uVar8 = (undefined1)(uVar9 >> 8);
    BANK0_R3 = DAT_INTMEM_81 & BANK3_R4;
    BANK0_R2 = bVar6;
    if (bVar7 != BANK3_R4) goto LAB_CODE_3be5;
    BANK0_R3 = DAT_INTMEM_82 & BANK3_R5;
    if (bVar7 != BANK3_R5) goto LAB_CODE_3be5;
    if (BANK2_R3 == '\0') goto LAB_CODE_3be5;
    bVar7 = BANK2_R7 & 0xc0;
    if (bVar7 == 0xc0) {
      DAT_INTMEM_7a = BANK1_R1;
      DAT_INTMEM_7b = BANK1_R2;
      DAT_INTMEM_7c = BANK2_R4;
      DAT_INTMEM_7d = BANK2_R7;
      uVar9 = CONCAT11(uVar8,4);
      FUN_CODE_11f9(uVar9);
      BANK0_R2 = bVar6;
    }
    else {
LAB_CODE_3e82:
      if ((BANK1_R0 == 0) && (uVar8 = 0xd2, bVar7 = DAT_EXTMEM_d25c, (DAT_EXTMEM_d25c & 0xf) == 0))
      {
        uVar9 = 0xcc21;
        uEXTMEMcc21 = 1;
        BANK0_R2 = bVar6;
      }
      else {
        DAT_INTMEM_7a = BANK1_R1;
        DAT_INTMEM_7b = BANK1_R2;
        DAT_INTMEM_7c = BANK2_R4;
        DAT_INTMEM_7d = 0;
        uVar9 = CONCAT11(uVar8,0xd);
        BANK0_R2 = bVar6;
        FUN_CODE_11f9(uVar9);
        BANK0_R2 = bVar6;
      }
    }
LAB_CODE_3479:
    do {
      while (bVar6 = BANK0_R2, BANK2_R6 != '\0') {
LAB_CODE_34eb:
        uVar8 = BANK0_R4;
        BANK2_R6 = '\0';
        DAT_INTMEM_77 = bVar7 & 7;
        bVar1 = bINTMEM7e & 0x60;
        DAT_INTMEM_76 = bINTMEM80;
        DAT_INTMEM_7a = 0x20;
        DAT_INTMEM_7b = 0x19;
        uVar9 = uVar9 & 0xff00;
        BANK0_R2 = bVar6;
        BANK0_R3 = bVar1;
        FUN_CODE_0270(uVar9,bVar7 & 0x18);
        BANK0_R5 = bINTMEM7f & 0xf;
        BANK0_R2 = bVar6;
        BANK0_R3 = bVar1;
        BANK0_R4 = uVar8;
        if (BANK0_R5 < 0x10) {
                    /* WARNING: Could not recover jumptable at 0x3531. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ushort)(byte)(cVar4 * '\x03') + 0x3532))();
          return;
        }
      }
      DAT_INTMEM_7a = 0x20;
      DAT_INTMEM_7b = 6;
      FUN_CODE_0270(uVar9 & 0xff00);
      uEXTMEMcc2d = 0xfe;
      do {
        BANK3_R7 = 0xec;
        DAT_INTMEM_20 = 0x4f;
        DAT_INTMEM_21 = 0;
        DAT_INTMEM_22 = 0x72;
        DAT_INTMEM_23 = 0;
        DAT_INTMEM_24 = 0x40;
        DAT_INTMEM_25 = 0x73;
        DAT_INTMEM_26 = 0;
        DAT_INTMEM_27 = 0x40;
        BANK3_R6 = 0;
        bVar7 = 0x26;
        BANK0_R2 = bVar6;
        FUN_CODE_17f4();
        uVar9 = 0x4fea;
        DAT_EXTMEM_4fea = bVar7;
        if (bVar7 == 0) {
          BANK0_R2 = bVar6;
          if (BANK1_R5 != '\0') goto LAB_CODE_3b47;
          if (BANK1_R6 == '\0') goto LAB_CODE_34eb;
          break;
        }
        uVar9 = 0x4fea;
        BANK0_R2 = bVar6;
        if (bVar7 == 1) goto LAB_CODE_2a74;
        if (BANK1_R5 != '\0') goto LAB_CODE_3b47;
      } while (BANK1_R6 == '\0');
LAB_CODE_3be5:
      bVar7 = BANK0_R2;
      DAT_INTMEM_7a = 1;
      DAT_INTMEM_7b = 0xc;
      FUN_CODE_0270(uVar9 & 0xff00);
      BANK0_R3 = BANK0_R3 & 0xfc;
      uVar8 = 0x4f;
      bVar6 = DAT_EXTMEM_4fbf;
      if ((DAT_EXTMEM_4fbf == 1) && (uVar8 = 0, bVar6 = bCODE0049, (bCODE0049 >> 1 & 1) != 0)) {
        BANK0_R3 = BANK0_R3 | 1;
        DAT_EXTMEM_d67e = 0;
        uVar8 = 0xd6;
        DAT_EXTMEM_d67f = 0;
        bVar6 = DAT_EXTMEM_d77f;
      }
      BANK0_R2 = bVar7;
      if (BANK1_R6 != '\0') {
        DAT_INTMEM_30 = 0xf;
        DAT_INTMEM_31 = 0;
        DAT_INTMEM_32 = 0x40;
        DAT_INTMEM_33 = 0x10;
        DAT_INTMEM_34 = 0;
        DAT_INTMEM_35 = 0x40;
        DAT_INTMEM_2a = 0x21;
        DAT_INTMEM_2b = 0;
        DAT_INTMEM_2c = 0;
        DAT_INTMEM_2d = 0;
        DAT_INTMEM_2e = 1;
        DAT_INTMEM_2f = 0;
        FUN_CODE_1aa9(CONCAT11(uVar8,9),bVar6);
        cVar4 = BANK2_R2;
        BANK0_R2 = bVar7;
        bVar6 = FUN_CODE_3ed5(CONCAT11(BANK2_R1,BANK2_R0),BANK2_R2);
        bVar7 = BANK0_R2;
        BANK0_R2 = bVar7;
        if ((bVar6 & 1) != 0) {
          DAT_EXTMEM_4fe7 = 0;
          uINTMEMd4 = 0;
          DAT_INTMEM_2f = 0xd4;
          DAT_INTMEM_30 = 0xf;
          DAT_INTMEM_31 = 0;
          DAT_INTMEM_32 = 0x40;
          DAT_INTMEM_33 = 0x10;
          DAT_INTMEM_34 = 0;
          DAT_INTMEM_35 = 0x40;
          DAT_INTMEM_2a = 0x11;
          DAT_INTMEM_2b = 1;
          DAT_INTMEM_2c = 0;
          DAT_INTMEM_2d = 0;
          DAT_INTMEM_2e = 1;
          uVar8 = 0x4f;
          FUN_CODE_1aa9(0x4f08,bVar6);
          uINTMEMd5 = 0;
          uINTMEMd6 = 0;
          uINTMEMd7 = 0x3f;
          DAT_INTMEM_2f = 0xd5;
          DAT_INTMEM_30 = 0xf;
          DAT_INTMEM_31 = 0;
          DAT_INTMEM_32 = 0x40;
          DAT_INTMEM_33 = 0x10;
          DAT_INTMEM_34 = 0;
          DAT_INTMEM_35 = 0x40;
          DAT_INTMEM_2a = 0xc0;
          DAT_INTMEM_2b = 1;
          DAT_INTMEM_2c = 0;
          DAT_INTMEM_2d = 0;
          DAT_INTMEM_2e = 3;
          FUN_CODE_1aa9(CONCAT11(uVar8,8));
          BANK0_R2 = bVar7;
        }
      }
      BANK1_R6 = '\0';
      uEXTMEM4fe6 = 0;
      DAT_EXTMEM_cc00 = 1;
      DAT_EXTMEM_c200 = DAT_EXTMEM_c200 & 0xf1 | 3;
      if ((bCODE0048 >> 1 & 1) == 1) {
        bVar7 = bEXTMEM4feb != 1;
        bVar2 = DAT_EXTMEM_4fbf != 1;
        if (bVar2 && (bool)bVar7) {
          DAT_INTMEM_7a = BANK1_R1;
          DAT_INTMEM_7b = BANK1_R2;
          DAT_INTMEM_7c = BANK2_R4;
          DAT_INTMEM_7d = BANK2_R7;
          uVar9 = 0x4f03;
          FUN_CODE_11f9(0x4f03);
        }
        else {
          DAT_EXTMEM_4fbf = 0;
          if ((BANK2_R5 != '\0') || (uVar9 = 0x4fe4, bVar7 = DAT_EXTMEM_4fe4, DAT_EXTMEM_4fe4 != 0))
          {
            do {
              bVar7 = DAT_EXTMEM_ca40;
              if ((DAT_EXTMEM_ca40 >> 1 & 1) == 1) break;
              bVar7 = bEXTMEMcb40;
            } while ((bEXTMEMcb40 & 6) != 0);
            uEXTMEMca0c = 1;
            DAT_INTMEM_30 = 0xf;
            DAT_INTMEM_31 = 0;
            DAT_INTMEM_32 = 0x40;
            DAT_INTMEM_33 = 0x10;
            DAT_INTMEM_34 = 0;
            DAT_INTMEM_35 = 0x40;
            DAT_INTMEM_2a = 2;
            DAT_INTMEM_2b = 1;
            DAT_INTMEM_2c = 0;
            DAT_INTMEM_2d = 0;
            DAT_INTMEM_2e = 1;
            DAT_INTMEM_2f = 0x8f;
            FUN_CODE_1aa9(0xca08,bVar7,bVar2);
            uEXTMEMce51 = 0x10;
            FUN_CODE_11d7();
            BANK0_R3 = BANK0_R3 & 0xfe;
            BANK2_R5 = '\0';
            uVar9 = 0x4fe4;
            DAT_EXTMEM_4fe4 = 0;
            bVar7 = DAT_EXTMEM_d76d;
          }
        }
      }
      else if (cVar3 == '\0') {
        if ((BANK2_R5 != '\0') || (uVar9 = 0x4fe4, bVar7 = DAT_EXTMEM_4fe4, DAT_EXTMEM_4fe4 != 0)) {
          do {
            bVar7 = DAT_EXTMEM_ca40;
            if ((DAT_EXTMEM_ca40 >> 1 & 1) == 1) break;
            bVar7 = bEXTMEMcb40;
          } while ((bEXTMEMcb40 & 6) != 0);
          uEXTMEMca0c = 1;
          DAT_INTMEM_30 = 0xf;
          DAT_INTMEM_31 = 0;
          DAT_INTMEM_32 = 0x40;
          DAT_INTMEM_33 = 0x10;
          DAT_INTMEM_34 = 0;
          DAT_INTMEM_35 = 0x40;
          DAT_INTMEM_2a = 2;
          DAT_INTMEM_2b = 1;
          DAT_INTMEM_2c = 0;
          DAT_INTMEM_2d = 0;
          DAT_INTMEM_2e = 1;
          DAT_INTMEM_2f = 0x8f;
          FUN_CODE_1aa9(0xca08,bVar7);
          uEXTMEMce51 = 0x10;
          FUN_CODE_11d7();
          BANK0_R3 = BANK0_R3 & 0xfe;
          BANK2_R5 = '\0';
          uVar9 = 0x4fe4;
          DAT_EXTMEM_4fe4 = 0;
          bVar7 = DAT_EXTMEM_d76d;
        }
      }
      else {
        while (bEXTMEM4fb1 != 0) {
          DAT_INTMEM_7a = 0x20;
          DAT_INTMEM_7b = 0x28;
          FUN_CODE_0270(0x4f00);
        }
        DAT_INTMEM_7a = BANK1_R1;
        DAT_INTMEM_7b = BANK1_R2;
        DAT_INTMEM_7c = BANK2_R4;
        DAT_INTMEM_7d = BANK2_R7;
        uVar9 = 0x4f03;
        bVar7 = bEXTMEM4fb1;
        FUN_CODE_11f9(0x4f03);
      }
      cVar3 = '\0';
    } while( true );
  }
  goto LAB_CODE_3b47;
}



/* =========================================================
 * CODE:3ebc  FUN_CODE_3ebc  size=22
 * callers: CODE:29ee, CODE:290d, CODE:18c4, CODE:1b72, CODE:02f1, CODE:2458
 * ========================================================= */

void FUN_CODE_3ebc(undefined1 param_1,undefined1 *param_2,byte param_3)

{
  if (-1 < (char)param_3) {
    if ((param_3 >> 6 & 1) == 0) {
      *param_2 = param_1;
      return;
    }
    if ((param_3 >> 5 & 1) == 1) {
      *(undefined1 *)((ushort)param_2 & 0xff) = param_1;
    }
    else {
      *(undefined1 *)param_2 = param_1;
    }
  }
  return;
}



/* =========================================================
 * CODE:3ed0  FUN_CODE_3ed0  size=3
 * ========================================================= */

void FUN_CODE_3ed0(undefined1 param_1,byte param_2)

{
  *(undefined1 *)(ushort)param_2 = param_1;
  return;
}



/* =========================================================
 * CODE:3ed5  FUN_CODE_3ed5  size=23
 * callers: CODE:1b72, CODE:1fe0, CODE:2a03, CODE:02f1, CODE:395b
 * ========================================================= */

undefined1 FUN_CODE_3ed5(undefined1 *param_1,byte param_2)

{
  undefined1 uVar1;
  
  if ((char)param_2 < '\0') {
    return *param_1;
  }
  if ((param_2 >> 6 & 1) != 0) {
    if ((param_2 >> 5 & 1) == 1) {
      uVar1 = *(undefined1 *)((ushort)param_1 & 0xff);
    }
    else {
      uVar1 = *(undefined1 *)param_1;
    }
    return uVar1;
  }
  return *param_1;
}



/* =========================================================
 * CODE:3ee9  FUN_CODE_3ee9  size=3
 * ========================================================= */

undefined1 FUN_CODE_3ee9(byte param_1)

{
  return *(undefined1 *)(ushort)param_1;
}



/* =========================================================
 * CODE:3eef  FUN_CODE_3eef  size=2
 * ========================================================= */

undefined1 FUN_CODE_3eef(undefined1 *param_1)

{
  return *param_1;
}



/* =========================================================
 * CODE:3ef1  FUN_CODE_3ef1  size=4
 * callers: CODE:0208
 * ========================================================= */

void FUN_CODE_3ef1(void)

{
  return;
}



/* total functions=146 decompiled=146 */
