/* Decompiled 8051 firmware image: lc_u_code.bin */
/* language 8051:BE:16:default */
/* NOTE: named registers are INFERRED from access patterns; the address is authoritative. */

/* =========================================================
 * CODE:0000  thunk_FUN_CODE_011b  size=3
 * ========================================================= */

/* WARNING: Removing unreachable block (CODE,0x012f) */
/* WARNING: Removing unreachable block (CODE,0x0139) */
/* WARNING: Removing unreachable block (CODE,0x0141) */
/* WARNING: Removing unreachable block (CODE,0x0143) */
/* WARNING: Removing unreachable block (CODE,0x0145) */
/* WARNING: Removing unreachable block (CODE,0x0147) */

void thunk_FUN_CODE_011b(char param_1)

{
  SP = 0x6d;
  FUN_CODE_684a();
  if (param_1 == '\0') {
    DAT_INTMEM_2e = 10;
    DAT_INTMEM_2f = 0;
    DAT_INTMEM_30 = 0;
    DAT_INTMEM_31 = 0;
    DAT_INTMEM_32 = 0;
    _0_0 = bEXTMEMf0a4 >> 2 & 1;
    _0_1 = 0;
    _0_2 = 0;
    _0_3 = 0;
    _0_4 = 0;
    _0_5 = 0;
    _0_6 = 0;
    _0_7 = 0;
    _1_0 = 0;
    _1_1 = 0;
    _1_2 = 0;
    _1_3 = 0;
    _1_4 = 0;
    _1_5 = 0;
    _1_6 = 0;
    _1_7 = 0;
    _2_0 = 0;
    _2_1 = 0;
    _2_2 = 0;
    _2_3 = 0;
    _2_4 = 0;
    _2_5 = 0;
    _2_6 = 0;
    _2_7 = 0;
    _3_0 = 0;
    _3_1 = 0;
    _3_2 = 0;
    _3_3 = 0;
    _3_4 = 0;
    _3_5 = 0;
    _3_6 = 0;
    _3_7 = 0;
    _4_0 = 0;
    _4_1 = 0;
    _4_2 = 0;
    _4_3 = 0;
    _4_4 = 0;
    _4_5 = 0;
    _4_6 = 1;
    _4_7 = 0;
    _5_0 = 0;
    _5_1 = 0;
    _5_2 = 0;
    _5_3 = 0;
    _5_4 = 0;
    _5_5 = 0;
    _5_6 = 0;
    _5_7 = 0;
    _6_0 = 0;
    _6_1 = 0;
    _6_2 = 0;
    _6_3 = 0;
    _6_4 = 0;
    _6_5 = 0;
    _6_6 = bEXTMEMf0ac >> 4 & 1;
    _6_7 = bEXTMEMf0ae >> 3 & 1;
    _7_0 = bEXTMEMf12f >> 4 & 1;
    _7_1 = 0;
    _7_2 = 0;
    _7_3 = 0;
    _7_4 = 0;
    _7_5 = 0;
    uEXTMEMf08c = 0x31;
  }
  FUN_CODE_02e9();
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* =========================================================
 * CODE:0003  thunk_FUN_CODE_01fa  size=3
 * ========================================================= */

undefined1 thunk_FUN_CODE_01fa(undefined1 param_1)

{
  if ((bEXTMEMf0de & 1) != 0) {
    if (cEXTMEMf0a5 < '\0') {
      cEXTMEMebdd = cEXTMEMebdd + '\x01';
    }
    uEXTMEMf0e2 = 1;
  }
  if ((bEXTMEMf0df & 1) != 0) {
    if ((bEXTMEMf0a6 & 1) != 1) {
      cEXTMEMebdc = cEXTMEMebdc + '\x01';
    }
    uEXTMEMf0e3 = 1;
  }
  if ((bEXTMEMf0df >> 1 & 1) != 0) {
    do {
    } while (-1 < cEXTMEMf09b);
    uEXTMEMf0e3 = 2;
  }
  return param_1;
}



/* =========================================================
 * CODE:000b  thunk_FUN_CODE_010b  size=3
 * ========================================================= */

void thunk_FUN_CODE_010b(void)

{
  return;
}



/* =========================================================
 * CODE:0013  thunk_FUN_CODE_025e  size=3
 * ========================================================= */

undefined1 thunk_FUN_CODE_025e(undefined1 param_1)

{
  if ((bEXTMEMf0dd >> 2 & 1) != 0) {
    _0_5 = 1;
    cEXTMEMebde = cEXTMEMebde + '\x01';
    uEXTMEMf0e1 = 4;
  }
  if ((char)bEXTMEMf0dd < '\0') {
    _3_1 = 1;
    uEXTMEMf0e1 = 0x80;
  }
  if ((bEXTMEMf0dd >> 3 & 1) != 0) {
    _0_4 = 1;
    uEXTMEMf0e1 = 8;
  }
  return param_1;
}



/* =========================================================
 * CODE:0100  thunk_FUN_CODE_011b  size=3
 * ========================================================= */

/* WARNING: Removing unreachable block (CODE,0x012f) */
/* WARNING: Removing unreachable block (CODE,0x0139) */
/* WARNING: Removing unreachable block (CODE,0x0141) */
/* WARNING: Removing unreachable block (CODE,0x0143) */
/* WARNING: Removing unreachable block (CODE,0x0145) */
/* WARNING: Removing unreachable block (CODE,0x0147) */

void thunk_FUN_CODE_011b(char param_1)

{
  SP = 0x6d;
  FUN_CODE_684a();
  if (param_1 == '\0') {
    DAT_INTMEM_2e = 10;
    DAT_INTMEM_2f = 0;
    DAT_INTMEM_30 = 0;
    DAT_INTMEM_31 = 0;
    DAT_INTMEM_32 = 0;
    _0_0 = bEXTMEMf0a4 >> 2 & 1;
    _0_1 = 0;
    _0_2 = 0;
    _0_3 = 0;
    _0_4 = 0;
    _0_5 = 0;
    _0_6 = 0;
    _0_7 = 0;
    _1_0 = 0;
    _1_1 = 0;
    _1_2 = 0;
    _1_3 = 0;
    _1_4 = 0;
    _1_5 = 0;
    _1_6 = 0;
    _1_7 = 0;
    _2_0 = 0;
    _2_1 = 0;
    _2_2 = 0;
    _2_3 = 0;
    _2_4 = 0;
    _2_5 = 0;
    _2_6 = 0;
    _2_7 = 0;
    _3_0 = 0;
    _3_1 = 0;
    _3_2 = 0;
    _3_3 = 0;
    _3_4 = 0;
    _3_5 = 0;
    _3_6 = 0;
    _3_7 = 0;
    _4_0 = 0;
    _4_1 = 0;
    _4_2 = 0;
    _4_3 = 0;
    _4_4 = 0;
    _4_5 = 0;
    _4_6 = 1;
    _4_7 = 0;
    _5_0 = 0;
    _5_1 = 0;
    _5_2 = 0;
    _5_3 = 0;
    _5_4 = 0;
    _5_5 = 0;
    _5_6 = 0;
    _5_7 = 0;
    _6_0 = 0;
    _6_1 = 0;
    _6_2 = 0;
    _6_3 = 0;
    _6_4 = 0;
    _6_5 = 0;
    _6_6 = bEXTMEMf0ac >> 4 & 1;
    _6_7 = bEXTMEMf0ae >> 3 & 1;
    _7_0 = bEXTMEMf12f >> 4 & 1;
    _7_1 = 0;
    _7_2 = 0;
    _7_3 = 0;
    _7_4 = 0;
    _7_5 = 0;
    uEXTMEMf08c = 0x31;
  }
  FUN_CODE_02e9();
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* =========================================================
 * CODE:0103  thunk_FUN_CODE_01fa  size=3
 * ========================================================= */

undefined1 thunk_FUN_CODE_01fa(undefined1 param_1)

{
  if ((bEXTMEMf0de & 1) != 0) {
    if (cEXTMEMf0a5 < '\0') {
      cEXTMEMebdd = cEXTMEMebdd + '\x01';
    }
    uEXTMEMf0e2 = 1;
  }
  if ((bEXTMEMf0df & 1) != 0) {
    if ((bEXTMEMf0a6 & 1) != 1) {
      cEXTMEMebdc = cEXTMEMebdc + '\x01';
    }
    uEXTMEMf0e3 = 1;
  }
  if ((bEXTMEMf0df >> 1 & 1) != 0) {
    do {
    } while (-1 < cEXTMEMf09b);
    uEXTMEMf0e3 = 2;
  }
  return param_1;
}



/* =========================================================
 * CODE:010b  FUN_CODE_010b  size=1
 * ========================================================= */

void FUN_CODE_010b(void)

{
  return;
}



/* =========================================================
 * CODE:0113  thunk_FUN_CODE_025e  size=3
 * ========================================================= */

undefined1 thunk_FUN_CODE_025e(undefined1 param_1)

{
  if ((bEXTMEMf0dd >> 2 & 1) != 0) {
    _0_5 = 1;
    cEXTMEMebde = cEXTMEMebde + '\x01';
    uEXTMEMf0e1 = 4;
  }
  if ((char)bEXTMEMf0dd < '\0') {
    _3_1 = 1;
    uEXTMEMf0e1 = 0x80;
  }
  if ((bEXTMEMf0dd >> 3 & 1) != 0) {
    _0_4 = 1;
    uEXTMEMf0e1 = 8;
  }
  return param_1;
}



/* =========================================================
 * CODE:0116  FUN_CODE_0116  size=5
 * ========================================================= */

void FUN_CODE_0116(void)

{
  FUN_CODE_02e9();
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* =========================================================
 * CODE:011b  FUN_CODE_011b  size=223
 * ========================================================= */

/* WARNING: Removing unreachable block (CODE,0x012f) */
/* WARNING: Removing unreachable block (CODE,0x0139) */
/* WARNING: Removing unreachable block (CODE,0x0141) */
/* WARNING: Removing unreachable block (CODE,0x0143) */
/* WARNING: Removing unreachable block (CODE,0x0145) */
/* WARNING: Removing unreachable block (CODE,0x0147) */

void FUN_CODE_011b(char param_1)

{
  SP = 0x6d;
  FUN_CODE_684a();
  if (param_1 == '\0') {
    DAT_INTMEM_2e = 10;
    DAT_INTMEM_2f = 0;
    DAT_INTMEM_30 = 0;
    DAT_INTMEM_31 = 0;
    DAT_INTMEM_32 = 0;
    _0_0 = bEXTMEMf0a4 >> 2 & 1;
    _0_1 = 0;
    _0_2 = 0;
    _0_3 = 0;
    _0_4 = 0;
    _0_5 = 0;
    _0_6 = 0;
    _0_7 = 0;
    _1_0 = 0;
    _1_1 = 0;
    _1_2 = 0;
    _1_3 = 0;
    _1_4 = 0;
    _1_5 = 0;
    _1_6 = 0;
    _1_7 = 0;
    _2_0 = 0;
    _2_1 = 0;
    _2_2 = 0;
    _2_3 = 0;
    _2_4 = 0;
    _2_5 = 0;
    _2_6 = 0;
    _2_7 = 0;
    _3_0 = 0;
    _3_1 = 0;
    _3_2 = 0;
    _3_3 = 0;
    _3_4 = 0;
    _3_5 = 0;
    _3_6 = 0;
    _3_7 = 0;
    _4_0 = 0;
    _4_1 = 0;
    _4_2 = 0;
    _4_3 = 0;
    _4_4 = 0;
    _4_5 = 0;
    _4_6 = 1;
    _4_7 = 0;
    _5_0 = 0;
    _5_1 = 0;
    _5_2 = 0;
    _5_3 = 0;
    _5_4 = 0;
    _5_5 = 0;
    _5_6 = 0;
    _5_7 = 0;
    _6_0 = 0;
    _6_1 = 0;
    _6_2 = 0;
    _6_3 = 0;
    _6_4 = 0;
    _6_5 = 0;
    _6_6 = bEXTMEMf0ac >> 4 & 1;
    _6_7 = bEXTMEMf0ae >> 3 & 1;
    _7_0 = bEXTMEMf12f >> 4 & 1;
    _7_1 = 0;
    _7_2 = 0;
    _7_3 = 0;
    _7_4 = 0;
    _7_5 = 0;
    uEXTMEMf08c = 0x31;
  }
  FUN_CODE_02e9();
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* =========================================================
 * CODE:01fa  FUN_CODE_01fa  size=6
 * ========================================================= */

undefined1 FUN_CODE_01fa(undefined1 param_1)

{
  if ((bEXTMEMf0de & 1) != 0) {
    if (cEXTMEMf0a5 < '\0') {
      cEXTMEMebdd = cEXTMEMebdd + '\x01';
    }
    uEXTMEMf0e2 = 1;
  }
  if ((bEXTMEMf0df & 1) != 0) {
    if ((bEXTMEMf0a6 & 1) != 1) {
      cEXTMEMebdc = cEXTMEMebdc + '\x01';
    }
    uEXTMEMf0e3 = 1;
  }
  if ((bEXTMEMf0df >> 1 & 1) != 0) {
    do {
    } while (-1 < cEXTMEMf09b);
    uEXTMEMf0e3 = 2;
  }
  return param_1;
}



/* =========================================================
 * CODE:0200  FUN_CODE_0200  size=94
 * ========================================================= */

undefined1 FUN_CODE_0200(void)

{
  undefined1 in_stack_000000fe;
  
  if ((bEXTMEMf0de & 1) != 0) {
    if (cEXTMEMf0a5 < '\0') {
      cEXTMEMebdd = cEXTMEMebdd + '\x01';
    }
    uEXTMEMf0e2 = 1;
  }
  if ((bEXTMEMf0df & 1) != 0) {
    if ((bEXTMEMf0a6 & 1) != 1) {
      cEXTMEMebdc = cEXTMEMebdc + '\x01';
    }
    uEXTMEMf0e3 = 1;
  }
  if ((bEXTMEMf0df >> 1 & 1) != 0) {
    do {
    } while (-1 < cEXTMEMf09b);
    uEXTMEMf0e3 = 2;
  }
  return in_stack_000000fe;
}



/* =========================================================
 * CODE:025e  FUN_CODE_025e  size=75
 * ========================================================= */

undefined1 FUN_CODE_025e(undefined1 param_1)

{
  if ((bEXTMEMf0dd >> 2 & 1) != 0) {
    _0_5 = 1;
    cEXTMEMebde = cEXTMEMebde + '\x01';
    uEXTMEMf0e1 = 4;
  }
  if ((char)bEXTMEMf0dd < '\0') {
    _3_1 = 1;
    uEXTMEMf0e1 = 0x80;
  }
  if ((bEXTMEMf0dd >> 3 & 1) != 0) {
    _0_4 = 1;
    uEXTMEMf0e1 = 8;
  }
  return param_1;
}



/* =========================================================
 * CODE:02a9  FUN_CODE_02a9  size=64
 * callers: CODE:02e9
 * ========================================================= */

void FUN_CODE_02a9(void)

{
  undefined1 uVar1;
  
  uVar1 = BANK0_R2;
  if (cEXTMEMf034 != '3') {
    FUN_CODE_5ba5();
  }
  BANK0_R2 = uVar1;
  return;
}



/* =========================================================
 * CODE:02e9  FUN_CODE_02e9  size=5494
 * callers: CODE:0116
 * ========================================================= */

void FUN_CODE_02e9(byte param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  char cVar10;
  undefined2 uVar8;
  ushort uVar9;
  
  do {
  } while ((bEXTMEMf0a0 & 1) == 0);
  FUN_CODE_5193(bEXTMEMf0a0);
  do {
  } while ((bEXTMEMf071 >> 3 & 1) == 1);
  bVar2 = bEXTMEMf071;
  FUN_CODE_4f7d();
  FUN_CODE_4be4();
  if (_1_0 == '\0') {
    bEXTMEMeaef = bVar2;
    if (_1_3 == '\0') {
      BANK0_R2 = param_1;
      if (_3_5 == '\0') {
        BANK0_R3 = 0x10;
      }
      else {
        BANK0_R3 = 0xb0;
      }
    }
    else {
      BANK0_R2 = 0x60;
    }
  }
  else {
    bEXTMEMeaef = 0x30;
  }
LAB_CODE_0322:
  do {
    do {
      uEXTMEMf08c = 6;
      while ((bEXTMEMf098 >> 4 & 1) != 0) {
        uEXTMEMf08c = 9;
        if (bEXTMEMf0b7 != BANK0_R3) {
          FUN_CODE_1d64(uEXTMEMeba5);
        }
        if (bEXTMEMf13f != BANK0_R3) {
          FUN_CODE_20b6(uEXTMEMebae);
        }
        if (cEXTMEMea07 < '\0') {
          FUN_CODE_2623(cEXTMEMea07);
        }
        if (cEXTMEMeafb < '\0') {
          FUN_CODE_6223(cEXTMEMeafb);
        }
        if ((_0_0 != 1) && (cEXTMEMf15c == '\0')) {
          FUN_CODE_58d4(0);
          cEXTMEMf15c = '\x02';
        }
      }
      if ((bEXTMEMf099 & 1) != 0) {
        FUN_CODE_4ae6(CONCAT11(0xf0,bEXTMEMf099 & 0x1e));
      }
      if ((bEXTMEMf098 >> 6 & 1) != 0) {
        bEXTMEMf0b0 = bEXTMEMf0b0 & 0xe7;
        cEXTMEMf155 = '\x05';
      }
      bVar2 = bEXTMEMf038;
      if ((((bEXTMEMf038 != 0 || cEXTMEMf039 != '\0') || cEXTMEMf03a != '\0') || cEXTMEMf03b != '\0'
          ) || (bVar2 = bEXTMEMf098, (bEXTMEMf098 & 1) != 0)) {
        FUN_CODE_51f6(bVar2);
      }
      if (cEXTMEMeaeb < '\0') {
        FUN_CODE_63f7(cEXTMEMeaeb);
      }
      cVar3 = -0x31;
      if ((char)bEXTMEMeacf < '\0') {
        _6_4 = '\x01';
      }
      bVar2 = bEXTMEMeacf;
      bVar7 = bEXTMEMeacf;
      if (_6_4 != '\x01') {
        if (_3_1 == '\x01') {
          cVar3 = '\x14';
          bVar7 = bEXTMEMf114 & 0xf7;
          bVar2 = bEXTMEMf114;
          bEXTMEMf114 = bVar7;
        }
        else {
          cVar3 = -0x55;
          bVar7 = bEXTMEMf0ab;
        }
      }
      FUN_CODE_5ba5(bVar7,bVar2);
      if (cVar3 == '\0') {
        _3_1 = '\0';
      }
      if (_0_0 != 1) {
        FUN_CODE_5b50();
        cVar10 = '\0';
        if ((((cVar3 != '\0') && (cVar10 = -0x55, (bEXTMEMf0ab >> 2 & 1) != 1)) &&
            (cVar10 = -0x5b, (bEXTMEMf0a5 >> 5 & 1) != 0)) &&
           ((_6_4 != '\x01' && (cVar10 = ';', cEXTMEMeb3b == -0x30)))) {
          bVar7 = bEXTMEMf0ab & 0xfd;
          cVar10 = -0x55;
          bVar2 = bEXTMEMf0ab >> 2;
          bEXTMEMf0ab = bVar7;
          if ((bVar2 & 1) != 1) {
            cVar10 = -0x55;
            FUN_CODE_5c4c(bVar7);
          }
        }
        FUN_CODE_5b7d();
        if ((((cVar10 != '\0') && (_6_4 != '\x01')) && (cEXTMEMeb3b == -0x30)) ||
           (((cVar3 = -0x3d, bVar2 = bEXTMEMeac3, (bEXTMEMeac3 >> 1 & 1) == 1 ||
             (cVar3 = -0x39, bVar2 = bEXTMEMeac7, (bEXTMEMeac7 >> 1 & 1) != 0)) &&
            (FUN_CODE_5bc2(bVar2), cVar3 != '\0')))) {
          bEXTMEMf114 = bEXTMEMf114 | 0x16;
        }
      }
      bVar6 = 1 - ((char)(_0_0 << 7) >> 7);
      bVar2 = 2;
      bVar7 = 0;
      while (bVar6 = bVar6 - 1, bVar6 != 0) {
        bVar1 = CARRY1(bVar2,bVar2);
        bVar2 = bVar2 * '\x02';
        bVar7 = bVar7 << 1 | bVar1;
      }
      bVar5 = 0;
      BANK0_R2 = BANK0_R2 & bEXTMEMf0cd;
      BANK0_R3 = 0;
      bVar4 = bEXTMEMf0cd;
      if ((((bVar2 == 0 && bVar7 == 0) || (_2_6 == '\x01')) ||
          ((cEXTMEMebbf != '\0' &&
           ((bVar2 = bEXTMEMf0ad, (bEXTMEMf0ad >> 6 & 1) == 0 ||
            (bVar2 = bEXTMEMf07d, (bEXTMEMf07d >> 2 & 1) == 1)))))) ||
         ((bVar2 = bEXTMEMeaef != 0x11, bVar2 != (_2_5 & 1) && (_6_4 != '\x01')))) {
        _2_6 = '\x01';
        FUN_CODE_5d15(bVar2);
      }
      if ((_2_7 == '\0') || ((bEXTMEMf0ac >> 3 & 1) == 1)) {
        _2_7 = '\0';
      }
      else {
        uVar8 = 0xeb5c;
        uEXTMEMeb5c = uEXTMEMeb3c;
        FUN_CODE_56f4(bEXTMEMf0ac);
        if ((char)uVar8 == '\x02') {
          DAT_INTMEM_69 = 0x5c;
          DAT_INTMEM_6a = 0xeb;
          DAT_INTMEM_68 = 1;
          uVar8 = 0x50;
          FUN_CODE_67c3();
          if ((char)uVar8 == '\x02') {
            _2_7 = '\0';
          }
        }
        do {
          FUN_CODE_575e();
        } while ((char)uVar8 == '\0');
      }
      bEXTMEMebc6 = bEXTMEMebc6 * '\x02';
      cVar3 = -0x3a;
      if ((_0_7 != '\0') &&
         ((((bVar2 = bEXTMEMebc6, _6_6 != '\x01' &&
            (cVar3 = -0x33, bVar2 = bEXTMEMf0cd, (bEXTMEMf0cd >> 6 & 1) != 0)) &&
           ((_4_5 == '\0' || (cVar3 = -0x33, (char)bEXTMEMf0cd < '\0')))) ||
          (FUN_CODE_5b50(bVar2), cVar3 != '\0')))) {
        _0_7 = '\0';
      }
      cVar3 = -0x2c;
      if (((bEXTMEMf0d4 >> 4 & 1) != 0) &&
         (((bVar2 = bEXTMEMf0d4, _6_6 != '\x01' &&
           (cVar3 = -0x59, bVar2 = bEXTMEMf0a7, (bEXTMEMf0a7 >> 1 & 1) == 1)) ||
          ((_6_6 != '\0' && (FUN_CODE_5b50(bVar2), cVar3 != '\0')))))) {
        bEXTMEMf0d4 = bEXTMEMf0d4 & 0xef;
      }
      bVar2 = bEXTMEMeb59;
      if ((bEXTMEMf12f >> 3 & 1) != 0) {
        cVar3 = -0x33;
        bVar7 = bEXTMEMf0cd;
        if (((char)bEXTMEMf0cd < '\0') &&
           (cVar3 = -0x59, bVar7 = bEXTMEMf0a7, (bEXTMEMf0a7 >> 1 & 1) != 0)) {
          if (bEXTMEMeb59 != 0) {
            bEXTMEMeb59 = 0;
          }
          cVar3 = 'Y';
          bVar7 = bVar2;
          if (_4_5 != '\0') {
            _4_5 = '\0';
          }
        }
        if (((_0_7 != '\x01') && (FUN_CODE_5bfc(bVar7), cVar3 == '\0')) && (_4_4 != '\0')) {
          FUN_CODE_34e8();
        }
      }
      cVar3 = 'S';
      bVar2 = bEXTMEMeb53;
      if (((bEXTMEMeb53 == 0xe0) && (_0_7 != '\x01')) &&
         ((cVar3 = -0x54, bVar2 = bEXTMEMf0ac, (bEXTMEMf0ac >> 6 & 1) != 1 && (_6_4 != '\x01')))) {
        if ((_6_6 != '\x01') && ((bEXTMEMf0cd >> 6 & 1) != 1)) {
          bEXTMEMeac8 = 1;
        }
        if (bEXTMEMf034 == 5) {
          bEXTMEMeac8 = 0x11;
        }
        cVar3 = '4';
        bVar2 = bEXTMEMf034;
        if (bEXTMEMf034 == 7) {
          cVar3 = -0x38;
          bEXTMEMeac8 = 2;
          if (_6_6 != '\0') {
            cVar3 = -0x30;
            bVar2 = bEXTMEMead0;
            bEXTMEMead0 = bEXTMEMead0 & 0xc1;
          }
        }
      }
      FUN_CODE_36ca(bVar2);
      if (_0_0 == 0) {
        if (_3_2 != '\x01') {
          cVar3 = '4';
          if ((bEXTMEMf034 == 0xd) && (cVar3 = '4', FUN_CODE_5ba5(), cVar3 == '\0')) {
            _7_3 = '\x01';
            cVar3 = -0x3d;
            if ((bEXTMEMeac3 >> 4 & 1) != 1) {
              _3_2 = '\x01';
              BANK0_R5 = bEXTMEMf005;
              BANK0_R4 = bEXTMEMf004;
              BANK3_R3 = bEXTMEMf000;
              BANK3_R4 = bEXTMEMf001;
              BANK3_R0 = 0;
              BANK3_R1 = 4;
              BANK3_R2 = 0x10;
              _c_7 = 0;
              BANK3_R5 = bVar4;
              BANK3_R6 = bVar5;
              FUN_CODE_617c(0xf000);
              bEXTMEMeac3 = bEXTMEMeac3 | 1;
              bEXTMEMf08e = bEXTMEMf08e | 0x40;
              cVar3 = '4';
              bEXTMEMeb34 = bEXTMEMeb34 | 2;
            }
          }
        }
        if (((_3_2 != '\x01') && (cVar3 = '4', bEXTMEMf034 == 0x3b)) &&
           (cVar3 = '8', bEXTMEMeb38 == 0)) {
          _3_2 = '\x01';
          cVar3 = -0x43;
          bEXTMEMebbd = bEXTMEMf116 & 0x1f;
        }
        if (((_3_2 != '\x01') && (_7_2 != '\x01')) && (FUN_CODE_02a9(), cVar3 != '\0')) {
          _7_2 = '\x01';
          DAT_INTMEM_32 = 8;
        }
        if (((_3_2 == '\0') && (_7_2 == '\x01')) && (DAT_INTMEM_32 == 0)) {
          FUN_CODE_02a9();
          if (cVar3 == '\0') {
            cVar3 = '\0';
          }
          else {
            _3_2 = '\x01';
            _7_2 = '\0';
            FUN_CODE_5bc2();
            if (cVar3 != '\0') {
              bEXTMEMeac3 = bEXTMEMeac3 | 2;
              bEXTMEMf0a7 = bEXTMEMf0a7 | 0x40;
              bEXTMEMf04b = bEXTMEMf04b | 0x80;
              do {
              } while (bEXTMEMeb40 == 0);
              bVar2 = bEXTMEMeb40;
              if (((_1_3 == '\x01') || (_3_5 == '\x01')) ||
                 (bVar2 = bEXTMEMf08a, (bEXTMEMf08a >> 2 & 1) != 0)) {
                FUN_CODE_5840(bVar2);
              }
              FUN_CODE_60da();
              do {
              } while ((bEXTMEMf187 & 1) == 0);
            }
            BANK0_R5 = bEXTMEMf005;
            BANK0_R4 = bEXTMEMf004;
            BANK3_R3 = bEXTMEMf000;
            BANK3_R4 = bEXTMEMf001;
            BANK3_R0 = 0;
            BANK3_R1 = 4;
            BANK3_R2 = 0x10;
            _c_7 = 0;
            cVar3 = '\0';
            BANK3_R5 = bVar4;
            BANK3_R6 = bVar5;
            FUN_CODE_617c();
          }
        }
        FUN_CODE_5c10();
        if (cVar3 != '\0') {
          bEXTMEMeac3 = bEXTMEMeac3 & 0xfd;
        }
        if (((_6_4 != '\x01') && (bEXTMEMebc0 != 0)) && ((bEXTMEMf0a7 >> 1 & 1) != 1)) {
          bEXTMEMeac3 = bEXTMEMeac3 & 0xfe;
          bEXTMEMf08e = bEXTMEMf08e & 0xbf;
          bEXTMEMebbd = 0;
        }
        cVar3 = '_';
        if (((cEXTMEMf15f != '\0') && (_7_4 != '\x01')) &&
           ((_6_6 != '\x01' &&
            (((_7_3 != '\x01' && (FUN_CODE_5c10(cEXTMEMf15f), cVar3 == '\0')) &&
             ((bEXTMEMf0ae >> 5 & 1) != 0)))))) {
          cEXTMEMf15b = '2';
          bEXTMEMeac3 = bEXTMEMeac3 | 0x10;
        }
        if (((bEXTMEMeac3 >> 1 & 1) == 1) || ((bEXTMEMeac7 >> 1 & 1) != 0)) {
          cEXTMEMf15b = '\0';
        }
        if (cEXTMEMf15b == '\0') {
          bEXTMEMeac3 = bEXTMEMeac3 & 0xef;
          _7_4 = '\x01';
        }
      }
      if (((bEXTMEMf0a7 >> 1 & 1) != 0) && ((bEXTMEMebc0 >> 1 & 1) != 1)) {
        _4_7 = 0;
        _4_4 = '\x01';
      }
      if (_6_4 != '\x01') {
        bEXTMEMebc0 = (bEXTMEMf0a7 >> 1 & 1) != 0 | bEXTMEMebc0 * '\x02';
      }
      if ((((_6_6 != '\0') && (_3_2 != '\x01')) && (bEXTMEMf034 == 0x15)) &&
         (BANK0_R2 = BANK0_R2 & 1, bEXTMEMf035 == BANK0_R3)) {
        _3_2 = '\x01';
        BANK0_R2 = 0;
        if (bEXTMEMf035 == 0x10) {
          bEXTMEMf098 = bEXTMEMf036 | bEXTMEMf098;
          bEXTMEMf099 = bEXTMEMf037 | bEXTMEMf099;
        }
        else {
          bEXTMEMf098 = ~bEXTMEMf036 & bEXTMEMf098;
          bEXTMEMf099 = ~bEXTMEMf037 & bEXTMEMf099;
        }
      }
      if (_3_2 != '\0') {
        if ((bEXTMEMf034 & 1) == 0) {
          _3_2 = '\0';
          BANK3_R0 = 0xd;
          BANK3_R1 = 1;
          BANK3_R2 = 2;
          _c_7 = 0;
          BANK3_R3 = 0;
          BANK3_R4 = 0;
          BANK3_R5 = 0;
          BANK3_R6 = 0;
          FUN_CODE_617c(0xf000,bEXTMEMf034);
        }
        else {
          BANK3_R3 = bEXTMEMf034;
          BANK3_R4 = 0;
          BANK3_R5 = 0;
          BANK3_R6 = 0;
          BANK3_R0 = 0xd;
          BANK3_R1 = 1;
          BANK3_R2 = 2;
          _c_7 = 0;
          FUN_CODE_617c(0xf000);
        }
      }
      cVar3 = 'Z';
      bVar2 = 0;
      if ((cEXTMEMf15a != '\0') && (cVar3 = -0x5a, bVar2 = bEXTMEMf0a6, (char)bEXTMEMf0a6 < '\0')) {
        cVar3 = 'Z';
        cEXTMEMf15a = '2';
      }
      if (_6_4 != '\x01') {
        FUN_CODE_439e(bVar2);
        cVar10 = '\0';
        if (cVar3 != '\0') {
          cVar10 = -0x55;
          bEXTMEMf0ab = bEXTMEMf0ab | 2;
        }
        FUN_CODE_4432();
        cVar3 = '\0';
        if (cVar10 != '\0') {
          cVar3 = '\x14';
          bEXTMEMf114 = bEXTMEMf114 & 0xfe;
        }
        FUN_CODE_4494();
        cVar10 = '\0';
        if (cVar3 != '\0') {
          cVar10 = '\x14';
          bEXTMEMf114 = bEXTMEMf114 & 0xfb;
        }
        FUN_CODE_4579();
        cVar3 = '\0';
        if (cVar10 != '\0') {
          cVar3 = '\x14';
          bEXTMEMf114 = bEXTMEMf114 & 0xfd;
        }
        FUN_CODE_45c9();
        if (cVar3 != '\0') {
          bEXTMEMf114 = bEXTMEMf114 & 0xef;
        }
      }
      if (_0_0 != 1) {
        FUN_CODE_3957();
      }
      if (_0_0 == 0) {
        if ((((bEXTMEMf187 & 1) != 0) && ((bEXTMEMeb35 >> 1 & 1) != 1)) &&
           ((bEXTMEMf0ad >> 1 & 1) != 1)) {
          bEXTMEMeb34 = bEXTMEMeb34 | 2;
        }
        bEXTMEMeb35 = (bEXTMEMf187 & 1) != 0 | bEXTMEMeb35 * '\x02';
        cVar3 = '4';
        bVar2 = bEXTMEMeb34;
        if ((((bEXTMEMeb34 >> 1 & 1) != 0) &&
            (cVar3 = -0x5a, bVar2 = bEXTMEMf0a6, -1 < (char)bEXTMEMf0a6)) &&
           (cVar3 = '8', bVar2 = bEXTMEMeb38, bEXTMEMeb38 == 0)) {
          FUN_CODE_5ba5(0);
          if ((cVar3 == '\0') || (_6_6 != '\0')) {
            FUN_CODE_5941();
          }
          cVar3 = '4';
          bVar2 = bEXTMEMeb34;
          bEXTMEMeb34 = bEXTMEMeb34 & 0xfd;
        }
        FUN_CODE_5bdf(bVar2);
        if (((cVar3 == '\0') && ((bEXTMEMeb34 >> 1 & 1) != 1)) && (-1 < (char)bEXTMEMf0a6)) {
          bEXTMEMeac3 = bEXTMEMeac3 & 0xfe;
          bEXTMEMf08e = bEXTMEMf08e & 0xbf;
        }
        if (cEXTMEMf15c == '\0') {
          FUN_CODE_58d4(0);
          DAT_INTMEM_30 = (bEXTMEMf0a7 >> 1 & 1) != 0 | DAT_INTMEM_30 * '\x02';
          DAT_INTMEM_31 = DAT_INTMEM_31 >> 1;
          DAT_INTMEM_32 = DAT_INTMEM_32 >> 1;
          cEXTMEMf15c = '\x02';
        }
        cVar3 = -0x7f;
        if (((-1 < (char)bEXTMEMf181) &&
            (((bVar2 = bEXTMEMf181, _6_6 == '\x01' ||
              (cVar3 = '/', bVar2 = bEXTMEMeb2f, (char)bEXTMEMeb2f < '\0')) ||
             (cVar3 = '/', bVar2 = bEXTMEMf12f, (bEXTMEMf12f & 1) != 0)))) &&
           ((FUN_CODE_5bc2(bVar2), cVar3 != '\0' && (bEXTMEMeb40 != 0)))) {
          bVar2 = bEXTMEMeb40;
          if ((_1_3 == '\x01') ||
             ((_3_5 == '\x01' || (bVar2 = bEXTMEMf08a, (bEXTMEMf08a >> 2 & 1) != 0)))) {
            FUN_CODE_5840(bVar2);
          }
          if (((((bEXTMEMf0af >> 2 & 1) != 0) && (_6_5 != '\x01')) &&
              ((_6_6 == '\0' || ((bEXTMEMead3 >> 4 & 1) != 0)))) && (_4_3 != '\x01')) {
            _7_1 = '\x01';
          }
          _6_5 = '\x01';
        }
        if ((_6_5 != '\0') &&
           ((((cEXTMEMf15d == '\0' || (_7_1 == '\0')) || ((bEXTMEMf12f & 1) != 0)) &&
            ((cVar3 = -0x5a, -1 < (char)bEXTMEMf0a6 && (FUN_CODE_5bc2(bEXTMEMf0a6), cVar3 != '\0')))
            ))) {
          FUN_CODE_60da();
          _6_5 = '\0';
        }
        cVar3 = -0x59;
        if (((bEXTMEMf0a7 >> 1 & 1) == 1) && (FUN_CODE_5bc2(bEXTMEMf0a7), cVar3 != '\0')) {
          BANK3_R0 = 1;
          BANK3_R1 = 0;
          BANK3_R2 = 0x10;
          _d_0 = 0;
          cVar3 = '\b';
          FUN_CODE_61d0();
          BANK0_R2 = BANK0_R2 & 6;
          _7_6 = cVar3 == '\x06';
          if ((bEXTMEMf097 >> 6 & 1) != 1) {
            BANK3_R0 = 0x21;
            BANK3_R1 = 0;
            BANK3_R2 = 0x10;
            _d_0 = 0;
            bVar4 = 8;
            bVar7 = 0xf0;
            bVar2 = FUN_CODE_61d0(bEXTMEMf097);
            if ((((bEXTMEMf097 >> 6 & 1) != 1) && (_7_6 != '\0')) && ((char)bVar7 < '\0')) {
              BANK3_R4 = bVar7 | 0x80;
              BANK3_R0 = 0x21;
              BANK3_R1 = 0;
              BANK3_R2 = 0x10;
              _c_7 = 0;
              BANK3_R3 = bVar4;
              BANK3_R5 = bVar6;
              BANK3_R6 = bVar2;
              FUN_CODE_617c(0xf008,bEXTMEMf097);
            }
          }
        }
      }
      else if (cEXTMEMf15c == '\0') {
        DAT_INTMEM_31 = DAT_INTMEM_31 >> 1;
        cEXTMEMf15c = '\x02';
      }
      bVar2 = (_0_0 & 1 ^ 1) << 7;
      if ((char)bVar2 < '\0') {
        cVar3 = '\x16';
        bVar7 = bEXTMEMf116;
      }
      else {
        cVar3 = '\x1a';
        bVar7 = bEXTMEMf11a;
      }
      _7_7 = bVar7 & 1;
      bVar2 = bVar7 >> 1 | bVar2;
      if (_7_7 != 1) {
        bVar2 = 0;
        uEXTMEMeb48 = 0;
        cVar3 = 'L';
        uEXTMEMeb4c = 0;
      }
      FUN_CODE_5c82(bVar2,bVar7);
      if (cVar3 == '\0') {
        bEXTMEMf168 = bEXTMEMf168 | 4;
      }
      else {
        bEXTMEMf168 = bEXTMEMf168 & 0xfb;
        bEXTMEMf114 = bEXTMEMf114 | 0x16;
      }
      BANK0_R2 = BANK0_R2 ^ DAT_INTMEM_33;
      BANK0_R3 = BANK0_R3 ^ DAT_INTMEM_34;
      BANK0_R4 = BANK0_R4 ^ DAT_INTMEM_35;
      BANK0_R5 = BANK0_R5 ^ DAT_INTMEM_36;
      if (((bEXTMEMeb18 != 0 || bEXTMEMeb19 != 0) || bEXTMEMeb1a != 0) || bEXTMEMeb1b != 0) {
        FUN_CODE_6105();
      }
      DAT_INTMEM_33 = bEXTMEMeb18;
      DAT_INTMEM_34 = bEXTMEMeb19;
      DAT_INTMEM_35 = bEXTMEMeb1a;
      DAT_INTMEM_36 = bEXTMEMeb1b;
      bEXTMEMf127 = bEXTMEMf127 | 0x80;
      BANK3_R0 = 0x5c;
      BANK3_R1 = 2;
      BANK3_R2 = 2;
      _d_0 = 0;
      uVar8 = 0xf100;
      bVar2 = FUN_CODE_61d0();
      BANK3_R3 = (byte)uVar8;
      BANK3_R4 = (byte)((ushort)uVar8 >> 8);
      BANK3_R6 = bVar2 | 0x80;
      BANK3_R0 = 0x5c;
      BANK3_R1 = 2;
      BANK3_R2 = 2;
      _c_7 = 0;
      BANK3_R5 = bVar6;
      FUN_CODE_617c((ushort)BANK3_R4 << 8);
      cVar3 = -0x11;
      if (bEXTMEMeaef != 0x10) {
        if (bEXTMEMeaef == 0x11) goto LAB_CODE_0c93;
        if (bEXTMEMeaef == 0x20) {
          if (_0_7 == '\0') {
            FUN_CODE_5bfc();
            if (((cVar3 != '\0') || ((char)bEXTMEMead3 < '\0')) && ((bEXTMEMf0ac >> 6 & 1) != 1)) {
              bEXTMEMeacf = bEXTMEMeacf | 0x80;
              goto LAB_CODE_0322;
            }
            if ((bEXTMEMf0ad >> 4 & 1) == 1) {
              _7_7 = _0_0 & 1 ^ 1;
              if ((char)(_7_7 << 7) < '\0') {
                bEXTMEMf0aa = bEXTMEMf0aa & 0xf8 | 5;
              }
              else {
                bEXTMEMf0aa = bEXTMEMf0aa & 0xf8 | 6;
              }
            }
            else {
              _7_7 = _0_0 & 1 ^ 1;
              if ((char)(_7_7 << 7) < '\0') {
                cVar3 = '\x02';
              }
              else {
                cVar3 = '\x03';
              }
              _9_6 = bEXTMEMf0ad & 1;
              FUN_CODE_2acf(bEXTMEMf0ad >> 1 | _7_7 << 7);
              cEXTMEMeb0c = cVar3;
              if (cVar3 == '\0') {
                bEXTMEMeaef = 0x11;
                goto LAB_CODE_0322;
              }
              if (cVar3 == '\x01') {
                bEXTMEMf0aa = bEXTMEMf0aa & 0x78 | 1;
              }
              else {
                bEXTMEMf0aa = bEXTMEMf0aa & 0xb8 | 2;
              }
            }
            cVar3 = -0x57;
            bEXTMEMf0a9 = bEXTMEMf0a9 & 0xc1 | 4;
            if ((_3_3 != '\0') && (FUN_CODE_5812(), cVar3 == '\0')) {
              bEXTMEMf16a = bEXTMEMf16a | 4;
            }
            bEXTMEMf114 = bEXTMEMf114 | 0x11;
            bEXTMEMeaef = 0x21;
LAB_CODE_177f:
            if (((((bEXTMEMf07c >> 2 & 1) == 0) || ((bEXTMEMf098 >> 5 & 1) == 1)) ||
                (((bEXTMEMf0a7 >> 5 & 1) != 0 && (cEXTMEMeb0c == '\x01')))) ||
               ((((bEXTMEMf0ac >> 3 & 1) != 1 && ((bEXTMEMeb19 & 1) == 0)) || (_2_5 != 1)))) {
              bEXTMEMeaef = 0x22;
            }
            if (((bEXTMEMf12e & 1) != 0) && (_3_7 != '\0')) {
              if (((cEXTMEMeb0c == '\x01') && ((bEXTMEMf0cc >> 6 & 1) == 0)) ||
                 ((cEXTMEMeb0c == '\x02' && ((char)bEXTMEMf0cc < '\0')))) {
                _3_7 = '\0';
              }
              else {
                uVar9 = 0xf0cc;
                if ((((bEXTMEMf0cc >> 6 & 1) != 1) &&
                    (FUN_CODE_2969(bEXTMEMf0cc), (uVar9 & 0xf) == 0)) ||
                   ((uVar9 = 0xf0cc, (char)bEXTMEMf0cc < '\0' &&
                    (FUN_CODE_2969(bEXTMEMf0cc), (uVar9 & 0xf0) == 0)))) {
                  bEXTMEMeaef = 0x22;
                }
              }
            }
            cVar3 = -0x53;
            bVar2 = bEXTMEMf0ad;
            if ((bEXTMEMf0ad >> 6 & 1) != 0) {
              cVar3 = 'l';
              bVar2 = 0;
              if (cEXTMEMeb6c != '\0') {
                cEXTMEMebbf = '\x01';
                cEXTMEMeb6c = '\0';
                _2_5 = 0;
                cVar3 = -0x11;
                bEXTMEMeaef = 0x22;
                bVar2 = bEXTMEMf07d;
                bEXTMEMf07d = bEXTMEMf07d | 4;
              }
            }
            FUN_CODE_5bfc(bVar2);
            if (((cVar3 != '\0') || ((char)bEXTMEMead3 < '\0')) && ((bEXTMEMf0ac >> 6 & 1) == 0)) {
              bEXTMEMeacf = bEXTMEMeacf | 0xa0;
              bEXTMEMeaef = 0x22;
            }
            goto LAB_CODE_0322;
          }
          bEXTMEMeaef = 0x11;
          goto LAB_CODE_0322;
        }
        if (bEXTMEMeaef == 0x21) goto LAB_CODE_177f;
        if (bEXTMEMeaef != 0x22) {
          if (bEXTMEMeaef == 0x30) {
            if ((bEXTMEMf0ab >> 2 & 1) != 0) {
              bEXTMEMeaef = 0x32;
              bEXTMEMf0ab = bEXTMEMf0ab & 0xfd;
              goto LAB_CODE_0322;
            }
            _0_5 = '\0';
            bEXTMEMf07d = (bEXTMEMf07d | 0xf0) & 0xdf;
            bEXTMEMf0e9 = bEXTMEMf0e9 | 4;
            bEXTMEMf0b0 = bEXTMEMf0b0 & 0xfc | 0x4c;
            bEXTMEMf138 = bEXTMEMf138 & 0xfd | 0x4c;
            _0_3 = '\0';
            cVar3 = -0x5c;
            cEXTMEMeba4 = '@';
            bEXTMEMf0ab = bEXTMEMf0ab & 0xfd;
            FUN_CODE_55d2();
            if (((_5_0 != '\0') && (_5_2 != '\x01')) && (_1_0 != '\x01')) {
              cVar3 = 'P';
              cEXTMEMf150 = cEXTMEMeb1d;
            }
            if ((_1_0 != '\0') && (FUN_CODE_5812(), cVar3 == '\0')) {
              bEXTMEMf16a = bEXTMEMf16a | 4;
            }
            bEXTMEMeaef = 0x31;
            bEXTMEMeaee = 0x34;
          }
          else if (bEXTMEMeaef != 0x31) {
            if (bEXTMEMeaef == 0x32) {
              bEXTMEMf08f = bEXTMEMf08f & 0xfc;
              uEXTMEMeaed = 0;
              bEXTMEMf0e9 = bEXTMEMf0e9 & 0xfb;
              _1_0 = '\0';
              bEXTMEMf0aa = bEXTMEMf0aa & 0xef;
              uEXTMEMead5 = 0;
              uEXTMEMeb23 = 0;
              bEXTMEMf0b0 = bEXTMEMf0b0 | 4;
              uEXTMEMf0b1 = 0x73;
              bEXTMEMf160 = 0;
              uEXTMEMf04c = 0;
              uEXTMEMf04d = 0;
              uEXTMEMf04e = 0;
              uEXTMEMf04f = 0;
              bEXTMEMf050 = bEXTMEMf050 & 0xbf;
              bEXTMEMf051 = bEXTMEMf051 & 0xbf;
              uEXTMEMeab0 = 0;
              uEXTMEMeab1 = 0;
              uEXTMEMeab2 = 0;
              uEXTMEMeab3 = 0;
              uEXTMEMf081 = 0xc;
              uEXTMEMf080 = 0xff;
              uEXTMEMf084 = 0x1f;
              uEXTMEMf085 = 0x1f;
              bEXTMEMf138 = bEXTMEMf138 | 4;
              uEXTMEMf139 = 3;
              FUN_CODE_1ce5(0xf183);
              do {
              } while ((bEXTMEMf0b8 & 1) == 1);
              bEXTMEMf0b0 = bEXTMEMf0b0 | 3;
              do {
              } while ((bEXTMEMf140 & 1) == 1);
              bEXTMEMf138 = bEXTMEMf138 | 3;
              FUN_CODE_5c3a(bEXTMEMf140);
              _5_5 = 0;
              _5_7 = 0;
              _2_2 = 0;
              _2_0 = 0;
              _1_1 = '\0';
              _1_6 = '\0';
              _5_3 = 0;
              _5_6 = 0;
              _6_0 = 0;
              _2_3 = 0;
              _2_1 = 0;
              _1_2 = '\0';
              _1_7 = '\0';
              bEXTMEMeaee = 0;
              bEXTMEMeaef = 0x10;
              goto LAB_CODE_0322;
            }
            if (bEXTMEMeaef == 0x60) {
              if (_1_4 == '\0') {
                bEXTMEMf0a8 = bEXTMEMf0a8 & 0xfb;
              }
              else {
                bEXTMEMf0a8 = bEXTMEMf0a8 | 4;
              }
              if (_1_5 == '\0') {
                bEXTMEMf0a9 = bEXTMEMf0a9 & 0xc1 | 8;
              }
              else {
                bEXTMEMf0a9 = bEXTMEMf0a9 & 0xc1 | 0x18;
              }
              cVar3 = -0x57;
              _c_6 = 1;
              FUN_CODE_5ce0();
              if ((_1_3 != '\0') && (FUN_CODE_5812(), cVar3 == '\0')) {
                bEXTMEMf16a = bEXTMEMf16a | 4;
              }
              bEXTMEMf114 = bEXTMEMf114 | 0x16;
              if ((bEXTMEMf0ad >> 1 & 1) != 0) {
                FUN_CODE_598f(bEXTMEMf0ad);
              }
              bEXTMEMeaef = 0x61;
            }
            else if (bEXTMEMeaef != 0x61) {
              if (bEXTMEMeaef != 0x62) {
                if (bEXTMEMeaef == 0xb0) {
                  if (_1_4 == '\0') {
                    bEXTMEMf0a8 = bEXTMEMf0a8 & 0xfb;
                  }
                  else {
                    bEXTMEMf0a8 = bEXTMEMf0a8 | 4;
                  }
                  if (_1_5 == '\0') {
                    bEXTMEMf0a9 = bEXTMEMf0a9 & 0xc1 | 0xc;
                  }
                  else {
                    bEXTMEMf0a9 = bEXTMEMf0a9 & 0xc1 | 0x20;
                  }
                  cVar3 = -0x57;
                  _c_6 = 1;
                  FUN_CODE_5ce0();
                  if ((_3_5 != '\0') && (FUN_CODE_5812(), cVar3 == '\0')) {
                    bEXTMEMf16a = bEXTMEMf16a | 4;
                  }
                  bEXTMEMf114 = bEXTMEMf114 | 0x17;
                  if ((bEXTMEMf0ad >> 1 & 1) != 0) {
                    FUN_CODE_598f(bEXTMEMf0ad);
                  }
                  bEXTMEMeaef = 0xb1;
                  cVar3 = -0x12;
                  bEXTMEMeaee = 0xb6;
                }
                else if (bEXTMEMeaef != 0xb1) {
                  if (bEXTMEMeaef == 0xb2) {
                    do {
                      _7_7 = _0_0 & 1 ^ 1;
                      if ((char)(_7_7 << 7) < '\0') {
                        cVar3 = '\x02';
                      }
                      else {
                        cVar3 = '\x03';
                      }
                      FUN_CODE_2a72();
                    } while (cVar3 == '\0');
                    _3_5 = '\0';
                    cEXTMEMeb0c = '\0';
                    _1_5 = '\0';
                    _b_6 = 1;
                    FUN_CODE_5515();
                    bEXTMEMeaee = 0;
                    bEXTMEMeaef = 0x10;
                  }
                  goto LAB_CODE_0322;
                }
                FUN_CODE_5bfc();
                if ((((cVar3 != '\0') || ((char)bEXTMEMead3 < '\0')) &&
                    ((bEXTMEMf0ac >> 6 & 1) != 1)) &&
                   (BANK0_R2 = BANK0_R2 & 0xf0, bEXTMEMeacf != 0xb0)) {
                  BANK0_R2 = BANK0_R2 | 0xb0;
                  BANK0_R2 = BANK0_R2 | bEXTMEMf0a8 & 4;
                  bEXTMEMeacf = bEXTMEMeacf | ((bEXTMEMf0a9 & 0x10) >> 4) << 1;
                }
                if ((((bEXTMEMf0ac >> 3 & 1) != 1) &&
                    (((bEXTMEMeb18 & 0x30) == 0 || ((bEXTMEMeb19 & 1) == 0)))) || (_2_5 != 1)) {
                  bEXTMEMeaef = 0xb2;
                }
                if ((bEXTMEMf07c >> 2 & 1) != 1) {
                  cEXTMEMebbf = '\0';
                }
                if (bEXTMEMeaee == 0xb3) {
LAB_CODE_1b36:
                  if ((bEXTMEMf0ad >> 4 & 1) == 1) {
                    _7_7 = _0_0 & 1 ^ 1;
                    if ((char)(_7_7 << 7) < '\0') {
                      bEXTMEMf0aa = bEXTMEMf0aa & 0xf8 | 5;
                    }
                    else {
                      bEXTMEMf0aa = bEXTMEMf0aa & 0xf8 | 6;
                    }
                  }
                  else {
                    _7_7 = _0_0 & 1 ^ 1;
                    if ((char)(_7_7 << 7) < '\0') {
                      cVar3 = '\x02';
                    }
                    else {
                      cVar3 = '\x03';
                    }
                    _9_6 = bEXTMEMf0ad & 1;
                    FUN_CODE_2acf(bEXTMEMf0ad >> 1 | _7_7 << 7);
                    cEXTMEMeb0c = cVar3;
                    if (cVar3 == '\0') {
                      bEXTMEMeaee = 0xb6;
                      goto LAB_CODE_0322;
                    }
                    if (cVar3 == '\x01') {
                      bEXTMEMf0aa = bEXTMEMf0aa & 0x78 | 1;
                    }
                    else {
                      bEXTMEMf0aa = bEXTMEMf0aa & 0xb8 | 2;
                    }
                  }
                  FUN_CODE_6105();
                  bEXTMEMeaee = 0xb4;
                }
                else if (bEXTMEMeaee != 0xb4) {
                  if (bEXTMEMeaee == 0xb5) {
                    if (_6_4 != '\x01') {
                      do {
                        _7_7 = _0_0 & 1 ^ 1;
                        if ((char)(_7_7 << 7) < '\0') {
                          cVar3 = '\x02';
                        }
                        else {
                          cVar3 = '\x03';
                        }
                        FUN_CODE_2a72();
                      } while (cVar3 == '\0');
                    }
                    cEXTMEMeb0c = '\0';
                    _3_7 = '\0';
                    bEXTMEMf0aa = bEXTMEMf0aa & 0xf8;
                    FUN_CODE_6105();
                    bEXTMEMeaee = 0xb6;
                  }
                  else if (bEXTMEMeaee != 0xb6) goto LAB_CODE_0322;
                  if ((((bEXTMEMf07c >> 2 & 1) == 1) ||
                      ((_3_5 == '\x01' && ((bEXTMEMf07c >> 6 & 1) == 1)))) &&
                     ((((bEXTMEMf0ad >> 6 & 1) == 0 ||
                       ((cEXTMEMebbf == '\0' || ((bEXTMEMf07d >> 2 & 1) == 1)))) &&
                      (((bEXTMEMf098 >> 5 & 1) == 0 && (_6_4 == '\0')))))) {
                    cEXTMEMebbf = '\0';
                    bEXTMEMeaee = 0xb3;
                    goto LAB_CODE_1b36;
                  }
                  goto LAB_CODE_0322;
                }
                if (((((bEXTMEMf07c >> 2 & 1) == 0) || ((bEXTMEMf098 >> 5 & 1) == 1)) ||
                    (((bEXTMEMf0a7 >> 5 & 1) != 0 && (cEXTMEMeb0c == '\x01')))) ||
                   ((char)bEXTMEMeacf < '\0')) {
                  bEXTMEMeaee = 0xb5;
                }
                if (((bEXTMEMf12e & 1) != 0) && (_3_7 != '\0')) {
                  if (((cEXTMEMeb0c == '\x01') && ((bEXTMEMf0cc >> 6 & 1) == 0)) ||
                     ((cEXTMEMeb0c == '\x02' && ((char)bEXTMEMf0cc < '\0')))) {
                    _3_7 = '\0';
                  }
                  else {
                    uVar9 = 0xf0cc;
                    if ((((bEXTMEMf0cc >> 6 & 1) != 1) &&
                        (FUN_CODE_2969(bEXTMEMf0cc), (uVar9 & 0xf) == 0)) ||
                       ((uVar9 = 0xf0cc, (char)bEXTMEMf0cc < '\0' &&
                        (FUN_CODE_2969(bEXTMEMf0cc), (uVar9 & 0xf0) == 0)))) {
                      bEXTMEMeaee = 0xb5;
                    }
                  }
                }
                if (((bEXTMEMf0ad >> 6 & 1) == 1) && (cEXTMEMeb6c != '\0')) {
                  cEXTMEMebbf = '\x01';
                  cEXTMEMeb6c = '\0';
                  bEXTMEMf07d = bEXTMEMf07d | 4;
                  bEXTMEMeaee = 0xb5;
                }
                goto LAB_CODE_0322;
              }
              _1_3 = '\0';
              _1_5 = '\0';
              _b_6 = 1;
              FUN_CODE_5515();
              bEXTMEMeaef = 0x10;
              goto LAB_CODE_0322;
            }
            cVar3 = -0x54;
            bVar2 = bEXTMEMf0ac;
            if ((((bEXTMEMf0ac >> 3 & 1) != 1) &&
                ((bVar2 = bEXTMEMeb18, (bEXTMEMeb18 & 0x30) == 0 ||
                 (cVar3 = '\x1b', (bEXTMEMeb19 & 1) == 1)))) || (_2_5 != 1)) {
              cVar3 = -0x11;
              bEXTMEMeaef = 0x62;
            }
            FUN_CODE_5bfc(bVar2);
            if ((((cVar3 != '\0') || ((char)bEXTMEMead3 < '\0')) && ((bEXTMEMf0ac >> 6 & 1) == 0))
               && (BANK0_R2 = BANK0_R2 & 0xf0, bEXTMEMeacf != 0x90)) {
              BANK0_R2 = BANK0_R2 | 0x90;
              BANK0_R2 = BANK0_R2 | bEXTMEMf0a8 & 4;
              bEXTMEMeacf = bEXTMEMeacf | ((bEXTMEMf0a9 & 0x10) >> 4) << 1;
            }
            goto LAB_CODE_0322;
          }
          if (bEXTMEMf0b7 != BANK0_R3) {
            FUN_CODE_1d64(uEXTMEMeba5);
          }
          if (bEXTMEMf13f != BANK0_R3) {
            FUN_CODE_20b6(uEXTMEMebae);
          }
          while (bEXTMEMf0b6 >> 4 != BANK0_R3) {
            FUN_CODE_28ff(uEXTMEMebab);
          }
          if (cEXTMEMea07 < '\0') {
            if (cEXTMEMeba4 == 'O') {
              bVar2 = 0x4f;
            }
            else {
              bVar2 = bEXTMEMf098;
              if ((bEXTMEMf098 >> 2 & 1) == 0) goto LAB_CODE_0eb2;
            }
            FUN_CODE_2623(bVar2);
          }
          else {
LAB_CODE_0eb2:
            uEXTMEMeba8 = 0x70;
          }
          if (cEXTMEMeafb < '\0') {
            FUN_CODE_6223(cEXTMEMeafb);
          }
          if ((((((bEXTMEMf07c >> 2 & 1) == 1) || ((bEXTMEMf07c >> 1 & 1) == 0)) || (_0_5 == '\x01')
               ) || (((_0_3 != '\0' && (cVar3 = -0x2d, -1 < (char)bEXTMEMead3)) &&
                     (FUN_CODE_5bfc(bEXTMEMead3), cVar3 == '\0')))) ||
             ((((cVar3 = -0x54, bVar2 = bEXTMEMf0ac, (bEXTMEMf0ac >> 3 & 1) != 1 && (_2_6 != '\x01')
                ) && (cVar3 = '\x1b', bVar2 = bEXTMEMeb18, (bEXTMEMeb1a & 1) == 0)) || (_2_5 != 1)))
             ) {
            bEXTMEMeaef = 0x32;
          }
          else {
            FUN_CODE_5bfc(bVar2);
            if ((((cVar3 == '\0') && (-1 < (char)bEXTMEMead3)) ||
                ((_0_7 == '\x01' || ((bEXTMEMf0ac >> 6 & 1) == 1)))) ||
               ((bEXTMEMead2 != 0 &&
                ((((bEXTMEMead2 & 0x22) == 0 || ((bEXTMEMf0ac >> 5 & 1) != 1)) &&
                 ((cEXTMEMeb9c == '\0' || ((bEXTMEMf0ad >> 5 & 1) == 0)))))))) {
              if (((_6_4 == '\0') && (bEXTMEMeaee != 0x34)) &&
                 ((cEXTMEMeba4 == 'O' || ((bEXTMEMeaee == 0x3a && (cEXTMEMeba4 == 'H')))))) {
                if (_5_0 == '\x01') {
                  if (((((bEXTMEMf164 >> 4 & 1) != 1) && ((bEXTMEMf164 >> 6 & 1) == 1)) ||
                      (_1_1 != '\0')) && (((bEXTMEMeaac & 1) != 1 && (cEXTMEMf150 == '\0')))) {
                    bEXTMEMeaac = bEXTMEMeaac | 1;
                    bEXTMEMf164 = bEXTMEMf164 | 0x40;
                    cEXTMEMf150 = cEXTMEMeb1d;
                    if (bEXTMEMeaee != 0x35) {
                      bEXTMEMeaee = 0x38;
                    }
                  }
                  if (((((bEXTMEMf165 >> 4 & 1) != 1) && ((bEXTMEMf165 >> 6 & 1) == 1)) ||
                      (_1_2 != '\0')) && (((bEXTMEMeaac >> 1 & 1) != 1 && (cEXTMEMf150 == '\0')))) {
                    bEXTMEMeaac = bEXTMEMeaac | 2;
                    bEXTMEMf165 = bEXTMEMf165 | 0x40;
                    cEXTMEMf150 = cEXTMEMeb1d;
                    if (bEXTMEMeaee != 0x35) {
                      bEXTMEMeaee = 0x38;
                    }
                  }
                  bVar2 = bEXTMEMeaac;
                  if (((bEXTMEMf164 >> 6 & 1) == 1) || (_1_6 != '\0')) {
                    if ((bEXTMEMeaac & 1) != 0) {
                      bEXTMEMeaac = bEXTMEMeaac & 0xfe;
                      bEXTMEMf160 = bEXTMEMf160 & 0xaa;
                      bEXTMEMf16a = bEXTMEMf16a & 0xfb;
                      uEXTMEMf04c = 0;
                      uEXTMEMf04e = 0;
                      bEXTMEMf050 = bEXTMEMf050 & 0xbf;
                      uEXTMEMeab0 = 0;
                      uEXTMEMeab2 = 0;
                      FUN_CODE_1d01(0xea80,bVar2);
                      cEXTMEMf150 = '\n';
                    }
                    _1_1 = '\0';
                    _5_5 = 0;
                    _5_7 = 0;
                    _2_2 = 0;
                    _2_0 = 0;
                    _1_6 = '\0';
                  }
                  if (((bEXTMEMf165 >> 6 & 1) == 1) || (_1_7 == '\x01')) {
                    if ((bEXTMEMeaac >> 1 & 1) != 0) {
                      bEXTMEMeaac = bEXTMEMeaac & 0xfd;
                      bEXTMEMf160 = bEXTMEMf160 & 0x55;
                      bEXTMEMf16a = bEXTMEMf16a & 0xfb;
                      uEXTMEMf04d = 0;
                      uEXTMEMf04f = 0;
                      bEXTMEMf051 = bEXTMEMf051 & 0xbf;
                      uEXTMEMeab1 = 0;
                      uEXTMEMeab3 = 0;
                      FUN_CODE_1d01(0xeaa0);
                      cEXTMEMf150 = '\n';
                    }
                    _1_2 = '\0';
                    _5_6 = 0;
                    _6_0 = 0;
                    _2_3 = 0;
                    _2_1 = 0;
                    _1_7 = '\0';
                  }
                }
                else {
                  if ((_1_1 != '\0') && ((bEXTMEMeaac & 1) != 1)) {
                    FUN_CODE_549b(CONCAT11(0xea,bEXTMEMeaac | 1));
                  }
                  if ((_1_2 != '\0') && ((bEXTMEMeaac >> 1 & 1) != 1)) {
                    FUN_CODE_549b(CONCAT11(0xea,bEXTMEMeaac | 2));
                  }
                }
              }
              if ((0x33 < bEXTMEMeaee) && (BANK0_R2 < 0x3b)) {
                    /* WARNING: Could not recover jumptable at 0x1165. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)((ushort)((bEXTMEMeaee - 0x34) * '\x03') + 0x1166))();
                return;
              }
            }
            else {
              bEXTMEMeacf = bEXTMEMeacf | 0x80;
              bEXTMEMeaef = 0x32;
            }
          }
          goto LAB_CODE_0322;
        }
        if (_6_4 != '\x01') {
          do {
            _7_7 = _0_0 & 1 ^ 1;
            if ((char)(_7_7 << 7) < '\0') {
              cVar3 = '\x02';
            }
            else {
              cVar3 = '\x03';
            }
            FUN_CODE_2a72();
          } while (cVar3 == '\0');
        }
        _3_3 = '\0';
        cEXTMEMeb0c = '\0';
        _3_7 = '\0';
        do {
        } while ((bEXTMEMf071 & 1) == 0);
        bEXTMEMf070 = bEXTMEMf070 | 1;
        bEXTMEMeaef = 0x10;
        goto LAB_CODE_0322;
      }
      bEXTMEMf0aa = bEXTMEMf0aa & 0xdf;
      _5_0 = '\0';
      _5_2 = '\0';
      _5_1 = 0;
      if (cEXTMEMeb0e != '\x01') {
        bEXTMEMf0aa = bEXTMEMf0aa | 0x80;
      }
      if (cEXTMEMeb0e == '\x02') {
        bVar2 = 2;
      }
      else {
        bVar2 = bEXTMEMf0aa;
        bEXTMEMf0aa = bEXTMEMf0aa | 0x40;
      }
      bEXTMEMf0aa = bEXTMEMf0aa & 0xf8;
      bEXTMEMf0a9 = bEXTMEMf0a9 & 0xc1;
      bEXTMEMf0b0 = bEXTMEMf0b0 & 0x7f;
      bEXTMEMf16a = bEXTMEMf16a & 0xfb;
      bEXTMEMf127 = 0;
      bEXTMEMf168 = bEXTMEMf168 & 0xfd;
      _c_6 = 0;
      FUN_CODE_5ce0(bVar2);
      FUN_CODE_6105();
      bEXTMEMf0b0 = bEXTMEMf0b0 & 0xbf | 7;
      cEXTMEMf154 = cEXTMEMeaf2;
      uEXTMEMebad = 0;
      if ((bEXTMEMf16b & 1) != 0) goto LAB_CODE_0322;
      _b_6 = 0;
      FUN_CODE_5515(bEXTMEMf16b);
      bEXTMEMeaef = 0x11;
LAB_CODE_0c93:
      cVar3 = -0x11;
      FUN_CODE_5bfc();
      if ((((cVar3 != '\0') || ((char)bEXTMEMead3 < '\0')) || ((bEXTMEMeacf & 0xf1) != 0)) &&
         ((_0_7 != '\x01' && ((bEXTMEMf0ac >> 6 & 1) != 1)))) {
        bEXTMEMeacf = bEXTMEMeacf | 0x80;
      }
      if ((bEXTMEMf07c >> 2 & 1) != 1) {
        cEXTMEMebbf = '\0';
      }
      if (((((bEXTMEMf0b0 & 0x18) == 0) && (cEXTMEMf155 == '\0')) && (_6_7 != '\x01')) &&
         ((bEXTMEMeac8 >> 1 & 1) != 1)) {
        bEXTMEMf0b0 = bEXTMEMf0b0 | 8;
      }
      _3_3 = '\0';
      _7_7 = _0_0 & 1 ^ 1;
      if ((char)(_7_7 << 7) < '\0') {
        cVar3 = '\x02';
      }
      else {
        cVar3 = '\x03';
      }
      FUN_CODE_2a72();
      FUN_CODE_5b50();
    } while (((cVar3 != '\0') || (FUN_CODE_5b7d(), cVar3 != '\0')) || ((bEXTMEMf11c >> 5 & 1) != 0))
    ;
    bVar2 = bEXTMEMf11a;
    if ((char)((_0_0 & 1 ^ 1) << 7) < '\0') {
      bVar2 = bEXTMEMf116;
    }
    _7_7 = bVar2 != 0;
  } while ((((bool)_7_7) || (bEXTMEMf114 != 0)) || ((bEXTMEMeb38 != 0 || (cEXTMEMf154 != '\0'))));
  cVar3 = -0x5a;
  if ((char)bEXTMEMf0a6 < '\0') {
    cVar10 = -0x52;
    cVar3 = -0x52;
    if ((bEXTMEMf0ae >> 5 & 1) != 0) {
      FUN_CODE_5c10(bEXTMEMf0ae);
      cVar3 = '\0';
      if (cVar10 != '\0') goto LAB_CODE_0322;
    }
  }
  FUN_CODE_5bfc();
  if (((((cVar3 == '\0') && (-1 < (char)bEXTMEMead3)) || ((bEXTMEMf0ac >> 6 & 1) == 1)) &&
      ((bEXTMEMf0d4 >> 4 & 1) == 0)) &&
     (((bEXTMEMeac3 >> 4 & 1) == 0 || ((bEXTMEMf0ae >> 5 & 1) == 0)))) {
    bVar2 = bEXTMEMf12f;
    if ((bEXTMEMf12f >> 3 & 1) != 0) {
      if (bEXTMEMeb53 != 0xe0) goto LAB_CODE_0322;
      bVar2 = 0xe0;
    }
    if (_0_7 == '\0') {
      _a_7 = 0;
      _b_0 = 0;
      FUN_CODE_4612(bVar2);
    }
  }
  goto LAB_CODE_0322;
}



/* =========================================================
 * CODE:1cbb  FUN_CODE_1cbb  size=22
 * callers: CODE:1d64, CODE:1ce5, CODE:1cd1, CODE:270a, CODE:2623, CODE:20b6
 * ========================================================= */

void FUN_CODE_1cbb(undefined1 param_1)

{
  uEXTMEMf0b9 = param_1;
  do {
  } while ((bEXTMEMf0b8 & 1) == 1);
  bEXTMEMf0b8 = 2;
  return;
}



/* =========================================================
 * CODE:1cd1  FUN_CODE_1cd1  size=20
 * callers: CODE:1d64, CODE:270a, CODE:20b6
 * ========================================================= */

void FUN_CODE_1cd1(char param_1)

{
  undefined1 uVar1;
  
  uVar1 = BANK0_R2;
  if (param_1 == -2) {
    FUN_CODE_1cbb(0xfe);
  }
  cEXTMEMf0b9 = param_1;
  do {
  } while ((bEXTMEMf0b8 & 1) == 1);
  bEXTMEMf0b8 = 2;
  BANK0_R2 = uVar1;
  return;
}



/* =========================================================
 * CODE:1ce5  FUN_CODE_1ce5  size=28
 * callers: CODE:1d01, CODE:02e9, CODE:36ca
 * ========================================================= */

void FUN_CODE_1ce5(byte param_1)

{
  undefined1 uVar1;
  
  uVar1 = BANK0_R2;
  FUN_CODE_1cbb(0xfe);
  BANK0_R2 = uVar1;
  FUN_CODE_1cbb(param_1);
  BANK0_R2 = uVar1;
  bEXTMEMf0b9 = ~param_1;
  do {
  } while ((bEXTMEMf0b8 & 1) == 1);
  bEXTMEMf0b8 = 2;
  return;
}



/* =========================================================
 * CODE:1d01  FUN_CODE_1d01  size=33
 * callers: CODE:02e9, CODE:1d22
 * ========================================================= */

void FUN_CODE_1d01(undefined1 param_1)

{
  if (cEXTMEMf155 != '\0') {
    return;
  }
  if (cEXTMEMeb23 != '\0') {
    return;
  }
  FUN_CODE_1ce5(CONCAT11(0xeb,param_1),0);
  return;
}



/* =========================================================
 * CODE:1d22  FUN_CODE_1d22  size=66
 * ========================================================= */

void FUN_CODE_1d22(void)

{
  char cVar1;
  
  if (((bEXTMEMeaac & 1) != 0) && (_5_5 != '\x01')) {
    if (_5_1 == '\0') {
      cVar1 = -0x7f;
    }
    else {
      cVar1 = -0x7b;
    }
    FUN_CODE_1d01();
    if (cVar1 == '\0') {
      return;
    }
  }
  if (((bEXTMEMeaac >> 1 & 1) != 0) && (_5_6 != '\x01')) {
    if (_5_1 == '\0') {
      cVar1 = -0x5f;
    }
    else {
      cVar1 = -0x5b;
    }
    FUN_CODE_1d01();
    if (cVar1 == '\0') {
      return;
    }
  }
  return;
}



/* =========================================================
 * CODE:1d64  FUN_CODE_1d64  size=850
 * callers: CODE:02e9
 * ========================================================= */

void FUN_CODE_1d64(undefined1 param_1,undefined1 param_2,byte param_3)

{
  undefined1 uVar1;
  char cVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  byte bVar6;
  char cVar7;
  char cVar8;
  byte bVar9;
  byte bVar10;
  undefined1 uVar11;
  byte *pbVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  short sVar15;
  
  uVar4 = BANK0_R4;
  uVar1 = BANK0_R3;
  DAT_INTMEM_37 = bEXTMEMeba5;
  sVar15 = (ushort)bEXTMEMeba5 * 0x80;
  cVar8 = (char)sVar15;
  cVar7 = (char)((ushort)sVar15 >> 8);
  BANK0_R5 = cVar8;
  bVar10 = *(byte *)CONCAT11((cVar7 - 0x12U) - (((0x81 < param_3) << 7) >> 7),param_3 + 0x7e);
  BANK0_R6 = cVar8;
  pbVar12 = (byte *)CONCAT11((cVar7 - 0x12U) - (((0x80 < cVar7 - 0x12U) << 7) >> 7),cVar7 + 'm');
  DAT_INTMEM_38 = *pbVar12;
  _8_1 = bVar10 >> 4 & 1;
  _8_2 = bVar10 >> 3 & 1;
  _8_3 = bVar10 >> 2 & 1;
  bVar3 = bVar10 >> 1;
  _8_4 = bVar3 & 1;
  _8_5 = bVar10 & 1;
  bVar6 = cVar7 - 0x12U;
  bVar9 = bVar10 >> 1 | bVar3 << 7;
  if ((_8_1 != 0) &&
     (pbVar12 = (byte *)0xeb1b, param_1 = uEXTMEMeb19, param_2 = uEXTMEMeb1b, bVar6 = bEXTMEMeb18,
     bVar9 = bEXTMEMeb1a, (bEXTMEMeb1a >> 4 & 1) != 1)) goto LAB_CODE_209f;
  if (_8_2 == 1) {
    FUN_CODE_1cbb(bVar9,CONCAT11((char)((ushort)pbVar12 >> 8),0xfe));
    BANK0_R5 = cVar8;
    FUN_CODE_1cd1(bVar10);
    cVar7 = BANK0_R2;
    uEXTMEMf0b8 = 0xc;
    bVar10 = 0;
    while( true ) {
      BANK0_R2 = cVar7;
      if (DAT_INTMEM_38 <= bVar10) break;
      cVar8 = ((char)((ushort)sVar15 >> 8) + -0x12) - ((CARRY1(bVar10,bVar6) << 7) >> 7);
      BANK0_R3 = uVar1;
      BANK0_R4 = uVar4;
      BANK0_R7 = (char)sVar15;
      FUN_CODE_1cd1(CONCAT11(cVar8,*(undefined1 *)CONCAT11(cVar8,bVar10 + bVar6)));
      uEXTMEMf0b8 = 8;
      bVar10 = bVar10 + 1;
    }
    BANK0_R3 = uVar1;
    BANK0_R4 = uVar4;
    FUN_CODE_1cd1(CONCAT11(0xf0,uEXTMEMf0ba));
    FUN_CODE_1cd1(CONCAT11(0xf0,uEXTMEMf0bb));
    FUN_CODE_1cbb(0xfe);
    FUN_CODE_1cd1(0x40);
    uEXTMEMf155 = uEXTMEMebaa;
    if (_8_3 != 0) {
      uEXTMEMf155 = 0;
    }
    goto LAB_CODE_209f;
  }
  if ((_8_3 != 1) || (_8_5 != 1)) {
    if ((_8_3 == 0) || (_8_5 == 1)) {
      if ((_8_3 != 1) && ((_8_5 != 0 && (uEXTMEMf155 = uEXTMEMebaa, _5_0 != '\0')))) {
        uEXTMEMf155 = 0;
      }
    }
    else {
      cVar2 = *(char *)(CONCAT11(cVar7 + -0x12,param_2) + 1);
      _8_0 = -(cVar2 >> 7);
      _0_1 = 1;
      bEXTMEMeba6 = bEXTMEMeba5;
      if (_8_0 == 0) {
        DAT_INTMEM_3c = *(char *)(CONCAT11(cVar7 + -0x12,cVar8) + 1);
      }
      else if ((*(char *)(CONCAT11(cVar7 + -0x12,cVar2) + 2) == '\0') && (DAT_INTMEM_38 == 3)) {
        DAT_INTMEM_3c = '\x01';
      }
      else {
        DAT_INTMEM_3c = '\0';
      }
      _0_2 = DAT_INTMEM_3c != '\0';
      BANK0_R2 = cVar8;
    }
    goto LAB_CODE_209f;
  }
  if (cEXTMEMeb23 != '\0') {
    return;
  }
  if (_3_6 != '\0') {
    uEXTMEMf158 = 0;
  }
  _3_6 = '\x01';
  uEXTMEMf155 = 0;
  DAT_INTMEM_3a = *(byte *)CONCAT11(cVar7 + -0x12,cVar8);
  _8_0 = *(byte *)(CONCAT11(cVar7 + -0x12,param_1) + 1) >> 7;
  pbVar12 = (byte *)(CONCAT11(cVar7 + -0x12,param_1) + 1);
  bVar6 = *pbVar12;
  DAT_INTMEM_3b = bVar6 & 0x7f;
  BANK0_R1 = BANK0_R1 | ((char)((bVar10 >> 2) << 7) >> 7) * -4;
  bVar10 = ((char)(bVar3 << 7) >> 7) * -2 | (bVar3 & 1) << 3;
  BANK0_R0 = cVar8;
  FUN_CODE_1cbb(CONCAT11((char)((ushort)pbVar12 >> 8),0xfe),0,bVar10);
  BANK0_R5 = cVar8;
  FUN_CODE_1cd1(bVar10);
  uEXTMEMf0b8 = 0xc;
  FUN_CODE_1cd1(CONCAT11(0xf0,DAT_INTMEM_3a));
  uEXTMEMf0b8 = 8;
  uVar5 = 0xeb;
  uVar11 = 0xeb;
  bVar10 = bEXTMEMeba9;
  if ((bEXTMEMeba9 < DAT_INTMEM_3a) << 7 < '\0') {
LAB_CODE_1f29:
    BANK0_R3 = uVar1;
    BANK0_R4 = uVar4;
    FUN_CODE_1cd1(CONCAT11(uVar11,_8_0 << 7),bVar10);
    uEXTMEMf0b8 = 8;
    if (_8_0 == 1) {
      FUN_CODE_1cd1(0xf001);
    }
  }
  else {
    if (_8_0 != 0) {
      uVar5 = 0;
      uVar11 = 0;
      bVar10 = *(byte *)((ushort)DAT_INTMEM_3a + 0x60);
      if (bVar10 != 1) goto LAB_CODE_1f29;
    }
    if (_8_0 != 0) {
      uVar11 = 0;
      bVar10 = *(byte *)((ushort)DAT_INTMEM_3a + 0x40);
      uVar5 = 0;
      if ((bVar10 < DAT_INTMEM_3b) << 7 < '\0') goto LAB_CODE_1f29;
    }
    uVar11 = uVar5;
    if (_8_0 != 0) {
      bVar10 = DAT_INTMEM_3b + 2;
      if ((bVar10 != BANK0_R1) || (-(((0xfd < DAT_INTMEM_3b) << 7) >> 7) != BANK0_R2))
      goto LAB_CODE_1f29;
    }
    if ((_8_0 != 1) && (DAT_INTMEM_38 != 2)) goto LAB_CODE_1f29;
    BANK0_R3 = uVar1;
    BANK0_R4 = uVar4;
    FUN_CODE_1cd1(*(byte *)((ushort)DAT_INTMEM_3a + 0x40) | _8_0 << 7,bVar10);
    cVar2 = BANK0_R6;
    cVar8 = BANK0_R5;
    cVar7 = BANK0_R2;
    uEXTMEMf0b8 = 8;
    puVar13 = (undefined1 *)0x0;
    puVar14 = (undefined1 *)
              CONCAT11(*(undefined1 *)((ushort)(DAT_INTMEM_3a * '\x02') + 0x81),
                       *(undefined1 *)((ushort)(DAT_INTMEM_3a * '\x02') + 0x80));
    if (_8_0 == 0) {
      if (*(byte *)((ushort)DAT_INTMEM_3a + 0x40) < DAT_INTMEM_3b) {
        DAT_INTMEM_3b = *(byte *)((ushort)DAT_INTMEM_3a + 0x40);
      }
      BANK0_R3 = uVar1;
      BANK0_R4 = uVar4;
      for (bVar10 = 0; uEXTMEMf0b8 = 8, BANK0_R2 = cVar7, BANK0_R5 = cVar8, BANK0_R6 = cVar2,
          bVar10 < DAT_INTMEM_3b; bVar10 = bVar10 + 1) {
        uVar1 = *puVar14;
        puVar14 = puVar14 + 1;
        FUN_CODE_1cd1(CONCAT11((char)((ushort)puVar14 >> 8),uVar1));
      }
    }
    else {
      DAT_INTMEM_39 = 0;
      while( true ) {
        DAT_INTMEM_3d = (undefined1)((ushort)puVar14 >> 8);
        DAT_INTMEM_3c = (char)puVar14;
        if (DAT_INTMEM_3b <= DAT_INTMEM_39) break;
        *puVar14 = *(undefined1 *)
                    CONCAT11(((char)((ushort)sVar15 >> 8) + -0x12) -
                             ((CARRY1(DAT_INTMEM_39 + 2,bVar6) << 7) >> 7),DAT_INTMEM_39 + 2 + bVar6
                            );
        puVar13 = puVar14 + 1;
        DAT_INTMEM_39 = DAT_INTMEM_39 + 1;
        BANK0_R0 = (char)sVar15;
        puVar14 = puVar13;
      }
      BANK0_R3 = uVar1;
      BANK0_R4 = uVar4;
      FUN_CODE_1cd1((ushort)puVar13 & 0xff00);
    }
  }
  uEXTMEMf0b8 = 8;
  FUN_CODE_1cd1(CONCAT11(0xf0,uEXTMEMf0ba));
  FUN_CODE_1cd1(CONCAT11(0xf0,uEXTMEMf0bb));
  FUN_CODE_1cbb(0xfe);
  FUN_CODE_1cd1(0x40);
LAB_CODE_209f:
  bEXTMEMeba5 = bEXTMEMeba5 + 1;
  if (3 < bEXTMEMeba5) {
    bEXTMEMeba5 = 0;
  }
  return;
}



/* =========================================================
 * CODE:20b6  FUN_CODE_20b6  size=323
 * callers: CODE:02e9
 * ========================================================= */

void FUN_CODE_20b6(byte param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  byte bVar7;
  byte bVar8;
  short sVar9;
  
  uVar3 = BANK0_R4;
  uVar2 = BANK0_R3;
  sVar9 = (ushort)bEXTMEMebae * 0x80;
  bVar7 = (byte)sVar9;
  cVar6 = (char)((ushort)sVar9 >> 8);
  bVar4 = *(byte *)CONCAT11((cVar6 - 0x14U) - (((0x81 < param_1) << 7) >> 7),param_1 + 0x7e);
  bVar8 = cVar6 - 0x14;
  cVar1 = bVar8 - (((0x80 < cVar6 - 0x14U) << 7) >> 7);
  _8_7 = bVar4 >> 4 & 1;
  _9_0 = bVar4 >> 3 & 1;
  _9_1 = bVar4 >> 2 & 1;
  _9_2 = bVar4 & 1;
  BANK0_R5 = bVar7;
  BANK0_R6 = bVar7;
  if ((_9_0 == 1) && (_8_7 == 1)) {
    FUN_CODE_1cbb(bVar4 >> 1 | (bVar4 >> 2) << 7,CONCAT11(cVar1,0xfe));
    BANK0_R5 = bVar7;
    BANK0_R6 = bVar7;
    FUN_CODE_1cd1(bVar4);
    bVar4 = BANK0_R5;
    uEXTMEMf0b8 = 0xc;
    bVar5 = 0;
    while( true ) {
      BANK0_R3 = uVar2;
      BANK0_R4 = uVar3;
      BANK0_R5 = bVar4;
      if (bVar7 <= bVar5) break;
      cVar1 = ((char)((ushort)sVar9 >> 8) + -0x14) - ((CARRY1(bVar5,bVar8) << 7) >> 7);
      BANK0_R6 = bVar7;
      BANK0_R7 = (char)sVar9;
      FUN_CODE_1cd1(CONCAT11(cVar1,*(undefined1 *)CONCAT11(cVar1,bVar5 + bVar8)));
      uEXTMEMf0b8 = 8;
      bVar5 = bVar5 + 1;
    }
    BANK0_R6 = bVar7;
    FUN_CODE_1cd1(CONCAT11(0xf0,uEXTMEMf0ba));
    FUN_CODE_1cd1(CONCAT11(0xf0,uEXTMEMf0bb));
    FUN_CODE_1cbb(0xfe);
    FUN_CODE_1cd1(0x40);
  }
  else if (((_9_1 != 0) && (_9_2 != 1)) && (_8_7 != 0)) {
    _8_6 = -(*(char *)(CONCAT11(cVar6 + -0x14,bVar4) + 1) >> 7);
    _0_1 = 1;
    bEXTMEMeba6 = bEXTMEMebae | 0x80;
    if (_8_6 == '\0') {
      _9_3 = *(char *)(CONCAT11(cVar6 + -0x14,bVar7) + 1) != '\0';
    }
    else {
      BANK0_R2 = bVar7;
      if ((*(char *)(CONCAT11(cVar6 + -0x14,bEXTMEMebae) + 2) == '\0') &&
         (*(char *)CONCAT11(cVar1,cVar6 + 'k') == '\x03')) {
        _9_3 = true;
      }
      else {
        _9_3 = false;
      }
    }
    _0_2 = _9_3;
  }
  bEXTMEMebae = bEXTMEMebae + 1;
  if (3 < bEXTMEMebae) {
    bEXTMEMebae = 0;
  }
  return;
}



/* =========================================================
 * CODE:21f9  FUN_CODE_21f9  size=1066
 * ========================================================= */

void FUN_CODE_21f9(undefined1 param_1,undefined1 param_2)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  
  if ((bEXTMEMf098 >> 2 & 1) != 0) {
    if (cEXTMEMeba4 != 'O') {
      cEXTMEMeba4 = '@';
    }
    return;
  }
  if (cEXTMEMf155 != '\0') {
    return;
  }
  if (cEXTMEMeba4 == '@') {
    _1_1 = '\0';
    _1_2 = '\0';
    _0_1 = 0;
    uEXTMEMf158 = 0;
    cEXTMEMeba7 = -1;
    uEXTMEMebac = 0;
    cEXTMEMeb9c = '\0';
    uEXTMEMeb94 = 0;
    uEXTMEMeb95 = 0;
    uEXTMEMeb96 = 0;
    uEXTMEMeb97 = 0;
    bEXTMEMeb99 = 0;
    uEXTMEMeb98 = 0;
    bEXTMEMeab0 = 0;
    bEXTMEMeab1 = 0;
    bEXTMEMeab2 = 0;
    bEXTMEMeab3 = 0;
    cEXTMEMeba4 = 'C';
LAB_CODE_2299:
    DAT_INTMEM_3f = '\n';
    DAT_INTMEM_3e = '\x01';
    DAT_INTMEM_42 = 0x3f;
    DAT_INTMEM_44 = 0x3e;
    DAT_INTMEM_45 = 0x9c;
    DAT_INTMEM_46 = 0xeb;
    DAT_INTMEM_43 = 0;
    cVar2 = '\x05';
    FUN_CODE_270a();
    if (cVar2 != '\0') {
      if ((DAT_INTMEM_3f == '\n') && (DAT_INTMEM_3e == '\x01')) {
        cEXTMEMeba7 = -1;
        cEXTMEMeba4 = 'F';
      }
      else {
        cEXTMEMeb9c = '\0';
      }
    }
    return;
  }
  if (cEXTMEMeba4 == 'C') goto LAB_CODE_2299;
  cVar2 = cEXTMEMeba4;
  if (cEXTMEMeba4 == 'F') {
    if ((((cEXTMEMea00 != '\0') && (_1_1 != '\x01')) && (_1_2 != '\x01')) &&
       (cVar2 = cEXTMEMebad, cEXTMEMebad == '\0')) {
      return;
    }
    cEXTMEMeba7 = '\n';
    cEXTMEMeba4 = 'G';
LAB_CODE_22fe:
    DAT_INTMEM_3f = '\f';
    DAT_INTMEM_3e = 2;
    DAT_INTMEM_42 = 0x3f;
    DAT_INTMEM_44 = 0x3e;
    DAT_INTMEM_45 = 0x98;
    DAT_INTMEM_46 = 0xeb;
    DAT_INTMEM_43 = 0;
    cVar3 = '\x05';
    FUN_CODE_270a(cVar2);
    if (cVar3 == '\0') {
      return;
    }
    if (((DAT_INTMEM_3f != '\f') || (DAT_INTMEM_3e == 0)) && (cEXTMEMeba7 != '\0')) {
      uEXTMEMeb98 = 0;
      bEXTMEMeb99 = 0;
      return;
    }
    if ((DAT_INTMEM_3e < 2) || (cEXTMEMeba7 == '\0')) {
      if ((cEXTMEMeb9c == '\0') && (cEXTMEMea00 == '\0')) {
        bEXTMEMeb99 = 3;
      }
      else {
        bEXTMEMeb99 = 1;
      }
    }
    cEXTMEMeba4 = 0x4f;
    return;
  }
  if (cEXTMEMeba4 == 'G') goto LAB_CODE_22fe;
  if (cEXTMEMeba4 == 'H') {
    _0_1 = 0;
    uEXTMEMf158 = 0;
    cEXTMEMeba7 = -1;
    cEXTMEMeba4 = 'I';
LAB_CODE_23cc:
    DAT_INTMEM_3f = '\r';
    DAT_INTMEM_3e = '\b';
    if ((_5_2 == '\x01') ||
       (param_1 = uEXTMEMeb19, param_2 = uEXTMEMeb1b, (bEXTMEMeb1a >> 4 & 1) == 1)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    uEXTMEMeb23 = !bVar1;
    if (_5_2 == '\0') {
      cVar2 = '\0';
    }
    else {
      cVar2 = '\x04';
    }
    BANK0_R2 = BANK0_R2 | 1;
    DAT_INTMEM_42 = 0x3f;
    DAT_INTMEM_44 = 0x3e;
    DAT_INTMEM_45 = 0x8c;
    DAT_INTMEM_46 = 0xeb;
    DAT_INTMEM_43 = 0;
    FUN_CODE_270a(param_1,param_2);
    if (cVar2 == '\0') {
      return;
    }
    if (DAT_INTMEM_3f != '\r') {
      return;
    }
    if ((DAT_INTMEM_3e != '\b') && (DAT_INTMEM_3e != '\x04')) {
      return;
    }
    bEXTMEMf04c = bEXTMEMeb8c;
    bEXTMEMf04d = bEXTMEMeb8d;
    bEXTMEMf04e = bEXTMEMeb8e & 0xbf;
    bEXTMEMf04f = bEXTMEMeb8f & 0xbf;
    uEXTMEMeb23 = 0;
    if (_5_2 == '\x01') {
      if ((bEXTMEMeb8e >> 6 & 1) == 0) {
        bEXTMEMf050 = bEXTMEMf050 & 0xbf;
      }
      else {
        bEXTMEMf050 = bEXTMEMf050 | 0x40;
      }
      if ((bEXTMEMeb8f >> 6 & 1) == 0) {
        bEXTMEMf051 = bEXTMEMf051 & 0xbf;
      }
      else {
        bEXTMEMf051 = bEXTMEMf051 | 0x40;
      }
      bEXTMEMeab0 = bEXTMEMf050 & 0xbf;
      bEXTMEMeab1 = bEXTMEMf051 & 0xbf;
      if ((bEXTMEMeb8c >> 6 & 1) == 0) {
        bEXTMEMeab2 = bEXTMEMf052 & 0xbf;
      }
      else {
        bEXTMEMeab2 = bEXTMEMf052 | 0x40;
      }
      if ((bEXTMEMeb8d >> 6 & 1) == 0) {
        bEXTMEMeab3 = bEXTMEMf053 & 0xbf;
      }
      else {
        bEXTMEMeab3 = bEXTMEMf053 | 0x40;
      }
      cEXTMEMeba4 = 0x4f;
      return;
    }
    cEXTMEMeba4 = 'J';
  }
  else {
    if (cEXTMEMeba4 == 'I') goto LAB_CODE_23cc;
    if (cEXTMEMeba4 != 'J') {
      if (cEXTMEMeba4 != 'K') {
        if (cEXTMEMeba4 != 'O') {
          return;
        }
        if ((bEXTMEMeb99 >> 4 & 1) != 0) {
          bEXTMEMead5 = bEXTMEMead5 | 1;
        }
        if ((bEXTMEMeb99 >> 5 & 1) != 0) {
          bEXTMEMead5 = bEXTMEMead5 | 2;
        }
        if (_5_0 == '\0') {
          FUN_CODE_549b(CONCAT11(0xea,bEXTMEMeaad & bEXTMEMeb99) & 0xff03);
        }
        else {
          bEXTMEMeaac = bEXTMEMeaad & bEXTMEMeb99 & 3;
        }
        return;
      }
      goto LAB_CODE_2594;
    }
  }
  if (((char)bEXTMEMf04c < '\0') && ((bEXTMEMf04c >> 6 & 1) != 0)) {
    bEXTMEMf04c = bEXTMEMf04c & 0x7f;
  }
  if (((char)bEXTMEMf04d < '\0') && ((bEXTMEMf04d >> 6 & 1) != 0)) {
    bEXTMEMf04d = bEXTMEMf04d & 0x7f;
  }
  if ((char)bEXTMEMf04c < '\0') {
    return;
  }
  if ((char)bEXTMEMf04d < '\0') {
    return;
  }
  bEXTMEMeb90 = bEXTMEMf050 & 0xbf;
  bEXTMEMeb91 = bEXTMEMf051 & 0xbf;
  bEXTMEMeb92 = bEXTMEMf052;
  bEXTMEMeb93 = bEXTMEMf053;
  cEXTMEMeba4 = 'K';
LAB_CODE_2594:
  DAT_INTMEM_3f = 0xd;
  DAT_INTMEM_3e = 8;
  BANK0_R4 = BANK0_R4 & 0x10;
  uEXTMEMeb23 = bEXTMEMeb1a == 0;
  DAT_INTMEM_42 = 0x3f;
  DAT_INTMEM_44 = 0x3e;
  DAT_INTMEM_45 = 0x8c;
  DAT_INTMEM_46 = 0xeb;
  DAT_INTMEM_43 = 0x80;
  cVar2 = '\x01';
  FUN_CODE_270a();
  if (cVar2 == '\0') {
    return;
  }
  if ((char)bEXTMEMf050 < '\0') {
    bEXTMEMf050 = bEXTMEMf050 | 0x40;
  }
  if ((char)bEXTMEMf051 < '\0') {
    bEXTMEMf051 = bEXTMEMf051 | 0x40;
  }
  bEXTMEMeab0 = bEXTMEMf050;
  bEXTMEMeab1 = bEXTMEMf051;
  bEXTMEMeab2 = bEXTMEMf052;
  bEXTMEMeab3 = bEXTMEMf053;
  uEXTMEMeb23 = 0;
  cEXTMEMeba4 = 0x4f;
  return;
}



/* =========================================================
 * CODE:2623  FUN_CODE_2623  size=231
 * callers: CODE:02e9
 * ========================================================= */

void FUN_CODE_2623(void)

{
  char cVar1;
  byte bVar2;
  undefined1 uVar3;
  byte bVar4;
  byte bVar5;
  
  uVar3 = BANK0_R3;
  DAT_INTMEM_40 = bEXTMEMea06 & 0x7f;
  DAT_INTMEM_41 = uEXTMEMea05;
  bVar2 = BANK0_R2 & 0x80;
  BANK0_R2 = bVar2;
  bVar5 = 0;
  if ((((bEXTMEMea07 >> 6 & 1) != 0) && (cEXTMEMf155 != '\0')) && (cEXTMEMeba8 != 'q')) {
    return;
  }
  if (cEXTMEMeba8 == 'p') {
    _0_1 = 0;
    uEXTMEMf158 = 0;
    uEXTMEMeba7 = 1;
    cEXTMEMeba8 = 'q';
  }
  else if (cEXTMEMeba8 != 'q') {
    BANK0_R3 = uVar3;
    if (cEXTMEMeba8 != '\x7f') {
      return;
    }
    goto LAB_CODE_26e0;
  }
  if ((bEXTMEMea07 >> 6 & 1) == 0) {
    for (bVar4 = 0; BANK0_R2 = bVar2, BANK0_R3 = uVar3, bVar4 < 3; bVar4 = bVar4 + 1) {
      cVar1 = -0x16 - (((0xf7 < bVar4) << 7) >> 7);
      FUN_CODE_1cbb(CONCAT11(cVar1,*(undefined1 *)CONCAT11(cVar1,bVar4 + 8)));
    }
  }
  else {
    if (bEXTMEMea06 == 0) {
      DAT_INTMEM_45 = 0x48;
    }
    else {
      DAT_INTMEM_45 = 8;
    }
    DAT_INTMEM_42 = 0x41;
    DAT_INTMEM_43 = bEXTMEMea06;
    DAT_INTMEM_44 = 0x40;
    DAT_INTMEM_46 = 0xea;
    bVar5 = bEXTMEMea04;
    FUN_CODE_270a();
    if (bVar5 == 0) {
      return;
    }
  }
LAB_CODE_26e0:
  cEXTMEMeba8 = 0x70;
  bEXTMEMea07 = (bEXTMEMea07 & 0xf0 | bVar5) & 0x7f;
  bEXTMEMea06 = bEXTMEMea06 & 0x80 | DAT_INTMEM_40;
  return;
}



/* =========================================================
 * CODE:270a  FUN_CODE_270a  size=501
 * callers: CODE:21f9, CODE:2623
 * ========================================================= */

void FUN_CODE_270a(undefined1 param_1,undefined1 param_2)

{
  char cVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined1 uVar6;
  
  bVar3 = bEXTMEMeba7;
  bVar4 = bEXTMEMeba6;
  pbVar2 = DAT_INTMEM_44;
  _9_4 = bEXTMEMeba6 >> 7;
  if ((char)bEXTMEMeba6 < '\0') {
    DAT_INTMEM_4a = -0x14;
  }
  else {
    DAT_INTMEM_4a = -0x12;
  }
  DAT_INTMEM_49 = 0;
  bEXTMEMeba6 = bEXTMEMeba6 & 0x7f;
  DAT_INTMEM_47 = param_1;
  if ((_0_1 == '\x01') && (_0_2 == '\x01')) {
    BANK0_R5 = *DAT_INTMEM_44;
    BANK0_R6 = BANK0_R6 & 0x7f;
    if (BANK0_R6 <= bVar4) {
      bVar4 = (byte)((ushort)bEXTMEMeba6 * 0x80);
      bVar4 = *(byte *)CONCAT11(((char)((ushort)bEXTMEMeba6 * 0x80 >> 8) -
                                (((0xfe < bVar4) << 7) >> 7)) + DAT_INTMEM_4a,bVar4 + 1) & 0x7f;
    }
    *DAT_INTMEM_44 = BANK0_R5;
    if (DAT_INTMEM_43 == 0) {
      BANK0_R5 = *pbVar2;
      param_2 = 0;
      if ((bVar4 + 2 != BANK0_R2) || (-(((0xfd < bVar4) << 7) >> 7) != BANK0_R7)) {
        _0_2 = '\0';
        goto LAB_CODE_2829;
      }
    }
    bVar4 = (byte)((ushort)bEXTMEMeba6 * 0x80);
    *DAT_INTMEM_42 =
         *(undefined1 *)
          CONCAT11(DAT_INTMEM_4a +
                   ((char)((ushort)bEXTMEMeba6 * 0x80 >> 8) -
                   ((CARRY1(bVar4,DAT_INTMEM_49) << 7) >> 7)),bVar4 + DAT_INTMEM_49);
    if (DAT_INTMEM_43 == 0) {
      for (DAT_INTMEM_48 = DAT_INTMEM_43; BANK0_R5 = *pbVar2, DAT_INTMEM_48 < BANK0_R5;
          DAT_INTMEM_48 = DAT_INTMEM_48 + 1) {
        bVar4 = (byte)((ushort)bEXTMEMeba6 * 0x80);
        bVar3 = DAT_INTMEM_48 + bVar4;
        bVar5 = bVar3 + 2;
        *(undefined1 *)
         CONCAT11(DAT_INTMEM_46 - ((CARRY1(DAT_INTMEM_48,DAT_INTMEM_45) << 7) >> 7),
                  DAT_INTMEM_48 + DAT_INTMEM_45) =
             *(undefined1 *)
              CONCAT11((((char)((ushort)bEXTMEMeba6 * 0x80 >> 8) -
                        ((CARRY1(DAT_INTMEM_48,bVar4) << 7) >> 7)) - (((0xfd < bVar3) << 7) >> 7)) +
                       (DAT_INTMEM_4a - ((CARRY1(bVar5,DAT_INTMEM_49) << 7) >> 7)),
                       bVar5 + DAT_INTMEM_49);
      }
    }
    _0_1 = 0;
    cEXTMEMf158 = 0;
    return;
  }
LAB_CODE_2829:
  if ((cEXTMEMf158 == '\0') || ((_0_1 == '\x01' && (_0_2 == '\0')))) {
    if (bEXTMEMeba7 == 0) {
      _0_1 = 0;
      if (cEXTMEMf158 == '\0') {
        return;
      }
      cEXTMEMf158 = 0;
      return;
    }
    if (bEXTMEMeba7 != 0xff) {
      bEXTMEMeba7 = bEXTMEMeba7 - 1;
    }
    uVar6 = 0xeb;
    FUN_CODE_1cbb(0xebfe,param_2);
    FUN_CODE_1cd1(CONCAT11(uVar6,DAT_INTMEM_47));
    uEXTMEMf0b8 = 0xc;
    FUN_CODE_1cd1(CONCAT11(0xf0,*DAT_INTMEM_42));
    uVar6 = BANK0_R0;
    uEXTMEMf0b8 = 8;
    BANK0_R2 = *DAT_INTMEM_44;
    pbVar2 = DAT_INTMEM_44;
    FUN_CODE_1cd1(CONCAT11(0xf0,DAT_INTMEM_43 | bVar3));
    bVar4 = BANK0_R2;
    if (DAT_INTMEM_43 != 0) {
      bVar3 = 0;
      while( true ) {
        uEXTMEMf0b8 = 8;
        BANK0_R3 = *pbVar2;
        if (BANK0_R3 <= bVar3) break;
        cVar1 = DAT_INTMEM_46 - ((CARRY1(bVar3,DAT_INTMEM_45) << 7) >> 7);
        BANK0_R0 = uVar6;
        BANK0_R2 = bVar4;
        FUN_CODE_1cd1(CONCAT11(cVar1,*(undefined1 *)CONCAT11(cVar1,bVar3 + DAT_INTMEM_45)));
        bVar3 = bVar3 + 1;
      }
    }
    uEXTMEMf0b8 = 8;
    BANK0_R0 = uVar6;
    BANK0_R2 = bVar4;
    FUN_CODE_1cd1(CONCAT11(0xf0,uEXTMEMf0ba));
    FUN_CODE_1cd1(CONCAT11(0xf0,uEXTMEMf0bb));
    FUN_CODE_1cbb(0xfe);
    FUN_CODE_1cd1(0x40);
    _0_1 = '\0';
    _3_6 = 0;
    cEXTMEMf158 = cEXTMEMeaf3;
  }
  return;
}



/* =========================================================
 * CODE:28ff  FUN_CODE_28ff  size=106
 * callers: CODE:02e9, CODE:36ca
 * ========================================================= */

void FUN_CODE_28ff(void)

{
  char cVar1;
  
  cVar1 = *(char *)CONCAT11(-0x15 - (((0xf < bEXTMEMebab) << 7) >> 7),bEXTMEMebab - 0x10);
  if (cVar1 == -0x80) {
    _1_6 = 1;
  }
  if (cVar1 == -0x60) {
    _1_7 = 1;
  }
  if (cVar1 == -0x7f) {
    _1_1 = 1;
  }
  if (cVar1 == -0x5f) {
    _1_2 = 1;
  }
  if (cVar1 == -0x7d) {
    _0_3 = 1;
  }
  if (cVar1 == -0x5d) {
    _0_3 = 1;
  }
  if (cVar1 == -0x7e) {
    _2_0 = 1;
  }
  if (cVar1 == -0x5e) {
    _2_1 = 1;
  }
  if (cVar1 == -0x7b) {
    _1_1 = 1;
  }
  if (cVar1 == -0x5b) {
    _1_2 = 1;
  }
  if (cVar1 == -0x79) {
    _2_4 = 1;
  }
  if (cVar1 == -0x59) {
    _2_4 = 1;
  }
  if (cVar1 == -0x7a) {
    _2_2 = 1;
  }
  if (cVar1 == -0x5a) {
    _2_3 = 1;
  }
  bEXTMEMebab = bEXTMEMebab + 1;
  if (bEXTMEMebab == '\x10') {
    bEXTMEMebab = '\0';
  }
  return;
}



/* =========================================================
 * CODE:2969  FUN_CODE_2969  size=17
 * callers: CODE:2a72, CODE:29bd, CODE:02e9, CODE:2acf
 * ========================================================= */

undefined1 FUN_CODE_2969(char param_1)

{
  BANK3_R0 = 0xf;
  BANK3_R1 = 1;
  BANK3_R2 = 2;
  _d_0 = 0;
  BANK0_R3 = 0;
  uEXTMEMf094 = 0xf;
  bEXTMEMf095 = param_1 << 5 | 1;
  uEXTMEMf096 = 0x10;
  uEXTMEMf097 = 0;
  return uEXTMEMf093;
}



/* =========================================================
 * CODE:297a  FUN_CODE_297a  size=67
 * callers: CODE:2a72, CODE:29bd, CODE:2acf
 * ========================================================= */

void FUN_CODE_297a(undefined2 param_1,undefined1 param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  
  uVar1 = BANK0_R2;
  uVar2 = (undefined1)param_1;
  BANK3_R0 = 0xf;
  BANK3_R1 = 1;
  BANK3_R2 = 2;
  _d_0 = 0;
  uVar3 = (undefined1)((ushort)param_1 >> 8);
  BANK3_R6 = FUN_CODE_61d0();
  BANK0_R2 = uVar1;
  BANK3_R3 = uVar2;
  BANK3_R4 = uVar3;
  BANK3_R5 = param_2;
  BANK3_R0 = 0xf;
  BANK3_R1 = 1;
  BANK3_R2 = 2;
  _c_7 = 0;
  uEXTMEMf090 = uVar2;
  uEXTMEMf091 = uVar3;
  uEXTMEMf092 = param_2;
  uEXTMEMf093 = BANK3_R6;
  BANK0_R3 = 0;
  uEXTMEMf094 = 0xf;
  uEXTMEMf095 = 1;
  uEXTMEMf096 = 0x30;
  uEXTMEMf097 = 0;
  return;
}



/* =========================================================
 * CODE:29bd  FUN_CODE_29bd  size=181
 * ========================================================= */

void FUN_CODE_29bd(byte param_1)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  
  FUN_CODE_2969();
  DAT_INTMEM_4b = param_1;
  if ((((_9_5 != 0) && (-1 < cEXTMEMf12f)) && ((param_1 & 0xf) != 0)) && ((param_1 & 0xf0) != 0)) {
    return;
  }
  uVar3 = 0xf0a7;
  if (((bEXTMEMf0a7 & 0x20) == 0) == (bool)(_9_5 & 1)) {
    do {
      FUN_CODE_5651();
    } while ((char)uVar3 == '\0');
    FUN_CODE_2969();
    DAT_INTMEM_4b = (byte)uVar3;
    BANK3_R0 = 0xf;
    BANK3_R1 = 1;
    BANK3_R2 = 2;
    _d_0 = 0;
    uVar3 = uVar3 & 0xff00;
    FUN_CODE_61d0();
    cVar1 = (char)uVar3;
    bVar2 = (byte)(uVar3 >> 8);
    BANK0_R4 = BANK0_R4 & 0x7f;
    BANK0_R0 = BANK0_R0 & 0x80;
    BANK3_R4 = _9_5 << 7 | bVar2;
    BANK3_R5 = 0;
    BANK3_R6 = 0;
    BANK3_R0 = 0xf;
    BANK3_R1 = 1;
    BANK3_R2 = 2;
    _c_7 = 0;
    BANK3_R3 = cVar1;
    FUN_CODE_617c((ushort)bVar2 << 8);
    if (((_9_5 != 0) && ((bEXTMEMead3 >> 4 & 1) != 0)) && ((DAT_INTMEM_4b & 0xf) == 1)) {
      bEXTMEMf0aa = bEXTMEMf0aa & 0x7f;
      FUN_CODE_297a(CONCAT11(0xf0,DAT_INTMEM_4b & 0xf0));
    }
    BANK3_R0 = 0xc;
    BANK3_R1 = 1;
    BANK3_R2 = 2;
    _c_7 = 0;
    BANK3_R3 = 0;
    BANK3_R4 = 0;
    BANK3_R5 = 0;
    BANK3_R6 = 0;
    uEXTMEMf090 = 0;
    uEXTMEMf091 = 0;
    uEXTMEMf092 = 0;
    uEXTMEMf093 = 0;
    BANK0_R3 = 0;
    uEXTMEMf094 = 0xc;
    bEXTMEMf095 = cVar1 << 5 | 1;
    uEXTMEMf096 = 0x30;
    uEXTMEMf097 = 0;
    return;
  }
  return;
}



/* =========================================================
 * CODE:2a72  FUN_CODE_2a72  size=93
 * callers: CODE:02e9
 * ========================================================= */

void FUN_CODE_2a72(byte param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  
  bVar1 = BANK0_R2;
  bVar4 = param_1;
  FUN_CODE_2969(param_1);
  bVar3 = 0xff;
  if ((bVar4 & 0xf) == bVar1) {
    bVar3 = 0xf0;
  }
  BANK0_R3 = BANK0_R3 & 0xf0;
  if ((bVar4 == bVar1) && (BANK0_R5 == '\0')) {
    BANK0_R4 = BANK0_R4 & 0xf;
  }
  bVar2 = BANK0_R4;
  BANK0_R2 = bVar1;
  if (bVar3 != 0xff) {
    FUN_CODE_5651((param_1 >> 4 | param_1 << 4) ^ param_1 << 4);
    BANK0_R4 = bVar2;
    if (bVar4 == 0) {
      return;
    }
    FUN_CODE_2969();
    BANK0_R4 = bVar2;
    FUN_CODE_297a(bVar4 & bVar3);
    FUN_CODE_56bf();
  }
  return;
}



/* =========================================================
 * CODE:2acf  FUN_CODE_2acf  size=325
 * callers: CODE:02e9
 * ========================================================= */

void FUN_CODE_2acf(ushort param_1,byte param_2)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  byte bVar5;
  char cVar6;
  char cVar7;
  byte bVar8;
  byte bVar9;
  undefined1 uVar10;
  byte bVar11;
  
  bVar1 = BANK0_R2;
  bVar5 = (byte)param_1;
  FUN_CODE_2969();
  uVar3 = BANK0_R5;
  bVar11 = (byte)param_1;
  BANK0_R2 = bVar1;
  cVar6 = (bVar11 & 0xf) == bVar1;
  BANK0_R6 = bVar5;
  bVar9 = param_2 << 4;
  if (((bVar11 & 0xf0) == bVar5) && (BANK0_R7 == '\0')) {
    cVar6 = '\x02';
  }
  cVar7 = bVar5 == 4;
  bVar8 = bVar9;
  if (((((bool)cVar7) && (bVar11 = 0xab, bVar8 = bEXTMEMf0ab, (bEXTMEMf0ab & 1) != 0)) &&
      ((param_1 & 0xf) != 0)) && (cVar6 != '\x01')) {
    return;
  }
  if (cVar6 != '\0') {
    return;
  }
  FUN_CODE_5651(bVar8,(param_2 >> 4 | bVar9) ^ bVar9);
  BANK0_R5 = uVar3;
  BANK0_R2 = bVar1;
  if (bVar11 == 0) {
    return;
  }
  FUN_CODE_2969();
  uVar2 = BANK0_R4;
  if (((((bVar11 & 0xf) != 0) || (((bEXTMEMf0a7 >> 5 & 1) != 0 && (cVar7 == '\0')))) &&
      ((bVar11 & 0xf0) != 0)) ||
     (((cVar7 != '\0' && ((bEXTMEMf0ab & 1) != 0)) && ((bVar11 & 0xf) != 0)))) {
    BANK0_R2 = bVar1;
    BANK0_R5 = uVar3;
    FUN_CODE_56bf();
    return;
  }
  uVar10 = 0xf1;
  bVar9 = bEXTMEMf12e;
  if ((bEXTMEMf12e & 1) == 0) {
    if (_9_6 == '\x01') {
      if ((bVar11 & 0xf0) == 0) {
        cVar6 = '\x02';
      }
      else {
        cVar6 = '\x01';
      }
    }
    else {
      uVar4 = 0xf1;
      if ((bVar11 & 0xf) == 0) {
        uVar10 = 0xf0;
        if (((bEXTMEMf0a7 >> 5 & 1) == 0) || (bVar9 = bEXTMEMf0a7, uVar4 = 0xf0, cVar7 != '\0')) {
          cVar6 = '\x01';
          bVar9 = bEXTMEMf0a7;
          goto LAB_CODE_2be6;
        }
      }
      uVar10 = uVar4;
      cVar6 = '\x02';
    }
  }
  else if (((bVar11 & 0xf) == 0) && ((bVar11 & 0xf0) == 0)) {
    uVar10 = 0xf0;
    if ((bEXTMEMf0cc >> 6 & 1) == 1) {
      uVar10 = 0xf0;
      if (-1 < (char)bEXTMEMf0cc) {
        BANK0_R2 = bVar1;
        BANK0_R5 = uVar3;
        FUN_CODE_56bf(bEXTMEMf0cc);
        return;
      }
      cVar6 = '\x02';
      bVar9 = bEXTMEMf0cc;
    }
    else {
      cVar6 = '\x01';
      bVar9 = bEXTMEMf0cc;
    }
  }
  else {
    _3_7 = 1;
    if ((bVar11 & 0xf) == 0) {
      cVar6 = '\x01';
    }
    else {
      cVar6 = '\x02';
    }
  }
LAB_CODE_2be6:
  if (cVar6 == '\x01') {
    BANK0_R2 = bVar1;
    BANK0_R5 = uVar3;
    FUN_CODE_297a(CONCAT11(uVar10,bVar5 | bVar11),bVar9);
  }
  else {
    BANK0_R2 = bVar1;
    BANK0_R5 = uVar3;
    FUN_CODE_297a(CONCAT11(uVar10,bVar5 << 4 | bVar11),bVar9);
  }
  BANK0_R4 = uVar2;
  FUN_CODE_56bf();
  BANK0_R4 = uVar2;
  return;
}



/* =========================================================
 * CODE:2e74  FUN_CODE_2e74  size=503
 * callers: CODE:4be4
 * ========================================================= */

/* WARNING: Removing unreachable block (CODE,0x2f97) */
/* WARNING: Removing unreachable block (CODE,0x2f4e) */
/* WARNING: Removing unreachable block (CODE,0x2f74) */
/* WARNING: Removing unreachable block (CODE,0x2fbd) */

void FUN_CODE_2e74(ushort param_1,undefined1 param_2)

{
  byte bVar1;
  ushort uVar2;
  char cVar3;
  
  _0_7 = 1;
  FUN_CODE_5812();
  if ((char)param_1 == '\0') {
    _9_7 = _0_0 & 1 ^ 1;
    if ((char)(_9_7 << 7) < '\0') {
      BANK3_R0 = 0x7d;
    }
    else {
      BANK3_R0 = 0x6d;
    }
    BANK3_R1 = 4;
    BANK3_R2 = 2;
    _d_0 = 0;
    param_1 = param_1 & 0xff00;
    uEXTMEMeb1b = FUN_CODE_61d0();
    uEXTMEMeb18 = (undefined1)param_1;
    uEXTMEMeb19 = (undefined1)(param_1 >> 8);
    _9_7 = _0_0 & 1 ^ 1;
    if ((char)(_9_7 << 7) < '\0') {
      BANK3_R0 = 0x7e;
    }
    else {
      BANK3_R0 = 0x6e;
    }
    BANK3_R1 = 4;
    BANK3_R2 = 2;
    _d_0 = 0;
    uVar2 = 0xeb00;
    uEXTMEMeb1a = param_2;
    uEXTMEMeb5b = FUN_CODE_61d0();
    uEXTMEMeb58 = (undefined1)uVar2;
    if ((short)uVar2 < 0) {
      bEXTMEMeb3c = bEXTMEMeb3c | 1;
    }
    if ((uVar2 & 0x100) != 0) {
      _4_5 = 1;
    }
    uEXTMEMeb59 = 0;
    uEXTMEMeb5a = param_2;
  }
  if ((bEXTMEMeace >> 6 & 1) != 0) {
    _1_0 = '\x01';
    BANK0_R2 = BANK0_R2 & 0x70;
    if (bEXTMEMeace != 0x50) {
      uEXTMEMebad = 1;
    }
  }
  BANK0_R2 = BANK0_R2 & 0x70;
  if (bEXTMEMeace == 0x20) {
    _3_3 = 1;
  }
  if (bEXTMEMeace == 0x10) {
    _1_3 = 1;
    uEXTMEMf08e = 4;
    bEXTMEMf0a9 = bEXTMEMf0a9 & 0xc1 | 8;
  }
  if (bEXTMEMeace == 0x30) {
    _3_5 = 1;
    uEXTMEMf08e = 4;
    bEXTMEMf0a9 = bEXTMEMf0a9 & 0xc1 | 0xc;
  }
  if ((bEXTMEMeace & 1) != 0) {
    _3_4 = 1;
  }
  bVar1 = bEXTMEMeace;
  if ((bEXTMEMeace == 0x50) && (bVar1 = bEXTMEMf07c, (bEXTMEMf07c >> 1 & 1) != 0)) {
    cVar3 = -0x71;
    bVar1 = bEXTMEMf08f;
    bEXTMEMf08f = bEXTMEMf08f | 1;
  }
  else {
    cVar3 = -0x13;
    uEXTMEMeaed = 0;
  }
  FUN_CODE_30ba(bVar1);
  if (cVar3 == '\0') {
    cEXTMEMf08d = '\x02';
  }
  else {
    cEXTMEMf08d = '\x01';
  }
  cVar3 = -0x73;
  if (cEXTMEMf08d == '\x02') {
    if ((_1_0 == '\0') || ((bEXTMEMf07c >> 1 & 1) == 1)) {
      bEXTMEMeacf = bEXTMEMeace & 0xf7;
    }
    else {
      bEXTMEMeacf = _3_4 & 1 | 0x80;
    }
    do {
    } while ((bEXTMEMf071 & 1) == 0);
    uEXTMEMf068 = 0;
    uEXTMEMf069 = 0;
    uEXTMEMf06a = 0;
    uEXTMEMf06b = 0;
    cVar3 = 'p';
    bEXTMEMf070 = bEXTMEMf070 | 1;
    _a_7 = 0;
    _b_0 = 1;
    FUN_CODE_4612(bEXTMEMf071);
  }
  FUN_CODE_306b();
  if (cVar3 == '\0') {
    bEXTMEMf0d4 = bEXTMEMf0d4 | 0x10;
  }
  uEXTMEMf156 = 0xf;
  bEXTMEMeace = bEXTMEMeace & 0xfb;
  return;
}



/* =========================================================
 * CODE:306b  FUN_CODE_306b  size=79
 * callers: CODE:2e74, CODE:36ca, CODE:30ba, CODE:34e8
 * ========================================================= */

void FUN_CODE_306b(void)

{
  char cVar1;
  
  cVar1 = -0x2f;
  if ((bEXTMEMead1 & 1) != 0) {
    FUN_CODE_5b50(bEXTMEMead1);
    if (cVar1 != '\0') {
      return;
    }
  }
  if ((cEXTMEMead0 < '\0') &&
     (((((bEXTMEMf0cd >> 6 & 1) != 0 && (cEXTMEMeb59 == '\0')) && (_4_5 == '\0')) ||
      ((((bEXTMEMf12f >> 3 & 1) != 0 && ((char)bEXTMEMf0cd < '\0')) &&
       ((cEXTMEMeb59 != '\0' || (_4_5 != '\0')))))))) {
    return;
  }
  return;
}



/* =========================================================
 * CODE:30ba  FUN_CODE_30ba  size=487
 * callers: CODE:2e74
 * ========================================================= */

void FUN_CODE_30ba(undefined2 param_1)

{
  char cVar1;
  
  _a_0 = '\0';
  do {
    FUN_CODE_5d15();
    cVar1 = (char)param_1;
  } while (_2_6 == '\x01');
  FUN_CODE_5c82();
  if (cVar1 != '\0') {
    bEXTMEMf168 = bEXTMEMf168 & 0xfb;
  }
  cVar1 = -0x33;
  if (((bEXTMEMeacc & 100) != 0) || ((bEXTMEMeacd & 0xcc) != 0)) {
    return;
  }
  FUN_CODE_306b();
  if (cVar1 != '\0') {
    return;
  }
  BANK0_R2 = BANK0_R2 & 0x70;
  if ((bEXTMEMeace == 0x50) && (((bEXTMEMf07c >> 1 & 1) == 0 || ((bEXTMEMeacc >> 4 & 1) != 0)))) {
    bEXTMEMf08f = bEXTMEMf08f & 0xfc;
    uEXTMEMeaed = 0;
    return;
  }
  if (((bEXTMEMeacc >> 4 & 1) != 0) && (((bEXTMEMead0 >> 2 & 1) == 1 || (_4_5 != '\0')))) {
    return;
  }
  if (((bEXTMEMeacc >> 1 & 1) != 0) &&
     ((((bEXTMEMf07c >> 1 & 1) != 1 && ((bEXTMEMead0 >> 2 & 1) == 1)) ||
      (((bEXTMEMf07c >> 1 & 1) != 0 &&
       ((((bEXTMEMeb18 & 1) != 0 && ((bEXTMEMeb1a & 1) == 1)) || ((bEXTMEMf12d >> 1 & 1) != 0)))))))
     ) {
    return;
  }
  if ((char)bEXTMEMeacc < '\0') {
    if (((((bEXTMEMead0 & 0x14) != 0) || ((bEXTMEMead1 >> 2 & 1) != 0)) || (_4_5 != '\0')) &&
       (((bEXTMEMeace & 0x70) != 0 && ((bEXTMEMeb18 & 1) != 1)))) {
      return;
    }
    if ((bEXTMEMeb18 & 1) == 1) {
      if (((((bEXTMEMead0 >> 1 & 1) == 1) || (_4_5 != '\0')) && ((bEXTMEMeb1a & 1) != 0)) &&
         (((bEXTMEMeace >> 6 & 1) != 1 && ((bEXTMEMf07c >> 1 & 1) != 0)))) {
        return;
      }
      if ((((bEXTMEMead0 >> 3 & 1) == 1) || (_4_5 != '\0')) &&
         (((bEXTMEMeb19 & 1) != 0 &&
          (((bEXTMEMeace >> 5 & 1) != 1 && ((bEXTMEMf07c >> 6 & 1) != 0)))))) {
        return;
      }
      if ((bEXTMEMeb18 & 0x30) != 0) {
        if ((((bEXTMEMead1 >> 1 & 1) == 1) || (_4_5 != '\0')) && ((bEXTMEMeace >> 4 & 1) != 1)) {
          return;
        }
        bEXTMEMf168 = bEXTMEMf168 | 3;
        cEXTMEMf14d = 'd';
        while ((cVar1 = 'M', cEXTMEMf14d != '\0' && (_a_0 != '\x01'))) {
          _a_3 = 1;
          FUN_CODE_3432(cEXTMEMf14d);
          _a_0 = cVar1 != '\0';
        }
        _a_3 = 0;
        FUN_CODE_3432(cEXTMEMf14d);
        if (_a_0 != '\0') {
          return;
        }
      }
    }
  }
  return;
}



/* =========================================================
 * CODE:32a1  FUN_CODE_32a1  size=105
 * callers: CODE:330a
 * ========================================================= */

void FUN_CODE_32a1(undefined2 param_1,char param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  byte bVar4;
  char cVar5;
  byte bVar6;
  short sVar7;
  
  uVar2 = BANK0_R3;
  uVar1 = BANK0_R2;
  uVar3 = (undefined1)param_1;
  bVar4 = (byte)((ushort)param_1 >> 8);
  BANK3_R2 = 2;
  _d_0 = 0;
  sVar7 = (ushort)bVar4 << 8;
  BANK3_R0 = uVar3;
  BANK3_R1 = bVar4;
  cVar5 = FUN_CODE_61d0();
  bVar6 = (byte)((ushort)sVar7 >> 8);
  BANK0_R3 = uVar2;
  BANK0_R2 = uVar1;
  if (((((char)sVar7 == DAT_INTMEM_4c) && (bVar6 == DAT_INTMEM_4d)) && (param_2 == DAT_INTMEM_4e))
     && (cVar5 == DAT_INTMEM_4f)) {
    return;
  }
  BANK3_R2 = 2;
  _c_7 = 0;
  BANK3_R3 = DAT_INTMEM_4c;
  BANK3_R4 = DAT_INTMEM_4d;
  BANK3_R5 = DAT_INTMEM_4e;
  BANK3_R6 = DAT_INTMEM_4f;
  BANK3_R0 = uVar3;
  BANK3_R1 = bVar4;
  FUN_CODE_617c((ushort)bVar6 << 8);
  BANK3_R0 = 0xd2;
  BANK3_R1 = 1;
  BANK3_R2 = 2;
  _c_7 = 0;
  BANK3_R3 = 1;
  BANK3_R4 = 0;
  BANK3_R5 = 0;
  BANK3_R6 = 0;
  uEXTMEMf090 = 1;
  uEXTMEMf091 = 0;
  uEXTMEMf092 = 0;
  uEXTMEMf093 = 0;
  BANK0_R3 = 0;
  uEXTMEMf094 = 0xd2;
  bEXTMEMf095 = bVar4 << 5 | 1;
  uEXTMEMf096 = 0x30;
  uEXTMEMf097 = 0;
  return;
}



/* =========================================================
 * CODE:330a  FUN_CODE_330a  size=296
 * callers: CODE:36ca
 * ========================================================= */

void FUN_CODE_330a(void)

{
  byte bVar1;
  undefined1 uVar2;
  char cVar3;
  
  cVar3 = -0x73;
  if ((bEXTMEMf08d >> 5 & 1) != 0) {
    return;
  }
  FUN_CODE_5bc2(bEXTMEMf08d);
  if (((cVar3 != '\0') && ((bEXTMEMf168 >> 4 & 1) != 0)) && (cEXTMEMf158 != '\0')) {
    return;
  }
  bEXTMEMf16a = bEXTMEMf16a | 2;
  if (_0_0 != 1) {
    if ((bEXTMEMeac8 >> 4 & 1) == 0) {
      bVar1 = bEXTMEMeac8;
      if ((bEXTMEMeac8 >> 5 & 1) == 0) {
        BANK0_R2 = 1;
      }
      else {
        BANK0_R2 = 0x11;
      }
    }
    else {
      bVar1 = 2;
    }
    if (cEXTMEMeb38 != '\0') {
      return;
    }
    if (((bEXTMEMeac8 >> 1 & 1) != 1) && (FUN_CODE_347c(bEXTMEMeac8), bVar1 == 0)) {
      return;
    }
  }
  _a_1 = _0_0 & 1 ^ 1;
  bVar1 = bEXTMEMf11a;
  if ((char)(_a_1 << 7) < '\0') {
    bVar1 = bEXTMEMf116;
  }
  _a_2 = bVar1 >> 4 & 1;
  if ((_a_2 != 0) && ((bEXTMEMf16b >> 3 & 1) != 1)) {
    return;
  }
  if (_a_1 == 0) {
    uVar2 = 0x6d;
  }
  else {
    uVar2 = 0x7d;
  }
  DAT_INTMEM_4c = uEXTMEMeb18;
  DAT_INTMEM_4d = uEXTMEMeb19;
  DAT_INTMEM_4e = uEXTMEMeb1a;
  DAT_INTMEM_4f = uEXTMEMeb1b;
  FUN_CODE_32a1(CONCAT11(4,uVar2));
  if ((bEXTMEMeb3c & 1) != 0) {
    bEXTMEMeb59 = bEXTMEMeb59 | 0x80;
  }
  _a_2 = _0_0 & 1 ^ 1;
  if ((char)(_a_2 << 7) < '\0') {
    uVar2 = 0x7e;
  }
  else {
    uVar2 = 0x6e;
  }
  DAT_INTMEM_4c = uEXTMEMeb58;
  DAT_INTMEM_4d = bEXTMEMeb59;
  DAT_INTMEM_4e = uEXTMEMeb5a;
  DAT_INTMEM_4f = uEXTMEMeb5b;
  FUN_CODE_32a1(CONCAT11(4,uVar2));
  bEXTMEMf08d = bEXTMEMf08d | 0x20;
  if ((_0_0 != 1) && (cEXTMEMf0a5 < '\0')) {
    BANK3_R0 = 0xd;
    BANK3_R1 = 1;
    BANK3_R2 = 2;
    _c_7 = 0;
    BANK3_R3 = 5;
    BANK3_R4 = 0;
    BANK3_R5 = 0;
    BANK3_R6 = 0;
    FUN_CODE_617c(0xf000,cEXTMEMf0a5);
  }
  return;
}



/* =========================================================
 * CODE:3432  FUN_CODE_3432  size=74
 * callers: CODE:4612, CODE:30ba, CODE:34e8, CODE:3957
 * ========================================================= */

void FUN_CODE_3432(void)

{
  byte bVar1;
  
  FUN_CODE_5a7f();
  bVar1 = bEXTMEMf068;
  if (_a_3 == '\0') {
    bEXTMEMf068 = bEXTMEMf068 & 0xbf;
  }
  else {
    bEXTMEMf068 = bEXTMEMf068 | 0x40;
  }
  bEXTMEMf135 = bEXTMEMf135 | 8;
  bEXTMEMf070 = bEXTMEMf070 | 9;
  FUN_CODE_5a7f(bVar1);
  bEXTMEMf135 = bEXTMEMf135 & 0xf7;
  bEXTMEMf070 = bEXTMEMf070 | 9;
  FUN_CODE_5a7f();
  if ((bEXTMEMf062 >> 6 & 1) != 0) {
    return;
  }
  return;
}



/* =========================================================
 * CODE:347c  FUN_CODE_347c  size=108
 * callers: CODE:330a, CODE:34e8
 * ========================================================= */

void FUN_CODE_347c(undefined1 param_1)

{
  undefined1 uVar1;
  char cVar2;
  
  uVar1 = BANK0_R2;
  if ((_0_0 == '\x01') || (cVar2 = -0x2d, (bEXTMEMead3 >> 4 & 1) == 0)) {
    return;
  }
  FUN_CODE_5ba5(bEXTMEMead3);
  BANK0_R2 = uVar1;
  if (cVar2 == '\0') {
    return;
  }
  if (cEXTMEMeacb == '\0') {
    bEXTMEMeac3 = bEXTMEMeac3 | 0x80;
    bEXTMEMf0a7 = bEXTMEMf0a7 | 0x40;
    cEXTMEMeacb = '\x01';
    uEXTMEMeac0 = param_1;
  }
  else if (cEXTMEMeacb != '\x01') {
    if (cEXTMEMeacb == '\x02') {
      return;
    }
    return;
  }
  if ((bEXTMEMeac7 >> 6 & 1) != 0) {
    bEXTMEMf0a7 = bEXTMEMf0a7 | 0x40;
    cEXTMEMeacb = 2;
    bEXTMEMeac3 = bEXTMEMeac3 & 0x7f;
    return;
  }
  return;
}



/* =========================================================
 * CODE:34e8  FUN_CODE_34e8  size=418
 * callers: CODE:02e9
 * ========================================================= */

/* WARNING: Removing unreachable block (CODE,0x352a) */

void FUN_CODE_34e8(void)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  
  if ((cEXTMEMeb48 != '\0') || (cEXTMEMeb4c != '\0')) {
    DAT_INTMEM_31 = -1;
  }
  cVar3 = 'S';
  if (bEXTMEMeb53 == 0xe0) {
    if (_6_6 != '\0') {
      return;
    }
    if ((char)bEXTMEMf0cd < '\0') {
      return;
    }
    bVar1 = bEXTMEMf0cd;
    if ((bEXTMEMf0cd >> 6 & 1) != 1) {
      return;
    }
  }
  else {
    bVar1 = bEXTMEMeb53;
    if (bEXTMEMeb53 != 0xe1) {
      if (bEXTMEMeb53 == 0xe2) goto LAB_CODE_3569;
      if (bEXTMEMeb53 != 0xe3) {
        if (bEXTMEMeb53 != 0xe4) {
          if (bEXTMEMeb53 != 0xe5) {
            return;
          }
          uEXTMEMeac8 = 0x21;
          uEXTMEMeb59 = 1;
          return;
        }
        if (_0_0 != '\x01') {
          cVar3 = '\x14';
          FUN_CODE_347c();
          if (cVar3 == '\0') {
            return;
          }
        }
        FUN_CODE_306b();
        if (cVar3 == '\0') {
          bEXTMEMf0d4 = bEXTMEMf0d4 | 0x10;
        }
        _a_3 = 0;
        FUN_CODE_3432();
        cEXTMEMeb50 = 0;
        bEXTMEMeb53 = 0xe0;
        cEXTMEMeb54 = 0;
        _4_5 = 1;
        return;
      }
      FUN_CODE_5c77();
      if (cVar3 == '\0') {
LAB_CODE_35a2:
        bVar2 = true;
      }
      else {
        _a_3 = 1;
        FUN_CODE_3432(0);
        if (cVar3 != '\0') goto LAB_CODE_35a2;
        bVar2 = false;
      }
      if (bVar2) {
LAB_CODE_35c2:
        bVar2 = true;
      }
      else {
        if ((cEXTMEMebbf == '\0') || ((bEXTMEMf07d >> 2 & 1) != 1)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) goto LAB_CODE_35c2;
        bVar2 = false;
      }
      if (!bVar2) {
        if ((cEXTMEMebbe == '\0') || ((bEXTMEMf07e >> 2 & 1) != 1)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) {
          cEXTMEMeb50 = '\0';
          goto LAB_CODE_35e4;
        }
      }
      cEXTMEMeb50 = '\x01';
LAB_CODE_35e4:
      bEXTMEMeac3 = bEXTMEMeac3 & 0xfe;
      bEXTMEMf08e = bEXTMEMf08e & 0xbf;
      if (cEXTMEMeb50 != '\0') {
        FUN_CODE_6105(cEXTMEMeb50);
      }
      if ((_6_6 != '\x01') && ((bEXTMEMf0cd >> 6 & 1) != 1)) {
        uEXTMEMeac8 = 1;
        uEXTMEMeb59 = 0;
        return;
      }
      if (((char)bEXTMEMf0cd < '\0') || (cEXTMEMeb54 != '\0')) {
        uEXTMEMeacb = 0;
        bEXTMEMeb53 = 0xe4;
        return;
      }
      if (DAT_INTMEM_31 != '\0') {
        return;
      }
      if ((bEXTMEMeac7 >> 3 & 1) == 1) {
        return;
      }
      bEXTMEMeb53 = 0xe5;
      return;
    }
  }
  if ((DAT_INTMEM_31 == '\0') && (bVar1 = bEXTMEMeac7, (bEXTMEMeac7 >> 3 & 1) != 1)) {
    bEXTMEMeb53 = 0xe5;
    return;
  }
  uEXTMEMeacb = 0;
  bEXTMEMeb53 = 0xe2;
LAB_CODE_3569:
  if (_0_0 != '\x01') {
    cVar3 = '\x13';
    FUN_CODE_347c(bVar1);
    if (cVar3 == '\0') {
      return;
    }
  }
  uEXTMEMeb59 = 1;
  bEXTMEMeb53 = 0xe3;
  return;
}



/* =========================================================
 * CODE:368a  FUN_CODE_368a  size=64
 * ========================================================= */

void FUN_CODE_368a(void)

{
  if ((bEXTMEMeacf & 0xc0) != 0) {
    return;
  }
  bEXTMEMf0b0 = bEXTMEMf0b0 | 4;
  bEXTMEMeacf = 0xc0;
  if ((bEXTMEMead2 != 0) && ((bEXTMEMead3 >> 6 & 1) != 0)) {
    bEXTMEMeacf = 0xd0;
  }
  if ((bEXTMEMead2 & 0x22) != 0) {
    bEXTMEMeacf = bEXTMEMeacf | 0x60;
  }
  return;
}



/* =========================================================
 * CODE:36ca  FUN_CODE_36ca  size=653
 * callers: CODE:02e9
 * ========================================================= */

void FUN_CODE_36ca(void)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  char cVar9;
  byte bVar10;
  undefined2 uVar11;
  undefined1 uVar12;
  
  if (_6_4 != '\x01') {
    return;
  }
  cEXTMEMf08c = cEXTMEMeaca;
  if (cEXTMEMeaca == ';') {
    cEXTMEMf15e = cEXTMEMeae0;
  }
  if (cEXTMEMf15e == '\0') {
    _6_1 = 1;
  }
  if ((((bEXTMEMeac8 >> 1 & 1) != 1) && (cVar9 = -0x38, (bEXTMEMeac8 >> 4 & 1) != 1)) &&
     (FUN_CODE_306b(bEXTMEMeac8), cVar9 != '\0')) {
    _6_1 = 1;
  }
  if (((bEXTMEMeacf >> 6 & 1) != 0) && (((bEXTMEMf07c >> 1 & 1) == 0 || (_0_5 != '\0')))) {
    _6_2 = '\x01';
    bEXTMEMf08f = bEXTMEMf08f & 0xfc;
    BANK0_R2 = BANK0_R2 & 0xf0;
    if ((bEXTMEMeacf != 0xd0) && ((bEXTMEMead0 >> 2 & 1) != 1)) {
      bEXTMEMeacf = bEXTMEMeacf & 0xf | 0x80;
    }
  }
  if (bEXTMEMf0b6 >> 4 != BANK0_R3) {
    FUN_CODE_28ff(uEXTMEMebab);
  }
  if ((_0_3 == '\x01') ||
     (((bEXTMEMeacf >> 6 & 1) != 0 && (((bEXTMEMf07c >> 1 & 1) == 0 || (_0_5 != '\0')))))) {
    uEXTMEMf081 = 0xc;
    uEXTMEMf160 = 0;
  }
  if (((cEXTMEMebc0 != '\0') && ((bEXTMEMf0a7 >> 1 & 1) != 1)) &&
     (((bEXTMEMeac8 >> 4 & 1) == 1 || ((bEXTMEMeac8 >> 1 & 1) != 0)))) {
    _4_0 = '\x01';
  }
  if (_4_0 != '\x01') {
    cEXTMEMf151 = '\a';
  }
  if ((cEXTMEMf151 == '\0') && (cEXTMEMeaca == '<')) {
    _6_1 = 1;
  }
  if (cEXTMEMeaca == ';') {
    uEXTMEMf158 = 4;
    uEXTMEMebbd = 0;
    uEXTMEMeacb = 0;
    cEXTMEMeaca = '<';
LAB_CODE_37eb:
    cVar9 = -0x36;
    FUN_CODE_330a();
    if ((((cVar9 == '\0') || ((bEXTMEMf0a7 >> 1 & 1) == 1)) ||
        (((cVar9 = -0x2d, -1 < (char)bEXTMEMead3 &&
          ((FUN_CODE_5ba5(bEXTMEMead3), cVar9 != '\0' && ((bEXTMEMeac8 >> 1 & 1) != 1)))) &&
         ((_6_6 == '\x01' || ((bEXTMEMead3 >> 4 & 1) != 0)))))) && ((_6_2 != '\x01' && (_6_1 != 1)))
       ) {
      return;
    }
    uEXTMEMf081 = 0xc;
    uEXTMEMf160 = 0;
    bEXTMEMf0aa = bEXTMEMf0aa & 0xf8;
    bEXTMEMf0ab = bEXTMEMf0ab | 2;
    if ((bEXTMEMeac8 >> 1 & 1) != 0) {
      _6_2 = '\x01';
      bEXTMEMeacf = bEXTMEMeacf & 0xf | 0x80;
      bEXTMEMf0b0 = bEXTMEMf0b0 & 0xe7;
    }
    cEXTMEMeaca = '=';
  }
  else {
    if (cEXTMEMeaca == '<') goto LAB_CODE_37eb;
    if (cEXTMEMeaca != '=') {
      if (cEXTMEMeaca != '>') {
        return;
      }
      goto LAB_CODE_38f9;
    }
  }
  bEXTMEMf114 = bEXTMEMf114 & 0xe0;
  cVar9 = cEXTMEMf11a;
  if ((char)((_0_0 & 1 ^ 1) << 7) < '\0') {
    cVar9 = cEXTMEMf116;
  }
  _a_4 = cVar9 != '\0';
  if ((bool)_a_4) {
    return;
  }
  uVar11 = 0xeacf;
  if ((bEXTMEMeacf >> 6 & 1) != 0) {
    FUN_CODE_1ce5(0xea83,bEXTMEMeacf);
    do {
    } while ((bEXTMEMf0b8 & 1) == 1);
    uVar11 = 0xf0b0;
    bEXTMEMf0b0 = bEXTMEMf0b0 | 1;
  }
  if (_0_0 != 1) {
    do {
      FUN_CODE_3957();
      cVar9 = (char)uVar11;
    } while (cVar9 == '\0');
    FUN_CODE_5812();
    if ((cVar9 != '\0') || (cVar9 = 't', cEXTMEMeb74 != '\0')) {
      if ((_6_1 == 0) || (FUN_CODE_5812(), cVar9 == '\0')) {
        bEXTMEMf182 = bEXTMEMf182 | 2;
      }
      do {
        if ((bEXTMEMf182 >> 1 & 1) == 0) break;
      } while (cEXTMEMf15e != '\0');
      if ((cEXTMEMf15e != '\0') && (_6_1 != 1)) {
        FUN_CODE_5826(cEXTMEMf15e);
        bEXTMEMf182 = bEXTMEMf182 | 4;
      }
    }
  }
  cEXTMEMeaca = '>';
LAB_CODE_38f9:
  bVar6 = BANK0_R6;
  bVar10 = BANK0_R5;
  bVar5 = BANK0_R3;
  bVar3 = BANK0_R2;
  if (((((_6_6 != '\x01') && ((bEXTMEMf0cd >> 6 & 1) != 0)) &&
       (((bEXTMEMf12f >> 3 & 1) == 0 || ((bEXTMEMeac8 >> 5 & 1) != 1)))) && (_6_1 == 0)) ||
     ((((_0_0 != 1 && ((bEXTMEMf182 >> 2 & 1) != 0)) && (cEXTMEMf15e != '\0')) ||
      (((_0_3 != '\x01' && (_6_2 != '\x01')) &&
       ((_6_1 != 1 && ((bEXTMEMeacf != 0xe0 && ((bEXTMEMeacf >> 6 & 1) == 1)))))))))) {
    return;
  }
  if (cEXTMEMf15e == '\0') {
    _6_1 = 1;
  }
  _a_7 = _6_1 & 1;
  _b_0 = '\x01';
  DAT_INTMEM_50 = bEXTMEMead1;
  uVar7 = 0;
  uVar8 = 0;
  _b_1 = bEXTMEMeac8 >> 5 & 1;
  bVar2 = bEXTMEMeacf;
  bVar4 = bEXTMEMead0;
  FUN_CODE_5a7f();
  BANK0_R5 = bVar10;
  BANK0_R6 = bVar6;
  if (_b_0 == '\x01') {
    uEXTMEMeaee = 0x3f;
    cEXTMEMf08c = 0x3f;
    if ((cEXTMEMf15e == '\0') && (_a_7 != 1)) {
      cEXTMEMf15e = cEXTMEMeae0;
    }
    do {
      if (((_6_6 == '\x01') || (((bEXTMEMeac8 >> 1 & 1) != 1 && ((bEXTMEMeac8 >> 4 & 1) == 0)))) ||
         (((bEXTMEMf0cd >> 6 & 1) != 1 &&
          ((((bEXTMEMf12f >> 1 & 1) == 0 || (-1 < (char)bEXTMEMf0cd)) || (_b_1 == 1)))))) break;
    } while (cEXTMEMf15e != '\0');
    if (cEXTMEMf15e == '\0') {
      _a_7 = 1;
    }
    bEXTMEMf05d = bVar2 & 0xf0 | DAT_INTMEM_50;
    bEXTMEMf05e = (bVar2 & 7) << 4;
    bEXTMEMf05c = bVar4;
    if (_0_0 != 1) {
      BANK3_R0 = 0xf;
      BANK3_R1 = 1;
      BANK3_R2 = 2;
      _d_0 = 0;
      uVar12 = 0;
      BANK0_R2 = bVar3;
      BANK0_R3 = bVar5;
      FUN_CODE_61d0(bEXTMEMf05e);
      uEXTMEMf05f = uVar12;
    }
    if ((bVar4 & 1) != 0) {
      uVar7 = 0;
    }
    if (((((bVar4 >> 1 & 1) == 1) || (BANK0_R5 = bVar10, _b_1 != 0)) &&
        ((BANK0_R5 = bVar10, (bVar2 >> 6 & 1) != 1 &&
         (((bEXTMEMeb18 & 1) != 0 && ((bEXTMEMeb1a & 1) != 0)))))) && (_6_7 != '\x01')) {
      BANK0_R5 = bVar10 | 2;
    }
    if (((bVar4 >> 5 & 1) != 0) && ((bVar2 >> 6 & 1) != 0)) {
      BANK0_R5 = BANK0_R5 | 2;
    }
    if ((((bVar4 >> 3 & 1) != 0) && ((bVar2 == 0x80 || (cEXTMEMebbf != '\0')))) ||
       ((_b_1 != 0 && ((bVar4 >> 6 & 1) != 1)))) {
      BANK0_R5 = BANK0_R5 | 4;
    }
    if ((((bVar4 >> 4 & 1) == 1) || (_b_1 != 0)) && (bVar2 == 0xa0)) {
      BANK0_R5 = BANK0_R5 | 0x20;
    }
    if ((bVar4 >> 6 & 1) != 0) {
      uVar8 = 8;
    }
    BANK0_R6 = bVar6;
    if ((char)bVar4 < '\0') {
      BANK0_R6 = bVar6 | 0x10;
      BANK0_R4 = BANK0_R4 | 0x80;
    }
    bVar10 = BANK0_R6;
    if ((DAT_INTMEM_50 & 1) != 0) {
      BANK0_R6 = BANK0_R6 | 4;
      if (_6_6 != '\0') {
        BANK0_R6 = bVar10 | 0x26;
      }
      BANK0_R4 = BANK0_R4 | 2;
    }
    if ((bVar2 >> 4 & 1) != 0) {
      BANK0_R5 = BANK0_R5 | 0x40;
    }
    bVar10 = BANK0_R5;
    BANK0_R5 = BANK0_R5 | 0x80;
    if (_b_1 != 0) {
      BANK0_R6 = BANK0_R6 | 0x20;
      BANK0_R4 = BANK0_R4 | 1;
    }
    if ((bVar2 >> 6 & 1) == 0) {
      if ((((bVar4 >> 1 & 1) != 1) && (_b_1 == 0)) || (_6_7 != '\0')) {
        bEXTMEMf06c = bEXTMEMf06c | 4;
      }
      BANK0_R4 = BANK0_R4 | 4;
    }
    else {
      BANK0_R5 = bVar10 | 0x90;
      if ((bVar4 >> 2 & 1) != 0) {
        bEXTMEMf06d = bEXTMEMf06d | 0x40;
      }
    }
    bVar10 = bEXTMEMf135;
    uEXTMEMf068 = uVar7;
    uEXTMEMf069 = uVar8;
    bEXTMEMf135 = bEXTMEMf135 | 4;
  }
  else {
    cEXTMEMf08c = 0x12;
    bEXTMEMf05c = bEXTMEMead0;
    bEXTMEMf05d = bEXTMEMead1 & 0xf;
    uEXTMEMf069 = 0x26;
    bVar10 = bEXTMEMead0;
    if (_6_6 != '\x01') {
      bVar10 = 0x86;
      uEXTMEMf069 = 0x36;
    }
    uEXTMEMf068 = 0x86;
    if (_6_7 != '\0') {
      bVar10 = bEXTMEMf06c;
      uEXTMEMf068 = 0x84;
      bEXTMEMf06c = bEXTMEMf06c | 4;
    }
  }
  bEXTMEMf070 = bEXTMEMf070 | 0xb;
  BANK0_R2 = bVar3;
  BANK0_R3 = bVar5;
  FUN_CODE_5643(0xf00c,bVar10);
  cVar9 = 'h';
  bVar10 = bEXTMEMf168 & 0xfe;
  do {
    if (_0_0 == 1) break;
    cVar9 = -0x7e;
    bEXTMEMf168 = bEXTMEMf182;
  } while ((bEXTMEMf182 >> 1 & 1) == 1);
  do {
    bVar6 = bEXTMEMf168;
    if (_0_0 == 1) break;
    cVar9 = -0x7e;
    bEXTMEMf168 = bEXTMEMf182;
    bVar6 = bEXTMEMf182;
  } while ((bEXTMEMf182 >> 2 & 1) == 1);
  BANK0_R2 = bVar3;
  BANK0_R3 = bVar5;
  bEXTMEMf168 = bVar10;
  if (_b_0 != '\0') {
    if (((bVar4 & 1) != 0) && (cVar9 = -0x59, bVar6 = bEXTMEMf0a7, (bEXTMEMf0a7 >> 1 & 1) != 0)) {
      _a_7 = 1;
    }
    if (((((bVar4 >> 1 & 1) != 0) && (bVar2 == 0x80)) && (_6_7 != '\x01')) &&
       (cVar9 = '|', bVar6 = bEXTMEMf07c, (bEXTMEMf07c >> 1 & 1) != 0)) {
      _a_7 = 1;
    }
    if ((((bVar4 >> 3 & 1) != 0) && (bVar2 == 0x80)) && (cVar9 = '|', (bEXTMEMf07c >> 6 & 1) != 0))
    {
      _a_7 = 1;
    }
    if (((bVar4 >> 6 & 1) != 0) && (FUN_CODE_5c77(bVar6), cVar9 == '\0')) {
      _a_7 = 1;
    }
    if ((((char)bVar4 < '\0') && (_b_1 != 1)) && (cVar9 = -0x33, (bEXTMEMf0cd >> 6 & 1) != 0)) {
      _a_7 = 1;
    }
    BANK0_R3 = bVar5;
    if (((DAT_INTMEM_50 & 1) != 0) && (FUN_CODE_5b50(), cVar9 != '\0')) {
      _a_7 = 1;
    }
    if ((_b_1 != 0) && (cVar9 = -0x33, (char)bEXTMEMf0cd < '\0')) {
      _a_7 = 1;
    }
    _a_3 = 1;
    FUN_CODE_3432();
    if (cVar9 != '\0') {
      _a_7 = 1;
    }
  }
  while( true ) {
    while( true ) {
      cVar9 = -0x74;
      cEXTMEMf08c = 0x13;
      if (_a_7 != 0) {
        cVar9 = -0x74;
        FUN_CODE_4a8a();
      }
      if (_b_0 == '\0') break;
      FUN_CODE_5a7f();
      bEXTMEMf070 = bEXTMEMf070 | 4;
    }
    if ((_0_0 != 1) && (FUN_CODE_3957(), cVar9 == '\0')) break;
    cEXTMEMf08c = 0x13;
    cVar9 = cEXTMEMf11a;
    if ((char)((_0_0 & 1 ^ 1) << 7) < '\0') {
      cVar9 = cEXTMEMf116;
    }
    _b_2 = cVar9 != '\0';
    if (((bool)_b_2) ||
       ((((bEXTMEMf07c >> 1 & 1) != 0 && ((bEXTMEMf07c >> 2 & 1) != 1)) && (_6_7 != '\x01'))))
    break;
    if (cEXTMEMebbf == '\0') {
      bVar3 = bEXTMEMf07c >> 6;
    }
    else {
      bVar3 = bEXTMEMf07d >> 2;
    }
    if ((bVar3 & 1) != 0) break;
    cVar9 = '\x01' - ((char)(_0_0 << 7) >> 7);
    bVar3 = 2;
    bVar5 = 0;
    while (cVar9 = cVar9 + -1, cVar9 != '\0') {
      bVar1 = CARRY1(bVar3,bVar3);
      bVar3 = bVar3 * '\x02';
      bVar5 = bVar5 << 1 | bVar1;
    }
    cVar9 = -0x33;
    BANK0_R2 = BANK0_R2 & bEXTMEMf0cd;
    BANK0_R3 = 0;
    if (((((bVar3 == 0 && bVar5 == 0) || (_2_7 == '\x01')) ||
         ((FUN_CODE_5b50(bEXTMEMf0cd), cVar9 != '\0' ||
          ((FUN_CODE_5b7d(), cVar9 != '\0' || (cEXTMEMeaeb < '\0')))))) || ((bEXTMEMf098 & 1) == 1))
       || ((((cVar9 = -0x54, bVar3 = bEXTMEMf0ac, (bEXTMEMf0ac >> 6 & 1) != 1 && (_6_6 != '\x01'))
            && (cVar9 = -0x33, bVar3 = bEXTMEMf0cd, (bEXTMEMf0cd >> 6 & 1) == 0)) ||
           (((FUN_CODE_5bfc(bVar3), cVar9 != '\0' || (bVar3 = bEXTMEMead3, (char)bEXTMEMead3 < '\0')
             ) && (bVar3 = bEXTMEMf0ac, (bEXTMEMf0ac >> 6 & 1) == 0)))))) break;
    FUN_CODE_5a7f(bVar3);
    bEXTMEMf070 = bEXTMEMf070 | 4;
  }
  bEXTMEMf070 = bEXTMEMf070 & 0xfb;
  cEXTMEMf08c = 0x14;
  do {
  } while ((bEXTMEMf071 >> 2 & 1) == 1);
  bEXTMEMf168 = bEXTMEMf168 | 1;
  FUN_CODE_5a7f(bEXTMEMf071);
  uEXTMEMf068 = 0;
  uEXTMEMf069 = 0;
  uEXTMEMf06a = 0;
  uEXTMEMf06b = 0;
  bEXTMEMf06c = bEXTMEMf06c & 0xfb;
  bEXTMEMf05c = 0;
  bEXTMEMf05d = 0;
  bEXTMEMf05e = bEXTMEMf05a & 0xf;
  uEXTMEMf05f = 0;
  uEXTMEMf134 = 0;
  bEXTMEMf135 = 0;
  bEXTMEMf136 = bEXTMEMf132 & 8;
  uEXTMEMf137 = 0;
  bEXTMEMf070 = bEXTMEMf070 | 0xb;
  do {
  } while ((bEXTMEMf071 >> 1 & 1) == 0);
  do {
  } while ((bEXTMEMf071 >> 4 & 1) == 0);
  do {
  } while ((bEXTMEMf071 & 1) == 0);
  return;
}



/* =========================================================
 * CODE:3957  FUN_CODE_3957  size=2631
 * callers: CODE:4ae6, CODE:02e9, CODE:4612, CODE:36ca, CODE:4be4, CODE:4f88
 * ========================================================= */

byte FUN_CODE_3957(byte param_1,byte param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  byte bVar5;
  char cVar6;
  undefined2 uVar7;
  
  bVar2 = bEXTMEMf184;
  bVar5 = bEXTMEMeb10;
  bVar1 = BANK0_R2;
  if (bEXTMEMf14e != 0) {
    return bEXTMEMf14e;
  }
  bEXTMEMf08c = bEXTMEMeb10;
  bVar3 = bEXTMEMf116;
  if (bEXTMEMeb10 == 0x80) {
    if ((bEXTMEMf0a7 & 2) == 0) {
      if (((bEXTMEMf12f & 8) == 0) || (_a_5 = _4_5 & 1 ^ 1, (char)(_a_5 << 7) < '\0')) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if ((bVar4) || ((bEXTMEMf0cd & 0x40) == 0)) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if (!bVar4) goto LAB_CODE_3a29;
      bVar4 = true;
    }
    else {
LAB_CODE_3a29:
      bVar4 = false;
    }
    if ((bVar4) && (_a_5 = 1, bEXTMEMf116 == 0)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      bEXTMEMeb11 = 0;
    }
    else {
      BANK0_R4 = BANK0_R4 | bEXTMEMf114;
      BANK0_R4 = BANK0_R4 | bEXTMEMebbd;
      bEXTMEMeb11 = (bEXTMEMf11c | bEXTMEMf118) & 0x1f;
      param_2 = bEXTMEMf11c;
    }
    uEXTMEMeb38 = 0;
    cVar6 = 'i';
    if (((bEXTMEMf169 >> 1 & 1) != 0) && (FUN_CODE_5bc2(bEXTMEMf169,param_2), cVar6 != '\0')) {
      if ((bEXTMEMf168 >> 5 & 1) != 0) {
        bEXTMEMf168 = bEXTMEMf168 & 0xdf;
      }
      if (_6_4 != '\x01') {
        bEXTMEMf168 = bEXTMEMf168 | 0x10;
      }
      if ((bEXTMEMf169 >> 2 & 1) == 0) {
        cEXTMEMebc1 = '\0';
      }
      else {
        _4_7 = 1;
        if (cEXTMEMebc1 == '\0') {
          BANK0_R2 = bVar1;
          FUN_CODE_5882(0);
          _c_2 = 0;
          FUN_CODE_5a98();
          cEXTMEMf153 = '\x01';
          do {
          } while ((bEXTMEMf169 >> 1 & 1) != 0);
          if ((bEXTMEMf169 >> 1 & 1) == 1) {
            _4_7 = 0;
          }
          else {
            bEXTMEMf168 = bEXTMEMf168 & 0xef;
          }
          cEXTMEMebc1 = '\x01';
        }
      }
    }
    bVar5 = bEXTMEMf168;
    bEXTMEMebc2 = bEXTMEMf169 & 4;
    if ((cEXTMEMf153 == '\0') && ((bEXTMEMf168 >> 5 & 1) != 0)) {
      bEXTMEMf168 = bEXTMEMf168 | 0x80;
      BANK0_R2 = bVar1;
      FUN_CODE_5643(0xf101,bVar5);
      bEXTMEMf168 = bEXTMEMf168 & 0x7f;
      cEXTMEMf153 = '\x01';
    }
    bVar5 = bEXTMEMf168;
    if (((bEXTMEMf169 >> 1 & 1) != 1) &&
       (bVar5 = bEXTMEMf168 & 0xef, (char)(bEXTMEMf168 & 0xef) < '\0')) {
      bVar5 = bEXTMEMf168 & 0x6f;
    }
    bEXTMEMf168 = bVar5;
    uVar7 = 0xf0a5;
    if (((bEXTMEMf0a5 & 0x80) == 0) || (BANK0_R2 = bVar1, FUN_CODE_5bc2(0), (char)uVar7 == '\0')) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
LAB_CODE_3ba0:
      cEXTMEMebc3 = '\x01';
    }
    else {
      BANK3_R0 = 0x21;
      BANK3_R2 = 0x10;
      _d_0 = 0;
      cVar6 = (char)((ushort)uVar7 >> 8);
      BANK0_R2 = bVar1;
      BANK3_R1 = bVar4;
      FUN_CODE_61d0();
      if (cVar6 < '\0') goto LAB_CODE_3ba0;
      cEXTMEMebc3 = '\0';
    }
    if ((bEXTMEMf097 >> 6 & 1) != 1) {
      if ((((cEXTMEMebc3 == '\0') && (_4_6 != '\0')) && (_6_4 != '\x01')) && (cEXTMEMeb53 == -0x20))
      {
        _a_3 = 0;
        BANK0_R2 = bVar1;
        FUN_CODE_3432();
      }
      _4_6 = cEXTMEMebc3 != '\0';
    }
    if (bEXTMEMeb11 == bVar1) {
      BANK0_R2 = bVar1;
      return bEXTMEMeb11;
    }
    uEXTMEMeb38 = 1;
    if (BANK0_R3 <= bVar3) {
      BANK0_R2 = bVar1;
      bEXTMEMeb10 = 0x8b;
      uEXTMEMeb38 = 1;
      return 0x8b;
    }
    bEXTMEMeb10 = 0x81;
  }
  else if (bEXTMEMeb10 != 0x81) {
    if (bEXTMEMeb10 == 0x82) goto LAB_CODE_3caf;
    if (bEXTMEMeb10 == 0x83) {
      if (bEXTMEMf116 == 0) {
        bEXTMEMf17e = bEXTMEMf17e | 4;
        do {
        } while ((bEXTMEMf071 >> 4 & 1) == 0);
        bEXTMEMf135 = bEXTMEMf135 | 0x40;
        bEXTMEMf070 = bEXTMEMf070 | 8;
        bEXTMEMf14f = 3;
      }
      bEXTMEMeb10 = 0x84;
      bEXTMEMf08c = bVar5;
      return 0x84;
    }
    if (bEXTMEMeb10 == 0x84) {
      if (bEXTMEMf116 == 0) {
        if (bEXTMEMf14f != 0) {
          bEXTMEMf08c = bVar5;
          return bEXTMEMf14f;
        }
        do {
        } while ((bEXTMEMf071 >> 4 & 1) == 0);
        bEXTMEMf135 = bEXTMEMf135 | 0x80;
        while (bEXTMEMf070 = bEXTMEMf070 | 8, (bEXTMEMf132 & 1) != 1) {
          do {
          } while ((bEXTMEMf071 >> 4 & 1) == 0);
        }
      }
      if (bEXTMEMeb12 != 0) {
        if ((bEXTMEMf17d & 1) != 1) {
          bEXTMEMf17d = bEXTMEMf17d | 1;
          uEXTMEMf151 = 5;
        }
        if (((bEXTMEMf12e >> 1 & 1) != 1) && ((bEXTMEMf17d >> 4 & 1) != 1)) {
          BANK0_R3 = BANK0_R3 & 0xf;
          bEXTMEMf08c = bVar5;
          bEXTMEMf178 = bEXTMEMeb12;
          return bEXTMEMf17d;
        }
        if ((bEXTMEMf12e >> 1 & 1) != 0) {
          bEXTMEMf14e = 0x14;
        }
        bEXTMEMf17d = bEXTMEMf17d & 0xfe | 0x10;
      }
      BANK0_R3 = BANK0_R3 & 0xf;
      bEXTMEMeb10 = 0x85;
      bEXTMEMf08c = bVar5;
      bEXTMEMf178 = bEXTMEMeb12;
      return 0x85;
    }
    if (bEXTMEMeb10 == 0x85) {
      if ((bEXTMEMeb12 & 0x17) != 0) {
        bEXTMEMf179 = bEXTMEMeb12 & 2;
        if (((((bEXTMEMeb12 >> 2 & 1) != 0) && ((bEXTMEMf072 & 1) != 0)) &&
            ((bEXTMEMf14b >> 3 & 1) != 1)) && ((bEXTMEMf149 & 1) != 1)) {
          uEXTMEMf151 = 5;
          bEXTMEMf149 = bEXTMEMf149 | 0x81;
          bEXTMEMf070 = bEXTMEMf070 | 0x80;
        }
        if (((bEXTMEMeb12 >> 1 & 1) != 0) && ((bEXTMEMf17d >> 1 & 1) != 1)) {
          bEXTMEMf17d = bEXTMEMf17d | 2;
          uEXTMEMf151 = 5;
        }
        if ((((bEXTMEMeb12 >> 1 & 1) != 0) && ((bEXTMEMf12e >> 2 & 1) != 1)) &&
           ((bEXTMEMf17d >> 5 & 1) != 1)) {
          bEXTMEMf08c = bVar5;
          return bEXTMEMf17d;
        }
        do {
        } while ((bEXTMEMf072 & 1) == 0);
        if ((((bEXTMEMeb12 >> 2 & 1) != 0) && ((bEXTMEMf12e >> 2 & 1) != 1)) &&
           ((bEXTMEMf14b >> 3 & 1) != 1)) {
          bEXTMEMf070 = bEXTMEMf070 | 0x80;
          bEXTMEMf08c = bVar5;
          return bEXTMEMf070;
        }
        if ((bEXTMEMf12e >> 2 & 1) != 0) {
          bEXTMEMf14e = 0x14;
        }
        if ((bEXTMEMeb12 & 0x11) != 0) {
          bEXTMEMf179 = bEXTMEMeb12 & 0x11;
        }
        bEXTMEMf17d = bEXTMEMf17d & 0xfd | 0x20;
        if ((bEXTMEMeb12 >> 2 & 1) != 0) {
          do {
          } while ((bEXTMEMf072 & 1) == 0);
          bEXTMEMf149 = bEXTMEMf149 & 0xfe;
          bEXTMEMf070 = bEXTMEMf070 | 0x80;
          bEXTMEMf168 = bEXTMEMf168 | 0x20;
          cEXTMEMf153 = '\x01';
          _4_2 = 1;
        }
      }
      bEXTMEMeb10 = 0x86;
      bEXTMEMf08c = bVar5;
      bEXTMEMf185 = bEXTMEMf185 | 2;
      return 0x86;
    }
    if (bEXTMEMeb10 == 0x86) {
      if ((bEXTMEMf185 >> 3 & 1) != 1) {
        bEXTMEMf08c = bVar5;
        return bEXTMEMf185;
      }
      if ((bEXTMEMf0a0 >> 1 & 1) != 0) {
        bEXTMEMeb10 = 0x8a;
        bEXTMEMf08c = bVar5;
        bEXTMEMf184 = bEXTMEMf184 | bEXTMEMeb12;
        return 0x8a;
      }
      bEXTMEMeb10 = 0x87;
      param_1 = bEXTMEMf184;
      bEXTMEMf184 = bEXTMEMf184 | bEXTMEMeb12;
LAB_CODE_3f16:
      if ((bEXTMEMf0a0 >> 2 & 1) != 0) {
        bEXTMEMf08c = bVar5;
        return bEXTMEMf0a0;
      }
      if (((bEXTMEMeb12 >> 4 & 1) != 0) && ((bEXTMEMf186 & 1) != 1)) {
        bEXTMEMf08c = bVar5;
        return bEXTMEMf186;
      }
      if ((bEXTMEMeb12 >> 4 & 1) != 0) {
        BANK0_R4 = BANK0_R4 & 0x80;
        uEXTMEMf180 = 0;
        bEXTMEMf182 = bEXTMEMf182 & 0xfe | 1;
        param_1 = bEXTMEMf181;
        bEXTMEMf181 = bEXTMEMf181 | 3;
      }
      bEXTMEMf185 = bEXTMEMf185 & 0xfd;
      bEXTMEMeb10 = 0xee;
LAB_CODE_3f6f:
      bEXTMEMf185 = bEXTMEMf185 & 0xfd;
      if ((bEXTMEMf0a0 >> 2 & 1) != 0) {
        bEXTMEMf14d = 0xfa;
      }
      cVar6 = 'M';
      if (bEXTMEMf14d != 0) {
        bEXTMEMf08c = bVar5;
        return bEXTMEMf14d;
      }
      FUN_CODE_59c9(0,param_1);
      if (cVar6 == '\0') {
        BANK0_R2 = bVar1;
        return 0;
      }
      _4_2 = 0;
      bVar5 = bEXTMEMf185 | 2;
      if ((bEXTMEMf185 & 8) != 8) {
        BANK0_R2 = bVar1;
        bEXTMEMf185 = bVar5;
        _4_2 = 0;
        return bVar5;
      }
      bEXTMEMeb10 = 0x88;
      bEXTMEMf185 = bVar5;
LAB_CODE_3fb6:
      BANK0_R4 = BANK0_R4 & 3;
      if (bEXTMEMf0a3 != 3) {
        BANK0_R2 = bVar1;
        return bEXTMEMf0a3;
      }
      if ((bEXTMEMf0a0 >> 2 & 1) != 0) {
        BANK0_R2 = bVar1;
        return bEXTMEMf0a0;
      }
      if (((bEXTMEMeb12 & 1) != 0) && ((bEXTMEMf186 >> 1 & 1) != 1)) {
        BANK0_R2 = bVar1;
        return bEXTMEMf186;
      }
      if ((bEXTMEMeb12 & 1) != 0) {
        BANK0_R4 = 0;
        uEXTMEMf180 = 0x30;
        bEXTMEMf181 = bEXTMEMf181 | 0xc;
        bEXTMEMf182 = bEXTMEMf182 & 0xfe | 1;
      }
      bEXTMEMeb10 = 0x89;
    }
    else {
      if (bEXTMEMeb10 == 0x87) goto LAB_CODE_3f16;
      if (bEXTMEMeb10 == 0x88) goto LAB_CODE_3fb6;
      if (bEXTMEMeb10 != 0x89) {
        if (bEXTMEMeb10 == 0x8a) goto LAB_CODE_4092;
        if (bEXTMEMeb10 == 0x8b) {
          bEXTMEMeb12 = bEXTMEMf116 & ~bEXTMEMeb11;
          bEXTMEMf115 = bEXTMEMf115 & ~bEXTMEMeb12;
          bEXTMEMf116 = bEXTMEMf116 & ~bEXTMEMeb12;
          bEXTMEMf184 = bEXTMEMf184 & ~bEXTMEMeb12;
          if ((bEXTMEMeb12 >> 2 & 1) != 0) {
            bEXTMEMf0ab = bEXTMEMf0ab & 0x7f;
            bEXTMEMf04b = bEXTMEMf04b & 0x7f;
            cVar6 = -0x7f;
            bEXTMEMf181 = bEXTMEMf181 & 0x7f;
            FUN_CODE_5ba5(bEXTMEMeb12,bVar2);
            if (cVar6 == '\0') {
              bEXTMEMeb2f = bEXTMEMeb2f & 0x7f;
            }
            uEXTMEMeb40 = 0;
            _4_3 = 0;
            cEXTMEMf152 = '\0';
            bEXTMEMf168 = bEXTMEMf168 & 0xdf;
            if (_6_4 != '\x01') {
              bEXTMEMf168 = bEXTMEMf168 | 0x80;
            }
          }
          cVar6 = '\x12';
          if (((bEXTMEMeb12 & 0xe) != 0) && (FUN_CODE_5ba5(bEXTMEMeb12), cVar6 == '\0')) {
            if (cEXTMEMf15d == '\0') {
              if ((_6_4 != '\x01') && ((bEXTMEMf0ad >> 1 & 1) != 1)) {
                bEXTMEMeb34 = bEXTMEMeb34 | 2;
              }
            }
            else {
              _6_5 = 0;
            }
            if ((bEXTMEMeb12 >> 3 & 1) != 0) {
              if ((bEXTMEMeac7 & 1) != 0) {
                bEXTMEMeac3 = bEXTMEMeac3 | 1;
              }
              uEXTMEMeac4 = 0;
              uEXTMEMeac5 = 0;
              uEXTMEMeac6 = 0;
              bEXTMEMeac7 = 0;
            }
          }
          bEXTMEMeb10 = 0x8c;
LAB_CODE_425c:
          BANK0_R2 = BANK0_R2 & 0x13;
          bEXTMEMf179 = bEXTMEMeb12;
          if (bEXTMEMeb12 != 0) {
            if ((bEXTMEMf17d >> 3 & 1) != 1) {
              bEXTMEMf17d = bEXTMEMf17d | 8;
            }
            if (((bEXTMEMf12e >> 2 & 1) != 1) && ((bEXTMEMf17d >> 5 & 1) != 1)) {
              bEXTMEMf179 = bEXTMEMeb12;
              return bEXTMEMf17d;
            }
            if ((bEXTMEMf12e >> 2 & 1) != 0) {
              bEXTMEMf14e = 0x14;
            }
            bEXTMEMf17d = bEXTMEMf17d & 0xf7 | 0x20;
          }
          bEXTMEMeb10 = 0x8d;
LAB_CODE_42af:
          BANK0_R2 = BANK0_R2 & 0xf;
          bEXTMEMf178 = bEXTMEMeb12;
          if (bEXTMEMeb12 != 0) {
            if ((bEXTMEMf17d >> 2 & 1) != 1) {
              bEXTMEMf17d = bEXTMEMf17d | 4;
            }
            if (((bEXTMEMf12e >> 1 & 1) != 1) && ((bEXTMEMf17d >> 4 & 1) != 1)) {
              bEXTMEMf178 = bEXTMEMeb12;
              return bEXTMEMf17d;
            }
            if ((bEXTMEMf12e >> 1 & 1) != 0) {
              bEXTMEMf14e = 0x14;
            }
            bEXTMEMf17d = bEXTMEMf17d & 0xfb | 0x10;
          }
LAB_CODE_4302:
          if (bEXTMEMeb11 == 0) {
            do {
              bVar1 = bEXTMEMf070;
            } while ((bEXTMEMf071 >> 4 & 1) == 0);
            while (bEXTMEMf070 = bVar1 | 8, (bEXTMEMf132 & 1) != 0) {
              do {
                bVar1 = bEXTMEMf070;
              } while ((bEXTMEMf071 >> 4 & 1) == 0);
            }
            do {
            } while ((bEXTMEMf071 >> 4 & 1) == 0);
            bEXTMEMf135 = bEXTMEMf135 & 0x3f;
            bEXTMEMf070 = bVar1 | 8;
            do {
            } while ((bEXTMEMf071 >> 4 & 1) == 0);
            bEXTMEMf17e = bEXTMEMf17e & 0xfa;
            bEXTMEMf14e = 0x32;
          }
          bEXTMEMeb10 = 0x8f;
          return 0x8f;
        }
        if (bEXTMEMeb10 == 0x8c) goto LAB_CODE_425c;
        if (bEXTMEMeb10 == 0x8d) goto LAB_CODE_42af;
        if (bEXTMEMeb10 == 0x8e) goto LAB_CODE_4302;
        if (bEXTMEMeb10 == 0x8f) {
          if ((bEXTMEMeb12 >> 1 & 1) != 0) {
            bEXTMEMf0a7 = bEXTMEMf0a7 | 1;
          }
          bEXTMEMeb10 = 0x80;
          bEXTMEMeb12 = 0;
          bEXTMEMf08c = bVar5;
          bEXTMEMf178 = 0;
          bEXTMEMf179 = 0;
          return 0x80;
        }
        if (bEXTMEMeb10 != 0xee) {
          bEXTMEMf08c = bVar5;
          return bEXTMEMeb10;
        }
        goto LAB_CODE_3f6f;
      }
    }
    if ((bEXTMEMeb12 & 1) != 0) {
      BANK0_R3 = BANK0_R3 & 0x30;
      BANK0_R4 = BANK0_R4 & 0xc;
      if (cEXTMEMf0a2 != '0') {
        BANK0_R2 = bVar1;
        return bEXTMEMf0a3;
      }
      if (bEXTMEMf0a3 != 0xc) {
        BANK0_R2 = bVar1;
        return bEXTMEMf0a3;
      }
    }
    if ((bEXTMEMf0a0 >> 2 & 1) != 0) {
      BANK0_R2 = bVar1;
      return bEXTMEMf0a0;
    }
    if (((bEXTMEMeb12 >> 3 & 1) != 0) && ((bEXTMEMf186 >> 2 & 1) != 1)) {
      BANK0_R2 = bVar1;
      return bEXTMEMf186;
    }
    if ((bEXTMEMeb12 >> 3 & 1) != 0) {
      BANK0_R4 = BANK0_R4 & 0x80;
      uEXTMEMf180 = 0x88;
      bEXTMEMf182 = bEXTMEMf182 & 0xfe | 1;
    }
    bEXTMEMeb10 = 0x8a;
LAB_CODE_4092:
    if (((bEXTMEMeb12 >> 3 & 1) != 0) && (BANK0_R3 = BANK0_R3 & 0x88, cEXTMEMf0a2 != -0x78)) {
      BANK0_R2 = bVar1;
      return bEXTMEMf0a3;
    }
    if ((bEXTMEMf0a0 >> 2 & 1) != 0) {
      BANK0_R2 = bVar1;
      return bEXTMEMf0a0;
    }
    if ((bEXTMEMeb12 >> 2 & 1) != 0) {
      if (cEXTMEMf152 != '\0') {
        _4_3 = 1;
      }
      cEXTMEMf152 = '2';
      cEXTMEMebc1 = '\0';
      if ((bEXTMEMf169 >> 1 & 1) != 0) {
        bEXTMEMf168 = bEXTMEMf168 | 0x10;
      }
      _4_7 = 0;
      bEXTMEMf0ab = bEXTMEMf0ab | 0x80;
      cEXTMEMf15d = '\n';
      if ((bEXTMEMf12f & 1) != 0) {
        bEXTMEMf114 = bEXTMEMf114 | 0x16;
      }
      bEXTMEMf04b = bEXTMEMf04b | 0x80;
      if ((bVar3 >> 3 & 1) != 1) {
        bEXTMEMeb2f = bEXTMEMeb2f | 0x80;
      }
    }
    if ((bEXTMEMeb12 >> 3 & 1) != 0) {
      if (cEXTMEMf152 != '\0') {
        _4_3 = 1;
        cEXTMEMf15d = '\0';
        _7_1 = 0;
      }
      if (_6_6 != '\0') {
        bEXTMEMeb34 = bEXTMEMeb34 | 2;
      }
      cEXTMEMf152 = '2';
    }
    bEXTMEMf116 = bEXTMEMf116 | bEXTMEMeb12;
    BANK0_R2 = bVar1;
    bEXTMEMeb10 = 0x80;
    bEXTMEMeb12 = 0;
    bEXTMEMf178 = 0;
    bEXTMEMf179 = 0;
    uEXTMEMf180 = 0;
    bEXTMEMf181 = bEXTMEMf181 & 0x80;
    bEXTMEMf182 = bEXTMEMf182 & 0xfe;
    bEXTMEMf185 = bEXTMEMf185 & 0xfd;
    return 0x80;
  }
  bVar5 = bEXTMEMf115;
  bEXTMEMeb12 = ~bVar3 & bEXTMEMeb11;
  bEXTMEMf115 = bEXTMEMf115 | bEXTMEMeb12;
  if (((bEXTMEMeb34 >> 1 & 1) != 0) && (cVar6 = -0x5a, -1 < cEXTMEMf0a6)) {
    BANK0_R2 = bVar1;
    FUN_CODE_5ba5(cEXTMEMf0a6,bVar5);
    if (((cVar6 == '\0') || (_6_6 != '\0')) && (BANK0_R2 = bVar1, FUN_CODE_5c10(), cVar6 != '\0')) {
      BANK0_R2 = bVar1;
      FUN_CODE_5941();
    }
    bEXTMEMeb34 = bEXTMEMeb34 & 0xfd;
  }
  cVar6 = -0x52;
  if ((((((bEXTMEMf0ae >> 5 & 1) != 0) &&
        (BANK0_R2 = bVar1, FUN_CODE_5b50(bEXTMEMf0ae), cVar6 == '\0')) && (_6_4 != '\x01')) &&
      ((cVar6 = -0x3d, (bEXTMEMeac3 >> 1 & 1) == 1 ||
       ((BANK0_R2 = bVar1, FUN_CODE_5c10(bEXTMEMeac3), cVar6 != '\0' &&
        (((bEXTMEMeb34 >> 1 & 1) == 1 || (cEXTMEMf0a6 < '\0')))))))) &&
     ((bEXTMEMeb12 >> 3 & 1) != 0)) {
    BANK0_R2 = bVar1;
    return bEXTMEMeb12;
  }
  if ((bEXTMEMeb12 >> 1 & 1) != 0) {
    bEXTMEMf0a7 = bEXTMEMf0a7 & 0xfe;
  }
  bEXTMEMeb10 = 0x82;
LAB_CODE_3caf:
  if (bVar3 == 0) {
    if ((bEXTMEMf17e >> 1 & 1) != 1) {
      BANK0_R2 = bVar1;
      return bEXTMEMf17e;
    }
    bEXTMEMf17e = bEXTMEMf17e | 1;
    bEXTMEMf14e = 0x1e;
  }
  bEXTMEMeb10 = 0x83;
  BANK0_R2 = bVar1;
  return 0x83;
}



/* =========================================================
 * CODE:439e  FUN_CODE_439e  size=148
 * callers: CODE:02e9
 * ========================================================= */

void FUN_CODE_439e(char param_1)

{
  FUN_CODE_5ba5();
  if (param_1 == '\0') {
    return;
  }
  if (((_0_0 != '\x01') &&
      ((FUN_CODE_5b50(), param_1 != '\0' || ((cEXTMEMeb3b != -0x30 && (cEXTMEMeb39 != '\0')))))) &&
     ((bEXTMEMf0a5 >> 5 & 1) != 0)) {
    return;
  }
  if ((_0_6 != '\0') && ((bEXTMEMf0a5 >> 4 & 1) != 0)) {
    return;
  }
  if (cEXTMEMf15a != '\0') {
    return;
  }
  if ((((bEXTMEMf12f >> 3 & 1) != 0) && ((bEXTMEMf12f >> 1 & 1) != 0)) && (cEXTMEMeb53 != -0x1d)) {
    return;
  }
  if (_6_4 != '\0') {
    return;
  }
  if (((cEXTMEMeaef != '0') && (cEXTMEMeaef != '1')) && (cEXTMEMeaef != '2')) {
    return;
  }
  return;
}



/* =========================================================
 * CODE:4432  FUN_CODE_4432  size=98
 * callers: CODE:02e9
 * ========================================================= */

void FUN_CODE_4432(char param_1)

{
  FUN_CODE_5ba5();
  if ((param_1 != '\0') || ((bEXTMEMf114 >> 3 & 1) != 0)) {
    return;
  }
  if (cEXTMEMeb0e != '\0') {
    return;
  }
  if (((cEXTMEMeaef != ' ') && (cEXTMEMeaef != '!')) && (cEXTMEMeaef != '\"')) {
    if (((cEXTMEMeaef != -0x50) && (cEXTMEMeaef != -0x4f)) && (cEXTMEMeaef != -0x4e)) {
      return;
    }
    return;
  }
  return;
}



/* =========================================================
 * CODE:4494  FUN_CODE_4494  size=229
 * callers: CODE:02e9
 * ========================================================= */

void FUN_CODE_4494(char param_1)

{
  char cVar1;
  
  if ((_0_0 != '\x01') &&
     ((FUN_CODE_5b7d(), param_1 != '\0' || ((cEXTMEMeb3b != -0x30 && (cEXTMEMeb39 != '\0')))))) {
    return;
  }
  if (((bEXTMEMf169 >> 1 & 1) != 0) && (cEXTMEMeacf == -0x70)) {
    return;
  }
  cVar1 = '/';
  if ((((bEXTMEMf12f & 1) != 0) &&
      ((FUN_CODE_5ba5(bEXTMEMf12f), cVar1 != '\0' || ((bEXTMEMf114 >> 3 & 1) == 1)))) ||
     (cVar1 = ']', 1 < BANK0_R2)) {
    return;
  }
  FUN_CODE_5c82(uEXTMEMf15d);
  if (cVar1 != '\0') {
    return;
  }
  if (((bEXTMEMeac3 >> 1 & 1) == 1) || ((bEXTMEMeac7 >> 1 & 1) != 0)) {
    return;
  }
  if (((cEXTMEMeaef == '`') || (cEXTMEMeaef == 'a')) || (cEXTMEMeaef == 'b')) {
    return;
  }
  if (((cEXTMEMeaef != -0x50) && (cEXTMEMeaef != -0x4f)) && (cEXTMEMeaef != -0x4e)) {
    if (((bEXTMEMf12e >> 5 & 1) != 0) &&
       (((cEXTMEMeaef == '0' || (cEXTMEMeaef == '1')) || (cEXTMEMeaef == '2')))) {
      return;
    }
    return;
  }
  return;
}



/* =========================================================
 * CODE:4579  FUN_CODE_4579  size=80
 * callers: CODE:02e9
 * ========================================================= */

void FUN_CODE_4579(void)

{
  char cVar1;
  
  cVar1 = -0x52;
  if ((bEXTMEMf0ae >> 5 & 1) != 0) {
    cVar1 = -0x52;
    FUN_CODE_5c10(bEXTMEMf0ae);
    if (((cVar1 != '\0') && (_6_4 != '\x01')) &&
       ((cEXTMEMf0a6 < '\0' || (cVar1 = '4', (bEXTMEMeb34 >> 1 & 1) != 0)))) {
      return;
    }
  }
  FUN_CODE_5ba5();
  if (cVar1 == '\0') {
    cVar1 = '\x14';
    if ((bEXTMEMf114 >> 3 & 1) == 0) {
      FUN_CODE_5bc2(bEXTMEMf114);
      if ((cVar1 == '\0') && ((bEXTMEMf114 >> 2 & 1) == 0)) {
        return;
      }
      return;
    }
  }
  return;
}



/* =========================================================
 * CODE:45c9  FUN_CODE_45c9  size=63
 * callers: CODE:02e9
 * ========================================================= */

byte FUN_CODE_45c9(byte param_1)

{
  byte bVar1;
  byte bVar2;
  
  FUN_CODE_5bdf();
  if ((param_1 != 0) || (param_1 = bEXTMEMf114, (bEXTMEMf114 >> 1 & 1) != 0)) {
    return param_1;
  }
  bVar2 = (_0_0 & 1 ^ 1) << 7;
  bVar1 = bEXTMEMf11a;
  if ((char)bVar2 < '\0') {
    bVar1 = bEXTMEMf116;
  }
  _a_6 = bVar1 & 1;
  bVar2 = bVar1 >> 1 | bVar2;
  if ((_a_6 != 1) && (bVar2 = bEXTMEMf114, (bEXTMEMf114 & 1) == 0)) {
    return bEXTMEMf114;
  }
  return bVar2;
}



/* =========================================================
 * CODE:4612  FUN_CODE_4612  size=1144
 * callers: CODE:2e74, CODE:02e9
 * ========================================================= */

void FUN_CODE_4612(void)

{
  bool bVar1;
  undefined1 uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  char cVar9;
  byte bVar10;
  undefined1 uVar11;
  
  bVar6 = BANK0_R6;
  bVar10 = BANK0_R5;
  uVar2 = BANK0_R3;
  bVar4 = BANK0_R2;
  DAT_INTMEM_50 = bEXTMEMead1;
  uVar7 = 0;
  uVar8 = 0;
  _b_1 = bEXTMEMeac8 >> 5 & 1;
  bVar3 = bEXTMEMeacf;
  bVar5 = bEXTMEMead0;
  FUN_CODE_5a7f();
  BANK0_R5 = bVar10;
  BANK0_R6 = bVar6;
  if (_b_0 == '\x01') {
    uEXTMEMeaee = 0x3f;
    uEXTMEMf08c = 0x3f;
    if ((cEXTMEMf15e == '\0') && (_a_7 != '\x01')) {
      cEXTMEMf15e = cEXTMEMeae0;
    }
    do {
      if (((_6_6 == '\x01') || (((bEXTMEMeac8 >> 1 & 1) != 1 && ((bEXTMEMeac8 >> 4 & 1) == 0)))) ||
         (((bEXTMEMf0cd >> 6 & 1) != 1 &&
          ((((bEXTMEMf12f >> 1 & 1) == 0 || (-1 < (char)bEXTMEMf0cd)) || (_b_1 == 1)))))) break;
    } while (cEXTMEMf15e != '\0');
    if (cEXTMEMf15e == '\0') {
      _a_7 = '\x01';
    }
    bEXTMEMf05d = bVar3 & 0xf0 | DAT_INTMEM_50;
    bEXTMEMf05e = (bVar3 & 7) << 4;
    bEXTMEMf05c = bVar5;
    if (_0_0 != 1) {
      BANK3_R0 = 0xf;
      BANK3_R1 = 1;
      BANK3_R2 = 2;
      _d_0 = 0;
      uVar11 = 0;
      BANK0_R2 = bVar4;
      BANK0_R3 = uVar2;
      FUN_CODE_61d0(bEXTMEMf05e);
      uEXTMEMf05f = uVar11;
    }
    if ((bVar5 & 1) != 0) {
      uVar7 = 0;
    }
    if (((((bVar5 >> 1 & 1) == 1) || (BANK0_R5 = bVar10, _b_1 != 0)) &&
        ((BANK0_R5 = bVar10, (bVar3 >> 6 & 1) != 1 &&
         (((bEXTMEMeb18 & 1) != 0 && ((bEXTMEMeb1a & 1) != 0)))))) && (_6_7 != '\x01')) {
      BANK0_R5 = bVar10 | 2;
    }
    if (((bVar5 >> 5 & 1) != 0) && ((bVar3 >> 6 & 1) != 0)) {
      BANK0_R5 = BANK0_R5 | 2;
    }
    if ((((bVar5 >> 3 & 1) != 0) && ((bVar3 == 0x80 || (cEXTMEMebbf != '\0')))) ||
       ((_b_1 != 0 && ((bVar5 >> 6 & 1) != 1)))) {
      BANK0_R5 = BANK0_R5 | 4;
    }
    if ((((bVar5 >> 4 & 1) == 1) || (_b_1 != 0)) && (bVar3 == 0xa0)) {
      BANK0_R5 = BANK0_R5 | 0x20;
    }
    if ((bVar5 >> 6 & 1) != 0) {
      uVar8 = 8;
    }
    BANK0_R6 = bVar6;
    if ((char)bVar5 < '\0') {
      BANK0_R6 = bVar6 | 0x10;
      BANK0_R4 = BANK0_R4 | 0x80;
    }
    bVar10 = BANK0_R6;
    if ((DAT_INTMEM_50 & 1) != 0) {
      BANK0_R6 = BANK0_R6 | 4;
      if (_6_6 != '\0') {
        BANK0_R6 = bVar10 | 0x26;
      }
      BANK0_R4 = BANK0_R4 | 2;
    }
    if ((bVar3 >> 4 & 1) != 0) {
      BANK0_R5 = BANK0_R5 | 0x40;
    }
    bVar10 = BANK0_R5;
    BANK0_R5 = BANK0_R5 | 0x80;
    if (_b_1 != 0) {
      BANK0_R6 = BANK0_R6 | 0x20;
      BANK0_R4 = BANK0_R4 | 1;
    }
    if ((bVar3 >> 6 & 1) == 0) {
      if ((((bVar5 >> 1 & 1) != 1) && (_b_1 == 0)) || (_6_7 != '\0')) {
        bEXTMEMf06c = bEXTMEMf06c | 4;
      }
      BANK0_R4 = BANK0_R4 | 4;
    }
    else {
      BANK0_R5 = bVar10 | 0x90;
      if ((bVar5 >> 2 & 1) != 0) {
        bEXTMEMf06d = bEXTMEMf06d | 0x40;
      }
    }
    bVar10 = bEXTMEMf135;
    uEXTMEMf068 = uVar7;
    uEXTMEMf069 = uVar8;
    bEXTMEMf135 = bEXTMEMf135 | 4;
  }
  else {
    uEXTMEMf08c = 0x12;
    bEXTMEMf05c = bEXTMEMead0;
    bEXTMEMf05d = bEXTMEMead1 & 0xf;
    uEXTMEMf069 = 0x26;
    bVar10 = bEXTMEMead0;
    if (_6_6 != '\x01') {
      bVar10 = 0x86;
      uEXTMEMf069 = 0x36;
    }
    uEXTMEMf068 = 0x86;
    if (_6_7 != '\0') {
      bVar10 = bEXTMEMf06c;
      uEXTMEMf068 = 0x84;
      bEXTMEMf06c = bEXTMEMf06c | 4;
    }
  }
  bEXTMEMf070 = bEXTMEMf070 | 0xb;
  BANK0_R2 = bVar4;
  BANK0_R3 = uVar2;
  FUN_CODE_5643(0xf00c,bVar10);
  cVar9 = 'h';
  bVar10 = bEXTMEMf168 & 0xfe;
  do {
    if (_0_0 == 1) break;
    cVar9 = -0x7e;
    bEXTMEMf168 = bEXTMEMf182;
  } while ((bEXTMEMf182 >> 1 & 1) == 1);
  do {
    bVar6 = bEXTMEMf168;
    if (_0_0 == 1) break;
    cVar9 = -0x7e;
    bEXTMEMf168 = bEXTMEMf182;
    bVar6 = bEXTMEMf182;
  } while ((bEXTMEMf182 >> 2 & 1) == 1);
  BANK0_R2 = bVar4;
  BANK0_R3 = uVar2;
  bEXTMEMf168 = bVar10;
  if (_b_0 != '\0') {
    if (((bVar5 & 1) != 0) && (cVar9 = -0x59, bVar6 = bEXTMEMf0a7, (bEXTMEMf0a7 >> 1 & 1) != 0)) {
      _a_7 = '\x01';
    }
    if (((((bVar5 >> 1 & 1) != 0) && (bVar3 == 0x80)) && (_6_7 != '\x01')) &&
       (cVar9 = '|', bVar6 = bEXTMEMf07c, (bEXTMEMf07c >> 1 & 1) != 0)) {
      _a_7 = '\x01';
    }
    if ((((bVar5 >> 3 & 1) != 0) && (bVar3 == 0x80)) && (cVar9 = '|', (bEXTMEMf07c >> 6 & 1) != 0))
    {
      _a_7 = '\x01';
    }
    if (((bVar5 >> 6 & 1) != 0) && (FUN_CODE_5c77(bVar6), cVar9 == '\0')) {
      _a_7 = '\x01';
    }
    if ((((char)bVar5 < '\0') && (_b_1 != 1)) && (cVar9 = -0x33, (bEXTMEMf0cd >> 6 & 1) != 0)) {
      _a_7 = '\x01';
    }
    BANK0_R3 = uVar2;
    if (((DAT_INTMEM_50 & 1) != 0) && (FUN_CODE_5b50(), cVar9 != '\0')) {
      _a_7 = '\x01';
    }
    if ((_b_1 != 0) && (cVar9 = -0x33, (char)bEXTMEMf0cd < '\0')) {
      _a_7 = '\x01';
    }
    _a_3 = 1;
    FUN_CODE_3432();
    if (cVar9 != '\0') {
      _a_7 = '\x01';
    }
  }
  while( true ) {
    while( true ) {
      cVar9 = -0x74;
      uEXTMEMf08c = 0x13;
      if (_a_7 != '\0') {
        cVar9 = -0x74;
        FUN_CODE_4a8a();
      }
      if (_b_0 == '\0') break;
      FUN_CODE_5a7f();
      bEXTMEMf070 = bEXTMEMf070 | 4;
    }
    if ((_0_0 != 1) && (FUN_CODE_3957(), cVar9 == '\0')) break;
    uEXTMEMf08c = 0x13;
    cVar9 = cEXTMEMf11a;
    if ((char)((_0_0 & 1 ^ 1) << 7) < '\0') {
      cVar9 = cEXTMEMf116;
    }
    _b_2 = cVar9 != '\0';
    if (((bool)_b_2) ||
       ((((bEXTMEMf07c >> 1 & 1) != 0 && ((bEXTMEMf07c >> 2 & 1) != 1)) && (_6_7 != '\x01'))))
    break;
    if (cEXTMEMebbf == '\0') {
      bVar4 = bEXTMEMf07c >> 6;
    }
    else {
      bVar4 = bEXTMEMf07d >> 2;
    }
    if ((bVar4 & 1) != 0) break;
    cVar9 = '\x01' - ((char)(_0_0 << 7) >> 7);
    bVar4 = 2;
    bVar10 = 0;
    while (cVar9 = cVar9 + -1, cVar9 != '\0') {
      bVar1 = CARRY1(bVar4,bVar4);
      bVar4 = bVar4 * '\x02';
      bVar10 = bVar10 << 1 | bVar1;
    }
    cVar9 = -0x33;
    BANK0_R2 = BANK0_R2 & bEXTMEMf0cd;
    BANK0_R3 = 0;
    if (((((bVar4 == 0 && bVar10 == 0) || (_2_7 == '\x01')) ||
         ((FUN_CODE_5b50(bEXTMEMf0cd), cVar9 != '\0' ||
          ((FUN_CODE_5b7d(), cVar9 != '\0' || (cEXTMEMeaeb < '\0')))))) ||
        (((bEXTMEMf098 & 1) == 1 ||
         (((cVar9 = -0x54, bVar4 = bEXTMEMf0ac, (bEXTMEMf0ac >> 6 & 1) != 1 && (_6_6 != '\x01')) &&
          (cVar9 = -0x33, bVar4 = bEXTMEMf0cd, (bEXTMEMf0cd >> 6 & 1) == 0)))))) ||
       (((FUN_CODE_5bfc(bVar4), cVar9 != '\0' || (bVar4 = bEXTMEMead3, (char)bEXTMEMead3 < '\0')) &&
        (bVar4 = bEXTMEMf0ac, (bEXTMEMf0ac >> 6 & 1) == 0)))) break;
    FUN_CODE_5a7f(bVar4);
    bEXTMEMf070 = bEXTMEMf070 | 4;
  }
  bEXTMEMf070 = bEXTMEMf070 & 0xfb;
  uEXTMEMf08c = 0x14;
  do {
  } while ((bEXTMEMf071 >> 2 & 1) == 1);
  bEXTMEMf168 = bEXTMEMf168 | 1;
  FUN_CODE_5a7f(bEXTMEMf071);
  uEXTMEMf068 = 0;
  uEXTMEMf069 = 0;
  uEXTMEMf06a = 0;
  uEXTMEMf06b = 0;
  bEXTMEMf06c = bEXTMEMf06c & 0xfb;
  bEXTMEMf05c = 0;
  bEXTMEMf05d = 0;
  bEXTMEMf05e = bEXTMEMf05a & 0xf;
  uEXTMEMf05f = 0;
  uEXTMEMf134 = 0;
  bEXTMEMf135 = 0;
  bEXTMEMf136 = bEXTMEMf132 & 8;
  uEXTMEMf137 = 0;
  bEXTMEMf070 = bEXTMEMf070 | 0xb;
  do {
  } while ((bEXTMEMf071 >> 1 & 1) == 0);
  do {
  } while ((bEXTMEMf071 >> 4 & 1) == 0);
  do {
  } while ((bEXTMEMf071 & 1) == 0);
  return;
}



/* =========================================================
 * CODE:4a8a  FUN_CODE_4a8a  size=92
 * callers: CODE:4612
 * ========================================================= */

/* WARNING: Removing unreachable block (CODE,0x5650) */

void FUN_CODE_4a8a(void)

{
  uEXTMEMf08c = 0x14;
  bEXTMEMf070 = bEXTMEMf070 & 0xfb;
  do {
  } while ((bEXTMEMf071 >> 2 & 1) == 1);
  FUN_CODE_5a7f(bEXTMEMf071);
  bEXTMEMf069 = bEXTMEMf069 | 0x80;
  bEXTMEMf05e = bEXTMEMf05e | cEXTMEMebc8 << 4;
  bEXTMEMf070 = bEXTMEMf070 | 3;
  FUN_CODE_5a7f();
  do {
  } while( true );
}



/* =========================================================
 * CODE:4ae6  FUN_CODE_4ae6  size=254
 * callers: CODE:02e9
 * ========================================================= */

void FUN_CODE_4ae6(undefined2 param_1)

{
  char cVar1;
  bool bVar2;
  char cVar4;
  undefined2 uVar3;
  
  if ((char)param_1 != '\0') {
    FUN_CODE_5643(param_1);
  }
  bEXTMEMf0a9 = bEXTMEMf0a9 & 0xc1;
  bEXTMEMf0aa = bEXTMEMf0aa & 0xf8;
  bEXTMEMf168 = bEXTMEMf168 & 0xfe;
  FUN_CODE_5a7f();
  uEXTMEMf05c = 0;
  uEXTMEMf05d = 0;
  uEXTMEMf05e = 0;
  uEXTMEMf05f = 0;
  uEXTMEMf068 = 0;
  uEXTMEMf069 = 0x80;
  uEXTMEMf06a = 0;
  uEXTMEMf06b = 0;
  uEXTMEMf06c = 4;
  uEXTMEMf06d = 1;
  uEXTMEMf06e = 0x10;
  uEXTMEMf06f = 0xc2;
  uEXTMEMf134 = 0;
  uEXTMEMf135 = 0;
  bEXTMEMf136 = bEXTMEMf132 & 8;
  uEXTMEMf137 = 0;
  bEXTMEMf070 = bEXTMEMf070 | 0xb;
  bEXTMEMf114 = bEXTMEMf114 & 0xe0;
  if (_0_0 == '\x01') goto LAB_CODE_4bd1;
  if ((bEXTMEMf099 & 1) == 0) {
    cVar4 = -0x52;
    cVar1 = -((char)((bEXTMEMf0ae >> 5) << 7) >> 7);
    if ((cVar1 == '\0') || (FUN_CODE_5c10(cVar1,uEXTMEMf131,uEXTMEMf133), cVar4 == '\0')) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_CODE_4b89;
    _b_4 = '\0';
  }
  else {
LAB_CODE_4b89:
    _b_4 = '\x01';
  }
  _b_3 = _b_4;
  do {
    uVar3 = 0xf118;
  } while (cEXTMEMf118 != '\0');
  do {
    FUN_CODE_3957();
  } while ((char)uVar3 == '\0');
  do {
    do {
      FUN_CODE_3957();
    } while ((char)uVar3 == '\0');
    uVar3 = 0xf116;
  } while (cEXTMEMf116 != '\0');
  if (_b_3 != '\0') {
    do {
    } while (cEXTMEMf0a6 < '\0');
  }
  if ((bEXTMEMeb34 >> 1 & 1) != 0) {
    FUN_CODE_5941(bEXTMEMeb34);
  }
  if (_b_3 != '\0') {
    do {
    } while( true );
  }
LAB_CODE_4bd1:
  FUN_CODE_5a7f();
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* =========================================================
 * CODE:4be4  FUN_CODE_4be4  size=921
 * callers: CODE:02e9
 * ========================================================= */

void FUN_CODE_4be4(undefined2 param_1,byte param_2,byte param_3,undefined1 param_4)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined1 uVar6;
  byte bVar7;
  ushort uVar8;
  undefined2 uVar9;
  
  BANK3_R0 = 3;
  BANK3_R1 = 1;
  BANK3_R2 = 2;
  _d_0 = 0;
  bVar7 = (byte)((ushort)param_1 >> 8);
  cVar2 = FUN_CODE_61d0();
  bVar4 = param_2 >> 4;
  bVar3 = param_3 >> 4 ^ (bVar4 | param_2 << 4) ^ bVar4;
  bVar4 = cVar2 << 4 | bVar4;
  bVar1 = BANK0_R3 & 0xf;
  BANK0_R5 = 0;
  uVar6 = param_4;
  bVar5 = bVar4;
  if ((bVar3 & 0xf) != 0) {
    BANK0_R5 = bVar3 & 0xf;
    uVar6 = BANK0_R4;
    bVar5 = BANK0_R6;
  }
  BANK0_R6 = bVar5;
  BANK0_R4 = uVar6;
  bEXTMEMf0a7 = bEXTMEMf0a7 | 1;
  BANK3_R3 = 0;
  BANK3_R4 = 0;
  BANK3_R5 = 0;
  BANK3_R6 = 0;
  BANK3_R0 = 0x5c;
  BANK3_R1 = 2;
  BANK3_R2 = 2;
  _c_7 = 0;
  uVar8 = 0xf000;
  BANK0_R2 = bVar7;
  BANK0_R3 = bVar1;
  bEXTMEMf125 = BANK0_R5;
  FUN_CODE_617c(0xf000);
  BANK3_R0 = 0x3c;
  BANK3_R1 = 2;
  BANK3_R2 = 2;
  _d_0 = 0;
  uVar8 = uVar8 & 0xff00;
  bVar5 = FUN_CODE_61d0();
  BANK3_R3 = (byte)uVar8;
  BANK3_R4 = (byte)(uVar8 >> 8);
  BANK3_R6 = bVar5 | 1;
  BANK3_R0 = 0x3c;
  BANK3_R1 = 2;
  BANK3_R2 = 2;
  _c_7 = 0;
  BANK3_R5 = param_2;
  FUN_CODE_617c((ushort)BANK3_R4 << 8);
  BANK0_R2 = bVar7;
  BANK0_R3 = bVar1;
  if (_0_0 != '\x01') {
    if (-1 < (char)bEXTMEMf12e) {
      if (bVar3 < 9) {
        DAT_INTMEM_5f = 0x61;
      }
      else {
        DAT_INTMEM_5f = 0x60;
      }
      uVar6 = *(undefined1 *)((ushort)bVar3 + 0x20);
      BANK0_R2 = bVar4;
      FUN_CODE_63b6(0x1f,bEXTMEMf12e);
      BANK0_R2 = bVar4;
      DAT_INTMEM_5f = uVar6;
      FUN_CODE_63b6(0x1e);
    }
    DAT_INTMEM_5f = 0x80;
    FUN_CODE_63b6(0x28);
  }
  uEXTMEMf122 = 0x34;
  BANK3_R0 = 0x3d;
  BANK3_R1 = 2;
  BANK3_R2 = 2;
  _d_0 = 0;
  uVar9 = 0xf100;
  BANK3_R6 = FUN_CODE_61d0();
  BANK3_R3 = (byte)uVar9;
  BANK3_R4 = (byte)((ushort)uVar9 >> 8);
  BANK0_R5 = BANK0_R5 | 2;
  if ((bEXTMEMf12e >> 5 & 1) != 0) {
    BANK0_R3 = BANK0_R3 | 0x10;
  }
  BANK3_R0 = 0x3d;
  BANK3_R1 = 2;
  BANK3_R2 = 2;
  _c_7 = 0;
  uVar8 = 0xf100;
  BANK3_R5 = param_2;
  FUN_CODE_617c(0xf100,bEXTMEMf12e);
  BANK3_R0 = 0x25;
  BANK3_R1 = 2;
  BANK3_R2 = 2;
  _c_7 = 0;
  BANK3_R3 = 0;
  BANK3_R4 = 0;
  BANK3_R5 = 0;
  BANK3_R6 = 0;
  uVar8 = uVar8 & 0xff00;
  FUN_CODE_617c(uVar8);
  BANK3_R0 = 0x6d;
  BANK3_R1 = 2;
  BANK3_R2 = 2;
  _d_0 = 0;
  uVar8 = uVar8 & 0xff00;
  BANK3_R6 = FUN_CODE_61d0();
  BANK3_R4 = (byte)(uVar8 >> 8);
  BANK3_R3 = (byte)uVar8 | 4;
  BANK3_R0 = 0x6d;
  BANK3_R1 = 2;
  BANK3_R2 = 2;
  _c_7 = 0;
  BANK3_R5 = param_2;
  FUN_CODE_617c((ushort)BANK3_R4 << 8);
  if (_0_0 != '\x01') {
    FUN_CODE_6558();
    uEXTMEMf17c = 0x47;
    if ((bEXTMEMf12f >> 5 & 1) != 0) {
      BANK3_R0 = 0x4a;
      BANK3_R1 = 0;
      BANK3_R2 = 2;
      _c_7 = 0;
      BANK3_R3 = 0;
      BANK3_R4 = 2;
      BANK3_R5 = 0x20;
      BANK3_R6 = 0x74;
      FUN_CODE_617c(0xf100,bEXTMEMf12f);
    }
  }
  FUN_CODE_507e();
  uEXTMEMf068 = uEXTMEMf060;
  uEXTMEMf069 = uEXTMEMf061;
  uEXTMEMf06a = uEXTMEMf062;
  uEXTMEMf06b = uEXTMEMf063;
  uEXTMEMf06c = uEXTMEMf064;
  uEXTMEMf06d = uEXTMEMf065;
  uEXTMEMf06e = uEXTMEMf066;
  uEXTMEMf06f = uEXTMEMf067;
  uEXTMEMf134 = uEXTMEMf130;
  uEXTMEMf135 = uEXTMEMf131;
  uEXTMEMf136 = uEXTMEMf132;
  uEXTMEMf137 = uEXTMEMf133;
  bEXTMEMf168 = bEXTMEMf168 | 4;
  uEXTMEMeae0 = 0x28;
  if (cEXTMEMeace != '\0') {
    FUN_CODE_2e74(cEXTMEMeace);
  }
  bVar1 = bEXTMEMf0a0;
  if ((bEXTMEMf0a0 >> 1 & 1) != 0) {
    bVar1 = bEXTMEMf0ac;
    bEXTMEMf0ac = bEXTMEMf0ac | 0x40;
  }
  uEXTMEMeaf0 = 5;
  uEXTMEMeaf2 = 0x32;
  uEXTMEMebaa = 10;
  uEXTMEMeaf3 = 10;
  uEXTMEMeb1c = 3;
  uEXTMEMeb1d = 0x19;
  uEXTMEMeaf1 = 0x14;
  FUN_CODE_558b(bVar1);
  if ((bEXTMEMf0ae >> 6 & 1) != 1) {
    bEXTMEMeaaf = bEXTMEMeaaf | 1;
  }
  bEXTMEMf04b = bEXTMEMf04b & 0x7f;
  if (_1_0 == '\0') {
    bVar1 = bEXTMEMf181;
    if (_6_7 != '\0') {
      bVar1 = bEXTMEMf0b0;
      bEXTMEMf0b0 = bEXTMEMf0b0 & 0xe7;
    }
  }
  else {
    bEXTMEMf07d = (bEXTMEMf07d | 0xf0) & 0xdf;
    bVar1 = bEXTMEMf0e9;
    bEXTMEMf0e9 = bEXTMEMf0e9 | 4;
  }
  uEXTMEMf0b1 = 0x73;
  BANK3_R0 = 0x6d;
  BANK3_R1 = 2;
  BANK3_R2 = 2;
  _d_0 = 0;
  uVar9 = 0xf000;
  bEXTMEMf181 = bEXTMEMf181 & 0x7f;
  BANK3_R6 = FUN_CODE_61d0(bVar1);
  BANK3_R4 = (byte)((ushort)uVar9 >> 8);
  BANK3_R3 = (byte)uVar9 | 1;
  BANK3_R0 = 0x6d;
  BANK3_R1 = 2;
  BANK3_R2 = 2;
  _c_7 = 0;
  BANK3_R5 = param_2;
  FUN_CODE_617c((ushort)BANK3_R4 << 8);
  bEXTMEMf168 = bEXTMEMf168 | 1;
  FUN_CODE_5a2b();
  FUN_CODE_59f9();
  FUN_CODE_5a7f();
  uEXTMEMf068 = 0;
  uEXTMEMf069 = 0;
  uEXTMEMf06a = 0;
  uEXTMEMf06b = 0;
  uEXTMEMf05c = 0;
  uEXTMEMf05d = 0;
  bEXTMEMf05e = bEXTMEMf05a & 0xf;
  uEXTMEMf05f = 0;
  bVar4 = bEXTMEMf070 | 3;
  bVar1 = bEXTMEMf070;
  bEXTMEMf070 = bVar4;
  if (_0_6 != '\0') {
    bEXTMEMf0b0 = bEXTMEMf0b0 & 0xe7;
    uEXTMEMf155 = 5;
    if (((bEXTMEMf0af & 1) != 0) && (_6_6 != '\0')) {
      FUN_CODE_5643(0xf032,bEXTMEMf0af,uEXTMEMf059,uEXTMEMf05b);
    }
    if (_0_0 != '\x01') {
      FUN_CODE_4f88();
      do {
      } while ((bEXTMEMf071 >> 6 & 1) == 0);
      uEXTMEMf078 = 0x77;
      bEXTMEMf070 = bEXTMEMf070 | 0x20;
      FUN_CODE_5028(bEXTMEMf071);
    }
    if (_6_6 == '\0') {
      bVar1 = 0xa0;
      uEXTMEMead1 = 1;
      bEXTMEMead0 = bVar1;
    }
    else {
      bVar1 = 0x3e;
      uEXTMEMead1 = 7;
      bEXTMEMead0 = bVar1;
    }
  }
  uVar9 = 0xebc6;
  uEXTMEMebc6 = 0;
  FUN_CODE_58a8(bVar1);
  if (_0_0 != '\x01') {
    do {
      FUN_CODE_3957();
    } while ((char)uVar9 == '\0');
  }
  bEXTMEMf0e9 = bEXTMEMf0e9 | 0x88;
  bEXTMEMf0eb = bEXTMEMf0eb | 2;
  return;
}



/* =========================================================
 * CODE:4f7d  FUN_CODE_4f7d  size=11
 * callers: CODE:02e9
 * ========================================================= */

void FUN_CODE_4f7d(void)

{
  EA = 1;
  EX0 = 1;
  EX1 = 1;
  IT0 = 1;
  IT1 = 1;
  return;
}



/* =========================================================
 * CODE:4f88  FUN_CODE_4f88  size=160
 * callers: CODE:4be4
 * ========================================================= */

void FUN_CODE_4f88(void)

{
  undefined2 uVar1;
  
  do {
  } while ((bEXTMEMf074 >> 4 & 1) == 0);
  if ((bEXTMEMf074 >> 6 & 1) != 0) {
    BANK0_R2 = BANK0_R2 | 8;
    do {
    } while ((bEXTMEMf071 >> 4 & 1) == 0);
    bEXTMEMf070 = bEXTMEMf070 | 8;
    return;
  }
  if ((bEXTMEMf0a7 >> 1 & 1) != 1) {
    return;
  }
  uVar1 = 0xf114;
  bEXTMEMf114 = bEXTMEMf114 | 0x10;
  do {
    FUN_CODE_3957();
  } while ((char)uVar1 == '\0');
  do {
  } while ((bEXTMEMf0a8 >> 4 & 1) == 0);
  uEXTMEMf170 = 0;
  uEXTMEMf171 = 0x10;
  uEXTMEMf172 = 0;
  uEXTMEMf173 = 0x10;
  do {
  } while ((bEXTMEMf174 >> 1 & 1) == 0);
  bEXTMEMf174 = bEXTMEMf174 & 0xfe;
  do {
  } while ((bEXTMEMf074 & 0x10) == 0);
  bEXTMEMf074 = bEXTMEMf074 & 0xfd | 5;
  return;
}



/* =========================================================
 * CODE:5028  FUN_CODE_5028  size=84
 * callers: CODE:4be4
 * ========================================================= */

void FUN_CODE_5028(void)

{
  uEXTMEMf170 = 0x28;
  uEXTMEMf171 = 0;
  uEXTMEMf172 = 0xe8;
  uEXTMEMf173 = 3;
  do {
  } while ((bEXTMEMf174 & 2) == 0);
  bEXTMEMf148 = bEXTMEMf177 | 0x80;
  do {
  } while ((bEXTMEMf071 >> 5 & 1) == 0);
  bEXTMEMf070 = bEXTMEMf070 | 0x10;
  do {
  } while ((bEXTMEMf071 >> 5 & 1) == 0);
  bEXTMEMf174 = bEXTMEMf174 & 0xfb | 1;
  return;
}



/* =========================================================
 * CODE:507e  FUN_CODE_507e  size=277
 * callers: CODE:4be4
 * ========================================================= */

void FUN_CODE_507e(void)

{
  FUN_CODE_5a7f();
  if ((cEXTMEMf060 == '\0') && (cEXTMEMf061 == -0x80)) {
    _0_6 = '\x01';
  }
  else {
    _0_6 = '\0';
  }
  uEXTMEMeacc = uEXTMEMf062;
  bEXTMEMeacd = bEXTMEMf063;
  bEXTMEMeace = bEXTMEMf059 & 0xf0;
  if ((bEXTMEMeace != 0) && ((char)bEXTMEMf063 < '\0')) {
    bEXTMEMeace = bEXTMEMeace | 8;
  }
  BANK0_R2 = BANK0_R2 & 7;
  bEXTMEMeace = bEXTMEMeace | bEXTMEMf05a >> 4;
  uEXTMEMead0 = uEXTMEMf058;
  bEXTMEMead1 = bEXTMEMf059 & 0xf;
  if (_0_0 != '\x01') {
    BANK3_R3 = uEXTMEMf05b;
    BANK3_R4 = 0;
    BANK3_R5 = 0;
    BANK3_R6 = 0;
    BANK3_R0 = 0xf;
    BANK3_R1 = 1;
    BANK3_R2 = 2;
    _c_7 = 0;
    FUN_CODE_617c(0xf000);
    if ((_0_6 == '\x01') || ((bEXTMEMf063 >> 4 & 1) != 0)) {
      uEXTMEMf15f = 0x14;
    }
  }
  cEXTMEMebd0 = cEXTMEMf060;
  cEXTMEMebd1 = cEXTMEMf061;
  uEXTMEMebd2 = uEXTMEMf062;
  bEXTMEMebd3 = bEXTMEMf063;
  uEXTMEMebd4 = uEXTMEMf064;
  uEXTMEMebd5 = uEXTMEMf065;
  uEXTMEMebd6 = uEXTMEMf066;
  uEXTMEMebd7 = uEXTMEMf067;
  uEXTMEMebd8 = uEXTMEMf058;
  bEXTMEMebd9 = bEXTMEMf059;
  bEXTMEMebda = bEXTMEMf05a;
  uEXTMEMebdb = uEXTMEMf05b;
  uEXTMEMebcc = uEXTMEMf130;
  uEXTMEMebcd = uEXTMEMf131;
  uEXTMEMebce = uEXTMEMf132;
  uEXTMEMebcf = uEXTMEMf133;
  return;
}



/* =========================================================
 * CODE:5193  FUN_CODE_5193  size=99
 * callers: CODE:02e9
 * ========================================================= */

void FUN_CODE_5193(void)

{
  char cVar1;
  undefined1 *puVar2;
  
  cVar1 = '|';
  puVar2 = (undefined1 *)0xea00;
  do {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2 = puVar2 + 4;
    cVar1 = cVar1 + -1;
  } while (cVar1 != '\0');
  uEXTMEMeba9 = 0x12;
  uEXTMEMeaec = 0x31;
  uEXTMEMeb10 = 0x80;
  uEXTMEMeb11 = 0;
  uEXTMEMeb12 = 0;
  uEXTMEMeb13 = 0;
  uEXTMEMeba8 = 0x70;
  uEXTMEMeba4 = 0x40;
  uEXTMEMeb0f = 0x2e;
  uEXTMEMeb3b = 0xd0;
  uEXTMEMebb0 = 0xc0;
  uEXTMEMebb1 = 0x15;
  uEXTMEMebb2 = 0;
  uEXTMEMebb3 = 0;
  uEXTMEMeaed = 1;
  uEXTMEMeaca = 0x3b;
  uEXTMEMeb53 = 0xe0;
  return;
}



/* =========================================================
 * CODE:51f6  FUN_CODE_51f6  size=677
 * callers: CODE:02e9
 * ========================================================= */

/* WARNING: Removing unreachable block (CODE,0x531d) */
/* WARNING: Removing unreachable block (CODE,0x532f) */
/* WARNING: Removing unreachable block (CODE,0x5320) */

void FUN_CODE_51f6(undefined1 param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  byte bVar8;
  char *pcVar9;
  byte *pbVar10;
  undefined1 *puVar11;
  
  uVar5 = BANK0_R6;
  uVar4 = BANK0_R5;
  DAT_INTMEM_56 = '\x01';
  uEXTMEMf08c = 0x55;
  if ((bEXTMEMf098 & 1) == 0) {
    DAT_INTMEM_52 = 0x38;
    DAT_INTMEM_53 = 0xf0;
    uVar6 = 0xfc;
    DAT_INTMEM_54 = 0xfc;
  }
  else {
    DAT_INTMEM_52 = 0x88;
    DAT_INTMEM_53 = 0xea;
    uVar6 = 0x8c;
    DAT_INTMEM_54 = 0x98;
  }
  DAT_INTMEM_55 = -0x16;
  uVar7 = 0xea;
  pcVar9 = (char *)CONCAT11(DAT_INTMEM_53,DAT_INTMEM_52);
  cVar1 = *pcVar9;
  cVar2 = pcVar9[1];
  cVar3 = pcVar9[2];
  pbVar10 = (byte *)(pcVar9 + 3);
  bVar8 = *pbVar10;
  if ((((((cVar1 == 'L') && (cVar2 == 'n')) && (cVar3 == 'k')) && (bVar8 == 0x30)) ||
      (((cVar1 == 'L' && (cVar2 == 'n')) && ((cVar3 == 'k' && (bVar8 == 0x31)))))) ||
     ((((cVar1 == 'L' && (cVar2 == 'n')) && ((cVar3 == 'k' && (bVar8 == 0x32)))) ||
      ((((cVar1 == 'L' && (cVar2 == 'n')) && (cVar3 == 'k')) && (bVar8 == 0x33)))))) {
    BANK0_R4 = BANK0_R4 & 0xf;
    BANK0_R5 = uVar4;
    BANK0_R6 = uVar5;
    DAT_INTMEM_51 = bVar8;
    if ((cEXTMEMeaef == '1') && (bEXTMEMeaac != bVar8)) {
      bEXTMEMeaad = bEXTMEMeaad & 0xfc | bVar8;
      BANK0_R3 = BANK0_R3 & bEXTMEMeaac;
      BANK0_R4 = 0;
      bEXTMEMf0b0 = bEXTMEMf0b0 & 0xe7;
      cEXTMEMeaef = '2';
      uEXTMEMf155 = 10;
    }
  }
  else if (((cVar1 == 'I') && (cVar2 == '2')) && ((cVar3 == 'C' && (bVar8 == 0x46)))) {
    puVar11 = (undefined1 *)CONCAT11(0xea,uVar6);
    FUN_CODE_6560(puVar11[3],CONCAT11(puVar11[1],*puVar11));
  }
  else if (((cVar1 == 'I') && (cVar2 == '2')) && ((cVar3 == 'C' && (bVar8 == 0x52)))) {
    pbVar10 = (byte *)CONCAT11(0xea,uVar6);
    DAT_INTMEM_57 = *pbVar10;
    DAT_INTMEM_58 = pbVar10[1];
    DAT_INTMEM_59 = pbVar10[2];
    DAT_INTMEM_5a = pbVar10[3];
    bVar8 = DAT_INTMEM_57 & 0x7f;
    DAT_INTMEM_65 = 0x48;
    DAT_INTMEM_66 = 0xea;
    DAT_INTMEM_67 = DAT_INTMEM_58;
    FUN_CODE_66f4();
    *(byte *)CONCAT11(DAT_INTMEM_55,DAT_INTMEM_54) = bVar8;
  }
  else if ((((cVar1 == 'P') && (cVar2 == 'P')) && (cVar3 == 'S')) && (bVar8 == 0x52)) {
    FUN_CODE_56f4();
    if ((char)pbVar10 == '\x02') {
      pbVar10 = (byte *)CONCAT11(uVar7,uVar6);
      DAT_INTMEM_57 = *pbVar10;
      DAT_INTMEM_58 = pbVar10[1];
      BANK0_R0 = pbVar10[2];
      DAT_INTMEM_5a = pbVar10[3];
      DAT_INTMEM_6c = 0x48;
      DAT_INTMEM_6d = 0xea;
      BANK0_R5 = uVar4;
      BANK0_R6 = uVar5;
      DAT_INTMEM_59 = BANK0_R0;
      DAT_INTMEM_6b = DAT_INTMEM_58;
      FUN_CODE_67f1();
      *(undefined1 *)CONCAT11(DAT_INTMEM_55,DAT_INTMEM_54) = param_1;
      puVar11 = (undefined1 *)
                CONCAT11(DAT_INTMEM_55 - (((0xfe < DAT_INTMEM_54) << 7) >> 7),DAT_INTMEM_54 + 1);
      *puVar11 = uEXTMEMeb32;
      do {
        FUN_CODE_575e();
      } while ((char)puVar11 == '\0');
    }
    else {
      DAT_INTMEM_56 = '\0';
      BANK0_R5 = uVar4;
      BANK0_R6 = uVar5;
    }
  }
  else if (((cVar1 == 'I') && (cVar2 == '2')) && ((cVar3 == 'C' && (bVar8 == 0x57)))) {
    pbVar10 = (byte *)CONCAT11(0xea,uVar6);
    DAT_INTMEM_57 = *pbVar10;
    DAT_INTMEM_58 = pbVar10[1];
    DAT_INTMEM_59 = pbVar10[2];
    DAT_INTMEM_5a = pbVar10[3];
    bVar8 = DAT_INTMEM_57 & 0x7f;
    DAT_INTMEM_61 = DAT_INTMEM_57 & 0x80;
    DAT_INTMEM_62 = 0x48;
    DAT_INTMEM_63 = 0xea;
    DAT_INTMEM_64 = DAT_INTMEM_58;
    FUN_CODE_6603();
    *(byte *)CONCAT11(DAT_INTMEM_55,DAT_INTMEM_54) = bVar8;
  }
  else if (((cVar1 == 'P') && (cVar2 == 'P')) && ((cVar3 == 'S' && (bVar8 == 0x57)))) {
    FUN_CODE_56f4();
    if ((char)pbVar10 == '\x02') {
      pbVar10 = (byte *)CONCAT11(uVar7,uVar6);
      DAT_INTMEM_57 = *pbVar10;
      DAT_INTMEM_58 = pbVar10[1];
      BANK0_R0 = pbVar10[2];
      DAT_INTMEM_5a = pbVar10[3];
      DAT_INTMEM_69 = 0x48;
      DAT_INTMEM_6a = 0xea;
      BANK0_R5 = uVar4;
      BANK0_R6 = uVar5;
      DAT_INTMEM_59 = BANK0_R0;
      DAT_INTMEM_68 = DAT_INTMEM_58;
      FUN_CODE_67c3();
      puVar11 = (undefined1 *)CONCAT11(DAT_INTMEM_55,DAT_INTMEM_54);
      *puVar11 = param_1;
      do {
        FUN_CODE_575e();
      } while ((char)puVar11 == '\0');
    }
    else {
      DAT_INTMEM_56 = '\0';
      BANK0_R5 = uVar4;
      BANK0_R6 = uVar5;
    }
  }
  else {
    DAT_INTMEM_56 = '\0';
    BANK0_R5 = uVar4;
    BANK0_R6 = uVar5;
  }
  if (DAT_INTMEM_56 != '\0') {
    puVar11 = (undefined1 *)CONCAT11(DAT_INTMEM_53,DAT_INTMEM_52);
    *puVar11 = 0;
    puVar11[1] = 0;
    puVar11[2] = 0;
    puVar11[3] = 0;
    if ((bEXTMEMf098 & 1) != 0) {
      bEXTMEMf098 = bEXTMEMf098 & 0xfe;
    }
  }
  return;
}



/* =========================================================
 * CODE:549b  FUN_CODE_549b  size=49
 * callers: CODE:21f9, CODE:51f6, CODE:02e9
 * ========================================================= */

void FUN_CODE_549b(byte param_1)

{
  bEXTMEMeaac = param_1;
  if ((param_1 & 1) != 0) {
    bEXTMEMf080 = bEXTMEMf080 & 0xaa;
    uEXTMEMf084 = 0;
  }
  if ((param_1 >> 1 & 1) != 0) {
    bEXTMEMf080 = bEXTMEMf080 & 0x55;
    uEXTMEMf085 = 0;
  }
  return;
}



/* =========================================================
 * CODE:5515  FUN_CODE_5515  size=118
 * callers: CODE:02e9
 * ========================================================= */

void FUN_CODE_5515(ushort param_1,undefined1 param_2)

{
  byte bVar1;
  
  BANK3_R0 = 0xfd;
  BANK3_R1 = 0xf;
  BANK3_R2 = 2;
  _d_0 = 1;
  param_1 = param_1 & 0xff00;
  DAT_INTMEM_5e = FUN_CODE_61d0();
  DAT_INTMEM_5b = (undefined1)param_1;
  DAT_INTMEM_5c = (byte)(param_1 >> 8);
  DAT_INTMEM_5d = param_2;
  _b_7 = _0_0 & 1 ^ 1;
  if ((char)(_b_7 << 7) < '\0') {
    bVar1 = 0x40;
  }
  else {
    bVar1 = 0x80;
  }
  BANK0_R1 = BANK0_R1 | 0xf;
  BANK3_R4 = ~bVar1 & DAT_INTMEM_5c;
  if (_b_6 != '\0') {
    BANK0_R5 = BANK0_R5 | bVar1;
  }
  BANK3_R0 = 0xfd;
  BANK3_R1 = 0xf;
  BANK3_R2 = 2;
  _c_7 = 0;
  BANK3_R3 = DAT_INTMEM_5b;
  BANK3_R5 = param_2;
  BANK3_R6 = DAT_INTMEM_5e;
  uEXTMEMf090 = DAT_INTMEM_5b;
  bEXTMEMf091 = BANK3_R4;
  uEXTMEMf092 = param_2;
  cEXTMEMf093 = DAT_INTMEM_5e;
  BANK0_R3 = 0;
  uEXTMEMf094 = 0xfd;
  bEXTMEMf095 = DAT_INTMEM_5e << 5 | 0xf;
  uEXTMEMf096 = 0x30;
  uEXTMEMf097 = 0;
  return;
}



/* =========================================================
 * CODE:558b  FUN_CODE_558b  size=71
 * callers: CODE:4be4
 * ========================================================= */

void FUN_CODE_558b(void)

{
  uEXTMEMea00 = 0;
  bEXTMEMeaad = ~((bEXTMEMf0a5 & 0xc) >> 2) & 3 | 0x30;
  if ((bEXTMEMf12d >> 6 & 1) != 0) {
    bEXTMEMeb2c = bEXTMEMeb2c | 1;
  }
  if ((bEXTMEMf12e >> 6 & 1) != 1) {
    bEXTMEMeb2c = bEXTMEMeb2c | 2;
  }
  return;
}



/* =========================================================
 * CODE:55d2  FUN_CODE_55d2  size=113
 * callers: CODE:02e9
 * ========================================================= */

void FUN_CODE_55d2(void)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  
  bVar1 = BANK0_R2;
  bVar2 = 0;
  bEXTMEMeaad = bEXTMEMeaad & 0x1f;
  cVar4 = 'd';
  bVar3 = bEXTMEMf164;
  if (((((bEXTMEMf164 >> 2 & 1) != 0) &&
       (cVar4 = 'e', bVar3 = bEXTMEMf165, (bEXTMEMf165 >> 2 & 1) == 1)) ||
      (FUN_CODE_5ba5(bVar3), cVar4 == '\0')) &&
     ((_5_0 != '\0' &&
      (((_5_2 == '\0' || (cEXTMEMf12d < '\0')) || (BANK0_R6 = BANK0_R6 & 6, cEXTMEMeb1b == '\x06')))
      ))) {
    bVar2 = 0x20;
  }
  BANK0_R2 = bVar1;
  if ((bEXTMEMeb2c & 1) != 0) {
    BANK0_R2 = bVar1 | 0x40;
  }
  if ((bEXTMEMeb2c >> 1 & 1) != 0) {
    BANK0_R2 = BANK0_R2 | 0x80;
  }
  bEXTMEMeaad = bEXTMEMeaad | bVar2;
  return;
}



/* =========================================================
 * CODE:5643  FUN_CODE_5643  size=14
 * callers: CODE:4ae6, CODE:4612, CODE:4be4, CODE:3957
 * ========================================================= */

void FUN_CODE_5643(char param_1)

{
  cEXTMEMf153 = param_1;
  do {
  } while (param_1 != '\0');
  return;
}



/* =========================================================
 * CODE:5651  FUN_CODE_5651  size=110
 * callers: CODE:2a72, CODE:575e, CODE:56f4, CODE:2acf, CODE:29bd
 * ========================================================= */

void FUN_CODE_5651(undefined2 param_1,char param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  
  cVar4 = BANK0_R5;
  cVar3 = BANK0_R4;
  cVar2 = BANK0_R3;
  cVar1 = BANK0_R2;
  cVar6 = (char)((ushort)param_1 >> 8);
  if (_0_0 == '\x01') {
    BANK3_R3 = 3;
  }
  else {
    BANK3_R3 = 2;
  }
  BANK3_R0 = 0xc;
  BANK3_R1 = 1;
  BANK3_R2 = 2;
  _c_7 = 0;
  BANK3_R4 = 0;
  BANK3_R5 = 0;
  BANK3_R6 = 0x80;
  FUN_CODE_617c(0);
  BANK3_R0 = 0xc;
  BANK3_R1 = 1;
  BANK3_R2 = 2;
  _d_0 = 0;
  cVar7 = '\0';
  cVar5 = FUN_CODE_61d0();
  BANK0_R5 = cVar4;
  BANK0_R4 = cVar3;
  BANK0_R3 = cVar2;
  BANK0_R2 = cVar1;
  if ((((cVar7 == cVar1) && (cVar6 == cVar2)) && (param_2 == cVar3)) && (cVar5 == cVar4)) {
    return;
  }
  return;
}



/* =========================================================
 * CODE:56bf  FUN_CODE_56bf  size=26
 * callers: CODE:2a72, CODE:575e, CODE:56f4, CODE:2acf
 * ========================================================= */

void FUN_CODE_56bf(char param_1)

{
  BANK3_R0 = 0xc;
  BANK3_R1 = 1;
  BANK3_R2 = 2;
  _c_7 = 0;
  BANK3_R3 = 0;
  BANK3_R4 = 0;
  BANK3_R5 = 0;
  BANK3_R6 = 0;
  uEXTMEMf090 = 0;
  uEXTMEMf091 = 0;
  uEXTMEMf092 = 0;
  uEXTMEMf093 = 0;
  BANK0_R3 = 0;
  uEXTMEMf094 = 0xc;
  bEXTMEMf095 = param_1 << 5 | 1;
  uEXTMEMf096 = 0x30;
  uEXTMEMf097 = 0;
  return;
}



/* =========================================================
 * CODE:56d9  FUN_CODE_56d9  size=27
 * callers: CODE:575e, CODE:56f4
 * ========================================================= */

byte FUN_CODE_56d9(undefined2 param_1,byte param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)((ushort)param_1 >> 8);
  BANK3_R0 = 0xf;
  BANK3_R1 = 1;
  BANK3_R2 = 2;
  _d_0 = 0;
  FUN_CODE_61d0(0);
  BANK0_R2 = uVar1;
  return param_2 & 0xf;
}



/* =========================================================
 * CODE:56f4  FUN_CODE_56f4  size=106
 * callers: CODE:51f6, CODE:02e9, CODE:5d15
 * ========================================================= */

void FUN_CODE_56f4(undefined2 param_1,undefined1 param_2)

{
  undefined1 uVar1;
  char cVar2;
  undefined1 uVar3;
  
  cVar2 = (char)param_1;
  uVar1 = (undefined1)((ushort)param_1 >> 8);
  FUN_CODE_56d9();
  if (cVar2 != '\0') {
    return;
  }
  FUN_CODE_5651();
  if (cVar2 == '\0') {
    return;
  }
  FUN_CODE_56d9();
  if (cVar2 != '\0') {
    FUN_CODE_56bf();
    return;
  }
  BANK3_R0 = 0xf;
  BANK3_R1 = 1;
  BANK3_R2 = 2;
  _d_0 = 0;
  uVar3 = 0;
  BANK3_R6 = FUN_CODE_61d0();
  if (_0_0 == '\x01') {
    BANK0_R3 = BANK0_R3 & 0xf0 | 3;
  }
  else {
    BANK0_R3 = BANK0_R3 & 0xf0 | 2;
  }
  BANK3_R0 = 0xf;
  BANK3_R1 = 1;
  BANK3_R2 = 2;
  _c_7 = 0;
  BANK3_R3 = uVar3;
  BANK3_R4 = uVar1;
  BANK3_R5 = param_2;
  FUN_CODE_617c(0);
  FUN_CODE_56bf();
  return;
}



/* =========================================================
 * CODE:575e  FUN_CODE_575e  size=109
 * callers: CODE:51f6, CODE:02e9, CODE:5d15
 * ========================================================= */

void FUN_CODE_575e(undefined2 param_1,undefined1 param_2)

{
  undefined1 uVar1;
  byte bVar2;
  char cVar3;
  
  cVar3 = (char)param_1;
  bVar2 = (byte)((ushort)param_1 >> 8);
  FUN_CODE_56d9();
  if (cVar3 == '\0') {
    return;
  }
  FUN_CODE_5651();
  if (cVar3 == '\0') {
    return;
  }
  FUN_CODE_56d9();
  _c_0 = _0_0 & 1 ^ 1;
  if ((char)(_c_0 << 7) < '\0') {
    uVar1 = 2;
  }
  else {
    uVar1 = 3;
  }
  if (cVar3 == BANK0_R3) {
    BANK3_R0 = 0xf;
    BANK3_R1 = 1;
    BANK3_R2 = 2;
    _d_0 = 0;
    uVar1 = 0;
    BANK3_R6 = FUN_CODE_61d0();
    BANK3_R4 = bVar2 & 0xf0;
    BANK3_R0 = 0xf;
    BANK3_R1 = 1;
    BANK3_R2 = 2;
    _c_7 = 0;
    BANK3_R3 = uVar1;
    BANK3_R5 = param_2;
    FUN_CODE_617c(0);
    FUN_CODE_56bf();
    return;
  }
  FUN_CODE_56bf(uVar1);
  return;
}



/* =========================================================
 * CODE:5812  FUN_CODE_5812  size=20
 * callers: CODE:2e74, CODE:02e9, CODE:36ca
 * ========================================================= */

void FUN_CODE_5812(void)

{
  BANK3_R0 = 0x7f;
  BANK3_R1 = 4;
  BANK3_R2 = 2;
  _d_0 = 0;
  FUN_CODE_61d0(0);
  return;
}



/* =========================================================
 * CODE:5826  FUN_CODE_5826  size=26
 * callers: CODE:36ca
 * ========================================================= */

void FUN_CODE_5826(char param_1)

{
  BANK3_R0 = 0x7f;
  BANK3_R1 = 4;
  BANK3_R2 = 2;
  _c_7 = 0;
  BANK3_R3 = 0;
  BANK3_R4 = 0;
  BANK3_R5 = 0;
  BANK3_R6 = 0;
  uEXTMEMf090 = 0;
  uEXTMEMf091 = 0;
  uEXTMEMf092 = 0;
  uEXTMEMf093 = 0;
  BANK0_R3 = 0;
  uEXTMEMf094 = 0x7f;
  bEXTMEMf095 = param_1 << 5 | 4;
  uEXTMEMf096 = 0x30;
  uEXTMEMf097 = 0;
  return;
}



/* =========================================================
 * CODE:5840  FUN_CODE_5840  size=66
 * callers: CODE:02e9
 * ========================================================= */

void FUN_CODE_5840(undefined2 param_1,undefined1 param_2)

{
  char cVar1;
  byte bVar2;
  
  BANK3_R0 = 0x73;
  BANK3_R1 = 1;
  BANK3_R2 = 0x10;
  _d_0 = 1;
  cVar1 = (char)((ushort)param_1 >> 8);
  bVar2 = 8;
  BANK3_R6 = FUN_CODE_61d0();
  BANK3_R3 = bEXTMEMeb58 | bVar2;
  BANK3_R4 = cVar1;
  BANK3_R5 = param_2;
  BANK3_R0 = 0x73;
  BANK3_R1 = 1;
  BANK3_R2 = 0x10;
  _c_7 = 0;
  bEXTMEMf090 = bEXTMEMeb58 | bVar2;
  cEXTMEMf091 = cVar1;
  uEXTMEMf092 = param_2;
  uEXTMEMf093 = BANK3_R6;
  BANK0_R3 = 8;
  uEXTMEMf094 = 0x73;
  bEXTMEMf095 = cVar1 << 5 | 1;
  uEXTMEMf096 = 0xa1;
  uEXTMEMf097 = 0;
  return;
}



/* =========================================================
 * CODE:5882  FUN_CODE_5882  size=38
 * callers: CODE:3957
 * ========================================================= */

void FUN_CODE_5882(undefined2 param_1,undefined1 param_2)

{
  undefined1 uVar1;
  
  BANK3_R0 = 6;
  BANK3_R1 = 0x20;
  BANK3_R2 = 0x10;
  _d_0 = 0;
  uVar1 = (undefined1)((ushort)param_1 >> 8);
  FUN_CODE_61d0();
  BANK0_R2 = uVar1;
  if ((bEXTMEMf097 >> 6 & 1) != 1) {
    uEXTMEMeb58 = param_2;
  }
  return;
}



/* =========================================================
 * CODE:58a8  FUN_CODE_58a8  size=27
 * callers: CODE:4be4
 * ========================================================= */

void FUN_CODE_58a8(char param_1)

{
  BANK3_R0 = 0xe;
  BANK3_R1 = 1;
  BANK3_R2 = 2;
  _c_7 = 0;
  BANK3_R3 = 0;
  BANK3_R4 = 2;
  BANK3_R5 = 0;
  BANK3_R6 = 0;
  uEXTMEMf090 = 0;
  uEXTMEMf091 = 2;
  uEXTMEMf092 = 0;
  uEXTMEMf093 = 0;
  BANK0_R3 = 0;
  uEXTMEMf094 = 0xe;
  bEXTMEMf095 = param_1 << 5 | 1;
  uEXTMEMf096 = 0x30;
  uEXTMEMf097 = 0;
  return;
}



/* =========================================================
 * CODE:58c3  FUN_CODE_58c3  size=17
 * callers: CODE:58d4
 * ========================================================= */

undefined1 FUN_CODE_58c3(char param_1)

{
  BANK3_R0 = 0xe;
  BANK3_R1 = 1;
  BANK3_R2 = 2;
  _d_0 = 0;
  BANK0_R3 = 0;
  uEXTMEMf094 = 0xe;
  bEXTMEMf095 = param_1 << 5 | 1;
  uEXTMEMf096 = 0x10;
  uEXTMEMf097 = 0;
  return uEXTMEMf093;
}



/* =========================================================
 * CODE:58d4  FUN_CODE_58d4  size=109
 * callers: CODE:02e9
 * ========================================================= */

void FUN_CODE_58d4(byte param_1)

{
  char cVar1;
  
  FUN_CODE_58c3();
  if (-1 < (char)param_1) {
    return;
  }
  BANK0_R2 = BANK0_R2 & 0x7f;
  if ((param_1 < 0x69) << 7 < '\0') {
    if ((param_1 < 0x3c) << 7 < '\0') {
      if ((param_1 < 0xf) << 7 < '\0') {
        cVar1 = '\0';
      }
      else {
        cVar1 = '\x02';
      }
    }
    else {
      cVar1 = '\x06';
    }
  }
  else {
    cVar1 = '\n';
  }
  if (((bEXTMEMf074 >> 6 & 1) != 0) &&
     (cEXTMEMf077 = cEXTMEMf075 - cVar1, cVar1 = cEXTMEMf076, cEXTMEMf077 != BANK0_R3)) {
    do {
    } while ((bEXTMEMf074 >> 4 & 1) == 0);
    bEXTMEMf074 = bEXTMEMf074 | 0xd;
  }
  BANK3_R0 = 0xe;
  BANK3_R1 = 1;
  BANK3_R2 = 2;
  _c_7 = 0;
  BANK3_R3 = 0;
  BANK3_R4 = 2;
  BANK3_R5 = 0;
  BANK3_R6 = 0;
  uEXTMEMf090 = 0;
  uEXTMEMf091 = 2;
  uEXTMEMf092 = 0;
  uEXTMEMf093 = 0;
  BANK0_R3 = 0;
  uEXTMEMf094 = 0xe;
  bEXTMEMf095 = cVar1 << 5 | 1;
  uEXTMEMf096 = 0x30;
  uEXTMEMf097 = 0;
  return;
}



/* =========================================================
 * CODE:5941  FUN_CODE_5941  size=78
 * callers: CODE:4ae6, CODE:02e9, CODE:3957
 * ========================================================= */

void FUN_CODE_5941(undefined1 param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  undefined2 uVar4;
  
  sVar3 = -0xf5b;
  if (cEXTMEMf0a5 < '\0') {
    BANK3_R0 = 0x51;
    BANK3_R1 = 5;
    BANK3_R2 = 0x10;
    _d_0 = 1;
    uVar4 = 0xf000;
    BANK3_R6 = FUN_CODE_61d0(cEXTMEMf0a5);
    BANK3_R4 = (byte)((ushort)uVar4 >> 8);
    BANK3_R3 = (byte)uVar4 | 1;
    BANK3_R0 = 0x51;
    BANK3_R1 = 5;
    BANK3_R2 = 0x10;
    _c_7 = 0;
    sVar3 = (ushort)BANK3_R4 << 8;
    BANK3_R5 = param_1;
    FUN_CODE_617c();
  }
  FUN_CODE_5c10();
  if ((char)sVar3 == '\0') {
    BANK3_R0 = 0x4a;
    BANK3_R1 = 0;
    BANK3_R2 = 2;
    _d_0 = 1;
    cVar2 = (char)((ushort)sVar3 >> 8);
    bVar1 = FUN_CODE_61d0();
    BANK3_R3 = 1;
    BANK3_R4 = cVar2;
    BANK3_R5 = param_1;
    BANK3_R6 = bVar1 | 0x80;
    BANK3_R0 = 0x4a;
    BANK3_R1 = 0;
    BANK3_R2 = 2;
    _c_7 = 0;
    uEXTMEMf090 = 1;
    cEXTMEMf091 = cVar2;
    uEXTMEMf092 = param_1;
    bEXTMEMf093 = bVar1 | 0x80;
    BANK0_R3 = 0;
    uEXTMEMf094 = 0x4a;
    cEXTMEMf095 = cVar2 << 5;
    uEXTMEMf096 = 0x30;
    uEXTMEMf097 = 0;
    return;
  }
  bEXTMEMf0a6 = bEXTMEMf0a6 | 0x80;
  return;
}



/* =========================================================
 * CODE:598f  FUN_CODE_598f  size=58
 * callers: CODE:02e9
 * ========================================================= */

void FUN_CODE_598f(undefined2 param_1,undefined1 param_2)

{
  byte bVar1;
  char cVar2;
  
  BANK3_R0 = 0x4a;
  BANK3_R1 = 0;
  BANK3_R2 = 2;
  _d_0 = 1;
  cVar2 = (char)((ushort)param_1 >> 8);
  bVar1 = FUN_CODE_61d0();
  BANK3_R3 = 1;
  BANK3_R4 = cVar2;
  BANK3_R5 = param_2;
  BANK3_R6 = bVar1 | 0x80;
  BANK3_R0 = 0x4a;
  BANK3_R1 = 0;
  BANK3_R2 = 2;
  _c_7 = 0;
  uEXTMEMf090 = 1;
  cEXTMEMf091 = cVar2;
  uEXTMEMf092 = param_2;
  bEXTMEMf093 = bVar1 | 0x80;
  BANK0_R3 = 0;
  uEXTMEMf094 = 0x4a;
  cEXTMEMf095 = cVar2 << 5;
  uEXTMEMf096 = 0x30;
  uEXTMEMf097 = 0;
  return;
}



/* =========================================================
 * CODE:59c9  FUN_CODE_59c9  size=48
 * callers: CODE:3957
 * ========================================================= */

undefined1 FUN_CODE_59c9(undefined2 param_1,byte param_2,char param_3,char param_4)

{
  byte bVar1;
  undefined1 uVar2;
  byte bVar3;
  byte bVar4;
  
  bVar3 = (byte)((ushort)param_1 >> 8);
  BANK3_R0 = 0x10;
  BANK3_R1 = 1;
  BANK3_R2 = 2;
  _d_0 = 0;
  bVar4 = 0;
  bVar1 = FUN_CODE_61d0();
  BANK0_R6 = param_2 ^ bVar4;
  BANK0_R7 = bVar1 ^ bVar3;
  uVar2 = 0;
  if ((param_3 == '\0') && (param_4 == '\0')) {
    uVar2 = 1;
  }
  return uVar2;
}



/* =========================================================
 * CODE:59f9  FUN_CODE_59f9  size=50
 * callers: CODE:4be4
 * ========================================================= */

void FUN_CODE_59f9(void)

{
  do {
  } while ((bEXTMEMf071 & 1) == 0);
  BANK0_R2 = BANK0_R2 & 0xf | 0x10;
  BANK0_R3 = BANK0_R3 & 0xf0 | 2;
  uEXTMEMf06e = uEXTMEMf066;
  uEXTMEMf06f = uEXTMEMf067;
  uEXTMEMf06d = 1;
  bEXTMEMf06c = bEXTMEMf06c & 0xfb;
  return;
}



/* =========================================================
 * CODE:5a2b  FUN_CODE_5a2b  size=42
 * callers: CODE:4be4
 * ========================================================= */

void FUN_CODE_5a2b(void)

{
  bEXTMEMf0b4 = bEXTMEMf0b4 & 0x3f | 0x40;
  bEXTMEMf13c = bEXTMEMf13c & 0x3f;
  uEXTMEMf120 = 0xfc;
  bEXTMEMf121 = bEXTMEMf121 & 0xfc | 2;
  return;
}



/* =========================================================
 * CODE:5a7f  FUN_CODE_5a7f  size=25
 * callers: CODE:3432, CODE:4ae6, CODE:4a8a, CODE:507e, CODE:4612, CODE:4be4
 * ========================================================= */

void FUN_CODE_5a7f(void)

{
  do {
  } while ((bEXTMEMf071 >> 1 & 1) == 0);
  do {
  } while ((bEXTMEMf071 >> 4 & 1) == 0);
  do {
  } while ((bEXTMEMf071 & 1) == 0);
  return;
}



/* =========================================================
 * CODE:5a98  FUN_CODE_5a98  size=184
 * callers: CODE:3957
 * ========================================================= */

void FUN_CODE_5a98(ushort param_1)

{
  if (_c_2 == '\0') {
    BANK3_R6 = 0x80;
  }
  else {
    BANK3_R6 = 0x88;
  }
  BANK3_R0 = 0xe0;
  BANK3_R1 = 0x80;
  BANK3_R2 = 0x1a;
  _c_7 = 0;
  BANK3_R3 = 0xe0;
  BANK3_R4 = 0xbc;
  BANK3_R5 = 0x8c;
  param_1 = param_1 & 0xff00;
  FUN_CODE_617c(param_1);
  if (_c_2 == '\0') {
    BANK3_R6 = 3;
  }
  else {
    BANK3_R6 = 0x4b;
  }
  BANK3_R0 = 0xa4;
  BANK3_R1 = 0x80;
  BANK3_R2 = 0x1a;
  _c_7 = 0;
  BANK3_R3 = 0x94;
  BANK3_R4 = 0xff;
  BANK3_R5 = 0xed;
  param_1 = param_1 & 0xff00;
  FUN_CODE_617c(param_1);
  if (_c_2 == '\0') {
    BANK3_R5 = 4;
  }
  else {
    BANK3_R5 = 0;
  }
  BANK3_R0 = 0xa0;
  BANK3_R1 = 0x86;
  BANK3_R2 = 0x1a;
  _c_7 = 0;
  BANK3_R3 = 0;
  BANK3_R4 = 8;
  BANK3_R6 = 0;
  FUN_CODE_617c(param_1 & 0xff00);
  if (_c_2 == '\0') {
    BANK3_R6 = 7;
  }
  else {
    BANK3_R6 = 3;
  }
  BANK3_R0 = 0x50;
  BANK3_R1 = 0x86;
  BANK3_R2 = 0x1a;
  _c_7 = 0;
  BANK3_R3 = 0x5f;
  BANK3_R4 = 0x6d;
  BANK3_R5 = 0xde;
  uEXTMEMf090 = 0x5f;
  uEXTMEMf091 = 0x6d;
  uEXTMEMf092 = 0xde;
  uEXTMEMf093 = BANK3_R6;
  BANK0_R3 = 0;
  uEXTMEMf094 = 0x50;
  uEXTMEMf095 = 0xa6;
  uEXTMEMf096 = 0xf0;
  uEXTMEMf097 = 0;
  return;
}



/* =========================================================
 * CODE:5b50  FUN_CODE_5b50  size=45
 * callers: CODE:02e9, CODE:439e, CODE:4612, CODE:306b, CODE:3957
 * ========================================================= */

byte FUN_CODE_5b50(void)

{
  byte bVar1;
  
  bVar1 = bEXTMEMf0cd;
  if (_6_6 == '\0') {
    if ((bEXTMEMf12f >> 1 & 1) == 0) {
      bVar1 = bEXTMEMf0cd & 0x10;
      BANK0_R2 = bVar1;
    }
    else {
      BANK0_R3 = BANK0_R3 & 0x90;
      BANK0_R2 = bEXTMEMf0cd;
    }
  }
  else {
    BANK0_R2 = BANK0_R2 & 0x80;
  }
  return bVar1;
}



/* =========================================================
 * CODE:5b7d  FUN_CODE_5b7d  size=40
 * callers: CODE:02e9, CODE:4612, CODE:4494
 * ========================================================= */

byte FUN_CODE_5b7d(void)

{
  byte bVar1;
  
  bVar1 = bEXTMEMf0cd;
  if (_6_6 == '\0') {
    if (_6_7 == '\0') {
      bVar1 = bEXTMEMf0cd & 0x10;
      BANK0_R2 = bVar1;
    }
    else {
      BANK0_R3 = BANK0_R3 & 0x18;
      BANK0_R2 = bEXTMEMf0cd;
    }
  }
  else {
    BANK0_R2 = BANK0_R2 & 8;
  }
  return bVar1;
}



/* =========================================================
 * CODE:5ba5  FUN_CODE_5ba5  size=29
 * callers: CODE:02a9, CODE:4579, CODE:55d2, CODE:6105, CODE:4432, CODE:02e9, CODE:347c, CODE:439e, CODE:36ca, CODE:3957, CODE:4494
 * ========================================================= */

byte FUN_CODE_5ba5(void)

{
  byte bVar1;
  
  _c_3 = _0_0 & 1 ^ 1;
  if ((char)(_c_3 << 7) < '\0') {
    BANK0_R2 = BANK0_R2 & 8;
    bVar1 = bEXTMEMf116;
  }
  else {
    bVar1 = bEXTMEMf11a & 8;
  }
  return bVar1;
}



/* =========================================================
 * CODE:5bc2  FUN_CODE_5bc2  size=29
 * callers: CODE:4579, CODE:02e9, CODE:330a, CODE:3957
 * ========================================================= */

byte FUN_CODE_5bc2(void)

{
  byte bVar1;
  
  _c_4 = _0_0 & 1 ^ 1;
  if ((char)(_c_4 << 7) < '\0') {
    BANK0_R2 = BANK0_R2 & 4;
    bVar1 = bEXTMEMf116;
  }
  else {
    bVar1 = bEXTMEMf11a & 4;
  }
  return bVar1;
}



/* =========================================================
 * CODE:5bdf  FUN_CODE_5bdf  size=29
 * callers: CODE:02e9, CODE:45c9
 * ========================================================= */

byte FUN_CODE_5bdf(void)

{
  byte bVar1;
  
  _c_5 = _0_0 & 1 ^ 1;
  if ((char)(_c_5 << 7) < '\0') {
    BANK0_R2 = BANK0_R2 & 2;
    bVar1 = bEXTMEMf116;
  }
  else {
    bVar1 = bEXTMEMf11a & 2;
  }
  return bVar1;
}



/* =========================================================
 * CODE:5bfc  FUN_CODE_5bfc  size=20
 * callers: CODE:02e9, CODE:4612
 * ========================================================= */

void FUN_CODE_5bfc(void)

{
  return;
}



/* =========================================================
 * CODE:5c10  FUN_CODE_5c10  size=42
 * callers: CODE:4ae6, CODE:4579, CODE:5941, CODE:02e9, CODE:3957
 * ========================================================= */

void FUN_CODE_5c10(void)

{
  return;
}



/* =========================================================
 * CODE:5c3a  FUN_CODE_5c3a  size=18
 * callers: CODE:02e9
 * ========================================================= */

void FUN_CODE_5c3a(void)

{
  if ((_6_6 != '\x01') && ((bEXTMEMf0af >> 1 & 1) != 1)) {
    uEXTMEMf15a = 100;
  }
  return;
}



/* =========================================================
 * CODE:5c4c  FUN_CODE_5c4c  size=43
 * callers: CODE:02e9
 * ========================================================= */

void FUN_CODE_5c4c(void)

{
  if ((bEXTMEMf12f & 1) == 0) {
    bEXTMEMf114 = bEXTMEMf114 | 0x1b;
  }
  else {
    bEXTMEMf114 = bEXTMEMf114 | 0x1f;
  }
  if ((bEXTMEMf12e >> 5 & 1) != 0) {
    bEXTMEMf114 = bEXTMEMf114 | 4;
  }
  return;
}



/* =========================================================
 * CODE:5c77  FUN_CODE_5c77  size=11
 * callers: CODE:4612, CODE:34e8
 * ========================================================= */

byte FUN_CODE_5c77(void)

{
  return bEXTMEMf0cc & 0x10;
}



/* =========================================================
 * CODE:5c82  FUN_CODE_5c82  size=94
 * callers: CODE:30ba, CODE:02e9, CODE:4494
 * ========================================================= */

void FUN_CODE_5c82(void)

{
  char cVar1;
  
  if ((((bEXTMEMeb18 >> 3 & 1) != 1) && ((bEXTMEMf12e >> 3 & 1) != 0)) &&
     ((bEXTMEMf0ac >> 3 & 1) != 0)) {
    cVar1 = '\x01' - ((_0_0 << 7) >> 7);
    do {
      cVar1 = cVar1 + -1;
    } while (cVar1 != '\0');
    BANK0_R2 = BANK0_R2 & bEXTMEMf0cd;
  }
  return;
}



/* =========================================================
 * CODE:5ce0  FUN_CODE_5ce0  size=53
 * callers: CODE:02e9
 * ========================================================= */

void FUN_CODE_5ce0(void)

{
  do {
  } while ((bEXTMEMf071 & 1) == 0);
  BANK0_R2 = BANK0_R2 & 0x3f;
  if (_c_6 == '\0') {
    BANK0_R3 = 0xc0;
  }
  else {
    BANK0_R3 = 0x80;
  }
  uEXTMEMf06f = uEXTMEMf067;
  bEXTMEMf070 = bEXTMEMf070 | 1;
  return;
}



/* =========================================================
 * CODE:5d15  FUN_CODE_5d15  size=965
 * callers: CODE:30ba, CODE:02e9
 * ========================================================= */

void FUN_CODE_5d15(byte param_1,byte param_2,byte param_3)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  byte bVar6;
  undefined2 uVar7;
  
  uEXTMEMf08c = 10;
  if (((bEXTMEMf0ac >> 3 & 1) == 0) && (cEXTMEMf159 == '\0')) {
    cVar5 = '\x01' - ((char)(_0_0 << 7) >> 7);
    bVar4 = 2;
    bVar3 = 0;
    while (cVar5 = cVar5 + -1, cVar5 != '\0') {
      bVar1 = CARRY1(bVar4,bVar4);
      bVar4 = bVar4 * '\x02';
      bVar3 = bVar3 << 1 | bVar1;
    }
    cVar5 = -0x33;
    param_2 = 0;
    BANK0_R2 = BANK0_R2 & bEXTMEMf0cd;
    BANK0_R3 = 0;
    if (bVar4 == 0 && bVar3 == 0) {
      DAT_INTMEM_2e = '\n';
    }
    param_1 = bEXTMEMf0cd;
    if (DAT_INTMEM_2e != '\0') {
      FUN_CODE_56f4(bEXTMEMf0cd);
      if (cVar5 == '\x02') {
        bEXTMEMeb5c = bEXTMEMeb3c | 4;
        DAT_INTMEM_69 = 0x5c;
        DAT_INTMEM_6a = 0xeb;
        DAT_INTMEM_68 = 1;
        uVar7 = 0x50;
        FUN_CODE_67c3();
        cVar5 = (char)uVar7;
        if (cVar5 == '\x02') {
          DAT_INTMEM_6c = 0x5c;
          DAT_INTMEM_6d = 0xeb;
          DAT_INTMEM_6b = 4;
          uVar7 = 0x5f;
          FUN_CODE_67f1();
          cVar5 = (char)uVar7;
        }
        do {
          bVar4 = BANK0_R2;
          FUN_CODE_575e();
          BANK0_R2 = bVar4;
        } while ((char)uVar7 == '\0');
      }
      cVar2 = DAT_INTMEM_2e;
      if ((((bEXTMEMeb5c == 0xff) && (bEXTMEMeb5d == 0xff)) && (bEXTMEMeb5e == 0xff)) &&
         (bEXTMEMeb5f == 0xff)) {
        cEXTMEMf159 = 10;
        _2_6 = 1;
        return;
      }
      if (cVar5 == '\x01') {
        _2_6 = 1;
        return;
      }
      bEXTMEMeb18 = bEXTMEMeb5c;
      bEXTMEMeb19 = bEXTMEMeb5d;
      bEXTMEMeb1a = bEXTMEMeb5e;
      bEXTMEMeb1b = bEXTMEMeb5f;
      _2_6 = 0;
      DAT_INTMEM_2e = DAT_INTMEM_2e + -1;
      param_1 = bEXTMEMeb5e;
      param_2 = bEXTMEMeb5f;
      param_3 = bEXTMEMeb5f;
      if (cVar2 != '\0') {
        cEXTMEMf159 = '\x01';
      }
    }
  }
  if ((((bEXTMEMf12d >> 1 & 1) == 1) || ((bEXTMEMf12d >> 2 & 1) == 1)) ||
     (((bEXTMEMf12d >> 3 & 1) == 1 ||
      (((bEXTMEMf12c >> 5 & 1) == 1 ||
       (param_1 = bEXTMEMeb1a, param_2 = bEXTMEMeb1b, (bEXTMEMeb18 & 1) != 0)))))) {
    _2_5 = '\x01';
  }
  else {
    _2_5 = '\0';
  }
  if (_2_5 != '\x01') {
    return;
  }
  if (_6_4 != '\0') {
    return;
  }
  if ((((cEXTMEMeaef != '\x11') && ((_0_7 == '\0' || (cEXTMEMeaef != '\0')))) &&
      ((_1_0 == '\0' || (cEXTMEMeaef != '0')))) && ((_1_3 == '\0' || (cEXTMEMeaef != '`')))) {
    if (_3_5 != '\x01') {
      return;
    }
    if (cEXTMEMeaef != -0x50) {
      return;
    }
  }
  BANK0_R2 = BANK0_R2 ^ (bEXTMEMf12c & 0x10) == 0;
  if (((bEXTMEMf12d & 1) == 1) ||
     (param_1 = bEXTMEMeb19, param_2 = bEXTMEMeb1a, param_3 = bEXTMEMeb1b,
     (bEXTMEMeb18 >> 1 & 1) == 1)) {
    bVar4 = 1;
  }
  else {
    bVar4 = 0;
  }
  bVar1 = bVar4 == (_0_0 & 1 ^ 1);
  if (bVar1) {
    bEXTMEMf0a8 = bEXTMEMf0a8 & 0xfc;
  }
  else {
    bEXTMEMf0a8 = bEXTMEMf0a8 | 3;
  }
  _1_4 = !bVar1;
  if (((bEXTMEMf12d >> 5 & 1) == 1) ||
     (((bEXTMEMeb18 & 1) != 0 &&
      (bVar4 = bEXTMEMeb19, param_1 = bEXTMEMeb1a, param_2 = bEXTMEMeb1b,
      (bEXTMEMeb18 >> 2 & 1) != 1)))) {
    _5_2 = 1;
    bEXTMEMf127 = bEXTMEMf127 | 0x20;
  }
  else {
    _5_2 = 0;
    bEXTMEMf127 = bEXTMEMf127 & 0xdf;
    bVar4 = bEXTMEMeb19;
    param_1 = bEXTMEMeb1a;
    param_2 = bEXTMEMeb1b;
  }
  if (((((bEXTMEMf12d >> 1 & 1) != 1) &&
       (bVar4 = bEXTMEMeb19, param_1 = bEXTMEMeb1a, param_2 = bEXTMEMeb1b, (bEXTMEMeb1a & 1) == 0))
      || ((bEXTMEMf07c >> 1 & 1) == 0)) ||
     ((((bEXTMEMf07c >> 2 & 1) == 1 || (_6_7 == '\x01')) || (cEXTMEMf155 != '\0')))) {
    if ((((bEXTMEMf12c >> 5 & 1) == 1) ||
        (((bVar4 = bEXTMEMeb19, param_1 = bEXTMEMeb1a, param_2 = bEXTMEMeb1b,
          (bEXTMEMeb18 & 0x30) != 0 && ((bEXTMEMeb19 & 1) != 0)) && ((bEXTMEMeb19 >> 1 & 1) != 1))))
       && (_7_0 != '\x01')) {
      if (((bEXTMEMf12c >> 6 & 1) == 1) || ((bEXTMEMeb18 >> 5 & 1) != 0)) {
        _1_5 = 1;
      }
      cEXTMEMeaef = -0x50;
    }
    else if (((((bEXTMEMf12d >> 2 & 1) == 1) ||
              ((((bEXTMEMeb19 & 1) != 0 && ((bEXTMEMeb19 >> 1 & 1) != 1)) &&
               (bVar4 = bEXTMEMeb19, param_1 = bEXTMEMeb1a, param_2 = bEXTMEMeb1b,
               (bEXTMEMeb19 >> 3 & 1) != 1)))) &&
             (((bEXTMEMf07c >> 2 & 1) == 1 || ((_3_3 != '\0' && ((bEXTMEMf07c >> 6 & 1) != 0))))))
            && ((((bEXTMEMf0ad >> 6 & 1) == 0 ||
                 ((cEXTMEMebbf == '\0' || ((bEXTMEMf07d >> 2 & 1) != 0)))) &&
                ((bEXTMEMf098 >> 5 & 1) != 1)))) {
      bVar3 = bEXTMEMebc5;
      if ((bEXTMEMebc5 >> 1 & 1) != 0) {
        bVar3 = bEXTMEMf0aa;
        bEXTMEMf0aa = bEXTMEMf0aa | 0x20;
      }
      cEXTMEMebbf = '\0';
      FUN_CODE_6105(bVar3,bVar4,param_1,param_2,param_3);
      cEXTMEMeaef = ' ';
    }
    else if ((((bEXTMEMf12d >> 3 & 1) == 1) || ((bEXTMEMeb18 & 0x30) != 0)) && (_7_0 != '\x01')) {
      if (((bEXTMEMf12c >> 6 & 1) == 1) || ((bEXTMEMeb18 >> 5 & 1) != 0)) {
        _1_5 = 1;
      }
      cEXTMEMeaef = '`';
    }
    goto LAB_CODE_60bf;
  }
  if (((bEXTMEMf12d >> 1 & 1) == 0) || ((bEXTMEMf12d >> 4 & 1) != 0)) {
    bVar3 = 0;
    bVar4 = 0;
    BANK0_R4 = BANK0_R4 & 0xe;
    param_2 = 0;
    if (bEXTMEMeb1a == 2) goto LAB_CODE_5f70;
    _5_0 = 1;
    bVar6 = bEXTMEMeb1b;
  }
  else {
LAB_CODE_5f70:
    bVar3 = bEXTMEMf127 | 0x10;
    bEXTMEMf127 = bEXTMEMf127 & 0xdf | 0x10;
    bVar6 = bEXTMEMf127;
  }
  FUN_CODE_6105(bVar6,bVar3,bVar4,param_2,param_3);
  cEXTMEMeaef = '0';
LAB_CODE_60bf:
  if ((bEXTMEMeb18 >> 6 & 1) != 0) {
    bEXTMEMf127 = bEXTMEMf127 | 0x40;
  }
  return;
}



/* =========================================================
 * CODE:60da  FUN_CODE_60da  size=43
 * callers: CODE:02e9
 * ========================================================= */

void FUN_CODE_60da(char param_1)

{
  bEXTMEMf181 = bEXTMEMf181 | 0x80;
  if ((bEXTMEMf12f & 1) == 0) {
    return;
  }
  BANK3_R0 = 0x35;
  BANK3_R1 = 0x20;
  BANK3_R2 = 0x10;
  _c_7 = 0;
  BANK3_R3 = 0;
  BANK3_R4 = 0;
  BANK3_R5 = 0x40;
  BANK3_R6 = 0;
  uEXTMEMf090 = 0;
  uEXTMEMf091 = 0;
  uEXTMEMf092 = 0x40;
  uEXTMEMf093 = 0;
  BANK0_R3 = 0;
  uEXTMEMf094 = 0x35;
  bEXTMEMf095 = param_1 << 5 | 0x20;
  uEXTMEMf096 = 0xa0;
  uEXTMEMf097 = 0;
  return;
}



/* =========================================================
 * CODE:6105  FUN_CODE_6105  size=119
 * callers: CODE:02e9, CODE:5d15, CODE:34e8
 * ========================================================= */

void FUN_CODE_6105(undefined1 param_1)

{
  ushort uVar1;
  
  uVar1 = 0xeb59;
  if ((cEXTMEMeb59 != '\0') && (FUN_CODE_5ba5(cEXTMEMeb59), (char)uVar1 == '\0')) {
    BANK3_R0 = 0xca;
    BANK3_R1 = 1;
    BANK3_R2 = 2;
    _d_0 = 1;
    uVar1 = uVar1 & 0xff00;
    BANK3_R6 = FUN_CODE_61d0();
    BANK3_R4 = (byte)(uVar1 >> 8);
    BANK3_R3 = (byte)uVar1 | 1;
    BANK3_R0 = 0xca;
    BANK3_R1 = 1;
    BANK3_R2 = 2;
    _c_7 = 0;
    uVar1 = (ushort)BANK3_R4 << 8;
    BANK3_R5 = param_1;
    FUN_CODE_617c(uVar1);
    BANK3_R0 = 0xca;
    BANK3_R1 = 2;
    BANK3_R2 = 2;
    _d_0 = 1;
    uVar1 = uVar1 & 0xff00;
    BANK3_R6 = FUN_CODE_61d0();
    BANK3_R4 = (byte)(uVar1 >> 8);
    BANK3_R3 = (byte)uVar1 | 1;
    BANK3_R5 = param_1;
    BANK3_R0 = 0xca;
    BANK3_R1 = 2;
    BANK3_R2 = 2;
    _c_7 = 0;
    bEXTMEMf090 = BANK3_R3;
    cEXTMEMf091 = BANK3_R4;
    uEXTMEMf092 = param_1;
    uEXTMEMf093 = BANK3_R6;
    BANK0_R3 = 0;
    uEXTMEMf094 = 0xca;
    bEXTMEMf095 = BANK3_R4 << 5 | 2;
    uEXTMEMf096 = 0x30;
    uEXTMEMf097 = 0;
    return;
  }
  return;
}



/* =========================================================
 * CODE:617c  FUN_CODE_617c  size=84
 * callers: CODE:5941, CODE:507e, CODE:6105, CODE:02e9, CODE:6560, CODE:4be4, CODE:56f4, CODE:63b6, CODE:29bd, CODE:32a1, CODE:575e, CODE:5a98, CODE:330a, CODE:5651
 * ========================================================= */

void FUN_CODE_617c(byte param_1,char param_2)

{
  uEXTMEMf090 = BANK3_R3;
  uEXTMEMf091 = BANK3_R4;
  uEXTMEMf092 = BANK3_R5;
  uEXTMEMf093 = BANK3_R6;
  BANK0_R3 = param_1;
  uEXTMEMf094 = BANK3_R0;
  bEXTMEMf095 = param_2 << 5 | BANK3_R1;
  bEXTMEMf096 = (BANK3_R2 & 0xf) << 3 | (BANK3_R2 >> 4) << 7 |
                (param_1 >> 4) << 1 | (param_1 & 0xf) >> 3 | 0x20;
  cEXTMEMf097 = ((_c_7 << 7) >> 7) * -4;
  do {
  } while (cEXTMEMf097 < '\0');
  return;
}



/* =========================================================
 * CODE:61d0  FUN_CODE_61d0  size=83
 * callers: CODE:2e74, CODE:5515, CODE:297a, CODE:5941, CODE:6105, CODE:02e9, CODE:4612, CODE:56d9, CODE:4be4, CODE:56f4, CODE:3957, CODE:29bd, CODE:32a1, CODE:5882, CODE:5840, CODE:59c9, CODE:575e, CODE:5812, CODE:5651, CODE:598f
 * ========================================================= */

undefined1 FUN_CODE_61d0(byte param_1,char param_2)

{
  BANK0_R3 = param_1;
  uEXTMEMf094 = BANK3_R0;
  bEXTMEMf095 = param_2 << 5 | BANK3_R1;
  bEXTMEMf096 = (BANK3_R2 & 0xf) << 3 | (BANK3_R2 >> 4) << 7 |
                (param_1 >> 4) << 1 | (param_1 & 0xf) >> 3;
  cEXTMEMf097 = ((_d_0 << 7) >> 7) * -4;
  do {
  } while (cEXTMEMf097 < '\0');
  return uEXTMEMf093;
}



/* =========================================================
 * CODE:6223  FUN_CODE_6223  size=355
 * callers: CODE:02e9
 * ========================================================= */

void FUN_CODE_6223(void)

{
  bool bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  char cVar5;
  byte bVar6;
  char cVar7;
  byte bVar8;
  undefined1 *puVar9;
  
  BANK0_R3 = BANK0_R3 & 0x1f;
  bVar8 = ((bEXTMEMeafa & 0x18) >> 4) << 1 | (bEXTMEMeafa & 8) >> 3;
  BANK0_R5 = BANK0_R5 & 0x20;
  if ((((bEXTMEMf0a6 >> 2 & 1) == 1) && ((bEXTMEMeafa >> 5 & 1) == 1)) &&
     ((((bEXTMEMf0af >> 3 & 1) == 1 ||
       (((bEXTMEMeafb != 0 || ((char)bEXTMEMeafa < '\0')) || (bVar8 == 0)))) ||
      ((bVar8 == 2 &&
       ((((((cEXTMEMeaf8 == '\0' && bEXTMEMeaf9 == 0 ||
            ((cEXTMEMeaf8 == '\x01' && (bEXTMEMeaf9 == 0)))) ||
           ((cEXTMEMeaf8 == '\x02' && (bEXTMEMeaf9 == 0)))) ||
          ((((cEXTMEMeaf8 == '\x03' && (bEXTMEMeaf9 == 0)) ||
            ((cEXTMEMeaf8 == 'C' && (bEXTMEMeaf9 == 0)))) ||
           ((cEXTMEMeaf8 == 'D' && (bEXTMEMeaf9 == 0)))))) ||
         ((cEXTMEMeaf8 == 'E' && (bEXTMEMeaf9 == 0)))) ||
        ((((cEXTMEMeaf8 == '8' && (bEXTMEMeaf9 == 1)) ||
          ((cEXTMEMeaf8 == '8' && (bEXTMEMeaf9 == 2)))) ||
         ((cEXTMEMeaf8 == '\"' && (bEXTMEMeaf9 == 4)))))))))))) {
    bEXTMEMeafb = 0x40;
    return;
  }
  if (bEXTMEMeafb == 0) {
    BANK3_R1 = 1;
    bVar8 = 0xf4;
  }
  else {
    BANK3_R1 = bEXTMEMeaf4 & 0x1f;
    if (0x10 < BANK3_R1) {
      BANK3_R1 = 0x10;
    }
    bVar8 = 0x48;
  }
  cVar7 = -0x16;
  bEXTMEMf096 = bEXTMEMeafa;
  BANK3_R0 = 0;
  cVar5 = cEXTMEMeaf8;
  bVar6 = bEXTMEMeaf9;
  while( true ) {
    if (BANK3_R1 <= BANK3_R0) {
      bEXTMEMeafb = bEXTMEMf097;
      return;
    }
    puVar9 = (undefined1 *)CONCAT11(cVar7,bVar8);
    uEXTMEMf090 = *puVar9;
    uVar2 = puVar9[1];
    uVar3 = puVar9[2];
    uVar4 = puVar9[3];
    BANK0_R7 = BANK0_R7 & 0xe0;
    bEXTMEMf095 = bVar6 | bEXTMEMeaf9;
    bEXTMEMf097 = bEXTMEMeafb;
    do {
    } while ((char)bEXTMEMeafb < '\0');
    uEXTMEMf091 = uVar2;
    uEXTMEMf092 = uVar3;
    uEXTMEMf093 = uVar4;
    cEXTMEMf094 = cVar5;
    if ((bEXTMEMeafa >> 5 & 1) != 1) {
      puVar9 = (undefined1 *)CONCAT11(cVar7,bVar8);
      *puVar9 = uEXTMEMf090;
      puVar9[1] = uVar2;
      puVar9[2] = uVar3;
      puVar9[3] = uVar4;
    }
    if ((bEXTMEMf097 >> 6 & 1) == 1) break;
    bVar1 = 0xfb < bVar8;
    bVar8 = bVar8 + 4;
    cVar7 = cVar7 - ((bVar1 << 7) >> 7);
    cVar5 = cVar5 + '\x01';
    if (cVar5 == '\0') {
      bVar6 = bVar6 + 1;
    }
    BANK3_R0 = BANK3_R0 + 1;
  }
  bEXTMEMeafb = bEXTMEMf097;
  return;
}



/* =========================================================
 * CODE:63b6  FUN_CODE_63b6  size=65
 * callers: CODE:4be4
 * ========================================================= */

void FUN_CODE_63b6(undefined2 param_1)

{
  byte bVar1;
  
  BANK3_R3 = (undefined1)param_1;
  bVar1 = (byte)((ushort)param_1 >> 8);
  BANK3_R5 = 0;
  BANK3_R6 = 0xf0;
  BANK3_R0 = 0x66;
  BANK3_R1 = 0;
  BANK3_R2 = 2;
  _c_7 = 1;
  BANK3_R4 = bVar1;
  FUN_CODE_617c((ushort)bVar1 << 8);
  BANK3_R3 = DAT_INTMEM_5f;
  BANK3_R4 = 0;
  BANK3_R5 = 0;
  BANK3_R6 = 0;
  BANK3_R0 = 0x67;
  BANK3_R1 = 0;
  BANK3_R2 = 2;
  _c_7 = 0;
  uEXTMEMf090 = DAT_INTMEM_5f;
  uEXTMEMf091 = 0;
  uEXTMEMf092 = 0;
  uEXTMEMf093 = 0;
  BANK0_R3 = 0;
  uEXTMEMf094 = 0x67;
  cEXTMEMf095 = bVar1 << 5;
  uEXTMEMf096 = 0x30;
  uEXTMEMf097 = 0;
  return;
}



/* =========================================================
 * CODE:63f7  FUN_CODE_63f7  size=216
 * callers: CODE:02e9
 * ========================================================= */

/* WARNING: Removing unreachable block (CODE,0x6470) */
/* WARNING: Removing unreachable block (CODE,0x6477) */
/* WARNING: Removing unreachable block (CODE,0x647c) */
/* WARNING: Removing unreachable block (CODE,0x6482) */
/* WARNING: Removing unreachable block (CODE,0x6487) */
/* WARNING: Removing unreachable block (CODE,0x64a4) */

void FUN_CODE_63f7(void)

{
  if ((bEXTMEMeaeb >> 5 & 1) == 0) {
    BANK3_R1 = 1;
    BANK3_R2 = 0xe4;
  }
  else {
    BANK3_R1 = bEXTMEMeaeb & 0x1f;
    if (0x10 < BANK3_R1) {
      BANK3_R1 = 0x10;
    }
    BANK3_R2 = 0x48;
  }
  BANK0_R6 = BANK0_R6 & 0xfc;
  BANK3_R4 = 0;
  BANK3_R3 = 0xea;
  if (BANK3_R1 == 0) {
    BANK3_R0 = 0;
    uEXTMEMf153 = 0;
    bEXTMEMeaeb = bEXTMEMeaeb & 0x3f;
    return;
  }
  do {
  } while( true );
}



/* =========================================================
 * CODE:64f3  FUN_CODE_64f3  size=24
 * callers: CODE:653e, CODE:650b, CODE:66f4
 * ========================================================= */

undefined1 FUN_CODE_64f3(byte param_1)

{
  BANK3_R0 = param_1 + 0x20;
  BANK3_R1 = -(((0xdf < param_1) << 7) >> 7);
  BANK3_R2 = 2;
  _d_0 = 0;
  BANK0_R3 = 0;
  cEXTMEMf094 = param_1 + 0x20;
  cEXTMEMf095 = BANK3_R1;
  uEXTMEMf096 = 0x10;
  uEXTMEMf097 = 0;
  return uEXTMEMf093;
}



/* =========================================================
 * CODE:650b  FUN_CODE_650b  size=69
 * callers: CODE:6560
 * ========================================================= */

void FUN_CODE_650b(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar1 = BANK0_R2;
  uVar2 = 2;
  FUN_CODE_64f3();
  BANK0_R2 = uVar1;
  DAT_INTMEM_60 = uVar2;
  BANK3_R0 = 0x22;
  BANK3_R1 = 0;
  BANK3_R3 = uVar2;
  BANK3_R4 = 0;
  BANK3_R5 = 0;
  BANK3_R6 = 0;
  BANK3_R2 = 2;
  _c_7 = 0;
  uEXTMEMf090 = uVar2;
  uEXTMEMf091 = 0;
  uEXTMEMf092 = 0;
  uEXTMEMf093 = 0;
  BANK0_R3 = 0;
  uEXTMEMf094 = 0x22;
  uEXTMEMf095 = 0;
  uEXTMEMf096 = 0x30;
  uEXTMEMf097 = 0;
  return;
}



/* =========================================================
 * CODE:652c  FUN_CODE_652c  size=9
 * callers: CODE:65e8, CODE:6603, CODE:66f4
 * ========================================================= */

void FUN_CODE_652c(undefined1 param_1)

{
  DAT_INTMEM_60 = param_1;
  BANK3_R0 = 0x25;
  BANK3_R1 = 0;
  BANK3_R3 = param_1;
  BANK3_R4 = 0;
  BANK3_R5 = 0;
  BANK3_R6 = 0;
  BANK3_R2 = 2;
  _c_7 = 0;
  uEXTMEMf090 = param_1;
  uEXTMEMf091 = 0;
  uEXTMEMf092 = 0;
  uEXTMEMf093 = 0;
  BANK0_R3 = 0;
  uEXTMEMf094 = 0x25;
  uEXTMEMf095 = 0;
  uEXTMEMf096 = 0x30;
  uEXTMEMf097 = 0;
  return;
}



/* =========================================================
 * CODE:6535  FUN_CODE_6535  size=9
 * callers: CODE:6603, CODE:66f4
 * ========================================================= */

void FUN_CODE_6535(undefined1 param_1)

{
  DAT_INTMEM_60 = param_1;
  BANK3_R0 = 0x23;
  BANK3_R1 = 0;
  BANK3_R3 = param_1;
  BANK3_R4 = 0;
  BANK3_R5 = 0;
  BANK3_R6 = 0;
  BANK3_R2 = 2;
  _c_7 = 0;
  uEXTMEMf090 = param_1;
  uEXTMEMf091 = 0;
  uEXTMEMf092 = 0;
  uEXTMEMf093 = 0;
  BANK0_R3 = 0;
  uEXTMEMf094 = 0x23;
  uEXTMEMf095 = 0;
  uEXTMEMf096 = 0x30;
  uEXTMEMf097 = 0;
  return;
}



/* =========================================================
 * CODE:653e  FUN_CODE_653e  size=26
 * callers: CODE:65e8, CODE:65ca, CODE:65ac
 * ========================================================= */

void FUN_CODE_653e(void)

{
  undefined1 uVar1;
  
  uVar1 = BANK0_R2;
  FUN_CODE_64f3();
  BANK0_R2 = uVar1;
  return;
}



/* =========================================================
 * CODE:6558  FUN_CODE_6558  size=8
 * callers: CODE:4be4
 * ========================================================= */

void FUN_CODE_6558(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar1 = BANK0_R2;
  _d_1 = 0;
  uVar2 = 2;
  FUN_CODE_64f3();
  BANK0_R2 = uVar1;
  DAT_INTMEM_60 = uVar2;
  BANK3_R0 = 0x22;
  BANK3_R1 = 0;
  BANK3_R3 = uVar2;
  BANK3_R4 = 0;
  BANK3_R5 = 0;
  BANK3_R6 = 0;
  BANK3_R2 = 2;
  _c_7 = 0;
  uEXTMEMf090 = uVar2;
  uEXTMEMf091 = 0;
  uEXTMEMf092 = 0;
  uEXTMEMf093 = 0;
  BANK0_R3 = 0;
  uEXTMEMf094 = 0x22;
  uEXTMEMf095 = 0;
  uEXTMEMf096 = 0x30;
  uEXTMEMf097 = 0;
  return;
}



/* =========================================================
 * CODE:6560  FUN_CODE_6560  size=55
 * callers: CODE:51f6
 * ========================================================= */

void FUN_CODE_6560(undefined2 param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar5;
  ushort uVar4;
  
  uVar5 = BANK0_R3;
  uVar1 = BANK0_R2;
  uVar2 = (undefined1)param_1;
  uVar3 = (undefined1)((ushort)param_1 >> 8);
  _d_1 = 0;
  uVar4 = CONCAT11(uVar3,0x7f);
  FUN_CODE_650b(uVar4);
  BANK3_R5 = 0;
  BANK3_R6 = 0;
  BANK3_R0 = 0x21;
  BANK3_R1 = 0;
  BANK3_R2 = 2;
  _c_7 = 0;
  BANK0_R2 = uVar1;
  BANK0_R3 = uVar5;
  BANK3_R3 = uVar2;
  BANK3_R4 = uVar3;
  FUN_CODE_617c(uVar4 & 0xff00);
  uVar1 = BANK0_R2;
  _d_1 = 1;
  uVar5 = 2;
  FUN_CODE_64f3();
  BANK0_R2 = uVar1;
  DAT_INTMEM_60 = uVar5;
  BANK3_R0 = 0x22;
  BANK3_R1 = 0;
  BANK3_R3 = uVar5;
  BANK3_R4 = 0;
  BANK3_R5 = 0;
  BANK3_R6 = 0;
  BANK3_R2 = 2;
  _c_7 = 0;
  uEXTMEMf090 = uVar5;
  uEXTMEMf091 = 0;
  uEXTMEMf092 = 0;
  uEXTMEMf093 = 0;
  BANK0_R3 = 0;
  uEXTMEMf094 = 0x22;
  uEXTMEMf095 = 0;
  uEXTMEMf096 = 0x30;
  uEXTMEMf097 = 0;
  return;
}



/* =========================================================
 * CODE:65ac  FUN_CODE_65ac  size=51
 * callers: CODE:65e8, CODE:6603, CODE:66f4
 * ========================================================= */

void FUN_CODE_65ac(void)

{
  char cVar1;
  
  cEXTMEMf153 = cCODE0030;
  do {
    cVar1 = '\x02';
    FUN_CODE_653e(cEXTMEMf153);
    if (cVar1 == '\0') break;
  } while (cEXTMEMf153 != '\0');
  if (cEXTMEMf153 == '\0') {
    _7_5 = 1;
    uEXTMEMeb70 = 1;
  }
  cEXTMEMf153 = 0;
  return;
}



/* =========================================================
 * CODE:65ca  FUN_CODE_65ca  size=30
 * callers: CODE:6603, CODE:66f4
 * ========================================================= */

void FUN_CODE_65ca(void)

{
  char cVar1;
  
  cEXTMEMf153 = cCODE0030;
  do {
    cVar1 = '@';
    FUN_CODE_653e(cEXTMEMf153);
    if (cVar1 == '\0') break;
  } while (cEXTMEMf153 != '\0');
  if (cEXTMEMf153 == '\0') {
    _7_5 = 1;
    uEXTMEMeb70 = 1;
  }
  cEXTMEMf153 = 0;
  return;
}



/* =========================================================
 * CODE:65e8  FUN_CODE_65e8  size=27
 * callers: CODE:6603, CODE:66f4
 * ========================================================= */

void FUN_CODE_65e8(void)

{
  char cVar1;
  
  cVar1 = -0x80;
  FUN_CODE_653e();
  if (cVar1 != '\0') {
    FUN_CODE_652c(0x40);
    FUN_CODE_65ac();
    return;
  }
  return;
}



/* =========================================================
 * CODE:6603  FUN_CODE_6603  size=241
 * callers: CODE:67c3, CODE:51f6, CODE:67f1
 * ========================================================= */

void FUN_CODE_6603(char param_1)

{
  undefined1 uVar1;
  char cVar2;
  undefined1 uVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  byte bVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined2 uVar10;
  ushort uVar11;
  undefined1 *puVar12;
  
  cVar2 = BANK0_R3;
  bVar5 = DAT_INTMEM_64;
  if (0x40 < DAT_INTMEM_64) {
    bVar5 = 0x40;
  }
  _7_5 = '\0';
  if (cEXTMEMeb33 != '\0') {
    bVar5 = bVar5 + 2;
  }
  uVar10 = CONCAT11(0xeb,param_1 * '\x02');
  FUN_CODE_6535(uVar10,cEXTMEMeb33);
  uVar11 = CONCAT11((char)((ushort)uVar10 >> 8),0x90);
  FUN_CODE_652c();
  FUN_CODE_65ac();
  FUN_CODE_65e8();
  bVar4 = BANK0_R5;
  uVar3 = BANK0_R4;
  uVar1 = BANK0_R2;
  BANK0_R3 = cVar2;
  if ((char)uVar11 != '\0') {
    return;
  }
  puVar12 = (undefined1 *)CONCAT11(DAT_INTMEM_63,DAT_INTMEM_62);
  cVar6 = '\x01';
  while (BANK0_R2 = uVar1, BANK0_R3 = cVar2, BANK0_R4 = uVar3, BANK0_R5 = bVar4, bVar4 <= bVar5) {
    if ((cEXTMEMeb33 == '\0') || ((cVar6 != '\x01' && (cVar6 != '\x02')))) {
      uVar9 = *puVar12;
      puVar12 = puVar12 + 1;
      uVar10 = CONCAT11((char)((ushort)puVar12 >> 8),uVar9);
      FUN_CODE_6535(uVar10);
      uVar9 = (undefined1)((ushort)uVar10 >> 8);
    }
    else {
      bVar7 = DAT_INTMEM_64;
      if (cVar6 == '\x01') {
        bVar7 = bEXTMEMeb32;
      }
      uVar10 = CONCAT11(0xeb,bVar7);
      FUN_CODE_6535(uVar10);
      uVar9 = (undefined1)((ushort)uVar10 >> 8);
    }
    if ((DAT_INTMEM_61 == '\0') && (cVar6 == cVar2)) {
      uVar8 = 0x50;
    }
    else {
      uVar8 = 0x10;
    }
    uVar11 = CONCAT11(uVar9,uVar8);
    BANK0_R2 = uVar1;
    BANK0_R3 = cVar2;
    BANK0_R4 = uVar3;
    BANK0_R5 = bVar4;
    FUN_CODE_652c();
    FUN_CODE_65ac();
    FUN_CODE_65e8();
    BANK0_R5 = bVar4;
    BANK0_R4 = uVar3;
    BANK0_R3 = cVar2;
    BANK0_R2 = uVar1;
    if ((char)uVar11 != '\0') {
      return;
    }
    cVar6 = cVar6 + '\x01';
  }
  FUN_CODE_652c(uVar11 & 0xff00);
  if (DAT_INTMEM_61 == '\0') {
    FUN_CODE_65ca();
  }
  else {
    FUN_CODE_65ac();
  }
  if (_7_5 != '\0') {
    return;
  }
  return;
}



/* =========================================================
 * CODE:66f4  FUN_CODE_66f4  size=207
 * callers: CODE:51f6, CODE:67f1
 * ========================================================= */

void FUN_CODE_66f4(char param_1)

{
  undefined1 uVar1;
  char cVar2;
  undefined1 uVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  undefined1 uVar7;
  byte bVar8;
  undefined2 uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  
  cVar2 = BANK0_R3;
  bVar5 = DAT_INTMEM_67;
  if (0x40 < DAT_INTMEM_67) {
    bVar5 = 0x40;
  }
  _7_5 = '\0';
  if (cEXTMEMeb33 != '\0') {
    bVar5 = bVar5 + 1;
  }
  uVar9 = CONCAT11(0xeb,param_1 * '\x02' | 1);
  FUN_CODE_6535(uVar9,cEXTMEMeb33);
  puVar10 = (undefined1 *)CONCAT11((char)((ushort)uVar9 >> 8),0x90);
  FUN_CODE_652c();
  FUN_CODE_65ac();
  FUN_CODE_65e8();
  bVar4 = BANK0_R5;
  uVar3 = BANK0_R4;
  uVar1 = BANK0_R2;
  BANK0_R3 = cVar2;
  if ((char)puVar10 != '\0') {
    return;
  }
  puVar11 = (undefined1 *)CONCAT11(DAT_INTMEM_66,DAT_INTMEM_65);
  cVar6 = '\x01';
  while (bVar8 = (byte)((ushort)puVar10 >> 8), bVar4 <= bVar5) {
    if (cVar6 == cVar2) {
      uVar7 = 0x68;
    }
    else {
      uVar7 = 0x20;
    }
    uVar9 = CONCAT11(bVar8,uVar7);
    BANK0_R2 = uVar1;
    BANK0_R3 = cVar2;
    BANK0_R4 = uVar3;
    BANK0_R5 = bVar4;
    FUN_CODE_652c(uVar9);
    bVar8 = (byte)((ushort)uVar9 >> 8);
    FUN_CODE_65ac();
    if (_7_5 == '\x01') break;
    if ((cEXTMEMeb33 == '\0') || (cVar6 != '\x01')) {
      uVar7 = 4;
      BANK0_R2 = uVar1;
      BANK0_R3 = cVar2;
      BANK0_R4 = uVar3;
      BANK0_R5 = bVar4;
      FUN_CODE_64f3(cEXTMEMeb33);
      *puVar11 = uVar7;
      puVar10 = puVar11 + 1;
      puVar11 = puVar10;
    }
    else {
      uVar7 = 4;
      BANK0_R2 = uVar1;
      BANK0_R3 = cVar2;
      BANK0_R4 = uVar3;
      BANK0_R5 = bVar4;
      FUN_CODE_64f3(cEXTMEMeb33);
      puVar10 = (undefined1 *)0xeb32;
      uEXTMEMeb32 = uVar7;
    }
    cVar6 = cVar6 + '\x01';
  }
  BANK0_R2 = uVar1;
  BANK0_R3 = cVar2;
  BANK0_R4 = uVar3;
  BANK0_R5 = bVar4;
  FUN_CODE_652c((ushort)bVar8 << 8);
  FUN_CODE_65ca();
  if (_7_5 != '\0') {
    return;
  }
  return;
}



/* =========================================================
 * CODE:67c3  FUN_CODE_67c3  size=46
 * callers: CODE:51f6, CODE:02e9, CODE:5d15
 * ========================================================= */

void FUN_CODE_67c3(undefined1 param_1)

{
  undefined1 uVar1;
  
  uVar1 = 0x38;
  uEXTMEMeb33 = 1;
  if (_0_0 != '\0') {
    uVar1 = 0x3f;
  }
  DAT_INTMEM_61 = 0;
  DAT_INTMEM_62 = DAT_INTMEM_69;
  DAT_INTMEM_63 = DAT_INTMEM_6a;
  DAT_INTMEM_64 = DAT_INTMEM_68;
  uEXTMEMeb32 = param_1;
  FUN_CODE_6603(CONCAT11(0xeb,uVar1));
  uEXTMEMeb33 = 0;
  return;
}



/* =========================================================
 * CODE:67f1  FUN_CODE_67f1  size=89
 * callers: CODE:51f6, CODE:5d15
 * ========================================================= */

void FUN_CODE_67f1(undefined1 param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  char cVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  char cVar7;
  
  uVar3 = BANK0_R5;
  uVar2 = BANK0_R4;
  uVar1 = BANK0_R3;
  _d_2 = _0_0 & 1 ^ 1;
  if ((char)(_d_2 << 7) < '\0') {
    cVar4 = '8';
  }
  else {
    cVar4 = '?';
  }
  *(undefined1 *)CONCAT11(DAT_INTMEM_6d,DAT_INTMEM_6c) = param_1;
  DAT_INTMEM_61 = 0;
  DAT_INTMEM_62 = DAT_INTMEM_6c;
  DAT_INTMEM_63 = DAT_INTMEM_6d;
  DAT_INTMEM_64 = 1;
  uVar5 = DAT_INTMEM_6c;
  uVar6 = DAT_INTMEM_6d;
  cVar7 = cVar4;
  FUN_CODE_6603();
  BANK0_R5 = uVar3;
  BANK0_R4 = uVar2;
  BANK0_R3 = uVar1;
  if (cVar7 == '\x01') {
    return;
  }
  uEXTMEMeb33 = 1;
  DAT_INTMEM_67 = DAT_INTMEM_6b;
  DAT_INTMEM_65 = uVar5;
  DAT_INTMEM_66 = uVar6;
  FUN_CODE_66f4(CONCAT11(0xeb,cVar4));
  uEXTMEMeb33 = 0;
  return;
}



/* =========================================================
 * CODE:684a  FUN_CODE_684a  size=4
 * callers: CODE:011b
 * ========================================================= */

void FUN_CODE_684a(void)

{
  return;
}



/* total functions=116 decompiled=116 */
