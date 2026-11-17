/* Decompiled 8051 firmware image: dp_in_u_code.bin */
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
  SP = 0x54;
  FUN_CODE_67ec();
  if (param_1 == '\0') {
    BANK1_R7 = 0;
    DAT_INTMEM_45 = 0;
    DAT_INTMEM_46 = 0;
    DAT_EXTMEM_7f75 = 0;
    DAT_EXTMEM_7f76 = 0;
    DAT_EXTMEM_7f77 = 0;
    DAT_EXTMEM_7f78 = 0;
    DAT_EXTMEM_7f79 = 0;
    DAT_EXTMEM_7f7a = 0;
    DAT_EXTMEM_7f7b = 0;
    DAT_EXTMEM_7f7c = 0;
    DAT_EXTMEM_7f7d = 0;
    DAT_EXTMEM_7f7e = 0;
    DAT_EXTMEM_7f7f = 0;
    DAT_EXTMEM_7f80 = 0;
    DAT_EXTMEM_7f84 = 0;
    DAT_EXTMEM_7f85 = 0;
    DAT_EXTMEM_7f86 = 0;
    DAT_EXTMEM_7f87 = 0;
    DAT_EXTMEM_7f88 = 0;
    DAT_EXTMEM_7f89 = 0;
    DAT_EXTMEM_7f8a = 0;
    DAT_EXTMEM_7f8d = 0;
    DAT_EXTMEM_7f8e = 0;
    DAT_EXTMEM_7f90 = 0;
    DAT_EXTMEM_7f92 = 0;
    DAT_EXTMEM_7f93 = 0;
    DAT_EXTMEM_7f94 = 0;
    DAT_EXTMEM_7f96 = 0;
    DAT_EXTMEM_7f99 = 0;
    DAT_EXTMEM_7f9a = 0;
    DAT_EXTMEM_7f9b = 0;
    DAT_EXTMEM_7f9c = 0;
    DAT_EXTMEM_7f9d = 0;
    DAT_EXTMEM_7f9e = 0;
    DAT_EXTMEM_7f9f = 0;
    DAT_EXTMEM_7fa0 = 0;
    DAT_EXTMEM_7fa1 = 0;
    DAT_EXTMEM_7fa2 = 0;
    DAT_EXTMEM_7fa3 = 0;
    DAT_EXTMEM_7fa4 = 0;
    DAT_EXTMEM_7fa5 = 0;
    DAT_EXTMEM_7fa6 = 0;
    DAT_EXTMEM_7fa7 = 1;
    DAT_EXTMEM_7ea6 = 0;
    DAT_EXTMEM_7ea7 = 0;
    DAT_EXTMEM_7ea8 = 0;
    DAT_EXTMEM_7ea9 = 0;
    DAT_EXTMEM_7eaa = 0;
    DAT_EXTMEM_7eab = 0;
    DAT_EXTMEM_7eac = 0;
    DAT_EXTMEM_7ead = 0;
    DAT_EXTMEM_7eaf = 0;
    DAT_EXTMEM_7eb0 = 0;
    DAT_EXTMEM_7eb1 = 0;
    DAT_EXTMEM_7eb2 = 0;
    DAT_EXTMEM_7eb3 = 0;
    DAT_EXTMEM_7eb4 = 0;
    DAT_EXTMEM_7eb5 = 0;
    DAT_EXTMEM_7eb6 = 0;
    DAT_EXTMEM_7eb8 = 0;
    DAT_EXTMEM_7eb9 = 0;
    DAT_EXTMEM_7f74 = 0;
    DAT_EXTMEM_7fa8 = 0;
    DAT_EXTMEM_7fa9 = 0;
    DAT_EXTMEM_7faa = 0;
    DAT_EXTMEM_7fab = 0;
    DAT_EXTMEM_7fae = 0;
    DAT_EXTMEM_7faf = 0;
    DAT_EXTMEM_7fb0 = 0;
    DAT_EXTMEM_7fb1 = 0;
    DAT_EXTMEM_7fb2 = 0;
    DAT_EXTMEM_7fb3 = 0;
    DAT_EXTMEM_7fb4 = 0;
    DAT_EXTMEM_7fb5 = 0;
    DAT_EXTMEM_7fb6 = 0;
    DAT_EXTMEM_7fb7 = 0;
    DAT_EXTMEM_7fb8 = 0;
    DAT_EXTMEM_7fb9 = 0;
    DAT_EXTMEM_7fba = 0;
    DAT_EXTMEM_7fbb = 0;
    DAT_EXTMEM_7fbc = 0;
    DAT_EXTMEM_7fbd = 0;
    DAT_EXTMEM_7fbe = 0;
    DAT_EXTMEM_7fbf = 0;
    DAT_EXTMEM_7fdd = 0;
    DAT_EXTMEM_7fde = 0;
    DAT_EXTMEM_7fdf = 0;
    DAT_EXTMEM_7fe0 = 0;
    DAT_EXTMEM_7fe1 = 0;
    DAT_EXTMEM_7fe2 = 0;
    DAT_EXTMEM_7fe3 = 0;
    DAT_EXTMEM_7fe4 = 0;
    DAT_EXTMEM_7fe5 = 0;
    DAT_EXTMEM_7fe6 = 0;
    DAT_EXTMEM_7fe7 = 0;
    DAT_EXTMEM_7fec = 0;
    DAT_EXTMEM_7fed = 0;
    DAT_EXTMEM_7fee = 0;
    DAT_EXTMEM_7fef = 0;
    DAT_EXTMEM_7ff0 = 0;
    DAT_EXTMEM_7ff1 = 0;
    DAT_EXTMEM_7ff2 = 0;
    DAT_EXTMEM_7ff3 = 0;
    DAT_EXTMEM_7ff4 = 0;
    DAT_EXTMEM_7ff9 = 0;
    DAT_EXTMEM_7ffa = 0;
    DAT_EXTMEM_7ffb = 0;
    DAT_EXTMEM_7ffc = 0;
    DAT_EXTMEM_7fff = 0;
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
  thunk_FUN_CODE_4868();
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* =========================================================
 * CODE:0208  FUN_CODE_0208  size=583
 * ========================================================= */

/* WARNING: Removing unreachable block (CODE,0x021c) */
/* WARNING: Removing unreachable block (CODE,0x0226) */
/* WARNING: Removing unreachable block (CODE,0x022e) */
/* WARNING: Removing unreachable block (CODE,0x0230) */
/* WARNING: Removing unreachable block (CODE,0x0232) */
/* WARNING: Removing unreachable block (CODE,0x0234) */

void FUN_CODE_0208(char param_1)

{
  SP = 0x54;
  FUN_CODE_67ec();
  if (param_1 == '\0') {
    BANK1_R7 = 0;
    DAT_INTMEM_45 = 0;
    DAT_INTMEM_46 = 0;
    DAT_EXTMEM_7f75 = 0;
    DAT_EXTMEM_7f76 = 0;
    DAT_EXTMEM_7f77 = 0;
    DAT_EXTMEM_7f78 = 0;
    DAT_EXTMEM_7f79 = 0;
    DAT_EXTMEM_7f7a = 0;
    DAT_EXTMEM_7f7b = 0;
    DAT_EXTMEM_7f7c = 0;
    DAT_EXTMEM_7f7d = 0;
    DAT_EXTMEM_7f7e = 0;
    DAT_EXTMEM_7f7f = 0;
    DAT_EXTMEM_7f80 = 0;
    DAT_EXTMEM_7f84 = 0;
    DAT_EXTMEM_7f85 = 0;
    DAT_EXTMEM_7f86 = 0;
    DAT_EXTMEM_7f87 = 0;
    DAT_EXTMEM_7f88 = 0;
    DAT_EXTMEM_7f89 = 0;
    DAT_EXTMEM_7f8a = 0;
    DAT_EXTMEM_7f8d = 0;
    DAT_EXTMEM_7f8e = 0;
    DAT_EXTMEM_7f90 = 0;
    DAT_EXTMEM_7f92 = 0;
    DAT_EXTMEM_7f93 = 0;
    DAT_EXTMEM_7f94 = 0;
    DAT_EXTMEM_7f96 = 0;
    DAT_EXTMEM_7f99 = 0;
    DAT_EXTMEM_7f9a = 0;
    DAT_EXTMEM_7f9b = 0;
    DAT_EXTMEM_7f9c = 0;
    DAT_EXTMEM_7f9d = 0;
    DAT_EXTMEM_7f9e = 0;
    DAT_EXTMEM_7f9f = 0;
    DAT_EXTMEM_7fa0 = 0;
    DAT_EXTMEM_7fa1 = 0;
    DAT_EXTMEM_7fa2 = 0;
    DAT_EXTMEM_7fa3 = 0;
    DAT_EXTMEM_7fa4 = 0;
    DAT_EXTMEM_7fa5 = 0;
    DAT_EXTMEM_7fa6 = 0;
    DAT_EXTMEM_7fa7 = 1;
    DAT_EXTMEM_7ea6 = 0;
    DAT_EXTMEM_7ea7 = 0;
    DAT_EXTMEM_7ea8 = 0;
    DAT_EXTMEM_7ea9 = 0;
    DAT_EXTMEM_7eaa = 0;
    DAT_EXTMEM_7eab = 0;
    DAT_EXTMEM_7eac = 0;
    DAT_EXTMEM_7ead = 0;
    DAT_EXTMEM_7eaf = 0;
    DAT_EXTMEM_7eb0 = 0;
    DAT_EXTMEM_7eb1 = 0;
    DAT_EXTMEM_7eb2 = 0;
    DAT_EXTMEM_7eb3 = 0;
    DAT_EXTMEM_7eb4 = 0;
    DAT_EXTMEM_7eb5 = 0;
    DAT_EXTMEM_7eb6 = 0;
    DAT_EXTMEM_7eb8 = 0;
    DAT_EXTMEM_7eb9 = 0;
    DAT_EXTMEM_7f74 = 0;
    DAT_EXTMEM_7fa8 = 0;
    DAT_EXTMEM_7fa9 = 0;
    DAT_EXTMEM_7faa = 0;
    DAT_EXTMEM_7fab = 0;
    DAT_EXTMEM_7fae = 0;
    DAT_EXTMEM_7faf = 0;
    DAT_EXTMEM_7fb0 = 0;
    DAT_EXTMEM_7fb1 = 0;
    DAT_EXTMEM_7fb2 = 0;
    DAT_EXTMEM_7fb3 = 0;
    DAT_EXTMEM_7fb4 = 0;
    DAT_EXTMEM_7fb5 = 0;
    DAT_EXTMEM_7fb6 = 0;
    DAT_EXTMEM_7fb7 = 0;
    DAT_EXTMEM_7fb8 = 0;
    DAT_EXTMEM_7fb9 = 0;
    DAT_EXTMEM_7fba = 0;
    DAT_EXTMEM_7fbb = 0;
    DAT_EXTMEM_7fbc = 0;
    DAT_EXTMEM_7fbd = 0;
    DAT_EXTMEM_7fbe = 0;
    DAT_EXTMEM_7fbf = 0;
    DAT_EXTMEM_7fdd = 0;
    DAT_EXTMEM_7fde = 0;
    DAT_EXTMEM_7fdf = 0;
    DAT_EXTMEM_7fe0 = 0;
    DAT_EXTMEM_7fe1 = 0;
    DAT_EXTMEM_7fe2 = 0;
    DAT_EXTMEM_7fe3 = 0;
    DAT_EXTMEM_7fe4 = 0;
    DAT_EXTMEM_7fe5 = 0;
    DAT_EXTMEM_7fe6 = 0;
    DAT_EXTMEM_7fe7 = 0;
    DAT_EXTMEM_7fec = 0;
    DAT_EXTMEM_7fed = 0;
    DAT_EXTMEM_7fee = 0;
    DAT_EXTMEM_7fef = 0;
    DAT_EXTMEM_7ff0 = 0;
    DAT_EXTMEM_7ff1 = 0;
    DAT_EXTMEM_7ff2 = 0;
    DAT_EXTMEM_7ff3 = 0;
    DAT_EXTMEM_7ff4 = 0;
    DAT_EXTMEM_7ff9 = 0;
    DAT_EXTMEM_7ffa = 0;
    DAT_EXTMEM_7ffb = 0;
    DAT_EXTMEM_7ffc = 0;
    DAT_EXTMEM_7fff = 0;
    FUN_CODE_0203();
    return;
  }
  FUN_CODE_0203();
  return;
}



/* =========================================================
 * CODE:044f  FUN_CODE_044f  size=14
 * callers: CODE:1b66, CODE:3a8d, CODE:34b1, CODE:06ee, CODE:187f, CODE:1603, CODE:586a, CODE:26be, CODE:421d, CODE:5fd1, CODE:1ced, CODE:1465, CODE:41e1, CODE:6051, CODE:616b, CODE:2878, CODE:3b65, CODE:15c1, CODE:427b, CODE:60c7, CODE:41f1, CODE:1f5c, CODE:04d0, CODE:1bba, CODE:1403, CODE:1e07, CODE:2402, CODE:4868, CODE:4159, CODE:0a32
 * ========================================================= */

void FUN_CODE_044f(char param_1)

{
  bool bVar1;
  char cVar2;
  
  if ((DAT_INTMEM_50 & bCODE00a9) == 0) {
    return;
  }
  if ((param_1 == '\0') && (cEXTMEMc851 == DAT_INTMEM_51)) {
    return;
  }
  cEXTMEMc851 = DAT_INTMEM_51;
  if ((bCODE00a6 & 1) != 0) {
    if ((bCODE00a8 >> 4 & 1) == 1) {
      bVar1 = 0xd8 < bEXTMEM0125;
      cVar2 = bEXTMEM0125 + 0x27;
      bEXTMEM0125 = bEXTMEM0125 + 1;
      *(char *)CONCAT11('\x01' - ((bVar1 << 7) >> 7),cVar2) = DAT_INTMEM_51;
      bEXTMEM0125 = bEXTMEM0125 & 0x7f;
    }
    else if (bEXTMEM0125 < 0x80) {
      bVar1 = 0xd8 < bEXTMEM0125;
      cVar2 = bEXTMEM0125 + 0x27;
      bEXTMEM0125 = bEXTMEM0125 + 1;
      *(char *)CONCAT11('\x01' - ((bVar1 << 7) >> 7),cVar2) = DAT_INTMEM_51;
      return;
    }
  }
  return;
}



/* =========================================================
 * CODE:045d  FUN_CODE_045d  size=12
 * ========================================================= */

void FUN_CODE_045d(char param_1)

{
  bool bVar1;
  char cVar2;
  
  if ((param_1 == '\0') && (cEXTMEMc851 == DAT_INTMEM_51)) {
    return;
  }
  cEXTMEMc851 = DAT_INTMEM_51;
  if ((bCODE00a6 & 1) != 0) {
    if ((bCODE00a8 >> 4 & 1) == 1) {
      bVar1 = 0xd8 < bEXTMEM0125;
      cVar2 = bEXTMEM0125 + 0x27;
      bEXTMEM0125 = bEXTMEM0125 + 1;
      *(char *)CONCAT11('\x01' - ((bVar1 << 7) >> 7),cVar2) = DAT_INTMEM_51;
      bEXTMEM0125 = bEXTMEM0125 & 0x7f;
    }
    else if (bEXTMEM0125 < 0x80) {
      bVar1 = 0xd8 < bEXTMEM0125;
      cVar2 = bEXTMEM0125 + 0x27;
      bEXTMEM0125 = bEXTMEM0125 + 1;
      *(char *)CONCAT11('\x01' - ((bVar1 << 7) >> 7),cVar2) = DAT_INTMEM_51;
      return;
    }
  }
  return;
}



/* =========================================================
 * CODE:0469  FUN_CODE_0469  size=64
 * ========================================================= */

void FUN_CODE_0469(void)

{
  bool bVar1;
  char cVar2;
  
  uEXTMEMc851 = DAT_INTMEM_51;
  if ((bCODE00a6 & 1) != 0) {
    if ((bCODE00a8 >> 4 & 1) == 1) {
      bVar1 = 0xd8 < bEXTMEM0125;
      cVar2 = bEXTMEM0125 + 0x27;
      bEXTMEM0125 = bEXTMEM0125 + 1;
      *(undefined1 *)CONCAT11('\x01' - ((bVar1 << 7) >> 7),cVar2) = DAT_INTMEM_51;
      bEXTMEM0125 = bEXTMEM0125 & 0x7f;
    }
    else if (bEXTMEM0125 < 0x80) {
      bVar1 = 0xd8 < bEXTMEM0125;
      cVar2 = bEXTMEM0125 + 0x27;
      bEXTMEM0125 = bEXTMEM0125 + 1;
      *(undefined1 *)CONCAT11('\x01' - ((bVar1 << 7) >> 7),cVar2) = DAT_INTMEM_51;
      return;
    }
  }
  return;
}



/* =========================================================
 * CODE:04a9  FUN_CODE_04a9  size=39
 * ========================================================= */

void FUN_CODE_04a9(void)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = 0xd8 < bEXTMEM0125;
  cVar2 = bEXTMEM0125 + 0x27;
  bEXTMEM0125 = bEXTMEM0125 + 1;
  *(undefined1 *)CONCAT11('\x01' - ((bVar1 << 7) >> 7),cVar2) = uEXTMEMc851;
  bEXTMEM0125 = bEXTMEM0125 & 0x7f;
  return;
}



/* =========================================================
 * CODE:04d0  FUN_CODE_04d0  size=156
 * callers: CODE:4868, CODE:586a
 * ========================================================= */

void FUN_CODE_04d0(ushort param_1)

{
  DAT_INTMEM_50 = 0x10;
  DAT_INTMEM_51 = 0xf;
  param_1 = param_1 & 0xff00;
  FUN_CODE_044f(param_1);
  DAT_INTMEM_50 = 0x10;
  DAT_INTMEM_51 = 0x68;
  FUN_CODE_044f(param_1 & 0xff00);
  DAT_INTMEM_50 = 0x10;
  DAT_INTMEM_51 = 8;
  FUN_CODE_044f(1);
  DAT_INTMEM_51 = DAT_EXTMEM_d602;
  DAT_INTMEM_50 = 0x10;
  FUN_CODE_044f(0xd601);
  DAT_INTMEM_51 = DAT_EXTMEM_d603;
  DAT_INTMEM_50 = 0x10;
  FUN_CODE_044f(0xd601);
  DAT_INTMEM_51 = DAT_EXTMEM_d682;
  DAT_INTMEM_50 = 0x10;
  FUN_CODE_044f(0xd601);
  DAT_INTMEM_51 = DAT_EXTMEM_d683;
  DAT_INTMEM_50 = 0x10;
  FUN_CODE_044f(0xd601);
  DAT_INTMEM_51 = DAT_EXTMEM_d702;
  DAT_INTMEM_50 = 0x10;
  FUN_CODE_044f(0xd701);
  DAT_INTMEM_51 = DAT_EXTMEM_d703;
  DAT_INTMEM_50 = 0x10;
  FUN_CODE_044f(0xd701);
  DAT_INTMEM_51 = DAT_EXTMEM_d782;
  DAT_INTMEM_50 = 0x10;
  FUN_CODE_044f(0xd701);
  DAT_INTMEM_51 = DAT_EXTMEM_d783;
  DAT_INTMEM_50 = 0x10;
  FUN_CODE_044f(0xd701);
  return;
}



/* =========================================================
 * CODE:056c  FUN_CODE_056c  size=81
 * callers: CODE:4868
 * ========================================================= */

void FUN_CODE_056c(void)

{
  DAT_EXTMEM_7eaa = 0;
  DAT_EXTMEM_7eaf = 0;
  DAT_EXTMEM_7eb4 = 2;
  DAT_EXTMEM_7eb5 = 0;
  DAT_EXTMEM_7eb6 = 0;
  DAT_EXTMEM_7eb0 = 0;
  DAT_EXTMEM_7eb1 = 0;
  DAT_EXTMEM_7eb2 = 0;
  DAT_EXTMEM_7eb3 = 0;
  BANK0_R2 = BANK0_R2 & 0x3f;
  if ((DAT_EXTMEM_c801 != '\x05') && (DAT_EXTMEM_c801 != '\t')) {
    if (DAT_EXTMEM_c801 != '\n') {
      return;
    }
    DAT_EXTMEM_7eb5 = 200;
    DAT_EXTMEM_7eb6 = 1;
    FUN_CODE_05bd();
    return;
  }
  DAT_EXTMEM_7eb5 = 199;
  DAT_EXTMEM_7eb6 = 1;
  FUN_CODE_05bd();
  return;
}



/* =========================================================
 * CODE:05bd  FUN_CODE_05bd  size=30
 * callers: CODE:056c
 * ========================================================= */

void FUN_CODE_05bd(ushort param_1)

{
  FUN_CODE_06ee(param_1 & 0xff00);
  if (DAT_EXTMEM_7eb3 < '\0') {
    DAT_EXTMEM_7eaa = 1;
  }
  return;
}



/* =========================================================
 * CODE:05db  FUN_CODE_05db  size=70
 * callers: CODE:4868
 * ========================================================= */

void FUN_CODE_05db(undefined1 param_1)

{
  DAT_EXTMEM_7eaf = 0;
  DAT_EXTMEM_7eb4 = 2;
  DAT_EXTMEM_7fed = DAT_EXTMEM_c801 & 0x3f;
  if ((DAT_EXTMEM_7fed != 5) && (DAT_EXTMEM_7fed != 9)) {
    if (DAT_EXTMEM_7fed != 10) {
      return;
    }
    DAT_EXTMEM_7eb5 = 200;
    DAT_EXTMEM_7eb6 = 1;
    FUN_CODE_0621(param_1);
    return;
  }
  DAT_EXTMEM_7eb5 = 199;
  DAT_EXTMEM_7eb6 = 1;
  FUN_CODE_0621(param_1);
  return;
}



/* =========================================================
 * CODE:0621  FUN_CODE_0621  size=127
 * callers: CODE:05db
 * ========================================================= */

void FUN_CODE_0621(ushort param_1,char param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar1 = BANK0_R2;
  FUN_CODE_06ee(param_1 & 0xff00);
  uVar2 = DAT_EXTMEM_7eb0;
  if (param_2 == '\0') {
    DAT_EXTMEM_7eb0 = 0xff;
  }
  else {
    DAT_EXTMEM_7eb0 = 0;
  }
  BANK0_R2 = uVar1;
  FUN_CODE_06ee(0x7e01,uVar2);
  BANK0_R2 = uVar1;
  if ((DAT_EXTMEM_7fed != '\x05') && (DAT_EXTMEM_7fed != '\t')) {
    if (DAT_EXTMEM_7fed != '\n') {
      return;
    }
    DAT_EXTMEM_7eb5 = 200;
    DAT_EXTMEM_7eb6 = 2;
    FUN_CODE_06a0();
    return;
  }
  DAT_EXTMEM_7eb5 = 199;
  DAT_EXTMEM_7eb6 = 2;
  FUN_CODE_06a0();
  return;
}



/* =========================================================
 * CODE:06a0  FUN_CODE_06a0  size=78
 * callers: CODE:0621
 * ========================================================= */

void FUN_CODE_06a0(ushort param_1,char param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar1 = BANK0_R2;
  FUN_CODE_06ee(param_1 & 0xff00);
  uVar2 = DAT_EXTMEM_7eb0;
  if (param_2 == '\0') {
    DAT_EXTMEM_7eb0 = 0xff;
  }
  else {
    DAT_EXTMEM_7eb0 = 0;
  }
  BANK0_R2 = uVar1;
  FUN_CODE_06ee(0x7e01,uVar2);
  return;
}



/* =========================================================
 * CODE:06ee  FUN_CODE_06ee  size=262
 * callers: CODE:0621, CODE:05bd, CODE:06a0
 * ========================================================= */

void FUN_CODE_06ee(ushort param_1,byte param_2,byte param_3)

{
  undefined1 uVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  ushort uVar5;
  
  uVar1 = BANK0_R2;
  cVar2 = (char)param_1;
  DAT_INTMEM_50 = 0x20;
  DAT_INTMEM_51 = 0x2e;
  FUN_CODE_044f(param_1 & 0xff00);
  DAT_EXTMEM_c810 = DAT_EXTMEM_7eb5;
  DAT_EXTMEM_c811 = DAT_EXTMEM_7eb6;
  DAT_EXTMEM_c812 = (DAT_EXTMEM_7eb4 & 1) << 6 | (DAT_EXTMEM_7eb4 >> 1) << 7;
  BANK0_R3 = BANK0_R3 | DAT_EXTMEM_7eaf;
  if (cVar2 == '\0') {
    DAT_EXTMEM_c813 = -0x80;
    bVar4 = DAT_EXTMEM_7eaf;
  }
  else {
    DAT_EXTMEM_c814 = DAT_EXTMEM_7eb0;
    DAT_EXTMEM_c815 = DAT_EXTMEM_7eb0;
    BANK0_R3 = DAT_EXTMEM_7eb2;
    DAT_EXTMEM_c816 = DAT_EXTMEM_7eb0;
    DAT_EXTMEM_c817 = DAT_EXTMEM_7eb3;
    DAT_EXTMEM_c813 = -0x7f;
    bVar4 = DAT_EXTMEM_7eb1;
  }
  do {
    uVar5 = 0xc813;
  } while (DAT_EXTMEM_c813 < '\0');
  cVar3 = DAT_EXTMEM_c813;
  if (cVar2 == '\0') {
    cVar3 = '\0';
    bVar4 = 0;
    BANK0_R4 = BANK0_R4 | param_2;
    BANK0_R5 = BANK0_R5 | param_3;
    BANK0_R1 = 0;
    BANK0_R0 = 0;
    BANK0_R7 = DAT_EXTMEM_c819;
    BANK0_R5 = BANK0_R5 | param_3;
    DAT_EXTMEM_7eb0 = DAT_EXTMEM_c818;
    DAT_EXTMEM_7eb1 = 0;
    DAT_EXTMEM_7eb2 = 0;
    uVar5 = 0x7eb3;
    DAT_EXTMEM_7eb3 = DAT_EXTMEM_c81b;
  }
  DAT_INTMEM_50 = 0x20;
  DAT_INTMEM_51 = 0x2f;
  BANK0_R2 = uVar1;
  FUN_CODE_044f(uVar5 & 0xff00,cVar3,bVar4);
  return;
}



/* =========================================================
 * CODE:07f4  FUN_CODE_07f4  size=11
 * callers: CODE:4868
 * ========================================================= */

void FUN_CODE_07f4(char param_1)

{
  FUN_CODE_2369();
  if (param_1 != '\0') {
    return;
  }
  if (((DAT_EXTMEM_cc0b == 0xff) && (-1 < cEXTMEMcc93)) ||
     ((BANK0_R3 = BANK0_R3 & 0x7f, BANK0_R3 <= DAT_EXTMEM_cc0b && (cEXTMEMcc93 < '\0')))) {
    BANK0_R2 = BANK0_R2 & 0x7f;
    if ((BANK0_R2 <= DAT_EXTMEM_7fe5) || (cEXTMEMcc93 < '\0')) {
      FUN_CODE_270e(cEXTMEMcc93,DAT_EXTMEM_7fe5);
      return;
    }
    DAT_EXTMEM_cc0b = 0;
    DAT_EXTMEM_7fe5 = DAT_EXTMEM_7fe5 + 1;
  }
  return;
}



/* =========================================================
 * CODE:07ff  FUN_CODE_07ff  size=78
 * ========================================================= */

void FUN_CODE_07ff(void)

{
  if (((DAT_EXTMEM_cc0b == 0xff) && (-1 < cEXTMEMcc93)) ||
     ((BANK0_R3 = BANK0_R3 & 0x7f, BANK0_R3 <= DAT_EXTMEM_cc0b && (cEXTMEMcc93 < '\0')))) {
    BANK0_R2 = BANK0_R2 & 0x7f;
    if ((BANK0_R2 <= DAT_EXTMEM_7fe5) || (cEXTMEMcc93 < '\0')) {
      FUN_CODE_270e(cEXTMEMcc93,DAT_EXTMEM_7fe5);
      return;
    }
    DAT_EXTMEM_cc0b = 0;
    DAT_EXTMEM_7fe5 = DAT_EXTMEM_7fe5 + 1;
  }
  return;
}



/* =========================================================
 * CODE:084d  FUN_CODE_084d  size=19
 * ========================================================= */

void FUN_CODE_084d(void)

{
  DAT_EXTMEM_cc0b = 0;
  DAT_EXTMEM_7fe5 = DAT_EXTMEM_7fe5 + '\x01';
  return;
}



/* =========================================================
 * CODE:0860  FUN_CODE_0860  size=50
 * callers: CODE:4868
 * ========================================================= */

void FUN_CODE_0860(void)

{
  char cVar1;
  
  cVar1 = '<';
  do {
    cVar1 = cVar1 + -1;
  } while (cVar1 != '\0');
  DAT_EXTMEM_d804 = 0x87;
  uEXTMEMd80a = 0x77;
  uEXTMEMd80b = 0x77;
  DAT_EXTMEM_d815 = 0xf;
  cVar1 = '<';
  do {
    cVar1 = cVar1 + -1;
  } while (cVar1 != '\0');
  return;
}



/* =========================================================
 * CODE:0892  FUN_CODE_0892  size=9
 * ========================================================= */

void FUN_CODE_0892(void)

{
  if ((DAT_EXTMEM_c800 & 1) != 0) {
    return;
  }
  if (DAT_EXTMEM_7f7d == '\0') {
    FUN_CODE_09a6();
    return;
  }
  if (DAT_EXTMEM_7f7d == '\b') {
    FUN_CODE_092a();
    return;
  }
  if (DAT_EXTMEM_7f7d == '\x10') {
    FUN_CODE_08b2();
    return;
  }
  return;
}



/* =========================================================
 * CODE:089b  FUN_CODE_089b  size=23
 * ========================================================= */

void FUN_CODE_089b(void)

{
  if (DAT_EXTMEM_7f7d == '\0') {
    FUN_CODE_09a6();
    return;
  }
  if (DAT_EXTMEM_7f7d == '\b') {
    FUN_CODE_092a();
    return;
  }
  if (DAT_EXTMEM_7f7d == '\x10') {
    FUN_CODE_08b2();
    return;
  }
  return;
}



/* =========================================================
 * CODE:08b2  FUN_CODE_08b2  size=120
 * callers: CODE:089b
 * ========================================================= */

void FUN_CODE_08b2(void)

{
  BANK0_R2 = BANK0_R2 & 0x7f;
  DAT_INTMEM_50 = DAT_EXTMEM_7fe8 >> 7;
  DAT_INTMEM_51 = 0;
  DAT_INTMEM_52 = 0;
  FUN_CODE_0bbe(CONCAT11(0x7f,DAT_EXTMEM_7fe8));
  BANK0_R2 = BANK0_R2 & 0x7f;
  DAT_INTMEM_50 = DAT_EXTMEM_7fe9 >> 7;
  DAT_INTMEM_51 = 1;
  DAT_INTMEM_52 = 0;
  FUN_CODE_0bbe(CONCAT11(0x7f,DAT_EXTMEM_7fe9));
  BANK0_R2 = BANK0_R2 & 0x7f;
  DAT_INTMEM_50 = DAT_EXTMEM_7fea >> 7;
  DAT_INTMEM_51 = 2;
  DAT_INTMEM_52 = 0;
  FUN_CODE_0bbe(CONCAT11(0x7f,DAT_EXTMEM_7fea));
  BANK0_R2 = BANK0_R2 & 0x7f;
  DAT_INTMEM_50 = DAT_EXTMEM_7feb >> 7;
  DAT_INTMEM_51 = 3;
  DAT_INTMEM_52 = 0;
  FUN_CODE_0bbe(CONCAT11(0x7f,DAT_EXTMEM_7feb));
  return;
}



/* =========================================================
 * CODE:092a  FUN_CODE_092a  size=124
 * callers: CODE:089b
 * ========================================================= */

void FUN_CODE_092a(void)

{
  DAT_INTMEM_50 = DAT_EXTMEM_7fe8 >> 7;
  DAT_INTMEM_51 = 0;
  DAT_INTMEM_52 = 0;
  FUN_CODE_0bbe(CONCAT11(0x7f,(DAT_EXTMEM_7fe8 & 0x7f) >> 1));
  DAT_INTMEM_50 = DAT_EXTMEM_7fe9 >> 7;
  DAT_INTMEM_51 = 1;
  DAT_INTMEM_52 = 0;
  FUN_CODE_0bbe(CONCAT11(0x7f,(DAT_EXTMEM_7fe9 & 0x7f) >> 1));
  DAT_INTMEM_50 = DAT_EXTMEM_7fea >> 7;
  DAT_INTMEM_51 = 2;
  DAT_INTMEM_52 = 0;
  FUN_CODE_0bbe(CONCAT11(0x7f,(DAT_EXTMEM_7fea & 0x7f) >> 1));
  DAT_INTMEM_50 = DAT_EXTMEM_7feb >> 7;
  DAT_INTMEM_51 = 3;
  DAT_INTMEM_52 = 0;
  FUN_CODE_0bbe(CONCAT11(0x7f,(DAT_EXTMEM_7feb & 0x7f) >> 1));
  return;
}



/* =========================================================
 * CODE:09a6  FUN_CODE_09a6  size=140
 * callers: CODE:089b
 * ========================================================= */

void FUN_CODE_09a6(void)

{
  DAT_INTMEM_50 = DAT_EXTMEM_7fe8 >> 7;
  DAT_INTMEM_51 = 0;
  DAT_INTMEM_52 = 0;
  FUN_CODE_0bbe(CONCAT11(0x7f,(DAT_EXTMEM_7fe8 & 0x7f) / 3),(DAT_EXTMEM_7fe8 & 0x7f) % 3);
  DAT_INTMEM_50 = DAT_EXTMEM_7fe9 >> 7;
  DAT_INTMEM_51 = 1;
  DAT_INTMEM_52 = 0;
  FUN_CODE_0bbe(CONCAT11(0x7f,(DAT_EXTMEM_7fe9 & 0x7f) / 3),(DAT_EXTMEM_7fe9 & 0x7f) % 3);
  DAT_INTMEM_50 = DAT_EXTMEM_7fea >> 7;
  DAT_INTMEM_51 = 2;
  DAT_INTMEM_52 = 0;
  FUN_CODE_0bbe(CONCAT11(0x7f,(DAT_EXTMEM_7fea & 0x7f) / 3),(DAT_EXTMEM_7fea & 0x7f) % 3);
  DAT_INTMEM_50 = DAT_EXTMEM_7feb >> 7;
  DAT_INTMEM_51 = 3;
  DAT_INTMEM_52 = 0;
  FUN_CODE_0bbe(CONCAT11(0x7f,(DAT_EXTMEM_7feb & 0x7f) / 3),(DAT_EXTMEM_7feb & 0x7f) % 3);
  return;
}



/* =========================================================
 * CODE:0a32  FUN_CODE_0a32  size=291
 * ========================================================= */

void FUN_CODE_0a32(ushort param_1)

{
  DAT_INTMEM_50 = 0x10;
  DAT_INTMEM_51 = 0x1f;
  FUN_CODE_044f(param_1 & 0xff00);
  uEXTMEMd810 = 0;
  DAT_EXTMEM_d868 = 0xff;
  uEXTMEMd652 = 1;
  uEXTMEMd6d2 = 1;
  uEXTMEMd752 = 1;
  uEXTMEMd7d2 = 1;
  DAT_EXTMEM_7fe8 = '\0';
  while (((bEXTMEMd869 & 1) == 1 || ((bEXTMEMd869 & 1) != 1))) {
    DAT_EXTMEM_d653 = 1;
    DAT_EXTMEM_7fe8 = DAT_EXTMEM_7fe8 + '\x01';
  }
  DAT_EXTMEM_7fe9 = '\0';
  while (((bEXTMEMd869 >> 1 & 1) == 1 || ((bEXTMEMd869 >> 1 & 1) != 1))) {
    uEXTMEMd6d3 = 1;
    DAT_EXTMEM_7fe9 = DAT_EXTMEM_7fe9 + '\x01';
  }
  DAT_EXTMEM_7fea = '\0';
  while (((bEXTMEMd869 >> 2 & 1) == 1 || ((bEXTMEMd869 >> 2 & 1) != 1))) {
    uEXTMEMd753 = 1;
    DAT_EXTMEM_7fea = DAT_EXTMEM_7fea + '\x01';
  }
  DAT_EXTMEM_7feb = '\0';
  while (((bEXTMEMd869 >> 3 & 1) == 1 || ((bEXTMEMd869 >> 3 & 1) != 1))) {
    uEXTMEMd7d3 = 1;
    DAT_EXTMEM_7feb = DAT_EXTMEM_7feb + '\x01';
  }
  for (DAT_EXTMEM_7fed = 0; DAT_EXTMEM_7fed < 4; DAT_EXTMEM_7fed = DAT_EXTMEM_7fed + 1) {
    if (BANK0_R2 < 0x1a) {
      *(char *)CONCAT11('\x7f' - (((0x17 < DAT_EXTMEM_7fed) << 7) >> 7),DAT_EXTMEM_7fed - 0x18) =
           '\x19' - *(char *)CONCAT11('\x7f' - (((0x17 < DAT_EXTMEM_7fed) << 7) >> 7),
                                      DAT_EXTMEM_7fed - 0x18);
    }
    else {
      *(byte *)CONCAT11('\x7f' - (((0x17 < DAT_EXTMEM_7fed) << 7) >> 7),DAT_EXTMEM_7fed - 0x18) =
           *(char *)CONCAT11('\x7f' - (((0x17 < DAT_EXTMEM_7fed) << 7) >> 7),DAT_EXTMEM_7fed - 0x18)
           - 0x19U | 0x80;
    }
  }
  return;
}



/* =========================================================
 * CODE:0b55  FUN_CODE_0b55  size=105
 * ========================================================= */

void FUN_CODE_0b55(void)

{
  do {
    if (BANK0_R2 < 0x1a) {
      *(char *)CONCAT11('\x7f' - (((0x17 < DAT_EXTMEM_7fed) << 7) >> 7),DAT_EXTMEM_7fed - 0x18) =
           '\x19' - *(char *)CONCAT11('\x7f' - (((0x17 < DAT_EXTMEM_7fed) << 7) >> 7),
                                      DAT_EXTMEM_7fed - 0x18);
    }
    else {
      *(byte *)CONCAT11('\x7f' - (((0x17 < DAT_EXTMEM_7fed) << 7) >> 7),DAT_EXTMEM_7fed - 0x18) =
           *(char *)CONCAT11('\x7f' - (((0x17 < DAT_EXTMEM_7fed) << 7) >> 7),DAT_EXTMEM_7fed - 0x18)
           - 0x19U | 0x80;
    }
    DAT_EXTMEM_7fed = DAT_EXTMEM_7fed + 1;
  } while ((DAT_EXTMEM_7fed < 4) << 7 < '\0');
  return;
}



/* =========================================================
 * CODE:0bbe  FUN_CODE_0bbe  size=54
 * callers: CODE:09a6, CODE:092a, CODE:08b2
 * ========================================================= */

void FUN_CODE_0bbe(undefined1 param_1)

{
  if (DAT_INTMEM_52 != '\0') {
    uEXTMEMd652 = DAT_INTMEM_50;
    uEXTMEMd6d2 = DAT_INTMEM_50;
    uEXTMEMd752 = DAT_INTMEM_50;
    uEXTMEMd7d2 = DAT_INTMEM_50;
    for (DAT_EXTMEM_7fed = 0; DAT_EXTMEM_7fed < BANK0_R2; DAT_EXTMEM_7fed = DAT_EXTMEM_7fed + 1) {
      DAT_EXTMEM_d653 = 0;
      uEXTMEMd6d3 = 0;
      uEXTMEMd753 = 0;
      uEXTMEMd7d3 = 0;
    }
    return;
  }
  switch(DAT_INTMEM_51) {
  case 0:
    uEXTMEMd652 = DAT_INTMEM_50;
    DAT_EXTMEM_7fed = 0;
    if (BANK0_R2 == 0) {
      return;
    }
    DAT_EXTMEM_d653 = 1;
    DAT_EXTMEM_7fed = 1;
    FUN_CODE_0c47(param_1,0);
    return;
  case 1:
    uEXTMEMd6d2 = DAT_INTMEM_50;
    for (DAT_EXTMEM_7fed = 0; DAT_EXTMEM_7fed < BANK0_R2; DAT_EXTMEM_7fed = DAT_EXTMEM_7fed + 1) {
      uEXTMEMd6d3 = 1;
    }
    break;
  case 2:
    uEXTMEMd752 = DAT_INTMEM_50;
    for (DAT_EXTMEM_7fed = 0; DAT_EXTMEM_7fed < BANK0_R2; DAT_EXTMEM_7fed = DAT_EXTMEM_7fed + 1) {
      uEXTMEMd753 = 1;
    }
    break;
  case 3:
    uEXTMEMd7d2 = DAT_INTMEM_50;
    for (DAT_EXTMEM_7fed = 0; DAT_EXTMEM_7fed < BANK0_R2; DAT_EXTMEM_7fed = DAT_EXTMEM_7fed + 1) {
      uEXTMEMd7d3 = 1;
    }
    break;
  default:
    return;
  }
  return;
}



/* =========================================================
 * CODE:0bec  FUN_CODE_0bec  size=50
 * ========================================================= */

void FUN_CODE_0bec(void)

{
  do {
    DAT_EXTMEM_d653 = 0;
    uEXTMEMd6d3 = 0;
    uEXTMEMd753 = 0;
    uEXTMEMd7d3 = 0;
    DAT_EXTMEM_7fed = DAT_EXTMEM_7fed + 1;
  } while ((DAT_EXTMEM_7fed < BANK0_R2) << 7 < '\0');
  return;
}



/* =========================================================
 * CODE:0c26  FUN_CODE_0c26  size=10
 * ========================================================= */

void FUN_CODE_0c26(void)

{
                    /* WARNING: Could not recover jumptable at 0x0c2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ushort)(byte)(DAT_INTMEM_51 * '\x03') + 0xc30))();
  return;
}



/* =========================================================
 * CODE:0c47  FUN_CODE_0c47  size=11
 * callers: CODE:0c52
 * ========================================================= */

void FUN_CODE_0c47(void)

{
  byte bVar1;
  
  bVar1 = DAT_EXTMEM_7fed;
  if (DAT_EXTMEM_7fed < BANK0_R2) {
    DAT_EXTMEM_d653 = 1;
    DAT_EXTMEM_7fed = DAT_EXTMEM_7fed + 1;
    FUN_CODE_0c47(bVar1);
    return;
  }
  return;
}



/* =========================================================
 * CODE:0c52  FUN_CODE_0c52  size=15
 * ========================================================= */

void FUN_CODE_0c52(void)

{
  DAT_EXTMEM_d653 = 1;
  DAT_EXTMEM_7fed = DAT_EXTMEM_7fed + '\x01';
  FUN_CODE_0c47();
  return;
}



/* =========================================================
 * CODE:0c61  FUN_CODE_0c61  size=36
 * ========================================================= */

void FUN_CODE_0c61(void)

{
  uEXTMEMd6d2 = DAT_INTMEM_50;
  for (DAT_EXTMEM_7fed = 0; DAT_EXTMEM_7fed < BANK0_R2; DAT_EXTMEM_7fed = DAT_EXTMEM_7fed + 1) {
    uEXTMEMd6d3 = 1;
  }
  return;
}



/* =========================================================
 * CODE:0c85  FUN_CODE_0c85  size=37
 * ========================================================= */

void FUN_CODE_0c85(void)

{
  uEXTMEMd752 = DAT_INTMEM_50;
  for (DAT_EXTMEM_7fed = 0; DAT_EXTMEM_7fed < BANK0_R2; DAT_EXTMEM_7fed = DAT_EXTMEM_7fed + 1) {
    uEXTMEMd753 = 1;
  }
  return;
}



/* =========================================================
 * CODE:0cfa  FUN_CODE_0cfa  size=102
 * callers: CODE:270e, CODE:129a, CODE:4868
 * ========================================================= */

void FUN_CODE_0cfa(char param_1)

{
  if (param_1 == '\x01') {
    DAT_EXTMEM_d654 = 7;
    DAT_EXTMEM_d6d4 = 7;
    DAT_EXTMEM_d754 = 7;
    DAT_EXTMEM_d7d4 = 7;
    DAT_EXTMEM_d655 = 2;
    DAT_EXTMEM_d6d5 = 2;
    DAT_EXTMEM_d755 = 2;
    DAT_EXTMEM_d7d5 = 2;
    DAT_EXTMEM_d60a = 7;
    DAT_EXTMEM_d68a = 7;
    DAT_EXTMEM_d70a = 7;
    DAT_EXTMEM_d78a = 7;
    DAT_EXTMEM_d60b = 2;
    DAT_EXTMEM_d68b = 2;
    DAT_EXTMEM_d70b = 2;
    DAT_EXTMEM_d78b = 2;
    return;
  }
  if ((DAT_EXTMEM_c800 & 1) != 1) {
    FUN_CODE_1043(DAT_EXTMEM_c800);
    return;
  }
  if (((0x34 < BANK0_R2) << 7 < '\0') || ((DAT_EXTMEM_d4b5 == '4' && (0xbc < BANK0_R2)))) {
    DAT_EXTMEM_d654 = 7;
    DAT_EXTMEM_d6d4 = 7;
    DAT_EXTMEM_d754 = 7;
    DAT_EXTMEM_d7d4 = 7;
    DAT_EXTMEM_d655 = 2;
    DAT_EXTMEM_d6d5 = 2;
    DAT_EXTMEM_d755 = 2;
    DAT_EXTMEM_d7d5 = 2;
    DAT_EXTMEM_d60a = 0;
    DAT_EXTMEM_d68a = 0;
    DAT_EXTMEM_d70a = 0;
    DAT_EXTMEM_d78a = 0;
    DAT_EXTMEM_d60b = 4;
    DAT_EXTMEM_d68b = 4;
    DAT_EXTMEM_d70b = 4;
    DAT_EXTMEM_d78b = 4;
    return;
  }
  if ((BANK0_R2 < 0x22) && ((DAT_EXTMEM_d4b5 != '!' || (BANK0_R2 < 0x35)))) {
    if (((0x1f < BANK0_R2) << 7 < '\0') || ((DAT_EXTMEM_d4b5 == '\x1f' && (0x40 < BANK0_R2)))) {
      DAT_EXTMEM_d654 = 1;
      DAT_EXTMEM_d6d4 = 1;
      DAT_EXTMEM_d754 = 1;
      DAT_EXTMEM_d7d4 = 1;
      DAT_EXTMEM_d655 = 8;
      DAT_EXTMEM_d6d5 = 8;
      DAT_EXTMEM_d755 = 8;
      DAT_EXTMEM_d7d5 = 8;
      DAT_EXTMEM_d60a = 1;
      DAT_EXTMEM_d68a = 1;
      DAT_EXTMEM_d70a = 1;
      DAT_EXTMEM_d78a = 1;
      DAT_EXTMEM_d60b = 4;
      DAT_EXTMEM_d68b = 4;
      DAT_EXTMEM_d70b = 4;
      DAT_EXTMEM_d78b = 4;
      return;
    }
    if ((BANK0_R2 < 0x14) && ((DAT_EXTMEM_d4b5 != '\x13' || (BANK0_R2 < 0x89)))) {
      if ((BANK0_R2 < 10) && ((DAT_EXTMEM_d4b5 != '\t' || (BANK0_R2 < 0xc5)))) {
        DAT_EXTMEM_d654 = 7;
        DAT_EXTMEM_d6d4 = 7;
        DAT_EXTMEM_d754 = 7;
        DAT_EXTMEM_d7d4 = 7;
        DAT_EXTMEM_d655 = 0x10;
        DAT_EXTMEM_d6d5 = 0x10;
        DAT_EXTMEM_d755 = 0x10;
        DAT_EXTMEM_d7d5 = 0x10;
        DAT_EXTMEM_d60a = 0xf;
        DAT_EXTMEM_d68a = 0xf;
        DAT_EXTMEM_d70a = 0xf;
        DAT_EXTMEM_d78a = 0xf;
        DAT_EXTMEM_d60b = 2;
        DAT_EXTMEM_d68b = 2;
        DAT_EXTMEM_d70b = 2;
        DAT_EXTMEM_d78b = 2;
        return;
      }
      DAT_EXTMEM_d654 = 7;
      DAT_EXTMEM_d6d4 = 7;
      DAT_EXTMEM_d754 = 7;
      DAT_EXTMEM_d7d4 = 7;
      DAT_EXTMEM_d655 = 8;
      DAT_EXTMEM_d6d5 = 8;
      DAT_EXTMEM_d755 = 8;
      DAT_EXTMEM_d7d5 = 8;
      DAT_EXTMEM_d60a = 3;
      DAT_EXTMEM_d68a = 3;
      DAT_EXTMEM_d70a = 3;
      DAT_EXTMEM_d78a = 3;
      DAT_EXTMEM_d60b = 2;
      DAT_EXTMEM_d68b = 2;
      DAT_EXTMEM_d70b = 2;
      DAT_EXTMEM_d78b = 2;
      return;
    }
    DAT_EXTMEM_d654 = 3;
    DAT_EXTMEM_d6d4 = 3;
    DAT_EXTMEM_d754 = 3;
    DAT_EXTMEM_d7d4 = 3;
    DAT_EXTMEM_d655 = 8;
    DAT_EXTMEM_d6d5 = 8;
    DAT_EXTMEM_d755 = 8;
    DAT_EXTMEM_d7d5 = 8;
    DAT_EXTMEM_d60a = 1;
    DAT_EXTMEM_d68a = 1;
    DAT_EXTMEM_d70a = 1;
    DAT_EXTMEM_d78a = 1;
    DAT_EXTMEM_d60b = 2;
    DAT_EXTMEM_d68b = 2;
    DAT_EXTMEM_d70b = 2;
    DAT_EXTMEM_d78b = 2;
    return;
  }
  DAT_EXTMEM_d654 = 1;
  DAT_EXTMEM_d6d4 = 1;
  DAT_EXTMEM_d754 = 1;
  DAT_EXTMEM_d7d4 = 1;
  DAT_EXTMEM_d655 = 8;
  DAT_EXTMEM_d6d5 = 8;
  DAT_EXTMEM_d755 = 8;
  DAT_EXTMEM_d7d5 = 8;
  DAT_EXTMEM_d60a = 0;
  DAT_EXTMEM_d68a = 0;
  DAT_EXTMEM_d70a = 0;
  DAT_EXTMEM_d78a = 0;
  DAT_EXTMEM_d60b = 4;
  DAT_EXTMEM_d68b = 4;
  DAT_EXTMEM_d70b = 4;
  DAT_EXTMEM_d78b = 4;
  return;
}



/* =========================================================
 * CODE:0d60  FUN_CODE_0d60  size=133
 * ========================================================= */

void FUN_CODE_0d60(void)

{
  if ((DAT_EXTMEM_c800 & 1) != 1) {
    FUN_CODE_1043(DAT_EXTMEM_c800);
    return;
  }
  if (((0x34 < BANK0_R2) << 7 < '\0') || ((DAT_EXTMEM_d4b5 == '4' && (0xbc < BANK0_R2)))) {
    DAT_EXTMEM_d654 = 7;
    DAT_EXTMEM_d6d4 = 7;
    DAT_EXTMEM_d754 = 7;
    DAT_EXTMEM_d7d4 = 7;
    DAT_EXTMEM_d655 = 2;
    DAT_EXTMEM_d6d5 = 2;
    DAT_EXTMEM_d755 = 2;
    DAT_EXTMEM_d7d5 = 2;
    DAT_EXTMEM_d60a = 0;
    DAT_EXTMEM_d68a = 0;
    DAT_EXTMEM_d70a = 0;
    DAT_EXTMEM_d78a = 0;
    DAT_EXTMEM_d60b = 4;
    DAT_EXTMEM_d68b = 4;
    DAT_EXTMEM_d70b = 4;
    DAT_EXTMEM_d78b = 4;
    return;
  }
  if (((0x21 < BANK0_R2) << 7 < '\0') || ((DAT_EXTMEM_d4b5 == '!' && (0x34 < BANK0_R2)))) {
    DAT_EXTMEM_d654 = 1;
    DAT_EXTMEM_d6d4 = 1;
    DAT_EXTMEM_d754 = 1;
    DAT_EXTMEM_d7d4 = 1;
    DAT_EXTMEM_d655 = 8;
    DAT_EXTMEM_d6d5 = 8;
    DAT_EXTMEM_d755 = 8;
    DAT_EXTMEM_d7d5 = 8;
    DAT_EXTMEM_d60a = 0;
    DAT_EXTMEM_d68a = 0;
    DAT_EXTMEM_d70a = 0;
    DAT_EXTMEM_d78a = 0;
    DAT_EXTMEM_d60b = 4;
    DAT_EXTMEM_d68b = 4;
    DAT_EXTMEM_d70b = 4;
    DAT_EXTMEM_d78b = 4;
    return;
  }
  if ((BANK0_R2 < 0x20) && ((DAT_EXTMEM_d4b5 != '\x1f' || (BANK0_R2 < 0x41)))) {
    if (((0x13 < BANK0_R2) << 7 < '\0') || ((DAT_EXTMEM_d4b5 == '\x13' && (0x88 < BANK0_R2)))) {
      DAT_EXTMEM_d654 = 3;
      DAT_EXTMEM_d6d4 = 3;
      DAT_EXTMEM_d754 = 3;
      DAT_EXTMEM_d7d4 = 3;
      DAT_EXTMEM_d655 = 8;
      DAT_EXTMEM_d6d5 = 8;
      DAT_EXTMEM_d755 = 8;
      DAT_EXTMEM_d7d5 = 8;
      DAT_EXTMEM_d60a = 1;
      DAT_EXTMEM_d68a = 1;
      DAT_EXTMEM_d70a = 1;
      DAT_EXTMEM_d78a = 1;
      DAT_EXTMEM_d60b = 2;
      DAT_EXTMEM_d68b = 2;
      DAT_EXTMEM_d70b = 2;
      DAT_EXTMEM_d78b = 2;
      return;
    }
    if ((BANK0_R2 < 10) && ((DAT_EXTMEM_d4b5 != '\t' || (BANK0_R2 < 0xc5)))) {
      DAT_EXTMEM_d654 = 7;
      DAT_EXTMEM_d6d4 = 7;
      DAT_EXTMEM_d754 = 7;
      DAT_EXTMEM_d7d4 = 7;
      DAT_EXTMEM_d655 = 0x10;
      DAT_EXTMEM_d6d5 = 0x10;
      DAT_EXTMEM_d755 = 0x10;
      DAT_EXTMEM_d7d5 = 0x10;
      DAT_EXTMEM_d60a = 0xf;
      DAT_EXTMEM_d68a = 0xf;
      DAT_EXTMEM_d70a = 0xf;
      DAT_EXTMEM_d78a = 0xf;
      DAT_EXTMEM_d60b = 2;
      DAT_EXTMEM_d68b = 2;
      DAT_EXTMEM_d70b = 2;
      DAT_EXTMEM_d78b = 2;
      return;
    }
    DAT_EXTMEM_d654 = 7;
    DAT_EXTMEM_d6d4 = 7;
    DAT_EXTMEM_d754 = 7;
    DAT_EXTMEM_d7d4 = 7;
    DAT_EXTMEM_d655 = 8;
    DAT_EXTMEM_d6d5 = 8;
    DAT_EXTMEM_d755 = 8;
    DAT_EXTMEM_d7d5 = 8;
    DAT_EXTMEM_d60a = 3;
    DAT_EXTMEM_d68a = 3;
    DAT_EXTMEM_d70a = 3;
    DAT_EXTMEM_d78a = 3;
    DAT_EXTMEM_d60b = 2;
    DAT_EXTMEM_d68b = 2;
    DAT_EXTMEM_d70b = 2;
    DAT_EXTMEM_d78b = 2;
    return;
  }
  DAT_EXTMEM_d654 = 1;
  DAT_EXTMEM_d6d4 = 1;
  DAT_EXTMEM_d754 = 1;
  DAT_EXTMEM_d7d4 = 1;
  DAT_EXTMEM_d655 = 8;
  DAT_EXTMEM_d6d5 = 8;
  DAT_EXTMEM_d755 = 8;
  DAT_EXTMEM_d7d5 = 8;
  DAT_EXTMEM_d60a = 1;
  DAT_EXTMEM_d68a = 1;
  DAT_EXTMEM_d70a = 1;
  DAT_EXTMEM_d78a = 1;
  DAT_EXTMEM_d60b = 4;
  DAT_EXTMEM_d68b = 4;
  DAT_EXTMEM_d70b = 4;
  DAT_EXTMEM_d78b = 4;
  return;
}



/* =========================================================
 * CODE:0de5  FUN_CODE_0de5  size=122
 * ========================================================= */

void FUN_CODE_0de5(void)

{
  if (((0x21 < BANK0_R2) << 7 < '\0') || ((DAT_EXTMEM_d4b5 == '!' && (0x34 < BANK0_R2)))) {
    DAT_EXTMEM_d654 = 1;
    DAT_EXTMEM_d6d4 = 1;
    DAT_EXTMEM_d754 = 1;
    DAT_EXTMEM_d7d4 = 1;
    DAT_EXTMEM_d655 = 8;
    DAT_EXTMEM_d6d5 = 8;
    DAT_EXTMEM_d755 = 8;
    DAT_EXTMEM_d7d5 = 8;
    DAT_EXTMEM_d60a = 0;
    DAT_EXTMEM_d68a = 0;
    DAT_EXTMEM_d70a = 0;
    DAT_EXTMEM_d78a = 0;
    DAT_EXTMEM_d60b = 4;
    DAT_EXTMEM_d68b = 4;
    DAT_EXTMEM_d70b = 4;
    DAT_EXTMEM_d78b = 4;
    return;
  }
  if (((0x1f < BANK0_R2) << 7 < '\0') || ((DAT_EXTMEM_d4b5 == '\x1f' && (0x40 < BANK0_R2)))) {
    DAT_EXTMEM_d654 = 1;
    DAT_EXTMEM_d6d4 = 1;
    DAT_EXTMEM_d754 = 1;
    DAT_EXTMEM_d7d4 = 1;
    DAT_EXTMEM_d655 = 8;
    DAT_EXTMEM_d6d5 = 8;
    DAT_EXTMEM_d755 = 8;
    DAT_EXTMEM_d7d5 = 8;
    DAT_EXTMEM_d60a = 1;
    DAT_EXTMEM_d68a = 1;
    DAT_EXTMEM_d70a = 1;
    DAT_EXTMEM_d78a = 1;
    DAT_EXTMEM_d60b = 4;
    DAT_EXTMEM_d68b = 4;
    DAT_EXTMEM_d70b = 4;
    DAT_EXTMEM_d78b = 4;
    return;
  }
  if (((0x13 < BANK0_R2) << 7 < '\0') || ((DAT_EXTMEM_d4b5 == '\x13' && (0x88 < BANK0_R2)))) {
    DAT_EXTMEM_d654 = 3;
    DAT_EXTMEM_d6d4 = 3;
    DAT_EXTMEM_d754 = 3;
    DAT_EXTMEM_d7d4 = 3;
    DAT_EXTMEM_d655 = 8;
    DAT_EXTMEM_d6d5 = 8;
    DAT_EXTMEM_d755 = 8;
    DAT_EXTMEM_d7d5 = 8;
    DAT_EXTMEM_d60a = 1;
    DAT_EXTMEM_d68a = 1;
    DAT_EXTMEM_d70a = 1;
    DAT_EXTMEM_d78a = 1;
    DAT_EXTMEM_d60b = 2;
    DAT_EXTMEM_d68b = 2;
    DAT_EXTMEM_d70b = 2;
    DAT_EXTMEM_d78b = 2;
    return;
  }
  if ((BANK0_R2 < 10) && ((DAT_EXTMEM_d4b5 != '\t' || (BANK0_R2 < 0xc5)))) {
    DAT_EXTMEM_d654 = 7;
    DAT_EXTMEM_d6d4 = 7;
    DAT_EXTMEM_d754 = 7;
    DAT_EXTMEM_d7d4 = 7;
    DAT_EXTMEM_d655 = 0x10;
    DAT_EXTMEM_d6d5 = 0x10;
    DAT_EXTMEM_d755 = 0x10;
    DAT_EXTMEM_d7d5 = 0x10;
    DAT_EXTMEM_d60a = 0xf;
    DAT_EXTMEM_d68a = 0xf;
    DAT_EXTMEM_d70a = 0xf;
    DAT_EXTMEM_d78a = 0xf;
    DAT_EXTMEM_d60b = 2;
    DAT_EXTMEM_d68b = 2;
    DAT_EXTMEM_d70b = 2;
    DAT_EXTMEM_d78b = 2;
    return;
  }
  DAT_EXTMEM_d654 = 7;
  DAT_EXTMEM_d6d4 = 7;
  DAT_EXTMEM_d754 = 7;
  DAT_EXTMEM_d7d4 = 7;
  DAT_EXTMEM_d655 = 8;
  DAT_EXTMEM_d6d5 = 8;
  DAT_EXTMEM_d755 = 8;
  DAT_EXTMEM_d7d5 = 8;
  DAT_EXTMEM_d60a = 3;
  DAT_EXTMEM_d68a = 3;
  DAT_EXTMEM_d70a = 3;
  DAT_EXTMEM_d78a = 3;
  DAT_EXTMEM_d60b = 2;
  DAT_EXTMEM_d68b = 2;
  DAT_EXTMEM_d70b = 2;
  DAT_EXTMEM_d78b = 2;
  return;
}



/* =========================================================
 * CODE:0e5f  FUN_CODE_0e5f  size=129
 * ========================================================= */

void FUN_CODE_0e5f(void)

{
  if (((0x1f < BANK0_R2) << 7 < '\0') || ((DAT_EXTMEM_d4b5 == '\x1f' && (0x40 < BANK0_R2)))) {
    DAT_EXTMEM_d654 = 1;
    DAT_EXTMEM_d6d4 = 1;
    DAT_EXTMEM_d754 = 1;
    DAT_EXTMEM_d7d4 = 1;
    DAT_EXTMEM_d655 = 8;
    DAT_EXTMEM_d6d5 = 8;
    DAT_EXTMEM_d755 = 8;
    DAT_EXTMEM_d7d5 = 8;
    DAT_EXTMEM_d60a = 1;
    DAT_EXTMEM_d68a = 1;
    DAT_EXTMEM_d70a = 1;
    DAT_EXTMEM_d78a = 1;
    DAT_EXTMEM_d60b = 4;
    DAT_EXTMEM_d68b = 4;
    DAT_EXTMEM_d70b = 4;
    DAT_EXTMEM_d78b = 4;
    return;
  }
  if ((BANK0_R2 < 0x14) && ((DAT_EXTMEM_d4b5 != '\x13' || (BANK0_R2 < 0x89)))) {
    if ((BANK0_R2 < 10) && ((DAT_EXTMEM_d4b5 != '\t' || (BANK0_R2 < 0xc5)))) {
      DAT_EXTMEM_d654 = 7;
      DAT_EXTMEM_d6d4 = 7;
      DAT_EXTMEM_d754 = 7;
      DAT_EXTMEM_d7d4 = 7;
      DAT_EXTMEM_d655 = 0x10;
      DAT_EXTMEM_d6d5 = 0x10;
      DAT_EXTMEM_d755 = 0x10;
      DAT_EXTMEM_d7d5 = 0x10;
      DAT_EXTMEM_d60a = 0xf;
      DAT_EXTMEM_d68a = 0xf;
      DAT_EXTMEM_d70a = 0xf;
      DAT_EXTMEM_d78a = 0xf;
      DAT_EXTMEM_d60b = 2;
      DAT_EXTMEM_d68b = 2;
      DAT_EXTMEM_d70b = 2;
      DAT_EXTMEM_d78b = 2;
      return;
    }
    DAT_EXTMEM_d654 = 7;
    DAT_EXTMEM_d6d4 = 7;
    DAT_EXTMEM_d754 = 7;
    DAT_EXTMEM_d7d4 = 7;
    DAT_EXTMEM_d655 = 8;
    DAT_EXTMEM_d6d5 = 8;
    DAT_EXTMEM_d755 = 8;
    DAT_EXTMEM_d7d5 = 8;
    DAT_EXTMEM_d60a = 3;
    DAT_EXTMEM_d68a = 3;
    DAT_EXTMEM_d70a = 3;
    DAT_EXTMEM_d78a = 3;
    DAT_EXTMEM_d60b = 2;
    DAT_EXTMEM_d68b = 2;
    DAT_EXTMEM_d70b = 2;
    DAT_EXTMEM_d78b = 2;
    return;
  }
  DAT_EXTMEM_d654 = 3;
  DAT_EXTMEM_d6d4 = 3;
  DAT_EXTMEM_d754 = 3;
  DAT_EXTMEM_d7d4 = 3;
  DAT_EXTMEM_d655 = 8;
  DAT_EXTMEM_d6d5 = 8;
  DAT_EXTMEM_d755 = 8;
  DAT_EXTMEM_d7d5 = 8;
  DAT_EXTMEM_d60a = 1;
  DAT_EXTMEM_d68a = 1;
  DAT_EXTMEM_d70a = 1;
  DAT_EXTMEM_d78a = 1;
  DAT_EXTMEM_d60b = 2;
  DAT_EXTMEM_d68b = 2;
  DAT_EXTMEM_d70b = 2;
  DAT_EXTMEM_d78b = 2;
  return;
}



/* =========================================================
 * CODE:0ee0  FUN_CODE_0ee0  size=129
 * ========================================================= */

void FUN_CODE_0ee0(void)

{
  if (((0x13 < BANK0_R2) << 7 < '\0') || ((DAT_EXTMEM_d4b5 == '\x13' && (0x88 < BANK0_R2)))) {
    DAT_EXTMEM_d654 = 3;
    DAT_EXTMEM_d6d4 = 3;
    DAT_EXTMEM_d754 = 3;
    DAT_EXTMEM_d7d4 = 3;
    DAT_EXTMEM_d655 = 8;
    DAT_EXTMEM_d6d5 = 8;
    DAT_EXTMEM_d755 = 8;
    DAT_EXTMEM_d7d5 = 8;
    DAT_EXTMEM_d60a = 1;
    DAT_EXTMEM_d68a = 1;
    DAT_EXTMEM_d70a = 1;
    DAT_EXTMEM_d78a = 1;
    DAT_EXTMEM_d60b = 2;
    DAT_EXTMEM_d68b = 2;
    DAT_EXTMEM_d70b = 2;
    DAT_EXTMEM_d78b = 2;
    return;
  }
  if ((BANK0_R2 < 10) && ((DAT_EXTMEM_d4b5 != '\t' || (BANK0_R2 < 0xc5)))) {
    DAT_EXTMEM_d654 = 7;
    DAT_EXTMEM_d6d4 = 7;
    DAT_EXTMEM_d754 = 7;
    DAT_EXTMEM_d7d4 = 7;
    DAT_EXTMEM_d655 = 0x10;
    DAT_EXTMEM_d6d5 = 0x10;
    DAT_EXTMEM_d755 = 0x10;
    DAT_EXTMEM_d7d5 = 0x10;
    DAT_EXTMEM_d60a = 0xf;
    DAT_EXTMEM_d68a = 0xf;
    DAT_EXTMEM_d70a = 0xf;
    DAT_EXTMEM_d78a = 0xf;
    DAT_EXTMEM_d60b = 2;
    DAT_EXTMEM_d68b = 2;
    DAT_EXTMEM_d70b = 2;
    DAT_EXTMEM_d78b = 2;
    return;
  }
  DAT_EXTMEM_d654 = 7;
  DAT_EXTMEM_d6d4 = 7;
  DAT_EXTMEM_d754 = 7;
  DAT_EXTMEM_d7d4 = 7;
  DAT_EXTMEM_d655 = 8;
  DAT_EXTMEM_d6d5 = 8;
  DAT_EXTMEM_d755 = 8;
  DAT_EXTMEM_d7d5 = 8;
  DAT_EXTMEM_d60a = 3;
  DAT_EXTMEM_d68a = 3;
  DAT_EXTMEM_d70a = 3;
  DAT_EXTMEM_d78a = 3;
  DAT_EXTMEM_d60b = 2;
  DAT_EXTMEM_d68b = 2;
  DAT_EXTMEM_d70b = 2;
  DAT_EXTMEM_d78b = 2;
  return;
}



/* =========================================================
 * CODE:0f61  FUN_CODE_0f61  size=129
 * ========================================================= */

void FUN_CODE_0f61(void)

{
  if ((BANK0_R2 < 10) && ((DAT_EXTMEM_d4b5 != '\t' || (BANK0_R2 < 0xc5)))) {
    DAT_EXTMEM_d654 = 7;
    DAT_EXTMEM_d6d4 = 7;
    DAT_EXTMEM_d754 = 7;
    DAT_EXTMEM_d7d4 = 7;
    DAT_EXTMEM_d655 = 0x10;
    DAT_EXTMEM_d6d5 = 0x10;
    DAT_EXTMEM_d755 = 0x10;
    DAT_EXTMEM_d7d5 = 0x10;
    DAT_EXTMEM_d60a = 0xf;
    DAT_EXTMEM_d68a = 0xf;
    DAT_EXTMEM_d70a = 0xf;
    DAT_EXTMEM_d78a = 0xf;
    DAT_EXTMEM_d60b = 2;
    DAT_EXTMEM_d68b = 2;
    DAT_EXTMEM_d70b = 2;
    DAT_EXTMEM_d78b = 2;
    return;
  }
  DAT_EXTMEM_d654 = 7;
  DAT_EXTMEM_d6d4 = 7;
  DAT_EXTMEM_d754 = 7;
  DAT_EXTMEM_d7d4 = 7;
  DAT_EXTMEM_d655 = 8;
  DAT_EXTMEM_d6d5 = 8;
  DAT_EXTMEM_d755 = 8;
  DAT_EXTMEM_d7d5 = 8;
  DAT_EXTMEM_d60a = 3;
  DAT_EXTMEM_d68a = 3;
  DAT_EXTMEM_d70a = 3;
  DAT_EXTMEM_d78a = 3;
  DAT_EXTMEM_d60b = 2;
  DAT_EXTMEM_d68b = 2;
  DAT_EXTMEM_d70b = 2;
  DAT_EXTMEM_d78b = 2;
  return;
}



/* =========================================================
 * CODE:0fe2  FUN_CODE_0fe2  size=97
 * ========================================================= */

void FUN_CODE_0fe2(void)

{
  DAT_EXTMEM_d654 = 7;
  DAT_EXTMEM_d6d4 = 7;
  DAT_EXTMEM_d754 = 7;
  DAT_EXTMEM_d7d4 = 7;
  DAT_EXTMEM_d655 = 0x10;
  DAT_EXTMEM_d6d5 = 0x10;
  DAT_EXTMEM_d755 = 0x10;
  DAT_EXTMEM_d7d5 = 0x10;
  DAT_EXTMEM_d60a = 0xf;
  DAT_EXTMEM_d68a = 0xf;
  DAT_EXTMEM_d70a = 0xf;
  DAT_EXTMEM_d78a = 0xf;
  DAT_EXTMEM_d60b = 2;
  DAT_EXTMEM_d68b = 2;
  DAT_EXTMEM_d70b = 2;
  DAT_EXTMEM_d78b = 2;
  return;
}



/* =========================================================
 * CODE:1043  FUN_CODE_1043  size=105
 * callers: CODE:0d60
 * ========================================================= */

void FUN_CODE_1043(void)

{
  if (DAT_EXTMEM_7f7d == '\x10') {
    DAT_EXTMEM_d654 = 7;
    DAT_EXTMEM_d6d4 = 7;
    DAT_EXTMEM_d754 = 7;
    DAT_EXTMEM_d7d4 = 7;
    DAT_EXTMEM_d655 = 2;
    DAT_EXTMEM_d6d5 = 2;
    DAT_EXTMEM_d755 = 2;
    DAT_EXTMEM_d7d5 = 2;
    DAT_EXTMEM_d60a = 7;
    DAT_EXTMEM_d68a = 7;
    DAT_EXTMEM_d70a = 7;
    DAT_EXTMEM_d78a = 7;
    DAT_EXTMEM_d60b = 2;
    DAT_EXTMEM_d68b = 2;
    DAT_EXTMEM_d70b = 2;
    DAT_EXTMEM_d78b = 2;
    return;
  }
  if (DAT_EXTMEM_7f7d == '\b') {
    DAT_EXTMEM_d654 = 7;
    DAT_EXTMEM_d6d4 = 7;
    DAT_EXTMEM_d754 = 7;
    DAT_EXTMEM_d7d4 = 7;
    DAT_EXTMEM_d655 = 4;
    DAT_EXTMEM_d6d5 = 4;
    DAT_EXTMEM_d755 = 4;
    DAT_EXTMEM_d7d5 = 4;
    DAT_EXTMEM_d60a = 7;
    DAT_EXTMEM_d68a = 7;
    DAT_EXTMEM_d70a = 7;
    DAT_EXTMEM_d78a = 7;
    DAT_EXTMEM_d60b = 2;
    DAT_EXTMEM_d68b = 2;
    DAT_EXTMEM_d70b = 2;
    DAT_EXTMEM_d78b = 2;
    return;
  }
  DAT_EXTMEM_d654 = 3;
  DAT_EXTMEM_d6d4 = 3;
  DAT_EXTMEM_d754 = 3;
  DAT_EXTMEM_d7d4 = 3;
  DAT_EXTMEM_d655 = 8;
  DAT_EXTMEM_d6d5 = 8;
  DAT_EXTMEM_d755 = 8;
  DAT_EXTMEM_d7d5 = 8;
  DAT_EXTMEM_d60a = 0xf;
  DAT_EXTMEM_d68a = 0xf;
  DAT_EXTMEM_d70a = 0xf;
  DAT_EXTMEM_d78a = 0xf;
  DAT_EXTMEM_d60b = 1;
  DAT_EXTMEM_d68b = 1;
  DAT_EXTMEM_d70b = 1;
  DAT_EXTMEM_d78b = 1;
  return;
}



/* =========================================================
 * CODE:10ac  FUN_CODE_10ac  size=105
 * ========================================================= */

void FUN_CODE_10ac(void)

{
  if (DAT_EXTMEM_7f7d == '\b') {
    DAT_EXTMEM_d654 = 7;
    DAT_EXTMEM_d6d4 = 7;
    DAT_EXTMEM_d754 = 7;
    DAT_EXTMEM_d7d4 = 7;
    DAT_EXTMEM_d655 = 4;
    DAT_EXTMEM_d6d5 = 4;
    DAT_EXTMEM_d755 = 4;
    DAT_EXTMEM_d7d5 = 4;
    DAT_EXTMEM_d60a = 7;
    DAT_EXTMEM_d68a = 7;
    DAT_EXTMEM_d70a = 7;
    DAT_EXTMEM_d78a = 7;
    DAT_EXTMEM_d60b = 2;
    DAT_EXTMEM_d68b = 2;
    DAT_EXTMEM_d70b = 2;
    DAT_EXTMEM_d78b = 2;
    return;
  }
  DAT_EXTMEM_d654 = 3;
  DAT_EXTMEM_d6d4 = 3;
  DAT_EXTMEM_d754 = 3;
  DAT_EXTMEM_d7d4 = 3;
  DAT_EXTMEM_d655 = 8;
  DAT_EXTMEM_d6d5 = 8;
  DAT_EXTMEM_d755 = 8;
  DAT_EXTMEM_d7d5 = 8;
  DAT_EXTMEM_d60a = 0xf;
  DAT_EXTMEM_d68a = 0xf;
  DAT_EXTMEM_d70a = 0xf;
  DAT_EXTMEM_d78a = 0xf;
  DAT_EXTMEM_d60b = 1;
  DAT_EXTMEM_d68b = 1;
  DAT_EXTMEM_d70b = 1;
  DAT_EXTMEM_d78b = 1;
  return;
}



/* =========================================================
 * CODE:1115  FUN_CODE_1115  size=97
 * ========================================================= */

void FUN_CODE_1115(void)

{
  DAT_EXTMEM_d654 = 3;
  DAT_EXTMEM_d6d4 = 3;
  DAT_EXTMEM_d754 = 3;
  DAT_EXTMEM_d7d4 = 3;
  DAT_EXTMEM_d655 = 8;
  DAT_EXTMEM_d6d5 = 8;
  DAT_EXTMEM_d755 = 8;
  DAT_EXTMEM_d7d5 = 8;
  DAT_EXTMEM_d60a = 0xf;
  DAT_EXTMEM_d68a = 0xf;
  DAT_EXTMEM_d70a = 0xf;
  DAT_EXTMEM_d78a = 0xf;
  DAT_EXTMEM_d60b = 1;
  DAT_EXTMEM_d68b = 1;
  DAT_EXTMEM_d70b = 1;
  DAT_EXTMEM_d78b = 1;
  return;
}



/* =========================================================
 * CODE:11e5  FUN_CODE_11e5  size=181
 * callers: CODE:4868
 * ========================================================= */

void FUN_CODE_11e5(void)

{
  uEXTMEMd406 = 0x20;
  uEXTMEMd407 = 1;
  uEXTMEMd413 = 0x10;
  uEXTMEMd414 = 0x27;
  uEXTMEMd416 = 0x15;
  uEXTMEMd417 = 0x34;
  uEXTMEMd434 = 0x98;
  uEXTMEMd435 = 0x3a;
  uEXTMEMd437 = 0x20;
  uEXTMEMd438 = 0x4e;
  uEXTMEMd455 = 4;
  uEXTMEMd458 = 3;
  uEXTMEMd520 = 0x81;
  uEXTMEMd521 = 5;
  uEXTMEMd531 = 0xff;
  uEXTMEMd545 = 2;
  uEXTMEMd546 = 1;
  uEXTMEMd54f = 3;
  uEXTMEMd4e2 = 0x88;
  uEXTMEMd4e3 = 0x88;
  uEXTMEMd4e4 = 8;
  uEXTMEMd4dc = 0x66;
  uEXTMEMd4dd = 0x66;
  uEXTMEMd4de = 6;
  uEXTMEMd500 = 0x44;
  uEXTMEMd501 = 0x44;
  uEXTMEMd502 = 4;
  uEXTMEMd506 = 0x33;
  uEXTMEMd507 = 0x33;
  uEXTMEMd508 = 3;
  return;
}



/* =========================================================
 * CODE:129a  FUN_CODE_129a  size=361
 * callers: CODE:3936, CODE:3a8d, CODE:4868
 * ========================================================= */

void FUN_CODE_129a(void)

{
  if ((DAT_EXTMEM_c800 & 1) == 0) {
    if (DAT_EXTMEM_7f7d == '\x10') {
      uEXTMEMd816 = 0xf0;
      uEXTMEMd866 = 0xf;
      uEXTMEMd61e = 0;
      uEXTMEMd82a = 0;
      uEXTMEMd82b = 0;
    }
    else if (DAT_EXTMEM_7f7d == '\b') {
      uEXTMEMd816 = 0xf;
      uEXTMEMd866 = 0xf0;
      uEXTMEMd61e = 1;
      uEXTMEMd82a = 0xff;
      uEXTMEMd82b = 0xff;
    }
    else {
      uEXTMEMd816 = 0xf;
      uEXTMEMd866 = 0xf0;
      uEXTMEMd61e = 1;
      uEXTMEMd82a = 0xff;
      uEXTMEMd82b = 0xff;
    }
  }
  else {
    uEXTMEMd816 = 0xf0;
    uEXTMEMd866 = 0xf0;
    uEXTMEMd61e = 0;
    uEXTMEMd82a = 0;
    uEXTMEMd82b = 0;
  }
  BANK0_R2 = BANK0_R2 & 0x7f;
  uEXTMEMd828 = 0xf0;
  uEXTMEMd827 = 0xf0;
  uEXTMEMd802 = DAT_EXTMEM_7f7d == '\0';
  if ((bool)uEXTMEMd802) {
    uEXTMEMd802 = false;
  }
  else if (DAT_EXTMEM_7f7d == '\b') {
    BANK0_R2 = 1;
  }
  else {
    BANK0_R2 = 2;
  }
  FUN_CODE_0cfa(0xd800);
  if ((cEXTMEMc89c != '\0') && (DAT_EXTMEM_7f7d == '\x10')) {
    uEXTMEMce06 = 0x10;
  }
  return;
}



/* =========================================================
 * CODE:1403  FUN_CODE_1403  size=98
 * callers: CODE:3b65, CODE:15c1, CODE:4868
 * ========================================================= */

void FUN_CODE_1403(void)

{
  uEXTMEMd83c = 0xff;
  uEXTMEMd83d = 0;
  uEXTMEMd842 = 0x10;
  uEXTMEMd843 = 0;
  DAT_INTMEM_50 = 0x10;
  DAT_INTMEM_51 = 0xe;
  FUN_CODE_044f(0xd800);
  uEXTMEMd83b = 0xff;
  DAT_EXTMEM_d80f = 0xf;
  DAT_EXTMEM_d811 = 0xff;
  if (DAT_EXTMEM_7eac == '\0') {
    uEXTMEMd840 = 0x32;
  }
  else {
    uEXTMEMd840 = 0x10;
  }
  uEXTMEMd841 = 0;
  uEXTMEMd83a = 0xf;
  DAT_EXTMEM_7fb3 = 0;
  DAT_EXTMEM_7fb4 = 1;
  DAT_EXTMEM_7eb9 = 0;
  return;
}



/* =========================================================
 * CODE:1465  FUN_CODE_1465  size=348
 * callers: CODE:4819, CODE:4868
 * ========================================================= */

void FUN_CODE_1465(ushort param_1)

{
  DAT_INTMEM_50 = 0x10;
  DAT_INTMEM_51 = 0xc;
  FUN_CODE_044f(param_1 & 0xff00);
  DAT_EXTMEM_d61c = 0;
  DAT_EXTMEM_d815 = 0xf;
  DAT_EXTMEM_d825 = 0xff;
  DAT_EXTMEM_d811 = 0;
  DAT_EXTMEM_d656 = 3;
  DAT_EXTMEM_d6d6 = 3;
  DAT_EXTMEM_d756 = 3;
  DAT_EXTMEM_d7d6 = 3;
  BANK0_R2 = 0xf0;
  DAT_EXTMEM_7fed = DAT_EXTMEM_c800 & 1;
  if (DAT_EXTMEM_7fed == 0) {
    DAT_EXTMEM_d868 = 0xf;
    if (DAT_EXTMEM_7f7d == '\x10') {
      DAT_EXTMEM_d824 = 0;
      DAT_EXTMEM_d84a = 0x1a;
    }
    else if (DAT_EXTMEM_7f7d == '\b') {
      DAT_EXTMEM_d824 = 4;
      DAT_EXTMEM_d84a = 0xd;
    }
    else {
      DAT_EXTMEM_d824 = 2;
      DAT_EXTMEM_d84a = 8;
    }
    DAT_EXTMEM_d867 = 0xf;
  }
  else {
    DAT_EXTMEM_d868 = 7;
    if (((DAT_EXTMEM_d4b5 < 9) << 7 < '\0') || ((DAT_EXTMEM_d4b5 == 9 && (DAT_EXTMEM_d4b4 < 0xc4))))
    {
      DAT_EXTMEM_d824 = 4;
      DAT_EXTMEM_d84a = 2;
    }
    else if (((DAT_EXTMEM_d4b5 < 0x13) << 7 < '\0') ||
            ((DAT_EXTMEM_d4b5 == 0x13 && (DAT_EXTMEM_d4b4 < 0x88)))) {
      DAT_EXTMEM_d824 = 4;
      DAT_EXTMEM_d84a = 4;
    }
    else if (DAT_EXTMEM_d4b5 < 0x30) {
      DAT_EXTMEM_d824 = 8;
      DAT_EXTMEM_d84a = 8;
    }
    else {
      DAT_EXTMEM_d824 = 8;
      DAT_EXTMEM_d84a = 0xf;
    }
    DAT_EXTMEM_d867 = 7;
  }
  DAT_EXTMEM_d818 = 0x2f;
  DAT_EXTMEM_7fb5 = 1;
  FUN_CODE_187f(0x7f00);
  return;
}



/* =========================================================
 * CODE:15c1  FUN_CODE_15c1  size=66
 * callers: CODE:4868, CODE:586a
 * ========================================================= */

void FUN_CODE_15c1(ushort param_1)

{
  DAT_INTMEM_50 = 0x10;
  DAT_INTMEM_51 = 0xd;
  FUN_CODE_044f(param_1 & 0xff00);
  DAT_EXTMEM_7fb5 = 0;
  DAT_EXTMEM_d867 = 0;
  DAT_EXTMEM_d868 = 0;
  DAT_EXTMEM_d851 = 0xf;
  DAT_EXTMEM_d656 = 1;
  DAT_EXTMEM_d6d6 = 1;
  DAT_EXTMEM_d756 = 1;
  DAT_EXTMEM_d7d6 = 1;
  if (DAT_EXTMEM_7fb3 != '\0') {
    FUN_CODE_1403(DAT_EXTMEM_7fb3);
    return;
  }
  return;
}



/* =========================================================
 * CODE:1603  FUN_CODE_1603  size=73
 * callers: CODE:4868
 * ========================================================= */

void FUN_CODE_1603(ushort param_1)

{
  DAT_INTMEM_50 = 0x10;
  DAT_INTMEM_51 = 0x71;
  FUN_CODE_044f(param_1 & 0xff00);
  DAT_EXTMEM_cc0b = 0;
  do {
  } while ((DAT_EXTMEM_d806 >> 3 & 1) != 1);
  if (DAT_EXTMEM_c850 == '\x02') {
    BANK0_R2 = 0;
    return;
  }
  DAT_EXTMEM_cc0b = 0;
  do {
  } while ((DAT_EXTMEM_d806 >> 3 & 1) != 1);
  BANK0_R2 = BANK0_R2 & 0x1c;
  if (DAT_EXTMEM_c850 != '\x03') {
    return;
  }
  BANK0_R2 = 0;
  return;
}



/* =========================================================
 * CODE:164c  FUN_CODE_164c  size=84
 * ========================================================= */

void FUN_CODE_164c(void)

{
  DAT_EXTMEM_cc0b = 0;
  do {
  } while ((DAT_EXTMEM_d806 >> 3 & 1) != 1);
  BANK0_R2 = BANK0_R2 & 0x1c;
  if (DAT_EXTMEM_c850 != '\x03') {
    return;
  }
  BANK0_R2 = 0;
  return;
}



/* =========================================================
 * CODE:16a0  FUN_CODE_16a0  size=4
 * ========================================================= */

void FUN_CODE_16a0(void)

{
  return;
}



/* =========================================================
 * CODE:16c8  FUN_CODE_16c8  size=114
 * callers: CODE:1a4c, CODE:1a22
 * ========================================================= */

void FUN_CODE_16c8(byte param_1,undefined1 param_2)

{
  char cVar1;
  byte bVar2;
  
  bVar2 = (byte)((ushort)param_1 * 3);
  cVar1 = (char)((ushort)param_1 * 3 >> 8);
  *(byte *)CONCAT11(cVar1 + -0x27,param_2) = DAT_INTMEM_50 & 0x3f;
  BANK0_R4 = bVar2 & 0xf | (DAT_INTMEM_52 & 1) << 6 | ((DAT_INTMEM_52 & 3) >> 1) << 7;
  *(byte *)CONCAT11((cVar1 - (((0xfe < bVar2) << 7) >> 7)) + -0x27,bVar2 + 1) = DAT_INTMEM_51 >> 2;
  BANK0_R2 = BANK0_R2 & 7 | (DAT_INTMEM_53 & 0xf) << 3 | ((DAT_INTMEM_53 & 0x1f) >> 4) << 7;
  *(byte *)CONCAT11((cVar1 - (((0xfd < bVar2) << 7) >> 7)) + -0x27,bVar2 + 2) = DAT_INTMEM_52 >> 2;
  return;
}



/* =========================================================
 * CODE:173a  FUN_CODE_173a  size=16
 * callers: CODE:1ac6
 * ========================================================= */

void FUN_CODE_173a(void)

{
  for (DAT_EXTMEM_7fed = 0; DAT_EXTMEM_7fed < 0x1f; DAT_EXTMEM_7fed = DAT_EXTMEM_7fed + 1) {
    *(undefined1 *)CONCAT11('~' - (((7 < DAT_EXTMEM_7fed) << 7) >> 7),DAT_EXTMEM_7fed - 8) =
         *(undefined1 *)((ushort)DAT_EXTMEM_7fed + 0x5e);
    *(byte *)CONCAT11('~' - (((0x26 < DAT_EXTMEM_7fed) << 7) >> 7),DAT_EXTMEM_7fed - 0x27) =
         *(byte *)((ushort)DAT_EXTMEM_7fed + 0x7d) >> 2;
    *(byte *)CONCAT11('~' - (((0x45 < DAT_EXTMEM_7fed) << 7) >> 7),DAT_EXTMEM_7fed + 0xba) =
         (DAT_EXTMEM_7fed + 1 >> 1 | (DAT_EXTMEM_7fed + 1 == 0) << 7) >> 1;
    *(undefined1 *)CONCAT11('\x7f' - (((0xaa < DAT_EXTMEM_7fed) << 7) >> 7),DAT_EXTMEM_7fed + 0x55)
         = *(undefined1 *)((ushort)DAT_EXTMEM_7fed + 0x20);
    *(byte *)CONCAT11('\x7f' - (((0xc9 < DAT_EXTMEM_7fed) << 7) >> 7),DAT_EXTMEM_7fed + 0x36) =
         *(byte *)((ushort)DAT_EXTMEM_7fed + 0x3f) >> 2;
    BANK0_R4 = BANK0_R4 & 7 |
               (DAT_EXTMEM_7fed + 1 & 0xf) << 3 | ((DAT_EXTMEM_7fed + 1 & 0x1f) >> 4) << 7;
    *(byte *)CONCAT11('\x7f' - (((0xe8 < DAT_EXTMEM_7fed) << 7) >> 7),DAT_EXTMEM_7fed + 0x17) =
         (DAT_EXTMEM_7fed + 1 >> 1 | (DAT_EXTMEM_7fed + 1 == 0) << 7) >> 1;
  }
  return;
}



/* =========================================================
 * CODE:174a  FUN_CODE_174a  size=309
 * ========================================================= */

void FUN_CODE_174a(void)

{
  do {
    *(undefined1 *)CONCAT11('~' - (((7 < DAT_EXTMEM_7fed) << 7) >> 7),DAT_EXTMEM_7fed - 8) =
         *(undefined1 *)((ushort)DAT_EXTMEM_7fed + 0x5e);
    *(byte *)CONCAT11('~' - (((0x26 < DAT_EXTMEM_7fed) << 7) >> 7),DAT_EXTMEM_7fed - 0x27) =
         *(byte *)((ushort)DAT_EXTMEM_7fed + 0x7d) >> 2;
    *(byte *)CONCAT11('~' - (((0x45 < DAT_EXTMEM_7fed) << 7) >> 7),DAT_EXTMEM_7fed + 0xba) =
         (DAT_EXTMEM_7fed + 1 >> 1 | (DAT_EXTMEM_7fed + 1 == 0) << 7) >> 1;
    *(undefined1 *)CONCAT11('\x7f' - (((0xaa < DAT_EXTMEM_7fed) << 7) >> 7),DAT_EXTMEM_7fed + 0x55)
         = *(undefined1 *)((ushort)DAT_EXTMEM_7fed + 0x20);
    *(byte *)CONCAT11('\x7f' - (((0xc9 < DAT_EXTMEM_7fed) << 7) >> 7),DAT_EXTMEM_7fed + 0x36) =
         *(byte *)((ushort)DAT_EXTMEM_7fed + 0x3f) >> 2;
    BANK0_R4 = BANK0_R4 & 7 |
               (DAT_EXTMEM_7fed + 1 & 0xf) << 3 | ((DAT_EXTMEM_7fed + 1 & 0x1f) >> 4) << 7;
    *(byte *)CONCAT11('\x7f' - (((0xe8 < DAT_EXTMEM_7fed) << 7) >> 7),DAT_EXTMEM_7fed + 0x17) =
         (DAT_EXTMEM_7fed + 1 >> 1 | (DAT_EXTMEM_7fed + 1 == 0) << 7) >> 1;
    DAT_EXTMEM_7fed = DAT_EXTMEM_7fed + 1;
  } while ((DAT_EXTMEM_7fed < 0x1f) << 7 < '\0');
  return;
}



/* =========================================================
 * CODE:187f  FUN_CODE_187f  size=163
 * callers: CODE:1465, CODE:1ac6
 * ========================================================= */

void FUN_CODE_187f(ushort param_1)

{
  undefined1 uVar1;
  char cVar2;
  byte bVar3;
  
  uVar1 = BANK0_R2;
  cVar2 = (char)param_1;
  DAT_INTMEM_50 = 0x10;
  DAT_INTMEM_51 = 0x2b;
  FUN_CODE_044f(param_1 & 0xff00);
  BANK0_R2 = uVar1;
  if (DAT_EXTMEM_7f7d == '\x10' && (DAT_EXTMEM_c800 & 1) == 0) {
    if (-1 < cCODE00a9) {
      BANK0_R3 = BANK0_R3 | 4;
    }
    DAT_EXTMEM_d808 = 0x10;
  }
  else {
    BANK0_R3 = BANK0_R3 & 0xfb;
    DAT_EXTMEM_d808 = 0;
  }
  if ((bCODE00a6 >> 5 & 1) == 1) {
    BANK0_R3 = BANK0_R3 | DAT_EXTMEM_7fb6;
    if ((DAT_EXTMEM_7f7d == '\x10' && (DAT_EXTMEM_c800 & 1) == 0) && cVar2 == '\0') {
      for (DAT_EXTMEM_7fed = 0; DAT_EXTMEM_7fed < 0x1f; DAT_EXTMEM_7fed = DAT_EXTMEM_7fed + 1) {
        *(undefined1 *)
         CONCAT11((char)((ushort)DAT_EXTMEM_7fed * 3 >> 8) + -0x27,
                  (char)((ushort)DAT_EXTMEM_7fed * 3)) =
             *(undefined1 *)
              CONCAT11('\x7f' - (((0xaa < DAT_EXTMEM_7fed) << 7) >> 7),DAT_EXTMEM_7fed + 0x55);
        bVar3 = (byte)((ushort)DAT_EXTMEM_7fed * 3);
        *(undefined1 *)
         CONCAT11(((char)((ushort)DAT_EXTMEM_7fed * 3 >> 8) - (((0xfe < bVar3) << 7) >> 7)) + -0x27,
                  bVar3 + 1) =
             *(undefined1 *)
              CONCAT11('\x7f' - (((0xc9 < DAT_EXTMEM_7fed) << 7) >> 7),DAT_EXTMEM_7fed + 0x36);
        bVar3 = (byte)((ushort)DAT_EXTMEM_7fed * 3);
        *(undefined1 *)
         CONCAT11(((char)((ushort)DAT_EXTMEM_7fed * 3 >> 8) - (((0xfd < bVar3) << 7) >> 7)) + -0x27,
                  bVar3 + 2) =
             *(undefined1 *)
              CONCAT11('\x7f' - (((0xe8 < DAT_EXTMEM_7fed) << 7) >> 7),DAT_EXTMEM_7fed + 0x17);
      }
      return;
    }
    FUN_CODE_199a();
    return;
  }
  FUN_CODE_1a22(bCODE00a6);
  return;
}



/* =========================================================
 * CODE:1922  FUN_CODE_1922  size=120
 * ========================================================= */

void FUN_CODE_1922(void)

{
  byte bVar1;
  
  do {
    *(undefined1 *)
     CONCAT11((char)((ushort)DAT_EXTMEM_7fed * 3 >> 8) + -0x27,(char)((ushort)DAT_EXTMEM_7fed * 3))
         = *(undefined1 *)
            CONCAT11('\x7f' - (((0xaa < DAT_EXTMEM_7fed) << 7) >> 7),DAT_EXTMEM_7fed + 0x55);
    bVar1 = (byte)((ushort)DAT_EXTMEM_7fed * 3);
    *(undefined1 *)
     CONCAT11(((char)((ushort)DAT_EXTMEM_7fed * 3 >> 8) - (((0xfe < bVar1) << 7) >> 7)) + -0x27,
              bVar1 + 1) =
         *(undefined1 *)
          CONCAT11('\x7f' - (((0xc9 < DAT_EXTMEM_7fed) << 7) >> 7),DAT_EXTMEM_7fed + 0x36);
    bVar1 = (byte)((ushort)DAT_EXTMEM_7fed * 3);
    *(undefined1 *)
     CONCAT11(((char)((ushort)DAT_EXTMEM_7fed * 3 >> 8) - (((0xfd < bVar1) << 7) >> 7)) + -0x27,
              bVar1 + 2) =
         *(undefined1 *)
          CONCAT11('\x7f' - (((0xe8 < DAT_EXTMEM_7fed) << 7) >> 7),DAT_EXTMEM_7fed + 0x17);
    DAT_EXTMEM_7fed = DAT_EXTMEM_7fed + 1;
  } while ((DAT_EXTMEM_7fed < 0x1f) << 7 < '\0');
  return;
}



/* =========================================================
 * CODE:199a  FUN_CODE_199a  size=16
 * callers: CODE:187f
 * ========================================================= */

void FUN_CODE_199a(void)

{
  byte bVar1;
  
  for (DAT_EXTMEM_7fed = 0; DAT_EXTMEM_7fed < 0x1f; DAT_EXTMEM_7fed = DAT_EXTMEM_7fed + 1) {
    *(undefined1 *)
     CONCAT11((char)((ushort)DAT_EXTMEM_7fed * 3 >> 8) + -0x27,(char)((ushort)DAT_EXTMEM_7fed * 3))
         = *(undefined1 *)CONCAT11('~' - (((7 < DAT_EXTMEM_7fed) << 7) >> 7),DAT_EXTMEM_7fed - 8);
    bVar1 = (byte)((ushort)DAT_EXTMEM_7fed * 3);
    *(undefined1 *)
     CONCAT11(((char)((ushort)DAT_EXTMEM_7fed * 3 >> 8) - (((0xfe < bVar1) << 7) >> 7)) + -0x27,
              bVar1 + 1) =
         *(undefined1 *)
          CONCAT11('~' - (((0x26 < DAT_EXTMEM_7fed) << 7) >> 7),DAT_EXTMEM_7fed - 0x27);
    bVar1 = (byte)((ushort)DAT_EXTMEM_7fed * 3);
    *(undefined1 *)
     CONCAT11(((char)((ushort)DAT_EXTMEM_7fed * 3 >> 8) - (((0xfd < bVar1) << 7) >> 7)) + -0x27,
              bVar1 + 2) =
         *(undefined1 *)
          CONCAT11('~' - (((0x45 < DAT_EXTMEM_7fed) << 7) >> 7),DAT_EXTMEM_7fed + 0xba);
  }
  return;
}



/* =========================================================
 * CODE:19aa  FUN_CODE_19aa  size=120
 * ========================================================= */

void FUN_CODE_19aa(void)

{
  byte bVar1;
  
  do {
    *(undefined1 *)
     CONCAT11((char)((ushort)DAT_EXTMEM_7fed * 3 >> 8) + -0x27,(char)((ushort)DAT_EXTMEM_7fed * 3))
         = *(undefined1 *)CONCAT11('~' - (((7 < DAT_EXTMEM_7fed) << 7) >> 7),DAT_EXTMEM_7fed - 8);
    bVar1 = (byte)((ushort)DAT_EXTMEM_7fed * 3);
    *(undefined1 *)
     CONCAT11(((char)((ushort)DAT_EXTMEM_7fed * 3 >> 8) - (((0xfe < bVar1) << 7) >> 7)) + -0x27,
              bVar1 + 1) =
         *(undefined1 *)
          CONCAT11('~' - (((0x26 < DAT_EXTMEM_7fed) << 7) >> 7),DAT_EXTMEM_7fed - 0x27);
    bVar1 = (byte)((ushort)DAT_EXTMEM_7fed * 3);
    *(undefined1 *)
     CONCAT11(((char)((ushort)DAT_EXTMEM_7fed * 3 >> 8) - (((0xfd < bVar1) << 7) >> 7)) + -0x27,
              bVar1 + 2) =
         *(undefined1 *)
          CONCAT11('~' - (((0x45 < DAT_EXTMEM_7fed) << 7) >> 7),DAT_EXTMEM_7fed + 0xba);
    DAT_EXTMEM_7fed = DAT_EXTMEM_7fed + 1;
  } while ((DAT_EXTMEM_7fed < 0x1f) << 7 < '\0');
  return;
}



/* =========================================================
 * CODE:1a22  FUN_CODE_1a22  size=111
 * callers: CODE:187f
 * ========================================================= */

void FUN_CODE_1a22(void)

{
  if (DAT_EXTMEM_7f7d != '\x10' || (DAT_EXTMEM_c800 & 1) != 0) {
    for (DAT_EXTMEM_7fed = 0; DAT_EXTMEM_7fed < 0x1f; DAT_EXTMEM_7fed = DAT_EXTMEM_7fed + 1) {
      DAT_INTMEM_50 = *(undefined1 *)((ushort)DAT_EXTMEM_7fed + 0x5e);
      DAT_INTMEM_51 = *(undefined1 *)((ushort)DAT_EXTMEM_7fed + 0x7d);
      DAT_INTMEM_52 = DAT_EXTMEM_7fed + 1;
      DAT_INTMEM_53 = DAT_EXTMEM_7fed + 1;
      FUN_CODE_16c8(CONCAT11(0x7f,DAT_EXTMEM_7fed));
    }
    return;
  }
  for (DAT_EXTMEM_7fed = 0; DAT_EXTMEM_7fed < 0x1f; DAT_EXTMEM_7fed = DAT_EXTMEM_7fed + 1) {
    DAT_INTMEM_50 = *(undefined1 *)((ushort)DAT_EXTMEM_7fed + 0x20);
    DAT_INTMEM_51 = *(undefined1 *)((ushort)DAT_EXTMEM_7fed + 0x3f);
    DAT_INTMEM_52 = DAT_EXTMEM_7fed + 1;
    DAT_INTMEM_53 = DAT_EXTMEM_7fed + 1;
    FUN_CODE_16c8(CONCAT11(0x7f,DAT_EXTMEM_7fed));
  }
  return;
}



/* =========================================================
 * CODE:1a4c  FUN_CODE_1a4c  size=53
 * ========================================================= */

void FUN_CODE_1a4c(void)

{
  do {
    DAT_INTMEM_50 = *(undefined1 *)((ushort)DAT_EXTMEM_7fed + 0x20);
    DAT_INTMEM_51 = *(undefined1 *)((ushort)DAT_EXTMEM_7fed + 0x3f);
    DAT_INTMEM_52 = DAT_EXTMEM_7fed + 1;
    DAT_INTMEM_53 = DAT_EXTMEM_7fed + 1;
    FUN_CODE_16c8(CONCAT11(0x7f,DAT_EXTMEM_7fed));
    DAT_EXTMEM_7fed = DAT_EXTMEM_7fed + 1;
  } while ((DAT_EXTMEM_7fed < 0x1f) << 7 < '\0');
  return;
}



/* =========================================================
 * CODE:1ac6  FUN_CODE_1ac6  size=160
 * callers: CODE:4868
 * ========================================================= */

void FUN_CODE_1ac6(void)

{
  if ((bCODE00a6 >> 5 & 1) != 0) {
    FUN_CODE_173a(bCODE00a6);
    if ((bCODE00a7 >> 1 & 1) != 0) {
      FUN_CODE_187f(0xff,bCODE00a7);
    }
  }
  uEXTMEMd84f = 0xf;
  uEXTMEMd659 = 0x80;
  uEXTMEMd6d9 = 0x80;
  uEXTMEMd759 = 0x80;
  uEXTMEMd7d9 = 0x80;
  DAT_EXTMEM_d811 = 0;
  DAT_EXTMEM_d656 = 3;
  DAT_EXTMEM_d6d6 = 3;
  DAT_EXTMEM_d756 = 3;
  DAT_EXTMEM_d7d6 = 3;
  BANK0_R2 = BANK0_R2 | 0x80;
  DAT_EXTMEM_d815 = 0xf;
  uEXTMEMd61b = 3;
  DAT_EXTMEM_d602 = 0xff;
  DAT_EXTMEM_d603 = 0xff;
  DAT_EXTMEM_d682 = 0xff;
  DAT_EXTMEM_d683 = 0xff;
  DAT_EXTMEM_d702 = 0xff;
  DAT_EXTMEM_d703 = 0xff;
  DAT_EXTMEM_d782 = 0xff;
  DAT_EXTMEM_d783 = 0xff;
  return;
}



/* =========================================================
 * CODE:1b66  FUN_CODE_1b66  size=84
 * callers: CODE:4868
 * ========================================================= */

void FUN_CODE_1b66(ushort param_1)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  
  uVar3 = BANK0_R2;
  cVar2 = (char)param_1;
  DAT_INTMEM_50 = 0x10;
  DAT_INTMEM_51 = 0x72;
  FUN_CODE_044f(param_1 & 0xff00);
  BANK0_R2 = uVar3;
  DAT_EXTMEM_cc0b = 0;
  bVar1 = BANK0_R3;
  do {
    BANK0_R3 = bVar1;
    bVar1 = BANK0_R3 & 0xf;
  } while (DAT_EXTMEM_d80d != '\x0f');
  BANK0_R3 = BANK0_R3 & 0xc;
  if (DAT_EXTMEM_c850 == '\x04') {
    BANK0_R3 = 0;
    return;
  }
  DAT_EXTMEM_d61f = 100;
  DAT_EXTMEM_d620 = 0x19;
  DAT_EXTMEM_d621 = 0;
  DAT_EXTMEM_d626 = 0xe8;
  DAT_EXTMEM_d627 = 0xfd;
  DAT_EXTMEM_d628 = 0xff;
  DAT_EXTMEM_d629 = 0xff;
  DAT_EXTMEM_d62a = 1;
  if (cVar2 != '\0') {
    FUN_CODE_1ced();
    return;
  }
  DAT_INTMEM_50 = 0x10;
  DAT_INTMEM_51 = 0x73;
  FUN_CODE_044f(0xd600);
  BANK0_R3 = BANK0_R3 | 0x88;
  DAT_EXTMEM_d812 = 0xf;
  DAT_EXTMEM_d61c = 3;
  DAT_EXTMEM_d622 = 0x81;
  DAT_EXTMEM_d623 = 0xff;
  DAT_EXTMEM_d624 = 0x7f;
  DAT_EXTMEM_d625 = 0;
  DAT_EXTMEM_d617 = 1;
  DAT_EXTMEM_cc0b = 0;
  do {
    BANK0_R3 = BANK0_R3 & DAT_EXTMEM_d6b4 & DAT_EXTMEM_d734;
  } while ((DAT_EXTMEM_d7b4 & DAT_EXTMEM_d634) == 0);
  BANK0_R3 = BANK0_R3 & 0x1c;
  if (DAT_EXTMEM_c850 != '\x05') {
    DAT_EXTMEM_d812 = 0;
    return;
  }
  BANK0_R3 = 0;
  DAT_INTMEM_50 = 0x10;
  DAT_INTMEM_51 = 0x68;
  uVar3 = 200;
  FUN_CODE_044f(0xc800,DAT_EXTMEM_d7b4);
  DAT_INTMEM_50 = 0x10;
  DAT_INTMEM_51 = 4;
  FUN_CODE_044f(CONCAT11(uVar3,1));
  DAT_INTMEM_51 = DAT_EXTMEM_d634;
  DAT_INTMEM_50 = 0x10;
  FUN_CODE_044f(0xd601);
  DAT_INTMEM_51 = DAT_EXTMEM_d6b4;
  DAT_INTMEM_50 = 0x10;
  FUN_CODE_044f(0xd601);
  DAT_INTMEM_51 = DAT_EXTMEM_d734;
  DAT_INTMEM_50 = 0x10;
  FUN_CODE_044f(0xd701);
  DAT_INTMEM_51 = DAT_EXTMEM_d7b4;
  DAT_INTMEM_50 = 0x10;
  FUN_CODE_044f(0xd701);
  DAT_EXTMEM_d812 = 0;
  return;
}



/* =========================================================
 * CODE:1bba  FUN_CODE_1bba  size=299
 * ========================================================= */

void FUN_CODE_1bba(char param_1)

{
  undefined1 uVar1;
  
  DAT_EXTMEM_d61f = 100;
  DAT_EXTMEM_d620 = 0x19;
  DAT_EXTMEM_d621 = 0;
  DAT_EXTMEM_d626 = 0xe8;
  DAT_EXTMEM_d627 = 0xfd;
  DAT_EXTMEM_d628 = 0xff;
  DAT_EXTMEM_d629 = 0xff;
  DAT_EXTMEM_d62a = 1;
  if (param_1 != '\0') {
    FUN_CODE_1ced();
    return;
  }
  DAT_INTMEM_50 = 0x10;
  DAT_INTMEM_51 = 0x73;
  FUN_CODE_044f(0xd600);
  BANK0_R3 = BANK0_R3 | 0x88;
  DAT_EXTMEM_d812 = 0xf;
  DAT_EXTMEM_d61c = 3;
  DAT_EXTMEM_d622 = 0x81;
  DAT_EXTMEM_d623 = 0xff;
  DAT_EXTMEM_d624 = 0x7f;
  DAT_EXTMEM_d625 = 0;
  DAT_EXTMEM_d617 = 1;
  DAT_EXTMEM_cc0b = 0;
  do {
    BANK0_R3 = BANK0_R3 & DAT_EXTMEM_d6b4 & DAT_EXTMEM_d734;
  } while ((DAT_EXTMEM_d7b4 & DAT_EXTMEM_d634) == 0);
  BANK0_R3 = BANK0_R3 & 0x1c;
  if (DAT_EXTMEM_c850 != '\x05') {
    DAT_EXTMEM_d812 = 0;
    return;
  }
  BANK0_R3 = 0;
  DAT_INTMEM_50 = 0x10;
  DAT_INTMEM_51 = 0x68;
  uVar1 = 200;
  FUN_CODE_044f(0xc800,DAT_EXTMEM_d7b4);
  DAT_INTMEM_50 = 0x10;
  DAT_INTMEM_51 = 4;
  FUN_CODE_044f(CONCAT11(uVar1,1));
  DAT_INTMEM_51 = DAT_EXTMEM_d634;
  DAT_INTMEM_50 = 0x10;
  FUN_CODE_044f(0xd601);
  DAT_INTMEM_51 = DAT_EXTMEM_d6b4;
  DAT_INTMEM_50 = 0x10;
  FUN_CODE_044f(0xd601);
  DAT_INTMEM_51 = DAT_EXTMEM_d734;
  DAT_INTMEM_50 = 0x10;
  FUN_CODE_044f(0xd701);
  DAT_INTMEM_51 = DAT_EXTMEM_d7b4;
  DAT_INTMEM_50 = 0x10;
  FUN_CODE_044f(0xd701);
  DAT_EXTMEM_d812 = 0;
  return;
}



/* =========================================================
 * CODE:1ce5  FUN_CODE_1ce5  size=8
 * ========================================================= */

void FUN_CODE_1ce5(void)

{
  DAT_EXTMEM_d812 = 0;
  return;
}



/* =========================================================
 * CODE:1ced  FUN_CODE_1ced  size=241
 * callers: CODE:1bba
 * ========================================================= */

void FUN_CODE_1ced(ushort param_1,char param_2)

{
  undefined1 uVar1;
  
  if (param_2 != '\x01') {
    FUN_CODE_1e07();
    return;
  }
  DAT_INTMEM_50 = 0x10;
  DAT_INTMEM_51 = 0x74;
  FUN_CODE_044f(param_1 & 0xff00);
  DAT_EXTMEM_d813 = 0xf0;
  DAT_EXTMEM_d61c = 4;
  DAT_EXTMEM_d622 = 0xe0;
  DAT_EXTMEM_d623 = 0xff;
  DAT_EXTMEM_d624 = 0x20;
  DAT_EXTMEM_d625 = 0;
  DAT_EXTMEM_d617 = 1;
  DAT_EXTMEM_cc0b = 0;
  do {
    BANK0_R2 = BANK0_R2 & DAT_EXTMEM_d6b4 & DAT_EXTMEM_d734;
  } while ((DAT_EXTMEM_d7b4 & DAT_EXTMEM_d634) == 0);
  BANK0_R2 = BANK0_R2 & 0x1c;
  if (DAT_EXTMEM_c850 != '\x06') {
    DAT_EXTMEM_d813 = 0;
    uEXTMEMd609 = uEXTMEMd63c;
    uEXTMEMd689 = uEXTMEMd6bc;
    uEXTMEMd709 = uEXTMEMd73c;
    uEXTMEMd789 = uEXTMEMd7bc;
    return;
  }
  BANK0_R2 = 0;
  DAT_INTMEM_50 = 0x10;
  DAT_INTMEM_51 = 0x68;
  uVar1 = 200;
  FUN_CODE_044f(0xc800,DAT_EXTMEM_d7b4);
  DAT_INTMEM_50 = 0x10;
  DAT_INTMEM_51 = 4;
  FUN_CODE_044f(CONCAT11(uVar1,1));
  DAT_INTMEM_51 = DAT_EXTMEM_d634;
  DAT_INTMEM_50 = 0x10;
  FUN_CODE_044f(0xd601);
  DAT_INTMEM_51 = DAT_EXTMEM_d6b4;
  DAT_INTMEM_50 = 0x10;
  FUN_CODE_044f(0xd601);
  DAT_INTMEM_51 = DAT_EXTMEM_d734;
  DAT_INTMEM_50 = 0x10;
  FUN_CODE_044f(0xd701);
  DAT_INTMEM_51 = DAT_EXTMEM_d7b4;
  DAT_INTMEM_50 = 0x10;
  FUN_CODE_044f(0xd701);
  DAT_EXTMEM_d813 = 0;
  return;
}



/* =========================================================
 * CODE:1dde  FUN_CODE_1dde  size=41
 * ========================================================= */

void FUN_CODE_1dde(void)

{
  DAT_EXTMEM_d813 = 0;
  uEXTMEMd609 = uEXTMEMd63c;
  uEXTMEMd689 = uEXTMEMd6bc;
  uEXTMEMd709 = uEXTMEMd73c;
  uEXTMEMd789 = uEXTMEMd7bc;
  return;
}



/* =========================================================
 * CODE:1e07  FUN_CODE_1e07  size=233
 * callers: CODE:1ced
 * ========================================================= */

void FUN_CODE_1e07(ushort param_1)

{
  undefined1 uVar1;
  
  DAT_INTMEM_50 = 0x10;
  DAT_INTMEM_51 = 0x75;
  FUN_CODE_044f(param_1 & 0xff00);
  DAT_EXTMEM_d813 = 0xf;
  DAT_EXTMEM_d61c = 3;
  DAT_EXTMEM_d622 = 0xe0;
  DAT_EXTMEM_d623 = 0xff;
  DAT_EXTMEM_d624 = 0x20;
  DAT_EXTMEM_d625 = 0;
  DAT_EXTMEM_d617 = 1;
  DAT_EXTMEM_cc0b = 0;
  do {
    BANK0_R2 = BANK0_R2 & DAT_EXTMEM_d6b4 & DAT_EXTMEM_d734;
  } while ((DAT_EXTMEM_d7b4 & DAT_EXTMEM_d634) == 0);
  BANK0_R2 = BANK0_R2 & 0x1c;
  if (DAT_EXTMEM_c850 != '\a') {
    DAT_EXTMEM_d813 = 0;
    uEXTMEMd608 = uEXTMEMd63c;
    uEXTMEMd688 = uEXTMEMd6bc;
    uEXTMEMd708 = uEXTMEMd73c;
    uEXTMEMd788 = uEXTMEMd7bc;
    return;
  }
  BANK0_R2 = 0;
  DAT_INTMEM_50 = 0x10;
  DAT_INTMEM_51 = 0x68;
  uVar1 = 200;
  FUN_CODE_044f(0xc800,DAT_EXTMEM_d7b4);
  DAT_INTMEM_50 = 0x10;
  DAT_INTMEM_51 = 4;
  FUN_CODE_044f(CONCAT11(uVar1,1));
  DAT_INTMEM_51 = DAT_EXTMEM_d634;
  DAT_INTMEM_50 = 0x10;
  FUN_CODE_044f(0xd601);
  DAT_INTMEM_51 = DAT_EXTMEM_d6b4;
  DAT_INTMEM_50 = 0x10;
  FUN_CODE_044f(0xd601);
  DAT_INTMEM_51 = DAT_EXTMEM_d734;
  DAT_INTMEM_50 = 0x10;
  FUN_CODE_044f(0xd701);
  DAT_INTMEM_51 = DAT_EXTMEM_d7b4;
  DAT_INTMEM_50 = 0x10;
  FUN_CODE_044f(0xd701);
  DAT_EXTMEM_d813 = 0;
  return;
}



/* =========================================================
 * CODE:1ef0  FUN_CODE_1ef0  size=42
 * ========================================================= */

void FUN_CODE_1ef0(void)

{
  DAT_EXTMEM_d813 = 0;
  uEXTMEMd608 = uEXTMEMd63c;
  uEXTMEMd688 = uEXTMEMd6bc;
  uEXTMEMd708 = uEXTMEMd73c;
  uEXTMEMd788 = uEXTMEMd7bc;
  return;
}



/* =========================================================
 * CODE:1f1a  FUN_CODE_1f1a  size=66
 * callers: CODE:4868
 * ========================================================= */

void FUN_CODE_1f1a(void)

{
  uEXTMEMd659 = 0;
  uEXTMEMd6d9 = 0;
  uEXTMEMd759 = 0;
  uEXTMEMd7d9 = 0;
  DAT_EXTMEM_d656 = 1;
  DAT_EXTMEM_d6d6 = 1;
  DAT_EXTMEM_d756 = 1;
  DAT_EXTMEM_d7d6 = 1;
  DAT_EXTMEM_d61c = 0;
  BANK0_R2 = BANK0_R2 & 0x7f;
  uEXTMEMd810 = 0xff;
  return;
}



/* =========================================================
 * CODE:1f5c  FUN_CODE_1f5c  size=63
 * callers: CODE:586a, CODE:3b65, CODE:4868
 * ========================================================= */

void FUN_CODE_1f5c(void)

{
  for (DAT_EXTMEM_7fed = 0; DAT_EXTMEM_7fed < 0x10; DAT_EXTMEM_7fed = DAT_EXTMEM_7fed + 1) {
    *(undefined1 *)CONCAT11('\x7f' - (((0x3f < DAT_EXTMEM_7fed) << 7) >> 7),DAT_EXTMEM_7fed - 0x40)
         = 0;
  }
  DAT_EXTMEM_7fdf = 0;
  DAT_EXTMEM_d230 = 0x41;
  DAT_INTMEM_50 = 8;
  DAT_INTMEM_51 = 0x69;
  FUN_CODE_044f(0xd200);
  return;
}



/* =========================================================
 * CODE:1f9b  FUN_CODE_1f9b  size=133
 * callers: CODE:586a
 * ========================================================= */

void FUN_CODE_1f9b(void)

{
  bool bVar1;
  char cVar2;
  
  if ((DAT_EXTMEM_7fee & 1) != 0) {
    BANK0_R4 = BANK0_R4 & 0xfe;
    *(undefined1 *)CONCAT11(-0x36 - (((0x7c < DAT_EXTMEM_7fef) << 7) >> 7),DAT_EXTMEM_7fef + 0x83) =
         *(undefined1 *)
          CONCAT11(-0x36 - (((0x7c < DAT_EXTMEM_7fef) << 7) >> 7),DAT_EXTMEM_7fef + 0x83);
  }
  if ((DAT_EXTMEM_7fee >> 1 & 1) != 0) {
    BANK0_R4 = BANK0_R4 & (DAT_EXTMEM_d25d >> 7 | 0xfe);
    *(undefined1 *)CONCAT11(-0x36 - (((0x7c < DAT_EXTMEM_7ff0) << 7) >> 7),DAT_EXTMEM_7ff0 + 0x83) =
         *(undefined1 *)
          CONCAT11(-0x36 - (((0x7c < DAT_EXTMEM_7ff0) << 7) >> 7),DAT_EXTMEM_7ff0 + 0x83);
  }
  if ((DAT_EXTMEM_7fee >> 2 & 1) != 1) {
    return;
  }
  BANK0_R2 = BANK0_R2 & 0x7f;
  if (*(byte *)CONCAT11(-0x36 - (((0x7c < DAT_EXTMEM_7ea9) << 7) >> 7),DAT_EXTMEM_7ea9 + 0x83) < 2)
  {
    *(undefined1 *)CONCAT11(-0x36 - (((0x7c < DAT_EXTMEM_7ea9) << 7) >> 7),DAT_EXTMEM_7ea9 + 0x83) =
         *(undefined1 *)
          CONCAT11(-0x36 - (((0x7c < DAT_EXTMEM_7ea9) << 7) >> 7),DAT_EXTMEM_7ea9 + 0x83);
    BANK0_R4 = BANK0_R4 & 0x80 | 2;
    *(undefined1 *)CONCAT11(-0x36 - (((0x7c < DAT_EXTMEM_7ea9) << 7) >> 7),DAT_EXTMEM_7ea9 + 0x83) =
         *(undefined1 *)
          CONCAT11(-0x36 - (((0x7c < DAT_EXTMEM_7ea9) << 7) >> 7),DAT_EXTMEM_7ea9 + 0x83);
  }
  else {
    cVar2 = -0x36 - (((0x7c < DAT_EXTMEM_7ea9) << 7) >> 7);
    *(char *)CONCAT11(cVar2,DAT_EXTMEM_7ea9 + 0x83) =
         *(char *)CONCAT11(cVar2,DAT_EXTMEM_7ea9 + 0x83) + '\x01';
    if (4 < BANK0_R2) {
      *(undefined1 *)CONCAT11(-0x36 - (((0x7c < DAT_EXTMEM_7ea9) << 7) >> 7),DAT_EXTMEM_7ea9 + 0x83)
           = *(undefined1 *)
              CONCAT11(-0x36 - (((0x7c < DAT_EXTMEM_7ea9) << 7) >> 7),DAT_EXTMEM_7ea9 + 0x83);
      BANK0_R4 = BANK0_R4 & 0x80 | 4;
      *(undefined1 *)CONCAT11(-0x36 - (((0x7c < DAT_EXTMEM_7ea9) << 7) >> 7),DAT_EXTMEM_7ea9 + 0x83)
           = *(undefined1 *)
              CONCAT11(-0x36 - (((0x7c < DAT_EXTMEM_7ea9) << 7) >> 7),DAT_EXTMEM_7ea9 + 0x83);
    }
  }
  if (cCODE00ab < '\0') {
    BANK0_R4 = BANK0_R4 & 0x7f;
    *(undefined1 *)CONCAT11(-0x36 - (((0x7c < DAT_EXTMEM_7ea9) << 7) >> 7),DAT_EXTMEM_7ea9 + 0x83) =
         *(undefined1 *)
          CONCAT11(-0x36 - (((0x7c < DAT_EXTMEM_7ea9) << 7) >> 7),DAT_EXTMEM_7ea9 + 0x83);
  }
  if ((0xb < DAT_EXTMEM_7ea9) && ((DAT_EXTMEM_caa3 >> 2 & 1) != 0)) {
    uEXTMEMca85 = uEXTMEMca25;
  }
  if ((0xc < DAT_EXTMEM_7ea9) && ((DAT_EXTMEM_caa3 >> 1 & 1) != 0)) {
    uEXTMEMca84 = DAT_EXTMEM_ca24;
  }
  if ((DAT_EXTMEM_7ea9 < 0xe) << 7 < '\0') {
    return;
  }
  if ((DAT_EXTMEM_caa3 & 1) != 0) {
    if ((DAT_EXTMEM_7faf == '\0') || ((bCODE00a8 & 0x80) == 0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      bVar1 = true;
      goto LAB_CODE_21fc;
    }
  }
  bVar1 = false;
LAB_CODE_21fc:
  if (bVar1) {
    uEXTMEMca83 = DAT_EXTMEM_ca23;
  }
  return;
}



/* =========================================================
 * CODE:2020  FUN_CODE_2020  size=497
 * ========================================================= */

void FUN_CODE_2020(void)

{
  bool bVar1;
  char cVar2;
  
  BANK0_R2 = BANK0_R2 & 0x7f;
  if (*(byte *)CONCAT11(-0x36 - (((0x7c < DAT_EXTMEM_7ea9) << 7) >> 7),DAT_EXTMEM_7ea9 + 0x83) < 2)
  {
    *(undefined1 *)CONCAT11(-0x36 - (((0x7c < DAT_EXTMEM_7ea9) << 7) >> 7),DAT_EXTMEM_7ea9 + 0x83) =
         *(undefined1 *)
          CONCAT11(-0x36 - (((0x7c < DAT_EXTMEM_7ea9) << 7) >> 7),DAT_EXTMEM_7ea9 + 0x83);
    BANK0_R4 = BANK0_R4 & 0x80 | 2;
    *(undefined1 *)CONCAT11(-0x36 - (((0x7c < DAT_EXTMEM_7ea9) << 7) >> 7),DAT_EXTMEM_7ea9 + 0x83) =
         *(undefined1 *)
          CONCAT11(-0x36 - (((0x7c < DAT_EXTMEM_7ea9) << 7) >> 7),DAT_EXTMEM_7ea9 + 0x83);
  }
  else {
    cVar2 = -0x36 - (((0x7c < DAT_EXTMEM_7ea9) << 7) >> 7);
    *(char *)CONCAT11(cVar2,DAT_EXTMEM_7ea9 + 0x83) =
         *(char *)CONCAT11(cVar2,DAT_EXTMEM_7ea9 + 0x83) + '\x01';
    if (4 < BANK0_R2) {
      *(undefined1 *)CONCAT11(-0x36 - (((0x7c < DAT_EXTMEM_7ea9) << 7) >> 7),DAT_EXTMEM_7ea9 + 0x83)
           = *(undefined1 *)
              CONCAT11(-0x36 - (((0x7c < DAT_EXTMEM_7ea9) << 7) >> 7),DAT_EXTMEM_7ea9 + 0x83);
      BANK0_R4 = BANK0_R4 & 0x80 | 4;
      *(undefined1 *)CONCAT11(-0x36 - (((0x7c < DAT_EXTMEM_7ea9) << 7) >> 7),DAT_EXTMEM_7ea9 + 0x83)
           = *(undefined1 *)
              CONCAT11(-0x36 - (((0x7c < DAT_EXTMEM_7ea9) << 7) >> 7),DAT_EXTMEM_7ea9 + 0x83);
    }
  }
  if (cCODE00ab < '\0') {
    BANK0_R4 = BANK0_R4 & 0x7f;
    *(undefined1 *)CONCAT11(-0x36 - (((0x7c < DAT_EXTMEM_7ea9) << 7) >> 7),DAT_EXTMEM_7ea9 + 0x83) =
         *(undefined1 *)
          CONCAT11(-0x36 - (((0x7c < DAT_EXTMEM_7ea9) << 7) >> 7),DAT_EXTMEM_7ea9 + 0x83);
  }
  if ((0xb < DAT_EXTMEM_7ea9) && ((DAT_EXTMEM_caa3 >> 2 & 1) != 0)) {
    uEXTMEMca85 = uEXTMEMca25;
  }
  if ((0xc < DAT_EXTMEM_7ea9) && ((DAT_EXTMEM_caa3 >> 1 & 1) != 0)) {
    uEXTMEMca84 = DAT_EXTMEM_ca24;
  }
  if ((DAT_EXTMEM_7ea9 < 0xe) << 7 < '\0') {
    return;
  }
  if ((DAT_EXTMEM_caa3 & 1) != 0) {
    if ((DAT_EXTMEM_7faf == '\0') || ((bCODE00a8 & 0x80) == 0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      bVar1 = true;
      goto LAB_CODE_21fc;
    }
  }
  bVar1 = false;
LAB_CODE_21fc:
  if (bVar1) {
    uEXTMEMca83 = DAT_EXTMEM_ca23;
  }
  return;
}



/* =========================================================
 * CODE:2211  FUN_CODE_2211  size=49
 * callers: CODE:4401, CODE:2878, CODE:3b65, CODE:484b, CODE:616b
 * ========================================================= */

void FUN_CODE_2211(char param_1)

{
  if (DAT_EXTMEM_7fb7 == '\0') {
    uEXTMEMca0b = 1;
    BANK0_R3 = BANK0_R3 | 1;
  }
  DAT_EXTMEM_7fb7 = 1;
  DAT_EXTMEM_7ff4 = 0;
  if (param_1 != '\0') {
    DAT_EXTMEM_7f79 = 1;
  }
  return;
}



/* =========================================================
 * CODE:2242  FUN_CODE_2242  size=44
 * callers: CODE:270e, CODE:3b65, CODE:3a8d, CODE:4046, CODE:233d, CODE:4868
 * ========================================================= */

void FUN_CODE_2242(void)

{
  if (DAT_EXTMEM_7f84 == '\0') {
    BANK0_R2 = BANK0_R2 & 0xfc;
  }
  BANK0_R2 = BANK0_R2 | 8;
  return;
}



/* =========================================================
 * CODE:226e  FUN_CODE_226e  size=16
 * callers: CODE:3b65, CODE:5fd1, CODE:6161, CODE:4159, CODE:4868
 * ========================================================= */

void FUN_CODE_226e(void)

{
  DAT_EXTMEM_d868 = 5;
  if ((bCODE00a7 >> 3 & 1) != 0) {
    return;
  }
  if ((DAT_EXTMEM_7ffc == '\0') || (DAT_EXTMEM_7f84 != '\0')) {
    BANK0_R2 = BANK0_R2 & 0xf7;
  }
  else if ((bEXTMEMd208 >> 2 & 1) != 0) {
    if (DAT_EXTMEM_7ff1 != '\0') {
      BANK0_R2 = BANK0_R2 & 0xfe | 2;
      return;
    }
    BANK0_R2 = BANK0_R2 & 0xfd | 1;
    return;
  }
  return;
}



/* =========================================================
 * CODE:227e  FUN_CODE_227e  size=53
 * ========================================================= */

void FUN_CODE_227e(void)

{
  if ((DAT_EXTMEM_7ffc == '\0') || (DAT_EXTMEM_7f84 != '\0')) {
    BANK0_R2 = BANK0_R2 & 0xf7;
  }
  else if ((bEXTMEMd208 >> 2 & 1) != 0) {
    if (DAT_EXTMEM_7ff1 != '\0') {
      BANK0_R2 = BANK0_R2 & 0xfe | 2;
      return;
    }
    BANK0_R2 = BANK0_R2 & 0xfd | 1;
    return;
  }
  return;
}



/* =========================================================
 * CODE:22b3  FUN_CODE_22b3  size=24
 * ========================================================= */

void FUN_CODE_22b3(void)

{
  BANK0_R2 = BANK0_R2 & 0xfd | 1;
  return;
}



/* =========================================================
 * CODE:22cb  FUN_CODE_22cb  size=14
 * ========================================================= */

void FUN_CODE_22cb(void)

{
  BANK0_R2 = BANK0_R2 & 0xf7;
  return;
}



/* =========================================================
 * CODE:22d9  FUN_CODE_22d9  size=21
 * callers: CODE:4868
 * ========================================================= */

void FUN_CODE_22d9(char param_1)

{
  if (param_1 == '\0') {
    return;
  }
  if (param_1 == '\x01') {
    FUN_CODE_22ee();
    return;
  }
  if (param_1 == '\x02') {
    FUN_CODE_22f2();
    return;
  }
  return;
}



/* =========================================================
 * CODE:22ee  FUN_CODE_22ee  size=4
 * callers: CODE:22d9
 * ========================================================= */

void FUN_CODE_22ee(void)

{
  return;
}



/* =========================================================
 * CODE:22f2  FUN_CODE_22f2  size=4
 * callers: CODE:22d9
 * ========================================================= */

void FUN_CODE_22f2(void)

{
  return;
}



/* =========================================================
 * CODE:22f6  FUN_CODE_22f6  size=4
 * ========================================================= */

void FUN_CODE_22f6(void)

{
  return;
}



/* =========================================================
 * CODE:22fa  FUN_CODE_22fa  size=67
 * callers: CODE:2878
 * ========================================================= */

void FUN_CODE_22fa(char param_1)

{
  byte bVar1;
  
  if (param_1 == '\0') {
    bVar1 = 0x11;
  }
  else if (param_1 == '\x01') {
    bVar1 = 0x12;
  }
  else {
    bVar1 = 0x12;
  }
  BANK0_R3 = BANK0_R3 & 0xf;
  if ((2 < BANK0_R3) && (bVar1 < 0x12)) {
    DAT_EXTMEM_7ead = 0xff;
    bVar1 = 0x12;
  }
  if (bVar1 == 0x11) {
    DAT_EXTMEM_7eac = 0xff;
  }
  else {
    DAT_EXTMEM_7eac = 0;
  }
  return;
}



/* =========================================================
 * CODE:233d  FUN_CODE_233d  size=44
 * callers: CODE:3b65
 * ========================================================= */

void FUN_CODE_233d(void)

{
  if (DAT_EXTMEM_7ffb == '\0') {
    BANK1_R2 = DAT_EXTMEM_7f7e;
    BANK1_R3 = DAT_EXTMEM_7f7d;
    BANK1_R4 = DAT_EXTMEM_7f7c;
    BANK1_R5 = 0;
    FUN_CODE_26be(0x7f0e,0);
    DAT_EXTMEM_7ffb = 1;
    FUN_CODE_2242();
    return;
  }
  return;
}



/* =========================================================
 * CODE:2369  FUN_CODE_2369  size=28
 * callers: CODE:07f4, CODE:4868
 * ========================================================= */

void FUN_CODE_2369(void)

{
  if ((bEXTMEMcc07 & 1) != 0) {
    BANK0_R2 = BANK0_R2 | 8;
    FUN_CODE_270e();
    return;
  }
  return;
}



/* =========================================================
 * CODE:2385  FUN_CODE_2385  size=4
 * ========================================================= */

void FUN_CODE_2385(void)

{
  return;
}



/* =========================================================
 * CODE:2389  FUN_CODE_2389  size=89
 * callers: CODE:4868
 * ========================================================= */

void FUN_CODE_2389(char param_1)

{
  byte bVar1;
  
  if ((param_1 != '\0') || (cEXTMEMcc94 != '\0')) {
    if ((DAT_EXTMEM_c850 >> 1 & 1) == 0) {
      if (((DAT_EXTMEM_c808 >> 2 & 1) == 0) || ((bCODE00a8 >> 5 & 1) != 0)) {
        while (DAT_EXTMEM_cc0b < DAT_INTMEM_50) {
          if (cEXTMEMcc94 != '\0') {
            return;
          }
        }
      }
      else {
        for (bVar1 = 0; bVar1 < 10; bVar1 = bVar1 + 1) {
          DAT_EXTMEM_cc0b = 0;
          do {
            if (DAT_INTMEM_50 == 0) break;
          } while (cEXTMEMcc94 == '\0');
        }
      }
    }
    else {
      do {
        DAT_EXTMEM_7fed = DAT_EXTMEM_cc0b;
      } while (bEXTMEMcc0a < BANK0_R3);
    }
  }
  return;
}



/* =========================================================
 * CODE:23e2  FUN_CODE_23e2  size=32
 * ========================================================= */

void FUN_CODE_23e2(void)

{
  byte bVar1;
  
  bVar1 = 0;
  do {
    if (9 < bVar1) {
      return;
    }
    DAT_EXTMEM_cc0b = 0;
    do {
      if (DAT_INTMEM_50 == '\0') break;
    } while (cEXTMEMcc94 == '\0');
    bVar1 = bVar1 + 1;
  } while( true );
}



/* =========================================================
 * CODE:2402  FUN_CODE_2402  size=700
 * callers: CODE:586a
 * ========================================================= */

void FUN_CODE_2402(void)

{
  undefined1 uVar1;
  
  if ((DAT_EXTMEM_7f84 == '\0') || (DAT_EXTMEM_7ffc == '\0')) {
    cEXTMEM7fad = '\0';
  }
  else {
    cEXTMEM7fad = '\x01';
  }
  if ((BANK1_R0 & 1) != 0) {
    if (cEXTMEM7fad == '\0') {
      BANK0_R2 = BANK0_R2 & 0xf;
      if (DAT_EXTMEM_d25c < 2) {
        if (0x11 < BANK0_R2) {
          DAT_INTMEM_50 = 0x20;
          DAT_INTMEM_51 = 0x1c;
          FUN_CODE_044f(0xca00,bEXTMEMca83);
          bEXTMEMca83 = 0x11;
        }
        DAT_EXTMEM_7eac = 0xff;
      }
    }
    else {
      DAT_INTMEM_50 = 0x20;
      DAT_INTMEM_51 = 0x1c;
      FUN_CODE_044f(0x7f00,cEXTMEM7fad);
      if (bEXTMEMca83 < 0x12) {
        DAT_EXTMEM_7ead = 0xff;
      }
      bEXTMEMca83 = 0x12;
    }
  }
  if ((BANK1_R0 >> 1 & 1) == 1) {
    cEXTMEM7fac = ((BANK1_R0 & 8) >> 3) + 0x83;
    if ((bCODE00ab & 7) == 0) {
      if (cEXTMEM7fad == '\0') {
        if (10 < BANK0_R2) {
          DAT_INTMEM_50 = 0x20;
          DAT_INTMEM_51 = 0x1c;
          FUN_CODE_044f(0xca00,*(undefined1 *)CONCAT11(0xca,cEXTMEM7fac),0);
          *(undefined1 *)CONCAT11(0xca,cEXTMEM7fac) = 10;
        }
      }
      else if (0x14 < BANK0_R2) {
        DAT_INTMEM_50 = 0x20;
        DAT_INTMEM_51 = 0x1c;
        FUN_CODE_044f(0xca00,*(undefined1 *)CONCAT11(0xca,cEXTMEM7fac),0);
        *(undefined1 *)CONCAT11(0xca,cEXTMEM7fac) = 0x14;
      }
    }
    else if ((bCODE00ab & 1) == 0) {
      if ((bCODE00ab >> 1 & 1) == 0) {
        *(undefined1 *)CONCAT11(0xca,cEXTMEM7fac) = 6;
      }
      else {
        *(undefined1 *)CONCAT11(0xca,cEXTMEM7fac) = 10;
      }
    }
    else {
      *(undefined1 *)CONCAT11(0xca,cEXTMEM7fac) = 0x14;
    }
  }
  if ((BANK1_R0 >> 2 & 1) == 1) {
    uVar1 = 0;
    cEXTMEM7fac = ((BANK1_R0 & 0x30) >> 4) + 0x83;
    if ((bCODE00ab & 0x18) == 0) {
      if (DAT_EXTMEM_7fe7 == '\0') {
        BANK0_R2 = BANK0_R2 & 0x1f;
        if (4 < BANK0_R2) {
          DAT_INTMEM_50 = 0x20;
          DAT_INTMEM_51 = 0x1c;
          FUN_CODE_044f(0xca00,*(undefined1 *)CONCAT11(0xca,cEXTMEM7fac),0);
          uVar1 = 0xca;
          *(byte *)CONCAT11(0xca,cEXTMEM7fac) = *(byte *)CONCAT11(0xca,cEXTMEM7fac) & 0xe0 | 4;
        }
      }
      else {
        DAT_INTMEM_50 = 0x20;
        DAT_INTMEM_51 = 0x1c;
        FUN_CODE_044f(0x7f00,DAT_EXTMEM_7fe7,0);
        DAT_EXTMEM_7fed = *(byte *)CONCAT11(0xca,cEXTMEM7fac) & 0x1f;
        if (2 < BANK0_R2) {
          DAT_EXTMEM_7fed = 2;
        }
        uVar1 = 0xca;
        BANK0_R4 = BANK0_R4 & 0xe0 | DAT_EXTMEM_7fed;
        *(undefined1 *)CONCAT11(0xca,cEXTMEM7fac) = *(undefined1 *)CONCAT11(0xca,cEXTMEM7fac);
      }
    }
    else if ((bCODE00ab >> 3 & 1) == 0) {
      uVar1 = 0xca;
      *(byte *)CONCAT11(0xca,cEXTMEM7fac) = *(byte *)CONCAT11(0xca,cEXTMEM7fac) & 0xe0 | 1;
    }
    else {
      uVar1 = 0xca;
      *(byte *)CONCAT11(0xca,cEXTMEM7fac) = *(byte *)CONCAT11(0xca,cEXTMEM7fac) & 0xe0 | 2;
    }
    if (cEXTMEM7fad == '\0') {
      DAT_INTMEM_50 = 0x20;
      DAT_INTMEM_51 = 0x1c;
      FUN_CODE_044f(0x7f00,0,uVar1);
      BANK0_R4 = BANK0_R4 & 0xbf;
      *(undefined1 *)CONCAT11(0xca,cEXTMEM7fac) = *(undefined1 *)CONCAT11(0xca,cEXTMEM7fac);
    }
  }
  if ((BANK1_R0 >> 6 & 1) != 0) {
    cEXTMEM7fac = ((BANK1_R1 & 1) << 1 | BANK1_R0 >> 7) + 0x83;
    BANK0_R4 = BANK0_R4 & 0x7f;
    *(undefined1 *)CONCAT11(0xca,cEXTMEM7fac) = *(undefined1 *)CONCAT11(0xca,cEXTMEM7fac);
  }
  return;
}



/* =========================================================
 * CODE:26be  FUN_CODE_26be  size=80
 * callers: CODE:2878, CODE:586a, CODE:3b65, CODE:3a8d, CODE:4046, CODE:233d, CODE:616b, CODE:4868, CODE:3936
 * ========================================================= */

void FUN_CODE_26be(char param_1)

{
  undefined1 uVar1;
  
  uVar1 = BANK0_R2;
  if (param_1 == '\x01') {
    DAT_EXTMEM_7eab = BANK1_R2 != 0;
    if (BANK1_R2 == 0) {
      DAT_INTMEM_51 = 0x67;
    }
    else {
      DAT_INTMEM_51 = 0x66;
    }
    DAT_INTMEM_50 = 1;
    FUN_CODE_044f(0x7e00,0);
  }
  bEXTMEMcc31 = BANK1_R3 | BANK1_R2 | BANK1_R4;
  cEXTMEMcc32 = param_1;
  uEXTMEMcc33 = BANK1_R5;
  uEXTMEMcc30 = 1;
  BANK0_R2 = uVar1;
  return;
}



/* =========================================================
 * CODE:270e  FUN_CODE_270e  size=274
 * callers: CODE:586a, CODE:2369, CODE:60c7, CODE:6051, CODE:4046, CODE:41e1, CODE:616b, CODE:07ff, CODE:4868
 * ========================================================= */

void FUN_CODE_270e(void)

{
  byte bVar1;
  char cVar2;
  
  FUN_CODE_2242();
  if ((DAT_EXTMEM_7f84 == '\0') && ((DAT_EXTMEM_d25c & 0xf) == 0)) {
    BANK0_R2 = BANK0_R2 & 0xdf;
  }
  DAT_EXTMEM_7fa2 = 0;
  DAT_EXTMEM_cc97 = 0;
  DAT_EXTMEM_c804 = 0x80;
  DAT_EXTMEM_7f93 = 0xe7;
  DAT_EXTMEM_7f88 = DAT_EXTMEM_7f88 | 0x80;
  DAT_EXTMEM_7f8d = 0;
  DAT_EXTMEM_7ff9 = 0;
  uEXTMEMc870 = 0;
  uEXTMEMc871 = 0;
  uEXTMEMd802 = DAT_EXTMEM_7f7d == 0;
  if ((bool)uEXTMEMd802) {
    uEXTMEMd802 = false;
  }
  else if (DAT_EXTMEM_7f7d == 8) {
    BANK0_R2 = 1;
  }
  else {
    BANK0_R2 = 2;
  }
  FUN_CODE_0cfa(0xd800);
  for (bVar1 = 0; bVar1 < 4; bVar1 = bVar1 + 1) {
    DAT_EXTMEM_7fed = (bVar1 & 0xf) << 3 | (bVar1 >> 4) << 7;
    BANK0_R3 = BANK0_R3 & 0xe7 | DAT_EXTMEM_7f7d | 0x80;
    *(undefined1 *)CONCAT11(-0x32 - (((0xf9 < DAT_EXTMEM_7fed) << 7) >> 7),DAT_EXTMEM_7fed + 6) =
         *(undefined1 *)CONCAT11(-0x32 - (((0xf9 < DAT_EXTMEM_7fed) << 7) >> 7),DAT_EXTMEM_7fed + 6)
    ;
  }
  if ((DAT_EXTMEM_7f84 == '\0') && ((DAT_EXTMEM_d200 >> 5 & 1) != 0)) {
    BANK0_R2 = BANK0_R2 & 0xdf | 0x20;
  }
  uEXTMEMcc00 = 1;
  uEXTMEMd80b = 0;
  uEXTMEMd80a = 0;
  DAT_EXTMEM_d804 = 0;
  cVar2 = '<';
  do {
    cVar2 = cVar2 + -1;
  } while (cVar2 != '\0');
  return;
}



/* =========================================================
 * CODE:2820  FUN_CODE_2820  size=88
 * callers: CODE:3a8d, CODE:4868, CODE:3936
 * ========================================================= */

void FUN_CODE_2820(char param_1)

{
  char cVar1;
  char cVar2;
  
  DAT_EXTMEM_7fed = param_1;
  if (param_1 == '\0') {
    cVar1 = DAT_EXTMEM_7f7e + '\x01';
    cVar2 = '\x01';
    while (cVar1 = cVar1 + -1, cVar1 != '\0') {
      cVar2 = cVar2 * '\x02';
    }
    DAT_EXTMEM_7fed = cVar2 + -1;
  }
  DAT_EXTMEM_d804 = DAT_EXTMEM_7fed;
  DAT_EXTMEM_d815 = DAT_EXTMEM_7fed;
  cEXTMEMd80a = DAT_EXTMEM_7fed;
  BANK0_R2 = BANK0_R2 & 0xf;
  cEXTMEMd80b = DAT_EXTMEM_7fed;
  return;
}



/* =========================================================
 * CODE:2878  FUN_CODE_2878  size=3093
 * callers: CODE:4819
 * ========================================================= */

void FUN_CODE_2878(char param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  byte *pbVar7;
  ushort uVar5;
  short sVar6;
  
  BANK2_R6 = 0;
  BANK2_R7 = 0;
  BANK3_R2 = 0;
  DAT_INTMEM_27 = 0;
  DAT_INTMEM_28 = 8;
  DAT_INTMEM_29 = 1;
  DAT_INTMEM_2a = 0;
  DAT_INTMEM_2b = 7;
  DAT_INTMEM_2c = 0;
  DAT_INTMEM_2d = 4;
  DAT_INTMEM_2e = 0x40;
  DAT_INTMEM_2f = 0x44;
  DAT_EXTMEM_7ffb = '\0';
  if (param_1 != '\t') {
    FUN_CODE_34b1();
    return;
  }
  DAT_INTMEM_23 = 0;
  DAT_INTMEM_24 = 0;
  DAT_INTMEM_25 = 0;
  DAT_INTMEM_26 = 0;
  if (DAT_EXTMEM_ca61 != '\x0f') {
    DAT_INTMEM_3a = BANK2_R0 == '\x0e';
    DAT_INTMEM_36 = BANK2_R0 == '\x0f';
    DAT_INTMEM_34 = BANK2_R1;
    DAT_INTMEM_35 = BANK2_R2;
    for (BANK2_R4 = 0; (BANK2_R4 < BANK2_R3) << 7 < '\0'; BANK2_R4 = BANK2_R4 + 1) {
      bVar2 = 0xca;
      if ((DAT_EXTMEM_ca40 >> 4 & 1) != 0) {
        FUN_CODE_41f1(DAT_EXTMEM_ca40);
        DAT_EXTMEM_ca0e = 1;
        DAT_EXTMEM_7f78 = 0;
        bVar2 = 0x7f;
        DAT_EXTMEM_7f77 = 1;
      }
      BANK1_R6 = '\x01';
      BANK3_R0 = 0;
      BANK2_R5 = (byte *)0x0;
      if (BANK2_R0 == '\0') {
        if (DAT_INTMEM_34 == '\0') {
LAB_CODE_2960:
          if ((DAT_INTMEM_34 == '\"') &&
             ((bVar2 = 0, (char)bCODE00ab < '\0' ||
              ((DAT_INTMEM_35 == 0 && (bVar2 = 0, (char)bCODE00a8 < '\0')))))) {
            BANK1_R6 = '\0';
          }
          else if (DAT_INTMEM_35 == 0) {
            pbVar7 = (byte *)(DAT_EXTMEM_d25c >> 4);
            FUN_CODE_22fa();
            BANK2_R5 = pbVar7;
          }
          else if (DAT_INTMEM_35 == 1) {
            if (((byte)DAT_EXTMEM_c80b & 0x1f) == 0) {
              if (DAT_EXTMEM_7f7f == '\x10') {
                BANK2_R5 = &BANK2_R4;
              }
              else if (DAT_EXTMEM_7f7f == '\b') {
                DAT_INTMEM_37 = &BANK1_R2;
                BANK2_R5 = DAT_INTMEM_37;
              }
              else {
                DAT_INTMEM_37 = &BANK0_R6;
                BANK2_R5 = DAT_INTMEM_37;
              }
            }
            else {
              BANK2_R5 = DAT_EXTMEM_c80b;
            }
          }
          else if (DAT_INTMEM_35 == 2) {
            cVar1 = ((DAT_EXTMEM_d25d & 0x70) >> 4) + 1;
            bVar2 = 1;
            while (cVar1 = cVar1 + -1, cVar1 != '\0') {
              bVar2 = bVar2 * '\x02';
            }
            bVar3 = DAT_EXTMEM_d25e & 0xc0;
            BANK2_R5 = (byte *)(bVar2 | bVar3);
            if ((bCODE00ab & 0x18) == 0) {
              if (DAT_EXTMEM_7fe7 != '\0') {
                DAT_EXTMEM_7fed = bVar2 & 0x1f;
                if (2 < BANK0_R7) {
                  DAT_EXTMEM_7fed = 2;
                }
                BANK2_R5 = (byte *)(DAT_EXTMEM_7fed | bVar2 & 0xe0 | bVar3);
              }
            }
            else if ((bCODE00ab >> 3 & 1) == 0) {
              BANK2_R5 = (byte *)(bVar2 & 0xe0 | bVar3 | 1);
            }
            else {
              BANK2_R5 = (byte *)(bVar2 & 0xe0 | bVar3 | 2);
            }
          }
          else if (DAT_INTMEM_35 == 3) {
            BANK2_R5 = (byte *)0x0;
          }
          else if (DAT_INTMEM_35 == 0xe) {
            if ((bCODE00a8 >> 6 & 1) == 0) {
              if ((bCODE00a8 & 1) == 0) {
                if ((bCODE00a8 >> 1 & 1) == 0) {
                  if ((bCODE00a8 >> 2 & 1) == 0) {
                    if ((bCODE00a8 >> 3 & 1) == 0) {
                      DAT_INTMEM_39 = (byte *)0x0;
                    }
                    else {
                      DAT_INTMEM_39 = &BANK0_R4;
                    }
                    DAT_INTMEM_38 = DAT_INTMEM_39;
                  }
                  else {
                    DAT_INTMEM_38 = &BANK0_R3;
                  }
                  DAT_INTMEM_37 = DAT_INTMEM_38;
                  BANK2_R5 = DAT_INTMEM_37;
                }
                else {
                  DAT_INTMEM_37 = &BANK0_R2;
                  BANK2_R5 = DAT_INTMEM_37;
                }
              }
              else {
                BANK2_R5 = &BANK0_R1;
              }
            }
            else {
              FUN_CODE_2211(1,bCODE00a8);
              DAT_EXTMEM_7ea9 = BANK2_R4;
              DAT_EXTMEM_7fee = DAT_EXTMEM_7fee | 4;
            }
            BANK0_R7 = BANK0_R7 | 2;
          }
          else if (DAT_INTMEM_35 == 0x57) {
            DAT_INTMEM_50 = 0x20;
            DAT_INTMEM_51 = 0x31;
            FUN_CODE_044f((ushort)bVar2 << 8);
            DAT_EXTMEM_cad0 = 1;
            FUN_CODE_2211(0xca01);
            DAT_EXTMEM_7f7a = 1;
            BANK2_R5 = (byte *)0x0;
            BANK3_R0 = 0x1e;
            do {
              BANK3_R0 = BANK3_R0 - 1;
            } while (BANK3_R0 != 0);
          }
          else if (DAT_INTMEM_35 == 0x20) {
            FUN_CODE_2211(CONCAT11(bVar2,1));
            DAT_EXTMEM_7fef = BANK2_R4;
            DAT_EXTMEM_7fee = DAT_EXTMEM_7fee | 1;
          }
          else if (DAT_INTMEM_35 == 0x21) {
            if (DAT_EXTMEM_7f79 == '\0') {
              FUN_CODE_2211(0x7f01,0);
            }
            if (DAT_EXTMEM_7f84 == '\0') {
              DAT_EXTMEM_7fee = DAT_EXTMEM_7fee | 2;
              DAT_EXTMEM_7ff0 = BANK2_R4;
            }
          }
          else {
            BANK1_R6 = '\0';
          }
        }
        else if (DAT_INTMEM_34 == '\x01') {
          if (DAT_INTMEM_35 == 0) {
            if (DAT_EXTMEM_7f7d == '\x10') {
              BANK2_R5 = &BANK2_R4;
            }
            else if (DAT_EXTMEM_7f7d == '\b') {
              DAT_INTMEM_39 = &BANK1_R2;
              BANK2_R5 = DAT_INTMEM_39;
            }
            else {
              DAT_INTMEM_39 = &BANK0_R6;
              BANK2_R5 = DAT_INTMEM_39;
            }
          }
          else if (DAT_INTMEM_35 == 1) {
            BANK2_R5 = (byte *)(DAT_EXTMEM_7f7e | (DAT_EXTMEM_7f7c & 0x20) * '\x04');
          }
          else if (DAT_INTMEM_35 == 2) {
            BANK2_R5 = DAT_EXTMEM_7f86;
          }
          else {
            if (DAT_INTMEM_35 != 3) {
              if (DAT_INTMEM_35 != 4) {
                if (DAT_INTMEM_35 != 5) {
                  if (DAT_INTMEM_35 != 6) {
                    if (DAT_INTMEM_35 == 7) {
                      BANK2_R5 = DAT_EXTMEM_7f8a;
                    }
                    else if (DAT_INTMEM_35 == 8) {
                      BANK2_R5 = DAT_EXTMEM_7f99;
                    }
                    else if ((((DAT_INTMEM_35 == 0xb) || (DAT_INTMEM_35 == 0xc)) ||
                             (DAT_INTMEM_35 == 0xd)) || (DAT_INTMEM_35 == 0xe)) {
                      DAT_INTMEM_50 = 0x20;
                      DAT_INTMEM_51 = 0x3a;
                      FUN_CODE_044f((ushort)bVar2 << 8);
                      FUN_CODE_2211(1);
                    }
                    else if ((DAT_INTMEM_35 == 0xf) || (DAT_INTMEM_35 == 0x10)) {
                      DAT_INTMEM_50 = 0x20;
                      DAT_INTMEM_51 = 0x3b;
                      FUN_CODE_044f((ushort)bVar2 << 8);
                      BANK2_R5 = (byte *)0x0;
                    }
                    else if (DAT_INTMEM_35 == 0x11) {
                      DAT_INTMEM_50 = 0x20;
                      DAT_INTMEM_51 = 0x34;
                      FUN_CODE_044f((ushort)bVar2 << 8);
                      FUN_CODE_2211(1);
                    }
                    else if (DAT_INTMEM_35 == 0x57) {
                      DAT_INTMEM_50 = 0x20;
                      DAT_INTMEM_51 = 0x31;
                      FUN_CODE_044f((ushort)bVar2 << 8);
                      DAT_EXTMEM_cad0 = 1;
                      FUN_CODE_2211(0xca01);
                      DAT_EXTMEM_7f7a = 1;
                      BANK2_R5 = (byte *)0x0;
                      BANK3_R0 = 0x1e;
                      do {
                        BANK3_R0 = BANK3_R0 - 1;
                      } while (BANK3_R0 != 0);
                    }
                    else {
                      BANK1_R6 = '\0';
                    }
                    goto LAB_CODE_344e;
                  }
                  BANK3_R0 = 1;
                }
                BANK3_R0 = BANK3_R0 + 1;
              }
              BANK3_R0 = BANK3_R0 + 1;
            }
            BANK2_R5 = *(byte **)CONCAT11('\x7f' - (((0x7f < BANK3_R0) << 7) >> 7),BANK3_R0 + 0x80);
          }
        }
        else if (DAT_INTMEM_34 == '\x02') {
          if (DAT_INTMEM_35 == 2) {
LAB_CODE_2d6b:
            DAT_INTMEM_50 = 4;
            DAT_INTMEM_51 = 0x16;
            FUN_CODE_044f((ushort)bVar2 << 8);
            DAT_EXTMEM_7fa8 = '\0';
            DAT_EXTMEM_7fa9 = DAT_EXTMEM_7faa < 4 & DAT_EXTMEM_7fab;
            if (((DAT_EXTMEM_7fb5 == '\0') && (DAT_EXTMEM_7fb4 == '\0')) && (DAT_EXTMEM_7fa9 == 0))
            {
              if (DAT_EXTMEM_7fa2 == '\x03') {
                if (DAT_EXTMEM_7ffa == '\0') {
                  BANK2_R5 = (byte *)0x0;
                }
                else {
                  BANK2_R5 = (byte *)&BANK2_R1;
                }
              }
              else if (DAT_EXTMEM_7fa2 == '\x04') {
                DAT_EXTMEM_7fe2 = (DAT_EXTMEM_c84a & 0xc) >> 2;
                uVar5 = 0x7fe2;
                bVar2 = DAT_EXTMEM_7f9e;
                if ((DAT_EXTMEM_7f9e < BANK0_R2) ||
                   (uVar5 = 0x7f9f, bVar2 = DAT_EXTMEM_7f9f, DAT_EXTMEM_7f9f != 0)) {
                  DAT_INTMEM_50 = 4;
                  DAT_INTMEM_51 = 0x17;
                  FUN_CODE_044f(uVar5 & 0xff00,DAT_EXTMEM_7fe2,bVar2);
                  if (DAT_EXTMEM_7f9f == 0) {
                    DAT_EXTMEM_7f9e = DAT_EXTMEM_7f9e + 1;
                  }
                  DAT_EXTMEM_7f9f = 1;
                  DAT_EXTMEM_7fa0 = 1;
                }
                else {
                  DAT_INTMEM_30 = DAT_EXTMEM_d80d & 0xf;
                  DAT_EXTMEM_7fe2 = ~((byte)DAT_EXTMEM_d804 & 0xf) | DAT_INTMEM_30;
                  DAT_INTMEM_31 = DAT_EXTMEM_7fe2 == 0xff;
                  if ((DAT_EXTMEM_7ffa == '\0') || (!(bool)DAT_INTMEM_31)) {
                    BANK2_R5 = (byte *)&BANK2_R1;
                  }
                  else {
                    BANK2_R5 = &DAT_INTMEM_33;
                  }
                }
              }
              else if (DAT_EXTMEM_7fa2 != '\0') {
                if (BANK3_R0 == 0) {
                  DAT_INTMEM_39 = DAT_EXTMEM_d804;
                  BANK2_R5 = (byte *)((DAT_EXTMEM_d80d & (byte)DAT_EXTMEM_d804 & 2) << 4 |
                                      (DAT_EXTMEM_d80d & (byte)DAT_EXTMEM_d804 & 1) * '\x02' | 0x11)
                  ;
                }
                else {
                  DAT_INTMEM_39 = DAT_EXTMEM_d804;
                  BANK2_R5 = (byte *)((DAT_EXTMEM_d80d & (byte)DAT_EXTMEM_d804 & 8) * '\x04' |
                                      (DAT_EXTMEM_d80d & (byte)DAT_EXTMEM_d804 & 4) >> 1 | 0x11);
                }
              }
            }
            else {
              DAT_EXTMEM_7fa8 = DAT_EXTMEM_7fa9 != 0;
              if ((bool)DAT_EXTMEM_7fa8) {
                DAT_EXTMEM_7faa = DAT_EXTMEM_7faa + 1;
              }
              BANK2_R5 = (byte *)&BANK2_R1;
            }
            DAT_EXTMEM_7ffa = '\x01';
            DAT_EXTMEM_7fe3 = DAT_EXTMEM_c606;
            if (DAT_EXTMEM_7fa8 == '\0') {
              cVar1 = BANK3_R0 + 1;
              bVar2 = DAT_EXTMEM_c606;
              while (cVar1 = cVar1 + -1, cVar1 != '\0') {
                bVar2 = bVar2 >> 1;
              }
              BANK2_R5 = (byte *)((byte)BANK2_R5 | *(byte *)((bVar2 & 3) + 0x2c));
            }
            if (DAT_EXTMEM_7f7e == 1) {
              BANK2_R5 = (byte *)((byte)BANK2_R5 & 0xf);
            }
          }
          else {
            if (DAT_INTMEM_35 != 3) {
              if (DAT_INTMEM_35 == 4) {
                DAT_INTMEM_50 = 4;
                DAT_INTMEM_51 = 0x19;
                FUN_CODE_044f((ushort)bVar2 << 8);
                DAT_EXTMEM_7fed = (byte)DAT_EXTMEM_d804 & 0xf;
                DAT_EXTMEM_7f8d =
                     ((DAT_EXTMEM_c606 >> 4 & 1) != 0 && DAT_EXTMEM_d80d == BANK0_R7) &
                     ~DAT_EXTMEM_7fa9;
                if (DAT_EXTMEM_7f8d != 0) {
                  DAT_EXTMEM_d868 = 3;
                  DAT_EXTMEM_c804 = 0x84;
                }
                BANK0_R2 = BANK0_R2 & 0xf & DAT_EXTMEM_7fed & 0xfe | DAT_EXTMEM_7f8d;
                BANK2_R5 = (byte *)(DAT_EXTMEM_7f89 | DAT_EXTMEM_7f88);
                if ((((byte *)((byte)DAT_EXTMEM_7f92 & 0x7f) != BANK2_R5) ||
                    (DAT_EXTMEM_7f9c != '\0')) || (DAT_EXTMEM_7f85 != '\0')) {
                  DAT_EXTMEM_7f85 = '\0';
                  BANK2_R5 = (byte *)((byte)BANK2_R5 | 0x80);
                }
                if (DAT_EXTMEM_7f9f == 0) {
                  DAT_EXTMEM_7f92 = BANK2_R5;
                }
                DAT_EXTMEM_7f88 = 0;
                DAT_EXTMEM_7f89 = 0;
              }
              else if (DAT_INTMEM_35 == 5) {
LAB_CODE_3095:
                if ((DAT_INTMEM_35 < 0x10) || (0x17 < DAT_INTMEM_35)) {
                  BANK1_R6 = '\0';
                }
                else {
                  BANK3_R0 = DAT_INTMEM_35 - 0x10;
                  DAT_EXTMEM_7fed = BANK3_R0 >> 1;
                  if (*(char *)(DAT_EXTMEM_7fed + 0x23) == '\0') {
                    DAT_INTMEM_32 = BANK3_R0 | 1;
                    DAT_INTMEM_33 = BANK3_R0 & 0xfe;
                    cVar1 = DAT_EXTMEM_7fed + 1;
                    DAT_EXTMEM_cc7d = '\x01';
                    while (cVar1 = cVar1 + -1, cVar1 != '\0') {
                      DAT_EXTMEM_cc7d = DAT_EXTMEM_cc7d * '\x02';
                    }
                    DAT_INTMEM_39 = (byte *)(DAT_INTMEM_33 + 0x1b);
                    DAT_INTMEM_3b = (byte *)(DAT_INTMEM_33 + 0x18);
                    DAT_INTMEM_3c = -0x33 - (((0xe7 < DAT_INTMEM_33) << 7) >> 7);
                    DAT_INTMEM_3d = 0;
                    uVar4 = FUN_CODE_67d0(CONCAT11(DAT_INTMEM_3c,DAT_INTMEM_3b),0,DAT_EXTMEM_7fed,
                                          DAT_EXTMEM_cc7d);
                    *DAT_INTMEM_39 = BANK0_R2;
                    DAT_INTMEM_3b = (byte *)(DAT_INTMEM_32 + 0x1b);
                    DAT_INTMEM_3e = DAT_INTMEM_32 + 0x18;
                    DAT_INTMEM_3f = -0x33 - (((0xe7 < DAT_INTMEM_32) << 7) >> 7);
                    DAT_INTMEM_40 = 0;
                    FUN_CODE_67d0(CONCAT11(DAT_INTMEM_3f,DAT_INTMEM_3e),0,uVar4);
                    *DAT_INTMEM_3b = BANK0_R2;
                    *(undefined1 *)(DAT_EXTMEM_7fed + 0x23) = 2;
                  }
                  BANK2_R5 = *(byte **)(BANK3_R0 + 0x1b);
                  *(char *)(DAT_EXTMEM_7fed + 0x23) = *(char *)(DAT_EXTMEM_7fed + 0x23) + -1;
                }
              }
              else {
                if (DAT_INTMEM_35 != 6) {
                  if (DAT_INTMEM_35 != 7) {
                    if (DAT_INTMEM_35 == 0xc) {
                      DAT_INTMEM_50 = 0x20;
                      DAT_INTMEM_51 = 0x3c;
                      FUN_CODE_044f((ushort)bVar2 << 8);
                      BANK2_R5 = (byte *)0x0;
                    }
                    else if ((DAT_INTMEM_35 == 0x4a) || (DAT_INTMEM_35 == 0x4b)) {
                      DAT_INTMEM_50 = 0x20;
                      DAT_INTMEM_51 = 0x33;
                      FUN_CODE_044f((ushort)bVar2 << 8);
                      if (DAT_EXTMEM_7ffb == '\0') {
                        BANK1_R2 = DAT_EXTMEM_7f7e;
                        BANK1_R3 = DAT_EXTMEM_7f7d;
                        BANK1_R4 = DAT_EXTMEM_7f7c;
                        BANK1_R5 = 1;
                        FUN_CODE_26be(0x7f0e,0);
                        DAT_EXTMEM_7f79 = '\x01';
                        DAT_EXTMEM_7ffb = '\x01';
                      }
                    }
                    else {
                      if (DAT_INTMEM_35 == 0x50) {
                        DAT_INTMEM_50 = 0x20;
                        DAT_INTMEM_51 = 0x35;
                        sVar6 = (ushort)bVar2 << 8;
                        FUN_CODE_044f(sVar6);
                        bVar2 = (byte)((ushort)sVar6 >> 8);
                      }
                      else if (((((DAT_INTMEM_35 != 0x51) && (DAT_INTMEM_35 != 0x52)) &&
                                (DAT_INTMEM_35 != 0x53)) &&
                               (((DAT_INTMEM_35 != 0x54 && (DAT_INTMEM_35 != 0x55)) &&
                                ((DAT_INTMEM_35 != 0x56 &&
                                 ((DAT_INTMEM_35 != 0x57 && (DAT_INTMEM_35 != 0x58)))))))) &&
                              (DAT_INTMEM_35 != 0x59)) goto LAB_CODE_3095;
                      DAT_INTMEM_50 = 0x20;
                      DAT_INTMEM_51 = 0x36;
                      FUN_CODE_044f((ushort)bVar2 << 8);
                      if (DAT_EXTMEM_7ffb == '\0') {
                        BANK1_R2 = DAT_EXTMEM_7f7e;
                        BANK1_R3 = DAT_EXTMEM_7f7d;
                        BANK1_R4 = DAT_EXTMEM_7f7c;
                        BANK1_R5 = 2;
                        FUN_CODE_26be(0x7f0e,0);
                        DAT_EXTMEM_7f79 = '\x01';
                        DAT_EXTMEM_7ffb = '\x01';
                      }
                    }
                    goto LAB_CODE_344e;
                  }
                  BANK3_R0 = 2;
                }
                DAT_INTMEM_50 = 0x20;
                DAT_INTMEM_51 = 0x1a;
                FUN_CODE_044f((ushort)bVar2 << 8);
                DAT_EXTMEM_7fe2 = BANK3_R0 >> 1;
                BANK2_R5 = *(byte **)CONCAT11('\x7f' - (((0x6b < DAT_EXTMEM_7fe2) << 7) >> 7),
                                              DAT_EXTMEM_7fe2 + 0x94);
                if (DAT_EXTMEM_7fa4 == '\0') {
                  if (DAT_EXTMEM_7f9c != '\0') {
                    DAT_EXTMEM_7f9c = '\0';
                    DAT_EXTMEM_7f9a = DAT_EXTMEM_7f9b;
                  }
                  if (((DAT_EXTMEM_c84a & 1) == 0) || (DAT_EXTMEM_7f8d == 0)) {
                    BANK2_R5 = DAT_EXTMEM_7f9a;
                  }
                  else {
                    BANK2_R5 = DAT_EXTMEM_7f90;
                  }
                }
                DAT_EXTMEM_7f9a = BANK2_R5;
                *(byte **)CONCAT11('\x7f' - (((0x6f < DAT_EXTMEM_7fe2) << 7) >> 7),
                                   DAT_EXTMEM_7fe2 + 0x90) = BANK2_R5;
                DAT_EXTMEM_7f9e = 0;
              }
              goto LAB_CODE_344e;
            }
            BANK3_R0 = 2;
            bVar2 = 0x7f;
            if (3 < DAT_EXTMEM_7f7e) goto LAB_CODE_2d6b;
          }
          bVar2 = BANK3_R0 >> 1;
          if ((*(byte **)CONCAT11('\x7f' - (((0x71 < bVar2) << 7) >> 7),bVar2 + 0x8e) != BANK2_R5)
             && (DAT_EXTMEM_7f9f == 0)) {
            *(byte **)CONCAT11('\x7f' - (((0x71 < bVar2) << 7) >> 7),bVar2 + 0x8e) = BANK2_R5;
            DAT_EXTMEM_7f88 = DAT_EXTMEM_7f88 | 0x80;
          }
        }
        else if ((DAT_INTMEM_34 == '\x03') || (DAT_INTMEM_34 == '\x04')) {
LAB_CODE_328d:
          BANK1_R6 = '\0';
        }
        else if (DAT_INTMEM_34 == '\x05') {
          if (DAT_INTMEM_35 == 0x10) {
            BANK2_R5 = DAT_EXTMEM_7f75;
          }
          else {
            BANK1_R6 = '\0';
          }
        }
        else if (DAT_INTMEM_34 == '\x06') {
          if (DAT_INTMEM_35 == 0) {
            BANK2_R5 = DAT_EXTMEM_7fa7;
            if (DAT_EXTMEM_7fa7 == &BANK0_R1) {
              BANK1_R2 = DAT_EXTMEM_7f7e;
              BANK1_R3 = DAT_EXTMEM_7f7d;
              BANK1_R4 = DAT_EXTMEM_7f7c;
              BANK1_R5 = 1;
              FUN_CODE_26be(0x7f08);
            }
          }
          else {
            BANK1_R6 = '\0';
          }
        }
        else {
          if (DAT_INTMEM_34 != ' ') {
            if (DAT_INTMEM_34 == '\"') goto LAB_CODE_2960;
            goto LAB_CODE_328d;
          }
          if ((DAT_INTMEM_35 == 2) &&
             (BANK0_R2 = BANK0_R2 & 0x20, (DAT_EXTMEM_7ead & bCODE00a7) != 0)) {
            DAT_INTMEM_50 = 0x20;
            DAT_INTMEM_51 = 0x54;
            FUN_CODE_044f(0x7e00,DAT_EXTMEM_7ead);
            BANK2_R5 = DAT_EXTMEM_0120;
          }
          else if ((DAT_INTMEM_35 < 3) ||
                  ((5 < DAT_INTMEM_35 ||
                   (BANK0_R2 = BANK0_R2 & 0x20, (DAT_EXTMEM_7ead & bCODE00a7) == 0)))) {
            BANK1_R6 = '\0';
          }
          else {
            DAT_INTMEM_50 = 0x20;
            DAT_INTMEM_51 = 0x54;
            FUN_CODE_044f(0x7e00,DAT_EXTMEM_7ead);
            BANK2_R5 = (byte *)0x0;
          }
        }
      }
      else if (DAT_INTMEM_3a == '\0') {
        if (DAT_INTMEM_36 == '\0') {
          BANK1_R6 = '\0';
        }
        else if (((DAT_INTMEM_34 == '\0') || (DAT_INTMEM_34 == '\x01')) || (DAT_INTMEM_34 == '\x02')
                ) {
          BANK2_R5 = (byte *)0x0;
        }
        else {
          BANK1_R6 = '\0';
        }
      }
      else if (DAT_INTMEM_34 == '\0') {
        if ((bCODE00a7 >> 6 & 1) == 1) {
          if (DAT_INTMEM_35 == 0) {
            BANK2_R5 = (byte *)0x98;
          }
          else {
            DAT_INTMEM_41 = DAT_INTMEM_35;
            DAT_INTMEM_42 = 0;
            DAT_INTMEM_43 = 0;
            DAT_INTMEM_44 = 0;
            if (DAT_INTMEM_35 == 1) {
              BANK2_R5 = &DAT_INTMEM_4f;
            }
            else if (DAT_INTMEM_35 == 2) {
              BANK2_R5 = (byte *)0xee;
            }
            else if (DAT_INTMEM_35 == 3) {
              BANK2_R5 = &DAT_INTMEM_41;
            }
            else if (DAT_INTMEM_35 == 4) {
              BANK2_R5 = &DAT_INTMEM_52;
            }
            else if (DAT_INTMEM_35 == 5) {
              BANK2_R5 = (byte *)0x0;
            }
            else if (DAT_INTMEM_35 == 6) {
              BANK2_R5 = (byte *)0x0;
            }
            else if (DAT_INTMEM_35 == 7) {
              BANK2_R5 = (byte *)0x0;
            }
            else if (DAT_INTMEM_35 == 8) {
              BANK2_R5 = (byte *)0x0;
            }
            else if (DAT_INTMEM_35 == 9) {
              if (((byte)pbCODE00a9 >> 6 & 1) == 0) {
                BANK2_R5 = pbCODE00a9;
                if ((char)pbCODE00a9 < '\0') {
                  BANK0_R2 = 0xc0;
                }
                else {
                  BANK0_R2 = 0xb1;
                }
              }
              else {
                BANK2_R5 = (byte *)0xa1;
              }
            }
            else if (DAT_INTMEM_35 == 10) {
              BANK2_R5 = &DAT_INTMEM_31;
            }
            else if (DAT_INTMEM_35 == 0xb) {
              BANK2_R5 = (byte *)0x0;
            }
            else if (DAT_INTMEM_35 == 0xc) {
              BANK2_R5 = DAT_EXTMEM_7eab;
            }
          }
        }
        else {
          BANK1_R6 = '\0';
        }
      }
      else {
        BANK1_R6 = '\0';
      }
LAB_CODE_344e:
      if (BANK1_R6 != '\0') {
        *(byte **)CONCAT11(-0x36 - (((0xdc < BANK2_R4) << 7) >> 7),BANK2_R4 + 0x23) = BANK2_R5;
      }
      DAT_INTMEM_35 = DAT_INTMEM_35 + 1;
      if (DAT_INTMEM_35 == 0) {
        DAT_INTMEM_34 = DAT_INTMEM_34 + '\x01';
      }
    }
  }
  if (DAT_EXTMEM_7fec == '\x01') {
    DAT_EXTMEM_ca21 = 0;
    DAT_EXTMEM_ca20 = BANK2_R3 + 1;
    FUN_CODE_348d();
    return;
  }
  return;
}



/* =========================================================
 * CODE:348d  FUN_CODE_348d  size=8
 * callers: CODE:2878
 * ========================================================= */

void FUN_CODE_348d(void)

{
  if (DAT_EXTMEM_7f77 != '\0') {
    return;
  }
  if (DAT_EXTMEM_7f79 != '\0') {
    return;
  }
  if (DAT_EXTMEM_7f9f != '\0') {
    return;
  }
  uEXTMEMca08 = 1;
  DAT_EXTMEM_7f9d = 0;
  return;
}



/* =========================================================
 * CODE:3495  FUN_CODE_3495  size=8
 * ========================================================= */

void FUN_CODE_3495(void)

{
  if (DAT_EXTMEM_7f79 != '\0') {
    return;
  }
  if (DAT_EXTMEM_7f9f != '\0') {
    return;
  }
  uEXTMEMca08 = 1;
  DAT_EXTMEM_7f9d = 0;
  return;
}



/* =========================================================
 * CODE:349d  FUN_CODE_349d  size=8
 * ========================================================= */

void FUN_CODE_349d(void)

{
  if (DAT_EXTMEM_7f9f != '\0') {
    return;
  }
  uEXTMEMca08 = 1;
  DAT_EXTMEM_7f9d = 0;
  return;
}



/* =========================================================
 * CODE:34a5  FUN_CODE_34a5  size=12
 * ========================================================= */

void FUN_CODE_34a5(void)

{
  uEXTMEMca08 = 1;
  DAT_EXTMEM_7f9d = 0;
  return;
}



/* =========================================================
 * CODE:34b1  FUN_CODE_34b1  size=579
 * callers: CODE:2878
 * ========================================================= */

void FUN_CODE_34b1(byte param_1)

{
  byte bVar1;
  undefined1 uVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  char cVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  char cVar10;
  undefined1 uVar11;
  ushort uVar12;
  
  uVar2 = BANK0_R7;
  bVar1 = BANK0_R2;
  cVar10 = BANK2_R0 == '\x0f';
  DAT_INTMEM_41 = BANK2_R2;
  BANK2_R4 = 0;
  cVar6 = BANK2_R1;
  do {
    bVar3 = DAT_EXTMEM_7fdf;
    bVar9 = BANK0_R3;
    BANK0_R2 = bVar1;
    BANK0_R7 = uVar2;
    if (BANK2_R3 <= BANK2_R4) {
      if ((DAT_EXTMEM_7fec == '\x01') && (DAT_EXTMEM_7ea8 != '\0')) {
        DAT_EXTMEM_7ea8 = 0;
        DAT_EXTMEM_ca20 = 2;
        DAT_EXTMEM_ca21 = 1;
        uEXTMEMca22 = 0;
        DAT_EXTMEM_ca23 = 0;
        uEXTMEMca08 = 1;
        return;
      }
      if ((((DAT_EXTMEM_7fec == '\x01') && (DAT_EXTMEM_7fe0 == '\0')) && (DAT_EXTMEM_7ffb == '\0'))
         && (DAT_EXTMEM_7f79 == '\0')) {
        DAT_EXTMEM_ca20 = 1;
        DAT_EXTMEM_ca21 = 0;
        uEXTMEMca08 = 1;
        DAT_EXTMEM_7f9d = 0;
      }
      if ((((BANK3_R2 & 1) == 0) || (bVar9 = DAT_EXTMEM_7f7d, DAT_EXTMEM_7f7d == BANK2_R6)) &&
         (((BANK3_R2 >> 1 & 1) == 0 || (bVar9 = DAT_EXTMEM_7f7e, BANK2_R7 <= DAT_EXTMEM_7f7e)))) {
        if (((BANK3_R2 >> 1 & 1) == 1) && ((BANK2_R7 < bVar1) << 7 < '\0')) {
          FUN_CODE_2242(DAT_EXTMEM_7f7e);
          cVar6 = BANK2_R7 + 1;
          cVar10 = '\x01';
          while (cVar6 = cVar6 + -1, cVar6 != '\0') {
            cVar10 = cVar10 * '\x02';
          }
          DAT_EXTMEM_7fed = cVar10 - 1;
          BANK0_R2 = BANK0_R2 & 0xf6;
          uEXTMEMcc05 = 1;
          DAT_EXTMEM_cc7c = 0xf;
          DAT_EXTMEM_cc7d = 0xf;
          DAT_EXTMEM_7f7e = BANK2_R7;
          DAT_EXTMEM_d804 = DAT_EXTMEM_7fed;
          bEXTMEMd80a = DAT_EXTMEM_7fed;
          bEXTMEMd80b = DAT_EXTMEM_7fed;
          if ((4 < DAT_EXTMEM_7fa2) && (BANK2_R7 != 0)) {
            BANK1_R2 = BANK2_R7;
            BANK1_R3 = DAT_EXTMEM_7f7d;
            BANK1_R4 = DAT_EXTMEM_7f7c;
            BANK1_R5 = 0;
            FUN_CODE_26be(0x7f06);
          }
        }
      }
      else {
        if ((BANK3_R2 & 1) != 0) {
          DAT_EXTMEM_7f7d = BANK2_R6;
        }
        FUN_CODE_270e(bVar9);
        if ((BANK3_R2 >> 1 & 1) == 1) {
          DAT_EXTMEM_7f7e = BANK2_R7;
        }
      }
      if (DAT_INTMEM_27 != '\0') {
        if (DAT_EXTMEM_7f8d == 0) {
          FUN_CODE_41e1(0);
          return;
        }
        DAT_EXTMEM_cc7c = 0xf;
        if (DAT_EXTMEM_7ff9 == '\0') {
          DAT_EXTMEM_7f93 = DAT_EXTMEM_7f93 | 8;
        }
        DAT_EXTMEM_c804 = 0x84;
        DAT_EXTMEM_7fa2 = 5;
        BANK0_R2 = BANK0_R2 | 1;
        if (DAT_EXTMEM_7fab != '\0') {
          return;
        }
        DAT_INTMEM_50 = 1;
        DAT_INTMEM_51 = 9;
        FUN_CODE_044f(0x7f00,0);
        bVar1 = BANK0_R2;
        DAT_EXTMEM_cc0b = 0;
        BANK0_R2 = BANK0_R2 | 2;
        DAT_EXTMEM_7fa2 = 6;
        if (DAT_EXTMEM_7f84 == 0) {
          BANK0_R2 = bVar1 | 0x22;
        }
        if ((bCODE00a6 >> 4 & 1) != 1) {
          FUN_CODE_226e(bCODE00a6);
        }
        DAT_EXTMEM_7fa1 = 0;
        return;
      }
      return;
    }
    BANK3_R0 = 0;
    bVar7 = BANK2_R4 + 0x66;
    cVar5 = ((0x99 < BANK2_R4) << 7) >> 7;
    bVar8 = 0xca - cVar5;
    BANK2_R5 = *(byte *)CONCAT11(bVar8,bVar7);
    bVar4 = DAT_EXTMEM_7f99;
    if (BANK2_R0 != '\0') {
      if ((cVar10 != '\0') && (((cVar6 == '\0' || (cVar6 == '\x01')) || (cVar6 == '\x02')))) {
        DAT_EXTMEM_7ea8 = '\x01';
      }
      goto LAB_CODE_400a;
    }
    if (cVar6 != '\x01') {
      if (cVar6 == '\x05') {
        if (DAT_INTMEM_41 == '\x10') {
          DAT_EXTMEM_7f75 = BANK2_R5;
          if (BANK2_R5 == 0) {
            DAT_EXTMEM_caa9 = 0;
          }
          else {
            DAT_EXTMEM_caa9 = 0xff;
          }
        }
      }
      else if (cVar6 == '\x06') {
        if (DAT_INTMEM_41 == '\0') {
          DAT_EXTMEM_7fa7 = BANK2_R5 & 7;
          if (DAT_EXTMEM_7fa7 == 2) {
            FUN_CODE_2242();
          }
          else if (DAT_EXTMEM_7fa7 == 5) {
            bVar9 = DAT_EXTMEM_7ead;
            if ((DAT_EXTMEM_7ead != 0) ||
               ((bVar9 = DAT_EXTMEM_7f84, DAT_EXTMEM_7f84 == 0 &&
                (BANK0_R3 = BANK0_R3 & 0xf, bVar9 = DAT_EXTMEM_d25c, DAT_EXTMEM_d25c < 3)))) {
              BANK2_R5 = BANK2_R5 & 0xf8 | 2;
              DAT_EXTMEM_7fa7 = 2;
            }
            FUN_CODE_2242(bVar9);
          }
          else if (DAT_EXTMEM_7fa2 == 6) {
            FUN_CODE_226e();
          }
          BANK1_R2 = DAT_EXTMEM_7f7e;
          BANK1_R3 = DAT_EXTMEM_7f7d;
          BANK1_R4 = DAT_EXTMEM_7f7c;
          BANK1_R5 = BANK2_R5;
          BANK0_R2 = bVar1;
          BANK0_R7 = uVar2;
          FUN_CODE_26be(0x7f08);
          bVar4 = DAT_EXTMEM_7f99;
        }
        else {
          BANK1_R6 = 0;
        }
      }
      goto LAB_CODE_400a;
    }
    if (DAT_INTMEM_41 == '\0') {
      cVar5 = BANK2_R5 == 0x14;
      if ((bool)cVar5) {
        DAT_INTMEM_51 = 0x2a;
      }
      else if (BANK2_R5 == 6) {
        DAT_INTMEM_3e = 0x28;
        DAT_INTMEM_51 = DAT_INTMEM_3e;
      }
      else {
        DAT_INTMEM_3e = 0x29;
        DAT_INTMEM_51 = DAT_INTMEM_3e;
      }
      DAT_INTMEM_50 = 1;
      FUN_CODE_044f((ushort)bVar8 << 8);
      if (cVar5 == '\0') {
        if (BANK2_R5 == 6) {
          BANK0_R3 = 0;
        }
        else {
          BANK0_R3 = 8;
        }
        BANK2_R6 = 0;
      }
      else {
        BANK2_R6 = 0x10;
        BANK0_R3 = bVar9;
      }
      BANK3_R2 = BANK3_R2 | 1;
      bVar4 = DAT_EXTMEM_7f99;
      if ((BANK2_R6 == 0) || (BANK2_R6 == 8)) {
        uEXTMEMd82a = 0xff;
        uEXTMEMd82b = 0xff;
      }
      else {
        uEXTMEMd82a = 0;
        uEXTMEMd82b = 0;
      }
      goto LAB_CODE_400a;
    }
    if (DAT_INTMEM_41 == '\x01') {
      BANK2_R7 = BANK2_R5 & 0xf;
      if (BANK2_R7 == 4) {
        bVar7 = 0x65;
      }
      else if (BANK2_R7 == 2) {
        BANK0_R3 = 100;
      }
      else if (BANK2_R7 == 1) {
        DAT_INTMEM_3e = 99;
        BANK0_R3 = DAT_INTMEM_3e;
      }
      else {
        DAT_INTMEM_3e = 0x62;
        BANK0_R3 = DAT_INTMEM_3e;
      }
      DAT_INTMEM_50 = 1;
      DAT_INTMEM_51 = bVar7;
      FUN_CODE_044f((ushort)bVar8 << 8);
      DAT_EXTMEM_7f7c = (BANK2_R5 & 0x80) >> 2 | DAT_EXTMEM_7f7c;
      if (DAT_EXTMEM_7f7c == 0) {
        BANK0_R3 = BANK0_R3 & 0xde;
      }
      else {
        BANK0_R3 = BANK0_R3 & 0xdf | 1;
      }
      BANK3_R2 = BANK3_R2 | 2;
      bVar4 = DAT_EXTMEM_7f99;
      goto LAB_CODE_400a;
    }
    if (DAT_INTMEM_41 != '\x02') {
      if (DAT_INTMEM_41 != '\x03') {
        if (DAT_INTMEM_41 != '\x04') {
          if (DAT_INTMEM_41 != '\x05') {
            if (DAT_INTMEM_41 != '\x06') {
              if (DAT_INTMEM_41 == '\a') {
                uEXTMEMcc0e = (BANK2_R5 >> 4 & 1) != 0;
                BANK0_R3 = BANK0_R3 & 1;
                BANK1_R2 = DAT_EXTMEM_7f7e;
                BANK1_R3 = DAT_EXTMEM_7f7d;
                BANK1_R4 = DAT_EXTMEM_7f7c;
                BANK1_R5 = BANK2_R5;
                DAT_EXTMEM_7f8a = BANK2_R5;
                FUN_CODE_26be(0x7f07);
                bVar4 = DAT_EXTMEM_7f99;
              }
              else {
                bVar4 = BANK2_R5;
                if (DAT_INTMEM_41 != '\b') {
                  if (DAT_INTMEM_41 == '\v') {
                    DAT_INTMEM_50 = 4;
                    DAT_INTMEM_51 = 0x37;
                    FUN_CODE_044f((ushort)bVar8 << 8);
                    FUN_CODE_233d();
                    bEXTMEM7ff5 = BANK2_R5 | 0x80;
                    bVar4 = DAT_EXTMEM_7f99;
                  }
                  else if (DAT_INTMEM_41 == '\f') {
                    DAT_INTMEM_50 = 4;
                    DAT_INTMEM_51 = 0x38;
                    FUN_CODE_044f((ushort)bVar8 << 8);
                    FUN_CODE_233d();
                    bEXTMEM7ff6 = BANK2_R5 | 0x80;
                    bVar4 = DAT_EXTMEM_7f99;
                  }
                  else if (DAT_INTMEM_41 == '\r') {
                    DAT_INTMEM_50 = 4;
                    DAT_INTMEM_51 = 0x39;
                    FUN_CODE_044f((ushort)bVar8 << 8);
                    FUN_CODE_233d();
                    bEXTMEM7ff7 = BANK2_R5 | 0x80;
                    bVar4 = DAT_EXTMEM_7f99;
                  }
                  else if (DAT_INTMEM_41 == '\x0e') {
                    DAT_INTMEM_50 = 4;
                    DAT_INTMEM_51 = 0x3a;
                    FUN_CODE_044f((ushort)bVar8 << 8);
                    FUN_CODE_233d();
                    bEXTMEM7ff8 = BANK2_R5 | 0x80;
                    bVar4 = DAT_EXTMEM_7f99;
                  }
                  else if ((DAT_INTMEM_41 == '\x0f') || (DAT_INTMEM_41 == '\x10')) {
                    DAT_INTMEM_50 = 4;
                    DAT_INTMEM_51 = 0x3b;
                    FUN_CODE_044f((ushort)bVar8 << 8);
                    bVar4 = DAT_EXTMEM_7f99;
                  }
                  else if (DAT_INTMEM_41 == '\x11') {
                    DAT_INTMEM_50 = 0x20;
                    DAT_INTMEM_51 = 0x34;
                    FUN_CODE_044f((ushort)bVar8 << 8);
                    if ((BANK2_R5 & 1) == BANK0_R4) {
                      BANK0_R2 = bVar1;
                      BANK0_R7 = uVar2;
                      FUN_CODE_2211(0x7f01);
                      param_1 = DAT_EXTMEM_7ff1;
                    }
                    else {
                      BANK1_R2 = DAT_EXTMEM_7f7e;
                      BANK1_R3 = DAT_EXTMEM_7f7d;
                      BANK1_R4 = DAT_EXTMEM_7f7c;
                      BANK1_R5 = BANK2_R5;
                      BANK0_R2 = bVar1;
                      BANK0_R7 = uVar2;
                      FUN_CODE_26be(0x7f0f);
                      DAT_EXTMEM_7fe0 = '\x01';
                      param_1 = DAT_EXTMEM_7ff1;
                    }
                    DAT_EXTMEM_7ff1 = BANK2_R5 & 1;
                    DAT_EXTMEM_ca0c = 1;
                    bVar4 = DAT_EXTMEM_7f99;
                  }
                  else if (DAT_INTMEM_41 == 'W') {
                    DAT_INTMEM_50 = 0x20;
                    DAT_INTMEM_51 = 0x30;
                    FUN_CODE_044f((ushort)bVar8 << 8);
                    DAT_EXTMEM_cad0 = 1;
                    DAT_EXTMEM_7fe0 = '\x01';
                    FUN_CODE_2211(0x7f00);
                    DAT_EXTMEM_7ff2 = 1;
                    bVar4 = DAT_EXTMEM_7f99;
                  }
                  else if (DAT_INTMEM_41 == -0x40) {
                    DAT_EXTMEM_7fde = BANK2_R5 - 1;
                    DAT_INTMEM_50 = 8;
                    DAT_INTMEM_51 = 0x3d;
                    uVar11 = 0x7f;
                    FUN_CODE_044f(0x7f00);
                    FUN_CODE_2211(CONCAT11(uVar11,1));
                    bVar4 = DAT_EXTMEM_7f99;
                    if (BANK2_R5 == 0) {
                      DAT_EXTMEM_7fdd = '\x01';
                    }
                    else {
                      DAT_EXTMEM_7fdd = '\0';
                    }
                  }
                  else if (DAT_INTMEM_41 == -0x3f) {
                    DAT_INTMEM_50 = 8;
                    DAT_INTMEM_51 = 0x3e;
                    FUN_CODE_044f((ushort)bVar8 << 8);
                    if (DAT_EXTMEM_7f79 == '\0') {
                      BANK0_R2 = bVar1;
                      BANK0_R7 = uVar2;
                      FUN_CODE_2211(0x7f01,0);
                    }
                    bVar4 = DAT_EXTMEM_7f99;
                    if (BANK2_R5 != 0) {
                      DAT_EXTMEM_7fdd = '\0';
                    }
                  }
                  else {
                    bVar4 = DAT_EXTMEM_7f99;
                    if (DAT_INTMEM_41 == -0x3e) {
                      uVar12 = 0x7fde;
                      bVar9 = DAT_EXTMEM_7fde;
                      if (DAT_EXTMEM_7fde < 0x10) {
                        DAT_EXTMEM_7fdf =
                             (DAT_EXTMEM_7fdf -
                             *(char *)CONCAT11('\x7f' - (((0x3f < DAT_EXTMEM_7fde) << 7) >> 7),
                                               DAT_EXTMEM_7fde - 0x40)) + BANK2_R5;
                        *(byte *)CONCAT11('\x7f' - (((0x3f < DAT_EXTMEM_7fde) << 7) >> 7),
                                          DAT_EXTMEM_7fde - 0x40) = BANK2_R5;
                        bVar9 = DAT_EXTMEM_7fdf + 1 & 0x3f;
                        uVar12 = 0xd230;
                        param_1 = bVar3;
                        DAT_EXTMEM_d230 = bVar9;
                      }
                      DAT_INTMEM_50 = 8;
                      DAT_INTMEM_51 = 0x3f;
                      uVar12 = uVar12 & 0xff00;
                      FUN_CODE_044f(uVar12,bVar9);
                      DAT_INTMEM_50 = 8;
                      DAT_INTMEM_51 = 0x68;
                      FUN_CODE_044f(uVar12 & 0xff00);
                      DAT_INTMEM_50 = 8;
                      DAT_INTMEM_51 = 3;
                      FUN_CODE_044f(1);
                      DAT_INTMEM_51 = DAT_EXTMEM_7fde;
                      DAT_INTMEM_50 = 8;
                      uVar11 = 0x7f;
                      FUN_CODE_044f(0x7f01);
                      DAT_INTMEM_50 = 8;
                      DAT_INTMEM_51 = BANK2_R5;
                      FUN_CODE_044f(CONCAT11(uVar11,1));
                      DAT_INTMEM_51 = DAT_EXTMEM_d230;
                      DAT_INTMEM_50 = 8;
                      FUN_CODE_044f(0xd201);
                      if (DAT_EXTMEM_7f79 == '\0') {
                        BANK0_R2 = bVar1;
                        BANK0_R7 = uVar2;
                        FUN_CODE_2211(0x7f01,0);
                      }
                      cVar5 = DAT_EXTMEM_7fdd;
                      bVar4 = DAT_EXTMEM_7f99;
                      if ((BANK2_R5 == 0x3f) && (DAT_EXTMEM_7fdd != '\0')) {
                        DAT_EXTMEM_7fdd = '\0';
                        BANK0_R2 = bVar1;
                        BANK0_R7 = uVar2;
                        FUN_CODE_1f5c(cVar5);
                        bVar4 = DAT_EXTMEM_7f99;
                      }
                    }
                  }
                }
              }
              goto LAB_CODE_400a;
            }
            BANK3_R0 = 1;
          }
          BANK3_R0 = BANK3_R0 + 1;
        }
        BANK3_R0 = BANK3_R0 + 1;
      }
      DAT_INTMEM_50 = 4;
      DAT_INTMEM_51 = 0x15;
      FUN_CODE_044f((ushort)bVar8 << 8);
      *(byte *)CONCAT11('\x7f' - (((0x7f < BANK3_R0) << 7) >> 7),BANK3_R0 + 0x80) = BANK2_R5;
      DAT_EXTMEM_7fa3 = 1;
      bVar4 = DAT_EXTMEM_7f99;
      goto LAB_CODE_400a;
    }
    DAT_EXTMEM_7f87 = 1;
    DAT_EXTMEM_7ffa = 0;
    BANK1_R7 = 0;
    DAT_EXTMEM_7fe2 = BANK2_R5 & 0xc;
    DAT_EXTMEM_7f86 = BANK2_R5;
    if (((DAT_EXTMEM_7fe2 != 0) || (DAT_EXTMEM_7ff9 != '\0')) && (DAT_EXTMEM_7fff == '\0')) {
      BANK1_R7 = 1;
      if (BANK0_R3 < 4) {
        switch(DAT_EXTMEM_7fe2) {
        case 0:
          DAT_EXTMEM_7ff9 = '\0';
          DAT_EXTMEM_7f93 = DAT_EXTMEM_7f93 | 8;
          DAT_EXTMEM_c804 = 0x84;
          BANK0_R6 = *(byte *)(((BANK2_R5 >> 7) << 1 | (BANK2_R5 & 0x40) >> 6) + 0x28) & 0xf;
          BANK0_R3 = BANK0_R3 & 6 | cVar5 * -0x10;
          BANK0_R3 = BANK0_R3 | 0xf;
          bEXTMEMc870 = 0;
          uEXTMEMc871 = 0;
          for (BANK3_R1 = 0; BANK3_R1 < 4; BANK3_R1 = BANK3_R1 + 1) {
            BANK0_R4 = BANK3_R1 + 0x28;
            cVar5 = -(((0xd7 < BANK3_R1) << 7) >> 7);
            BANK0_R5 = BANK0_R5 & 0xcf;
            *(undefined1 *)CONCAT11(cVar5 + -0x32,param_1) =
                 *(undefined1 *)CONCAT11(cVar5 + -0x32,BANK0_R4);
          }
          break;
        case 4:
          DAT_EXTMEM_7ff9 = '\x01';
          DAT_EXTMEM_7f93 = DAT_EXTMEM_7f93 & 0xf7;
          FUN_CODE_2820(0x7f00);
          uEXTMEMcc00 = 0;
          BANK0_R3 = BANK0_R3 & 0xfd | 9;
          DAT_EXTMEM_c804 = 0x85;
          uEXTMEMcc5e = 0;
          break;
        case 8:
          DAT_EXTMEM_7ff9 = '\x02';
          DAT_EXTMEM_7f93 = DAT_EXTMEM_7f93 & 0xf7;
          FUN_CODE_2820(0x7f00);
          uEXTMEMcc00 = 0;
          if ((bEXTMEMc84b & 1) == 0) {
            BANK0_R3 = BANK0_R3 & 0xd | 0x70;
          }
          else {
            uEXTMEMc87d = 0x20;
            uEXTMEMc87e = 0xff;
            uEXTMEMc87f = 1;
            bEXTMEMc870 = DAT_EXTMEM_d804;
            uEXTMEMc871 = 0x80;
            BANK0_R3 = BANK0_R3 & 0xd | 0x10;
          }
          break;
        case 0xc:
          DAT_EXTMEM_7ff9 = '\x03';
          DAT_EXTMEM_7f93 = DAT_EXTMEM_7f93 & 0xf7;
          FUN_CODE_2820(0x7f00);
          uEXTMEMcc00 = 0;
          bEXTMEMc870 = DAT_EXTMEM_d804 << 4;
          BANK0_R3 = BANK0_R3 & 0xb0 | 0x90;
        }
      }
      if (4 < DAT_EXTMEM_7fa2) {
        uEXTMEMc600 = (BANK2_R5 >> 5 & 1) != 0;
        BANK0_R3 = BANK0_R3 & 1;
      }
    }
    bVar4 = DAT_EXTMEM_7f99;
    if (3 < BANK0_R3) goto LAB_CODE_400a;
    switch(BANK2_R5 & 3) {
    case 0:
      DAT_INTMEM_50 = 4;
      DAT_INTMEM_51 = 0x11;
      BANK0_R2 = bVar1;
      BANK0_R7 = uVar2;
      FUN_CODE_044f(0x3900);
      uEXTMEMc600 = (BANK2_R5 >> 5 & 1) != 0;
      BANK0_R3 = BANK0_R3 & 1;
      DAT_EXTMEM_7fe2 = DAT_EXTMEM_c850 & 1;
      if (DAT_EXTMEM_7fe2 != 0) {
        BANK0_R2 = bVar1;
        BANK0_R7 = uVar2;
        FUN_CODE_129a(DAT_EXTMEM_7fe2);
        uEXTMEMcc00 = 0;
        uEXTMEMce76 = DAT_EXTMEM_7fa5;
        FUN_CODE_2820(0xce00);
        uEXTMEMc600 = (BANK2_R5 >> 5 & 1) != 0;
        BANK0_R3 = BANK0_R3 & 1 | ~DAT_EXTMEM_d804;
        bVar9 = DAT_EXTMEM_d80d;
        while (bVar9 != 0xf) {
          BANK0_R4 = BANK0_R4 & 0xf;
          bVar9 = ~DAT_EXTMEM_d804 & 0xf | DAT_EXTMEM_d80d;
        }
        cVar5 = '\x05';
        do {
          cVar5 = cVar5 + -1;
        } while (cVar5 != '\0');
      }
      bVar9 = BANK0_R3;
      if (DAT_EXTMEM_7fe2 == 0 && DAT_EXTMEM_7fa2 != 4) {
        BANK1_R2 = DAT_EXTMEM_7f7e;
        BANK1_R3 = DAT_EXTMEM_7f7d;
        BANK1_R4 = DAT_EXTMEM_7f7c;
        BANK1_R5 = BANK2_R5;
        param_1 = DAT_EXTMEM_7fe2;
        BANK0_R2 = bVar1;
        BANK0_R7 = uVar2;
        FUN_CODE_26be(0x7f05);
        bVar4 = DAT_EXTMEM_7f99;
      }
      else {
        BANK0_R3 = BANK0_R3 | 0x10;
        DAT_EXTMEM_7fa2 = 2;
        DAT_INTMEM_27 = '\x01';
        param_1 = DAT_EXTMEM_7f8d;
        if (DAT_EXTMEM_7ff9 == '\0') {
          BANK0_R4 = *(byte *)(((BANK2_R5 >> 7) << 1 | (BANK2_R5 & 0x40) >> 6) + 0x28) & 0xf;
          param_1 = DAT_EXTMEM_7f8d << 4;
          BANK0_R3 = bVar9 & 0xf | param_1;
        }
        if ((DAT_EXTMEM_d25c & 0xf) == 0) {
          BANK0_R3 = BANK0_R3 & 0xfd;
        }
        DAT_EXTMEM_7f9c = 0;
        DAT_EXTMEM_7f85 = 0;
        DAT_EXTMEM_7f9e = 0;
        DAT_EXTMEM_7f9f = 0;
        DAT_EXTMEM_7fa0 = 0;
        DAT_EXTMEM_7fa1 = 0;
        DAT_EXTMEM_7fbc = 0;
        DAT_EXTMEM_7f8d = DAT_EXTMEM_7f8d | DAT_EXTMEM_7fe2;
        bVar4 = DAT_EXTMEM_7f99;
      }
      break;
    case 1:
      DAT_INTMEM_50 = 4;
      DAT_INTMEM_51 = 0x12;
      BANK0_R2 = bVar1;
      BANK0_R7 = uVar2;
      FUN_CODE_044f(0x3900);
      FUN_CODE_2242();
      uEXTMEMcc00 = 1;
      bEXTMEMd80b = 0;
      bEXTMEMd80a = 0;
      DAT_EXTMEM_d804 = 0;
      DAT_EXTMEM_7fb4 = 0;
      DAT_EXTMEM_7eb9 = 0;
      DAT_EXTMEM_7fab = '\0';
      DAT_EXTMEM_7fa9 = 0;
      DAT_EXTMEM_7faa = 0;
      BANK0_R3 = BANK0_R3 & 0xfd;
      uVar12 = 0xc80f;
      FUN_CODE_129a();
      FUN_CODE_2820(uVar12 & 0xff00);
      DAT_EXTMEM_7f74 = 0xff;
      DAT_INTMEM_27 = '\0';
      DAT_EXTMEM_7fff = '\0';
      BANK0_R3 = BANK0_R3 & 0xef;
      if ((bEXTMEMc84b >> 1 & 1) != 1) {
        BANK1_R2 = 0;
        BANK1_R3 = 0;
        BANK1_R4 = 0;
        BANK1_R5 = 0;
        BANK0_R2 = bVar1;
        BANK0_R7 = uVar2;
        FUN_CODE_26be(0xc801,bEXTMEMc84b);
      }
      if (DAT_EXTMEM_7fa2 != 3) {
        DAT_EXTMEM_7fa3 = 1;
      }
      DAT_EXTMEM_7fa2 = 3;
      DAT_EXTMEM_cc97 = 1;
      BANK0_R2 = bVar1;
      BANK0_R7 = uVar2;
      FUN_CODE_2242();
      DAT_EXTMEM_c804 = 0x81;
      for (bVar9 = 0; bVar4 = DAT_EXTMEM_7f99, (bVar9 < 4) << 7 < '\0'; bVar9 = bVar9 + 1) {
        *(undefined1 *)CONCAT11('\x7f' - (((0x7f < bVar9) << 7) >> 7),bVar9 + 0x80) = 0;
      }
      break;
    case 2:
      goto FUN_CODE_3b65;
    case 3:
FUN_CODE_3b65:
      DAT_INTMEM_50 = 4;
      DAT_INTMEM_51 = 0x13;
      BANK0_R2 = bVar1;
      BANK0_R7 = uVar2;
      FUN_CODE_044f(0x3900);
      if ((BANK2_R5 & 3) == 3) {
        DAT_EXTMEM_7f7c = DAT_EXTMEM_7f7c | 0x40;
        if (DAT_EXTMEM_7f7c == 0) {
          BANK0_R3 = BANK0_R3 & 0xfe;
        }
        else {
          BANK0_R3 = BANK0_R3 | 1;
        }
        DAT_EXTMEM_c804 = 0x83;
      }
      else {
        DAT_EXTMEM_7f7c = DAT_EXTMEM_7f7c & 0xbf;
        if (DAT_EXTMEM_7f7c == 0) {
          BANK0_R3 = BANK0_R3 & 0xfe;
        }
        else {
          BANK0_R3 = BANK0_R3 | 1;
        }
        DAT_EXTMEM_c804 = 0x82;
      }
      if (DAT_EXTMEM_7fa2 != 4) {
        DAT_EXTMEM_7fa3 = 1;
      }
      DAT_EXTMEM_7fa2 = 4;
      DAT_EXTMEM_7f9e = 0;
      uEXTMEMce76 = DAT_EXTMEM_7fa5;
      if (DAT_EXTMEM_7fb5 == '\0') {
        BANK0_R2 = bVar1;
        BANK0_R7 = uVar2;
        FUN_CODE_1403(0);
      }
      else {
        DAT_EXTMEM_7fb3 = 1;
      }
      BANK0_R3 = BANK0_R3 & 0xfd;
      uEXTMEMc600 = 0x21;
      bVar4 = DAT_EXTMEM_7f99;
    }
LAB_CODE_400a:
    DAT_EXTMEM_7f99 = bVar4;
    DAT_INTMEM_41 = DAT_INTMEM_41 + '\x01';
    if (DAT_INTMEM_41 == '\0') {
      cVar6 = cVar6 + '\x01';
    }
    BANK2_R4 = BANK2_R4 + 1;
  } while( true );
}



/* =========================================================
 * CODE:3779  FUN_CODE_3779  size=99
 * ========================================================= */

void FUN_CODE_3779(char param_1,byte param_2,char param_3)

{
  byte bVar1;
  undefined1 uVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  char cVar9;
  undefined1 uVar10;
  ushort uVar11;
  
  uVar2 = BANK0_R7;
  bVar1 = BANK0_R2;
  do {
    BANK0_R4 = BANK3_R1 + 0x28;
    cVar9 = -(((0xd7 < BANK3_R1) << 7) >> 7);
    BANK0_R5 = BANK0_R5 & 0xcf;
    *(undefined1 *)CONCAT11(cVar9 + -0x32,param_2) = *(undefined1 *)CONCAT11(cVar9 + -0x32,BANK0_R4)
    ;
    BANK3_R1 = BANK3_R1 + 1;
    while (3 < BANK3_R1) {
LAB_CODE_38da:
      do {
        if (4 < DAT_EXTMEM_7fa2) {
          uEXTMEMc600 = (BANK2_R5 >> 5 & 1) != 0;
          BANK0_R3 = BANK0_R3 & 1;
        }
        do {
          bVar8 = DAT_EXTMEM_7f99;
          BANK0_R2 = bVar1;
          BANK0_R7 = uVar2;
          if (3 < BANK0_R3) goto LAB_CODE_400a;
          switch(BANK2_R5 & 3) {
          case 0:
            DAT_INTMEM_50 = 4;
            DAT_INTMEM_51 = 0x11;
            FUN_CODE_044f(0x3900);
            uEXTMEMc600 = (BANK2_R5 >> 5 & 1) != 0;
            BANK0_R3 = BANK0_R3 & 1;
            DAT_EXTMEM_7fe2 = DAT_EXTMEM_c850 & 1;
            if (DAT_EXTMEM_7fe2 != 0) {
              BANK0_R2 = bVar1;
              BANK0_R7 = uVar2;
              FUN_CODE_129a(DAT_EXTMEM_7fe2);
              uEXTMEMcc00 = 0;
              uEXTMEMce76 = DAT_EXTMEM_7fa5;
              FUN_CODE_2820(0xce00);
              uEXTMEMc600 = (BANK2_R5 >> 5 & 1) != 0;
              BANK0_R3 = BANK0_R3 & 1 | ~DAT_EXTMEM_d804;
              bVar8 = DAT_EXTMEM_d80d;
              while (bVar8 != 0xf) {
                BANK0_R4 = BANK0_R4 & 0xf;
                bVar8 = ~DAT_EXTMEM_d804 & 0xf | DAT_EXTMEM_d80d;
              }
              cVar9 = '\x05';
              do {
                cVar9 = cVar9 + -1;
              } while (cVar9 != '\0');
            }
            bVar8 = BANK0_R3;
            if (DAT_EXTMEM_7fe2 == 0 && DAT_EXTMEM_7fa2 != 4) {
              BANK1_R2 = DAT_EXTMEM_7f7e;
              BANK1_R3 = DAT_EXTMEM_7f7d;
              BANK1_R4 = DAT_EXTMEM_7f7c;
              BANK1_R5 = BANK2_R5;
              param_2 = DAT_EXTMEM_7fe2;
              BANK0_R2 = bVar1;
              BANK0_R7 = uVar2;
              FUN_CODE_26be(0x7f05);
              bVar8 = DAT_EXTMEM_7f99;
            }
            else {
              BANK0_R3 = BANK0_R3 | 0x10;
              DAT_EXTMEM_7fa2 = 2;
              DAT_INTMEM_27 = '\x01';
              param_2 = DAT_EXTMEM_7f8d;
              if (DAT_EXTMEM_7ff9 == '\0') {
                BANK0_R4 = *(byte *)(((BANK2_R5 >> 7) << 1 | (BANK2_R5 & 0x40) >> 6) + 0x28) & 0xf;
                param_2 = DAT_EXTMEM_7f8d << 4;
                BANK0_R3 = bVar8 & 0xf | param_2;
              }
              if ((DAT_EXTMEM_d25c & 0xf) == 0) {
                BANK0_R3 = BANK0_R3 & 0xfd;
              }
              DAT_EXTMEM_7f9c = 0;
              DAT_EXTMEM_7f85 = 0;
              DAT_EXTMEM_7f9e = 0;
              DAT_EXTMEM_7f9f = 0;
              DAT_EXTMEM_7fa0 = 0;
              DAT_EXTMEM_7fa1 = 0;
              DAT_EXTMEM_7fbc = 0;
              DAT_EXTMEM_7f8d = DAT_EXTMEM_7f8d | DAT_EXTMEM_7fe2;
              bVar8 = DAT_EXTMEM_7f99;
            }
            break;
          case 1:
            DAT_INTMEM_50 = 4;
            DAT_INTMEM_51 = 0x12;
            FUN_CODE_044f(0x3900);
            FUN_CODE_2242();
            uEXTMEMcc00 = 1;
            bEXTMEMd80b = 0;
            bEXTMEMd80a = 0;
            DAT_EXTMEM_d804 = 0;
            DAT_EXTMEM_7fb4 = 0;
            DAT_EXTMEM_7eb9 = 0;
            DAT_EXTMEM_7fab = '\0';
            DAT_EXTMEM_7fa9 = 0;
            DAT_EXTMEM_7faa = 0;
            BANK0_R3 = BANK0_R3 & 0xfd;
            uVar11 = 0xc80f;
            FUN_CODE_129a();
            FUN_CODE_2820(uVar11 & 0xff00);
            DAT_EXTMEM_7f74 = 0xff;
            DAT_INTMEM_27 = '\0';
            DAT_EXTMEM_7fff = '\0';
            BANK0_R3 = BANK0_R3 & 0xef;
            if ((bEXTMEMc84b >> 1 & 1) != 1) {
              BANK1_R2 = 0;
              BANK1_R3 = 0;
              BANK1_R4 = 0;
              BANK1_R5 = 0;
              BANK0_R2 = bVar1;
              BANK0_R7 = uVar2;
              FUN_CODE_26be(0xc801,bEXTMEMc84b);
            }
            if (DAT_EXTMEM_7fa2 != 3) {
              DAT_EXTMEM_7fa3 = 1;
            }
            DAT_EXTMEM_7fa2 = 3;
            DAT_EXTMEM_cc97 = 1;
            BANK0_R2 = bVar1;
            BANK0_R7 = uVar2;
            FUN_CODE_2242();
            DAT_EXTMEM_c804 = 0x81;
            for (bVar4 = 0; bVar8 = DAT_EXTMEM_7f99, (bVar4 < 4) << 7 < '\0'; bVar4 = bVar4 + 1) {
              *(undefined1 *)CONCAT11('\x7f' - (((0x7f < bVar4) << 7) >> 7),bVar4 + 0x80) = 0;
            }
            break;
          case 2:
            goto FUN_CODE_3b65;
          case 3:
FUN_CODE_3b65:
            DAT_INTMEM_50 = 4;
            DAT_INTMEM_51 = 0x13;
            FUN_CODE_044f(0x3900);
            if ((BANK2_R5 & 3) == 3) {
              DAT_EXTMEM_7f7c = DAT_EXTMEM_7f7c | 0x40;
              if (DAT_EXTMEM_7f7c == 0) {
                BANK0_R3 = BANK0_R3 & 0xfe;
              }
              else {
                BANK0_R3 = BANK0_R3 | 1;
              }
              DAT_EXTMEM_c804 = 0x83;
            }
            else {
              DAT_EXTMEM_7f7c = DAT_EXTMEM_7f7c & 0xbf;
              if (DAT_EXTMEM_7f7c == 0) {
                BANK0_R3 = BANK0_R3 & 0xfe;
              }
              else {
                BANK0_R3 = BANK0_R3 | 1;
              }
              DAT_EXTMEM_c804 = 0x82;
            }
            if (DAT_EXTMEM_7fa2 != 4) {
              DAT_EXTMEM_7fa3 = 1;
            }
            DAT_EXTMEM_7fa2 = 4;
            DAT_EXTMEM_7f9e = 0;
            uEXTMEMce76 = DAT_EXTMEM_7fa5;
            if (DAT_EXTMEM_7fb5 == '\0') {
              BANK0_R2 = bVar1;
              BANK0_R7 = uVar2;
              FUN_CODE_1403(0);
            }
            else {
              DAT_EXTMEM_7fb3 = 1;
            }
            BANK0_R3 = BANK0_R3 & 0xfd;
            uEXTMEMc600 = 0x21;
            bVar8 = DAT_EXTMEM_7f99;
          }
LAB_CODE_400a:
          while( true ) {
            while( true ) {
              while( true ) {
                while( true ) {
                  while( true ) {
                    DAT_EXTMEM_7f99 = bVar8;
                    bVar3 = DAT_EXTMEM_7fdf;
                    bVar6 = BANK2_R4;
                    bVar4 = BANK0_R3;
                    DAT_INTMEM_41 = DAT_INTMEM_41 + '\x01';
                    if (DAT_INTMEM_41 == '\0') {
                      param_3 = param_3 + '\x01';
                    }
                    BANK2_R4 = BANK2_R4 + 1;
                    if (BANK2_R3 <= BANK2_R4) {
                      if ((DAT_EXTMEM_7fec == '\x01') && (DAT_EXTMEM_7ea8 != '\0')) {
                        DAT_EXTMEM_7ea8 = 0;
                        DAT_EXTMEM_ca20 = 2;
                        DAT_EXTMEM_ca21 = 1;
                        uEXTMEMca22 = 0;
                        DAT_EXTMEM_ca23 = 0;
                        uEXTMEMca08 = 1;
                        BANK0_R2 = bVar1;
                        BANK0_R7 = uVar2;
                        return;
                      }
                      if ((((DAT_EXTMEM_7fec == '\x01') && (DAT_EXTMEM_7fe0 == '\0')) &&
                          (DAT_EXTMEM_7ffb == '\0')) && (DAT_EXTMEM_7f79 == '\0')) {
                        DAT_EXTMEM_ca20 = 1;
                        DAT_EXTMEM_ca21 = 0;
                        uEXTMEMca08 = 1;
                        DAT_EXTMEM_7f9d = 0;
                      }
                      if ((((BANK3_R2 & 1) == 0) ||
                          (bVar8 = DAT_EXTMEM_7f7d, DAT_EXTMEM_7f7d == BANK2_R6)) &&
                         (((BANK3_R2 >> 1 & 1) == 0 ||
                          (bVar8 = DAT_EXTMEM_7f7e, BANK2_R7 <= DAT_EXTMEM_7f7e)))) {
                        BANK0_R2 = bVar1;
                        BANK0_R7 = uVar2;
                        if (((BANK3_R2 >> 1 & 1) == 1) && ((BANK2_R7 < bVar1) << 7 < '\0')) {
                          FUN_CODE_2242(DAT_EXTMEM_7f7e);
                          cVar5 = BANK2_R7 + 1;
                          cVar9 = '\x01';
                          while (cVar5 = cVar5 + -1, cVar5 != '\0') {
                            cVar9 = cVar9 * '\x02';
                          }
                          DAT_EXTMEM_7fed = cVar9 - 1;
                          BANK0_R2 = BANK0_R2 & 0xf6;
                          uEXTMEMcc05 = 1;
                          DAT_EXTMEM_cc7c = 0xf;
                          DAT_EXTMEM_cc7d = 0xf;
                          DAT_EXTMEM_7f7e = BANK2_R7;
                          DAT_EXTMEM_d804 = DAT_EXTMEM_7fed;
                          bEXTMEMd80a = DAT_EXTMEM_7fed;
                          bEXTMEMd80b = DAT_EXTMEM_7fed;
                          if ((4 < DAT_EXTMEM_7fa2) && (BANK2_R7 != 0)) {
                            BANK1_R2 = BANK2_R7;
                            BANK1_R3 = DAT_EXTMEM_7f7d;
                            BANK1_R4 = DAT_EXTMEM_7f7c;
                            BANK1_R5 = 0;
                            FUN_CODE_26be(0x7f06);
                          }
                        }
                      }
                      else {
                        if ((BANK3_R2 & 1) != 0) {
                          DAT_EXTMEM_7f7d = BANK2_R6;
                        }
                        BANK0_R2 = bVar1;
                        BANK0_R7 = uVar2;
                        FUN_CODE_270e(bVar8);
                        if ((BANK3_R2 >> 1 & 1) == 1) {
                          DAT_EXTMEM_7f7e = BANK2_R7;
                        }
                      }
                      if (DAT_INTMEM_27 != '\0') {
                        if (DAT_EXTMEM_7f8d == 0) {
                          FUN_CODE_41e1(0);
                          return;
                        }
                        DAT_EXTMEM_cc7c = 0xf;
                        if (DAT_EXTMEM_7ff9 == '\0') {
                          DAT_EXTMEM_7f93 = DAT_EXTMEM_7f93 | 8;
                        }
                        DAT_EXTMEM_c804 = 0x84;
                        DAT_EXTMEM_7fa2 = 5;
                        BANK0_R2 = BANK0_R2 | 1;
                        if (DAT_EXTMEM_7fab != '\0') {
                          return;
                        }
                        DAT_INTMEM_50 = 1;
                        DAT_INTMEM_51 = 9;
                        FUN_CODE_044f(0x7f00,0);
                        bVar1 = BANK0_R2;
                        DAT_EXTMEM_cc0b = 0;
                        BANK0_R2 = BANK0_R2 | 2;
                        DAT_EXTMEM_7fa2 = 6;
                        if (DAT_EXTMEM_7f84 == 0) {
                          BANK0_R2 = bVar1 | 0x22;
                        }
                        if ((bCODE00a6 >> 4 & 1) != 1) {
                          FUN_CODE_226e(bCODE00a6);
                        }
                        DAT_EXTMEM_7fa1 = 0;
                        return;
                      }
                      return;
                    }
                    BANK3_R0 = 0;
                    bVar6 = bVar6 + 0x67;
                    cVar9 = ((0x99 < BANK2_R4) << 7) >> 7;
                    bVar7 = 0xca - cVar9;
                    BANK2_R5 = *(byte *)CONCAT11(bVar7,bVar6);
                    bVar8 = DAT_EXTMEM_7f99;
                    if (BANK2_R0 == '\0') break;
                    if ((param_1 != '\0') &&
                       (((param_3 == '\0' || (param_3 == '\x01')) || (param_3 == '\x02')))) {
                      DAT_EXTMEM_7ea8 = '\x01';
                    }
                  }
                  if (param_3 == '\x01') break;
                  if (param_3 == '\x05') {
                    if (DAT_INTMEM_41 == '\x10') {
                      DAT_EXTMEM_7f75 = BANK2_R5;
                      if (BANK2_R5 == 0) {
                        DAT_EXTMEM_caa9 = 0;
                      }
                      else {
                        DAT_EXTMEM_caa9 = 0xff;
                      }
                    }
                  }
                  else if (param_3 == '\x06') {
                    if (DAT_INTMEM_41 == '\0') {
                      DAT_EXTMEM_7fa7 = BANK2_R5 & 7;
                      if (DAT_EXTMEM_7fa7 == 2) {
                        BANK0_R2 = bVar1;
                        BANK0_R7 = uVar2;
                        FUN_CODE_2242();
                      }
                      else if (DAT_EXTMEM_7fa7 == 5) {
                        bVar8 = DAT_EXTMEM_7ead;
                        if ((DAT_EXTMEM_7ead != 0) ||
                           ((bVar8 = DAT_EXTMEM_7f84, DAT_EXTMEM_7f84 == 0 &&
                            (BANK0_R3 = BANK0_R3 & 0xf, bVar8 = DAT_EXTMEM_d25c, DAT_EXTMEM_d25c < 3
                            )))) {
                          BANK2_R5 = BANK2_R5 & 0xf8 | 2;
                          DAT_EXTMEM_7fa7 = 2;
                        }
                        BANK0_R2 = bVar1;
                        BANK0_R7 = uVar2;
                        FUN_CODE_2242(bVar8);
                      }
                      else if (DAT_EXTMEM_7fa2 == 6) {
                        BANK0_R2 = bVar1;
                        BANK0_R7 = uVar2;
                        FUN_CODE_226e();
                      }
                      BANK1_R2 = DAT_EXTMEM_7f7e;
                      BANK1_R3 = DAT_EXTMEM_7f7d;
                      BANK1_R4 = DAT_EXTMEM_7f7c;
                      BANK1_R5 = BANK2_R5;
                      BANK0_R2 = bVar1;
                      BANK0_R7 = uVar2;
                      FUN_CODE_26be(0x7f08);
                      bVar8 = DAT_EXTMEM_7f99;
                    }
                    else {
                      BANK1_R6 = 0;
                    }
                  }
                }
                if (DAT_INTMEM_41 != '\0') break;
                cVar9 = BANK2_R5 == 0x14;
                if ((bool)cVar9) {
                  DAT_INTMEM_51 = 0x2a;
                }
                else if (BANK2_R5 == 6) {
                  DAT_INTMEM_3e = 0x28;
                  DAT_INTMEM_51 = DAT_INTMEM_3e;
                }
                else {
                  DAT_INTMEM_3e = 0x29;
                  DAT_INTMEM_51 = DAT_INTMEM_3e;
                }
                DAT_INTMEM_50 = 1;
                BANK0_R2 = bVar1;
                BANK0_R7 = uVar2;
                FUN_CODE_044f((ushort)bVar7 << 8);
                if (cVar9 == '\0') {
                  if (BANK2_R5 == 6) {
                    BANK0_R3 = 0;
                  }
                  else {
                    BANK0_R3 = 8;
                  }
                  BANK2_R6 = 0;
                }
                else {
                  BANK2_R6 = 0x10;
                  BANK0_R3 = bVar4;
                }
                BANK3_R2 = BANK3_R2 | 1;
                bVar8 = DAT_EXTMEM_7f99;
                if ((BANK2_R6 == 0) || (BANK2_R6 == 8)) {
                  uEXTMEMd82a = 0xff;
                  uEXTMEMd82b = 0xff;
                }
                else {
                  uEXTMEMd82a = 0;
                  uEXTMEMd82b = 0;
                }
              }
              if (DAT_INTMEM_41 != '\x01') break;
              BANK2_R7 = BANK2_R5 & 0xf;
              if (BANK2_R7 == 4) {
                bVar6 = 0x65;
              }
              else if (BANK2_R7 == 2) {
                BANK0_R3 = 100;
              }
              else if (BANK2_R7 == 1) {
                DAT_INTMEM_3e = 99;
                BANK0_R3 = DAT_INTMEM_3e;
              }
              else {
                DAT_INTMEM_3e = 0x62;
                BANK0_R3 = DAT_INTMEM_3e;
              }
              DAT_INTMEM_50 = 1;
              BANK0_R2 = bVar1;
              BANK0_R7 = uVar2;
              DAT_INTMEM_51 = bVar6;
              FUN_CODE_044f((ushort)bVar7 << 8);
              DAT_EXTMEM_7f7c = (BANK2_R5 & 0x80) >> 2 | DAT_EXTMEM_7f7c;
              if (DAT_EXTMEM_7f7c == 0) {
                BANK0_R3 = BANK0_R3 & 0xde;
              }
              else {
                BANK0_R3 = BANK0_R3 & 0xdf | 1;
              }
              BANK3_R2 = BANK3_R2 | 2;
              bVar8 = DAT_EXTMEM_7f99;
            }
            if (DAT_INTMEM_41 == '\x02') break;
            if (DAT_INTMEM_41 == '\x03') {
LAB_CODE_3c3d:
              DAT_INTMEM_50 = 4;
              DAT_INTMEM_51 = 0x15;
              BANK0_R2 = bVar1;
              BANK0_R7 = uVar2;
              FUN_CODE_044f((ushort)bVar7 << 8);
              *(byte *)CONCAT11('\x7f' - (((0x7f < BANK3_R0) << 7) >> 7),BANK3_R0 + 0x80) = BANK2_R5
              ;
              DAT_EXTMEM_7fa3 = 1;
              bVar8 = DAT_EXTMEM_7f99;
            }
            else {
              if (DAT_INTMEM_41 == '\x04') {
LAB_CODE_3c3b:
                BANK3_R0 = BANK3_R0 + 1;
                goto LAB_CODE_3c3d;
              }
              if (DAT_INTMEM_41 == '\x05') {
LAB_CODE_3c39:
                BANK3_R0 = BANK3_R0 + 1;
                goto LAB_CODE_3c3b;
              }
              if (DAT_INTMEM_41 == '\x06') {
                BANK3_R0 = 1;
                goto LAB_CODE_3c39;
              }
              if (DAT_INTMEM_41 == '\a') {
                uEXTMEMcc0e = (BANK2_R5 >> 4 & 1) != 0;
                BANK0_R3 = BANK0_R3 & 1;
                BANK1_R2 = DAT_EXTMEM_7f7e;
                BANK1_R3 = DAT_EXTMEM_7f7d;
                BANK1_R4 = DAT_EXTMEM_7f7c;
                BANK0_R2 = bVar1;
                BANK0_R7 = uVar2;
                BANK1_R5 = BANK2_R5;
                DAT_EXTMEM_7f8a = BANK2_R5;
                FUN_CODE_26be(0x7f07);
                bVar8 = DAT_EXTMEM_7f99;
              }
              else {
                bVar8 = BANK2_R5;
                if (DAT_INTMEM_41 != '\b') {
                  if (DAT_INTMEM_41 == '\v') {
                    DAT_INTMEM_50 = 4;
                    DAT_INTMEM_51 = 0x37;
                    BANK0_R2 = bVar1;
                    BANK0_R7 = uVar2;
                    FUN_CODE_044f((ushort)bVar7 << 8);
                    FUN_CODE_233d();
                    bEXTMEM7ff5 = BANK2_R5 | 0x80;
                    bVar8 = DAT_EXTMEM_7f99;
                  }
                  else if (DAT_INTMEM_41 == '\f') {
                    DAT_INTMEM_50 = 4;
                    DAT_INTMEM_51 = 0x38;
                    BANK0_R2 = bVar1;
                    BANK0_R7 = uVar2;
                    FUN_CODE_044f((ushort)bVar7 << 8);
                    FUN_CODE_233d();
                    bEXTMEM7ff6 = BANK2_R5 | 0x80;
                    bVar8 = DAT_EXTMEM_7f99;
                  }
                  else if (DAT_INTMEM_41 == '\r') {
                    DAT_INTMEM_50 = 4;
                    DAT_INTMEM_51 = 0x39;
                    BANK0_R2 = bVar1;
                    BANK0_R7 = uVar2;
                    FUN_CODE_044f((ushort)bVar7 << 8);
                    FUN_CODE_233d();
                    bEXTMEM7ff7 = BANK2_R5 | 0x80;
                    bVar8 = DAT_EXTMEM_7f99;
                  }
                  else if (DAT_INTMEM_41 == '\x0e') {
                    DAT_INTMEM_50 = 4;
                    DAT_INTMEM_51 = 0x3a;
                    BANK0_R2 = bVar1;
                    BANK0_R7 = uVar2;
                    FUN_CODE_044f((ushort)bVar7 << 8);
                    FUN_CODE_233d();
                    bEXTMEM7ff8 = BANK2_R5 | 0x80;
                    bVar8 = DAT_EXTMEM_7f99;
                  }
                  else if ((DAT_INTMEM_41 == '\x0f') || (DAT_INTMEM_41 == '\x10')) {
                    DAT_INTMEM_50 = 4;
                    DAT_INTMEM_51 = 0x3b;
                    BANK0_R2 = bVar1;
                    BANK0_R7 = uVar2;
                    FUN_CODE_044f((ushort)bVar7 << 8);
                    bVar8 = DAT_EXTMEM_7f99;
                  }
                  else if (DAT_INTMEM_41 == '\x11') {
                    DAT_INTMEM_50 = 0x20;
                    DAT_INTMEM_51 = 0x34;
                    BANK0_R2 = bVar1;
                    BANK0_R7 = uVar2;
                    FUN_CODE_044f((ushort)bVar7 << 8);
                    if ((BANK2_R5 & 1) == BANK0_R4) {
                      BANK0_R2 = bVar1;
                      BANK0_R7 = uVar2;
                      FUN_CODE_2211(0x7f01);
                      param_2 = DAT_EXTMEM_7ff1;
                    }
                    else {
                      BANK1_R2 = DAT_EXTMEM_7f7e;
                      BANK1_R3 = DAT_EXTMEM_7f7d;
                      BANK1_R4 = DAT_EXTMEM_7f7c;
                      BANK1_R5 = BANK2_R5;
                      BANK0_R2 = bVar1;
                      BANK0_R7 = uVar2;
                      FUN_CODE_26be(0x7f0f);
                      DAT_EXTMEM_7fe0 = '\x01';
                      param_2 = DAT_EXTMEM_7ff1;
                    }
                    DAT_EXTMEM_7ff1 = BANK2_R5 & 1;
                    DAT_EXTMEM_ca0c = 1;
                    bVar8 = DAT_EXTMEM_7f99;
                  }
                  else if (DAT_INTMEM_41 == 'W') {
                    DAT_INTMEM_50 = 0x20;
                    DAT_INTMEM_51 = 0x30;
                    BANK0_R2 = bVar1;
                    BANK0_R7 = uVar2;
                    FUN_CODE_044f((ushort)bVar7 << 8);
                    DAT_EXTMEM_cad0 = 1;
                    DAT_EXTMEM_7fe0 = '\x01';
                    FUN_CODE_2211(0x7f00);
                    DAT_EXTMEM_7ff2 = 1;
                    bVar8 = DAT_EXTMEM_7f99;
                  }
                  else if (DAT_INTMEM_41 == -0x40) {
                    DAT_EXTMEM_7fde = BANK2_R5 - 1;
                    DAT_INTMEM_50 = 8;
                    DAT_INTMEM_51 = 0x3d;
                    uVar10 = 0x7f;
                    BANK0_R2 = bVar1;
                    BANK0_R7 = uVar2;
                    FUN_CODE_044f(0x7f00);
                    FUN_CODE_2211(CONCAT11(uVar10,1));
                    bVar8 = DAT_EXTMEM_7f99;
                    if (BANK2_R5 == 0) {
                      DAT_EXTMEM_7fdd = '\x01';
                    }
                    else {
                      DAT_EXTMEM_7fdd = '\0';
                    }
                  }
                  else if (DAT_INTMEM_41 == -0x3f) {
                    DAT_INTMEM_50 = 8;
                    DAT_INTMEM_51 = 0x3e;
                    BANK0_R2 = bVar1;
                    BANK0_R7 = uVar2;
                    FUN_CODE_044f((ushort)bVar7 << 8);
                    if (DAT_EXTMEM_7f79 == '\0') {
                      BANK0_R2 = bVar1;
                      BANK0_R7 = uVar2;
                      FUN_CODE_2211(0x7f01,0);
                    }
                    bVar8 = DAT_EXTMEM_7f99;
                    if (BANK2_R5 != 0) {
                      DAT_EXTMEM_7fdd = '\0';
                    }
                  }
                  else {
                    bVar8 = DAT_EXTMEM_7f99;
                    if (DAT_INTMEM_41 == -0x3e) {
                      uVar11 = 0x7fde;
                      bVar8 = DAT_EXTMEM_7fde;
                      if (DAT_EXTMEM_7fde < 0x10) {
                        DAT_EXTMEM_7fdf =
                             (DAT_EXTMEM_7fdf -
                             *(char *)CONCAT11('\x7f' - (((0x3f < DAT_EXTMEM_7fde) << 7) >> 7),
                                               DAT_EXTMEM_7fde - 0x40)) + BANK2_R5;
                        *(byte *)CONCAT11('\x7f' - (((0x3f < DAT_EXTMEM_7fde) << 7) >> 7),
                                          DAT_EXTMEM_7fde - 0x40) = BANK2_R5;
                        bVar8 = DAT_EXTMEM_7fdf + 1 & 0x3f;
                        uVar11 = 0xd230;
                        param_2 = bVar3;
                        DAT_EXTMEM_d230 = bVar8;
                      }
                      DAT_INTMEM_50 = 8;
                      DAT_INTMEM_51 = 0x3f;
                      uVar11 = uVar11 & 0xff00;
                      BANK0_R2 = bVar1;
                      BANK0_R7 = uVar2;
                      FUN_CODE_044f(uVar11,bVar8);
                      DAT_INTMEM_50 = 8;
                      DAT_INTMEM_51 = 0x68;
                      FUN_CODE_044f(uVar11 & 0xff00);
                      DAT_INTMEM_50 = 8;
                      DAT_INTMEM_51 = 3;
                      FUN_CODE_044f(1);
                      DAT_INTMEM_51 = DAT_EXTMEM_7fde;
                      DAT_INTMEM_50 = 8;
                      uVar10 = 0x7f;
                      FUN_CODE_044f(0x7f01);
                      DAT_INTMEM_50 = 8;
                      DAT_INTMEM_51 = BANK2_R5;
                      FUN_CODE_044f(CONCAT11(uVar10,1));
                      DAT_INTMEM_51 = DAT_EXTMEM_d230;
                      DAT_INTMEM_50 = 8;
                      FUN_CODE_044f(0xd201);
                      if (DAT_EXTMEM_7f79 == '\0') {
                        BANK0_R2 = bVar1;
                        BANK0_R7 = uVar2;
                        FUN_CODE_2211(0x7f01,0);
                      }
                      cVar9 = DAT_EXTMEM_7fdd;
                      bVar8 = DAT_EXTMEM_7f99;
                      if ((BANK2_R5 == 0x3f) && (DAT_EXTMEM_7fdd != '\0')) {
                        DAT_EXTMEM_7fdd = '\0';
                        BANK0_R2 = bVar1;
                        BANK0_R7 = uVar2;
                        FUN_CODE_1f5c(cVar9);
                        bVar8 = DAT_EXTMEM_7f99;
                      }
                    }
                  }
                }
              }
            }
          }
          DAT_EXTMEM_7f87 = 1;
          DAT_EXTMEM_7ffa = 0;
          BANK1_R7 = 0;
          DAT_EXTMEM_7fe2 = BANK2_R5 & 0xc;
          DAT_EXTMEM_7f86 = BANK2_R5;
        } while (((DAT_EXTMEM_7fe2 == 0) && (DAT_EXTMEM_7ff9 == '\0')) || (DAT_EXTMEM_7fff != '\0'))
        ;
        BANK1_R7 = 1;
      } while (3 < BANK0_R3);
      switch(DAT_EXTMEM_7fe2) {
      case 0:
        DAT_EXTMEM_7ff9 = '\0';
        DAT_EXTMEM_7f93 = DAT_EXTMEM_7f93 | 8;
        DAT_EXTMEM_c804 = 0x84;
        BANK0_R6 = *(byte *)(((BANK2_R5 >> 7) << 1 | (BANK2_R5 & 0x40) >> 6) + 0x28) & 0xf;
        BANK0_R3 = BANK0_R3 & 6 | cVar9 * -0x10;
        BANK0_R3 = BANK0_R3 | 0xf;
        bEXTMEMc870 = 0;
        uEXTMEMc871 = 0;
        BANK3_R1 = 0;
        break;
      case 4:
        DAT_EXTMEM_7ff9 = '\x01';
        DAT_EXTMEM_7f93 = DAT_EXTMEM_7f93 & 0xf7;
        BANK0_R2 = bVar1;
        BANK0_R7 = uVar2;
        FUN_CODE_2820(0x7f00);
        uEXTMEMcc00 = 0;
        BANK0_R3 = BANK0_R3 & 0xfd | 9;
        DAT_EXTMEM_c804 = 0x85;
        uEXTMEMcc5e = 0;
        goto LAB_CODE_38da;
      case 8:
        DAT_EXTMEM_7ff9 = '\x02';
        DAT_EXTMEM_7f93 = DAT_EXTMEM_7f93 & 0xf7;
        BANK0_R2 = bVar1;
        BANK0_R7 = uVar2;
        FUN_CODE_2820(0x7f00);
        uEXTMEMcc00 = 0;
        if ((bEXTMEMc84b & 1) == 0) {
          BANK0_R3 = BANK0_R3 & 0xd | 0x70;
        }
        else {
          uEXTMEMc87d = 0x20;
          uEXTMEMc87e = 0xff;
          uEXTMEMc87f = 1;
          bEXTMEMc870 = DAT_EXTMEM_d804;
          uEXTMEMc871 = 0x80;
          BANK0_R3 = BANK0_R3 & 0xd | 0x10;
        }
        goto LAB_CODE_38da;
      case 0xc:
        DAT_EXTMEM_7ff9 = '\x03';
        DAT_EXTMEM_7f93 = DAT_EXTMEM_7f93 & 0xf7;
        BANK0_R2 = bVar1;
        BANK0_R7 = uVar2;
        FUN_CODE_2820(0x7f00);
        uEXTMEMcc00 = 0;
        bEXTMEMc870 = DAT_EXTMEM_d804 << 4;
        BANK0_R3 = BANK0_R3 & 0xb0 | 0x90;
        goto LAB_CODE_38da;
      }
    }
  } while( true );
}



/* =========================================================
 * CODE:3936  FUN_CODE_3936  size=343
 * ========================================================= */

void FUN_CODE_3936(char param_1,char param_2)

{
  byte bVar1;
  undefined1 uVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  undefined1 uVar11;
  ushort uVar12;
  
  uVar2 = BANK0_R7;
  bVar1 = BANK0_R2;
code_c0x3936:
  uEXTMEMc600 = false;
code_c0x3938:
  BANK0_R3 = BANK0_R3 & 1;
  DAT_EXTMEM_7fe2 = DAT_EXTMEM_c850 & 1;
  if (DAT_EXTMEM_7fe2 != 0) {
    BANK0_R2 = bVar1;
    BANK0_R7 = uVar2;
    FUN_CODE_129a(DAT_EXTMEM_7fe2);
    uEXTMEMcc00 = 0;
    uEXTMEMce76 = DAT_EXTMEM_7fa5;
    FUN_CODE_2820(0xce00);
    uEXTMEMc600 = (BANK2_R5 >> 5 & 1) != 0;
    BANK0_R3 = BANK0_R3 & 1 | ~DAT_EXTMEM_d804;
    bVar10 = DAT_EXTMEM_d80d;
    while (bVar10 != 0xf) {
      BANK0_R4 = BANK0_R4 & 0xf;
      bVar10 = ~DAT_EXTMEM_d804 & 0xf | DAT_EXTMEM_d80d;
    }
    cVar4 = '\x05';
    do {
      cVar4 = cVar4 + -1;
    } while (cVar4 != '\0');
  }
  bVar10 = BANK0_R3;
  if (DAT_EXTMEM_7fe2 == 0 && DAT_EXTMEM_7fa2 != 4) {
    BANK1_R2 = DAT_EXTMEM_7f7e;
    BANK1_R3 = DAT_EXTMEM_7f7d;
    BANK1_R4 = DAT_EXTMEM_7f7c;
    BANK1_R5 = BANK2_R5;
    bVar6 = DAT_EXTMEM_7fe2;
    BANK0_R2 = bVar1;
    BANK0_R7 = uVar2;
    FUN_CODE_26be(0x7f05);
    bVar10 = DAT_EXTMEM_7f99;
  }
  else {
    BANK0_R3 = BANK0_R3 | 0x10;
    DAT_EXTMEM_7fa2 = 2;
    DAT_INTMEM_27 = '\x01';
    bVar6 = DAT_EXTMEM_7f8d;
    if (DAT_EXTMEM_7ff9 == '\0') {
      BANK0_R4 = *(byte *)(((BANK2_R5 >> 7) << 1 | (BANK2_R5 & 0x40) >> 6) + 0x28) & 0xf;
      bVar6 = DAT_EXTMEM_7f8d << 4;
      BANK0_R3 = bVar10 & 0xf | bVar6;
    }
    if ((DAT_EXTMEM_d25c & 0xf) == 0) {
      BANK0_R3 = BANK0_R3 & 0xfd;
    }
    DAT_EXTMEM_7f9c = 0;
    DAT_EXTMEM_7f85 = 0;
    DAT_EXTMEM_7f9e = 0;
    DAT_EXTMEM_7f9f = 0;
    DAT_EXTMEM_7fa0 = 0;
    DAT_EXTMEM_7fa1 = 0;
    DAT_EXTMEM_7fbc = 0;
    DAT_EXTMEM_7f8d = DAT_EXTMEM_7f8d | DAT_EXTMEM_7fe2;
    bVar10 = DAT_EXTMEM_7f99;
  }
LAB_CODE_400a:
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            DAT_EXTMEM_7f99 = bVar10;
            bVar3 = DAT_EXTMEM_7fdf;
            bVar8 = BANK2_R4;
            bVar5 = BANK0_R3;
            DAT_INTMEM_41 = DAT_INTMEM_41 + '\x01';
            if (DAT_INTMEM_41 == '\0') {
              param_2 = param_2 + '\x01';
            }
            BANK2_R4 = BANK2_R4 + 1;
            if (BANK2_R3 <= BANK2_R4) {
              if ((DAT_EXTMEM_7fec == '\x01') && (DAT_EXTMEM_7ea8 != '\0')) {
                DAT_EXTMEM_7ea8 = 0;
                DAT_EXTMEM_ca20 = 2;
                DAT_EXTMEM_ca21 = 1;
                uEXTMEMca22 = 0;
                DAT_EXTMEM_ca23 = 0;
                uEXTMEMca08 = 1;
                BANK0_R2 = bVar1;
                BANK0_R7 = uVar2;
                return;
              }
              if ((((DAT_EXTMEM_7fec == '\x01') && (DAT_EXTMEM_7fe0 == '\0')) &&
                  (DAT_EXTMEM_7ffb == '\0')) && (DAT_EXTMEM_7f79 == '\0')) {
                DAT_EXTMEM_ca20 = 1;
                DAT_EXTMEM_ca21 = 0;
                uEXTMEMca08 = 1;
                DAT_EXTMEM_7f9d = 0;
              }
              if ((((BANK3_R2 & 1) == 0) || (bVar10 = DAT_EXTMEM_7f7d, DAT_EXTMEM_7f7d == BANK2_R6))
                 && (((BANK3_R2 >> 1 & 1) == 0 ||
                     (bVar10 = DAT_EXTMEM_7f7e, BANK2_R7 <= DAT_EXTMEM_7f7e)))) {
                BANK0_R2 = bVar1;
                BANK0_R7 = uVar2;
                if (((BANK3_R2 >> 1 & 1) == 1) && ((BANK2_R7 < bVar1) << 7 < '\0')) {
                  FUN_CODE_2242(DAT_EXTMEM_7f7e);
                  cVar7 = BANK2_R7 + 1;
                  cVar4 = '\x01';
                  while (cVar7 = cVar7 + -1, cVar7 != '\0') {
                    cVar4 = cVar4 * '\x02';
                  }
                  DAT_EXTMEM_7fed = cVar4 - 1;
                  BANK0_R2 = BANK0_R2 & 0xf6;
                  uEXTMEMcc05 = 1;
                  DAT_EXTMEM_cc7c = 0xf;
                  DAT_EXTMEM_cc7d = 0xf;
                  DAT_EXTMEM_7f7e = BANK2_R7;
                  DAT_EXTMEM_d804 = DAT_EXTMEM_7fed;
                  bEXTMEMd80a = DAT_EXTMEM_7fed;
                  bEXTMEMd80b = DAT_EXTMEM_7fed;
                  if ((4 < DAT_EXTMEM_7fa2) && (BANK2_R7 != 0)) {
                    BANK1_R2 = BANK2_R7;
                    BANK1_R3 = DAT_EXTMEM_7f7d;
                    BANK1_R4 = DAT_EXTMEM_7f7c;
                    BANK1_R5 = 0;
                    FUN_CODE_26be(0x7f06);
                  }
                }
              }
              else {
                if ((BANK3_R2 & 1) != 0) {
                  DAT_EXTMEM_7f7d = BANK2_R6;
                }
                BANK0_R2 = bVar1;
                BANK0_R7 = uVar2;
                FUN_CODE_270e(bVar10);
                if ((BANK3_R2 >> 1 & 1) == 1) {
                  DAT_EXTMEM_7f7e = BANK2_R7;
                }
              }
              if (DAT_INTMEM_27 != '\0') {
                if (DAT_EXTMEM_7f8d == 0) {
                  FUN_CODE_41e1(0);
                  return;
                }
                DAT_EXTMEM_cc7c = 0xf;
                if (DAT_EXTMEM_7ff9 == '\0') {
                  DAT_EXTMEM_7f93 = DAT_EXTMEM_7f93 | 8;
                }
                DAT_EXTMEM_c804 = 0x84;
                DAT_EXTMEM_7fa2 = 5;
                BANK0_R2 = BANK0_R2 | 1;
                if (DAT_EXTMEM_7fab != '\0') {
                  return;
                }
                DAT_INTMEM_50 = 1;
                DAT_INTMEM_51 = 9;
                FUN_CODE_044f(0x7f00,0);
                bVar1 = BANK0_R2;
                DAT_EXTMEM_cc0b = 0;
                BANK0_R2 = BANK0_R2 | 2;
                DAT_EXTMEM_7fa2 = 6;
                if (DAT_EXTMEM_7f84 == 0) {
                  BANK0_R2 = bVar1 | 0x22;
                }
                if ((bCODE00a6 >> 4 & 1) != 1) {
                  FUN_CODE_226e(bCODE00a6);
                }
                DAT_EXTMEM_7fa1 = 0;
                return;
              }
              return;
            }
            BANK3_R0 = 0;
            bVar8 = bVar8 + 0x67;
            cVar4 = ((0x99 < BANK2_R4) << 7) >> 7;
            bVar9 = 0xca - cVar4;
            BANK2_R5 = *(byte *)CONCAT11(bVar9,bVar8);
            bVar10 = DAT_EXTMEM_7f99;
            if (BANK2_R0 == '\0') break;
            if ((param_1 != '\0') &&
               (((param_2 == '\0' || (param_2 == '\x01')) || (param_2 == '\x02')))) {
              DAT_EXTMEM_7ea8 = '\x01';
            }
          }
          if (param_2 == '\x01') break;
          if (param_2 == '\x05') {
            if (DAT_INTMEM_41 == '\x10') {
              DAT_EXTMEM_7f75 = BANK2_R5;
              if (BANK2_R5 == 0) {
                DAT_EXTMEM_caa9 = 0;
              }
              else {
                DAT_EXTMEM_caa9 = 0xff;
              }
            }
          }
          else if (param_2 == '\x06') {
            if (DAT_INTMEM_41 == '\0') {
              DAT_EXTMEM_7fa7 = BANK2_R5 & 7;
              if (DAT_EXTMEM_7fa7 == 2) {
                BANK0_R2 = bVar1;
                BANK0_R7 = uVar2;
                FUN_CODE_2242();
              }
              else if (DAT_EXTMEM_7fa7 == 5) {
                bVar10 = DAT_EXTMEM_7ead;
                if ((DAT_EXTMEM_7ead != 0) ||
                   ((bVar10 = DAT_EXTMEM_7f84, DAT_EXTMEM_7f84 == 0 &&
                    (BANK0_R3 = BANK0_R3 & 0xf, bVar10 = DAT_EXTMEM_d25c, DAT_EXTMEM_d25c < 3)))) {
                  BANK2_R5 = BANK2_R5 & 0xf8 | 2;
                  DAT_EXTMEM_7fa7 = 2;
                }
                BANK0_R2 = bVar1;
                BANK0_R7 = uVar2;
                FUN_CODE_2242(bVar10);
              }
              else if (DAT_EXTMEM_7fa2 == 6) {
                BANK0_R2 = bVar1;
                BANK0_R7 = uVar2;
                FUN_CODE_226e();
              }
              BANK1_R2 = DAT_EXTMEM_7f7e;
              BANK1_R3 = DAT_EXTMEM_7f7d;
              BANK1_R4 = DAT_EXTMEM_7f7c;
              BANK1_R5 = BANK2_R5;
              BANK0_R2 = bVar1;
              BANK0_R7 = uVar2;
              FUN_CODE_26be(0x7f08);
              bVar10 = DAT_EXTMEM_7f99;
            }
            else {
              BANK1_R6 = 0;
            }
          }
        }
        if (DAT_INTMEM_41 != '\0') break;
        cVar4 = BANK2_R5 == 0x14;
        if ((bool)cVar4) {
          DAT_INTMEM_51 = 0x2a;
        }
        else if (BANK2_R5 == 6) {
          DAT_INTMEM_3e = 0x28;
          DAT_INTMEM_51 = DAT_INTMEM_3e;
        }
        else {
          DAT_INTMEM_3e = 0x29;
          DAT_INTMEM_51 = DAT_INTMEM_3e;
        }
        DAT_INTMEM_50 = 1;
        BANK0_R2 = bVar1;
        BANK0_R7 = uVar2;
        FUN_CODE_044f((ushort)bVar9 << 8);
        if (cVar4 == '\0') {
          if (BANK2_R5 == 6) {
            BANK0_R3 = 0;
          }
          else {
            BANK0_R3 = 8;
          }
          BANK2_R6 = 0;
        }
        else {
          BANK2_R6 = 0x10;
          BANK0_R3 = bVar5;
        }
        BANK3_R2 = BANK3_R2 | 1;
        bVar10 = DAT_EXTMEM_7f99;
        if ((BANK2_R6 == 0) || (BANK2_R6 == 8)) {
          uEXTMEMd82a = 0xff;
          uEXTMEMd82b = 0xff;
        }
        else {
          uEXTMEMd82a = 0;
          uEXTMEMd82b = 0;
        }
      }
      if (DAT_INTMEM_41 != '\x01') break;
      BANK2_R7 = BANK2_R5 & 0xf;
      if (BANK2_R7 == 4) {
        bVar8 = 0x65;
      }
      else if (BANK2_R7 == 2) {
        BANK0_R3 = 100;
      }
      else if (BANK2_R7 == 1) {
        DAT_INTMEM_3e = 99;
        BANK0_R3 = DAT_INTMEM_3e;
      }
      else {
        DAT_INTMEM_3e = 0x62;
        BANK0_R3 = DAT_INTMEM_3e;
      }
      DAT_INTMEM_50 = 1;
      BANK0_R2 = bVar1;
      BANK0_R7 = uVar2;
      DAT_INTMEM_51 = bVar8;
      FUN_CODE_044f((ushort)bVar9 << 8);
      DAT_EXTMEM_7f7c = (BANK2_R5 & 0x80) >> 2 | DAT_EXTMEM_7f7c;
      if (DAT_EXTMEM_7f7c == 0) {
        BANK0_R3 = BANK0_R3 & 0xde;
      }
      else {
        BANK0_R3 = BANK0_R3 & 0xdf | 1;
      }
      BANK3_R2 = BANK3_R2 | 2;
      bVar10 = DAT_EXTMEM_7f99;
    }
    if (DAT_INTMEM_41 != '\x02') {
      if (DAT_INTMEM_41 != '\x03') {
        if (DAT_INTMEM_41 != '\x04') {
          if (DAT_INTMEM_41 != '\x05') {
            if (DAT_INTMEM_41 != '\x06') {
              if (DAT_INTMEM_41 == '\a') {
                uEXTMEMcc0e = (BANK2_R5 >> 4 & 1) != 0;
                BANK0_R3 = BANK0_R3 & 1;
                BANK1_R2 = DAT_EXTMEM_7f7e;
                BANK1_R3 = DAT_EXTMEM_7f7d;
                BANK1_R4 = DAT_EXTMEM_7f7c;
                BANK0_R2 = bVar1;
                BANK0_R7 = uVar2;
                BANK1_R5 = BANK2_R5;
                DAT_EXTMEM_7f8a = BANK2_R5;
                FUN_CODE_26be(0x7f07);
                bVar10 = DAT_EXTMEM_7f99;
              }
              else {
                bVar10 = BANK2_R5;
                if (DAT_INTMEM_41 != '\b') {
                  if (DAT_INTMEM_41 == '\v') {
                    DAT_INTMEM_50 = 4;
                    DAT_INTMEM_51 = 0x37;
                    BANK0_R2 = bVar1;
                    BANK0_R7 = uVar2;
                    FUN_CODE_044f((ushort)bVar9 << 8);
                    FUN_CODE_233d();
                    bEXTMEM7ff5 = BANK2_R5 | 0x80;
                    bVar10 = DAT_EXTMEM_7f99;
                  }
                  else if (DAT_INTMEM_41 == '\f') {
                    DAT_INTMEM_50 = 4;
                    DAT_INTMEM_51 = 0x38;
                    BANK0_R2 = bVar1;
                    BANK0_R7 = uVar2;
                    FUN_CODE_044f((ushort)bVar9 << 8);
                    FUN_CODE_233d();
                    bEXTMEM7ff6 = BANK2_R5 | 0x80;
                    bVar10 = DAT_EXTMEM_7f99;
                  }
                  else if (DAT_INTMEM_41 == '\r') {
                    DAT_INTMEM_50 = 4;
                    DAT_INTMEM_51 = 0x39;
                    BANK0_R2 = bVar1;
                    BANK0_R7 = uVar2;
                    FUN_CODE_044f((ushort)bVar9 << 8);
                    FUN_CODE_233d();
                    bEXTMEM7ff7 = BANK2_R5 | 0x80;
                    bVar10 = DAT_EXTMEM_7f99;
                  }
                  else if (DAT_INTMEM_41 == '\x0e') {
                    DAT_INTMEM_50 = 4;
                    DAT_INTMEM_51 = 0x3a;
                    BANK0_R2 = bVar1;
                    BANK0_R7 = uVar2;
                    FUN_CODE_044f((ushort)bVar9 << 8);
                    FUN_CODE_233d();
                    bEXTMEM7ff8 = BANK2_R5 | 0x80;
                    bVar10 = DAT_EXTMEM_7f99;
                  }
                  else if ((DAT_INTMEM_41 == '\x0f') || (DAT_INTMEM_41 == '\x10')) {
                    DAT_INTMEM_50 = 4;
                    DAT_INTMEM_51 = 0x3b;
                    BANK0_R2 = bVar1;
                    BANK0_R7 = uVar2;
                    FUN_CODE_044f((ushort)bVar9 << 8);
                    bVar10 = DAT_EXTMEM_7f99;
                  }
                  else if (DAT_INTMEM_41 == '\x11') {
                    DAT_INTMEM_50 = 0x20;
                    DAT_INTMEM_51 = 0x34;
                    BANK0_R2 = bVar1;
                    BANK0_R7 = uVar2;
                    FUN_CODE_044f((ushort)bVar9 << 8);
                    if ((BANK2_R5 & 1) == BANK0_R4) {
                      BANK0_R2 = bVar1;
                      BANK0_R7 = uVar2;
                      FUN_CODE_2211(0x7f01);
                      bVar6 = DAT_EXTMEM_7ff1;
                    }
                    else {
                      BANK1_R2 = DAT_EXTMEM_7f7e;
                      BANK1_R3 = DAT_EXTMEM_7f7d;
                      BANK1_R4 = DAT_EXTMEM_7f7c;
                      BANK1_R5 = BANK2_R5;
                      BANK0_R2 = bVar1;
                      BANK0_R7 = uVar2;
                      FUN_CODE_26be(0x7f0f);
                      DAT_EXTMEM_7fe0 = '\x01';
                      bVar6 = DAT_EXTMEM_7ff1;
                    }
                    DAT_EXTMEM_7ff1 = BANK2_R5 & 1;
                    DAT_EXTMEM_ca0c = 1;
                    bVar10 = DAT_EXTMEM_7f99;
                  }
                  else if (DAT_INTMEM_41 == 'W') {
                    DAT_INTMEM_50 = 0x20;
                    DAT_INTMEM_51 = 0x30;
                    BANK0_R2 = bVar1;
                    BANK0_R7 = uVar2;
                    FUN_CODE_044f((ushort)bVar9 << 8);
                    DAT_EXTMEM_cad0 = 1;
                    DAT_EXTMEM_7fe0 = '\x01';
                    FUN_CODE_2211(0x7f00);
                    DAT_EXTMEM_7ff2 = 1;
                    bVar10 = DAT_EXTMEM_7f99;
                  }
                  else if (DAT_INTMEM_41 == -0x40) {
                    DAT_EXTMEM_7fde = BANK2_R5 - 1;
                    DAT_INTMEM_50 = 8;
                    DAT_INTMEM_51 = 0x3d;
                    uVar11 = 0x7f;
                    BANK0_R2 = bVar1;
                    BANK0_R7 = uVar2;
                    FUN_CODE_044f(0x7f00);
                    FUN_CODE_2211(CONCAT11(uVar11,1));
                    bVar10 = DAT_EXTMEM_7f99;
                    if (BANK2_R5 == 0) {
                      DAT_EXTMEM_7fdd = '\x01';
                    }
                    else {
                      DAT_EXTMEM_7fdd = '\0';
                    }
                  }
                  else if (DAT_INTMEM_41 == -0x3f) {
                    DAT_INTMEM_50 = 8;
                    DAT_INTMEM_51 = 0x3e;
                    BANK0_R2 = bVar1;
                    BANK0_R7 = uVar2;
                    FUN_CODE_044f((ushort)bVar9 << 8);
                    if (DAT_EXTMEM_7f79 == '\0') {
                      BANK0_R2 = bVar1;
                      BANK0_R7 = uVar2;
                      FUN_CODE_2211(0x7f01,0);
                    }
                    bVar10 = DAT_EXTMEM_7f99;
                    if (BANK2_R5 != 0) {
                      DAT_EXTMEM_7fdd = '\0';
                    }
                  }
                  else {
                    bVar10 = DAT_EXTMEM_7f99;
                    if (DAT_INTMEM_41 == -0x3e) {
                      uVar12 = 0x7fde;
                      bVar10 = DAT_EXTMEM_7fde;
                      if (DAT_EXTMEM_7fde < 0x10) {
                        DAT_EXTMEM_7fdf =
                             (DAT_EXTMEM_7fdf -
                             *(char *)CONCAT11('\x7f' - (((0x3f < DAT_EXTMEM_7fde) << 7) >> 7),
                                               DAT_EXTMEM_7fde - 0x40)) + BANK2_R5;
                        *(byte *)CONCAT11('\x7f' - (((0x3f < DAT_EXTMEM_7fde) << 7) >> 7),
                                          DAT_EXTMEM_7fde - 0x40) = BANK2_R5;
                        bVar10 = DAT_EXTMEM_7fdf + 1 & 0x3f;
                        uVar12 = 0xd230;
                        bVar6 = bVar3;
                        DAT_EXTMEM_d230 = bVar10;
                      }
                      DAT_INTMEM_50 = 8;
                      DAT_INTMEM_51 = 0x3f;
                      uVar12 = uVar12 & 0xff00;
                      BANK0_R2 = bVar1;
                      BANK0_R7 = uVar2;
                      FUN_CODE_044f(uVar12,bVar10);
                      DAT_INTMEM_50 = 8;
                      DAT_INTMEM_51 = 0x68;
                      FUN_CODE_044f(uVar12 & 0xff00);
                      DAT_INTMEM_50 = 8;
                      DAT_INTMEM_51 = 3;
                      FUN_CODE_044f(1);
                      DAT_INTMEM_51 = DAT_EXTMEM_7fde;
                      DAT_INTMEM_50 = 8;
                      uVar11 = 0x7f;
                      FUN_CODE_044f(0x7f01);
                      DAT_INTMEM_50 = 8;
                      DAT_INTMEM_51 = BANK2_R5;
                      FUN_CODE_044f(CONCAT11(uVar11,1));
                      DAT_INTMEM_51 = DAT_EXTMEM_d230;
                      DAT_INTMEM_50 = 8;
                      FUN_CODE_044f(0xd201);
                      if (DAT_EXTMEM_7f79 == '\0') {
                        BANK0_R2 = bVar1;
                        BANK0_R7 = uVar2;
                        FUN_CODE_2211(0x7f01,0);
                      }
                      cVar4 = DAT_EXTMEM_7fdd;
                      bVar10 = DAT_EXTMEM_7f99;
                      if ((BANK2_R5 == 0x3f) && (DAT_EXTMEM_7fdd != '\0')) {
                        DAT_EXTMEM_7fdd = '\0';
                        BANK0_R2 = bVar1;
                        BANK0_R7 = uVar2;
                        FUN_CODE_1f5c(cVar4);
                        bVar10 = DAT_EXTMEM_7f99;
                      }
                    }
                  }
                }
              }
              goto LAB_CODE_400a;
            }
            BANK3_R0 = 1;
          }
          BANK3_R0 = BANK3_R0 + 1;
        }
        BANK3_R0 = BANK3_R0 + 1;
      }
      DAT_INTMEM_50 = 4;
      DAT_INTMEM_51 = 0x15;
      BANK0_R2 = bVar1;
      BANK0_R7 = uVar2;
      FUN_CODE_044f((ushort)bVar9 << 8);
      *(byte *)CONCAT11('\x7f' - (((0x7f < BANK3_R0) << 7) >> 7),BANK3_R0 + 0x80) = BANK2_R5;
      DAT_EXTMEM_7fa3 = 1;
      bVar10 = DAT_EXTMEM_7f99;
      goto LAB_CODE_400a;
    }
    DAT_EXTMEM_7f87 = 1;
    DAT_EXTMEM_7ffa = 0;
    BANK1_R7 = 0;
    DAT_EXTMEM_7fe2 = BANK2_R5 & 0xc;
    DAT_EXTMEM_7f86 = BANK2_R5;
    if (((DAT_EXTMEM_7fe2 != 0) || (DAT_EXTMEM_7ff9 != '\0')) && (DAT_EXTMEM_7fff == '\0')) {
      BANK1_R7 = 1;
      if (BANK0_R3 < 4) {
        switch(DAT_EXTMEM_7fe2) {
        case 0:
          DAT_EXTMEM_7ff9 = '\0';
          DAT_EXTMEM_7f93 = DAT_EXTMEM_7f93 | 8;
          DAT_EXTMEM_c804 = 0x84;
          BANK0_R6 = *(byte *)(((BANK2_R5 >> 7) << 1 | (BANK2_R5 & 0x40) >> 6) + 0x28) & 0xf;
          BANK0_R3 = BANK0_R3 & 6 | cVar4 * -0x10;
          BANK0_R3 = BANK0_R3 | 0xf;
          bEXTMEMc870 = 0;
          uEXTMEMc871 = 0;
          for (BANK3_R1 = 0; BANK3_R1 < 4; BANK3_R1 = BANK3_R1 + 1) {
            BANK0_R4 = BANK3_R1 + 0x28;
            cVar4 = -(((0xd7 < BANK3_R1) << 7) >> 7);
            BANK0_R5 = BANK0_R5 & 0xcf;
            *(undefined1 *)CONCAT11(cVar4 + -0x32,bVar6) =
                 *(undefined1 *)CONCAT11(cVar4 + -0x32,BANK0_R4);
          }
          break;
        case 4:
          DAT_EXTMEM_7ff9 = '\x01';
          DAT_EXTMEM_7f93 = DAT_EXTMEM_7f93 & 0xf7;
          BANK0_R2 = bVar1;
          BANK0_R7 = uVar2;
          FUN_CODE_2820(0x7f00);
          uEXTMEMcc00 = 0;
          BANK0_R3 = BANK0_R3 & 0xfd | 9;
          DAT_EXTMEM_c804 = 0x85;
          uEXTMEMcc5e = 0;
          break;
        case 8:
          DAT_EXTMEM_7ff9 = '\x02';
          DAT_EXTMEM_7f93 = DAT_EXTMEM_7f93 & 0xf7;
          BANK0_R2 = bVar1;
          BANK0_R7 = uVar2;
          FUN_CODE_2820(0x7f00);
          uEXTMEMcc00 = 0;
          if ((bEXTMEMc84b & 1) == 0) {
            BANK0_R3 = BANK0_R3 & 0xd | 0x70;
          }
          else {
            uEXTMEMc87d = 0x20;
            uEXTMEMc87e = 0xff;
            uEXTMEMc87f = 1;
            bEXTMEMc870 = DAT_EXTMEM_d804;
            uEXTMEMc871 = 0x80;
            BANK0_R3 = BANK0_R3 & 0xd | 0x10;
          }
          break;
        case 0xc:
          DAT_EXTMEM_7ff9 = '\x03';
          DAT_EXTMEM_7f93 = DAT_EXTMEM_7f93 & 0xf7;
          BANK0_R2 = bVar1;
          BANK0_R7 = uVar2;
          FUN_CODE_2820(0x7f00);
          uEXTMEMcc00 = 0;
          bEXTMEMc870 = DAT_EXTMEM_d804 << 4;
          BANK0_R3 = BANK0_R3 & 0xb0 | 0x90;
        }
      }
      if (4 < DAT_EXTMEM_7fa2) {
        uEXTMEMc600 = (BANK2_R5 >> 5 & 1) != 0;
        BANK0_R3 = BANK0_R3 & 1;
      }
    }
    bVar10 = DAT_EXTMEM_7f99;
  } while (3 < BANK0_R3);
  switch(BANK2_R5 & 3) {
  case 0:
    goto code_c0x3919;
  case 1:
    DAT_INTMEM_50 = 4;
    DAT_INTMEM_51 = 0x12;
    BANK0_R2 = bVar1;
    BANK0_R7 = uVar2;
    FUN_CODE_044f(0x3900);
    FUN_CODE_2242();
    uEXTMEMcc00 = 1;
    bEXTMEMd80b = 0;
    bEXTMEMd80a = 0;
    DAT_EXTMEM_d804 = 0;
    DAT_EXTMEM_7fb4 = 0;
    DAT_EXTMEM_7eb9 = 0;
    DAT_EXTMEM_7fab = '\0';
    DAT_EXTMEM_7fa9 = 0;
    DAT_EXTMEM_7faa = 0;
    BANK0_R3 = BANK0_R3 & 0xfd;
    uVar12 = 0xc80f;
    FUN_CODE_129a();
    FUN_CODE_2820(uVar12 & 0xff00);
    DAT_EXTMEM_7f74 = 0xff;
    DAT_INTMEM_27 = '\0';
    DAT_EXTMEM_7fff = '\0';
    BANK0_R3 = BANK0_R3 & 0xef;
    if ((bEXTMEMc84b >> 1 & 1) != 1) {
      BANK1_R2 = 0;
      BANK1_R3 = 0;
      BANK1_R4 = 0;
      BANK1_R5 = 0;
      BANK0_R2 = bVar1;
      BANK0_R7 = uVar2;
      FUN_CODE_26be(0xc801,bEXTMEMc84b);
    }
    if (DAT_EXTMEM_7fa2 != 3) {
      DAT_EXTMEM_7fa3 = 1;
    }
    DAT_EXTMEM_7fa2 = 3;
    DAT_EXTMEM_cc97 = 1;
    BANK0_R2 = bVar1;
    BANK0_R7 = uVar2;
    FUN_CODE_2242();
    DAT_EXTMEM_c804 = 0x81;
    for (bVar5 = 0; bVar10 = DAT_EXTMEM_7f99, (bVar5 < 4) << 7 < '\0'; bVar5 = bVar5 + 1) {
      *(undefined1 *)CONCAT11('\x7f' - (((0x7f < bVar5) << 7) >> 7),bVar5 + 0x80) = 0;
    }
    goto LAB_CODE_400a;
  case 2:
    break;
  case 3:
  }
  DAT_INTMEM_50 = 4;
  DAT_INTMEM_51 = 0x13;
  BANK0_R2 = bVar1;
  BANK0_R7 = uVar2;
  FUN_CODE_044f(0x3900);
  if ((BANK2_R5 & 3) == 3) {
    DAT_EXTMEM_7f7c = DAT_EXTMEM_7f7c | 0x40;
    if (DAT_EXTMEM_7f7c == 0) {
      BANK0_R3 = BANK0_R3 & 0xfe;
    }
    else {
      BANK0_R3 = BANK0_R3 | 1;
    }
    DAT_EXTMEM_c804 = 0x83;
  }
  else {
    DAT_EXTMEM_7f7c = DAT_EXTMEM_7f7c & 0xbf;
    if (DAT_EXTMEM_7f7c == 0) {
      BANK0_R3 = BANK0_R3 & 0xfe;
    }
    else {
      BANK0_R3 = BANK0_R3 | 1;
    }
    DAT_EXTMEM_c804 = 0x82;
  }
  if (DAT_EXTMEM_7fa2 != 4) {
    DAT_EXTMEM_7fa3 = 1;
  }
  DAT_EXTMEM_7fa2 = 4;
  DAT_EXTMEM_7f9e = 0;
  uEXTMEMce76 = DAT_EXTMEM_7fa5;
  if (DAT_EXTMEM_7fb5 == '\0') {
    BANK0_R2 = bVar1;
    BANK0_R7 = uVar2;
    FUN_CODE_1403(0);
  }
  else {
    DAT_EXTMEM_7fb3 = 1;
  }
  BANK0_R3 = BANK0_R3 & 0xfd;
  uEXTMEMc600 = 0x21;
  bVar10 = DAT_EXTMEM_7f99;
  goto LAB_CODE_400a;
code_c0x3919:
  DAT_INTMEM_50 = 4;
  DAT_INTMEM_51 = 0x11;
  BANK0_R2 = bVar1;
  BANK0_R7 = uVar2;
  FUN_CODE_044f(0x3900);
  if ((BANK2_R5 >> 5 & 1) == 0) goto code_c0x3936;
  uEXTMEMc600 = true;
  goto code_c0x3938;
}



/* =========================================================
 * CODE:3a8d  FUN_CODE_3a8d  size=216
 * ========================================================= */

void FUN_CODE_3a8d(ushort param_1,char param_2,byte param_3,char param_4)

{
  byte bVar1;
  undefined1 uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  byte bVar7;
  byte bVar8;
  char cVar9;
  undefined1 uVar10;
  ushort uVar11;
  
  uVar2 = BANK0_R7;
  bVar1 = BANK0_R2;
code_c0x3a8d:
  DAT_INTMEM_50 = 4;
  DAT_INTMEM_51 = 0x12;
  BANK0_R2 = bVar1;
  BANK0_R7 = uVar2;
  FUN_CODE_044f(param_1 & 0xff00);
  FUN_CODE_2242();
  uEXTMEMcc00 = 1;
  bEXTMEMd80b = 0;
  bEXTMEMd80a = 0;
  DAT_EXTMEM_d804 = 0;
  DAT_EXTMEM_7fb4 = 0;
  DAT_EXTMEM_7eb9 = 0;
  DAT_EXTMEM_7fab = '\0';
  DAT_EXTMEM_7fa9 = 0;
  DAT_EXTMEM_7faa = 0;
  BANK0_R3 = BANK0_R3 & 0xfd;
  uVar11 = 0xc80f;
  FUN_CODE_129a();
  FUN_CODE_2820(uVar11 & 0xff00);
  DAT_EXTMEM_7f74 = 0xff;
  DAT_INTMEM_27 = '\0';
  DAT_EXTMEM_7fff = '\0';
  BANK0_R3 = BANK0_R3 & 0xef;
  if ((bEXTMEMc84b >> 1 & 1) != 1) {
    BANK1_R2 = 0;
    BANK1_R3 = 0;
    BANK1_R4 = 0;
    BANK1_R5 = 0;
    BANK0_R2 = bVar1;
    BANK0_R7 = uVar2;
    FUN_CODE_26be(0xc801,bEXTMEMc84b);
  }
  if (DAT_EXTMEM_7fa2 != 3) {
    DAT_EXTMEM_7fa3 = 1;
  }
  DAT_EXTMEM_7fa2 = 3;
  DAT_EXTMEM_cc97 = 1;
  BANK0_R2 = bVar1;
  BANK0_R7 = uVar2;
  FUN_CODE_2242();
  DAT_EXTMEM_c804 = 0x81;
  for (bVar5 = 0; bVar4 = DAT_EXTMEM_7f99, (bVar5 < 4) << 7 < '\0'; bVar5 = bVar5 + 1) {
    *(undefined1 *)CONCAT11('\x7f' - (((0x7f < bVar5) << 7) >> 7),bVar5 + 0x80) = 0;
  }
LAB_CODE_400a:
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            DAT_EXTMEM_7f99 = bVar4;
            bVar3 = DAT_EXTMEM_7fdf;
            bVar7 = BANK2_R4;
            bVar5 = BANK0_R3;
            DAT_INTMEM_41 = DAT_INTMEM_41 + '\x01';
            if (DAT_INTMEM_41 == '\0') {
              param_4 = param_4 + '\x01';
            }
            BANK2_R4 = BANK2_R4 + 1;
            if (BANK2_R3 <= BANK2_R4) {
              if ((DAT_EXTMEM_7fec == '\x01') && (DAT_EXTMEM_7ea8 != '\0')) {
                DAT_EXTMEM_7ea8 = 0;
                DAT_EXTMEM_ca20 = 2;
                DAT_EXTMEM_ca21 = 1;
                uEXTMEMca22 = 0;
                DAT_EXTMEM_ca23 = 0;
                uEXTMEMca08 = 1;
                BANK0_R2 = bVar1;
                BANK0_R7 = uVar2;
                return;
              }
              if ((((DAT_EXTMEM_7fec == '\x01') && (DAT_EXTMEM_7fe0 == '\0')) &&
                  (DAT_EXTMEM_7ffb == '\0')) && (DAT_EXTMEM_7f79 == '\0')) {
                DAT_EXTMEM_ca20 = 1;
                DAT_EXTMEM_ca21 = 0;
                uEXTMEMca08 = 1;
                DAT_EXTMEM_7f9d = 0;
              }
              if ((((BANK3_R2 & 1) == 0) || (bVar5 = DAT_EXTMEM_7f7d, DAT_EXTMEM_7f7d == BANK2_R6))
                 && (((BANK3_R2 >> 1 & 1) == 0 ||
                     (bVar5 = DAT_EXTMEM_7f7e, BANK2_R7 <= DAT_EXTMEM_7f7e)))) {
                BANK0_R2 = bVar1;
                BANK0_R7 = uVar2;
                if (((BANK3_R2 >> 1 & 1) == 1) && ((BANK2_R7 < bVar1) << 7 < '\0')) {
                  FUN_CODE_2242(DAT_EXTMEM_7f7e);
                  cVar6 = BANK2_R7 + 1;
                  cVar9 = '\x01';
                  while (cVar6 = cVar6 + -1, cVar6 != '\0') {
                    cVar9 = cVar9 * '\x02';
                  }
                  DAT_EXTMEM_7fed = cVar9 - 1;
                  BANK0_R2 = BANK0_R2 & 0xf6;
                  uEXTMEMcc05 = 1;
                  DAT_EXTMEM_cc7c = 0xf;
                  DAT_EXTMEM_cc7d = 0xf;
                  DAT_EXTMEM_7f7e = BANK2_R7;
                  DAT_EXTMEM_d804 = DAT_EXTMEM_7fed;
                  bEXTMEMd80a = DAT_EXTMEM_7fed;
                  bEXTMEMd80b = DAT_EXTMEM_7fed;
                  if ((4 < DAT_EXTMEM_7fa2) && (BANK2_R7 != 0)) {
                    BANK1_R2 = BANK2_R7;
                    BANK1_R3 = DAT_EXTMEM_7f7d;
                    BANK1_R4 = DAT_EXTMEM_7f7c;
                    BANK1_R5 = 0;
                    FUN_CODE_26be(0x7f06);
                  }
                }
              }
              else {
                if ((BANK3_R2 & 1) != 0) {
                  DAT_EXTMEM_7f7d = BANK2_R6;
                }
                BANK0_R2 = bVar1;
                BANK0_R7 = uVar2;
                FUN_CODE_270e(bVar5);
                if ((BANK3_R2 >> 1 & 1) == 1) {
                  DAT_EXTMEM_7f7e = BANK2_R7;
                }
              }
              if (DAT_INTMEM_27 != '\0') {
                if (DAT_EXTMEM_7f8d == 0) {
                  FUN_CODE_41e1(0);
                  return;
                }
                DAT_EXTMEM_cc7c = 0xf;
                if (DAT_EXTMEM_7ff9 == '\0') {
                  DAT_EXTMEM_7f93 = DAT_EXTMEM_7f93 | 8;
                }
                DAT_EXTMEM_c804 = 0x84;
                DAT_EXTMEM_7fa2 = 5;
                BANK0_R2 = BANK0_R2 | 1;
                if (DAT_EXTMEM_7fab != '\0') {
                  return;
                }
                DAT_INTMEM_50 = 1;
                DAT_INTMEM_51 = 9;
                FUN_CODE_044f(0x7f00,0);
                bVar1 = BANK0_R2;
                DAT_EXTMEM_cc0b = 0;
                BANK0_R2 = BANK0_R2 | 2;
                DAT_EXTMEM_7fa2 = 6;
                if (DAT_EXTMEM_7f84 == 0) {
                  BANK0_R2 = bVar1 | 0x22;
                }
                if ((bCODE00a6 >> 4 & 1) != 1) {
                  FUN_CODE_226e(bCODE00a6);
                }
                DAT_EXTMEM_7fa1 = 0;
                return;
              }
              return;
            }
            BANK3_R0 = 0;
            bVar7 = bVar7 + 0x67;
            cVar9 = ((0x99 < BANK2_R4) << 7) >> 7;
            bVar8 = 0xca - cVar9;
            BANK2_R5 = *(byte *)CONCAT11(bVar8,bVar7);
            bVar4 = DAT_EXTMEM_7f99;
            if (BANK2_R0 == '\0') break;
            if ((param_2 != '\0') &&
               (((param_4 == '\0' || (param_4 == '\x01')) || (param_4 == '\x02')))) {
              DAT_EXTMEM_7ea8 = '\x01';
            }
          }
          if (param_4 == '\x01') break;
          if (param_4 == '\x05') {
            if (DAT_INTMEM_41 == '\x10') {
              DAT_EXTMEM_7f75 = BANK2_R5;
              if (BANK2_R5 == 0) {
                DAT_EXTMEM_caa9 = 0;
              }
              else {
                DAT_EXTMEM_caa9 = 0xff;
              }
            }
          }
          else if (param_4 == '\x06') {
            if (DAT_INTMEM_41 == '\0') {
              DAT_EXTMEM_7fa7 = BANK2_R5 & 7;
              if (DAT_EXTMEM_7fa7 == 2) {
                BANK0_R2 = bVar1;
                BANK0_R7 = uVar2;
                FUN_CODE_2242();
              }
              else if (DAT_EXTMEM_7fa7 == 5) {
                bVar5 = DAT_EXTMEM_7ead;
                if ((DAT_EXTMEM_7ead != 0) ||
                   ((bVar5 = DAT_EXTMEM_7f84, DAT_EXTMEM_7f84 == 0 &&
                    (BANK0_R3 = BANK0_R3 & 0xf, bVar5 = DAT_EXTMEM_d25c, DAT_EXTMEM_d25c < 3)))) {
                  BANK2_R5 = BANK2_R5 & 0xf8 | 2;
                  DAT_EXTMEM_7fa7 = 2;
                }
                BANK0_R2 = bVar1;
                BANK0_R7 = uVar2;
                FUN_CODE_2242(bVar5);
              }
              else if (DAT_EXTMEM_7fa2 == 6) {
                BANK0_R2 = bVar1;
                BANK0_R7 = uVar2;
                FUN_CODE_226e();
              }
              BANK1_R2 = DAT_EXTMEM_7f7e;
              BANK1_R3 = DAT_EXTMEM_7f7d;
              BANK1_R4 = DAT_EXTMEM_7f7c;
              BANK1_R5 = BANK2_R5;
              BANK0_R2 = bVar1;
              BANK0_R7 = uVar2;
              FUN_CODE_26be(0x7f08);
              bVar4 = DAT_EXTMEM_7f99;
            }
            else {
              BANK1_R6 = 0;
            }
          }
        }
        if (DAT_INTMEM_41 != '\0') break;
        cVar9 = BANK2_R5 == 0x14;
        if ((bool)cVar9) {
          DAT_INTMEM_51 = 0x2a;
        }
        else if (BANK2_R5 == 6) {
          DAT_INTMEM_3e = 0x28;
          DAT_INTMEM_51 = DAT_INTMEM_3e;
        }
        else {
          DAT_INTMEM_3e = 0x29;
          DAT_INTMEM_51 = DAT_INTMEM_3e;
        }
        DAT_INTMEM_50 = 1;
        BANK0_R2 = bVar1;
        BANK0_R7 = uVar2;
        FUN_CODE_044f((ushort)bVar8 << 8);
        if (cVar9 == '\0') {
          if (BANK2_R5 == 6) {
            BANK0_R3 = 0;
          }
          else {
            BANK0_R3 = 8;
          }
          BANK2_R6 = 0;
        }
        else {
          BANK2_R6 = 0x10;
          BANK0_R3 = bVar5;
        }
        BANK3_R2 = BANK3_R2 | 1;
        bVar4 = DAT_EXTMEM_7f99;
        if ((BANK2_R6 == 0) || (BANK2_R6 == 8)) {
          uEXTMEMd82a = 0xff;
          uEXTMEMd82b = 0xff;
        }
        else {
          uEXTMEMd82a = 0;
          uEXTMEMd82b = 0;
        }
      }
      if (DAT_INTMEM_41 != '\x01') break;
      BANK2_R7 = BANK2_R5 & 0xf;
      if (BANK2_R7 == 4) {
        bVar7 = 0x65;
      }
      else if (BANK2_R7 == 2) {
        BANK0_R3 = 100;
      }
      else if (BANK2_R7 == 1) {
        DAT_INTMEM_3e = 99;
        BANK0_R3 = DAT_INTMEM_3e;
      }
      else {
        DAT_INTMEM_3e = 0x62;
        BANK0_R3 = DAT_INTMEM_3e;
      }
      DAT_INTMEM_50 = 1;
      BANK0_R2 = bVar1;
      BANK0_R7 = uVar2;
      DAT_INTMEM_51 = bVar7;
      FUN_CODE_044f((ushort)bVar8 << 8);
      DAT_EXTMEM_7f7c = (BANK2_R5 & 0x80) >> 2 | DAT_EXTMEM_7f7c;
      if (DAT_EXTMEM_7f7c == 0) {
        BANK0_R3 = BANK0_R3 & 0xde;
      }
      else {
        BANK0_R3 = BANK0_R3 & 0xdf | 1;
      }
      BANK3_R2 = BANK3_R2 | 2;
      bVar4 = DAT_EXTMEM_7f99;
    }
    if (DAT_INTMEM_41 != '\x02') {
      if (DAT_INTMEM_41 != '\x03') {
        if (DAT_INTMEM_41 != '\x04') {
          if (DAT_INTMEM_41 != '\x05') {
            if (DAT_INTMEM_41 != '\x06') {
              if (DAT_INTMEM_41 == '\a') {
                uEXTMEMcc0e = (BANK2_R5 >> 4 & 1) != 0;
                BANK0_R3 = BANK0_R3 & 1;
                BANK1_R2 = DAT_EXTMEM_7f7e;
                BANK1_R3 = DAT_EXTMEM_7f7d;
                BANK1_R4 = DAT_EXTMEM_7f7c;
                BANK0_R2 = bVar1;
                BANK0_R7 = uVar2;
                BANK1_R5 = BANK2_R5;
                DAT_EXTMEM_7f8a = BANK2_R5;
                FUN_CODE_26be(0x7f07);
                bVar4 = DAT_EXTMEM_7f99;
              }
              else {
                bVar4 = BANK2_R5;
                if (DAT_INTMEM_41 != '\b') {
                  if (DAT_INTMEM_41 == '\v') {
                    DAT_INTMEM_50 = 4;
                    DAT_INTMEM_51 = 0x37;
                    BANK0_R2 = bVar1;
                    BANK0_R7 = uVar2;
                    FUN_CODE_044f((ushort)bVar8 << 8);
                    FUN_CODE_233d();
                    bEXTMEM7ff5 = BANK2_R5 | 0x80;
                    bVar4 = DAT_EXTMEM_7f99;
                  }
                  else if (DAT_INTMEM_41 == '\f') {
                    DAT_INTMEM_50 = 4;
                    DAT_INTMEM_51 = 0x38;
                    BANK0_R2 = bVar1;
                    BANK0_R7 = uVar2;
                    FUN_CODE_044f((ushort)bVar8 << 8);
                    FUN_CODE_233d();
                    bEXTMEM7ff6 = BANK2_R5 | 0x80;
                    bVar4 = DAT_EXTMEM_7f99;
                  }
                  else if (DAT_INTMEM_41 == '\r') {
                    DAT_INTMEM_50 = 4;
                    DAT_INTMEM_51 = 0x39;
                    BANK0_R2 = bVar1;
                    BANK0_R7 = uVar2;
                    FUN_CODE_044f((ushort)bVar8 << 8);
                    FUN_CODE_233d();
                    bEXTMEM7ff7 = BANK2_R5 | 0x80;
                    bVar4 = DAT_EXTMEM_7f99;
                  }
                  else if (DAT_INTMEM_41 == '\x0e') {
                    DAT_INTMEM_50 = 4;
                    DAT_INTMEM_51 = 0x3a;
                    BANK0_R2 = bVar1;
                    BANK0_R7 = uVar2;
                    FUN_CODE_044f((ushort)bVar8 << 8);
                    FUN_CODE_233d();
                    bEXTMEM7ff8 = BANK2_R5 | 0x80;
                    bVar4 = DAT_EXTMEM_7f99;
                  }
                  else if ((DAT_INTMEM_41 == '\x0f') || (DAT_INTMEM_41 == '\x10')) {
                    DAT_INTMEM_50 = 4;
                    DAT_INTMEM_51 = 0x3b;
                    BANK0_R2 = bVar1;
                    BANK0_R7 = uVar2;
                    FUN_CODE_044f((ushort)bVar8 << 8);
                    bVar4 = DAT_EXTMEM_7f99;
                  }
                  else if (DAT_INTMEM_41 == '\x11') {
                    DAT_INTMEM_50 = 0x20;
                    DAT_INTMEM_51 = 0x34;
                    BANK0_R2 = bVar1;
                    BANK0_R7 = uVar2;
                    FUN_CODE_044f((ushort)bVar8 << 8);
                    if ((BANK2_R5 & 1) == BANK0_R4) {
                      BANK0_R2 = bVar1;
                      BANK0_R7 = uVar2;
                      FUN_CODE_2211(0x7f01);
                      param_3 = DAT_EXTMEM_7ff1;
                    }
                    else {
                      BANK1_R2 = DAT_EXTMEM_7f7e;
                      BANK1_R3 = DAT_EXTMEM_7f7d;
                      BANK1_R4 = DAT_EXTMEM_7f7c;
                      BANK1_R5 = BANK2_R5;
                      BANK0_R2 = bVar1;
                      BANK0_R7 = uVar2;
                      FUN_CODE_26be(0x7f0f);
                      DAT_EXTMEM_7fe0 = '\x01';
                      param_3 = DAT_EXTMEM_7ff1;
                    }
                    DAT_EXTMEM_7ff1 = BANK2_R5 & 1;
                    DAT_EXTMEM_ca0c = 1;
                    bVar4 = DAT_EXTMEM_7f99;
                  }
                  else if (DAT_INTMEM_41 == 'W') {
                    DAT_INTMEM_50 = 0x20;
                    DAT_INTMEM_51 = 0x30;
                    BANK0_R2 = bVar1;
                    BANK0_R7 = uVar2;
                    FUN_CODE_044f((ushort)bVar8 << 8);
                    DAT_EXTMEM_cad0 = 1;
                    DAT_EXTMEM_7fe0 = '\x01';
                    FUN_CODE_2211(0x7f00);
                    DAT_EXTMEM_7ff2 = 1;
                    bVar4 = DAT_EXTMEM_7f99;
                  }
                  else if (DAT_INTMEM_41 == -0x40) {
                    DAT_EXTMEM_7fde = BANK2_R5 - 1;
                    DAT_INTMEM_50 = 8;
                    DAT_INTMEM_51 = 0x3d;
                    uVar10 = 0x7f;
                    BANK0_R2 = bVar1;
                    BANK0_R7 = uVar2;
                    FUN_CODE_044f(0x7f00);
                    FUN_CODE_2211(CONCAT11(uVar10,1));
                    bVar4 = DAT_EXTMEM_7f99;
                    if (BANK2_R5 == 0) {
                      DAT_EXTMEM_7fdd = '\x01';
                    }
                    else {
                      DAT_EXTMEM_7fdd = '\0';
                    }
                  }
                  else if (DAT_INTMEM_41 == -0x3f) {
                    DAT_INTMEM_50 = 8;
                    DAT_INTMEM_51 = 0x3e;
                    BANK0_R2 = bVar1;
                    BANK0_R7 = uVar2;
                    FUN_CODE_044f((ushort)bVar8 << 8);
                    if (DAT_EXTMEM_7f79 == '\0') {
                      BANK0_R2 = bVar1;
                      BANK0_R7 = uVar2;
                      FUN_CODE_2211(0x7f01,0);
                    }
                    bVar4 = DAT_EXTMEM_7f99;
                    if (BANK2_R5 != 0) {
                      DAT_EXTMEM_7fdd = '\0';
                    }
                  }
                  else {
                    bVar4 = DAT_EXTMEM_7f99;
                    if (DAT_INTMEM_41 == -0x3e) {
                      uVar11 = 0x7fde;
                      bVar5 = DAT_EXTMEM_7fde;
                      if (DAT_EXTMEM_7fde < 0x10) {
                        DAT_EXTMEM_7fdf =
                             (DAT_EXTMEM_7fdf -
                             *(char *)CONCAT11('\x7f' - (((0x3f < DAT_EXTMEM_7fde) << 7) >> 7),
                                               DAT_EXTMEM_7fde - 0x40)) + BANK2_R5;
                        *(byte *)CONCAT11('\x7f' - (((0x3f < DAT_EXTMEM_7fde) << 7) >> 7),
                                          DAT_EXTMEM_7fde - 0x40) = BANK2_R5;
                        bVar5 = DAT_EXTMEM_7fdf + 1 & 0x3f;
                        uVar11 = 0xd230;
                        param_3 = bVar3;
                        DAT_EXTMEM_d230 = bVar5;
                      }
                      DAT_INTMEM_50 = 8;
                      DAT_INTMEM_51 = 0x3f;
                      uVar11 = uVar11 & 0xff00;
                      BANK0_R2 = bVar1;
                      BANK0_R7 = uVar2;
                      FUN_CODE_044f(uVar11,bVar5);
                      DAT_INTMEM_50 = 8;
                      DAT_INTMEM_51 = 0x68;
                      FUN_CODE_044f(uVar11 & 0xff00);
                      DAT_INTMEM_50 = 8;
                      DAT_INTMEM_51 = 3;
                      FUN_CODE_044f(1);
                      DAT_INTMEM_51 = DAT_EXTMEM_7fde;
                      DAT_INTMEM_50 = 8;
                      uVar10 = 0x7f;
                      FUN_CODE_044f(0x7f01);
                      DAT_INTMEM_50 = 8;
                      DAT_INTMEM_51 = BANK2_R5;
                      FUN_CODE_044f(CONCAT11(uVar10,1));
                      DAT_INTMEM_51 = DAT_EXTMEM_d230;
                      DAT_INTMEM_50 = 8;
                      FUN_CODE_044f(0xd201);
                      if (DAT_EXTMEM_7f79 == '\0') {
                        BANK0_R2 = bVar1;
                        BANK0_R7 = uVar2;
                        FUN_CODE_2211(0x7f01,0);
                      }
                      cVar9 = DAT_EXTMEM_7fdd;
                      bVar4 = DAT_EXTMEM_7f99;
                      if ((BANK2_R5 == 0x3f) && (DAT_EXTMEM_7fdd != '\0')) {
                        DAT_EXTMEM_7fdd = '\0';
                        BANK0_R2 = bVar1;
                        BANK0_R7 = uVar2;
                        FUN_CODE_1f5c(cVar9);
                        bVar4 = DAT_EXTMEM_7f99;
                      }
                    }
                  }
                }
              }
              goto LAB_CODE_400a;
            }
            BANK3_R0 = 1;
          }
          BANK3_R0 = BANK3_R0 + 1;
        }
        BANK3_R0 = BANK3_R0 + 1;
      }
      DAT_INTMEM_50 = 4;
      DAT_INTMEM_51 = 0x15;
      BANK0_R2 = bVar1;
      BANK0_R7 = uVar2;
      FUN_CODE_044f((ushort)bVar8 << 8);
      *(byte *)CONCAT11('\x7f' - (((0x7f < BANK3_R0) << 7) >> 7),BANK3_R0 + 0x80) = BANK2_R5;
      DAT_EXTMEM_7fa3 = 1;
      bVar4 = DAT_EXTMEM_7f99;
      goto LAB_CODE_400a;
    }
    DAT_EXTMEM_7f87 = 1;
    DAT_EXTMEM_7ffa = 0;
    BANK1_R7 = 0;
    DAT_EXTMEM_7fe2 = BANK2_R5 & 0xc;
    DAT_EXTMEM_7f86 = BANK2_R5;
    if (((DAT_EXTMEM_7fe2 != 0) || (DAT_EXTMEM_7ff9 != '\0')) && (DAT_EXTMEM_7fff == '\0')) {
      BANK1_R7 = 1;
      if (BANK0_R3 < 4) {
        switch(DAT_EXTMEM_7fe2) {
        case 0:
          DAT_EXTMEM_7ff9 = '\0';
          DAT_EXTMEM_7f93 = DAT_EXTMEM_7f93 | 8;
          DAT_EXTMEM_c804 = 0x84;
          BANK0_R6 = *(byte *)(((BANK2_R5 >> 7) << 1 | (BANK2_R5 & 0x40) >> 6) + 0x28) & 0xf;
          BANK0_R3 = BANK0_R3 & 6 | cVar9 * -0x10;
          BANK0_R3 = BANK0_R3 | 0xf;
          bEXTMEMc870 = 0;
          uEXTMEMc871 = 0;
          for (BANK3_R1 = 0; BANK3_R1 < 4; BANK3_R1 = BANK3_R1 + 1) {
            BANK0_R4 = BANK3_R1 + 0x28;
            cVar9 = -(((0xd7 < BANK3_R1) << 7) >> 7);
            BANK0_R5 = BANK0_R5 & 0xcf;
            *(undefined1 *)CONCAT11(cVar9 + -0x32,param_3) =
                 *(undefined1 *)CONCAT11(cVar9 + -0x32,BANK0_R4);
          }
          break;
        case 4:
          DAT_EXTMEM_7ff9 = '\x01';
          DAT_EXTMEM_7f93 = DAT_EXTMEM_7f93 & 0xf7;
          BANK0_R2 = bVar1;
          BANK0_R7 = uVar2;
          FUN_CODE_2820(0x7f00);
          uEXTMEMcc00 = 0;
          BANK0_R3 = BANK0_R3 & 0xfd | 9;
          DAT_EXTMEM_c804 = 0x85;
          uEXTMEMcc5e = 0;
          break;
        case 8:
          DAT_EXTMEM_7ff9 = '\x02';
          DAT_EXTMEM_7f93 = DAT_EXTMEM_7f93 & 0xf7;
          BANK0_R2 = bVar1;
          BANK0_R7 = uVar2;
          FUN_CODE_2820(0x7f00);
          uEXTMEMcc00 = 0;
          if ((bEXTMEMc84b & 1) == 0) {
            BANK0_R3 = BANK0_R3 & 0xd | 0x70;
          }
          else {
            uEXTMEMc87d = 0x20;
            uEXTMEMc87e = 0xff;
            uEXTMEMc87f = 1;
            bEXTMEMc870 = DAT_EXTMEM_d804;
            uEXTMEMc871 = 0x80;
            BANK0_R3 = BANK0_R3 & 0xd | 0x10;
          }
          break;
        case 0xc:
          DAT_EXTMEM_7ff9 = '\x03';
          DAT_EXTMEM_7f93 = DAT_EXTMEM_7f93 & 0xf7;
          BANK0_R2 = bVar1;
          BANK0_R7 = uVar2;
          FUN_CODE_2820(0x7f00);
          uEXTMEMcc00 = 0;
          bEXTMEMc870 = DAT_EXTMEM_d804 << 4;
          BANK0_R3 = BANK0_R3 & 0xb0 | 0x90;
        }
      }
      if (4 < DAT_EXTMEM_7fa2) {
        uEXTMEMc600 = (BANK2_R5 >> 5 & 1) != 0;
        BANK0_R3 = BANK0_R3 & 1;
      }
    }
    bVar4 = DAT_EXTMEM_7f99;
  } while (3 < BANK0_R3);
  param_1 = 0x390d;
  switch(BANK2_R5 & 3) {
  case 0:
    DAT_INTMEM_50 = 4;
    DAT_INTMEM_51 = 0x11;
    BANK0_R2 = bVar1;
    BANK0_R7 = uVar2;
    FUN_CODE_044f(0x3900);
    uEXTMEMc600 = (BANK2_R5 >> 5 & 1) != 0;
    BANK0_R3 = BANK0_R3 & 1;
    DAT_EXTMEM_7fe2 = DAT_EXTMEM_c850 & 1;
    if (DAT_EXTMEM_7fe2 != 0) {
      BANK0_R2 = bVar1;
      BANK0_R7 = uVar2;
      FUN_CODE_129a(DAT_EXTMEM_7fe2);
      uEXTMEMcc00 = 0;
      uEXTMEMce76 = DAT_EXTMEM_7fa5;
      FUN_CODE_2820(0xce00);
      uEXTMEMc600 = (BANK2_R5 >> 5 & 1) != 0;
      BANK0_R3 = BANK0_R3 & 1 | ~DAT_EXTMEM_d804;
      bVar5 = DAT_EXTMEM_d80d;
      while (bVar5 != 0xf) {
        BANK0_R4 = BANK0_R4 & 0xf;
        bVar5 = ~DAT_EXTMEM_d804 & 0xf | DAT_EXTMEM_d80d;
      }
      cVar9 = '\x05';
      do {
        cVar9 = cVar9 + -1;
      } while (cVar9 != '\0');
    }
    bVar5 = BANK0_R3;
    if (DAT_EXTMEM_7fe2 == 0 && DAT_EXTMEM_7fa2 != 4) {
      BANK1_R2 = DAT_EXTMEM_7f7e;
      BANK1_R3 = DAT_EXTMEM_7f7d;
      BANK1_R4 = DAT_EXTMEM_7f7c;
      BANK1_R5 = BANK2_R5;
      param_3 = DAT_EXTMEM_7fe2;
      BANK0_R2 = bVar1;
      BANK0_R7 = uVar2;
      FUN_CODE_26be(0x7f05);
      bVar4 = DAT_EXTMEM_7f99;
    }
    else {
      BANK0_R3 = BANK0_R3 | 0x10;
      DAT_EXTMEM_7fa2 = 2;
      DAT_INTMEM_27 = '\x01';
      param_3 = DAT_EXTMEM_7f8d;
      if (DAT_EXTMEM_7ff9 == '\0') {
        BANK0_R4 = *(byte *)(((BANK2_R5 >> 7) << 1 | (BANK2_R5 & 0x40) >> 6) + 0x28) & 0xf;
        param_3 = DAT_EXTMEM_7f8d << 4;
        BANK0_R3 = bVar5 & 0xf | param_3;
      }
      if ((DAT_EXTMEM_d25c & 0xf) == 0) {
        BANK0_R3 = BANK0_R3 & 0xfd;
      }
      DAT_EXTMEM_7f9c = 0;
      DAT_EXTMEM_7f85 = 0;
      DAT_EXTMEM_7f9e = 0;
      DAT_EXTMEM_7f9f = 0;
      DAT_EXTMEM_7fa0 = 0;
      DAT_EXTMEM_7fa1 = 0;
      DAT_EXTMEM_7fbc = 0;
      DAT_EXTMEM_7f8d = DAT_EXTMEM_7f8d | DAT_EXTMEM_7fe2;
      bVar4 = DAT_EXTMEM_7f99;
    }
    goto LAB_CODE_400a;
  case 1:
    goto code_c0x3910;
  case 2:
    break;
  case 3:
  }
  DAT_INTMEM_50 = 4;
  DAT_INTMEM_51 = 0x13;
  BANK0_R2 = bVar1;
  BANK0_R7 = uVar2;
  FUN_CODE_044f(0x3900);
  if ((BANK2_R5 & 3) == 3) {
    DAT_EXTMEM_7f7c = DAT_EXTMEM_7f7c | 0x40;
    if (DAT_EXTMEM_7f7c == 0) {
      BANK0_R3 = BANK0_R3 & 0xfe;
    }
    else {
      BANK0_R3 = BANK0_R3 | 1;
    }
    DAT_EXTMEM_c804 = 0x83;
  }
  else {
    DAT_EXTMEM_7f7c = DAT_EXTMEM_7f7c & 0xbf;
    if (DAT_EXTMEM_7f7c == 0) {
      BANK0_R3 = BANK0_R3 & 0xfe;
    }
    else {
      BANK0_R3 = BANK0_R3 | 1;
    }
    DAT_EXTMEM_c804 = 0x82;
  }
  if (DAT_EXTMEM_7fa2 != 4) {
    DAT_EXTMEM_7fa3 = 1;
  }
  DAT_EXTMEM_7fa2 = 4;
  DAT_EXTMEM_7f9e = 0;
  uEXTMEMce76 = DAT_EXTMEM_7fa5;
  if (DAT_EXTMEM_7fb5 == '\0') {
    BANK0_R2 = bVar1;
    BANK0_R7 = uVar2;
    FUN_CODE_1403(0);
  }
  else {
    DAT_EXTMEM_7fb3 = 1;
  }
  BANK0_R3 = BANK0_R3 & 0xfd;
  uEXTMEMc600 = 0x21;
  bVar4 = DAT_EXTMEM_7f99;
  goto LAB_CODE_400a;
code_c0x3910:
  goto code_c0x3a8d;
}



/* =========================================================
 * CODE:3b65  FUN_CODE_3b65  size=1249
 * ========================================================= */

void FUN_CODE_3b65(ushort param_1,char param_2,byte param_3,char param_4)

{
  byte bVar1;
  undefined1 uVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  char cVar9;
  undefined1 uVar10;
  ushort uVar11;
  
  uVar2 = BANK0_R7;
  bVar1 = BANK0_R2;
  do {
    DAT_INTMEM_50 = 4;
    DAT_INTMEM_51 = 0x13;
    BANK0_R2 = bVar1;
    BANK0_R7 = uVar2;
    FUN_CODE_044f(param_1 & 0xff00);
    if ((BANK2_R5 & 3) == 3) {
      DAT_EXTMEM_7f7c = DAT_EXTMEM_7f7c | 0x40;
      if (DAT_EXTMEM_7f7c == 0) {
        BANK0_R3 = BANK0_R3 & 0xfe;
      }
      else {
        BANK0_R3 = BANK0_R3 | 1;
      }
      DAT_EXTMEM_c804 = 0x83;
    }
    else {
      DAT_EXTMEM_7f7c = DAT_EXTMEM_7f7c & 0xbf;
      if (DAT_EXTMEM_7f7c == 0) {
        BANK0_R3 = BANK0_R3 & 0xfe;
      }
      else {
        BANK0_R3 = BANK0_R3 | 1;
      }
      DAT_EXTMEM_c804 = 0x82;
    }
    if (DAT_EXTMEM_7fa2 != 4) {
      DAT_EXTMEM_7fa3 = 1;
    }
    DAT_EXTMEM_7fa2 = 4;
    DAT_EXTMEM_7f9e = 0;
    uEXTMEMce76 = DAT_EXTMEM_7fa5;
    if (DAT_EXTMEM_7fb5 == '\0') {
      BANK0_R2 = bVar1;
      BANK0_R7 = uVar2;
      FUN_CODE_1403(0);
    }
    else {
      DAT_EXTMEM_7fb3 = 1;
    }
    BANK0_R3 = BANK0_R3 & 0xfd;
    uEXTMEMc600 = 0x21;
    bVar8 = DAT_EXTMEM_7f99;
LAB_CODE_400a:
    do {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              DAT_EXTMEM_7f99 = bVar8;
              bVar3 = DAT_EXTMEM_7fdf;
              bVar6 = BANK2_R4;
              bVar4 = BANK0_R3;
              DAT_INTMEM_41 = DAT_INTMEM_41 + '\x01';
              if (DAT_INTMEM_41 == '\0') {
                param_4 = param_4 + '\x01';
              }
              BANK2_R4 = BANK2_R4 + 1;
              if (BANK2_R3 <= BANK2_R4) {
                if ((DAT_EXTMEM_7fec == '\x01') && (DAT_EXTMEM_7ea8 != '\0')) {
                  DAT_EXTMEM_7ea8 = 0;
                  DAT_EXTMEM_ca20 = 2;
                  DAT_EXTMEM_ca21 = 1;
                  uEXTMEMca22 = 0;
                  DAT_EXTMEM_ca23 = 0;
                  uEXTMEMca08 = 1;
                  BANK0_R2 = bVar1;
                  BANK0_R7 = uVar2;
                  return;
                }
                if ((((DAT_EXTMEM_7fec == '\x01') && (DAT_EXTMEM_7fe0 == '\0')) &&
                    (DAT_EXTMEM_7ffb == '\0')) && (DAT_EXTMEM_7f79 == '\0')) {
                  DAT_EXTMEM_ca20 = 1;
                  DAT_EXTMEM_ca21 = 0;
                  uEXTMEMca08 = 1;
                  DAT_EXTMEM_7f9d = 0;
                }
                if ((((BANK3_R2 & 1) == 0) || (bVar8 = DAT_EXTMEM_7f7d, DAT_EXTMEM_7f7d == BANK2_R6)
                    ) && (((BANK3_R2 >> 1 & 1) == 0 ||
                          (bVar8 = DAT_EXTMEM_7f7e, BANK2_R7 <= DAT_EXTMEM_7f7e)))) {
                  BANK0_R2 = bVar1;
                  BANK0_R7 = uVar2;
                  if (((BANK3_R2 >> 1 & 1) == 1) && ((BANK2_R7 < bVar1) << 7 < '\0')) {
                    FUN_CODE_2242(DAT_EXTMEM_7f7e);
                    cVar5 = BANK2_R7 + 1;
                    cVar9 = '\x01';
                    while (cVar5 = cVar5 + -1, cVar5 != '\0') {
                      cVar9 = cVar9 * '\x02';
                    }
                    DAT_EXTMEM_7fed = cVar9 - 1;
                    BANK0_R2 = BANK0_R2 & 0xf6;
                    uEXTMEMcc05 = 1;
                    DAT_EXTMEM_cc7c = 0xf;
                    DAT_EXTMEM_cc7d = 0xf;
                    DAT_EXTMEM_7f7e = BANK2_R7;
                    DAT_EXTMEM_d804 = DAT_EXTMEM_7fed;
                    bEXTMEMd80a = DAT_EXTMEM_7fed;
                    bEXTMEMd80b = DAT_EXTMEM_7fed;
                    if ((4 < DAT_EXTMEM_7fa2) && (BANK2_R7 != 0)) {
                      BANK1_R2 = BANK2_R7;
                      BANK1_R3 = DAT_EXTMEM_7f7d;
                      BANK1_R4 = DAT_EXTMEM_7f7c;
                      BANK1_R5 = 0;
                      FUN_CODE_26be(0x7f06);
                    }
                  }
                }
                else {
                  if ((BANK3_R2 & 1) != 0) {
                    DAT_EXTMEM_7f7d = BANK2_R6;
                  }
                  BANK0_R2 = bVar1;
                  BANK0_R7 = uVar2;
                  FUN_CODE_270e(bVar8);
                  if ((BANK3_R2 >> 1 & 1) == 1) {
                    DAT_EXTMEM_7f7e = BANK2_R7;
                  }
                }
                if (DAT_INTMEM_27 != '\0') {
                  if (DAT_EXTMEM_7f8d == 0) {
                    FUN_CODE_41e1(0);
                    return;
                  }
                  DAT_EXTMEM_cc7c = 0xf;
                  if (DAT_EXTMEM_7ff9 == '\0') {
                    DAT_EXTMEM_7f93 = DAT_EXTMEM_7f93 | 8;
                  }
                  DAT_EXTMEM_c804 = 0x84;
                  DAT_EXTMEM_7fa2 = 5;
                  BANK0_R2 = BANK0_R2 | 1;
                  if (DAT_EXTMEM_7fab != '\0') {
                    return;
                  }
                  DAT_INTMEM_50 = 1;
                  DAT_INTMEM_51 = 9;
                  FUN_CODE_044f(0x7f00,0);
                  bVar1 = BANK0_R2;
                  DAT_EXTMEM_cc0b = 0;
                  BANK0_R2 = BANK0_R2 | 2;
                  DAT_EXTMEM_7fa2 = 6;
                  if (DAT_EXTMEM_7f84 == 0) {
                    BANK0_R2 = bVar1 | 0x22;
                  }
                  if ((bCODE00a6 >> 4 & 1) != 1) {
                    FUN_CODE_226e(bCODE00a6);
                  }
                  DAT_EXTMEM_7fa1 = 0;
                  return;
                }
                return;
              }
              BANK3_R0 = 0;
              bVar6 = bVar6 + 0x67;
              cVar9 = ((0x99 < BANK2_R4) << 7) >> 7;
              bVar7 = 0xca - cVar9;
              BANK2_R5 = *(byte *)CONCAT11(bVar7,bVar6);
              bVar8 = DAT_EXTMEM_7f99;
              if (BANK2_R0 == '\0') break;
              if ((param_2 != '\0') &&
                 (((param_4 == '\0' || (param_4 == '\x01')) || (param_4 == '\x02')))) {
                DAT_EXTMEM_7ea8 = '\x01';
              }
            }
            if (param_4 == '\x01') break;
            if (param_4 == '\x05') {
              if (DAT_INTMEM_41 == '\x10') {
                DAT_EXTMEM_7f75 = BANK2_R5;
                if (BANK2_R5 == 0) {
                  DAT_EXTMEM_caa9 = 0;
                }
                else {
                  DAT_EXTMEM_caa9 = 0xff;
                }
              }
            }
            else if (param_4 == '\x06') {
              if (DAT_INTMEM_41 == '\0') {
                DAT_EXTMEM_7fa7 = BANK2_R5 & 7;
                if (DAT_EXTMEM_7fa7 == 2) {
                  BANK0_R2 = bVar1;
                  BANK0_R7 = uVar2;
                  FUN_CODE_2242();
                }
                else if (DAT_EXTMEM_7fa7 == 5) {
                  bVar8 = DAT_EXTMEM_7ead;
                  if ((DAT_EXTMEM_7ead != 0) ||
                     ((bVar8 = DAT_EXTMEM_7f84, DAT_EXTMEM_7f84 == 0 &&
                      (BANK0_R3 = BANK0_R3 & 0xf, bVar8 = DAT_EXTMEM_d25c, DAT_EXTMEM_d25c < 3)))) {
                    BANK2_R5 = BANK2_R5 & 0xf8 | 2;
                    DAT_EXTMEM_7fa7 = 2;
                  }
                  BANK0_R2 = bVar1;
                  BANK0_R7 = uVar2;
                  FUN_CODE_2242(bVar8);
                }
                else if (DAT_EXTMEM_7fa2 == 6) {
                  BANK0_R2 = bVar1;
                  BANK0_R7 = uVar2;
                  FUN_CODE_226e();
                }
                BANK1_R2 = DAT_EXTMEM_7f7e;
                BANK1_R3 = DAT_EXTMEM_7f7d;
                BANK1_R4 = DAT_EXTMEM_7f7c;
                BANK1_R5 = BANK2_R5;
                BANK0_R2 = bVar1;
                BANK0_R7 = uVar2;
                FUN_CODE_26be(0x7f08);
                bVar8 = DAT_EXTMEM_7f99;
              }
              else {
                BANK1_R6 = 0;
              }
            }
          }
          if (DAT_INTMEM_41 != '\0') break;
          cVar9 = BANK2_R5 == 0x14;
          if ((bool)cVar9) {
            DAT_INTMEM_51 = 0x2a;
          }
          else if (BANK2_R5 == 6) {
            DAT_INTMEM_3e = 0x28;
            DAT_INTMEM_51 = DAT_INTMEM_3e;
          }
          else {
            DAT_INTMEM_3e = 0x29;
            DAT_INTMEM_51 = DAT_INTMEM_3e;
          }
          DAT_INTMEM_50 = 1;
          BANK0_R2 = bVar1;
          BANK0_R7 = uVar2;
          FUN_CODE_044f((ushort)bVar7 << 8);
          if (cVar9 == '\0') {
            if (BANK2_R5 == 6) {
              BANK0_R3 = 0;
            }
            else {
              BANK0_R3 = 8;
            }
            BANK2_R6 = 0;
          }
          else {
            BANK2_R6 = 0x10;
            BANK0_R3 = bVar4;
          }
          BANK3_R2 = BANK3_R2 | 1;
          bVar8 = DAT_EXTMEM_7f99;
          if ((BANK2_R6 == 0) || (BANK2_R6 == 8)) {
            uEXTMEMd82a = 0xff;
            uEXTMEMd82b = 0xff;
          }
          else {
            uEXTMEMd82a = 0;
            uEXTMEMd82b = 0;
          }
        }
        if (DAT_INTMEM_41 != '\x01') break;
        BANK2_R7 = BANK2_R5 & 0xf;
        if (BANK2_R7 == 4) {
          bVar6 = 0x65;
        }
        else if (BANK2_R7 == 2) {
          BANK0_R3 = 100;
        }
        else if (BANK2_R7 == 1) {
          DAT_INTMEM_3e = 99;
          BANK0_R3 = DAT_INTMEM_3e;
        }
        else {
          DAT_INTMEM_3e = 0x62;
          BANK0_R3 = DAT_INTMEM_3e;
        }
        DAT_INTMEM_50 = 1;
        BANK0_R2 = bVar1;
        BANK0_R7 = uVar2;
        DAT_INTMEM_51 = bVar6;
        FUN_CODE_044f((ushort)bVar7 << 8);
        DAT_EXTMEM_7f7c = (BANK2_R5 & 0x80) >> 2 | DAT_EXTMEM_7f7c;
        if (DAT_EXTMEM_7f7c == 0) {
          BANK0_R3 = BANK0_R3 & 0xde;
        }
        else {
          BANK0_R3 = BANK0_R3 & 0xdf | 1;
        }
        BANK3_R2 = BANK3_R2 | 2;
        bVar8 = DAT_EXTMEM_7f99;
      }
      if (DAT_INTMEM_41 != '\x02') {
        if (DAT_INTMEM_41 != '\x03') {
          if (DAT_INTMEM_41 != '\x04') {
            if (DAT_INTMEM_41 != '\x05') {
              if (DAT_INTMEM_41 != '\x06') {
                if (DAT_INTMEM_41 == '\a') {
                  uEXTMEMcc0e = (BANK2_R5 >> 4 & 1) != 0;
                  BANK0_R3 = BANK0_R3 & 1;
                  BANK1_R2 = DAT_EXTMEM_7f7e;
                  BANK1_R3 = DAT_EXTMEM_7f7d;
                  BANK1_R4 = DAT_EXTMEM_7f7c;
                  BANK0_R2 = bVar1;
                  BANK0_R7 = uVar2;
                  BANK1_R5 = BANK2_R5;
                  DAT_EXTMEM_7f8a = BANK2_R5;
                  FUN_CODE_26be(0x7f07);
                  bVar8 = DAT_EXTMEM_7f99;
                }
                else {
                  bVar8 = BANK2_R5;
                  if (DAT_INTMEM_41 != '\b') {
                    if (DAT_INTMEM_41 == '\v') {
                      DAT_INTMEM_50 = 4;
                      DAT_INTMEM_51 = 0x37;
                      BANK0_R2 = bVar1;
                      BANK0_R7 = uVar2;
                      FUN_CODE_044f((ushort)bVar7 << 8);
                      FUN_CODE_233d();
                      bEXTMEM7ff5 = BANK2_R5 | 0x80;
                      bVar8 = DAT_EXTMEM_7f99;
                    }
                    else if (DAT_INTMEM_41 == '\f') {
                      DAT_INTMEM_50 = 4;
                      DAT_INTMEM_51 = 0x38;
                      BANK0_R2 = bVar1;
                      BANK0_R7 = uVar2;
                      FUN_CODE_044f((ushort)bVar7 << 8);
                      FUN_CODE_233d();
                      bEXTMEM7ff6 = BANK2_R5 | 0x80;
                      bVar8 = DAT_EXTMEM_7f99;
                    }
                    else if (DAT_INTMEM_41 == '\r') {
                      DAT_INTMEM_50 = 4;
                      DAT_INTMEM_51 = 0x39;
                      BANK0_R2 = bVar1;
                      BANK0_R7 = uVar2;
                      FUN_CODE_044f((ushort)bVar7 << 8);
                      FUN_CODE_233d();
                      bEXTMEM7ff7 = BANK2_R5 | 0x80;
                      bVar8 = DAT_EXTMEM_7f99;
                    }
                    else if (DAT_INTMEM_41 == '\x0e') {
                      DAT_INTMEM_50 = 4;
                      DAT_INTMEM_51 = 0x3a;
                      BANK0_R2 = bVar1;
                      BANK0_R7 = uVar2;
                      FUN_CODE_044f((ushort)bVar7 << 8);
                      FUN_CODE_233d();
                      bEXTMEM7ff8 = BANK2_R5 | 0x80;
                      bVar8 = DAT_EXTMEM_7f99;
                    }
                    else if ((DAT_INTMEM_41 == '\x0f') || (DAT_INTMEM_41 == '\x10')) {
                      DAT_INTMEM_50 = 4;
                      DAT_INTMEM_51 = 0x3b;
                      BANK0_R2 = bVar1;
                      BANK0_R7 = uVar2;
                      FUN_CODE_044f((ushort)bVar7 << 8);
                      bVar8 = DAT_EXTMEM_7f99;
                    }
                    else if (DAT_INTMEM_41 == '\x11') {
                      DAT_INTMEM_50 = 0x20;
                      DAT_INTMEM_51 = 0x34;
                      BANK0_R2 = bVar1;
                      BANK0_R7 = uVar2;
                      FUN_CODE_044f((ushort)bVar7 << 8);
                      if ((BANK2_R5 & 1) == BANK0_R4) {
                        BANK0_R2 = bVar1;
                        BANK0_R7 = uVar2;
                        FUN_CODE_2211(0x7f01);
                        param_3 = DAT_EXTMEM_7ff1;
                      }
                      else {
                        BANK1_R2 = DAT_EXTMEM_7f7e;
                        BANK1_R3 = DAT_EXTMEM_7f7d;
                        BANK1_R4 = DAT_EXTMEM_7f7c;
                        BANK1_R5 = BANK2_R5;
                        BANK0_R2 = bVar1;
                        BANK0_R7 = uVar2;
                        FUN_CODE_26be(0x7f0f);
                        DAT_EXTMEM_7fe0 = '\x01';
                        param_3 = DAT_EXTMEM_7ff1;
                      }
                      DAT_EXTMEM_7ff1 = BANK2_R5 & 1;
                      DAT_EXTMEM_ca0c = 1;
                      bVar8 = DAT_EXTMEM_7f99;
                    }
                    else if (DAT_INTMEM_41 == 'W') {
                      DAT_INTMEM_50 = 0x20;
                      DAT_INTMEM_51 = 0x30;
                      BANK0_R2 = bVar1;
                      BANK0_R7 = uVar2;
                      FUN_CODE_044f((ushort)bVar7 << 8);
                      DAT_EXTMEM_cad0 = 1;
                      DAT_EXTMEM_7fe0 = '\x01';
                      FUN_CODE_2211(0x7f00);
                      DAT_EXTMEM_7ff2 = 1;
                      bVar8 = DAT_EXTMEM_7f99;
                    }
                    else if (DAT_INTMEM_41 == -0x40) {
                      DAT_EXTMEM_7fde = BANK2_R5 - 1;
                      DAT_INTMEM_50 = 8;
                      DAT_INTMEM_51 = 0x3d;
                      uVar10 = 0x7f;
                      BANK0_R2 = bVar1;
                      BANK0_R7 = uVar2;
                      FUN_CODE_044f(0x7f00);
                      FUN_CODE_2211(CONCAT11(uVar10,1));
                      bVar8 = DAT_EXTMEM_7f99;
                      if (BANK2_R5 == 0) {
                        DAT_EXTMEM_7fdd = '\x01';
                      }
                      else {
                        DAT_EXTMEM_7fdd = '\0';
                      }
                    }
                    else if (DAT_INTMEM_41 == -0x3f) {
                      DAT_INTMEM_50 = 8;
                      DAT_INTMEM_51 = 0x3e;
                      BANK0_R2 = bVar1;
                      BANK0_R7 = uVar2;
                      FUN_CODE_044f((ushort)bVar7 << 8);
                      if (DAT_EXTMEM_7f79 == '\0') {
                        BANK0_R2 = bVar1;
                        BANK0_R7 = uVar2;
                        FUN_CODE_2211(0x7f01,0);
                      }
                      bVar8 = DAT_EXTMEM_7f99;
                      if (BANK2_R5 != 0) {
                        DAT_EXTMEM_7fdd = '\0';
                      }
                    }
                    else {
                      bVar8 = DAT_EXTMEM_7f99;
                      if (DAT_INTMEM_41 == -0x3e) {
                        uVar11 = 0x7fde;
                        bVar8 = DAT_EXTMEM_7fde;
                        if (DAT_EXTMEM_7fde < 0x10) {
                          DAT_EXTMEM_7fdf =
                               (DAT_EXTMEM_7fdf -
                               *(char *)CONCAT11('\x7f' - (((0x3f < DAT_EXTMEM_7fde) << 7) >> 7),
                                                 DAT_EXTMEM_7fde - 0x40)) + BANK2_R5;
                          *(byte *)CONCAT11('\x7f' - (((0x3f < DAT_EXTMEM_7fde) << 7) >> 7),
                                            DAT_EXTMEM_7fde - 0x40) = BANK2_R5;
                          bVar8 = DAT_EXTMEM_7fdf + 1 & 0x3f;
                          uVar11 = 0xd230;
                          param_3 = bVar3;
                          DAT_EXTMEM_d230 = bVar8;
                        }
                        DAT_INTMEM_50 = 8;
                        DAT_INTMEM_51 = 0x3f;
                        uVar11 = uVar11 & 0xff00;
                        BANK0_R2 = bVar1;
                        BANK0_R7 = uVar2;
                        FUN_CODE_044f(uVar11,bVar8);
                        DAT_INTMEM_50 = 8;
                        DAT_INTMEM_51 = 0x68;
                        FUN_CODE_044f(uVar11 & 0xff00);
                        DAT_INTMEM_50 = 8;
                        DAT_INTMEM_51 = 3;
                        FUN_CODE_044f(1);
                        DAT_INTMEM_51 = DAT_EXTMEM_7fde;
                        DAT_INTMEM_50 = 8;
                        uVar10 = 0x7f;
                        FUN_CODE_044f(0x7f01);
                        DAT_INTMEM_50 = 8;
                        DAT_INTMEM_51 = BANK2_R5;
                        FUN_CODE_044f(CONCAT11(uVar10,1));
                        DAT_INTMEM_51 = DAT_EXTMEM_d230;
                        DAT_INTMEM_50 = 8;
                        FUN_CODE_044f(0xd201);
                        if (DAT_EXTMEM_7f79 == '\0') {
                          BANK0_R2 = bVar1;
                          BANK0_R7 = uVar2;
                          FUN_CODE_2211(0x7f01,0);
                        }
                        cVar9 = DAT_EXTMEM_7fdd;
                        bVar8 = DAT_EXTMEM_7f99;
                        if ((BANK2_R5 == 0x3f) && (DAT_EXTMEM_7fdd != '\0')) {
                          DAT_EXTMEM_7fdd = '\0';
                          BANK0_R2 = bVar1;
                          BANK0_R7 = uVar2;
                          FUN_CODE_1f5c(cVar9);
                          bVar8 = DAT_EXTMEM_7f99;
                        }
                      }
                    }
                  }
                }
                goto LAB_CODE_400a;
              }
              BANK3_R0 = 1;
            }
            BANK3_R0 = BANK3_R0 + 1;
          }
          BANK3_R0 = BANK3_R0 + 1;
        }
        DAT_INTMEM_50 = 4;
        DAT_INTMEM_51 = 0x15;
        BANK0_R2 = bVar1;
        BANK0_R7 = uVar2;
        FUN_CODE_044f((ushort)bVar7 << 8);
        *(byte *)CONCAT11('\x7f' - (((0x7f < BANK3_R0) << 7) >> 7),BANK3_R0 + 0x80) = BANK2_R5;
        DAT_EXTMEM_7fa3 = 1;
        bVar8 = DAT_EXTMEM_7f99;
        goto LAB_CODE_400a;
      }
      DAT_EXTMEM_7f87 = 1;
      DAT_EXTMEM_7ffa = 0;
      BANK1_R7 = 0;
      DAT_EXTMEM_7fe2 = BANK2_R5 & 0xc;
      DAT_EXTMEM_7f86 = BANK2_R5;
      if (((DAT_EXTMEM_7fe2 != 0) || (DAT_EXTMEM_7ff9 != '\0')) && (DAT_EXTMEM_7fff == '\0')) {
        BANK1_R7 = 1;
        if (BANK0_R3 < 4) {
          switch(DAT_EXTMEM_7fe2) {
          case 0:
            DAT_EXTMEM_7ff9 = '\0';
            DAT_EXTMEM_7f93 = DAT_EXTMEM_7f93 | 8;
            DAT_EXTMEM_c804 = 0x84;
            BANK0_R6 = *(byte *)(((BANK2_R5 >> 7) << 1 | (BANK2_R5 & 0x40) >> 6) + 0x28) & 0xf;
            BANK0_R3 = BANK0_R3 & 6 | cVar9 * -0x10;
            BANK0_R3 = BANK0_R3 | 0xf;
            bEXTMEMc870 = 0;
            uEXTMEMc871 = 0;
            for (BANK3_R1 = 0; BANK3_R1 < 4; BANK3_R1 = BANK3_R1 + 1) {
              BANK0_R4 = BANK3_R1 + 0x28;
              cVar9 = -(((0xd7 < BANK3_R1) << 7) >> 7);
              BANK0_R5 = BANK0_R5 & 0xcf;
              *(undefined1 *)CONCAT11(cVar9 + -0x32,param_3) =
                   *(undefined1 *)CONCAT11(cVar9 + -0x32,BANK0_R4);
            }
            break;
          case 4:
            DAT_EXTMEM_7ff9 = '\x01';
            DAT_EXTMEM_7f93 = DAT_EXTMEM_7f93 & 0xf7;
            BANK0_R2 = bVar1;
            BANK0_R7 = uVar2;
            FUN_CODE_2820(0x7f00);
            uEXTMEMcc00 = 0;
            BANK0_R3 = BANK0_R3 & 0xfd | 9;
            DAT_EXTMEM_c804 = 0x85;
            uEXTMEMcc5e = 0;
            break;
          case 8:
            DAT_EXTMEM_7ff9 = '\x02';
            DAT_EXTMEM_7f93 = DAT_EXTMEM_7f93 & 0xf7;
            BANK0_R2 = bVar1;
            BANK0_R7 = uVar2;
            FUN_CODE_2820(0x7f00);
            uEXTMEMcc00 = 0;
            if ((bEXTMEMc84b & 1) == 0) {
              BANK0_R3 = BANK0_R3 & 0xd | 0x70;
            }
            else {
              uEXTMEMc87d = 0x20;
              uEXTMEMc87e = 0xff;
              uEXTMEMc87f = 1;
              bEXTMEMc870 = DAT_EXTMEM_d804;
              uEXTMEMc871 = 0x80;
              BANK0_R3 = BANK0_R3 & 0xd | 0x10;
            }
            break;
          case 0xc:
            DAT_EXTMEM_7ff9 = '\x03';
            DAT_EXTMEM_7f93 = DAT_EXTMEM_7f93 & 0xf7;
            BANK0_R2 = bVar1;
            BANK0_R7 = uVar2;
            FUN_CODE_2820(0x7f00);
            uEXTMEMcc00 = 0;
            bEXTMEMc870 = DAT_EXTMEM_d804 << 4;
            BANK0_R3 = BANK0_R3 & 0xb0 | 0x90;
          }
        }
        if (4 < DAT_EXTMEM_7fa2) {
          uEXTMEMc600 = (BANK2_R5 >> 5 & 1) != 0;
          BANK0_R3 = BANK0_R3 & 1;
        }
      }
      bVar8 = DAT_EXTMEM_7f99;
    } while (3 < BANK0_R3);
    param_1 = 0x390d;
    switch(BANK2_R5 & 3) {
    case 0:
      DAT_INTMEM_50 = 4;
      DAT_INTMEM_51 = 0x11;
      BANK0_R2 = bVar1;
      BANK0_R7 = uVar2;
      FUN_CODE_044f(0x3900);
      uEXTMEMc600 = (BANK2_R5 >> 5 & 1) != 0;
      BANK0_R3 = BANK0_R3 & 1;
      DAT_EXTMEM_7fe2 = DAT_EXTMEM_c850 & 1;
      if (DAT_EXTMEM_7fe2 != 0) {
        BANK0_R2 = bVar1;
        BANK0_R7 = uVar2;
        FUN_CODE_129a(DAT_EXTMEM_7fe2);
        uEXTMEMcc00 = 0;
        uEXTMEMce76 = DAT_EXTMEM_7fa5;
        FUN_CODE_2820(0xce00);
        uEXTMEMc600 = (BANK2_R5 >> 5 & 1) != 0;
        BANK0_R3 = BANK0_R3 & 1 | ~DAT_EXTMEM_d804;
        bVar8 = DAT_EXTMEM_d80d;
        while (bVar8 != 0xf) {
          BANK0_R4 = BANK0_R4 & 0xf;
          bVar8 = ~DAT_EXTMEM_d804 & 0xf | DAT_EXTMEM_d80d;
        }
        cVar9 = '\x05';
        do {
          cVar9 = cVar9 + -1;
        } while (cVar9 != '\0');
      }
      bVar8 = BANK0_R3;
      if (DAT_EXTMEM_7fe2 == 0 && DAT_EXTMEM_7fa2 != 4) {
        BANK1_R2 = DAT_EXTMEM_7f7e;
        BANK1_R3 = DAT_EXTMEM_7f7d;
        BANK1_R4 = DAT_EXTMEM_7f7c;
        BANK1_R5 = BANK2_R5;
        param_3 = DAT_EXTMEM_7fe2;
        BANK0_R2 = bVar1;
        BANK0_R7 = uVar2;
        FUN_CODE_26be(0x7f05);
        bVar8 = DAT_EXTMEM_7f99;
      }
      else {
        BANK0_R3 = BANK0_R3 | 0x10;
        DAT_EXTMEM_7fa2 = 2;
        DAT_INTMEM_27 = '\x01';
        param_3 = DAT_EXTMEM_7f8d;
        if (DAT_EXTMEM_7ff9 == '\0') {
          BANK0_R4 = *(byte *)(((BANK2_R5 >> 7) << 1 | (BANK2_R5 & 0x40) >> 6) + 0x28) & 0xf;
          param_3 = DAT_EXTMEM_7f8d << 4;
          BANK0_R3 = bVar8 & 0xf | param_3;
        }
        if ((DAT_EXTMEM_d25c & 0xf) == 0) {
          BANK0_R3 = BANK0_R3 & 0xfd;
        }
        DAT_EXTMEM_7f9c = 0;
        DAT_EXTMEM_7f85 = 0;
        DAT_EXTMEM_7f9e = 0;
        DAT_EXTMEM_7f9f = 0;
        DAT_EXTMEM_7fa0 = 0;
        DAT_EXTMEM_7fa1 = 0;
        DAT_EXTMEM_7fbc = 0;
        DAT_EXTMEM_7f8d = DAT_EXTMEM_7f8d | DAT_EXTMEM_7fe2;
        bVar8 = DAT_EXTMEM_7f99;
      }
      goto LAB_CODE_400a;
    case 1:
      DAT_INTMEM_50 = 4;
      DAT_INTMEM_51 = 0x12;
      BANK0_R2 = bVar1;
      BANK0_R7 = uVar2;
      FUN_CODE_044f(0x3900);
      FUN_CODE_2242();
      uEXTMEMcc00 = 1;
      bEXTMEMd80b = 0;
      bEXTMEMd80a = 0;
      DAT_EXTMEM_d804 = 0;
      DAT_EXTMEM_7fb4 = 0;
      DAT_EXTMEM_7eb9 = 0;
      DAT_EXTMEM_7fab = '\0';
      DAT_EXTMEM_7fa9 = 0;
      DAT_EXTMEM_7faa = 0;
      BANK0_R3 = BANK0_R3 & 0xfd;
      uVar11 = 0xc80f;
      FUN_CODE_129a();
      FUN_CODE_2820(uVar11 & 0xff00);
      DAT_EXTMEM_7f74 = 0xff;
      DAT_INTMEM_27 = '\0';
      DAT_EXTMEM_7fff = '\0';
      BANK0_R3 = BANK0_R3 & 0xef;
      if ((bEXTMEMc84b >> 1 & 1) != 1) {
        BANK1_R2 = 0;
        BANK1_R3 = 0;
        BANK1_R4 = 0;
        BANK1_R5 = 0;
        BANK0_R2 = bVar1;
        BANK0_R7 = uVar2;
        FUN_CODE_26be(0xc801,bEXTMEMc84b);
      }
      if (DAT_EXTMEM_7fa2 != 3) {
        DAT_EXTMEM_7fa3 = 1;
      }
      DAT_EXTMEM_7fa2 = 3;
      DAT_EXTMEM_cc97 = 1;
      BANK0_R2 = bVar1;
      BANK0_R7 = uVar2;
      FUN_CODE_2242();
      DAT_EXTMEM_c804 = 0x81;
      for (bVar4 = 0; bVar8 = DAT_EXTMEM_7f99, (bVar4 < 4) << 7 < '\0'; bVar4 = bVar4 + 1) {
        *(undefined1 *)CONCAT11('\x7f' - (((0x7f < bVar4) << 7) >> 7),bVar4 + 0x80) = 0;
      }
      goto LAB_CODE_400a;
    case 2:
      break;
    case 3:
    }
  } while( true );
}



/* =========================================================
 * CODE:4046  FUN_CODE_4046  size=275
 * ========================================================= */

void FUN_CODE_4046(void)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  
  if ((((DAT_EXTMEM_7fec == '\x01') && (DAT_EXTMEM_7fe0 == '\0')) && (DAT_EXTMEM_7ffb == '\0')) &&
     (DAT_EXTMEM_7f79 == '\0')) {
    DAT_EXTMEM_ca20 = 1;
    DAT_EXTMEM_ca21 = 0;
    uEXTMEMca08 = 1;
    DAT_EXTMEM_7f9d = 0;
  }
  if ((((BANK3_R2 & 1) == 0) || (bVar1 = DAT_EXTMEM_7f7d, DAT_EXTMEM_7f7d == BANK2_R6)) &&
     (((BANK3_R2 >> 1 & 1) == 0 || (bVar1 = DAT_EXTMEM_7f7e, BANK2_R7 <= DAT_EXTMEM_7f7e)))) {
    if (((BANK3_R2 >> 1 & 1) == 1) && ((BANK2_R7 < BANK0_R2) << 7 < '\0')) {
      FUN_CODE_2242(DAT_EXTMEM_7f7e);
      cVar2 = BANK2_R7 + 1;
      cVar3 = '\x01';
      while (cVar2 = cVar2 + -1, cVar2 != '\0') {
        cVar3 = cVar3 * '\x02';
      }
      DAT_EXTMEM_7fed = cVar3 + -1;
      BANK0_R2 = BANK0_R2 & 0xf6;
      uEXTMEMcc05 = 1;
      DAT_EXTMEM_cc7c = 0xf;
      DAT_EXTMEM_cc7d = 0xf;
      DAT_EXTMEM_7f7e = BANK2_R7;
      DAT_EXTMEM_d804 = DAT_EXTMEM_7fed;
      cEXTMEMd80a = DAT_EXTMEM_7fed;
      cEXTMEMd80b = DAT_EXTMEM_7fed;
      if ((4 < DAT_EXTMEM_7fa2) && (BANK2_R7 != 0)) {
        BANK1_R2 = BANK2_R7;
        BANK1_R3 = DAT_EXTMEM_7f7d;
        BANK1_R4 = DAT_EXTMEM_7f7c;
        BANK1_R5 = 0;
        FUN_CODE_26be(0x7f06);
      }
    }
  }
  else {
    if ((BANK3_R2 & 1) != 0) {
      DAT_EXTMEM_7f7d = BANK2_R6;
    }
    FUN_CODE_270e(bVar1);
    if ((BANK3_R2 >> 1 & 1) == 1) {
      DAT_EXTMEM_7f7e = BANK2_R7;
    }
  }
  if (DAT_INTMEM_27 == '\0') {
    return;
  }
  if (DAT_EXTMEM_7f8d == '\0') {
    FUN_CODE_41e1(0);
    return;
  }
  DAT_EXTMEM_cc7c = 0xf;
  if (DAT_EXTMEM_7ff9 == '\0') {
    DAT_EXTMEM_7f93 = DAT_EXTMEM_7f93 | 8;
  }
  DAT_EXTMEM_c804 = 0x84;
  DAT_EXTMEM_7fa2 = 5;
  BANK0_R2 = BANK0_R2 | 1;
  if (DAT_EXTMEM_7fab == '\0') {
    DAT_INTMEM_50 = 1;
    DAT_INTMEM_51 = 9;
    FUN_CODE_044f(0x7f00,0);
    bVar1 = BANK0_R2;
    DAT_EXTMEM_cc0b = 0;
    BANK0_R2 = BANK0_R2 | 2;
    DAT_EXTMEM_7fa2 = 6;
    if (DAT_EXTMEM_7f84 == '\0') {
      BANK0_R2 = bVar1 | 0x22;
    }
    if ((bCODE00a6 >> 4 & 1) != 1) {
      FUN_CODE_226e(bCODE00a6);
    }
    DAT_EXTMEM_7fa1 = 0;
    return;
  }
  return;
}



/* =========================================================
 * CODE:4159  FUN_CODE_4159  size=137
 * ========================================================= */

void FUN_CODE_4159(void)

{
  byte bVar1;
  
  if (DAT_EXTMEM_7f8d == '\0') {
    FUN_CODE_41e1(0);
    return;
  }
  DAT_EXTMEM_cc7c = 0xf;
  if (DAT_EXTMEM_7ff9 == '\0') {
    DAT_EXTMEM_7f93 = DAT_EXTMEM_7f93 | 8;
  }
  DAT_EXTMEM_c804 = 0x84;
  DAT_EXTMEM_7fa2 = 5;
  BANK0_R2 = BANK0_R2 | 1;
  if (DAT_EXTMEM_7fab == '\0') {
    DAT_INTMEM_50 = 1;
    DAT_INTMEM_51 = 9;
    FUN_CODE_044f(0x7f00,0);
    bVar1 = BANK0_R2;
    DAT_EXTMEM_cc0b = 0;
    BANK0_R2 = BANK0_R2 | 2;
    DAT_EXTMEM_7fa2 = 6;
    if (DAT_EXTMEM_7f84 == '\0') {
      BANK0_R2 = bVar1 | 0x22;
    }
    if ((bCODE00a6 >> 4 & 1) != 1) {
      FUN_CODE_226e(bCODE00a6);
    }
    DAT_EXTMEM_7fa1 = 0;
    return;
  }
  return;
}



/* =========================================================
 * CODE:41e1  FUN_CODE_41e1  size=15
 * callers: CODE:4159
 * ========================================================= */

void FUN_CODE_41e1(void)

{
  DAT_INTMEM_50 = 1;
  DAT_INTMEM_51 = 8;
  FUN_CODE_044f(0);
  FUN_CODE_270e();
  return;
}



/* =========================================================
 * CODE:41f1  FUN_CODE_41f1  size=44
 * callers: CODE:2878, CODE:586a
 * ========================================================= */

void FUN_CODE_41f1(ushort param_1)

{
  DAT_INTMEM_50 = 0x20;
  DAT_INTMEM_51 = 0x18;
  FUN_CODE_044f(param_1 & 0xff00);
  uEXTMEMca1c = 0x20;
  uEXTMEMca0a = 1;
  if (DAT_EXTMEM_7f9f == '\0') {
    DAT_EXTMEM_7f9d = DAT_EXTMEM_7f9d + '\x01';
  }
  DAT_EXTMEM_7f9f = 0;
  return;
}



/* =========================================================
 * CODE:421d  FUN_CODE_421d  size=94
 * callers: CODE:6051, CODE:60c7, CODE:586a, CODE:616b, CODE:6134
 * ========================================================= */

void FUN_CODE_421d(ushort param_1)

{
  DAT_INTMEM_51 = (undefined1)param_1;
  DAT_INTMEM_50 = 1;
  FUN_CODE_044f(param_1 & 0xff00);
  while (DAT_EXTMEM_7eb7 != '\0') {
    DAT_INTMEM_50 = 0x20;
    DAT_INTMEM_51 = 0x2d;
    FUN_CODE_044f(0x7e00,DAT_EXTMEM_7eb7);
  }
  DAT_EXTMEM_cc20 = DAT_EXTMEM_cc8f == '\0';
  if ((bool)DAT_EXTMEM_cc20) {
    DAT_EXTMEM_cc1f = 0x24;
    DAT_EXTMEM_cc1e = 0xf8;
  }
  else {
    DAT_EXTMEM_cc1f = 0x1d;
    DAT_EXTMEM_cc1e = 0x4c;
  }
  DAT_EXTMEM_cc21 = 1;
  DAT_INTMEM_50 = 4;
  DAT_INTMEM_51 = 10;
  FUN_CODE_044f(0xcc00,0);
  return;
}



/* =========================================================
 * CODE:427b  FUN_CODE_427b  size=61
 * callers: CODE:60c7
 * ========================================================= */

void FUN_CODE_427b(void)

{
  if (DAT_EXTMEM_cc8f == '\0') {
    DAT_EXTMEM_cc20 = 2;
    DAT_EXTMEM_cc1f = 0x49;
    DAT_EXTMEM_cc1e = 0xf0;
  }
  else {
    DAT_EXTMEM_cc20 = 0;
    DAT_EXTMEM_cc1f = 0x75;
    DAT_EXTMEM_cc1e = 0x30;
  }
  DAT_EXTMEM_cc21 = 1;
  DAT_INTMEM_50 = 0x20;
  DAT_INTMEM_51 = 0xb;
  FUN_CODE_044f(0xcc00);
  return;
}



/* =========================================================
 * CODE:42b8  FUN_CODE_42b8  size=152
 * callers: CODE:586a
 * ========================================================= */

void FUN_CODE_42b8(byte param_1)

{
  byte bVar1;
  
  DAT_EXTMEM_7fae = 0;
  DAT_EXTMEM_7faf = 0;
  DAT_EXTMEM_7fb0 = 0;
  DAT_EXTMEM_7fb2 = DAT_EXTMEM_ca61;
  DAT_INTMEM_45 = DAT_EXTMEM_ca65 + 1;
  DAT_EXTMEM_7fb1 = DAT_INTMEM_45;
  DAT_EXTMEM_7f78 = 0;
  DAT_EXTMEM_7f79 = 0;
  DAT_EXTMEM_7f7a = 0;
  DAT_EXTMEM_7ffb = 0;
  DAT_EXTMEM_7fee = 0;
  DAT_EXTMEM_7fb7 = 0;
  if (((DAT_EXTMEM_ca41 & 1) != 1) && (BANK0_R3 < 0x11)) {
    if ((DAT_EXTMEM_ca61 >> 3 & 1) == 0) {
      DAT_EXTMEM_7fb0 = DAT_EXTMEM_ca62;
      DAT_EXTMEM_7faf = DAT_EXTMEM_ca63;
      DAT_EXTMEM_7fae = DAT_EXTMEM_ca64;
      BANK1_R0 = 0;
      BANK1_R1 = 0;
      if ((DAT_EXTMEM_ca62 == '\0') &&
         (((DAT_EXTMEM_ca63 == 0 || ((DAT_EXTMEM_ca63 == 0x22 && (-1 < cCODE00ab)))) &&
          (BANK0_R2 < 4)))) {
                    /* WARNING: Could not recover jumptable at 0x43ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ushort)(DAT_EXTMEM_ca64 * '\x03') + 0x43ad))(DAT_EXTMEM_ca61);
        return;
      }
      BANK1_R1 = 0;
      BANK1_R0 = 0;
      if ((DAT_EXTMEM_ca61 >> 3 & 1) != 1) {
        FUN_CODE_484b(DAT_EXTMEM_ca61);
        return;
      }
      DAT_EXTMEM_7f7b = 0;
      DAT_EXTMEM_7fbf = 0;
      if ((((DAT_EXTMEM_ca61 == 8) && (DAT_EXTMEM_ca62 == '\0')) && (DAT_EXTMEM_ca63 == 1)) &&
         (DAT_EXTMEM_ca64 == 0xc0)) {
        DAT_EXTMEM_cc97 = '\x01';
      }
      bVar1 = DAT_EXTMEM_ca61;
      if ((DAT_EXTMEM_ca9f == '\0') || ((DAT_EXTMEM_7f84 == '\0' && ((DAT_EXTMEM_d25c & 0xf) == 0)))
         ) {
        if ((DAT_EXTMEM_ca62 == '\0') &&
           ((((DAT_EXTMEM_ca63 == 0 && (BANK0_R2 < 0x22)) &&
             (bVar1 = -((CARRY1(DAT_INTMEM_45,DAT_EXTMEM_ca64) << 7) >> 7), param_1 = DAT_INTMEM_45,
             0x80 < (bVar1 ^ 0x80) - (((0x20 < DAT_INTMEM_45 + DAT_EXTMEM_ca64) << 7) >> 7))) ||
            ((((DAT_EXTMEM_7f84 == '\0' && (DAT_EXTMEM_ca61 == 8)) && (DAT_EXTMEM_ca63 == 1)) &&
             ((BANK0_R2 < 0xc3 && (0xbf < DAT_EXTMEM_ca64)))))))) {
          DAT_EXTMEM_7fec = '\x01';
        }
        else if (((DAT_EXTMEM_ca61 == 9) && (DAT_EXTMEM_ca62 == '\x0e')) &&
                ((DAT_EXTMEM_ca63 == 0 && ((BANK0_R2 < 0xd && ((bCODE00a7 >> 6 & 1) != 0)))))) {
          DAT_EXTMEM_7fec = '\x01';
        }
        else if ((((DAT_EXTMEM_ca61 == 9) || (DAT_EXTMEM_ca61 == 8)) && (DAT_EXTMEM_ca62 == '\x0f'))
                && (BANK0_R2 < 3)) {
          DAT_EXTMEM_7fec = '\x01';
        }
        else if (((DAT_EXTMEM_ca62 == '\0') && (DAT_EXTMEM_ca63 == 0x20)) &&
                ((DAT_EXTMEM_ca64 == 2 &&
                 (BANK0_R2 = BANK0_R2 & 0x20, bVar1 = DAT_EXTMEM_7ead,
                 (DAT_EXTMEM_7ead & bCODE00a7) != 0)))) {
          DAT_EXTMEM_7fec = '\x01';
        }
        else if (((DAT_EXTMEM_ca62 == '\0') && (DAT_EXTMEM_ca63 == 0x20)) &&
                ((BANK0_R2 < 0xf &&
                 (bVar1 = -((CARRY1(DAT_INTMEM_45,DAT_EXTMEM_ca64) << 7) >> 7),
                 param_1 = DAT_INTMEM_45,
                 0x80 < (bVar1 ^ 0x80) - (((0xc < DAT_INTMEM_45 + DAT_EXTMEM_ca64) << 7) >> 7))))) {
          if (DAT_EXTMEM_ca64 < 10) {
            DAT_EXTMEM_7faf = 1;
          }
          else {
            DAT_EXTMEM_7faf = 2;
          }
          DAT_EXTMEM_7fae = DAT_EXTMEM_ca64 - 10;
          DAT_EXTMEM_7fe1 = DAT_EXTMEM_caab;
          DAT_EXTMEM_7fe2 = DAT_EXTMEM_caaa;
          DAT_EXTMEM_7fe3 = DAT_EXTMEM_caa9;
          DAT_EXTMEM_7fe4 = DAT_EXTMEM_caa8;
          DAT_EXTMEM_cac0 = 0xa2;
          DAT_EXTMEM_cac2 = DAT_EXTMEM_ca65;
          DAT_EXTMEM_cac3 = 1;
          do {
            DAT_EXTMEM_7fec = DAT_EXTMEM_ca50;
            DAT_EXTMEM_cac1 = DAT_EXTMEM_7fae;
          } while (DAT_EXTMEM_ca50 == '\0');
        }
        else if (((cCODE00ab < '\0') || (DAT_EXTMEM_ca62 != '\0')) || (DAT_EXTMEM_ca63 != 0x22)) {
          if (((DAT_EXTMEM_ca61 == 9) && (DAT_EXTMEM_ca62 == '\0')) &&
             ((DAT_EXTMEM_ca63 == 2 && (DAT_EXTMEM_ca64 == 0xc0)))) {
            DAT_EXTMEM_7fbf = 1;
            if ((DAT_EXTMEM_cc97 == '\0') ||
               ((DAT_EXTMEM_7fa2 != '\x05' && (0x3e < DAT_EXTMEM_cc0b)))) {
              DAT_EXTMEM_7fec = '\x02';
            }
            else {
              DAT_EXTMEM_7fec = '\x01';
              DAT_EXTMEM_7fe1 = '#';
              while (BANK0_R2 < 0x33) {
                *(undefined1 *)CONCAT11(0xca,DAT_EXTMEM_7fe1) = 0;
                DAT_EXTMEM_7fe1 = DAT_EXTMEM_7fe1 + '\x01';
              }
              DAT_EXTMEM_ca61 = 0xf;
            }
          }
          else if (((DAT_EXTMEM_ca62 == '\0') && ((DAT_EXTMEM_ca63 & 0xf8) == 0)) &&
                  ((DAT_EXTMEM_ca64 & 0xe0) == 0)) {
            BANK0_R2 = BANK0_R2 & 7;
            DAT_EXTMEM_cac0 = DAT_EXTMEM_ca63;
            DAT_EXTMEM_cac1 = DAT_EXTMEM_ca64;
            DAT_EXTMEM_cac2 = DAT_EXTMEM_ca65;
            DAT_EXTMEM_cac3 = 1;
            do {
              DAT_EXTMEM_7fec = DAT_EXTMEM_ca50;
            } while (DAT_EXTMEM_ca50 == '\0');
          }
          else {
            DAT_EXTMEM_7fec = '\x02';
          }
        }
        else {
          if (cCODE00a8 < '\0') {
            DAT_EXTMEM_7fe1 = DAT_EXTMEM_caa3;
            BANK0_R2 = BANK0_R2 & 0xfe;
          }
          BANK0_R2 = BANK0_R2 & 7;
          DAT_EXTMEM_cac0 = 0;
          DAT_EXTMEM_cac1 = DAT_EXTMEM_ca64;
          DAT_EXTMEM_cac2 = DAT_EXTMEM_ca65;
          DAT_EXTMEM_cac3 = 1;
          do {
            DAT_EXTMEM_7fec = DAT_EXTMEM_ca50;
          } while (DAT_EXTMEM_ca50 == '\0');
          DAT_EXTMEM_7faf = 0x22;
          if (cCODE00a8 < '\0') {
            DAT_EXTMEM_caa3 = DAT_EXTMEM_7fe1;
          }
        }
      }
      else {
        DAT_EXTMEM_7fec = '\x01';
      }
      if (DAT_EXTMEM_7fec != '\x01') {
        FUN_CODE_2211(0x7f00,bVar1,param_1);
        DAT_EXTMEM_7f76 = 0;
        DAT_EXTMEM_7f78 = 1;
      }
      if (DAT_EXTMEM_7fec == '\x02') {
        return;
      }
      BANK2_R0 = DAT_EXTMEM_7fb0;
      BANK2_R1 = DAT_EXTMEM_7faf;
      BANK2_R2 = DAT_EXTMEM_7fae;
      BANK2_R3 = DAT_EXTMEM_7fb1;
      FUN_CODE_2878(CONCAT11(0x7f,DAT_EXTMEM_7fb2));
      if (DAT_EXTMEM_7f74 != '\0') {
        FUN_CODE_1465(DAT_EXTMEM_7f74);
        DAT_EXTMEM_7f74 = 0;
        return;
      }
      return;
    }
    BANK0_R3 = *(byte *)((DAT_EXTMEM_ca61 & 1) + 0x45);
    if ((DAT_EXTMEM_ca60 == BANK0_R3) && (BANK0_R4 == '\0')) {
      FUN_CODE_4350(DAT_EXTMEM_ca61 + 4,-(((0xfb < DAT_EXTMEM_ca61) << 7) >> 7));
      return;
    }
  }
  DAT_EXTMEM_ca0c = 1;
  DAT_EXTMEM_ca0e = 2;
  return;
}



/* =========================================================
 * CODE:4350  FUN_CODE_4350  size=93
 * callers: CODE:42b8
 * ========================================================= */

void FUN_CODE_4350(byte param_1,byte param_2)

{
  DAT_EXTMEM_7fb0 = DAT_EXTMEM_ca62;
  DAT_EXTMEM_7faf = DAT_EXTMEM_ca63;
  DAT_EXTMEM_7fae = DAT_EXTMEM_ca64;
  BANK1_R0 = 0;
  BANK1_R1 = 0;
  if ((DAT_EXTMEM_ca62 == '\0') &&
     (((DAT_EXTMEM_ca63 == 0 || ((DAT_EXTMEM_ca63 == 0x22 && (-1 < cCODE00ab)))) && (BANK0_R2 < 4)))
     ) {
                    /* WARNING: Could not recover jumptable at 0x43ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ushort)(DAT_EXTMEM_ca64 * '\x03') + 0x43ad))();
    return;
  }
  BANK1_R1 = 0;
  BANK1_R0 = 0;
  if ((DAT_EXTMEM_7fb2 >> 3 & 1) != 1) {
    FUN_CODE_484b(DAT_EXTMEM_7fb2);
    return;
  }
  DAT_EXTMEM_7f7b = 0;
  DAT_EXTMEM_7fbf = 0;
  if ((((DAT_EXTMEM_7fb2 == 8) && (DAT_EXTMEM_ca62 == '\0')) && (DAT_EXTMEM_ca63 == 1)) &&
     (DAT_EXTMEM_ca64 == 0xc0)) {
    DAT_EXTMEM_cc97 = '\x01';
  }
  if ((DAT_EXTMEM_ca9f == '\0') || ((DAT_EXTMEM_7f84 == '\0' && ((DAT_EXTMEM_d25c & 0xf) == 0)))) {
    if ((DAT_EXTMEM_ca62 == '\0') &&
       ((((DAT_EXTMEM_ca63 == 0 && (BANK0_R2 < 0x22)) &&
         (param_1 = -((CARRY1(DAT_EXTMEM_7fb1,DAT_EXTMEM_ca64) << 7) >> 7),
         param_2 = DAT_EXTMEM_7fb1,
         0x80 < (param_1 ^ 0x80) - (((0x20 < DAT_EXTMEM_7fb1 + DAT_EXTMEM_ca64) << 7) >> 7))) ||
        ((((DAT_EXTMEM_7f84 == '\0' && (DAT_EXTMEM_7fb2 == 8)) && (DAT_EXTMEM_ca63 == 1)) &&
         ((BANK0_R2 < 0xc3 && (0xbf < DAT_EXTMEM_ca64)))))))) {
      DAT_EXTMEM_7fec = '\x01';
    }
    else if (((DAT_EXTMEM_7fb2 == 9) && (DAT_EXTMEM_ca62 == '\x0e')) &&
            ((DAT_EXTMEM_ca63 == 0 && ((BANK0_R2 < 0xd && ((bCODE00a7 >> 6 & 1) != 0)))))) {
      DAT_EXTMEM_7fec = '\x01';
    }
    else if ((((DAT_EXTMEM_7fb2 == 9) || (DAT_EXTMEM_7fb2 == 8)) && (DAT_EXTMEM_ca62 == '\x0f')) &&
            (BANK0_R2 < 3)) {
      DAT_EXTMEM_7fec = '\x01';
    }
    else if (((DAT_EXTMEM_ca62 == '\0') && (DAT_EXTMEM_ca63 == 0x20)) &&
            ((DAT_EXTMEM_ca64 == 2 &&
             (BANK0_R2 = BANK0_R2 & 0x20, param_1 = DAT_EXTMEM_7ead,
             (DAT_EXTMEM_7ead & bCODE00a7) != 0)))) {
      DAT_EXTMEM_7fec = '\x01';
    }
    else if (((DAT_EXTMEM_ca62 == '\0') && (DAT_EXTMEM_ca63 == 0x20)) &&
            ((BANK0_R2 < 0xf &&
             (param_1 = -((CARRY1(DAT_EXTMEM_7fb1,DAT_EXTMEM_ca64) << 7) >> 7),
             param_2 = DAT_EXTMEM_7fb1,
             0x80 < (param_1 ^ 0x80) - (((0xc < DAT_EXTMEM_7fb1 + DAT_EXTMEM_ca64) << 7) >> 7))))) {
      if (DAT_EXTMEM_ca64 < 10) {
        DAT_EXTMEM_7faf = 1;
      }
      else {
        DAT_EXTMEM_7faf = 2;
      }
      DAT_EXTMEM_7fae = DAT_EXTMEM_ca64 - 10;
      DAT_EXTMEM_7fe1 = DAT_EXTMEM_caab;
      DAT_EXTMEM_7fe2 = DAT_EXTMEM_caaa;
      DAT_EXTMEM_7fe3 = DAT_EXTMEM_caa9;
      DAT_EXTMEM_7fe4 = DAT_EXTMEM_caa8;
      DAT_EXTMEM_cac0 = 0xa2;
      DAT_EXTMEM_cac2 = DAT_EXTMEM_7fb1 - 1;
      DAT_EXTMEM_cac3 = 1;
      do {
        DAT_EXTMEM_7fec = DAT_EXTMEM_ca50;
        DAT_EXTMEM_cac1 = DAT_EXTMEM_7fae;
      } while (DAT_EXTMEM_ca50 == '\0');
    }
    else if (((cCODE00ab < '\0') || (DAT_EXTMEM_ca62 != '\0')) || (DAT_EXTMEM_ca63 != 0x22)) {
      if (((DAT_EXTMEM_7fb2 == 9) && (DAT_EXTMEM_ca62 == '\0')) &&
         ((DAT_EXTMEM_ca63 == 2 && (DAT_EXTMEM_ca64 == 0xc0)))) {
        DAT_EXTMEM_7fbf = 1;
        if ((DAT_EXTMEM_cc97 == '\0') || ((DAT_EXTMEM_7fa2 != '\x05' && (0x3e < DAT_EXTMEM_cc0b))))
        {
          DAT_EXTMEM_7fec = '\x02';
        }
        else {
          DAT_EXTMEM_7fec = '\x01';
          DAT_EXTMEM_7fe1 = '#';
          while (BANK0_R2 < 0x33) {
            *(undefined1 *)CONCAT11(0xca,DAT_EXTMEM_7fe1) = 0;
            DAT_EXTMEM_7fe1 = DAT_EXTMEM_7fe1 + '\x01';
          }
          DAT_EXTMEM_ca61 = 0xf;
        }
      }
      else if (((DAT_EXTMEM_ca62 == '\0') && ((DAT_EXTMEM_ca63 & 0xf8) == 0)) &&
              ((DAT_EXTMEM_ca64 & 0xe0) == 0)) {
        BANK0_R2 = BANK0_R2 & 7;
        DAT_EXTMEM_cac0 = DAT_EXTMEM_ca63;
        DAT_EXTMEM_cac1 = DAT_EXTMEM_ca64;
        DAT_EXTMEM_cac2 = DAT_EXTMEM_7fb1 - 1;
        DAT_EXTMEM_cac3 = 1;
        do {
          DAT_EXTMEM_7fec = DAT_EXTMEM_ca50;
        } while (DAT_EXTMEM_ca50 == '\0');
      }
      else {
        DAT_EXTMEM_7fec = '\x02';
      }
    }
    else {
      if (cCODE00a8 < '\0') {
        DAT_EXTMEM_7fe1 = DAT_EXTMEM_caa3;
        BANK0_R2 = BANK0_R2 & 0xfe;
      }
      BANK0_R2 = BANK0_R2 & 7;
      DAT_EXTMEM_cac0 = 0;
      DAT_EXTMEM_cac1 = DAT_EXTMEM_ca64;
      DAT_EXTMEM_cac2 = DAT_EXTMEM_7fb1 - 1;
      DAT_EXTMEM_cac3 = 1;
      do {
        DAT_EXTMEM_7fec = DAT_EXTMEM_ca50;
      } while (DAT_EXTMEM_ca50 == '\0');
      DAT_EXTMEM_7faf = 0x22;
      if (cCODE00a8 < '\0') {
        DAT_EXTMEM_caa3 = DAT_EXTMEM_7fe1;
      }
    }
  }
  else {
    DAT_EXTMEM_7fec = '\x01';
  }
  if (DAT_EXTMEM_7fec != '\x01') {
    FUN_CODE_2211(0x7f00,param_1,param_2);
    DAT_EXTMEM_7f76 = 0;
    DAT_EXTMEM_7f78 = 1;
  }
  if (DAT_EXTMEM_7fec == '\x02') {
    return;
  }
  BANK2_R0 = DAT_EXTMEM_7fb0;
  BANK2_R1 = DAT_EXTMEM_7faf;
  BANK2_R2 = DAT_EXTMEM_7fae;
  BANK2_R3 = DAT_EXTMEM_7fb1;
  FUN_CODE_2878(CONCAT11(0x7f,DAT_EXTMEM_7fb2));
  if (DAT_EXTMEM_7f74 != '\0') {
    FUN_CODE_1465(DAT_EXTMEM_7f74);
    DAT_EXTMEM_7f74 = 0;
    return;
  }
  return;
}



/* =========================================================
 * CODE:43c3  FUN_CODE_43c3  size=10
 * ========================================================= */

void FUN_CODE_43c3(char param_1,byte param_2,byte param_3)

{
  if (param_1 == '\x02') {
    BANK1_R0 = 0xb;
    BANK1_R1 = 0;
  }
  else if (param_1 == '\x03') {
    BANK1_R0 = 0x2f;
    BANK1_R1 = 0;
  }
  else {
    BANK1_R0 = 0xef;
    BANK1_R1 = 1;
  }
  if ((DAT_EXTMEM_7faf == 0x22) && (cCODE00a8 < '\0')) {
    BANK1_R0 = BANK1_R0 & 0xfe;
  }
  if ((DAT_EXTMEM_7fb2 >> 3 & 1) != 1) {
    FUN_CODE_484b(DAT_EXTMEM_7fb2);
    return;
  }
  DAT_EXTMEM_7f7b = 0;
  DAT_EXTMEM_7fbf = 0;
  if ((((DAT_EXTMEM_7fb2 == 8) && (DAT_EXTMEM_7fb0 == '\0')) && (DAT_EXTMEM_7faf == 1)) &&
     (DAT_EXTMEM_7fae == 0xc0)) {
    DAT_EXTMEM_cc97 = '\x01';
  }
  if ((DAT_EXTMEM_ca9f == '\0') || ((DAT_EXTMEM_7f84 == '\0' && ((DAT_EXTMEM_d25c & 0xf) == 0)))) {
    if ((DAT_EXTMEM_7fb0 == '\0') &&
       ((((DAT_EXTMEM_7faf == 0 && (BANK0_R2 < 0x22)) &&
         (param_2 = -((CARRY1(DAT_EXTMEM_7fb1,DAT_EXTMEM_7fae) << 7) >> 7),
         param_3 = DAT_EXTMEM_7fb1,
         0x80 < (param_2 ^ 0x80) - (((0x20 < DAT_EXTMEM_7fb1 + DAT_EXTMEM_7fae) << 7) >> 7))) ||
        ((((DAT_EXTMEM_7f84 == '\0' && (DAT_EXTMEM_7fb2 == 8)) && (DAT_EXTMEM_7faf == 1)) &&
         ((BANK0_R2 < 0xc3 && (0xbf < DAT_EXTMEM_7fae)))))))) {
      DAT_EXTMEM_7fec = '\x01';
    }
    else if (((DAT_EXTMEM_7fb2 == 9) && (DAT_EXTMEM_7fb0 == '\x0e')) &&
            ((DAT_EXTMEM_7faf == 0 && ((BANK0_R2 < 0xd && ((bCODE00a7 >> 6 & 1) != 0)))))) {
      DAT_EXTMEM_7fec = '\x01';
    }
    else if ((((DAT_EXTMEM_7fb2 == 9) || (DAT_EXTMEM_7fb2 == 8)) && (DAT_EXTMEM_7fb0 == '\x0f')) &&
            (BANK0_R2 < 3)) {
      DAT_EXTMEM_7fec = '\x01';
    }
    else if (((DAT_EXTMEM_7fb0 == '\0') && (DAT_EXTMEM_7faf == 0x20)) &&
            ((DAT_EXTMEM_7fae == 2 &&
             (BANK0_R2 = BANK0_R2 & 0x20, param_2 = DAT_EXTMEM_7ead,
             (DAT_EXTMEM_7ead & bCODE00a7) != 0)))) {
      DAT_EXTMEM_7fec = '\x01';
    }
    else if (((DAT_EXTMEM_7fb0 == '\0') && (DAT_EXTMEM_7faf == 0x20)) &&
            ((BANK0_R2 < 0xf &&
             (param_2 = -((CARRY1(DAT_EXTMEM_7fb1,DAT_EXTMEM_7fae) << 7) >> 7),
             param_3 = DAT_EXTMEM_7fb1,
             0x80 < (param_2 ^ 0x80) - (((0xc < DAT_EXTMEM_7fb1 + DAT_EXTMEM_7fae) << 7) >> 7))))) {
      if (DAT_EXTMEM_7fae < 10) {
        DAT_EXTMEM_7faf = 1;
      }
      else {
        DAT_EXTMEM_7faf = 2;
      }
      DAT_EXTMEM_7fae = DAT_EXTMEM_7fae - 10;
      DAT_EXTMEM_7fe1 = DAT_EXTMEM_caab;
      DAT_EXTMEM_7fe2 = DAT_EXTMEM_caaa;
      DAT_EXTMEM_7fe3 = DAT_EXTMEM_caa9;
      DAT_EXTMEM_7fe4 = DAT_EXTMEM_caa8;
      DAT_EXTMEM_cac0 = 0xa2;
      DAT_EXTMEM_cac2 = DAT_EXTMEM_7fb1 - 1;
      DAT_EXTMEM_cac3 = 1;
      do {
        DAT_EXTMEM_7fec = DAT_EXTMEM_ca50;
        DAT_EXTMEM_cac1 = DAT_EXTMEM_7fae;
      } while (DAT_EXTMEM_ca50 == '\0');
    }
    else if (((cCODE00ab < '\0') || (DAT_EXTMEM_7fb0 != '\0')) || (DAT_EXTMEM_7faf != 0x22)) {
      if (((DAT_EXTMEM_7fb2 == 9) && (DAT_EXTMEM_7fb0 == '\0')) &&
         ((DAT_EXTMEM_7faf == 2 && (DAT_EXTMEM_7fae == 0xc0)))) {
        DAT_EXTMEM_7fbf = 1;
        if ((DAT_EXTMEM_cc97 == '\0') || ((DAT_EXTMEM_7fa2 != '\x05' && (0x3e < DAT_EXTMEM_cc0b))))
        {
          DAT_EXTMEM_7fec = '\x02';
        }
        else {
          DAT_EXTMEM_7fec = '\x01';
          DAT_EXTMEM_7fe1 = '#';
          while (BANK0_R2 < 0x33) {
            *(undefined1 *)CONCAT11(0xca,DAT_EXTMEM_7fe1) = 0;
            DAT_EXTMEM_7fe1 = DAT_EXTMEM_7fe1 + '\x01';
          }
          DAT_EXTMEM_ca61 = 0xf;
        }
      }
      else if (((DAT_EXTMEM_7fb0 == '\0') && ((DAT_EXTMEM_7faf & 0xf8) == 0)) &&
              ((DAT_EXTMEM_7fae & 0xe0) == 0)) {
        BANK0_R2 = BANK0_R2 & 7;
        DAT_EXTMEM_cac0 = DAT_EXTMEM_7faf;
        DAT_EXTMEM_cac1 = DAT_EXTMEM_7fae;
        DAT_EXTMEM_cac2 = DAT_EXTMEM_7fb1 - 1;
        DAT_EXTMEM_cac3 = 1;
        do {
          DAT_EXTMEM_7fec = DAT_EXTMEM_ca50;
        } while (DAT_EXTMEM_ca50 == '\0');
      }
      else {
        DAT_EXTMEM_7fec = '\x02';
      }
    }
    else {
      if (cCODE00a8 < '\0') {
        DAT_EXTMEM_7fe1 = DAT_EXTMEM_caa3;
        BANK0_R2 = BANK0_R2 & 0xfe;
      }
      BANK0_R2 = BANK0_R2 & 7;
      DAT_EXTMEM_cac0 = 0;
      DAT_EXTMEM_cac1 = DAT_EXTMEM_7fae;
      DAT_EXTMEM_cac2 = DAT_EXTMEM_7fb1 - 1;
      DAT_EXTMEM_cac3 = 1;
      do {
        DAT_EXTMEM_7fec = DAT_EXTMEM_ca50;
      } while (DAT_EXTMEM_ca50 == '\0');
      DAT_EXTMEM_7faf = 0x22;
      if (cCODE00a8 < '\0') {
        DAT_EXTMEM_caa3 = DAT_EXTMEM_7fe1;
      }
    }
  }
  else {
    DAT_EXTMEM_7fec = '\x01';
  }
  if (DAT_EXTMEM_7fec != '\x01') {
    FUN_CODE_2211(0x7f00,param_2,param_3);
    DAT_EXTMEM_7f76 = 0;
    DAT_EXTMEM_7f78 = 1;
  }
  if (DAT_EXTMEM_7fec == '\x02') {
    return;
  }
  BANK2_R0 = DAT_EXTMEM_7fb0;
  BANK2_R1 = DAT_EXTMEM_7faf;
  BANK2_R2 = DAT_EXTMEM_7fae;
  BANK2_R3 = DAT_EXTMEM_7fb1;
  FUN_CODE_2878(CONCAT11(0x7f,DAT_EXTMEM_7fb2));
  if (DAT_EXTMEM_7f74 != '\0') {
    FUN_CODE_1465(DAT_EXTMEM_7f74);
    DAT_EXTMEM_7f74 = 0;
    return;
  }
  return;
}



/* =========================================================
 * CODE:43cd  FUN_CODE_43cd  size=8
 * ========================================================= */

void FUN_CODE_43cd(byte param_1,byte param_2)

{
  BANK1_R0 = 1;
  BANK1_R1 = 0;
  if ((DAT_EXTMEM_7faf == 0x22) && (cCODE00a8 < '\0')) {
    BANK1_R0 = 0;
  }
  if ((DAT_EXTMEM_7fb2 >> 3 & 1) != 1) {
    FUN_CODE_484b(DAT_EXTMEM_7fb2);
    return;
  }
  DAT_EXTMEM_7f7b = 0;
  DAT_EXTMEM_7fbf = 0;
  if ((((DAT_EXTMEM_7fb2 == 8) && (DAT_EXTMEM_7fb0 == '\0')) && (DAT_EXTMEM_7faf == 1)) &&
     (DAT_EXTMEM_7fae == 0xc0)) {
    DAT_EXTMEM_cc97 = '\x01';
  }
  if ((DAT_EXTMEM_ca9f == '\0') || ((DAT_EXTMEM_7f84 == '\0' && ((DAT_EXTMEM_d25c & 0xf) == 0)))) {
    if ((DAT_EXTMEM_7fb0 == '\0') &&
       ((((DAT_EXTMEM_7faf == 0 && (BANK0_R2 < 0x22)) &&
         (param_1 = -((CARRY1(DAT_EXTMEM_7fb1,DAT_EXTMEM_7fae) << 7) >> 7),
         param_2 = DAT_EXTMEM_7fb1,
         0x80 < (param_1 ^ 0x80) - (((0x20 < DAT_EXTMEM_7fb1 + DAT_EXTMEM_7fae) << 7) >> 7))) ||
        ((((DAT_EXTMEM_7f84 == '\0' && (DAT_EXTMEM_7fb2 == 8)) && (DAT_EXTMEM_7faf == 1)) &&
         ((BANK0_R2 < 0xc3 && (0xbf < DAT_EXTMEM_7fae)))))))) {
      DAT_EXTMEM_7fec = '\x01';
    }
    else if (((DAT_EXTMEM_7fb2 == 9) && (DAT_EXTMEM_7fb0 == '\x0e')) &&
            ((DAT_EXTMEM_7faf == 0 && ((BANK0_R2 < 0xd && ((bCODE00a7 >> 6 & 1) != 0)))))) {
      DAT_EXTMEM_7fec = '\x01';
    }
    else if ((((DAT_EXTMEM_7fb2 == 9) || (DAT_EXTMEM_7fb2 == 8)) && (DAT_EXTMEM_7fb0 == '\x0f')) &&
            (BANK0_R2 < 3)) {
      DAT_EXTMEM_7fec = '\x01';
    }
    else if (((DAT_EXTMEM_7fb0 == '\0') && (DAT_EXTMEM_7faf == 0x20)) &&
            ((DAT_EXTMEM_7fae == 2 &&
             (BANK0_R2 = BANK0_R2 & 0x20, param_1 = DAT_EXTMEM_7ead,
             (DAT_EXTMEM_7ead & bCODE00a7) != 0)))) {
      DAT_EXTMEM_7fec = '\x01';
    }
    else if (((DAT_EXTMEM_7fb0 == '\0') && (DAT_EXTMEM_7faf == 0x20)) &&
            ((BANK0_R2 < 0xf &&
             (param_1 = -((CARRY1(DAT_EXTMEM_7fb1,DAT_EXTMEM_7fae) << 7) >> 7),
             param_2 = DAT_EXTMEM_7fb1,
             0x80 < (param_1 ^ 0x80) - (((0xc < DAT_EXTMEM_7fb1 + DAT_EXTMEM_7fae) << 7) >> 7))))) {
      if (DAT_EXTMEM_7fae < 10) {
        DAT_EXTMEM_7faf = 1;
      }
      else {
        DAT_EXTMEM_7faf = 2;
      }
      DAT_EXTMEM_7fae = DAT_EXTMEM_7fae - 10;
      DAT_EXTMEM_7fe1 = DAT_EXTMEM_caab;
      DAT_EXTMEM_7fe2 = DAT_EXTMEM_caaa;
      DAT_EXTMEM_7fe3 = DAT_EXTMEM_caa9;
      DAT_EXTMEM_7fe4 = DAT_EXTMEM_caa8;
      DAT_EXTMEM_cac0 = 0xa2;
      DAT_EXTMEM_cac2 = DAT_EXTMEM_7fb1 - 1;
      DAT_EXTMEM_cac3 = 1;
      do {
        DAT_EXTMEM_7fec = DAT_EXTMEM_ca50;
        DAT_EXTMEM_cac1 = DAT_EXTMEM_7fae;
      } while (DAT_EXTMEM_ca50 == '\0');
    }
    else if (((cCODE00ab < '\0') || (DAT_EXTMEM_7fb0 != '\0')) || (DAT_EXTMEM_7faf != 0x22)) {
      if (((DAT_EXTMEM_7fb2 == 9) && (DAT_EXTMEM_7fb0 == '\0')) &&
         ((DAT_EXTMEM_7faf == 2 && (DAT_EXTMEM_7fae == 0xc0)))) {
        DAT_EXTMEM_7fbf = 1;
        if ((DAT_EXTMEM_cc97 == '\0') || ((DAT_EXTMEM_7fa2 != '\x05' && (0x3e < DAT_EXTMEM_cc0b))))
        {
          DAT_EXTMEM_7fec = '\x02';
        }
        else {
          DAT_EXTMEM_7fec = '\x01';
          DAT_EXTMEM_7fe1 = '#';
          while (BANK0_R2 < 0x33) {
            *(undefined1 *)CONCAT11(0xca,DAT_EXTMEM_7fe1) = 0;
            DAT_EXTMEM_7fe1 = DAT_EXTMEM_7fe1 + '\x01';
          }
          DAT_EXTMEM_ca61 = 0xf;
        }
      }
      else if (((DAT_EXTMEM_7fb0 == '\0') && ((DAT_EXTMEM_7faf & 0xf8) == 0)) &&
              ((DAT_EXTMEM_7fae & 0xe0) == 0)) {
        BANK0_R2 = BANK0_R2 & 7;
        DAT_EXTMEM_cac0 = DAT_EXTMEM_7faf;
        DAT_EXTMEM_cac1 = DAT_EXTMEM_7fae;
        DAT_EXTMEM_cac2 = DAT_EXTMEM_7fb1 - 1;
        DAT_EXTMEM_cac3 = 1;
        do {
          DAT_EXTMEM_7fec = DAT_EXTMEM_ca50;
        } while (DAT_EXTMEM_ca50 == '\0');
      }
      else {
        DAT_EXTMEM_7fec = '\x02';
      }
    }
    else {
      if (cCODE00a8 < '\0') {
        DAT_EXTMEM_7fe1 = DAT_EXTMEM_caa3;
        BANK0_R2 = BANK0_R2 & 0xfe;
      }
      BANK0_R2 = BANK0_R2 & 7;
      DAT_EXTMEM_cac0 = 0;
      DAT_EXTMEM_cac1 = DAT_EXTMEM_7fae;
      DAT_EXTMEM_cac2 = DAT_EXTMEM_7fb1 - 1;
      DAT_EXTMEM_cac3 = 1;
      do {
        DAT_EXTMEM_7fec = DAT_EXTMEM_ca50;
      } while (DAT_EXTMEM_ca50 == '\0');
      DAT_EXTMEM_7faf = 0x22;
      if (cCODE00a8 < '\0') {
        DAT_EXTMEM_caa3 = DAT_EXTMEM_7fe1;
      }
    }
  }
  else {
    DAT_EXTMEM_7fec = '\x01';
  }
  if (DAT_EXTMEM_7fec != '\x01') {
    FUN_CODE_2211(0x7f00,param_1,param_2);
    DAT_EXTMEM_7f76 = 0;
    DAT_EXTMEM_7f78 = 1;
  }
  if (DAT_EXTMEM_7fec == '\x02') {
    return;
  }
  BANK2_R0 = DAT_EXTMEM_7fb0;
  BANK2_R1 = DAT_EXTMEM_7faf;
  BANK2_R2 = DAT_EXTMEM_7fae;
  BANK2_R3 = DAT_EXTMEM_7fb1;
  FUN_CODE_2878(CONCAT11(0x7f,DAT_EXTMEM_7fb2));
  if (DAT_EXTMEM_7f74 != '\0') {
    FUN_CODE_1465(DAT_EXTMEM_7f74);
    DAT_EXTMEM_7f74 = 0;
    return;
  }
  return;
}



/* =========================================================
 * CODE:43d5  FUN_CODE_43d5  size=8
 * ========================================================= */

void FUN_CODE_43d5(byte param_1,byte param_2)

{
  BANK1_R0 = 0xb;
  BANK1_R1 = 0;
  if ((DAT_EXTMEM_7faf == 0x22) && (cCODE00a8 < '\0')) {
    BANK1_R0 = 10;
  }
  if ((DAT_EXTMEM_7fb2 >> 3 & 1) != 1) {
    FUN_CODE_484b(DAT_EXTMEM_7fb2);
    return;
  }
  DAT_EXTMEM_7f7b = 0;
  DAT_EXTMEM_7fbf = 0;
  if ((((DAT_EXTMEM_7fb2 == 8) && (DAT_EXTMEM_7fb0 == '\0')) && (DAT_EXTMEM_7faf == 1)) &&
     (DAT_EXTMEM_7fae == 0xc0)) {
    DAT_EXTMEM_cc97 = '\x01';
  }
  if ((DAT_EXTMEM_ca9f == '\0') || ((DAT_EXTMEM_7f84 == '\0' && ((DAT_EXTMEM_d25c & 0xf) == 0)))) {
    if ((DAT_EXTMEM_7fb0 == '\0') &&
       ((((DAT_EXTMEM_7faf == 0 && (BANK0_R2 < 0x22)) &&
         (param_1 = -((CARRY1(DAT_EXTMEM_7fb1,DAT_EXTMEM_7fae) << 7) >> 7),
         param_2 = DAT_EXTMEM_7fb1,
         0x80 < (param_1 ^ 0x80) - (((0x20 < DAT_EXTMEM_7fb1 + DAT_EXTMEM_7fae) << 7) >> 7))) ||
        ((((DAT_EXTMEM_7f84 == '\0' && (DAT_EXTMEM_7fb2 == 8)) && (DAT_EXTMEM_7faf == 1)) &&
         ((BANK0_R2 < 0xc3 && (0xbf < DAT_EXTMEM_7fae)))))))) {
      DAT_EXTMEM_7fec = '\x01';
    }
    else if (((DAT_EXTMEM_7fb2 == 9) && (DAT_EXTMEM_7fb0 == '\x0e')) &&
            ((DAT_EXTMEM_7faf == 0 && ((BANK0_R2 < 0xd && ((bCODE00a7 >> 6 & 1) != 0)))))) {
      DAT_EXTMEM_7fec = '\x01';
    }
    else if ((((DAT_EXTMEM_7fb2 == 9) || (DAT_EXTMEM_7fb2 == 8)) && (DAT_EXTMEM_7fb0 == '\x0f')) &&
            (BANK0_R2 < 3)) {
      DAT_EXTMEM_7fec = '\x01';
    }
    else if (((DAT_EXTMEM_7fb0 == '\0') && (DAT_EXTMEM_7faf == 0x20)) &&
            ((DAT_EXTMEM_7fae == 2 &&
             (BANK0_R2 = BANK0_R2 & 0x20, param_1 = DAT_EXTMEM_7ead,
             (DAT_EXTMEM_7ead & bCODE00a7) != 0)))) {
      DAT_EXTMEM_7fec = '\x01';
    }
    else if (((DAT_EXTMEM_7fb0 == '\0') && (DAT_EXTMEM_7faf == 0x20)) &&
            ((BANK0_R2 < 0xf &&
             (param_1 = -((CARRY1(DAT_EXTMEM_7fb1,DAT_EXTMEM_7fae) << 7) >> 7),
             param_2 = DAT_EXTMEM_7fb1,
             0x80 < (param_1 ^ 0x80) - (((0xc < DAT_EXTMEM_7fb1 + DAT_EXTMEM_7fae) << 7) >> 7))))) {
      if (DAT_EXTMEM_7fae < 10) {
        DAT_EXTMEM_7faf = 1;
      }
      else {
        DAT_EXTMEM_7faf = 2;
      }
      DAT_EXTMEM_7fae = DAT_EXTMEM_7fae - 10;
      DAT_EXTMEM_7fe1 = DAT_EXTMEM_caab;
      DAT_EXTMEM_7fe2 = DAT_EXTMEM_caaa;
      DAT_EXTMEM_7fe3 = DAT_EXTMEM_caa9;
      DAT_EXTMEM_7fe4 = DAT_EXTMEM_caa8;
      DAT_EXTMEM_cac0 = 0xa2;
      DAT_EXTMEM_cac2 = DAT_EXTMEM_7fb1 - 1;
      DAT_EXTMEM_cac3 = 1;
      do {
        DAT_EXTMEM_7fec = DAT_EXTMEM_ca50;
        DAT_EXTMEM_cac1 = DAT_EXTMEM_7fae;
      } while (DAT_EXTMEM_ca50 == '\0');
    }
    else if (((cCODE00ab < '\0') || (DAT_EXTMEM_7fb0 != '\0')) || (DAT_EXTMEM_7faf != 0x22)) {
      if (((DAT_EXTMEM_7fb2 == 9) && (DAT_EXTMEM_7fb0 == '\0')) &&
         ((DAT_EXTMEM_7faf == 2 && (DAT_EXTMEM_7fae == 0xc0)))) {
        DAT_EXTMEM_7fbf = 1;
        if ((DAT_EXTMEM_cc97 == '\0') || ((DAT_EXTMEM_7fa2 != '\x05' && (0x3e < DAT_EXTMEM_cc0b))))
        {
          DAT_EXTMEM_7fec = '\x02';
        }
        else {
          DAT_EXTMEM_7fec = '\x01';
          DAT_EXTMEM_7fe1 = '#';
          while (BANK0_R2 < 0x33) {
            *(undefined1 *)CONCAT11(0xca,DAT_EXTMEM_7fe1) = 0;
            DAT_EXTMEM_7fe1 = DAT_EXTMEM_7fe1 + '\x01';
          }
          DAT_EXTMEM_ca61 = 0xf;
        }
      }
      else if (((DAT_EXTMEM_7fb0 == '\0') && ((DAT_EXTMEM_7faf & 0xf8) == 0)) &&
              ((DAT_EXTMEM_7fae & 0xe0) == 0)) {
        BANK0_R2 = BANK0_R2 & 7;
        DAT_EXTMEM_cac0 = DAT_EXTMEM_7faf;
        DAT_EXTMEM_cac1 = DAT_EXTMEM_7fae;
        DAT_EXTMEM_cac2 = DAT_EXTMEM_7fb1 - 1;
        DAT_EXTMEM_cac3 = 1;
        do {
          DAT_EXTMEM_7fec = DAT_EXTMEM_ca50;
        } while (DAT_EXTMEM_ca50 == '\0');
      }
      else {
        DAT_EXTMEM_7fec = '\x02';
      }
    }
    else {
      if (cCODE00a8 < '\0') {
        DAT_EXTMEM_7fe1 = DAT_EXTMEM_caa3;
        BANK0_R2 = BANK0_R2 & 0xfe;
      }
      BANK0_R2 = BANK0_R2 & 7;
      DAT_EXTMEM_cac0 = 0;
      DAT_EXTMEM_cac1 = DAT_EXTMEM_7fae;
      DAT_EXTMEM_cac2 = DAT_EXTMEM_7fb1 - 1;
      DAT_EXTMEM_cac3 = 1;
      do {
        DAT_EXTMEM_7fec = DAT_EXTMEM_ca50;
      } while (DAT_EXTMEM_ca50 == '\0');
      DAT_EXTMEM_7faf = 0x22;
      if (cCODE00a8 < '\0') {
        DAT_EXTMEM_caa3 = DAT_EXTMEM_7fe1;
      }
    }
  }
  else {
    DAT_EXTMEM_7fec = '\x01';
  }
  if (DAT_EXTMEM_7fec != '\x01') {
    FUN_CODE_2211(0x7f00,param_1,param_2);
    DAT_EXTMEM_7f76 = 0;
    DAT_EXTMEM_7f78 = 1;
  }
  if (DAT_EXTMEM_7fec == '\x02') {
    return;
  }
  BANK2_R0 = DAT_EXTMEM_7fb0;
  BANK2_R1 = DAT_EXTMEM_7faf;
  BANK2_R2 = DAT_EXTMEM_7fae;
  BANK2_R3 = DAT_EXTMEM_7fb1;
  FUN_CODE_2878(CONCAT11(0x7f,DAT_EXTMEM_7fb2));
  if (DAT_EXTMEM_7f74 != '\0') {
    FUN_CODE_1465(DAT_EXTMEM_7f74);
    DAT_EXTMEM_7f74 = 0;
    return;
  }
  return;
}



/* =========================================================
 * CODE:43dd  FUN_CODE_43dd  size=8
 * ========================================================= */

void FUN_CODE_43dd(byte param_1,byte param_2)

{
  BANK1_R0 = 0x2f;
  BANK1_R1 = 0;
  if ((DAT_EXTMEM_7faf == 0x22) && (cCODE00a8 < '\0')) {
    BANK1_R0 = 0x2e;
  }
  if ((DAT_EXTMEM_7fb2 >> 3 & 1) != 1) {
    FUN_CODE_484b(DAT_EXTMEM_7fb2);
    return;
  }
  DAT_EXTMEM_7f7b = 0;
  DAT_EXTMEM_7fbf = 0;
  if ((((DAT_EXTMEM_7fb2 == 8) && (DAT_EXTMEM_7fb0 == '\0')) && (DAT_EXTMEM_7faf == 1)) &&
     (DAT_EXTMEM_7fae == 0xc0)) {
    DAT_EXTMEM_cc97 = '\x01';
  }
  if ((DAT_EXTMEM_ca9f == '\0') || ((DAT_EXTMEM_7f84 == '\0' && ((DAT_EXTMEM_d25c & 0xf) == 0)))) {
    if ((DAT_EXTMEM_7fb0 == '\0') &&
       ((((DAT_EXTMEM_7faf == 0 && (BANK0_R2 < 0x22)) &&
         (param_1 = -((CARRY1(DAT_EXTMEM_7fb1,DAT_EXTMEM_7fae) << 7) >> 7),
         param_2 = DAT_EXTMEM_7fb1,
         0x80 < (param_1 ^ 0x80) - (((0x20 < DAT_EXTMEM_7fb1 + DAT_EXTMEM_7fae) << 7) >> 7))) ||
        ((((DAT_EXTMEM_7f84 == '\0' && (DAT_EXTMEM_7fb2 == 8)) && (DAT_EXTMEM_7faf == 1)) &&
         ((BANK0_R2 < 0xc3 && (0xbf < DAT_EXTMEM_7fae)))))))) {
      DAT_EXTMEM_7fec = '\x01';
    }
    else if (((DAT_EXTMEM_7fb2 == 9) && (DAT_EXTMEM_7fb0 == '\x0e')) &&
            ((DAT_EXTMEM_7faf == 0 && ((BANK0_R2 < 0xd && ((bCODE00a7 >> 6 & 1) != 0)))))) {
      DAT_EXTMEM_7fec = '\x01';
    }
    else if ((((DAT_EXTMEM_7fb2 == 9) || (DAT_EXTMEM_7fb2 == 8)) && (DAT_EXTMEM_7fb0 == '\x0f')) &&
            (BANK0_R2 < 3)) {
      DAT_EXTMEM_7fec = '\x01';
    }
    else if (((DAT_EXTMEM_7fb0 == '\0') && (DAT_EXTMEM_7faf == 0x20)) &&
            ((DAT_EXTMEM_7fae == 2 &&
             (BANK0_R2 = BANK0_R2 & 0x20, param_1 = DAT_EXTMEM_7ead,
             (DAT_EXTMEM_7ead & bCODE00a7) != 0)))) {
      DAT_EXTMEM_7fec = '\x01';
    }
    else if (((DAT_EXTMEM_7fb0 == '\0') && (DAT_EXTMEM_7faf == 0x20)) &&
            ((BANK0_R2 < 0xf &&
             (param_1 = -((CARRY1(DAT_EXTMEM_7fb1,DAT_EXTMEM_7fae) << 7) >> 7),
             param_2 = DAT_EXTMEM_7fb1,
             0x80 < (param_1 ^ 0x80) - (((0xc < DAT_EXTMEM_7fb1 + DAT_EXTMEM_7fae) << 7) >> 7))))) {
      if (DAT_EXTMEM_7fae < 10) {
        DAT_EXTMEM_7faf = 1;
      }
      else {
        DAT_EXTMEM_7faf = 2;
      }
      DAT_EXTMEM_7fae = DAT_EXTMEM_7fae - 10;
      DAT_EXTMEM_7fe1 = DAT_EXTMEM_caab;
      DAT_EXTMEM_7fe2 = DAT_EXTMEM_caaa;
      DAT_EXTMEM_7fe3 = DAT_EXTMEM_caa9;
      DAT_EXTMEM_7fe4 = DAT_EXTMEM_caa8;
      DAT_EXTMEM_cac0 = 0xa2;
      DAT_EXTMEM_cac2 = DAT_EXTMEM_7fb1 - 1;
      DAT_EXTMEM_cac3 = 1;
      do {
        DAT_EXTMEM_7fec = DAT_EXTMEM_ca50;
        DAT_EXTMEM_cac1 = DAT_EXTMEM_7fae;
      } while (DAT_EXTMEM_ca50 == '\0');
    }
    else if (((cCODE00ab < '\0') || (DAT_EXTMEM_7fb0 != '\0')) || (DAT_EXTMEM_7faf != 0x22)) {
      if (((DAT_EXTMEM_7fb2 == 9) && (DAT_EXTMEM_7fb0 == '\0')) &&
         ((DAT_EXTMEM_7faf == 2 && (DAT_EXTMEM_7fae == 0xc0)))) {
        DAT_EXTMEM_7fbf = 1;
        if ((DAT_EXTMEM_cc97 == '\0') || ((DAT_EXTMEM_7fa2 != '\x05' && (0x3e < DAT_EXTMEM_cc0b))))
        {
          DAT_EXTMEM_7fec = '\x02';
        }
        else {
          DAT_EXTMEM_7fec = '\x01';
          DAT_EXTMEM_7fe1 = '#';
          while (BANK0_R2 < 0x33) {
            *(undefined1 *)CONCAT11(0xca,DAT_EXTMEM_7fe1) = 0;
            DAT_EXTMEM_7fe1 = DAT_EXTMEM_7fe1 + '\x01';
          }
          DAT_EXTMEM_ca61 = 0xf;
        }
      }
      else if (((DAT_EXTMEM_7fb0 == '\0') && ((DAT_EXTMEM_7faf & 0xf8) == 0)) &&
              ((DAT_EXTMEM_7fae & 0xe0) == 0)) {
        BANK0_R2 = BANK0_R2 & 7;
        DAT_EXTMEM_cac0 = DAT_EXTMEM_7faf;
        DAT_EXTMEM_cac1 = DAT_EXTMEM_7fae;
        DAT_EXTMEM_cac2 = DAT_EXTMEM_7fb1 - 1;
        DAT_EXTMEM_cac3 = 1;
        do {
          DAT_EXTMEM_7fec = DAT_EXTMEM_ca50;
        } while (DAT_EXTMEM_ca50 == '\0');
      }
      else {
        DAT_EXTMEM_7fec = '\x02';
      }
    }
    else {
      if (cCODE00a8 < '\0') {
        DAT_EXTMEM_7fe1 = DAT_EXTMEM_caa3;
        BANK0_R2 = BANK0_R2 & 0xfe;
      }
      BANK0_R2 = BANK0_R2 & 7;
      DAT_EXTMEM_cac0 = 0;
      DAT_EXTMEM_cac1 = DAT_EXTMEM_7fae;
      DAT_EXTMEM_cac2 = DAT_EXTMEM_7fb1 - 1;
      DAT_EXTMEM_cac3 = 1;
      do {
        DAT_EXTMEM_7fec = DAT_EXTMEM_ca50;
      } while (DAT_EXTMEM_ca50 == '\0');
      DAT_EXTMEM_7faf = 0x22;
      if (cCODE00a8 < '\0') {
        DAT_EXTMEM_caa3 = DAT_EXTMEM_7fe1;
      }
    }
  }
  else {
    DAT_EXTMEM_7fec = '\x01';
  }
  if (DAT_EXTMEM_7fec != '\x01') {
    FUN_CODE_2211(0x7f00,param_1,param_2);
    DAT_EXTMEM_7f76 = 0;
    DAT_EXTMEM_7f78 = 1;
  }
  if (DAT_EXTMEM_7fec == '\x02') {
    return;
  }
  BANK2_R0 = DAT_EXTMEM_7fb0;
  BANK2_R1 = DAT_EXTMEM_7faf;
  BANK2_R2 = DAT_EXTMEM_7fae;
  BANK2_R3 = DAT_EXTMEM_7fb1;
  FUN_CODE_2878(CONCAT11(0x7f,DAT_EXTMEM_7fb2));
  if (DAT_EXTMEM_7f74 != '\0') {
    FUN_CODE_1465(DAT_EXTMEM_7f74);
    DAT_EXTMEM_7f74 = 0;
    return;
  }
  return;
}



/* =========================================================
 * CODE:43e5  FUN_CODE_43e5  size=28
 * ========================================================= */

void FUN_CODE_43e5(byte param_1,byte param_2)

{
  BANK1_R0 = 0xef;
  BANK1_R1 = 1;
  if ((DAT_EXTMEM_7faf == 0x22) && (cCODE00a8 < '\0')) {
    BANK1_R0 = 0xee;
  }
  if ((DAT_EXTMEM_7fb2 >> 3 & 1) != 1) {
    FUN_CODE_484b(DAT_EXTMEM_7fb2);
    return;
  }
  DAT_EXTMEM_7f7b = 0;
  DAT_EXTMEM_7fbf = 0;
  if ((((DAT_EXTMEM_7fb2 == 8) && (DAT_EXTMEM_7fb0 == '\0')) && (DAT_EXTMEM_7faf == 1)) &&
     (DAT_EXTMEM_7fae == 0xc0)) {
    DAT_EXTMEM_cc97 = '\x01';
  }
  if ((DAT_EXTMEM_ca9f == '\0') || ((DAT_EXTMEM_7f84 == '\0' && ((DAT_EXTMEM_d25c & 0xf) == 0)))) {
    if ((DAT_EXTMEM_7fb0 == '\0') &&
       ((((DAT_EXTMEM_7faf == 0 && (BANK0_R2 < 0x22)) &&
         (param_1 = -((CARRY1(DAT_EXTMEM_7fb1,DAT_EXTMEM_7fae) << 7) >> 7),
         param_2 = DAT_EXTMEM_7fb1,
         0x80 < (param_1 ^ 0x80) - (((0x20 < DAT_EXTMEM_7fb1 + DAT_EXTMEM_7fae) << 7) >> 7))) ||
        ((((DAT_EXTMEM_7f84 == '\0' && (DAT_EXTMEM_7fb2 == 8)) && (DAT_EXTMEM_7faf == 1)) &&
         ((BANK0_R2 < 0xc3 && (0xbf < DAT_EXTMEM_7fae)))))))) {
      DAT_EXTMEM_7fec = '\x01';
    }
    else if (((DAT_EXTMEM_7fb2 == 9) && (DAT_EXTMEM_7fb0 == '\x0e')) &&
            ((DAT_EXTMEM_7faf == 0 && ((BANK0_R2 < 0xd && ((bCODE00a7 >> 6 & 1) != 0)))))) {
      DAT_EXTMEM_7fec = '\x01';
    }
    else if ((((DAT_EXTMEM_7fb2 == 9) || (DAT_EXTMEM_7fb2 == 8)) && (DAT_EXTMEM_7fb0 == '\x0f')) &&
            (BANK0_R2 < 3)) {
      DAT_EXTMEM_7fec = '\x01';
    }
    else if (((DAT_EXTMEM_7fb0 == '\0') && (DAT_EXTMEM_7faf == 0x20)) &&
            ((DAT_EXTMEM_7fae == 2 &&
             (BANK0_R2 = BANK0_R2 & 0x20, param_1 = DAT_EXTMEM_7ead,
             (DAT_EXTMEM_7ead & bCODE00a7) != 0)))) {
      DAT_EXTMEM_7fec = '\x01';
    }
    else if (((DAT_EXTMEM_7fb0 == '\0') && (DAT_EXTMEM_7faf == 0x20)) &&
            ((BANK0_R2 < 0xf &&
             (param_1 = -((CARRY1(DAT_EXTMEM_7fb1,DAT_EXTMEM_7fae) << 7) >> 7),
             param_2 = DAT_EXTMEM_7fb1,
             0x80 < (param_1 ^ 0x80) - (((0xc < DAT_EXTMEM_7fb1 + DAT_EXTMEM_7fae) << 7) >> 7))))) {
      if (DAT_EXTMEM_7fae < 10) {
        DAT_EXTMEM_7faf = 1;
      }
      else {
        DAT_EXTMEM_7faf = 2;
      }
      DAT_EXTMEM_7fae = DAT_EXTMEM_7fae - 10;
      DAT_EXTMEM_7fe1 = DAT_EXTMEM_caab;
      DAT_EXTMEM_7fe2 = DAT_EXTMEM_caaa;
      DAT_EXTMEM_7fe3 = DAT_EXTMEM_caa9;
      DAT_EXTMEM_7fe4 = DAT_EXTMEM_caa8;
      DAT_EXTMEM_cac0 = 0xa2;
      DAT_EXTMEM_cac2 = DAT_EXTMEM_7fb1 - 1;
      DAT_EXTMEM_cac3 = 1;
      do {
        DAT_EXTMEM_7fec = DAT_EXTMEM_ca50;
        DAT_EXTMEM_cac1 = DAT_EXTMEM_7fae;
      } while (DAT_EXTMEM_ca50 == '\0');
    }
    else if (((cCODE00ab < '\0') || (DAT_EXTMEM_7fb0 != '\0')) || (DAT_EXTMEM_7faf != 0x22)) {
      if (((DAT_EXTMEM_7fb2 == 9) && (DAT_EXTMEM_7fb0 == '\0')) &&
         ((DAT_EXTMEM_7faf == 2 && (DAT_EXTMEM_7fae == 0xc0)))) {
        DAT_EXTMEM_7fbf = 1;
        if ((DAT_EXTMEM_cc97 == '\0') || ((DAT_EXTMEM_7fa2 != '\x05' && (0x3e < DAT_EXTMEM_cc0b))))
        {
          DAT_EXTMEM_7fec = '\x02';
        }
        else {
          DAT_EXTMEM_7fec = '\x01';
          DAT_EXTMEM_7fe1 = '#';
          while (BANK0_R2 < 0x33) {
            *(undefined1 *)CONCAT11(0xca,DAT_EXTMEM_7fe1) = 0;
            DAT_EXTMEM_7fe1 = DAT_EXTMEM_7fe1 + '\x01';
          }
          DAT_EXTMEM_ca61 = 0xf;
        }
      }
      else if (((DAT_EXTMEM_7fb0 == '\0') && ((DAT_EXTMEM_7faf & 0xf8) == 0)) &&
              ((DAT_EXTMEM_7fae & 0xe0) == 0)) {
        BANK0_R2 = BANK0_R2 & 7;
        DAT_EXTMEM_cac0 = DAT_EXTMEM_7faf;
        DAT_EXTMEM_cac1 = DAT_EXTMEM_7fae;
        DAT_EXTMEM_cac2 = DAT_EXTMEM_7fb1 - 1;
        DAT_EXTMEM_cac3 = 1;
        do {
          DAT_EXTMEM_7fec = DAT_EXTMEM_ca50;
        } while (DAT_EXTMEM_ca50 == '\0');
      }
      else {
        DAT_EXTMEM_7fec = '\x02';
      }
    }
    else {
      if (cCODE00a8 < '\0') {
        DAT_EXTMEM_7fe1 = DAT_EXTMEM_caa3;
        BANK0_R2 = BANK0_R2 & 0xfe;
      }
      BANK0_R2 = BANK0_R2 & 7;
      DAT_EXTMEM_cac0 = 0;
      DAT_EXTMEM_cac1 = DAT_EXTMEM_7fae;
      DAT_EXTMEM_cac2 = DAT_EXTMEM_7fb1 - 1;
      DAT_EXTMEM_cac3 = 1;
      do {
        DAT_EXTMEM_7fec = DAT_EXTMEM_ca50;
      } while (DAT_EXTMEM_ca50 == '\0');
      DAT_EXTMEM_7faf = 0x22;
      if (cCODE00a8 < '\0') {
        DAT_EXTMEM_caa3 = DAT_EXTMEM_7fe1;
      }
    }
  }
  else {
    DAT_EXTMEM_7fec = '\x01';
  }
  if (DAT_EXTMEM_7fec != '\x01') {
    FUN_CODE_2211(0x7f00,param_1,param_2);
    DAT_EXTMEM_7f76 = 0;
    DAT_EXTMEM_7f78 = 1;
  }
  if (DAT_EXTMEM_7fec == '\x02') {
    return;
  }
  BANK2_R0 = DAT_EXTMEM_7fb0;
  BANK2_R1 = DAT_EXTMEM_7faf;
  BANK2_R2 = DAT_EXTMEM_7fae;
  BANK2_R3 = DAT_EXTMEM_7fb1;
  FUN_CODE_2878(CONCAT11(0x7f,DAT_EXTMEM_7fb2));
  if (DAT_EXTMEM_7f74 != '\0') {
    FUN_CODE_1465(DAT_EXTMEM_7f74);
    DAT_EXTMEM_7f74 = 0;
    return;
  }
  return;
}



/* =========================================================
 * CODE:4401  FUN_CODE_4401  size=1011
 * ========================================================= */

void FUN_CODE_4401(byte param_1,byte param_2)

{
  if (DAT_EXTMEM_7fb1 == 1) {
    BANK1_R0 = 2;
    BANK1_R1 = 0;
  }
  else if (DAT_EXTMEM_7fb1 == 2) {
    BANK1_R0 = 0x16;
    BANK1_R1 = 0;
  }
  else {
    BANK1_R0 = 0x56;
    BANK1_R1 = 1;
  }
  if ((DAT_EXTMEM_7fb2 >> 3 & 1) != 1) {
    FUN_CODE_484b(DAT_EXTMEM_7fb2);
    return;
  }
  DAT_EXTMEM_7f7b = 0;
  DAT_EXTMEM_7fbf = 0;
  if ((((DAT_EXTMEM_7fb2 == 8) && (DAT_EXTMEM_7fb0 == '\0')) && (DAT_EXTMEM_7faf == 1)) &&
     (DAT_EXTMEM_7fae == 0xc0)) {
    DAT_EXTMEM_cc97 = '\x01';
  }
  if ((DAT_EXTMEM_ca9f == '\0') || ((DAT_EXTMEM_7f84 == '\0' && ((DAT_EXTMEM_d25c & 0xf) == 0)))) {
    if ((DAT_EXTMEM_7fb0 == '\0') &&
       ((((DAT_EXTMEM_7faf == 0 && (BANK0_R2 < 0x22)) &&
         (param_1 = -((CARRY1(DAT_EXTMEM_7fb1,DAT_EXTMEM_7fae) << 7) >> 7),
         param_2 = DAT_EXTMEM_7fb1,
         0x80 < (param_1 ^ 0x80) - (((0x20 < DAT_EXTMEM_7fb1 + DAT_EXTMEM_7fae) << 7) >> 7))) ||
        ((((DAT_EXTMEM_7f84 == '\0' && (DAT_EXTMEM_7fb2 == 8)) && (DAT_EXTMEM_7faf == 1)) &&
         ((BANK0_R2 < 0xc3 && (0xbf < DAT_EXTMEM_7fae)))))))) {
      DAT_EXTMEM_7fec = '\x01';
    }
    else if (((DAT_EXTMEM_7fb2 == 9) && (DAT_EXTMEM_7fb0 == '\x0e')) &&
            ((DAT_EXTMEM_7faf == 0 && ((BANK0_R2 < 0xd && ((bCODE00a7 >> 6 & 1) != 0)))))) {
      DAT_EXTMEM_7fec = '\x01';
    }
    else if ((((DAT_EXTMEM_7fb2 == 9) || (DAT_EXTMEM_7fb2 == 8)) && (DAT_EXTMEM_7fb0 == '\x0f')) &&
            (BANK0_R2 < 3)) {
      DAT_EXTMEM_7fec = '\x01';
    }
    else if (((DAT_EXTMEM_7fb0 == '\0') && (DAT_EXTMEM_7faf == 0x20)) &&
            ((DAT_EXTMEM_7fae == 2 &&
             (BANK0_R2 = BANK0_R2 & 0x20, param_1 = DAT_EXTMEM_7ead,
             (DAT_EXTMEM_7ead & bCODE00a7) != 0)))) {
      DAT_EXTMEM_7fec = '\x01';
    }
    else if (((DAT_EXTMEM_7fb0 == '\0') && (DAT_EXTMEM_7faf == 0x20)) &&
            ((BANK0_R2 < 0xf &&
             (param_1 = -((CARRY1(DAT_EXTMEM_7fb1,DAT_EXTMEM_7fae) << 7) >> 7),
             param_2 = DAT_EXTMEM_7fb1,
             0x80 < (param_1 ^ 0x80) - (((0xc < DAT_EXTMEM_7fb1 + DAT_EXTMEM_7fae) << 7) >> 7))))) {
      if (DAT_EXTMEM_7fae < 10) {
        DAT_EXTMEM_7faf = 1;
      }
      else {
        DAT_EXTMEM_7faf = 2;
      }
      DAT_EXTMEM_7fae = DAT_EXTMEM_7fae - 10;
      DAT_EXTMEM_7fe1 = DAT_EXTMEM_caab;
      DAT_EXTMEM_7fe2 = DAT_EXTMEM_caaa;
      DAT_EXTMEM_7fe3 = DAT_EXTMEM_caa9;
      DAT_EXTMEM_7fe4 = DAT_EXTMEM_caa8;
      DAT_EXTMEM_cac0 = 0xa2;
      DAT_EXTMEM_cac2 = DAT_EXTMEM_7fb1 - 1;
      DAT_EXTMEM_cac3 = 1;
      do {
        DAT_EXTMEM_7fec = DAT_EXTMEM_ca50;
        DAT_EXTMEM_cac1 = DAT_EXTMEM_7fae;
      } while (DAT_EXTMEM_ca50 == '\0');
    }
    else if (((cCODE00ab < '\0') || (DAT_EXTMEM_7fb0 != '\0')) || (DAT_EXTMEM_7faf != 0x22)) {
      if (((DAT_EXTMEM_7fb2 == 9) && (DAT_EXTMEM_7fb0 == '\0')) &&
         ((DAT_EXTMEM_7faf == 2 && (DAT_EXTMEM_7fae == 0xc0)))) {
        DAT_EXTMEM_7fbf = 1;
        if ((DAT_EXTMEM_cc97 == '\0') || ((DAT_EXTMEM_7fa2 != '\x05' && (0x3e < DAT_EXTMEM_cc0b))))
        {
          DAT_EXTMEM_7fec = '\x02';
        }
        else {
          DAT_EXTMEM_7fec = '\x01';
          DAT_EXTMEM_7fe1 = '#';
          while (BANK0_R2 < 0x33) {
            *(undefined1 *)CONCAT11(0xca,DAT_EXTMEM_7fe1) = 0;
            DAT_EXTMEM_7fe1 = DAT_EXTMEM_7fe1 + '\x01';
          }
          DAT_EXTMEM_ca61 = 0xf;
        }
      }
      else if (((DAT_EXTMEM_7fb0 == '\0') && ((DAT_EXTMEM_7faf & 0xf8) == 0)) &&
              ((DAT_EXTMEM_7fae & 0xe0) == 0)) {
        BANK0_R2 = BANK0_R2 & 7;
        DAT_EXTMEM_cac0 = DAT_EXTMEM_7faf;
        DAT_EXTMEM_cac1 = DAT_EXTMEM_7fae;
        DAT_EXTMEM_cac2 = DAT_EXTMEM_7fb1 - 1;
        DAT_EXTMEM_cac3 = 1;
        do {
          DAT_EXTMEM_7fec = DAT_EXTMEM_ca50;
        } while (DAT_EXTMEM_ca50 == '\0');
      }
      else {
        DAT_EXTMEM_7fec = '\x02';
      }
    }
    else {
      if (cCODE00a8 < '\0') {
        DAT_EXTMEM_7fe1 = DAT_EXTMEM_caa3;
        BANK0_R2 = BANK0_R2 & 0xfe;
      }
      BANK0_R2 = BANK0_R2 & 7;
      DAT_EXTMEM_cac0 = 0;
      DAT_EXTMEM_cac1 = DAT_EXTMEM_7fae;
      DAT_EXTMEM_cac2 = DAT_EXTMEM_7fb1 - 1;
      DAT_EXTMEM_cac3 = 1;
      do {
        DAT_EXTMEM_7fec = DAT_EXTMEM_ca50;
      } while (DAT_EXTMEM_ca50 == '\0');
      DAT_EXTMEM_7faf = 0x22;
      if (cCODE00a8 < '\0') {
        DAT_EXTMEM_caa3 = DAT_EXTMEM_7fe1;
      }
    }
  }
  else {
    DAT_EXTMEM_7fec = '\x01';
  }
  if (DAT_EXTMEM_7fec != '\x01') {
    FUN_CODE_2211(0x7f00,param_1,param_2);
    DAT_EXTMEM_7f76 = 0;
    DAT_EXTMEM_7f78 = 1;
  }
  if (DAT_EXTMEM_7fec == '\x02') {
    return;
  }
  BANK2_R0 = DAT_EXTMEM_7fb0;
  BANK2_R1 = DAT_EXTMEM_7faf;
  BANK2_R2 = DAT_EXTMEM_7fae;
  BANK2_R3 = DAT_EXTMEM_7fb1;
  FUN_CODE_2878(CONCAT11(0x7f,DAT_EXTMEM_7fb2));
  if (DAT_EXTMEM_7f74 != '\0') {
    FUN_CODE_1465(DAT_EXTMEM_7f74);
    DAT_EXTMEM_7f74 = 0;
    return;
  }
  return;
}



/* =========================================================
 * CODE:4819  FUN_CODE_4819  size=51
 * ========================================================= */

void FUN_CODE_4819(void)

{
  BANK2_R0 = DAT_EXTMEM_7fb0;
  BANK2_R1 = DAT_EXTMEM_7faf;
  BANK2_R2 = DAT_EXTMEM_7fae;
  BANK2_R3 = DAT_EXTMEM_7fb1;
  FUN_CODE_2878(CONCAT11(0x7f,DAT_EXTMEM_7fb2));
  if (DAT_EXTMEM_7f74 != '\0') {
    FUN_CODE_1465(DAT_EXTMEM_7f74);
    DAT_EXTMEM_7f74 = 0;
    return;
  }
  return;
}



/* =========================================================
 * CODE:484b  FUN_CODE_484b  size=28
 * callers: CODE:4401
 * ========================================================= */

void FUN_CODE_484b(void)

{
  DAT_EXTMEM_7fec = 2;
  DAT_EXTMEM_7f7b = 1;
  DAT_EXTMEM_7f78 = 1;
  BANK1_R0 = 0;
  BANK1_R1 = 0;
  FUN_CODE_2211(0x7f00);
  return;
}



/* =========================================================
 * CODE:4868  FUN_CODE_4868  size=3951
 * ========================================================= */

/* WARNING: Removing unreachable block (CODE,0x50a2) */
/* WARNING: Removing unreachable block (CODE,0x576b) */
/* WARNING: Removing unreachable block (CODE,0x6438) */

void FUN_CODE_4868(void)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  undefined1 uVar5;
  byte bVar6;
  byte bVar7;
  ushort uVar8;
  undefined2 uVar9;
  
  DAT_INTMEM_4d = '\0';
  DAT_EXTMEM_7fe6 = '\0';
  cEXTMEMcc99 = '\0';
  uVar8 = 0xcc18;
  uEXTMEMcc18 = 6;
LAB_CODE_488a:
  do {
    while( true ) {
      while( true ) {
        DAT_INTMEM_50 = 1;
        DAT_INTMEM_51 = 1;
        FUN_CODE_044f(uVar8 & 0xff00);
        if ((bCODE00a7 & 1) != 0) {
          FUN_CODE_05db(0,bCODE00a7);
        }
        cEXTMEMcc99 = cEXTMEMcc99 + '\x01';
        BANK0_R3 = BANK0_R3 & 0xfe;
        DAT_EXTMEM_d815 = 0;
        while ((((bEXTMEMc84b & 1) != 0 && (uVar8 = 0xcc9b, bVar2 = bEXTMEMcc9b, bEXTMEMcc9b < 10))
               || (uVar8 = 0xc808, bVar2 = DAT_EXTMEM_c808, (DAT_EXTMEM_c808 & 1) != 0))) {
          DAT_INTMEM_50 = 0x20;
          DAT_INTMEM_51 = 0x40;
          FUN_CODE_044f(uVar8 & 0xff00,bVar2);
        }
        if ((bEXTMEMd86a >> 4 & 1) != 0) {
          uEXTMEMca10 = 3;
          uEXTMEMca15 = 0x20;
          uEXTMEMca14 = 7;
        }
        if ((bCODE00a6 >> 6 & 1) != 0) {
          uEXTMEMca18 = uCODE00aa;
          uEXTMEMca19 = 0xff;
        }
        uEXTMEMcc0c = 199;
        DAT_EXTMEM_cc0b = 0;
        DAT_EXTMEM_c804 = 0;
        DAT_EXTMEM_c84a = '\x02';
        if ((bEXTMEMd86a >> 3 & 1) == 0) {
          uEXTMEMc8a0 = 0xe;
        }
        else {
          uEXTMEMd8a0 = 0xd;
        }
        uEXTMEMd835 = 2;
        BANK0_R3 = BANK0_R3 & 0xfc;
        DAT_INTMEM_50 = 0x20;
        DAT_INTMEM_51 = 1;
        FUN_CODE_044f(0xc800);
        DAT_EXTMEM_7f84 = DAT_EXTMEM_c801 & 0x80;
        if (DAT_EXTMEM_7f84 == 0) {
          uEXTMEMd254 = 0xff;
          uEXTMEMd255 = 0xff;
          BANK0_R3 = BANK0_R3 & 0xdf;
          uEXTMEMd238 = 4;
        }
        DAT_EXTMEM_7fa4 = bEXTMEMcc8e & 4;
        DAT_EXTMEM_7f94 = uEXTMEMcc8c;
        uEXTMEM7f95 = uEXTMEMcc8d;
        DAT_EXTMEM_7f96 = uEXTMEMc828;
        uEXTMEM7f97 = uEXTMEMc829;
        uEXTMEM7f98 = uEXTMEMc82a;
        if (cEXTMEMcc92 == '\0') {
          DAT_EXTMEM_7fa6 = '\x02';
        }
        else {
          BANK0_R3 = BANK0_R3 & 0x7f;
          DAT_EXTMEM_7fa6 = cEXTMEMcc92;
        }
        DAT_EXTMEM_7fa5 = uEXTMEMcc91;
        uEXTMEMcc93 = 6;
        if ((DAT_EXTMEM_7f84 != 0) && ((bEXTMEMc84b >> 3 & 1) != 1)) {
          BANK0_R3 = BANK0_R3 & 0xfb;
        }
        BANK0_R3 = BANK0_R3 & 0xb;
        if ((bCODE00a9 >> 6 & 1) == 0) {
          bEXTMEMd609 = bCODE00a9;
          if ((char)bCODE00a9 < '\0') {
            BANK0_R3 = 0x23;
          }
          else {
            BANK0_R3 = 3;
          }
        }
        else {
          bEXTMEMd609 = 2;
        }
        if ((bCODE00a9 >> 6 & 1) == 0) {
          bEXTMEMd689 = bCODE00a9;
          if ((char)bCODE00a9 < '\0') {
            BANK0_R3 = 0x23;
          }
          else {
            BANK0_R3 = 3;
          }
        }
        else {
          bEXTMEMd689 = 2;
        }
        if ((bCODE00a9 >> 6 & 1) == 0) {
          bEXTMEMd709 = bCODE00a9;
          if ((char)bCODE00a9 < '\0') {
            BANK0_R3 = 0x23;
          }
          else {
            BANK0_R3 = 3;
          }
        }
        else {
          bEXTMEMd709 = 2;
        }
        if ((bCODE00a9 >> 6 & 1) == 0) {
          bEXTMEMd789 = bCODE00a9;
          if ((char)bCODE00a9 < '\0') {
            BANK0_R3 = 0x23;
          }
          else {
            BANK0_R3 = 3;
          }
        }
        else {
          bEXTMEMd789 = 2;
        }
        if ((char)bCODE00a9 < '\0') {
          uEXTMEMd606 = 2;
          uEXTMEMd686 = 2;
          uEXTMEMd706 = 2;
          uEXTMEMd786 = 2;
        }
        BANK0_R3 = BANK0_R3 & 0xfd | 1;
        bEXTMEMd830 = 1;
        DAT_INTMEM_50 = 0x10;
        DAT_INTMEM_51 = 0x70;
        FUN_CODE_044f(0xd800);
        DAT_EXTMEM_cc0b = 0;
        do {
        } while ((bEXTMEMd830 >> 1 & 1) != 1);
        BANK0_R3 = BANK0_R3 & 0x1c;
        if (DAT_EXTMEM_c850 != 1) break;
        BANK0_R3 = 0;
        uVar8 = 0xd830;
        FUN_CODE_270e();
      }
      uVar8 = 0xd86d;
      FUN_CODE_1603();
      if ((char)uVar8 == '\0') break;
      FUN_CODE_270e();
    }
    BANK0_R3 = BANK0_R3 & 0xfe;
    DAT_EXTMEM_7f7d = '\x10';
    FUN_CODE_0cfa(0x7f01);
    uEXTMEMd802 = 2;
    uEXTMEMce06 = 0x10;
    uEXTMEMd801 = 0x81;
    uEXTMEMd803 = 0xf0;
    bEXTMEMd830 = 0;
    DAT_EXTMEM_7f7e = 4;
    FUN_CODE_2820(0x7f00);
    uVar8 = 0x7fe6;
    if (DAT_EXTMEM_7fe6 == '\0') {
      FUN_CODE_1ac6(0);
      uVar8 = uVar8 & 0xff00;
      FUN_CODE_1b66();
      if ((char)uVar8 == '\0') {
        uEXTMEMd84f = 0;
        uVar8 = 0xd802;
        FUN_CODE_1b66();
        if ((char)uVar8 == '\0') {
          FUN_CODE_1f1a();
          goto LAB_CODE_4c29;
        }
        FUN_CODE_270e();
      }
      else {
        FUN_CODE_270e();
      }
      goto LAB_CODE_488a;
    }
LAB_CODE_4c29:
    DAT_EXTMEM_7fe6 = '\x01';
    uEXTMEMd850 = 0xf;
    uEXTMEMd852 = 0x1f;
    uEXTMEMd853 = 0xff;
    DAT_EXTMEM_7fe1 = cEXTMEMd607;
    DAT_EXTMEM_7fe2 = bEXTMEMd687;
    DAT_EXTMEM_7fe3 = cEXTMEMd707;
    DAT_EXTMEM_7fe4 = bEXTMEMd787;
    uEXTMEMd801 = 0;
    uEXTMEMd810 = 0xff;
    bEXTMEMd80b = 0;
    uEXTMEMd80a = 0;
    DAT_EXTMEM_d804 = 0;
    uEXTMEMd85d = 0xac;
    uEXTMEMd85e = 0xd;
    DAT_INTMEM_50 = 1;
    DAT_INTMEM_51 = 0x1e;
    FUN_CODE_044f(0xd800);
    DAT_EXTMEM_cc0b = 0;
    cEXTMEMcc90 = '\0';
    while ((bEXTMEMcc07 & 1) == 1) {
      if (((bCODE00a7 >> 4 & 1) != 0) && (DAT_EXTMEM_7f84 == 0)) {
        DAT_INTMEM_50 = 0x20;
        DAT_INTMEM_51 = 0x53;
        FUN_CODE_044f(0x7f00,0);
        uEXTMEMd254 = 0xff;
        uEXTMEMd255 = 0xff;
        BANK0_R3 = BANK0_R3 & 0xdf;
        uEXTMEMd238 = 4;
      }
      if (BANK0_R4 <= DAT_EXTMEM_cc0b) {
        cEXTMEMcc90 = cEXTMEMcc90 + '\x01';
        DAT_EXTMEM_cc0b = 0;
        if (cEXTMEMcc90 == '\n') {
          BANK0_R3 = BANK0_R3 & 0xfb;
        }
        if ((cEXTMEMcc90 == 'd') && ((bCODE00a7 & 1) == 1)) {
          FUN_CODE_05db(0xff,bCODE00a7,uEXTMEMc848);
        }
      }
    }
    DAT_INTMEM_50 = 1;
    DAT_INTMEM_51 = 0x2c;
    FUN_CODE_044f(0xcc00,bEXTMEMcc07);
    if ((bCODE00a7 & 1) != 0) {
      FUN_CODE_05db(0,bCODE00a7);
    }
    if ((char)bCODE00a7 < '\0') {
      FUN_CODE_056c(bCODE00a7);
    }
    while ((((bEXTMEMc84b & 1) != 0 && (uVar8 = 0xcc9b, bVar2 = bEXTMEMcc9b, bEXTMEMcc9b < 0xb)) ||
           (uVar8 = 0xc808, bVar2 = DAT_EXTMEM_c808, (DAT_EXTMEM_c808 & 1) != 0))) {
      DAT_INTMEM_50 = 0x20;
      DAT_INTMEM_51 = 0x41;
      FUN_CODE_044f(uVar8 & 0xff00,bVar2);
    }
    DAT_EXTMEM_7f7d = '\0';
    DAT_EXTMEM_7ffc = 0;
    DAT_EXTMEM_7fbe = '\0';
    DAT_EXTMEM_7fbf = '\0';
    DAT_EXTMEM_7fbd = '\0';
    DAT_EXTMEM_7fb5 = '\0';
    DAT_EXTMEM_7fb4 = '\0';
    DAT_EXTMEM_7eb9 = '\0';
    DAT_EXTMEM_7fab = 0;
    DAT_EXTMEM_7fa9 = 0;
    DAT_EXTMEM_7faa = 0;
    DAT_EXTMEM_7fb3 = 0;
    BANK0_R3 = BANK0_R3 | 2;
    if ((DAT_EXTMEM_c800 & 1) == 1) {
      DAT_EXTMEM_cc0b = 0;
      DAT_INTMEM_50 = 1;
      DAT_INTMEM_51 = 2;
      FUN_CODE_044f(0xcc00,DAT_EXTMEM_c800);
      if (DAT_INTMEM_4d == '\0') {
        if ((bEXTMEMc84b >> 2 & 1) == 1) {
          DAT_INTMEM_50 = 0xeb;
          FUN_CODE_2389(0xc801,bEXTMEMc84b);
        }
        else {
          DAT_INTMEM_50 = uEXTMEMc848;
          FUN_CODE_2389(0xc801,bEXTMEMc84b);
        }
      }
      DAT_INTMEM_4d = '\x01';
      uEXTMEMcc0c = 99;
      DAT_EXTMEM_c804 = 0x80;
      uEXTMEMca5a = 0;
      BANK0_R3 = BANK0_R3 | 4;
      DAT_EXTMEM_7f7e = 4;
      uEXTMEMd836 = 8;
      FUN_CODE_11e5();
      bEXTMEMcc95 = 0;
      uEXTMEMcc96 = 0;
LAB_CODE_4e4a:
      do {
        FUN_CODE_2242();
        bEXTMEMcc95 = bEXTMEMcc95 + 1;
        if (((bCODE00a6 >> 2 & 1) != 1) && ((bEXTMEMcc95 & 0xf) == 0)) {
          FUN_CODE_0860(bEXTMEMcc95);
        }
        DAT_EXTMEM_d602 = 0x10;
        DAT_EXTMEM_d603 = 0x2b;
        DAT_EXTMEM_d682 = 0x10;
        DAT_EXTMEM_d683 = 0x2b;
        DAT_EXTMEM_d702 = 0x10;
        DAT_EXTMEM_d703 = 0x2b;
        DAT_EXTMEM_d782 = 0x10;
        DAT_EXTMEM_d783 = 0x2b;
        DAT_INTMEM_50 = 2;
        DAT_INTMEM_51 = 0x25;
        FUN_CODE_044f(0xd700);
        uEXTMEMd40f = 3;
        BANK0_R3 = BANK0_R3 & 0xfe;
        DAT_EXTMEM_cc0b = 0;
        DAT_EXTMEM_7fe5 = 0;
        do {
          uVar8 = 0xd4cc;
          if ((bEXTMEMd4cc & 1) == 1) {
            if (((bEXTMEMd4cc >> 1 & 1) == 0) || (cEXTMEMd4b6 != '\x06')) {
              BANK0_R3 = BANK0_R3 | 2;
              goto LAB_CODE_4e4a;
            }
            FUN_CODE_129a();
            if (((DAT_EXTMEM_d4b5 < 9) << 7 < '\0') ||
               ((DAT_EXTMEM_d4b5 == 9 && (DAT_EXTMEM_d4b4 < 0xc4)))) {
              uEXTMEMd60c = 2;
              uEXTMEMd68c = 2;
              uEXTMEMd70c = 2;
              uEXTMEMd78c = 2;
            }
            else if (((DAT_EXTMEM_d4b5 < 0x13) << 7 < '\0') ||
                    ((DAT_EXTMEM_d4b5 == 0x13 && (DAT_EXTMEM_d4b4 < 0x88)))) {
              uEXTMEMd60c = 1;
              uEXTMEMd68c = 1;
              uEXTMEMd70c = 1;
              uEXTMEMd78c = 1;
            }
            else {
              uEXTMEMd60c = 0;
              uEXTMEMd68c = 0;
              uEXTMEMd70c = 0;
              uEXTMEMd78c = 0;
            }
            uVar8 = 0xd707;
            FUN_CODE_2820(0xd707);
            DAT_INTMEM_50 = 2;
            DAT_INTMEM_51 = 0x14;
            uVar8 = uVar8 & 0xff00;
            FUN_CODE_044f(uVar8);
            DAT_INTMEM_50 = 2;
            DAT_INTMEM_51 = 0x68;
            FUN_CODE_044f(uVar8 & 0xff00);
            DAT_INTMEM_50 = 2;
            DAT_INTMEM_51 = 2;
            FUN_CODE_044f(1);
            DAT_INTMEM_51 = DAT_EXTMEM_d4b5;
            DAT_INTMEM_50 = 2;
            FUN_CODE_044f(0xd401);
            DAT_INTMEM_51 = DAT_EXTMEM_d4b4;
            DAT_INTMEM_50 = 2;
            FUN_CODE_044f(0xd401);
            DAT_EXTMEM_cc0b = 0;
            DAT_EXTMEM_7fe5 = 0;
            goto LAB_CODE_4fe8;
          }
          FUN_CODE_07f4(bEXTMEMd4cc);
          if ((char)uVar8 == '\x01') goto LAB_CODE_488a;
        } while ((char)uVar8 != '\x02');
        BANK0_R3 = BANK0_R3 | 1;
      } while( true );
    }
    DAT_INTMEM_4d = '\0';
    if ((bCODE00a7 >> 5 & 1) == 1) {
      BANK1_R2 = 0;
      BANK1_R3 = '\0';
      BANK1_R4 = 0;
      BANK1_R5 = 0;
      FUN_CODE_26be(0xc,bCODE00a7);
      bEXTMEMcc09 = 0;
      do {
        if ((bEXTMEMcc07 >> 2 & 1) == 1) break;
      } while (BANK0_R3 < 0xf1);
      if (BANK0_R3 < 0xf1) {
        DAT_INTMEM_50 = 0x20;
        DAT_INTMEM_51 = 6;
        FUN_CODE_044f(0xcc00,0);
        DAT_INTMEM_48 = 0x35;
        DAT_INTMEM_49 = -0x34;
        DAT_INTMEM_4a = 0;
        cVar4 = FUN_CODE_67d0(0xcc37,0);
        uVar5 = cVar4 != '\0';
        cVar4 = FUN_CODE_67d0(CONCAT11(DAT_INTMEM_49 - (((0xfe < DAT_INTMEM_48) << 7) >> 7),
                                       DAT_INTMEM_48 + 1),DAT_INTMEM_4a);
        BANK0_R7 = BANK0_R7 & 0xf;
        if (cVar4 == '\f') {
          DAT_EXTMEM_0120 = uVar5;
        }
      }
      else {
        DAT_EXTMEM_0120 = 0;
      }
    }
    BANK0_R0 = BANK0_R0 & 0xfb;
    DAT_INTMEM_50 = uEXTMEMc848;
    FUN_CODE_2389(CONCAT11(200,uEXTMEMc848));
    bVar2 = BANK0_R0;
    BANK0_R0 = BANK0_R0 | 4;
    DAT_EXTMEM_7fb6 = '\0';
    uVar5 = 0x7f;
    bVar3 = DAT_EXTMEM_7f84;
    if (DAT_EXTMEM_7f84 == 0) {
      uVar5 = 0xd2;
      BANK0_R0 = bVar2 & 0xf | 4;
      bVar3 = DAT_EXTMEM_d25c;
      if (2 < BANK0_R0) goto LAB_CODE_53a2;
    }
    else {
LAB_CODE_53a2:
      BANK1_R2 = 0;
      BANK1_R3 = '\0';
      BANK1_R4 = 0;
      BANK1_R5 = 0;
      FUN_CODE_26be(CONCAT11(uVar5,9),bVar3);
      bEXTMEMcc09 = 0;
      do {
        if ((bEXTMEMcc07 >> 2 & 1) == 1) break;
      } while (BANK0_R0 < 0xf1);
      if (BANK0_R0 < 0xf1) {
        DAT_INTMEM_48 = 0x35;
        DAT_INTMEM_49 = -0x34;
        DAT_INTMEM_4a = 0;
        bVar2 = FUN_CODE_67d0(0xcc36,0);
        if ((bVar2 & 0xf) == 9) {
          cVar4 = FUN_CODE_67d0(CONCAT11(DAT_INTMEM_49 - (((0xfd < DAT_INTMEM_48) << 7) >> 7),
                                         DAT_INTMEM_48 + 2),DAT_INTMEM_4a);
          DAT_EXTMEM_7fe7 = cVar4 != '\0';
        }
        else {
          DAT_EXTMEM_7fe7 = 0;
        }
      }
      else {
        DAT_EXTMEM_7fe7 = 0;
      }
    }
    BANK0_R2 = BANK0_R2 | 0x80;
    uEXTMEMcc0c = 99;
    uEXTMEMca5a = 0;
    DAT_INTMEM_50 = 1;
    DAT_INTMEM_51 = 4;
    uVar5 = 0xca;
    FUN_CODE_044f(0xca00);
    BANK1_R2 = 0;
    BANK1_R3 = '\0';
    BANK1_R4 = 0;
    BANK1_R5 = 1;
    FUN_CODE_26be(CONCAT11(uVar5,8));
    if (DAT_EXTMEM_7f84 == 0) {
      bVar2 = BANK0_R2;
      if ((((bEXTMEMd252 >> 5 & 1) != 1) && ((bEXTMEMd218 & 1) != 0)) &&
         (bVar2 = BANK0_R2 & 0xf, 1 < (BANK0_R2 & 0xf))) {
        bVar2 = BANK0_R2 & 0xb;
      }
      BANK0_R2 = bVar2;
      if ((DAT_EXTMEM_d25c & 0xf) == 0) {
        BANK0_R2 = BANK0_R2 | 0x40;
      }
      else {
        BANK0_R2 = BANK0_R2 & 0xbf;
      }
      bVar2 = DAT_EXTMEM_d25d & 0xf;
      FUN_CODE_22d9();
      if (((bEXTMEMd252 >> 5 & 1) == 1) ||
         ((((DAT_EXTMEM_d25c & 0xf) != 0 || ((bEXTMEMd252 >> 3 & 1) != 1)) &&
          (((DAT_EXTMEM_d25c & 0xf) == 0 || ((bEXTMEMd252 >> 2 & 1) == 0)))))) {
        DAT_EXTMEM_7ffc = false;
      }
      else {
        DAT_EXTMEM_7ffc = true;
        if ((char)DAT_EXTMEM_d25d < '\0') {
          uEXTMEMcaa5 = 2;
        }
      }
      DAT_EXTMEM_7f7f = bVar2;
      if ((DAT_EXTMEM_d25c & 0xf) == 0) {
        DAT_EXTMEM_caa3 = 0;
      }
      else {
        DAT_EXTMEM_caa3 = 7;
        BANK0_R2 = BANK0_R2 | 0x20;
      }
    }
    else {
      DAT_EXTMEM_7f7f = 0x10;
      BANK0_R2 = BANK0_R2 & 8;
      DAT_EXTMEM_7ffc = bEXTMEMc84b == 0;
      uEXTMEMcaa5 = 2;
    }
    BANK0_R2 = BANK0_R2 | 0xd1;
    if (((bool)DAT_EXTMEM_7ffc != false) &&
       (BANK0_R2 = BANK0_R2 & 0xfe | 0x78, DAT_EXTMEM_7f84 == 0)) {
      bEXTMEMd208 = bEXTMEMd208 & 0xf7 | 4;
    }
    bVar3 = BANK0_R2;
    DAT_EXTMEM_7fa2 = '\0';
    DAT_EXTMEM_7f76 = '\0';
    DAT_EXTMEM_7f77 = '\0';
    DAT_EXTMEM_7f78 = '\0';
    DAT_EXTMEM_7f79 = '\0';
    DAT_EXTMEM_7f7a = '\0';
    DAT_EXTMEM_7f7b = 0;
    uEXTMEM7f83 = 0;
    uEXTMEM7f82 = 0;
    uEXTMEM7f81 = 0;
    DAT_EXTMEM_7f80 = 0;
    DAT_EXTMEM_7ffa = '\0';
    DAT_EXTMEM_7f86 = 0;
    DAT_EXTMEM_7f87 = '\0';
    DAT_EXTMEM_7f7e = 0;
    DAT_EXTMEM_7f7c = 0;
    uEXTMEM7f8f = 0;
    DAT_EXTMEM_7f8e = 0;
    uEXTMEM7f91 = 0;
    DAT_EXTMEM_7f90 = 0;
    DAT_EXTMEM_7f92 = 0;
    DAT_EXTMEM_7f93 = 0xe7;
    bVar2 = 0xe7;
    DAT_EXTMEM_7f99 = 0;
    DAT_EXTMEM_7f9a = 0;
    DAT_EXTMEM_7f9b = 0;
    DAT_EXTMEM_7f9d = 0;
    DAT_EXTMEM_7f9c = 0;
    DAT_EXTMEM_7f85 = 0;
    DAT_EXTMEM_7f9e = 0;
    DAT_EXTMEM_7f9f = '\0';
    DAT_EXTMEM_7fa0 = '\0';
    DAT_EXTMEM_7fa1 = 0;
    DAT_EXTMEM_7fbc = '\0';
    DAT_EXTMEM_7fe0 = '\0';
    DAT_EXTMEM_7fa3 = '\0';
    DAT_EXTMEM_7fb8 = '\0';
    DAT_EXTMEM_7fec = 0;
    BANK1_R0 = '\0';
    BANK1_R1 = '\0';
    DAT_EXTMEM_7ff2 = 0;
    DAT_EXTMEM_7ff3 = '\0';
    DAT_EXTMEM_7ff4 = '\0';
    DAT_EXTMEM_7ffb = '\0';
    DAT_EXTMEM_7ff9 = 0;
    DAT_EXTMEM_7fff = 0;
    DAT_EXTMEM_7ff1 = 0;
    DAT_EXTMEM_7fdd = 0;
    DAT_EXTMEM_7fb7 = 0;
    DAT_EXTMEM_7eab = 0;
    DAT_EXTMEM_7eac = 0;
    DAT_EXTMEM_7ead = 0;
    DAT_EXTMEM_7ea6 = 0;
    DAT_EXTMEM_7ea7 = '\0';
    FUN_CODE_1f5c();
    DAT_EXTMEM_7fb9 = DAT_EXTMEM_c84a == '\0';
    DAT_EXTMEM_7fba = DAT_EXTMEM_c84a == '\0';
    BANK0_R0 = 0;
    DAT_EXTMEM_7fbb = DAT_EXTMEM_c84a != '\0';
    DAT_EXTMEM_7f75 = bEXTMEMcc8e & 1;
    BANK0_R2 = bVar3;
    if (DAT_EXTMEM_7f75 == 0) {
      DAT_EXTMEM_caa9 = 0;
    }
    else {
      DAT_EXTMEM_caa9 = 0xff;
    }
LAB_CODE_5707:
    while (bVar3 = BANK0_R2, uVar8 = 0xcc9b, bEXTMEMcc9b == 1) {
      bVar6 = 1;
LAB_CODE_5719:
      DAT_INTMEM_50 = 0x20;
      DAT_INTMEM_51 = 0x45;
      FUN_CODE_044f(uVar8 & 0xff00,bVar6);
      BANK0_R2 = bVar3;
    }
    uVar8 = 0xc808;
    bVar6 = DAT_EXTMEM_c808;
    if ((DAT_EXTMEM_c808 & 1) != 0) goto LAB_CODE_5719;
    DAT_INTMEM_47 = DAT_EXTMEM_7f93 & bEXTMEMcc07 & bVar2;
    bEXTMEM7ffd = DAT_EXTMEM_ca40;
    bEXTMEM7ffe = DAT_EXTMEM_ca41;
    BANK0_R1 = BANK0_R1 & 0xf0;
    DAT_EXTMEM_7fed = ~DAT_EXTMEM_d804 >> 4;
    bVar2 = DAT_EXTMEM_7f93;
    if ((DAT_EXTMEM_7fb4 != '\0') &&
       (BANK0_R0 = BANK0_R0 & DAT_EXTMEM_7fed, bEXTMEMd84e == BANK0_R1)) {
      if (((bCODE00a6 >> 1 & 1) == 0) && (DAT_EXTMEM_7eaa == '\0')) {
        DAT_EXTMEM_7eb8 = DAT_EXTMEM_7eb8 + '\x01';
        if (((2 < BANK0_R0) << 7 < '\0') && (BANK0_R0 < 6)) {
                    /* WARNING: Could not recover jumptable at 0x57d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ushort)(byte)(DAT_EXTMEM_7eb9 * '\x03') + 0x57d7))(DAT_EXTMEM_7fed);
          return;
        }
      }
      else {
        DAT_EXTMEM_7fb4 = '\0';
        DAT_EXTMEM_7fed = DAT_EXTMEM_d804 & 0xf;
        uEXTMEMcc00 = 0;
        DAT_EXTMEM_7fab = 1;
        DAT_EXTMEM_7fa9 = 1;
        DAT_EXTMEM_7faa = 0;
        BANK1_R2 = DAT_EXTMEM_7f7e;
        BANK1_R3 = DAT_EXTMEM_7f7d;
        BANK1_R4 = DAT_EXTMEM_7f7c;
        BANK1_R5 = 0;
        bEXTMEMd80b = DAT_EXTMEM_7fed;
        FUN_CODE_26be(0x7f01);
        if ((bCODE00a9 >> 4 & 1) != 0) {
          BANK0_R2 = bVar3;
          FUN_CODE_04d0(bCODE00a9);
        }
      }
    }
    if (DAT_EXTMEM_7fb5 != '\0') {
      BANK0_R0 = BANK0_R0 & 0xf0;
      bVar2 = ~DAT_EXTMEM_d804 & 0xf0 & bEXTMEMd819;
      DAT_INTMEM_4e = ~DAT_EXTMEM_d804 & 0xf0;
      DAT_INTMEM_4f = 0;
      DAT_EXTMEM_7fed = bVar2;
      if (bVar2 == DAT_INTMEM_4e) {
        BANK0_R2 = bVar3;
        FUN_CODE_15c1(0xff);
      }
    }
    uVar8 = 0x7fbe;
    if (DAT_EXTMEM_7fbe != '\0') {
      if ((bCODE00ac != 0) && (DAT_EXTMEM_7ea7 == '\0')) {
        DAT_EXTMEM_7ea7 = '\x01';
      }
      if (DAT_EXTMEM_7ea7 != '\0') {
        DAT_EXTMEM_7ea6 = DAT_EXTMEM_7ea6 + 1;
      }
      if ((DAT_EXTMEM_7f9d == 0) && (DAT_EXTMEM_7f78 == '\0')) {
        uVar5 = 0x7f;
        bVar6 = 0;
        if (DAT_EXTMEM_7fbd != '\0') goto LAB_CODE_5a6d;
      }
      else {
LAB_CODE_5a6d:
        uVar5 = 0;
        bVar6 = bCODE00ab;
        if ((bCODE00ab >> 6 & 1) != 1) {
          uVar8 = 0;
          uVar5 = 0;
          bVar6 = DAT_EXTMEM_7ea6;
          if (BANK0_R0 <= bCODE00ac) goto LAB_CODE_5aa1;
        }
      }
      BANK0_R2 = bVar3;
      FUN_CODE_421d(CONCAT11(uVar5,0x46),bVar6);
      DAT_EXTMEM_7fbe = '\0';
      bEXTMEMcc09 = 0;
      DAT_EXTMEM_7ea7 = '\0';
      uVar8 = 0x7ea6;
      DAT_EXTMEM_7ea6 = 0;
    }
LAB_CODE_5aa1:
    if ((DAT_INTMEM_47 == 0) && (uVar8 = 0x7ffd, bEXTMEM7ffd == 0)) {
      if ((DAT_EXTMEM_7fa3 != '\0') && ((DAT_EXTMEM_7fa2 == '\x03' || (DAT_EXTMEM_7fa2 == '\x04'))))
      {
        DAT_INTMEM_50 = 4;
        DAT_INTMEM_51 = 0x1b;
        BANK0_R2 = bVar3;
        FUN_CODE_044f(0x7f00,0);
        if (DAT_EXTMEM_7f87 != '\0') {
          DAT_EXTMEM_7fe1 = '\x01';
          DAT_EXTMEM_7fe2 = '\x01';
          DAT_EXTMEM_7fe3 = '\x01';
          DAT_EXTMEM_7fe4 = '\x01';
          DAT_EXTMEM_7ffa = '\x01';
          for (bVar6 = 0; bVar6 < BANK0_R4; bVar6 = bVar6 + 1) {
            BANK0_R6 = BANK0_R6 & 4;
            *(bool *)CONCAT11('\x7f' - (((0x1e < bVar6) << 7) >> 7),bVar6 - 0x1f) =
                 *(char *)CONCAT11('\x7f' - (((0x7f < bVar6) << 7) >> 7),bVar6 + 0x80) != '\0';
          }
          if ((DAT_EXTMEM_7fe1 == '\0') || (DAT_EXTMEM_7fe2 == '\0')) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if ((bVar1) && (DAT_EXTMEM_7fe3 != '\0')) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          if ((bVar1) && (DAT_EXTMEM_7fe4 != '\0')) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          if (DAT_EXTMEM_7f7d == '\x10') {
            bVar6 = 2;
          }
          else {
            bVar6 = DAT_EXTMEM_7f7d == '\b';
          }
          bVar7 = DAT_EXTMEM_7f80 & 3;
          bVar6 = *(byte *)CONCAT11('\x7f' - (((0x69 < bVar6) << 7) >> 7),bVar6 + 0x96) & 3;
          if (((bVar7 < BANK0_R3) && (bVar1)) || (bVar6 == BANK0_R4)) {
            DAT_EXTMEM_7f9a = bVar7 << 4 | bVar7;
          }
          else {
            DAT_EXTMEM_7ffa = '\0';
            DAT_EXTMEM_7f9a = bVar6 << 4 | bVar6;
          }
          DAT_EXTMEM_7fe1 = '\x01';
          DAT_EXTMEM_7fe2 = 1;
          DAT_EXTMEM_7fe3 = '\x01';
          DAT_EXTMEM_7fe4 = '\x01';
          for (bVar6 = 0; bVar7 = DAT_EXTMEM_7f9a, bVar6 < BANK0_R4; bVar6 = bVar6 + 1) {
            BANK0_R6 = BANK0_R6 & 0x20;
            *(bool *)CONCAT11('\x7f' - (((0x1e < bVar6) << 7) >> 7),bVar6 - 0x1f) =
                 *(char *)CONCAT11('\x7f' - (((0x7f < bVar6) << 7) >> 7),bVar6 + 0x80) != '\0';
          }
          if ((DAT_EXTMEM_7fe1 == '\0') || (DAT_EXTMEM_7fe2 == 0)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if ((bVar1) && (DAT_EXTMEM_7fe3 != '\0')) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          if ((bVar1) && (DAT_EXTMEM_7fe4 != '\0')) {
            DAT_EXTMEM_7fe3 = '\x01';
          }
          else {
            DAT_EXTMEM_7fe3 = '\0';
          }
          DAT_EXTMEM_7fed = (DAT_EXTMEM_7f80 & 0x18) >> 1;
          DAT_EXTMEM_7fe4 =
               *(byte *)CONCAT11('\x7f' - (((0x69 < DAT_EXTMEM_7fe2) << 7) >> 7),
                                 DAT_EXTMEM_7fe2 + 0x96) & 0xc;
          if (((DAT_EXTMEM_7fed < BANK0_R3) && (DAT_EXTMEM_7fe3 == '\x01')) ||
             (DAT_EXTMEM_7fe4 == BANK0_R4)) {
            DAT_EXTMEM_7f9a = DAT_EXTMEM_7fed << 4 | DAT_EXTMEM_7fed;
          }
          else {
            DAT_EXTMEM_7ffa = '\0';
            DAT_EXTMEM_7f9a = DAT_EXTMEM_7fe4 << 4 | DAT_EXTMEM_7fe4;
          }
          BANK0_R3 = BANK0_R3 | bVar7;
          if (DAT_EXTMEM_7ffa == '\0') {
            DAT_EXTMEM_7f85 = 1;
          }
        }
        if (DAT_EXTMEM_7fa2 == '\x04') {
          DAT_EXTMEM_7fe2 = DAT_EXTMEM_7f80;
          BANK0_R3 = BANK0_R3 & 4;
          BANK0_R4 = BANK0_R4 & 0x20;
          BANK0_R5 = BANK0_R5 & 3;
          bVar6 = ((DAT_EXTMEM_7f80 & 0x18) >> 4) << 1 | (DAT_EXTMEM_7f80 & 8) >> 3;
          DAT_EXTMEM_7fb8 = '\0';
          if ((DAT_EXTMEM_7fba == '\0') || (DAT_EXTMEM_7f80 != 0)) {
            bVar7 = DAT_EXTMEM_7f80;
            if (DAT_EXTMEM_7f87 == '\0') {
              DAT_EXTMEM_7fed = DAT_EXTMEM_7f80 & 3;
              BANK0_R3 = BANK0_R3 | DAT_EXTMEM_7f9a & 0xcc;
              DAT_EXTMEM_7f9a = DAT_EXTMEM_7fed << 4 | DAT_EXTMEM_7fed;
            }
          }
          else {
            DAT_EXTMEM_7fb8 = '\x01';
            bVar7 = 1;
          }
          if (((DAT_EXTMEM_7fb9 == '\0') || (DAT_EXTMEM_7f80 != 0)) ||
             ((DAT_EXTMEM_7fbb == '\0' && ((DAT_EXTMEM_7fbc == '\0' && (DAT_EXTMEM_7fb8 != '\0')))))
             ) {
            if (DAT_EXTMEM_7f87 == '\0') {
              DAT_EXTMEM_7fed = (DAT_EXTMEM_7f80 & 0x18) >> 1;
              BANK0_R3 = BANK0_R3 | DAT_EXTMEM_7f9a & 0x33;
              DAT_EXTMEM_7f9a = DAT_EXTMEM_7fed << 4 | DAT_EXTMEM_7fed;
            }
          }
          else {
            bVar6 = bVar6 + 1;
            DAT_EXTMEM_7fb8 = '\x01';
          }
          bVar7 = bVar6 << 2 | bVar7;
          DAT_EXTMEM_7f9b = bVar7 | bVar7 << 4;
        }
        DAT_EXTMEM_7fa3 = '\0';
        DAT_EXTMEM_7f87 = '\0';
      }
      uEXTMEMcc2d = 0xfe;
      BANK0_R2 = bVar3;
      goto LAB_CODE_5707;
    }
    if ((DAT_INTMEM_47 & 1) == 0) {
      if ((bEXTMEM7ffd >> 4 & 1) == 1) {
        if (DAT_EXTMEM_7fe0 == '\0') {
          BANK0_R2 = bVar3;
          FUN_CODE_41f1(0);
          if (DAT_EXTMEM_7f79 != '\0') {
            DAT_EXTMEM_7f77 = '\x01';
          }
        }
        else if (DAT_EXTMEM_7ff3 == '\0') {
          DAT_EXTMEM_7fe0 = '\0';
          DAT_EXTMEM_ca20 = 1;
          DAT_EXTMEM_ca21 = 0;
          uEXTMEMca08 = 1;
          DAT_EXTMEM_7f9d = 0;
        }
        else {
          DAT_EXTMEM_7ff2 = 0;
          DAT_EXTMEM_7ff3 = '\0';
          DAT_EXTMEM_ca20 = 2;
          DAT_EXTMEM_ca21 = 1;
          uEXTMEMca22 = 0;
          DAT_EXTMEM_ca23 = 0;
          uEXTMEMca08 = 1;
          DAT_EXTMEM_7f9d = 0;
        }
        DAT_EXTMEM_ca0e = 1;
        DAT_EXTMEM_7f78 = '\0';
        bEXTMEM7ffd = bEXTMEM7ffd & 0xfe;
      }
      if ((bEXTMEM7ffd >> 3 & 1) == 1) {
        DAT_EXTMEM_7ff4 = '\x01';
        DAT_EXTMEM_7fbd = '\0';
        if ((DAT_EXTMEM_7ff3 == '\0' & DAT_EXTMEM_7ff2) == 0) {
          if (cEXTMEMca81 == '\x02') {
            uEXTMEMca0d = 1;
            DAT_EXTMEM_7f9d = 0;
            DAT_EXTMEM_7fbf = '\0';
            DAT_EXTMEM_7f76 = DAT_EXTMEM_7f78 == '\0';
            DAT_EXTMEM_7fbd = '\x01';
            if (DAT_EXTMEM_7f78 != '\0') {
              DAT_EXTMEM_ca61 = 0xf;
            }
          }
          else {
            if (((DAT_EXTMEM_7fbf != '\0') && (DAT_EXTMEM_7fbf = '\0', (bEXTMEMc84b >> 6 & 1) != 1))
               && ((bEXTMEMca83 >> 2 & 1) != 0)) {
              BANK0_R2 = bVar3;
              FUN_CODE_1f5c(bEXTMEMca83);
            }
            if (DAT_EXTMEM_7f78 == '\0') {
              uEXTMEMca0d = 1;
              DAT_EXTMEM_7f76 = '\x01';
            }
            else if (DAT_EXTMEM_7f9f == '\0') {
              if (DAT_EXTMEM_7f79 == '\0') {
                if (BANK1_R0 != '\0' || BANK1_R1 != '\0') {
                  BANK0_R2 = bVar3;
                  FUN_CODE_2402(0);
                }
                if ((DAT_EXTMEM_7fec & 1) == 0) {
                  DAT_EXTMEM_7fed = 1;
                }
                else {
                  DAT_EXTMEM_7fed = 2;
                }
                bEXTMEMca09 = DAT_EXTMEM_7fed;
              }
              else {
                if (BANK1_R0 != '\0' || BANK1_R1 != '\0') {
                  BANK0_R2 = bVar3;
                  FUN_CODE_2402(DAT_EXTMEM_7f79);
                }
                if ((DAT_EXTMEM_7fee != '\0') && (cEXTMEMca81 != '\x01')) {
                  BANK0_R2 = bVar3;
                  FUN_CODE_1f9b();
                }
                DAT_EXTMEM_7fee = '\0';
                DAT_EXTMEM_7f79 = '\0';
                DAT_INTMEM_50 = 0x20;
                DAT_INTMEM_51 = 0x32;
                BANK0_R2 = bVar3;
                FUN_CODE_044f(0x7f00);
                if ((cEXTMEMca81 != '\x01') && (DAT_EXTMEM_7f7a != '\0')) {
                  DAT_EXTMEM_cad0 = 2;
                }
                DAT_EXTMEM_7f7a = '\0';
                bEXTMEMca09 = 1;
              }
              DAT_EXTMEM_7f9d = 0;
              DAT_EXTMEM_7f78 = '\0';
              DAT_EXTMEM_ca61 = 0xf;
            }
          }
        }
        else {
          DAT_EXTMEM_7ff2 = 0;
          if (cEXTMEMca81 == '\x01') {
            DAT_EXTMEM_7ff3 = '\x01';
          }
          else {
            DAT_EXTMEM_7ff3 = '\0';
          }
        }
      }
      bVar6 = BANK0_R0;
      if ((DAT_EXTMEM_7ffb == '\0' & bEXTMEM7ffd & DAT_EXTMEM_7f9f == '\0') != 0) {
        cVar4 = '\0';
        if (((((bEXTMEMcb4a >> 4 & 1) == 1) || (DAT_EXTMEM_7ff2 == 0)) ||
            ((DAT_EXTMEM_ca9f & 1) != 0)) &&
           (((DAT_EXTMEM_c850 >> 1 & 1) == 1 || (3 < bEXTMEMcc09)))) {
          if (((bEXTMEM7ffe >> 1 & 1) == 1) && (DAT_EXTMEM_7fa0 == '\0')) {
            cVar4 = '\x01';
            if (DAT_EXTMEM_7f76 == '\0') {
              if (DAT_EXTMEM_7fec == 1) {
                if (DAT_EXTMEM_7f77 == '\0') {
                  if ((DAT_EXTMEM_7f79 == '\0') || (BANK0_R0 = bVar6, 2 < DAT_EXTMEM_7f9d)) {
                    cVar4 = '\0';
                    DAT_EXTMEM_7f78 = '\0';
                    DAT_EXTMEM_7f79 = '\0';
                    DAT_EXTMEM_7ffb = '\0';
                    DAT_EXTMEM_7f76 = '\0';
                    DAT_EXTMEM_7f9d = 0;
                    BANK0_R0 = bVar6;
                  }
                }
                else {
                  BANK0_R0 = bVar6;
                  if (DAT_EXTMEM_7f79 == '\0') {
                    uEXTMEMca08 = 1;
                    DAT_EXTMEM_7f9d = 0;
                  }
                }
              }
              else if ((DAT_EXTMEM_7f9d < 3) << 7 < '\0') {
                DAT_EXTMEM_7f78 = '\x01';
                DAT_EXTMEM_ca0c = 1;
                BANK0_R0 = bVar6;
              }
              else {
                cVar4 = '\0';
                DAT_EXTMEM_7f78 = '\0';
                DAT_EXTMEM_7f79 = '\0';
                DAT_EXTMEM_7ffb = '\0';
                DAT_EXTMEM_7f7a = '\0';
                DAT_EXTMEM_7f76 = '\0';
                DAT_EXTMEM_7f9d = 0;
                DAT_EXTMEM_7ff2 = 0;
                uEXTMEMcad1 = 1;
                BANK0_R0 = bVar6;
              }
            }
            else if (cEXTMEMca81 == '\x02') {
              DAT_EXTMEM_7f78 = '\x01';
              cVar4 = '\0';
              BANK0_R0 = bVar6;
            }
            else {
              if (DAT_EXTMEM_7f79 == '\0') {
                if (BANK1_R0 != '\0' || BANK1_R1 != '\0') {
                  BANK0_R2 = bVar3;
                  FUN_CODE_2402(0);
                }
                if ((DAT_EXTMEM_7fec & 1) == 0) {
                  DAT_EXTMEM_7fed = 1;
                }
                else {
                  DAT_EXTMEM_7fed = 2;
                }
                bEXTMEMca09 = DAT_EXTMEM_7fed;
              }
              else {
                if (BANK1_R0 != '\0' || BANK1_R1 != '\0') {
                  BANK0_R2 = bVar3;
                  FUN_CODE_2402(DAT_EXTMEM_7f79);
                }
                if ((DAT_EXTMEM_7fee != '\0') && (cEXTMEMca81 != '\x01')) {
                  BANK0_R0 = bVar6;
                  BANK0_R2 = bVar3;
                  FUN_CODE_1f9b();
                }
                DAT_EXTMEM_7fee = '\0';
                DAT_EXTMEM_7f79 = '\0';
                DAT_INTMEM_50 = 0x20;
                DAT_INTMEM_51 = 0x32;
                BANK0_R0 = bVar6;
                BANK0_R2 = bVar3;
                FUN_CODE_044f(0x7f00);
                if ((cEXTMEMca81 != '\x01') && (DAT_EXTMEM_7f7a != '\0')) {
                  DAT_EXTMEM_cad0 = 2;
                }
                DAT_EXTMEM_7f7a = '\0';
                bEXTMEMca09 = 1;
              }
              DAT_EXTMEM_7f9d = 0;
              DAT_EXTMEM_ca61 = 0xf;
              DAT_EXTMEM_ca0c = 1;
              BANK0_R0 = bVar6;
            }
          }
          else if ((((bEXTMEMcb4a >> 3 & 1) == 1) ||
                   (((DAT_EXTMEM_7f9d == 0 || (2 < DAT_EXTMEM_7f9d)) || (DAT_EXTMEM_7ff4 != '\0'))))
                  || ((DAT_EXTMEM_ca9f & 1) == 1)) {
            DAT_EXTMEM_7f9d = 0;
            BANK0_R0 = bVar6;
          }
          else {
            DAT_INTMEM_50 = 0x20;
            DAT_INTMEM_51 = 0x1d;
            BANK0_R2 = bVar3;
            FUN_CODE_044f(0xca00,DAT_EXTMEM_ca9f);
            DAT_EXTMEM_ca0c = 1;
            DAT_EXTMEM_ca61 = 0xf;
            cVar4 = '\x01';
          }
        }
        else {
          cVar4 = '\x01';
          DAT_EXTMEM_ca0c = 1;
          DAT_EXTMEM_ca61 = 0xf;
          BANK0_R0 = bVar6;
        }
        DAT_EXTMEM_7f77 = '\0';
        if (DAT_EXTMEM_7fb6 == '\0' && cVar4 == '\0') {
          DAT_EXTMEM_7fa0 = '\0';
          BANK0_R2 = bVar3;
          FUN_CODE_42b8(DAT_EXTMEM_7fb6 == '\0');
        }
        DAT_EXTMEM_7f76 = '\0';
      }
      bVar6 = 0x7f;
      DAT_INTMEM_48 = 0x35;
      DAT_INTMEM_49 = -0x34;
      DAT_INTMEM_4a = 0;
      BANK0_R2 = bVar3;
      if ((DAT_INTMEM_47 >> 2 & 1) == 1) {
        DAT_INTMEM_50 = 0x20;
        DAT_INTMEM_51 = 6;
        FUN_CODE_044f(0x7f00);
        BANK0_R2 = bVar3;
        bVar3 = FUN_CODE_67d0(CONCAT11(DAT_INTMEM_49,DAT_INTMEM_48),DAT_INTMEM_4a);
        DAT_INTMEM_4b = bVar3 & 7;
        DAT_INTMEM_4c = bVar3 & 0x18;
        cVar4 = FUN_CODE_67d0(CONCAT11(DAT_INTMEM_49 - (((0xfe < DAT_INTMEM_48) << 7) >> 7),
                                       DAT_INTMEM_48 + 1),DAT_INTMEM_4a);
        uVar9 = CONCAT11(DAT_INTMEM_49 - (((0xfd < DAT_INTMEM_48) << 7) >> 7),DAT_INTMEM_48 + 2);
        uVar5 = FUN_CODE_67d0(uVar9,DAT_INTMEM_4a);
        bVar6 = (byte)((ushort)uVar9 >> 8);
        if (BANK0_R7 < 0x10) {
                    /* WARNING: Could not recover jumptable at 0x5f8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ushort)(byte)(cVar4 * '\x03') + 0x5f90))(uVar5);
          return;
        }
      }
      bVar3 = BANK0_R2;
      if ((DAT_INTMEM_47 & 0x28) != 0) {
        DAT_INTMEM_50 = 1;
        DAT_INTMEM_51 = 0x10;
        uVar8 = (ushort)bVar6 << 8;
        FUN_CODE_044f(uVar8);
        DAT_INTMEM_50 = 1;
        DAT_INTMEM_51 = 0x68;
        FUN_CODE_044f(uVar8 & 0xff00);
        DAT_INTMEM_50 = 1;
        DAT_INTMEM_51 = 1;
        FUN_CODE_044f(1);
        DAT_INTMEM_50 = 1;
        DAT_INTMEM_51 = DAT_INTMEM_47;
        FUN_CODE_044f(1);
        FUN_CODE_270e();
        if ((DAT_EXTMEM_7fa7 != '\x02') && (DAT_EXTMEM_7fa7 != '\x05')) {
          BANK0_R2 = bVar3;
          FUN_CODE_421d(0x7f4b);
        }
        do {
        } while( true );
      }
      goto LAB_CODE_5707;
    }
    BANK0_R2 = bVar3;
    FUN_CODE_270e();
  } while( true );
  while( true ) {
    FUN_CODE_07f4(bVar2);
    if ((char)uVar8 == '\x01') goto LAB_CODE_488a;
    if ((char)uVar8 == '\x02') break;
LAB_CODE_4fe8:
    DAT_EXTMEM_7fed = DAT_EXTMEM_d80d & 7;
    uVar8 = 0x7fed;
    BANK0_R3 = BANK0_R3 & 7;
    bVar2 = DAT_EXTMEM_7fed;
    if ((DAT_EXTMEM_7fed == 7) && (uVar8 = 0xd4cc, bVar2 = bEXTMEMd4cc, (bEXTMEMd4cc & 1) == 1))
    goto LAB_CODE_5025;
  }
  BANK0_R3 = BANK0_R3 | 4;
  goto LAB_CODE_4e4a;
LAB_CODE_5025:
  while (bEXTMEMcc9b == 1) {
    DAT_INTMEM_50 = 0x20;
    DAT_INTMEM_51 = 0x42;
    FUN_CODE_044f(0xcc00);
  }
  FUN_CODE_1465();
  DAT_EXTMEM_cc0b = 0;
  DAT_EXTMEM_7fe5 = 0;
  do {
    BANK0_R3 = BANK0_R3 & 0xf0;
    uVar8 = 0xd868;
    BANK0_R4 = BANK0_R4 & 0xf0;
    if (bEXTMEMd819 == BANK0_R4) {
      FUN_CODE_15c1();
      FUN_CODE_1403();
      BANK0_R3 = BANK0_R3 & 0xf0;
      DAT_EXTMEM_7fed = ~DAT_EXTMEM_d804 >> 4;
      DAT_EXTMEM_cc0b = 0;
      DAT_EXTMEM_7fe5 = 0;
      goto LAB_CODE_50b3;
    }
    FUN_CODE_07f4(DAT_EXTMEM_d868);
    if ((char)uVar8 == '\x01') goto LAB_CODE_488a;
  } while ((char)uVar8 != '\x02');
  FUN_CODE_15c1();
  BANK0_R3 = BANK0_R3 | 8;
  goto LAB_CODE_4e4a;
LAB_CODE_50b3:
  BANK0_R3 = BANK0_R3 & DAT_EXTMEM_7fed;
  uVar8 = 0x7fed;
  if (bEXTMEMd84e != BANK0_R4) {
    FUN_CODE_07f4(DAT_EXTMEM_7fed);
    if ((char)uVar8 == '\x01') goto LAB_CODE_488a;
    if ((char)uVar8 == '\x02') goto code_c0x50d7;
    goto LAB_CODE_50b3;
  }
  if (((bCODE00a6 >> 1 & 1) != 1) && (DAT_EXTMEM_7eaa == '\0')) {
    do {
    } while( true );
  }
  if ((bCODE00a9 >> 4 & 1) != 0) {
    FUN_CODE_04d0(bCODE00a9);
  }
  while (bEXTMEMcc9b == 2) {
    DAT_INTMEM_50 = 0x20;
    DAT_INTMEM_51 = 0x43;
    FUN_CODE_044f(0xcc00);
  }
  DAT_INTMEM_50 = 2;
  DAT_INTMEM_51 = 0x26;
  FUN_CODE_044f(0xcc00);
  DAT_EXTMEM_cc0b = 0;
  DAT_EXTMEM_7fe5 = 0;
  do {
    DAT_EXTMEM_7fed = DAT_EXTMEM_d80d & 7;
    uVar8 = 0x7fed;
    BANK0_R3 = BANK0_R3 & 7;
    bVar2 = DAT_EXTMEM_7fed;
    if ((DAT_EXTMEM_7fed == 7) && (uVar8 = 0xd4cc, bVar2 = bEXTMEMd4cc, (bEXTMEMd4cc & 1) != 0)) {
      uEXTMEMc80f = 0;
      uVar8 = 0xcc00;
      uEXTMEMcc00 = 0;
      FUN_CODE_226e();
      DAT_INTMEM_50 = 2;
      DAT_INTMEM_51 = 0x27;
      FUN_CODE_044f(uVar8 & 0xff00);
      DAT_EXTMEM_cc0b = 0;
      DAT_EXTMEM_7fe5 = 0;
      goto LAB_CODE_51aa;
    }
    FUN_CODE_07f4(bVar2);
    if ((char)uVar8 == '\x01') goto LAB_CODE_488a;
  } while ((char)uVar8 != '\x02');
  BANK0_R3 = BANK0_R3 | 0x20;
  goto LAB_CODE_4e4a;
code_c0x50d7:
  BANK0_R3 = BANK0_R3 | 0x10;
  goto LAB_CODE_4e4a;
LAB_CODE_51aa:
  DAT_EXTMEM_7fed = bEXTMEMc803 & 0x80;
  uVar8 = 0x7fed;
  if (DAT_EXTMEM_7fed == 0) {
    FUN_CODE_07f4(0);
    if ((char)uVar8 == '\x01') goto LAB_CODE_488a;
    if ((char)uVar8 == '\x02') goto code_c0x51cb;
    goto LAB_CODE_51aa;
  }
  DAT_EXTMEM_cc0b = 0;
  do {
  } while ((BANK0_R4 != 0) << 7 < '\0');
  DAT_EXTMEM_7fed = cEXTMEMd085;
  DAT_INTMEM_50 = 1;
  DAT_INTMEM_51 = 3;
  FUN_CODE_044f(0x7f00,bEXTMEMc849 >> 4);
  DAT_EXTMEM_7fed = bEXTMEMc849;
  while( true ) {
    while (uVar8 = 0xcc9b, bEXTMEMcc9b == 3) {
      DAT_INTMEM_50 = 0x20;
      DAT_INTMEM_51 = 0x44;
      FUN_CODE_044f(0xcc00);
    }
    FUN_CODE_2369();
    if ((char)uVar8 != '\0') goto LAB_CODE_488a;
    bVar1 = (DAT_EXTMEM_7fed & 1) == 0;
    bVar2 = BANK0_R3 & 0xf;
    if (((bVar1 & bEXTMEMc803) != 0) ||
       (bVar1 = (DAT_EXTMEM_7fed & 2) == 0, (bVar1 & bEXTMEMc840) != 0)) break;
    BANK0_R3 = BANK0_R3 & 3;
    bVar1 = (DAT_EXTMEM_7fed & 4) == 0;
    bVar2 = BANK0_R3;
    if (((bVar1 & bEXTMEMc841) != 0) ||
       (bVar1 = (DAT_EXTMEM_7fed & 8) == 0, bVar1 && cEXTMEMd085 != '?')) break;
  }
  BANK0_R3 = bVar2;
  FUN_CODE_270e(bVar1);
  BANK0_R3 = BANK0_R3 | 0x80;
  goto LAB_CODE_4e4a;
code_c0x51cb:
  BANK0_R3 = BANK0_R3 | 0x40;
  goto LAB_CODE_4e4a;
}



/* =========================================================
 * CODE:581e  FUN_CODE_581e  size=76
 * ========================================================= */

/* WARNING: Removing unreachable block (CODE,0x50a2) */
/* WARNING: Removing unreachable block (CODE,0x6438) */
/* WARNING: Removing unreachable block (CODE,0x576b) */

void FUN_CODE_581e(byte param_1)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  char cVar4;
  undefined1 uVar5;
  byte bVar6;
  byte bVar7;
  ushort uVar8;
  undefined2 uVar9;
  
  cVar2 = DAT_EXTMEM_7f7e + '\x01';
  cVar4 = '\x01';
  while (cVar2 = cVar2 + -1, cVar2 != '\0') {
    cVar4 = cVar4 * '\x02';
  }
  DAT_EXTMEM_7fed = cVar4 - 1;
  BANK0_R0 = BANK0_R0 & 0xf;
  DAT_EXTMEM_7eb9 = '\x02';
  DAT_EXTMEM_7eb8 = '\0';
  DAT_EXTMEM_d804 = DAT_EXTMEM_7fed;
  bEXTMEMd80a = DAT_EXTMEM_7fed;
  bEXTMEMd80b = DAT_EXTMEM_7fed;
LAB_CODE_59e3:
  bVar3 = BANK0_R2;
  if (DAT_EXTMEM_7fb5 != '\0') {
    BANK0_R0 = BANK0_R0 & 0xf0;
    param_1 = ~DAT_EXTMEM_d804 & 0xf0 & bEXTMEMd819;
    DAT_INTMEM_4e = ~DAT_EXTMEM_d804 & 0xf0;
    DAT_INTMEM_4f = 0;
    DAT_EXTMEM_7fed = param_1;
    if (param_1 == DAT_INTMEM_4e) {
      FUN_CODE_15c1(0xff);
    }
  }
  uVar8 = 0x7fbe;
  if (DAT_EXTMEM_7fbe == '\0') goto LAB_CODE_5aa1;
  if ((bCODE00ac != 0) && (DAT_EXTMEM_7ea7 == '\0')) {
    DAT_EXTMEM_7ea7 = '\x01';
  }
  if (DAT_EXTMEM_7ea7 != '\0') {
    DAT_EXTMEM_7ea6 = DAT_EXTMEM_7ea6 + 1;
  }
  if ((DAT_EXTMEM_7f9d == 0) && (DAT_EXTMEM_7f78 == '\0')) {
    uVar5 = 0x7f;
    bVar6 = 0;
    if (DAT_EXTMEM_7fbd != '\0') goto LAB_CODE_5a6d;
  }
  else {
LAB_CODE_5a6d:
    uVar5 = 0;
    bVar6 = bCODE00ab;
    if ((bCODE00ab >> 6 & 1) != 1) {
      uVar8 = 0;
      uVar5 = 0;
      bVar6 = DAT_EXTMEM_7ea6;
      if (BANK0_R0 <= bCODE00ac) goto LAB_CODE_5aa1;
    }
  }
  BANK0_R2 = bVar3;
  FUN_CODE_421d(CONCAT11(uVar5,0x46),bVar6);
  DAT_EXTMEM_7fbe = '\0';
  bEXTMEMcc09 = 0;
  DAT_EXTMEM_7ea7 = '\0';
  uVar8 = 0x7ea6;
  DAT_EXTMEM_7ea6 = 0;
LAB_CODE_5aa1:
  if ((DAT_INTMEM_47 == 0) && (uVar8 = 0x7ffd, bEXTMEM7ffd == 0)) {
    if ((DAT_EXTMEM_7fa3 != '\0') && ((DAT_EXTMEM_7fa2 == '\x03' || (DAT_EXTMEM_7fa2 == '\x04')))) {
      DAT_INTMEM_50 = 4;
      DAT_INTMEM_51 = 0x1b;
      BANK0_R2 = bVar3;
      FUN_CODE_044f(0x7f00,0);
      if (DAT_EXTMEM_7f87 != '\0') {
        DAT_EXTMEM_7fe1 = '\x01';
        DAT_EXTMEM_7fe2 = '\x01';
        DAT_EXTMEM_7fe3 = '\x01';
        DAT_EXTMEM_7fe4 = '\x01';
        DAT_EXTMEM_7ffa = '\x01';
        for (bVar6 = 0; bVar6 < BANK0_R4; bVar6 = bVar6 + 1) {
          BANK0_R6 = BANK0_R6 & 4;
          *(bool *)CONCAT11('\x7f' - (((0x1e < bVar6) << 7) >> 7),bVar6 - 0x1f) =
               *(char *)CONCAT11('\x7f' - (((0x7f < bVar6) << 7) >> 7),bVar6 + 0x80) != '\0';
        }
        if ((DAT_EXTMEM_7fe1 == '\0') || (DAT_EXTMEM_7fe2 == '\0')) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if ((bVar1) && (DAT_EXTMEM_7fe3 != '\0')) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if ((bVar1) && (DAT_EXTMEM_7fe4 != '\0')) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (DAT_EXTMEM_7f7d == '\x10') {
          bVar6 = 2;
        }
        else {
          bVar6 = DAT_EXTMEM_7f7d == '\b';
        }
        bVar7 = DAT_EXTMEM_7f80 & 3;
        bVar6 = *(byte *)CONCAT11('\x7f' - (((0x69 < bVar6) << 7) >> 7),bVar6 + 0x96) & 3;
        if (((bVar7 < BANK0_R3) && (bVar1)) || (bVar6 == BANK0_R4)) {
          DAT_EXTMEM_7f9a = bVar7 << 4 | bVar7;
        }
        else {
          DAT_EXTMEM_7ffa = '\0';
          DAT_EXTMEM_7f9a = bVar6 << 4 | bVar6;
        }
        DAT_EXTMEM_7fe1 = '\x01';
        DAT_EXTMEM_7fe2 = 1;
        DAT_EXTMEM_7fe3 = '\x01';
        DAT_EXTMEM_7fe4 = '\x01';
        for (bVar6 = 0; bVar7 = DAT_EXTMEM_7f9a, bVar6 < BANK0_R4; bVar6 = bVar6 + 1) {
          BANK0_R6 = BANK0_R6 & 0x20;
          *(bool *)CONCAT11('\x7f' - (((0x1e < bVar6) << 7) >> 7),bVar6 - 0x1f) =
               *(char *)CONCAT11('\x7f' - (((0x7f < bVar6) << 7) >> 7),bVar6 + 0x80) != '\0';
        }
        if ((DAT_EXTMEM_7fe1 == '\0') || (DAT_EXTMEM_7fe2 == 0)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if ((bVar1) && (DAT_EXTMEM_7fe3 != '\0')) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if ((bVar1) && (DAT_EXTMEM_7fe4 != '\0')) {
          DAT_EXTMEM_7fe3 = '\x01';
        }
        else {
          DAT_EXTMEM_7fe3 = '\0';
        }
        DAT_EXTMEM_7fed = (DAT_EXTMEM_7f80 & 0x18) >> 1;
        DAT_EXTMEM_7fe4 =
             *(byte *)CONCAT11('\x7f' - (((0x69 < DAT_EXTMEM_7fe2) << 7) >> 7),
                               DAT_EXTMEM_7fe2 + 0x96) & 0xc;
        if (((DAT_EXTMEM_7fed < BANK0_R3) && (DAT_EXTMEM_7fe3 == '\x01')) ||
           (DAT_EXTMEM_7fe4 == BANK0_R4)) {
          DAT_EXTMEM_7f9a = DAT_EXTMEM_7fed << 4 | DAT_EXTMEM_7fed;
        }
        else {
          DAT_EXTMEM_7ffa = '\0';
          DAT_EXTMEM_7f9a = DAT_EXTMEM_7fe4 << 4 | DAT_EXTMEM_7fe4;
        }
        BANK0_R3 = BANK0_R3 | bVar7;
        if (DAT_EXTMEM_7ffa == '\0') {
          DAT_EXTMEM_7f85 = 1;
        }
      }
      if (DAT_EXTMEM_7fa2 == '\x04') {
        DAT_EXTMEM_7fe2 = DAT_EXTMEM_7f80;
        BANK0_R3 = BANK0_R3 & 4;
        BANK0_R4 = BANK0_R4 & 0x20;
        BANK0_R5 = BANK0_R5 & 3;
        bVar6 = ((DAT_EXTMEM_7f80 & 0x18) >> 4) << 1 | (DAT_EXTMEM_7f80 & 8) >> 3;
        DAT_EXTMEM_7fb8 = '\0';
        if ((DAT_EXTMEM_7fba == '\0') || (DAT_EXTMEM_7f80 != 0)) {
          bVar7 = DAT_EXTMEM_7f80;
          if (DAT_EXTMEM_7f87 == '\0') {
            DAT_EXTMEM_7fed = DAT_EXTMEM_7f80 & 3;
            BANK0_R3 = BANK0_R3 | DAT_EXTMEM_7f9a & 0xcc;
            DAT_EXTMEM_7f9a = DAT_EXTMEM_7fed << 4 | DAT_EXTMEM_7fed;
          }
        }
        else {
          DAT_EXTMEM_7fb8 = '\x01';
          bVar7 = 1;
        }
        if (((DAT_EXTMEM_7fb9 == '\0') || (DAT_EXTMEM_7f80 != 0)) ||
           ((DAT_EXTMEM_7fbb == '\0' && ((DAT_EXTMEM_7fbc == '\0' && (DAT_EXTMEM_7fb8 != '\0'))))))
        {
          if (DAT_EXTMEM_7f87 == '\0') {
            DAT_EXTMEM_7fed = (DAT_EXTMEM_7f80 & 0x18) >> 1;
            BANK0_R3 = BANK0_R3 | DAT_EXTMEM_7f9a & 0x33;
            DAT_EXTMEM_7f9a = DAT_EXTMEM_7fed << 4 | DAT_EXTMEM_7fed;
          }
        }
        else {
          bVar6 = bVar6 + 1;
          DAT_EXTMEM_7fb8 = '\x01';
        }
        bVar7 = bVar6 << 2 | bVar7;
        DAT_EXTMEM_7f9b = bVar7 | bVar7 << 4;
      }
      DAT_EXTMEM_7fa3 = '\0';
      DAT_EXTMEM_7f87 = '\0';
    }
    uEXTMEMcc2d = 0xfe;
    BANK0_R2 = bVar3;
  }
  else {
    if ((DAT_INTMEM_47 & 1) != 0) {
      BANK0_R2 = bVar3;
      FUN_CODE_270e();
LAB_CODE_488a:
      while( true ) {
        while( true ) {
          DAT_INTMEM_50 = 1;
          DAT_INTMEM_51 = 1;
          FUN_CODE_044f(uVar8 & 0xff00);
          if ((bCODE00a7 & 1) != 0) {
            FUN_CODE_05db(0,bCODE00a7);
          }
          cEXTMEMcc99 = cEXTMEMcc99 + '\x01';
          BANK0_R3 = BANK0_R3 & 0xfe;
          DAT_EXTMEM_d815 = 0;
          while ((((bEXTMEMc84b & 1) != 0 && (uVar8 = 0xcc9b, bVar3 = bEXTMEMcc9b, bEXTMEMcc9b < 10)
                  ) || (uVar8 = 0xc808, bVar3 = DAT_EXTMEM_c808, (DAT_EXTMEM_c808 & 1) != 0))) {
            DAT_INTMEM_50 = 0x20;
            DAT_INTMEM_51 = 0x40;
            FUN_CODE_044f(uVar8 & 0xff00,bVar3);
          }
          if ((bEXTMEMd86a >> 4 & 1) != 0) {
            uEXTMEMca10 = 3;
            uEXTMEMca15 = 0x20;
            uEXTMEMca14 = 7;
          }
          if ((bCODE00a6 >> 6 & 1) != 0) {
            uEXTMEMca18 = uCODE00aa;
            uEXTMEMca19 = 0xff;
          }
          uEXTMEMcc0c = 199;
          DAT_EXTMEM_cc0b = 0;
          DAT_EXTMEM_c804 = 0;
          DAT_EXTMEM_c84a = '\x02';
          if ((bEXTMEMd86a >> 3 & 1) == 0) {
            uEXTMEMc8a0 = 0xe;
          }
          else {
            uEXTMEMd8a0 = 0xd;
          }
          uEXTMEMd835 = 2;
          BANK0_R3 = BANK0_R3 & 0xfc;
          DAT_INTMEM_50 = 0x20;
          DAT_INTMEM_51 = 1;
          FUN_CODE_044f(0xc800);
          DAT_EXTMEM_7f84 = DAT_EXTMEM_c801 & 0x80;
          if (DAT_EXTMEM_7f84 == 0) {
            uEXTMEMd254 = 0xff;
            uEXTMEMd255 = 0xff;
            BANK0_R3 = BANK0_R3 & 0xdf;
            uEXTMEMd238 = 4;
          }
          DAT_EXTMEM_7fa4 = bEXTMEMcc8e & 4;
          DAT_EXTMEM_7f94 = uEXTMEMcc8c;
          uEXTMEM7f95 = uEXTMEMcc8d;
          DAT_EXTMEM_7f96 = uEXTMEMc828;
          uEXTMEM7f97 = uEXTMEMc829;
          uEXTMEM7f98 = uEXTMEMc82a;
          if (cEXTMEMcc92 == '\0') {
            DAT_EXTMEM_7fa6 = '\x02';
          }
          else {
            BANK0_R3 = BANK0_R3 & 0x7f;
            DAT_EXTMEM_7fa6 = cEXTMEMcc92;
          }
          DAT_EXTMEM_7fa5 = uEXTMEMcc91;
          uEXTMEMcc93 = 6;
          if ((DAT_EXTMEM_7f84 != 0) && ((bEXTMEMc84b >> 3 & 1) != 1)) {
            BANK0_R3 = BANK0_R3 & 0xfb;
          }
          BANK0_R3 = BANK0_R3 & 0xb;
          if ((bCODE00a9 >> 6 & 1) == 0) {
            bEXTMEMd609 = bCODE00a9;
            if ((char)bCODE00a9 < '\0') {
              BANK0_R3 = 0x23;
            }
            else {
              BANK0_R3 = 3;
            }
          }
          else {
            bEXTMEMd609 = 2;
          }
          if ((bCODE00a9 >> 6 & 1) == 0) {
            bEXTMEMd689 = bCODE00a9;
            if ((char)bCODE00a9 < '\0') {
              BANK0_R3 = 0x23;
            }
            else {
              BANK0_R3 = 3;
            }
          }
          else {
            bEXTMEMd689 = 2;
          }
          if ((bCODE00a9 >> 6 & 1) == 0) {
            bEXTMEMd709 = bCODE00a9;
            if ((char)bCODE00a9 < '\0') {
              BANK0_R3 = 0x23;
            }
            else {
              BANK0_R3 = 3;
            }
          }
          else {
            bEXTMEMd709 = 2;
          }
          if ((bCODE00a9 >> 6 & 1) == 0) {
            bEXTMEMd789 = bCODE00a9;
            if ((char)bCODE00a9 < '\0') {
              BANK0_R3 = 0x23;
            }
            else {
              BANK0_R3 = 3;
            }
          }
          else {
            bEXTMEMd789 = 2;
          }
          if ((char)bCODE00a9 < '\0') {
            uEXTMEMd606 = 2;
            uEXTMEMd686 = 2;
            uEXTMEMd706 = 2;
            uEXTMEMd786 = 2;
          }
          BANK0_R3 = BANK0_R3 & 0xfd | 1;
          bEXTMEMd830 = 1;
          DAT_INTMEM_50 = 0x10;
          DAT_INTMEM_51 = 0x70;
          FUN_CODE_044f(0xd800);
          DAT_EXTMEM_cc0b = 0;
          do {
          } while ((bEXTMEMd830 >> 1 & 1) != 1);
          BANK0_R3 = BANK0_R3 & 0x1c;
          if (DAT_EXTMEM_c850 != 1) break;
          BANK0_R3 = 0;
          uVar8 = 0xd830;
          FUN_CODE_270e();
        }
        uVar8 = 0xd86d;
        FUN_CODE_1603();
        if ((char)uVar8 == '\0') break;
        FUN_CODE_270e();
      }
      BANK0_R3 = BANK0_R3 & 0xfe;
      DAT_EXTMEM_7f7d = '\x10';
      FUN_CODE_0cfa(0x7f01);
      uEXTMEMd802 = 2;
      uEXTMEMce06 = 0x10;
      uEXTMEMd801 = 0x81;
      uEXTMEMd803 = 0xf0;
      bEXTMEMd830 = 0;
      DAT_EXTMEM_7f7e = '\x04';
      FUN_CODE_2820(0x7f00);
      uVar8 = 0x7fe6;
      if (DAT_EXTMEM_7fe6 == '\0') {
        FUN_CODE_1ac6(0);
        uVar8 = uVar8 & 0xff00;
        FUN_CODE_1b66();
        if ((char)uVar8 == '\0') {
          uEXTMEMd84f = 0;
          uVar8 = 0xd802;
          FUN_CODE_1b66();
          if ((char)uVar8 == '\0') {
            FUN_CODE_1f1a();
            goto LAB_CODE_4c29;
          }
          FUN_CODE_270e();
        }
        else {
          FUN_CODE_270e();
        }
        goto LAB_CODE_488a;
      }
LAB_CODE_4c29:
      DAT_EXTMEM_7fe6 = '\x01';
      uEXTMEMd850 = 0xf;
      uEXTMEMd852 = 0x1f;
      uEXTMEMd853 = 0xff;
      DAT_EXTMEM_7fe1 = cEXTMEMd607;
      DAT_EXTMEM_7fe2 = bEXTMEMd687;
      DAT_EXTMEM_7fe3 = cEXTMEMd707;
      DAT_EXTMEM_7fe4 = bEXTMEMd787;
      uEXTMEMd801 = 0;
      uEXTMEMd810 = 0xff;
      bEXTMEMd80b = 0;
      bEXTMEMd80a = 0;
      DAT_EXTMEM_d804 = 0;
      uEXTMEMd85d = 0xac;
      uEXTMEMd85e = 0xd;
      DAT_INTMEM_50 = 1;
      DAT_INTMEM_51 = 0x1e;
      FUN_CODE_044f(0xd800);
      DAT_EXTMEM_cc0b = 0;
      cEXTMEMcc90 = '\0';
      while ((bEXTMEMcc07 & 1) == 1) {
        if (((bCODE00a7 >> 4 & 1) != 0) && (DAT_EXTMEM_7f84 == 0)) {
          DAT_INTMEM_50 = 0x20;
          DAT_INTMEM_51 = 0x53;
          FUN_CODE_044f(0x7f00,0);
          uEXTMEMd254 = 0xff;
          uEXTMEMd255 = 0xff;
          BANK0_R3 = BANK0_R3 & 0xdf;
          uEXTMEMd238 = 4;
        }
        if (BANK0_R4 <= DAT_EXTMEM_cc0b) {
          cEXTMEMcc90 = cEXTMEMcc90 + '\x01';
          DAT_EXTMEM_cc0b = 0;
          if (cEXTMEMcc90 == '\n') {
            BANK0_R3 = BANK0_R3 & 0xfb;
          }
          if ((cEXTMEMcc90 == 'd') && ((bCODE00a7 & 1) == 1)) {
            FUN_CODE_05db(0xff,bCODE00a7,uEXTMEMc848);
          }
        }
      }
      DAT_INTMEM_50 = 1;
      DAT_INTMEM_51 = 0x2c;
      FUN_CODE_044f(0xcc00,bEXTMEMcc07);
      if ((bCODE00a7 & 1) != 0) {
        FUN_CODE_05db(0,bCODE00a7);
      }
      if ((char)bCODE00a7 < '\0') {
        FUN_CODE_056c(bCODE00a7);
      }
      while ((((bEXTMEMc84b & 1) != 0 && (uVar8 = 0xcc9b, bVar3 = bEXTMEMcc9b, bEXTMEMcc9b < 0xb))
             || (uVar8 = 0xc808, bVar3 = DAT_EXTMEM_c808, (DAT_EXTMEM_c808 & 1) != 0))) {
        DAT_INTMEM_50 = 0x20;
        DAT_INTMEM_51 = 0x41;
        FUN_CODE_044f(uVar8 & 0xff00,bVar3);
      }
      DAT_EXTMEM_7f7d = '\0';
      DAT_EXTMEM_7ffc = 0;
      DAT_EXTMEM_7fbe = '\0';
      DAT_EXTMEM_7fbf = '\0';
      DAT_EXTMEM_7fbd = '\0';
      DAT_EXTMEM_7fb5 = '\0';
      DAT_EXTMEM_7fb4 = '\0';
      DAT_EXTMEM_7eb9 = '\0';
      DAT_EXTMEM_7fab = 0;
      DAT_EXTMEM_7fa9 = 0;
      DAT_EXTMEM_7faa = 0;
      DAT_EXTMEM_7fb3 = 0;
      BANK0_R3 = BANK0_R3 | 2;
      if ((DAT_EXTMEM_c800 & 1) == 1) {
        DAT_EXTMEM_cc0b = 0;
        DAT_INTMEM_50 = 1;
        DAT_INTMEM_51 = 2;
        FUN_CODE_044f(0xcc00,DAT_EXTMEM_c800);
        if (DAT_INTMEM_4d == '\0') {
          if ((bEXTMEMc84b >> 2 & 1) == 1) {
            DAT_INTMEM_50 = 0xeb;
            FUN_CODE_2389(0xc801,bEXTMEMc84b);
          }
          else {
            DAT_INTMEM_50 = uEXTMEMc848;
            FUN_CODE_2389(0xc801,bEXTMEMc84b);
          }
        }
        DAT_INTMEM_4d = '\x01';
        uEXTMEMcc0c = 99;
        DAT_EXTMEM_c804 = 0x80;
        uEXTMEMca5a = 0;
        BANK0_R3 = BANK0_R3 | 4;
        DAT_EXTMEM_7f7e = '\x04';
        uEXTMEMd836 = 8;
        FUN_CODE_11e5();
        bEXTMEMcc95 = 0;
        uEXTMEMcc96 = 0;
LAB_CODE_4e4a:
        do {
          FUN_CODE_2242();
          bEXTMEMcc95 = bEXTMEMcc95 + 1;
          if (((bCODE00a6 >> 2 & 1) != 1) && ((bEXTMEMcc95 & 0xf) == 0)) {
            FUN_CODE_0860(bEXTMEMcc95);
          }
          DAT_EXTMEM_d602 = 0x10;
          DAT_EXTMEM_d603 = 0x2b;
          DAT_EXTMEM_d682 = 0x10;
          DAT_EXTMEM_d683 = 0x2b;
          DAT_EXTMEM_d702 = 0x10;
          DAT_EXTMEM_d703 = 0x2b;
          DAT_EXTMEM_d782 = 0x10;
          DAT_EXTMEM_d783 = 0x2b;
          DAT_INTMEM_50 = 2;
          DAT_INTMEM_51 = 0x25;
          FUN_CODE_044f(0xd700);
          uEXTMEMd40f = 3;
          BANK0_R3 = BANK0_R3 & 0xfe;
          DAT_EXTMEM_cc0b = 0;
          DAT_EXTMEM_7fe5 = 0;
          do {
            uVar8 = 0xd4cc;
            if ((bEXTMEMd4cc & 1) == 1) {
              if (((bEXTMEMd4cc >> 1 & 1) == 0) || (cEXTMEMd4b6 != '\x06')) {
                BANK0_R3 = BANK0_R3 | 2;
                goto LAB_CODE_4e4a;
              }
              FUN_CODE_129a();
              if (((DAT_EXTMEM_d4b5 < 9) << 7 < '\0') ||
                 ((DAT_EXTMEM_d4b5 == 9 && (DAT_EXTMEM_d4b4 < 0xc4)))) {
                uEXTMEMd60c = 2;
                uEXTMEMd68c = 2;
                uEXTMEMd70c = 2;
                uEXTMEMd78c = 2;
              }
              else if (((DAT_EXTMEM_d4b5 < 0x13) << 7 < '\0') ||
                      ((DAT_EXTMEM_d4b5 == 0x13 && (DAT_EXTMEM_d4b4 < 0x88)))) {
                uEXTMEMd60c = 1;
                uEXTMEMd68c = 1;
                uEXTMEMd70c = 1;
                uEXTMEMd78c = 1;
              }
              else {
                uEXTMEMd60c = 0;
                uEXTMEMd68c = 0;
                uEXTMEMd70c = 0;
                uEXTMEMd78c = 0;
              }
              uVar8 = 0xd707;
              FUN_CODE_2820(0xd707);
              DAT_INTMEM_50 = 2;
              DAT_INTMEM_51 = 0x14;
              uVar8 = uVar8 & 0xff00;
              FUN_CODE_044f(uVar8);
              DAT_INTMEM_50 = 2;
              DAT_INTMEM_51 = 0x68;
              FUN_CODE_044f(uVar8 & 0xff00);
              DAT_INTMEM_50 = 2;
              DAT_INTMEM_51 = 2;
              FUN_CODE_044f(1);
              DAT_INTMEM_51 = DAT_EXTMEM_d4b5;
              DAT_INTMEM_50 = 2;
              FUN_CODE_044f(0xd401);
              DAT_INTMEM_51 = DAT_EXTMEM_d4b4;
              DAT_INTMEM_50 = 2;
              FUN_CODE_044f(0xd401);
              DAT_EXTMEM_cc0b = 0;
              DAT_EXTMEM_7fe5 = 0;
              goto LAB_CODE_4fe8;
            }
            FUN_CODE_07f4(bEXTMEMd4cc);
            if ((char)uVar8 == '\x01') goto LAB_CODE_488a;
          } while ((char)uVar8 != '\x02');
          BANK0_R3 = BANK0_R3 | 1;
        } while( true );
      }
      DAT_INTMEM_4d = '\0';
      if ((bCODE00a7 >> 5 & 1) == 1) {
        BANK1_R2 = '\0';
        BANK1_R3 = '\0';
        BANK1_R4 = 0;
        BANK1_R5 = 0;
        FUN_CODE_26be(0xc,bCODE00a7);
        bEXTMEMcc09 = 0;
        do {
          if ((bEXTMEMcc07 >> 2 & 1) == 1) break;
        } while (BANK0_R3 < 0xf1);
        if (BANK0_R3 < 0xf1) {
          DAT_INTMEM_50 = 0x20;
          DAT_INTMEM_51 = 6;
          FUN_CODE_044f(0xcc00,0);
          DAT_INTMEM_48 = 0x35;
          DAT_INTMEM_49 = -0x34;
          DAT_INTMEM_4a = 0;
          cVar4 = FUN_CODE_67d0(0xcc37,0);
          uVar5 = cVar4 != '\0';
          cVar4 = FUN_CODE_67d0(CONCAT11(DAT_INTMEM_49 - (((0xfe < DAT_INTMEM_48) << 7) >> 7),
                                         DAT_INTMEM_48 + 1),DAT_INTMEM_4a);
          BANK0_R7 = BANK0_R7 & 0xf;
          if (cVar4 == '\f') {
            DAT_EXTMEM_0120 = uVar5;
          }
        }
        else {
          DAT_EXTMEM_0120 = 0;
        }
      }
      BANK0_R0 = BANK0_R0 & 0xfb;
      DAT_INTMEM_50 = uEXTMEMc848;
      FUN_CODE_2389(CONCAT11(200,uEXTMEMc848));
      bVar3 = BANK0_R0;
      BANK0_R0 = BANK0_R0 | 4;
      DAT_EXTMEM_7fb6 = '\0';
      uVar5 = 0x7f;
      bVar6 = DAT_EXTMEM_7f84;
      if (DAT_EXTMEM_7f84 == 0) {
        uVar5 = 0xd2;
        BANK0_R0 = bVar3 & 0xf | 4;
        bVar6 = DAT_EXTMEM_d25c;
        if (2 < BANK0_R0) goto LAB_CODE_53a2;
      }
      else {
LAB_CODE_53a2:
        BANK1_R2 = '\0';
        BANK1_R3 = '\0';
        BANK1_R4 = 0;
        BANK1_R5 = 0;
        FUN_CODE_26be(CONCAT11(uVar5,9),bVar6);
        bEXTMEMcc09 = 0;
        do {
          if ((bEXTMEMcc07 >> 2 & 1) == 1) break;
        } while (BANK0_R0 < 0xf1);
        if (BANK0_R0 < 0xf1) {
          DAT_INTMEM_48 = 0x35;
          DAT_INTMEM_49 = -0x34;
          DAT_INTMEM_4a = 0;
          bVar3 = FUN_CODE_67d0(0xcc36,0);
          if ((bVar3 & 0xf) == 9) {
            cVar4 = FUN_CODE_67d0(CONCAT11(DAT_INTMEM_49 - (((0xfd < DAT_INTMEM_48) << 7) >> 7),
                                           DAT_INTMEM_48 + 2),DAT_INTMEM_4a);
            DAT_EXTMEM_7fe7 = cVar4 != '\0';
          }
          else {
            DAT_EXTMEM_7fe7 = 0;
          }
        }
        else {
          DAT_EXTMEM_7fe7 = 0;
        }
      }
      BANK0_R2 = BANK0_R2 | 0x80;
      uEXTMEMcc0c = 99;
      uEXTMEMca5a = 0;
      DAT_INTMEM_50 = 1;
      DAT_INTMEM_51 = 4;
      uVar5 = 0xca;
      FUN_CODE_044f(0xca00);
      BANK1_R2 = '\0';
      BANK1_R3 = '\0';
      BANK1_R4 = 0;
      BANK1_R5 = 1;
      FUN_CODE_26be(CONCAT11(uVar5,8));
      if (DAT_EXTMEM_7f84 == 0) {
        bVar3 = BANK0_R2;
        if ((((bEXTMEMd252 >> 5 & 1) != 1) && ((bEXTMEMd218 & 1) != 0)) &&
           (bVar3 = BANK0_R2 & 0xf, 1 < (BANK0_R2 & 0xf))) {
          bVar3 = BANK0_R2 & 0xb;
        }
        BANK0_R2 = bVar3;
        if ((DAT_EXTMEM_d25c & 0xf) == 0) {
          BANK0_R2 = BANK0_R2 | 0x40;
        }
        else {
          BANK0_R2 = BANK0_R2 & 0xbf;
        }
        bVar3 = DAT_EXTMEM_d25d & 0xf;
        FUN_CODE_22d9();
        if (((bEXTMEMd252 >> 5 & 1) == 1) ||
           ((((DAT_EXTMEM_d25c & 0xf) != 0 || ((bEXTMEMd252 >> 3 & 1) != 1)) &&
            (((DAT_EXTMEM_d25c & 0xf) == 0 || ((bEXTMEMd252 >> 2 & 1) == 0)))))) {
          DAT_EXTMEM_7ffc = false;
        }
        else {
          DAT_EXTMEM_7ffc = true;
          if ((char)DAT_EXTMEM_d25d < '\0') {
            uEXTMEMcaa5 = 2;
          }
        }
        DAT_EXTMEM_7f7f = bVar3;
        if ((DAT_EXTMEM_d25c & 0xf) == 0) {
          DAT_EXTMEM_caa3 = 0;
        }
        else {
          DAT_EXTMEM_caa3 = 7;
          BANK0_R2 = BANK0_R2 | 0x20;
        }
      }
      else {
        DAT_EXTMEM_7f7f = 0x10;
        BANK0_R2 = BANK0_R2 & 8;
        DAT_EXTMEM_7ffc = bEXTMEMc84b == 0;
        uEXTMEMcaa5 = 2;
      }
      BANK0_R2 = BANK0_R2 | 0xd1;
      if (((bool)DAT_EXTMEM_7ffc != false) &&
         (BANK0_R2 = BANK0_R2 & 0xfe | 0x78, DAT_EXTMEM_7f84 == 0)) {
        bEXTMEMd208 = bEXTMEMd208 & 0xf7 | 4;
      }
      bVar3 = BANK0_R2;
      DAT_EXTMEM_7fa2 = '\0';
      DAT_EXTMEM_7f76 = '\0';
      DAT_EXTMEM_7f77 = '\0';
      DAT_EXTMEM_7f78 = '\0';
      DAT_EXTMEM_7f79 = '\0';
      DAT_EXTMEM_7f7a = '\0';
      DAT_EXTMEM_7f7b = 0;
      uEXTMEM7f83 = 0;
      uEXTMEM7f82 = 0;
      uEXTMEM7f81 = 0;
      DAT_EXTMEM_7f80 = 0;
      DAT_EXTMEM_7ffa = '\0';
      DAT_EXTMEM_7f86 = 0;
      DAT_EXTMEM_7f87 = '\0';
      DAT_EXTMEM_7f7e = '\0';
      DAT_EXTMEM_7f7c = 0;
      uEXTMEM7f8f = 0;
      DAT_EXTMEM_7f8e = 0;
      uEXTMEM7f91 = 0;
      DAT_EXTMEM_7f90 = 0;
      DAT_EXTMEM_7f92 = 0;
      DAT_EXTMEM_7f93 = 0xe7;
      param_1 = 0xe7;
      DAT_EXTMEM_7f99 = 0;
      DAT_EXTMEM_7f9a = 0;
      DAT_EXTMEM_7f9b = 0;
      DAT_EXTMEM_7f9d = 0;
      DAT_EXTMEM_7f9c = 0;
      DAT_EXTMEM_7f85 = 0;
      DAT_EXTMEM_7f9e = 0;
      DAT_EXTMEM_7f9f = '\0';
      DAT_EXTMEM_7fa0 = '\0';
      DAT_EXTMEM_7fa1 = 0;
      DAT_EXTMEM_7fbc = '\0';
      DAT_EXTMEM_7fe0 = '\0';
      DAT_EXTMEM_7fa3 = '\0';
      DAT_EXTMEM_7fb8 = '\0';
      DAT_EXTMEM_7fec = 0;
      BANK1_R0 = '\0';
      BANK1_R1 = '\0';
      DAT_EXTMEM_7ff2 = 0;
      DAT_EXTMEM_7ff3 = '\0';
      DAT_EXTMEM_7ff4 = '\0';
      DAT_EXTMEM_7ffb = '\0';
      DAT_EXTMEM_7ff9 = 0;
      DAT_EXTMEM_7fff = 0;
      DAT_EXTMEM_7ff1 = 0;
      DAT_EXTMEM_7fdd = 0;
      DAT_EXTMEM_7fb7 = 0;
      DAT_EXTMEM_7eab = 0;
      DAT_EXTMEM_7eac = 0;
      DAT_EXTMEM_7ead = 0;
      DAT_EXTMEM_7ea6 = 0;
      DAT_EXTMEM_7ea7 = '\0';
      FUN_CODE_1f5c();
      DAT_EXTMEM_7fb9 = DAT_EXTMEM_c84a == '\0';
      DAT_EXTMEM_7fba = DAT_EXTMEM_c84a == '\0';
      BANK0_R0 = 0;
      DAT_EXTMEM_7fbb = DAT_EXTMEM_c84a != '\0';
      DAT_EXTMEM_7f75 = bEXTMEMcc8e & 1;
      BANK0_R2 = bVar3;
      if (DAT_EXTMEM_7f75 == 0) {
        DAT_EXTMEM_caa9 = 0;
      }
      else {
        DAT_EXTMEM_caa9 = 0xff;
      }
      goto LAB_CODE_5707;
    }
    if ((bEXTMEM7ffd >> 4 & 1) == 1) {
      if (DAT_EXTMEM_7fe0 == '\0') {
        BANK0_R2 = bVar3;
        FUN_CODE_41f1(0);
        if (DAT_EXTMEM_7f79 != '\0') {
          DAT_EXTMEM_7f77 = '\x01';
        }
      }
      else if (DAT_EXTMEM_7ff3 == '\0') {
        DAT_EXTMEM_7fe0 = '\0';
        DAT_EXTMEM_ca20 = 1;
        DAT_EXTMEM_ca21 = 0;
        uEXTMEMca08 = 1;
        DAT_EXTMEM_7f9d = 0;
      }
      else {
        DAT_EXTMEM_7ff2 = 0;
        DAT_EXTMEM_7ff3 = '\0';
        DAT_EXTMEM_ca20 = 2;
        DAT_EXTMEM_ca21 = 1;
        uEXTMEMca22 = 0;
        DAT_EXTMEM_ca23 = 0;
        uEXTMEMca08 = 1;
        DAT_EXTMEM_7f9d = 0;
      }
      DAT_EXTMEM_ca0e = 1;
      DAT_EXTMEM_7f78 = '\0';
      bEXTMEM7ffd = bEXTMEM7ffd & 0xfe;
    }
    if ((bEXTMEM7ffd >> 3 & 1) == 1) {
      DAT_EXTMEM_7ff4 = '\x01';
      DAT_EXTMEM_7fbd = '\0';
      if ((DAT_EXTMEM_7ff3 == '\0' & DAT_EXTMEM_7ff2) == 0) {
        if (cEXTMEMca81 == '\x02') {
          uEXTMEMca0d = 1;
          DAT_EXTMEM_7f9d = 0;
          DAT_EXTMEM_7fbf = '\0';
          DAT_EXTMEM_7f76 = DAT_EXTMEM_7f78 == '\0';
          DAT_EXTMEM_7fbd = '\x01';
          if (DAT_EXTMEM_7f78 != '\0') {
            DAT_EXTMEM_ca61 = 0xf;
          }
        }
        else {
          if (((DAT_EXTMEM_7fbf != '\0') && (DAT_EXTMEM_7fbf = '\0', (bEXTMEMc84b >> 6 & 1) != 1))
             && ((bEXTMEMca83 >> 2 & 1) != 0)) {
            BANK0_R2 = bVar3;
            FUN_CODE_1f5c(bEXTMEMca83);
          }
          if (DAT_EXTMEM_7f78 == '\0') {
            uEXTMEMca0d = 1;
            DAT_EXTMEM_7f76 = '\x01';
          }
          else if (DAT_EXTMEM_7f9f == '\0') {
            if (DAT_EXTMEM_7f79 == '\0') {
              if (BANK1_R0 != '\0' || BANK1_R1 != '\0') {
                BANK0_R2 = bVar3;
                FUN_CODE_2402(0);
              }
              if ((DAT_EXTMEM_7fec & 1) == 0) {
                DAT_EXTMEM_7fed = 1;
              }
              else {
                DAT_EXTMEM_7fed = 2;
              }
              bEXTMEMca09 = DAT_EXTMEM_7fed;
            }
            else {
              if (BANK1_R0 != '\0' || BANK1_R1 != '\0') {
                BANK0_R2 = bVar3;
                FUN_CODE_2402(DAT_EXTMEM_7f79);
              }
              if ((DAT_EXTMEM_7fee != '\0') && (cEXTMEMca81 != '\x01')) {
                BANK0_R2 = bVar3;
                FUN_CODE_1f9b();
              }
              DAT_EXTMEM_7fee = '\0';
              DAT_EXTMEM_7f79 = '\0';
              DAT_INTMEM_50 = 0x20;
              DAT_INTMEM_51 = 0x32;
              BANK0_R2 = bVar3;
              FUN_CODE_044f(0x7f00);
              if ((cEXTMEMca81 != '\x01') && (DAT_EXTMEM_7f7a != '\0')) {
                DAT_EXTMEM_cad0 = 2;
              }
              DAT_EXTMEM_7f7a = '\0';
              bEXTMEMca09 = 1;
            }
            DAT_EXTMEM_7f9d = 0;
            DAT_EXTMEM_7f78 = '\0';
            DAT_EXTMEM_ca61 = 0xf;
          }
        }
      }
      else {
        DAT_EXTMEM_7ff2 = 0;
        if (cEXTMEMca81 == '\x01') {
          DAT_EXTMEM_7ff3 = '\x01';
        }
        else {
          DAT_EXTMEM_7ff3 = '\0';
        }
      }
    }
    bVar6 = BANK0_R0;
    if ((DAT_EXTMEM_7ffb == '\0' & bEXTMEM7ffd & DAT_EXTMEM_7f9f == '\0') != 0) {
      cVar4 = '\0';
      if (((((bEXTMEMcb4a >> 4 & 1) == 1) || (DAT_EXTMEM_7ff2 == 0)) || ((DAT_EXTMEM_ca9f & 1) != 0)
          ) && (((DAT_EXTMEM_c850 >> 1 & 1) == 1 || (3 < bEXTMEMcc09)))) {
        if (((bEXTMEM7ffe >> 1 & 1) == 1) && (DAT_EXTMEM_7fa0 == '\0')) {
          cVar4 = '\x01';
          if (DAT_EXTMEM_7f76 == '\0') {
            if (DAT_EXTMEM_7fec == 1) {
              if (DAT_EXTMEM_7f77 == '\0') {
                if ((DAT_EXTMEM_7f79 == '\0') || (BANK0_R0 = bVar6, 2 < DAT_EXTMEM_7f9d)) {
                  cVar4 = '\0';
                  DAT_EXTMEM_7f78 = '\0';
                  DAT_EXTMEM_7f79 = '\0';
                  DAT_EXTMEM_7ffb = '\0';
                  DAT_EXTMEM_7f76 = '\0';
                  DAT_EXTMEM_7f9d = 0;
                  BANK0_R0 = bVar6;
                }
              }
              else {
                BANK0_R0 = bVar6;
                if (DAT_EXTMEM_7f79 == '\0') {
                  uEXTMEMca08 = 1;
                  DAT_EXTMEM_7f9d = 0;
                }
              }
            }
            else if ((DAT_EXTMEM_7f9d < 3) << 7 < '\0') {
              DAT_EXTMEM_7f78 = '\x01';
              DAT_EXTMEM_ca0c = 1;
              BANK0_R0 = bVar6;
            }
            else {
              cVar4 = '\0';
              DAT_EXTMEM_7f78 = '\0';
              DAT_EXTMEM_7f79 = '\0';
              DAT_EXTMEM_7ffb = '\0';
              DAT_EXTMEM_7f7a = '\0';
              DAT_EXTMEM_7f76 = '\0';
              DAT_EXTMEM_7f9d = 0;
              DAT_EXTMEM_7ff2 = 0;
              uEXTMEMcad1 = 1;
              BANK0_R0 = bVar6;
            }
          }
          else if (cEXTMEMca81 == '\x02') {
            DAT_EXTMEM_7f78 = '\x01';
            cVar4 = '\0';
            BANK0_R0 = bVar6;
          }
          else {
            if (DAT_EXTMEM_7f79 == '\0') {
              if (BANK1_R0 != '\0' || BANK1_R1 != '\0') {
                BANK0_R2 = bVar3;
                FUN_CODE_2402(0);
              }
              if ((DAT_EXTMEM_7fec & 1) == 0) {
                DAT_EXTMEM_7fed = 1;
              }
              else {
                DAT_EXTMEM_7fed = 2;
              }
              bEXTMEMca09 = DAT_EXTMEM_7fed;
            }
            else {
              if (BANK1_R0 != '\0' || BANK1_R1 != '\0') {
                BANK0_R2 = bVar3;
                FUN_CODE_2402(DAT_EXTMEM_7f79);
              }
              if ((DAT_EXTMEM_7fee != '\0') && (cEXTMEMca81 != '\x01')) {
                BANK0_R0 = bVar6;
                BANK0_R2 = bVar3;
                FUN_CODE_1f9b();
              }
              DAT_EXTMEM_7fee = '\0';
              DAT_EXTMEM_7f79 = '\0';
              DAT_INTMEM_50 = 0x20;
              DAT_INTMEM_51 = 0x32;
              BANK0_R0 = bVar6;
              BANK0_R2 = bVar3;
              FUN_CODE_044f(0x7f00);
              if ((cEXTMEMca81 != '\x01') && (DAT_EXTMEM_7f7a != '\0')) {
                DAT_EXTMEM_cad0 = 2;
              }
              DAT_EXTMEM_7f7a = '\0';
              bEXTMEMca09 = 1;
            }
            DAT_EXTMEM_7f9d = 0;
            DAT_EXTMEM_ca61 = 0xf;
            DAT_EXTMEM_ca0c = 1;
            BANK0_R0 = bVar6;
          }
        }
        else if ((((bEXTMEMcb4a >> 3 & 1) == 1) ||
                 (((DAT_EXTMEM_7f9d == 0 || (2 < DAT_EXTMEM_7f9d)) || (DAT_EXTMEM_7ff4 != '\0'))))
                || ((DAT_EXTMEM_ca9f & 1) == 1)) {
          DAT_EXTMEM_7f9d = 0;
          BANK0_R0 = bVar6;
        }
        else {
          DAT_INTMEM_50 = 0x20;
          DAT_INTMEM_51 = 0x1d;
          BANK0_R2 = bVar3;
          FUN_CODE_044f(0xca00,DAT_EXTMEM_ca9f);
          DAT_EXTMEM_ca0c = 1;
          DAT_EXTMEM_ca61 = 0xf;
          cVar4 = '\x01';
        }
      }
      else {
        cVar4 = '\x01';
        DAT_EXTMEM_ca0c = 1;
        DAT_EXTMEM_ca61 = 0xf;
        BANK0_R0 = bVar6;
      }
      DAT_EXTMEM_7f77 = '\0';
      if (DAT_EXTMEM_7fb6 == '\0' && cVar4 == '\0') {
        DAT_EXTMEM_7fa0 = '\0';
        BANK0_R2 = bVar3;
        FUN_CODE_42b8(DAT_EXTMEM_7fb6 == '\0');
      }
      DAT_EXTMEM_7f76 = '\0';
    }
    bVar6 = 0x7f;
    DAT_INTMEM_48 = 0x35;
    DAT_INTMEM_49 = -0x34;
    DAT_INTMEM_4a = 0;
    BANK0_R2 = bVar3;
    if ((DAT_INTMEM_47 >> 2 & 1) == 1) {
      DAT_INTMEM_50 = 0x20;
      DAT_INTMEM_51 = 6;
      FUN_CODE_044f(0x7f00);
      BANK0_R2 = bVar3;
      bVar3 = FUN_CODE_67d0(CONCAT11(DAT_INTMEM_49,DAT_INTMEM_48),DAT_INTMEM_4a);
      DAT_INTMEM_4b = bVar3 & 7;
      DAT_INTMEM_4c = bVar3 & 0x18;
      cVar4 = FUN_CODE_67d0(CONCAT11(DAT_INTMEM_49 - (((0xfe < DAT_INTMEM_48) << 7) >> 7),
                                     DAT_INTMEM_48 + 1),DAT_INTMEM_4a);
      uVar9 = CONCAT11(DAT_INTMEM_49 - (((0xfd < DAT_INTMEM_48) << 7) >> 7),DAT_INTMEM_48 + 2);
      uVar5 = FUN_CODE_67d0(uVar9,DAT_INTMEM_4a);
      bVar6 = (byte)((ushort)uVar9 >> 8);
      if (BANK0_R7 < 0x10) {
                    /* WARNING: Could not recover jumptable at 0x5f8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ushort)(byte)(cVar4 * '\x03') + 0x5f90))(uVar5);
        return;
      }
    }
    bVar3 = BANK0_R2;
    if ((DAT_INTMEM_47 & 0x28) != 0) {
      DAT_INTMEM_50 = 1;
      DAT_INTMEM_51 = 0x10;
      uVar8 = (ushort)bVar6 << 8;
      FUN_CODE_044f(uVar8);
      DAT_INTMEM_50 = 1;
      DAT_INTMEM_51 = 0x68;
      FUN_CODE_044f(uVar8 & 0xff00);
      DAT_INTMEM_50 = 1;
      DAT_INTMEM_51 = 1;
      FUN_CODE_044f(1);
      DAT_INTMEM_50 = 1;
      DAT_INTMEM_51 = DAT_INTMEM_47;
      FUN_CODE_044f(1);
      FUN_CODE_270e();
      if ((DAT_EXTMEM_7fa7 != '\x02') && (DAT_EXTMEM_7fa7 != '\x05')) {
        BANK0_R2 = bVar3;
        FUN_CODE_421d(0x7f4b);
      }
      do {
      } while( true );
    }
  }
LAB_CODE_5707:
  do {
    bVar3 = BANK0_R2;
    uVar8 = 0xcc9b;
    if (bEXTMEMcc9b == 1) {
      bVar6 = 1;
    }
    else {
      uVar8 = 0xc808;
      bVar6 = DAT_EXTMEM_c808;
      if ((DAT_EXTMEM_c808 & 1) == 0) goto LAB_CODE_572b;
    }
    DAT_INTMEM_50 = 0x20;
    DAT_INTMEM_51 = 0x45;
    FUN_CODE_044f(uVar8 & 0xff00,bVar6);
    BANK0_R2 = bVar3;
  } while( true );
  while( true ) {
    FUN_CODE_07f4(bVar3);
    if ((char)uVar8 == '\x01') goto LAB_CODE_488a;
    if ((char)uVar8 == '\x02') break;
LAB_CODE_4fe8:
    DAT_EXTMEM_7fed = DAT_EXTMEM_d80d & 7;
    uVar8 = 0x7fed;
    BANK0_R3 = BANK0_R3 & 7;
    bVar3 = DAT_EXTMEM_7fed;
    if ((DAT_EXTMEM_7fed == 7) && (uVar8 = 0xd4cc, bVar3 = bEXTMEMd4cc, (bEXTMEMd4cc & 1) == 1))
    goto LAB_CODE_5025;
  }
  BANK0_R3 = BANK0_R3 | 4;
  goto LAB_CODE_4e4a;
LAB_CODE_5025:
  while (bEXTMEMcc9b == 1) {
    DAT_INTMEM_50 = 0x20;
    DAT_INTMEM_51 = 0x42;
    FUN_CODE_044f(0xcc00);
  }
  FUN_CODE_1465();
  DAT_EXTMEM_cc0b = 0;
  DAT_EXTMEM_7fe5 = 0;
  do {
    BANK0_R3 = BANK0_R3 & 0xf0;
    uVar8 = 0xd868;
    BANK0_R4 = BANK0_R4 & 0xf0;
    if (bEXTMEMd819 == BANK0_R4) {
      FUN_CODE_15c1();
      FUN_CODE_1403();
      BANK0_R3 = BANK0_R3 & 0xf0;
      DAT_EXTMEM_7fed = ~DAT_EXTMEM_d804 >> 4;
      DAT_EXTMEM_cc0b = 0;
      DAT_EXTMEM_7fe5 = 0;
      goto LAB_CODE_50b3;
    }
    FUN_CODE_07f4(DAT_EXTMEM_d868);
    if ((char)uVar8 == '\x01') goto LAB_CODE_488a;
  } while ((char)uVar8 != '\x02');
  FUN_CODE_15c1();
  BANK0_R3 = BANK0_R3 | 8;
  goto LAB_CODE_4e4a;
LAB_CODE_50b3:
  BANK0_R3 = BANK0_R3 & DAT_EXTMEM_7fed;
  uVar8 = 0x7fed;
  if (bEXTMEMd84e != BANK0_R4) {
    FUN_CODE_07f4(DAT_EXTMEM_7fed);
    if ((char)uVar8 == '\x01') goto LAB_CODE_488a;
    if ((char)uVar8 == '\x02') goto code_c0x50d7;
    goto LAB_CODE_50b3;
  }
  if (((bCODE00a6 >> 1 & 1) != 1) && (DAT_EXTMEM_7eaa == '\0')) {
    do {
    } while( true );
  }
  if ((bCODE00a9 >> 4 & 1) != 0) {
    FUN_CODE_04d0(bCODE00a9);
  }
  while (bEXTMEMcc9b == 2) {
    DAT_INTMEM_50 = 0x20;
    DAT_INTMEM_51 = 0x43;
    FUN_CODE_044f(0xcc00);
  }
  DAT_INTMEM_50 = 2;
  DAT_INTMEM_51 = 0x26;
  FUN_CODE_044f(0xcc00);
  DAT_EXTMEM_cc0b = 0;
  DAT_EXTMEM_7fe5 = 0;
  do {
    DAT_EXTMEM_7fed = DAT_EXTMEM_d80d & 7;
    uVar8 = 0x7fed;
    BANK0_R3 = BANK0_R3 & 7;
    bVar3 = DAT_EXTMEM_7fed;
    if ((DAT_EXTMEM_7fed == 7) && (uVar8 = 0xd4cc, bVar3 = bEXTMEMd4cc, (bEXTMEMd4cc & 1) != 0)) {
      uEXTMEMc80f = 0;
      uVar8 = 0xcc00;
      uEXTMEMcc00 = 0;
      FUN_CODE_226e();
      DAT_INTMEM_50 = 2;
      DAT_INTMEM_51 = 0x27;
      FUN_CODE_044f(uVar8 & 0xff00);
      DAT_EXTMEM_cc0b = 0;
      DAT_EXTMEM_7fe5 = 0;
      goto LAB_CODE_51aa;
    }
    FUN_CODE_07f4(bVar3);
    if ((char)uVar8 == '\x01') goto LAB_CODE_488a;
  } while ((char)uVar8 != '\x02');
  BANK0_R3 = BANK0_R3 | 0x20;
  goto LAB_CODE_4e4a;
code_c0x50d7:
  BANK0_R3 = BANK0_R3 | 0x10;
  goto LAB_CODE_4e4a;
LAB_CODE_51aa:
  DAT_EXTMEM_7fed = bEXTMEMc803 & 0x80;
  uVar8 = 0x7fed;
  if (DAT_EXTMEM_7fed == 0) {
    FUN_CODE_07f4(0);
    if ((char)uVar8 == '\x01') goto LAB_CODE_488a;
    if ((char)uVar8 == '\x02') goto code_c0x51cb;
    goto LAB_CODE_51aa;
  }
  DAT_EXTMEM_cc0b = 0;
  do {
  } while ((BANK0_R4 != 0) << 7 < '\0');
  DAT_EXTMEM_7fed = cEXTMEMd085;
  DAT_INTMEM_50 = 1;
  DAT_INTMEM_51 = 3;
  FUN_CODE_044f(0x7f00,bEXTMEMc849 >> 4);
  DAT_EXTMEM_7fed = bEXTMEMc849;
  while( true ) {
    while (uVar8 = 0xcc9b, bEXTMEMcc9b == 3) {
      DAT_INTMEM_50 = 0x20;
      DAT_INTMEM_51 = 0x44;
      FUN_CODE_044f(0xcc00);
    }
    FUN_CODE_2369();
    if ((char)uVar8 != '\0') goto LAB_CODE_488a;
    bVar1 = (DAT_EXTMEM_7fed & 1) == 0;
    bVar3 = BANK0_R3 & 0xf;
    if (((bVar1 & bEXTMEMc803) != 0) ||
       (bVar1 = (DAT_EXTMEM_7fed & 2) == 0, (bVar1 & bEXTMEMc840) != 0)) break;
    BANK0_R3 = BANK0_R3 & 3;
    bVar1 = (DAT_EXTMEM_7fed & 4) == 0;
    bVar3 = BANK0_R3;
    if (((bVar1 & bEXTMEMc841) != 0) ||
       (bVar1 = (DAT_EXTMEM_7fed & 8) == 0, bVar1 && cEXTMEMd085 != '?')) break;
  }
  BANK0_R3 = bVar3;
  FUN_CODE_270e(bVar1);
  BANK0_R3 = BANK0_R3 | 0x80;
  goto LAB_CODE_4e4a;
code_c0x51cb:
  BANK0_R3 = BANK0_R3 | 0x40;
  goto LAB_CODE_4e4a;
LAB_CODE_572b:
  DAT_INTMEM_47 = DAT_EXTMEM_7f93 & bEXTMEMcc07 & param_1;
  bEXTMEM7ffd = DAT_EXTMEM_ca40;
  bEXTMEM7ffe = DAT_EXTMEM_ca41;
  BANK0_R1 = BANK0_R1 & 0xf0;
  DAT_EXTMEM_7fed = ~DAT_EXTMEM_d804 >> 4;
  param_1 = DAT_EXTMEM_7f93;
  BANK0_R2 = bVar3;
  if ((DAT_EXTMEM_7fb4 != '\0') && (BANK0_R0 = BANK0_R0 & DAT_EXTMEM_7fed, bEXTMEMd84e == BANK0_R1))
  {
    if (((bCODE00a6 >> 1 & 1) == 0) && (DAT_EXTMEM_7eaa == '\0')) {
      DAT_EXTMEM_7eb8 = DAT_EXTMEM_7eb8 + '\x01';
      if (((2 < BANK0_R0) << 7 < '\0') && (BANK0_R0 < 6)) {
                    /* WARNING: Could not recover jumptable at 0x57d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ushort)(byte)(DAT_EXTMEM_7eb9 * '\x03') + 0x57d7))(DAT_EXTMEM_7fed);
        return;
      }
    }
    else {
      DAT_EXTMEM_7fb4 = '\0';
      DAT_EXTMEM_7fed = DAT_EXTMEM_d804 & 0xf;
      uEXTMEMcc00 = 0;
      DAT_EXTMEM_7fab = 1;
      DAT_EXTMEM_7fa9 = 1;
      DAT_EXTMEM_7faa = 0;
      BANK1_R2 = DAT_EXTMEM_7f7e;
      BANK1_R3 = DAT_EXTMEM_7f7d;
      BANK1_R4 = DAT_EXTMEM_7f7c;
      BANK1_R5 = 0;
      bEXTMEMd80b = DAT_EXTMEM_7fed;
      FUN_CODE_26be(0x7f01);
      BANK0_R2 = bVar3;
      if ((bCODE00a9 >> 4 & 1) != 0) {
        FUN_CODE_04d0(bCODE00a9);
        BANK0_R2 = bVar3;
      }
    }
  }
  goto LAB_CODE_59e3;
}



/* =========================================================
 * CODE:586a  FUN_CODE_586a  size=1625
 * ========================================================= */

/* WARNING: Removing unreachable block (CODE,0x50a2) */
/* WARNING: Removing unreachable block (CODE,0x6438) */
/* WARNING: Removing unreachable block (CODE,0x576b) */

void FUN_CODE_586a(byte param_1)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  undefined1 uVar4;
  byte bVar5;
  byte bVar6;
  ushort uVar7;
  undefined2 uVar8;
  
  if ((100 < BANK0_R0) << 7 < '\0') {
    DAT_EXTMEM_7fed = DAT_EXTMEM_d804 & 0xf;
    BANK0_R0 = BANK0_R0 & 0xf & DAT_EXTMEM_7fed;
    if (DAT_EXTMEM_d80d == BANK0_R1) {
      DAT_EXTMEM_7eb9 = '\x03';
      DAT_EXTMEM_7eb8 = '\0';
    }
  }
LAB_CODE_59e3:
  bVar3 = BANK0_R2;
  if (DAT_EXTMEM_7fb5 != '\0') {
    BANK0_R0 = BANK0_R0 & 0xf0;
    param_1 = ~DAT_EXTMEM_d804 & 0xf0 & bEXTMEMd819;
    DAT_INTMEM_4e = ~DAT_EXTMEM_d804 & 0xf0;
    DAT_INTMEM_4f = 0;
    DAT_EXTMEM_7fed = param_1;
    if (param_1 == DAT_INTMEM_4e) {
      FUN_CODE_15c1(0xff);
    }
  }
  uVar7 = 0x7fbe;
  if (DAT_EXTMEM_7fbe == '\0') goto LAB_CODE_5aa1;
  if ((bCODE00ac != 0) && (DAT_EXTMEM_7ea7 == '\0')) {
    DAT_EXTMEM_7ea7 = '\x01';
  }
  if (DAT_EXTMEM_7ea7 != '\0') {
    DAT_EXTMEM_7ea6 = DAT_EXTMEM_7ea6 + 1;
  }
  if ((DAT_EXTMEM_7f9d == 0) && (DAT_EXTMEM_7f78 == '\0')) {
    uVar4 = 0x7f;
    bVar5 = 0;
    if (DAT_EXTMEM_7fbd != '\0') goto LAB_CODE_5a6d;
  }
  else {
LAB_CODE_5a6d:
    uVar4 = 0;
    bVar5 = bCODE00ab;
    if ((bCODE00ab >> 6 & 1) != 1) {
      uVar7 = 0;
      uVar4 = 0;
      bVar5 = DAT_EXTMEM_7ea6;
      if (BANK0_R0 <= bCODE00ac) goto LAB_CODE_5aa1;
    }
  }
  BANK0_R2 = bVar3;
  FUN_CODE_421d(CONCAT11(uVar4,0x46),bVar5);
  DAT_EXTMEM_7fbe = '\0';
  bEXTMEMcc09 = 0;
  DAT_EXTMEM_7ea7 = '\0';
  uVar7 = 0x7ea6;
  DAT_EXTMEM_7ea6 = 0;
LAB_CODE_5aa1:
  if ((DAT_INTMEM_47 == 0) && (uVar7 = 0x7ffd, bEXTMEM7ffd == 0)) {
    if ((DAT_EXTMEM_7fa3 != '\0') && ((DAT_EXTMEM_7fa2 == '\x03' || (DAT_EXTMEM_7fa2 == '\x04')))) {
      DAT_INTMEM_50 = 4;
      DAT_INTMEM_51 = 0x1b;
      BANK0_R2 = bVar3;
      FUN_CODE_044f(0x7f00,0);
      if (DAT_EXTMEM_7f87 != '\0') {
        DAT_EXTMEM_7fe1 = '\x01';
        DAT_EXTMEM_7fe2 = '\x01';
        DAT_EXTMEM_7fe3 = '\x01';
        DAT_EXTMEM_7fe4 = '\x01';
        DAT_EXTMEM_7ffa = '\x01';
        for (bVar5 = 0; bVar5 < BANK0_R4; bVar5 = bVar5 + 1) {
          BANK0_R6 = BANK0_R6 & 4;
          *(bool *)CONCAT11('\x7f' - (((0x1e < bVar5) << 7) >> 7),bVar5 - 0x1f) =
               *(char *)CONCAT11('\x7f' - (((0x7f < bVar5) << 7) >> 7),bVar5 + 0x80) != '\0';
        }
        if ((DAT_EXTMEM_7fe1 == '\0') || (DAT_EXTMEM_7fe2 == '\0')) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if ((bVar1) && (DAT_EXTMEM_7fe3 != '\0')) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if ((bVar1) && (DAT_EXTMEM_7fe4 != '\0')) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (DAT_EXTMEM_7f7d == '\x10') {
          bVar5 = 2;
        }
        else {
          bVar5 = DAT_EXTMEM_7f7d == '\b';
        }
        bVar6 = DAT_EXTMEM_7f80 & 3;
        bVar5 = *(byte *)CONCAT11('\x7f' - (((0x69 < bVar5) << 7) >> 7),bVar5 + 0x96) & 3;
        if (((bVar6 < BANK0_R3) && (bVar1)) || (bVar5 == BANK0_R4)) {
          DAT_EXTMEM_7f9a = bVar6 << 4 | bVar6;
        }
        else {
          DAT_EXTMEM_7ffa = '\0';
          DAT_EXTMEM_7f9a = bVar5 << 4 | bVar5;
        }
        DAT_EXTMEM_7fe1 = '\x01';
        DAT_EXTMEM_7fe2 = 1;
        DAT_EXTMEM_7fe3 = '\x01';
        DAT_EXTMEM_7fe4 = '\x01';
        for (bVar5 = 0; bVar6 = DAT_EXTMEM_7f9a, bVar5 < BANK0_R4; bVar5 = bVar5 + 1) {
          BANK0_R6 = BANK0_R6 & 0x20;
          *(bool *)CONCAT11('\x7f' - (((0x1e < bVar5) << 7) >> 7),bVar5 - 0x1f) =
               *(char *)CONCAT11('\x7f' - (((0x7f < bVar5) << 7) >> 7),bVar5 + 0x80) != '\0';
        }
        if ((DAT_EXTMEM_7fe1 == '\0') || (DAT_EXTMEM_7fe2 == 0)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if ((bVar1) && (DAT_EXTMEM_7fe3 != '\0')) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if ((bVar1) && (DAT_EXTMEM_7fe4 != '\0')) {
          DAT_EXTMEM_7fe3 = '\x01';
        }
        else {
          DAT_EXTMEM_7fe3 = '\0';
        }
        DAT_EXTMEM_7fed = (DAT_EXTMEM_7f80 & 0x18) >> 1;
        DAT_EXTMEM_7fe4 =
             *(byte *)CONCAT11('\x7f' - (((0x69 < DAT_EXTMEM_7fe2) << 7) >> 7),
                               DAT_EXTMEM_7fe2 + 0x96) & 0xc;
        if (((DAT_EXTMEM_7fed < BANK0_R3) && (DAT_EXTMEM_7fe3 == '\x01')) ||
           (DAT_EXTMEM_7fe4 == BANK0_R4)) {
          DAT_EXTMEM_7f9a = DAT_EXTMEM_7fed << 4 | DAT_EXTMEM_7fed;
        }
        else {
          DAT_EXTMEM_7ffa = '\0';
          DAT_EXTMEM_7f9a = DAT_EXTMEM_7fe4 << 4 | DAT_EXTMEM_7fe4;
        }
        BANK0_R3 = BANK0_R3 | bVar6;
        if (DAT_EXTMEM_7ffa == '\0') {
          DAT_EXTMEM_7f85 = 1;
        }
      }
      if (DAT_EXTMEM_7fa2 == '\x04') {
        DAT_EXTMEM_7fe2 = DAT_EXTMEM_7f80;
        BANK0_R3 = BANK0_R3 & 4;
        BANK0_R4 = BANK0_R4 & 0x20;
        BANK0_R5 = BANK0_R5 & 3;
        bVar5 = ((DAT_EXTMEM_7f80 & 0x18) >> 4) << 1 | (DAT_EXTMEM_7f80 & 8) >> 3;
        DAT_EXTMEM_7fb8 = '\0';
        if ((DAT_EXTMEM_7fba == '\0') || (DAT_EXTMEM_7f80 != 0)) {
          bVar6 = DAT_EXTMEM_7f80;
          if (DAT_EXTMEM_7f87 == '\0') {
            DAT_EXTMEM_7fed = DAT_EXTMEM_7f80 & 3;
            BANK0_R3 = BANK0_R3 | DAT_EXTMEM_7f9a & 0xcc;
            DAT_EXTMEM_7f9a = DAT_EXTMEM_7fed << 4 | DAT_EXTMEM_7fed;
          }
        }
        else {
          DAT_EXTMEM_7fb8 = '\x01';
          bVar6 = 1;
        }
        if (((DAT_EXTMEM_7fb9 == '\0') || (DAT_EXTMEM_7f80 != 0)) ||
           ((DAT_EXTMEM_7fbb == '\0' && ((DAT_EXTMEM_7fbc == '\0' && (DAT_EXTMEM_7fb8 != '\0'))))))
        {
          if (DAT_EXTMEM_7f87 == '\0') {
            DAT_EXTMEM_7fed = (DAT_EXTMEM_7f80 & 0x18) >> 1;
            BANK0_R3 = BANK0_R3 | DAT_EXTMEM_7f9a & 0x33;
            DAT_EXTMEM_7f9a = DAT_EXTMEM_7fed << 4 | DAT_EXTMEM_7fed;
          }
        }
        else {
          bVar5 = bVar5 + 1;
          DAT_EXTMEM_7fb8 = '\x01';
        }
        bVar6 = bVar5 << 2 | bVar6;
        DAT_EXTMEM_7f9b = bVar6 | bVar6 << 4;
      }
      DAT_EXTMEM_7fa3 = '\0';
      DAT_EXTMEM_7f87 = '\0';
    }
    uEXTMEMcc2d = 0xfe;
    BANK0_R2 = bVar3;
  }
  else {
    if ((DAT_INTMEM_47 & 1) != 0) {
      BANK0_R2 = bVar3;
      FUN_CODE_270e();
LAB_CODE_488a:
      while( true ) {
        while( true ) {
          DAT_INTMEM_50 = 1;
          DAT_INTMEM_51 = 1;
          FUN_CODE_044f(uVar7 & 0xff00);
          if ((bCODE00a7 & 1) != 0) {
            FUN_CODE_05db(0,bCODE00a7);
          }
          cEXTMEMcc99 = cEXTMEMcc99 + '\x01';
          BANK0_R3 = BANK0_R3 & 0xfe;
          DAT_EXTMEM_d815 = 0;
          while ((((bEXTMEMc84b & 1) != 0 && (uVar7 = 0xcc9b, bVar3 = bEXTMEMcc9b, bEXTMEMcc9b < 10)
                  ) || (uVar7 = 0xc808, bVar3 = DAT_EXTMEM_c808, (DAT_EXTMEM_c808 & 1) != 0))) {
            DAT_INTMEM_50 = 0x20;
            DAT_INTMEM_51 = 0x40;
            FUN_CODE_044f(uVar7 & 0xff00,bVar3);
          }
          if ((bEXTMEMd86a >> 4 & 1) != 0) {
            uEXTMEMca10 = 3;
            uEXTMEMca15 = 0x20;
            uEXTMEMca14 = 7;
          }
          if ((bCODE00a6 >> 6 & 1) != 0) {
            uEXTMEMca18 = uCODE00aa;
            uEXTMEMca19 = 0xff;
          }
          uEXTMEMcc0c = 199;
          DAT_EXTMEM_cc0b = 0;
          DAT_EXTMEM_c804 = 0;
          DAT_EXTMEM_c84a = '\x02';
          if ((bEXTMEMd86a >> 3 & 1) == 0) {
            uEXTMEMc8a0 = 0xe;
          }
          else {
            uEXTMEMd8a0 = 0xd;
          }
          uEXTMEMd835 = 2;
          BANK0_R3 = BANK0_R3 & 0xfc;
          DAT_INTMEM_50 = 0x20;
          DAT_INTMEM_51 = 1;
          FUN_CODE_044f(0xc800);
          DAT_EXTMEM_7f84 = DAT_EXTMEM_c801 & 0x80;
          if (DAT_EXTMEM_7f84 == 0) {
            uEXTMEMd254 = 0xff;
            uEXTMEMd255 = 0xff;
            BANK0_R3 = BANK0_R3 & 0xdf;
            uEXTMEMd238 = 4;
          }
          DAT_EXTMEM_7fa4 = bEXTMEMcc8e & 4;
          DAT_EXTMEM_7f94 = uEXTMEMcc8c;
          uEXTMEM7f95 = uEXTMEMcc8d;
          DAT_EXTMEM_7f96 = uEXTMEMc828;
          uEXTMEM7f97 = uEXTMEMc829;
          uEXTMEM7f98 = uEXTMEMc82a;
          if (cEXTMEMcc92 == '\0') {
            DAT_EXTMEM_7fa6 = '\x02';
          }
          else {
            BANK0_R3 = BANK0_R3 & 0x7f;
            DAT_EXTMEM_7fa6 = cEXTMEMcc92;
          }
          DAT_EXTMEM_7fa5 = uEXTMEMcc91;
          uEXTMEMcc93 = 6;
          if ((DAT_EXTMEM_7f84 != 0) && ((bEXTMEMc84b >> 3 & 1) != 1)) {
            BANK0_R3 = BANK0_R3 & 0xfb;
          }
          BANK0_R3 = BANK0_R3 & 0xb;
          if ((bCODE00a9 >> 6 & 1) == 0) {
            bEXTMEMd609 = bCODE00a9;
            if ((char)bCODE00a9 < '\0') {
              BANK0_R3 = 0x23;
            }
            else {
              BANK0_R3 = 3;
            }
          }
          else {
            bEXTMEMd609 = 2;
          }
          if ((bCODE00a9 >> 6 & 1) == 0) {
            bEXTMEMd689 = bCODE00a9;
            if ((char)bCODE00a9 < '\0') {
              BANK0_R3 = 0x23;
            }
            else {
              BANK0_R3 = 3;
            }
          }
          else {
            bEXTMEMd689 = 2;
          }
          if ((bCODE00a9 >> 6 & 1) == 0) {
            bEXTMEMd709 = bCODE00a9;
            if ((char)bCODE00a9 < '\0') {
              BANK0_R3 = 0x23;
            }
            else {
              BANK0_R3 = 3;
            }
          }
          else {
            bEXTMEMd709 = 2;
          }
          if ((bCODE00a9 >> 6 & 1) == 0) {
            bEXTMEMd789 = bCODE00a9;
            if ((char)bCODE00a9 < '\0') {
              BANK0_R3 = 0x23;
            }
            else {
              BANK0_R3 = 3;
            }
          }
          else {
            bEXTMEMd789 = 2;
          }
          if ((char)bCODE00a9 < '\0') {
            uEXTMEMd606 = 2;
            uEXTMEMd686 = 2;
            uEXTMEMd706 = 2;
            uEXTMEMd786 = 2;
          }
          BANK0_R3 = BANK0_R3 & 0xfd | 1;
          bEXTMEMd830 = 1;
          DAT_INTMEM_50 = 0x10;
          DAT_INTMEM_51 = 0x70;
          FUN_CODE_044f(0xd800);
          DAT_EXTMEM_cc0b = 0;
          do {
          } while ((bEXTMEMd830 >> 1 & 1) != 1);
          BANK0_R3 = BANK0_R3 & 0x1c;
          if (DAT_EXTMEM_c850 != 1) break;
          BANK0_R3 = 0;
          uVar7 = 0xd830;
          FUN_CODE_270e();
        }
        uVar7 = 0xd86d;
        FUN_CODE_1603();
        if ((char)uVar7 == '\0') break;
        FUN_CODE_270e();
      }
      BANK0_R3 = BANK0_R3 & 0xfe;
      DAT_EXTMEM_7f7d = '\x10';
      FUN_CODE_0cfa(0x7f01);
      uEXTMEMd802 = 2;
      uEXTMEMce06 = 0x10;
      uEXTMEMd801 = 0x81;
      uEXTMEMd803 = 0xf0;
      bEXTMEMd830 = 0;
      DAT_EXTMEM_7f7e = 4;
      FUN_CODE_2820(0x7f00);
      uVar7 = 0x7fe6;
      if (DAT_EXTMEM_7fe6 == '\0') {
        FUN_CODE_1ac6(0);
        uVar7 = uVar7 & 0xff00;
        FUN_CODE_1b66();
        if ((char)uVar7 == '\0') {
          uEXTMEMd84f = 0;
          uVar7 = 0xd802;
          FUN_CODE_1b66();
          if ((char)uVar7 == '\0') {
            FUN_CODE_1f1a();
            goto LAB_CODE_4c29;
          }
          FUN_CODE_270e();
        }
        else {
          FUN_CODE_270e();
        }
        goto LAB_CODE_488a;
      }
LAB_CODE_4c29:
      DAT_EXTMEM_7fe6 = '\x01';
      uEXTMEMd850 = 0xf;
      uEXTMEMd852 = 0x1f;
      uEXTMEMd853 = 0xff;
      DAT_EXTMEM_7fe1 = cEXTMEMd607;
      DAT_EXTMEM_7fe2 = bEXTMEMd687;
      DAT_EXTMEM_7fe3 = cEXTMEMd707;
      DAT_EXTMEM_7fe4 = bEXTMEMd787;
      uEXTMEMd801 = 0;
      uEXTMEMd810 = 0xff;
      bEXTMEMd80b = 0;
      uEXTMEMd80a = 0;
      DAT_EXTMEM_d804 = 0;
      uEXTMEMd85d = 0xac;
      uEXTMEMd85e = 0xd;
      DAT_INTMEM_50 = 1;
      DAT_INTMEM_51 = 0x1e;
      FUN_CODE_044f(0xd800);
      DAT_EXTMEM_cc0b = 0;
      cEXTMEMcc90 = '\0';
      while ((bEXTMEMcc07 & 1) == 1) {
        if (((bCODE00a7 >> 4 & 1) != 0) && (DAT_EXTMEM_7f84 == 0)) {
          DAT_INTMEM_50 = 0x20;
          DAT_INTMEM_51 = 0x53;
          FUN_CODE_044f(0x7f00,0);
          uEXTMEMd254 = 0xff;
          uEXTMEMd255 = 0xff;
          BANK0_R3 = BANK0_R3 & 0xdf;
          uEXTMEMd238 = 4;
        }
        if (BANK0_R4 <= DAT_EXTMEM_cc0b) {
          cEXTMEMcc90 = cEXTMEMcc90 + '\x01';
          DAT_EXTMEM_cc0b = 0;
          if (cEXTMEMcc90 == '\n') {
            BANK0_R3 = BANK0_R3 & 0xfb;
          }
          if ((cEXTMEMcc90 == 'd') && ((bCODE00a7 & 1) == 1)) {
            FUN_CODE_05db(0xff,bCODE00a7,uEXTMEMc848);
          }
        }
      }
      DAT_INTMEM_50 = 1;
      DAT_INTMEM_51 = 0x2c;
      FUN_CODE_044f(0xcc00,bEXTMEMcc07);
      if ((bCODE00a7 & 1) != 0) {
        FUN_CODE_05db(0,bCODE00a7);
      }
      if ((char)bCODE00a7 < '\0') {
        FUN_CODE_056c(bCODE00a7);
      }
      while ((((bEXTMEMc84b & 1) != 0 && (uVar7 = 0xcc9b, bVar3 = bEXTMEMcc9b, bEXTMEMcc9b < 0xb))
             || (uVar7 = 0xc808, bVar3 = DAT_EXTMEM_c808, (DAT_EXTMEM_c808 & 1) != 0))) {
        DAT_INTMEM_50 = 0x20;
        DAT_INTMEM_51 = 0x41;
        FUN_CODE_044f(uVar7 & 0xff00,bVar3);
      }
      DAT_EXTMEM_7f7d = '\0';
      DAT_EXTMEM_7ffc = 0;
      DAT_EXTMEM_7fbe = '\0';
      DAT_EXTMEM_7fbf = '\0';
      DAT_EXTMEM_7fbd = '\0';
      DAT_EXTMEM_7fb5 = '\0';
      DAT_EXTMEM_7fb4 = '\0';
      DAT_EXTMEM_7eb9 = '\0';
      DAT_EXTMEM_7fab = 0;
      DAT_EXTMEM_7fa9 = 0;
      DAT_EXTMEM_7faa = 0;
      DAT_EXTMEM_7fb3 = 0;
      BANK0_R3 = BANK0_R3 | 2;
      if ((DAT_EXTMEM_c800 & 1) == 1) {
        DAT_EXTMEM_cc0b = 0;
        DAT_INTMEM_50 = 1;
        DAT_INTMEM_51 = 2;
        FUN_CODE_044f(0xcc00,DAT_EXTMEM_c800);
        if (DAT_INTMEM_4d == '\0') {
          if ((bEXTMEMc84b >> 2 & 1) == 1) {
            DAT_INTMEM_50 = 0xeb;
            FUN_CODE_2389(0xc801,bEXTMEMc84b);
          }
          else {
            DAT_INTMEM_50 = uEXTMEMc848;
            FUN_CODE_2389(0xc801,bEXTMEMc84b);
          }
        }
        DAT_INTMEM_4d = '\x01';
        uEXTMEMcc0c = 99;
        DAT_EXTMEM_c804 = 0x80;
        uEXTMEMca5a = 0;
        BANK0_R3 = BANK0_R3 | 4;
        DAT_EXTMEM_7f7e = 4;
        uEXTMEMd836 = 8;
        FUN_CODE_11e5();
        bEXTMEMcc95 = 0;
        uEXTMEMcc96 = 0;
LAB_CODE_4e4a:
        do {
          FUN_CODE_2242();
          bEXTMEMcc95 = bEXTMEMcc95 + 1;
          if (((bCODE00a6 >> 2 & 1) != 1) && ((bEXTMEMcc95 & 0xf) == 0)) {
            FUN_CODE_0860(bEXTMEMcc95);
          }
          DAT_EXTMEM_d602 = 0x10;
          DAT_EXTMEM_d603 = 0x2b;
          DAT_EXTMEM_d682 = 0x10;
          DAT_EXTMEM_d683 = 0x2b;
          DAT_EXTMEM_d702 = 0x10;
          DAT_EXTMEM_d703 = 0x2b;
          DAT_EXTMEM_d782 = 0x10;
          DAT_EXTMEM_d783 = 0x2b;
          DAT_INTMEM_50 = 2;
          DAT_INTMEM_51 = 0x25;
          FUN_CODE_044f(0xd700);
          uEXTMEMd40f = 3;
          BANK0_R3 = BANK0_R3 & 0xfe;
          DAT_EXTMEM_cc0b = 0;
          DAT_EXTMEM_7fe5 = 0;
          do {
            uVar7 = 0xd4cc;
            if ((bEXTMEMd4cc & 1) == 1) {
              if (((bEXTMEMd4cc >> 1 & 1) == 0) || (cEXTMEMd4b6 != '\x06')) {
                BANK0_R3 = BANK0_R3 | 2;
                goto LAB_CODE_4e4a;
              }
              FUN_CODE_129a();
              if (((DAT_EXTMEM_d4b5 < 9) << 7 < '\0') ||
                 ((DAT_EXTMEM_d4b5 == 9 && (DAT_EXTMEM_d4b4 < 0xc4)))) {
                uEXTMEMd60c = 2;
                uEXTMEMd68c = 2;
                uEXTMEMd70c = 2;
                uEXTMEMd78c = 2;
              }
              else if (((DAT_EXTMEM_d4b5 < 0x13) << 7 < '\0') ||
                      ((DAT_EXTMEM_d4b5 == 0x13 && (DAT_EXTMEM_d4b4 < 0x88)))) {
                uEXTMEMd60c = 1;
                uEXTMEMd68c = 1;
                uEXTMEMd70c = 1;
                uEXTMEMd78c = 1;
              }
              else {
                uEXTMEMd60c = 0;
                uEXTMEMd68c = 0;
                uEXTMEMd70c = 0;
                uEXTMEMd78c = 0;
              }
              uVar7 = 0xd707;
              FUN_CODE_2820(0xd707);
              DAT_INTMEM_50 = 2;
              DAT_INTMEM_51 = 0x14;
              uVar7 = uVar7 & 0xff00;
              FUN_CODE_044f(uVar7);
              DAT_INTMEM_50 = 2;
              DAT_INTMEM_51 = 0x68;
              FUN_CODE_044f(uVar7 & 0xff00);
              DAT_INTMEM_50 = 2;
              DAT_INTMEM_51 = 2;
              FUN_CODE_044f(1);
              DAT_INTMEM_51 = DAT_EXTMEM_d4b5;
              DAT_INTMEM_50 = 2;
              FUN_CODE_044f(0xd401);
              DAT_INTMEM_51 = DAT_EXTMEM_d4b4;
              DAT_INTMEM_50 = 2;
              FUN_CODE_044f(0xd401);
              DAT_EXTMEM_cc0b = 0;
              DAT_EXTMEM_7fe5 = 0;
              goto LAB_CODE_4fe8;
            }
            FUN_CODE_07f4(bEXTMEMd4cc);
            if ((char)uVar7 == '\x01') goto LAB_CODE_488a;
          } while ((char)uVar7 != '\x02');
          BANK0_R3 = BANK0_R3 | 1;
        } while( true );
      }
      DAT_INTMEM_4d = '\0';
      if ((bCODE00a7 >> 5 & 1) == 1) {
        BANK1_R2 = 0;
        BANK1_R3 = '\0';
        BANK1_R4 = 0;
        BANK1_R5 = 0;
        FUN_CODE_26be(0xc,bCODE00a7);
        bEXTMEMcc09 = 0;
        do {
          if ((bEXTMEMcc07 >> 2 & 1) == 1) break;
        } while (BANK0_R3 < 0xf1);
        if (BANK0_R3 < 0xf1) {
          DAT_INTMEM_50 = 0x20;
          DAT_INTMEM_51 = 6;
          FUN_CODE_044f(0xcc00,0);
          DAT_INTMEM_48 = 0x35;
          DAT_INTMEM_49 = -0x34;
          DAT_INTMEM_4a = 0;
          cVar2 = FUN_CODE_67d0(0xcc37,0);
          uVar4 = cVar2 != '\0';
          cVar2 = FUN_CODE_67d0(CONCAT11(DAT_INTMEM_49 - (((0xfe < DAT_INTMEM_48) << 7) >> 7),
                                         DAT_INTMEM_48 + 1),DAT_INTMEM_4a);
          BANK0_R7 = BANK0_R7 & 0xf;
          if (cVar2 == '\f') {
            DAT_EXTMEM_0120 = uVar4;
          }
        }
        else {
          DAT_EXTMEM_0120 = 0;
        }
      }
      BANK0_R0 = BANK0_R0 & 0xfb;
      DAT_INTMEM_50 = uEXTMEMc848;
      FUN_CODE_2389(CONCAT11(200,uEXTMEMc848));
      bVar3 = BANK0_R0;
      BANK0_R0 = BANK0_R0 | 4;
      DAT_EXTMEM_7fb6 = '\0';
      uVar4 = 0x7f;
      bVar5 = DAT_EXTMEM_7f84;
      if (DAT_EXTMEM_7f84 == 0) {
        uVar4 = 0xd2;
        BANK0_R0 = bVar3 & 0xf | 4;
        bVar5 = DAT_EXTMEM_d25c;
        if (2 < BANK0_R0) goto LAB_CODE_53a2;
      }
      else {
LAB_CODE_53a2:
        BANK1_R2 = 0;
        BANK1_R3 = '\0';
        BANK1_R4 = 0;
        BANK1_R5 = 0;
        FUN_CODE_26be(CONCAT11(uVar4,9),bVar5);
        bEXTMEMcc09 = 0;
        do {
          if ((bEXTMEMcc07 >> 2 & 1) == 1) break;
        } while (BANK0_R0 < 0xf1);
        if (BANK0_R0 < 0xf1) {
          DAT_INTMEM_48 = 0x35;
          DAT_INTMEM_49 = -0x34;
          DAT_INTMEM_4a = 0;
          bVar3 = FUN_CODE_67d0(0xcc36,0);
          if ((bVar3 & 0xf) == 9) {
            cVar2 = FUN_CODE_67d0(CONCAT11(DAT_INTMEM_49 - (((0xfd < DAT_INTMEM_48) << 7) >> 7),
                                           DAT_INTMEM_48 + 2),DAT_INTMEM_4a);
            DAT_EXTMEM_7fe7 = cVar2 != '\0';
          }
          else {
            DAT_EXTMEM_7fe7 = 0;
          }
        }
        else {
          DAT_EXTMEM_7fe7 = 0;
        }
      }
      BANK0_R2 = BANK0_R2 | 0x80;
      uEXTMEMcc0c = 99;
      uEXTMEMca5a = 0;
      DAT_INTMEM_50 = 1;
      DAT_INTMEM_51 = 4;
      uVar4 = 0xca;
      FUN_CODE_044f(0xca00);
      BANK1_R2 = 0;
      BANK1_R3 = '\0';
      BANK1_R4 = 0;
      BANK1_R5 = 1;
      FUN_CODE_26be(CONCAT11(uVar4,8));
      if (DAT_EXTMEM_7f84 == 0) {
        bVar3 = BANK0_R2;
        if ((((bEXTMEMd252 >> 5 & 1) != 1) && ((bEXTMEMd218 & 1) != 0)) &&
           (bVar3 = BANK0_R2 & 0xf, 1 < (BANK0_R2 & 0xf))) {
          bVar3 = BANK0_R2 & 0xb;
        }
        BANK0_R2 = bVar3;
        if ((DAT_EXTMEM_d25c & 0xf) == 0) {
          BANK0_R2 = BANK0_R2 | 0x40;
        }
        else {
          BANK0_R2 = BANK0_R2 & 0xbf;
        }
        bVar3 = DAT_EXTMEM_d25d & 0xf;
        FUN_CODE_22d9();
        if (((bEXTMEMd252 >> 5 & 1) == 1) ||
           ((((DAT_EXTMEM_d25c & 0xf) != 0 || ((bEXTMEMd252 >> 3 & 1) != 1)) &&
            (((DAT_EXTMEM_d25c & 0xf) == 0 || ((bEXTMEMd252 >> 2 & 1) == 0)))))) {
          DAT_EXTMEM_7ffc = false;
        }
        else {
          DAT_EXTMEM_7ffc = true;
          if ((char)DAT_EXTMEM_d25d < '\0') {
            uEXTMEMcaa5 = 2;
          }
        }
        DAT_EXTMEM_7f7f = bVar3;
        if ((DAT_EXTMEM_d25c & 0xf) == 0) {
          DAT_EXTMEM_caa3 = 0;
        }
        else {
          DAT_EXTMEM_caa3 = 7;
          BANK0_R2 = BANK0_R2 | 0x20;
        }
      }
      else {
        DAT_EXTMEM_7f7f = 0x10;
        BANK0_R2 = BANK0_R2 & 8;
        DAT_EXTMEM_7ffc = bEXTMEMc84b == 0;
        uEXTMEMcaa5 = 2;
      }
      BANK0_R2 = BANK0_R2 | 0xd1;
      if (((bool)DAT_EXTMEM_7ffc != false) &&
         (BANK0_R2 = BANK0_R2 & 0xfe | 0x78, DAT_EXTMEM_7f84 == 0)) {
        bEXTMEMd208 = bEXTMEMd208 & 0xf7 | 4;
      }
      bVar3 = BANK0_R2;
      DAT_EXTMEM_7fa2 = '\0';
      DAT_EXTMEM_7f76 = '\0';
      DAT_EXTMEM_7f77 = '\0';
      DAT_EXTMEM_7f78 = '\0';
      DAT_EXTMEM_7f79 = '\0';
      DAT_EXTMEM_7f7a = '\0';
      DAT_EXTMEM_7f7b = 0;
      uEXTMEM7f83 = 0;
      uEXTMEM7f82 = 0;
      uEXTMEM7f81 = 0;
      DAT_EXTMEM_7f80 = 0;
      DAT_EXTMEM_7ffa = '\0';
      DAT_EXTMEM_7f86 = 0;
      DAT_EXTMEM_7f87 = '\0';
      DAT_EXTMEM_7f7e = 0;
      DAT_EXTMEM_7f7c = 0;
      uEXTMEM7f8f = 0;
      DAT_EXTMEM_7f8e = 0;
      uEXTMEM7f91 = 0;
      DAT_EXTMEM_7f90 = 0;
      DAT_EXTMEM_7f92 = 0;
      DAT_EXTMEM_7f93 = 0xe7;
      param_1 = 0xe7;
      DAT_EXTMEM_7f99 = 0;
      DAT_EXTMEM_7f9a = 0;
      DAT_EXTMEM_7f9b = 0;
      DAT_EXTMEM_7f9d = 0;
      DAT_EXTMEM_7f9c = 0;
      DAT_EXTMEM_7f85 = 0;
      DAT_EXTMEM_7f9e = 0;
      DAT_EXTMEM_7f9f = '\0';
      DAT_EXTMEM_7fa0 = '\0';
      DAT_EXTMEM_7fa1 = 0;
      DAT_EXTMEM_7fbc = '\0';
      DAT_EXTMEM_7fe0 = '\0';
      DAT_EXTMEM_7fa3 = '\0';
      DAT_EXTMEM_7fb8 = '\0';
      DAT_EXTMEM_7fec = 0;
      BANK1_R0 = '\0';
      BANK1_R1 = '\0';
      DAT_EXTMEM_7ff2 = 0;
      DAT_EXTMEM_7ff3 = '\0';
      DAT_EXTMEM_7ff4 = '\0';
      DAT_EXTMEM_7ffb = '\0';
      DAT_EXTMEM_7ff9 = 0;
      DAT_EXTMEM_7fff = 0;
      DAT_EXTMEM_7ff1 = 0;
      DAT_EXTMEM_7fdd = 0;
      DAT_EXTMEM_7fb7 = 0;
      DAT_EXTMEM_7eab = 0;
      DAT_EXTMEM_7eac = 0;
      DAT_EXTMEM_7ead = 0;
      DAT_EXTMEM_7ea6 = 0;
      DAT_EXTMEM_7ea7 = '\0';
      FUN_CODE_1f5c();
      DAT_EXTMEM_7fb9 = DAT_EXTMEM_c84a == '\0';
      DAT_EXTMEM_7fba = DAT_EXTMEM_c84a == '\0';
      BANK0_R0 = 0;
      DAT_EXTMEM_7fbb = DAT_EXTMEM_c84a != '\0';
      DAT_EXTMEM_7f75 = bEXTMEMcc8e & 1;
      BANK0_R2 = bVar3;
      if (DAT_EXTMEM_7f75 == 0) {
        DAT_EXTMEM_caa9 = 0;
      }
      else {
        DAT_EXTMEM_caa9 = 0xff;
      }
      goto LAB_CODE_5707;
    }
    if ((bEXTMEM7ffd >> 4 & 1) == 1) {
      if (DAT_EXTMEM_7fe0 == '\0') {
        BANK0_R2 = bVar3;
        FUN_CODE_41f1(0);
        if (DAT_EXTMEM_7f79 != '\0') {
          DAT_EXTMEM_7f77 = '\x01';
        }
      }
      else if (DAT_EXTMEM_7ff3 == '\0') {
        DAT_EXTMEM_7fe0 = '\0';
        DAT_EXTMEM_ca20 = 1;
        DAT_EXTMEM_ca21 = 0;
        uEXTMEMca08 = 1;
        DAT_EXTMEM_7f9d = 0;
      }
      else {
        DAT_EXTMEM_7ff2 = 0;
        DAT_EXTMEM_7ff3 = '\0';
        DAT_EXTMEM_ca20 = 2;
        DAT_EXTMEM_ca21 = 1;
        uEXTMEMca22 = 0;
        DAT_EXTMEM_ca23 = 0;
        uEXTMEMca08 = 1;
        DAT_EXTMEM_7f9d = 0;
      }
      DAT_EXTMEM_ca0e = 1;
      DAT_EXTMEM_7f78 = '\0';
      bEXTMEM7ffd = bEXTMEM7ffd & 0xfe;
    }
    if ((bEXTMEM7ffd >> 3 & 1) == 1) {
      DAT_EXTMEM_7ff4 = '\x01';
      DAT_EXTMEM_7fbd = '\0';
      if ((DAT_EXTMEM_7ff3 == '\0' & DAT_EXTMEM_7ff2) == 0) {
        if (cEXTMEMca81 == '\x02') {
          uEXTMEMca0d = 1;
          DAT_EXTMEM_7f9d = 0;
          DAT_EXTMEM_7fbf = '\0';
          DAT_EXTMEM_7f76 = DAT_EXTMEM_7f78 == '\0';
          DAT_EXTMEM_7fbd = '\x01';
          if (DAT_EXTMEM_7f78 != '\0') {
            DAT_EXTMEM_ca61 = 0xf;
          }
        }
        else {
          if (((DAT_EXTMEM_7fbf != '\0') && (DAT_EXTMEM_7fbf = '\0', (bEXTMEMc84b >> 6 & 1) != 1))
             && ((bEXTMEMca83 >> 2 & 1) != 0)) {
            BANK0_R2 = bVar3;
            FUN_CODE_1f5c(bEXTMEMca83);
          }
          if (DAT_EXTMEM_7f78 == '\0') {
            uEXTMEMca0d = 1;
            DAT_EXTMEM_7f76 = '\x01';
          }
          else if (DAT_EXTMEM_7f9f == '\0') {
            if (DAT_EXTMEM_7f79 == '\0') {
              if (BANK1_R0 != '\0' || BANK1_R1 != '\0') {
                BANK0_R2 = bVar3;
                FUN_CODE_2402(0);
              }
              if ((DAT_EXTMEM_7fec & 1) == 0) {
                DAT_EXTMEM_7fed = 1;
              }
              else {
                DAT_EXTMEM_7fed = 2;
              }
              bEXTMEMca09 = DAT_EXTMEM_7fed;
            }
            else {
              if (BANK1_R0 != '\0' || BANK1_R1 != '\0') {
                BANK0_R2 = bVar3;
                FUN_CODE_2402(DAT_EXTMEM_7f79);
              }
              if ((DAT_EXTMEM_7fee != '\0') && (cEXTMEMca81 != '\x01')) {
                BANK0_R2 = bVar3;
                FUN_CODE_1f9b();
              }
              DAT_EXTMEM_7fee = '\0';
              DAT_EXTMEM_7f79 = '\0';
              DAT_INTMEM_50 = 0x20;
              DAT_INTMEM_51 = 0x32;
              BANK0_R2 = bVar3;
              FUN_CODE_044f(0x7f00);
              if ((cEXTMEMca81 != '\x01') && (DAT_EXTMEM_7f7a != '\0')) {
                DAT_EXTMEM_cad0 = 2;
              }
              DAT_EXTMEM_7f7a = '\0';
              bEXTMEMca09 = 1;
            }
            DAT_EXTMEM_7f9d = 0;
            DAT_EXTMEM_7f78 = '\0';
            DAT_EXTMEM_ca61 = 0xf;
          }
        }
      }
      else {
        DAT_EXTMEM_7ff2 = 0;
        if (cEXTMEMca81 == '\x01') {
          DAT_EXTMEM_7ff3 = '\x01';
        }
        else {
          DAT_EXTMEM_7ff3 = '\0';
        }
      }
    }
    bVar5 = BANK0_R0;
    if ((DAT_EXTMEM_7ffb == '\0' & bEXTMEM7ffd & DAT_EXTMEM_7f9f == '\0') != 0) {
      cVar2 = '\0';
      if (((((bEXTMEMcb4a >> 4 & 1) == 1) || (DAT_EXTMEM_7ff2 == 0)) || ((DAT_EXTMEM_ca9f & 1) != 0)
          ) && (((DAT_EXTMEM_c850 >> 1 & 1) == 1 || (3 < bEXTMEMcc09)))) {
        if (((bEXTMEM7ffe >> 1 & 1) == 1) && (DAT_EXTMEM_7fa0 == '\0')) {
          cVar2 = '\x01';
          if (DAT_EXTMEM_7f76 == '\0') {
            if (DAT_EXTMEM_7fec == 1) {
              if (DAT_EXTMEM_7f77 == '\0') {
                if ((DAT_EXTMEM_7f79 == '\0') || (BANK0_R0 = bVar5, 2 < DAT_EXTMEM_7f9d)) {
                  cVar2 = '\0';
                  DAT_EXTMEM_7f78 = '\0';
                  DAT_EXTMEM_7f79 = '\0';
                  DAT_EXTMEM_7ffb = '\0';
                  DAT_EXTMEM_7f76 = '\0';
                  DAT_EXTMEM_7f9d = 0;
                  BANK0_R0 = bVar5;
                }
              }
              else {
                BANK0_R0 = bVar5;
                if (DAT_EXTMEM_7f79 == '\0') {
                  uEXTMEMca08 = 1;
                  DAT_EXTMEM_7f9d = 0;
                }
              }
            }
            else if ((DAT_EXTMEM_7f9d < 3) << 7 < '\0') {
              DAT_EXTMEM_7f78 = '\x01';
              DAT_EXTMEM_ca0c = 1;
              BANK0_R0 = bVar5;
            }
            else {
              cVar2 = '\0';
              DAT_EXTMEM_7f78 = '\0';
              DAT_EXTMEM_7f79 = '\0';
              DAT_EXTMEM_7ffb = '\0';
              DAT_EXTMEM_7f7a = '\0';
              DAT_EXTMEM_7f76 = '\0';
              DAT_EXTMEM_7f9d = 0;
              DAT_EXTMEM_7ff2 = 0;
              uEXTMEMcad1 = 1;
              BANK0_R0 = bVar5;
            }
          }
          else if (cEXTMEMca81 == '\x02') {
            DAT_EXTMEM_7f78 = '\x01';
            cVar2 = '\0';
            BANK0_R0 = bVar5;
          }
          else {
            if (DAT_EXTMEM_7f79 == '\0') {
              if (BANK1_R0 != '\0' || BANK1_R1 != '\0') {
                BANK0_R2 = bVar3;
                FUN_CODE_2402(0);
              }
              if ((DAT_EXTMEM_7fec & 1) == 0) {
                DAT_EXTMEM_7fed = 1;
              }
              else {
                DAT_EXTMEM_7fed = 2;
              }
              bEXTMEMca09 = DAT_EXTMEM_7fed;
            }
            else {
              if (BANK1_R0 != '\0' || BANK1_R1 != '\0') {
                BANK0_R2 = bVar3;
                FUN_CODE_2402(DAT_EXTMEM_7f79);
              }
              if ((DAT_EXTMEM_7fee != '\0') && (cEXTMEMca81 != '\x01')) {
                BANK0_R0 = bVar5;
                BANK0_R2 = bVar3;
                FUN_CODE_1f9b();
              }
              DAT_EXTMEM_7fee = '\0';
              DAT_EXTMEM_7f79 = '\0';
              DAT_INTMEM_50 = 0x20;
              DAT_INTMEM_51 = 0x32;
              BANK0_R0 = bVar5;
              BANK0_R2 = bVar3;
              FUN_CODE_044f(0x7f00);
              if ((cEXTMEMca81 != '\x01') && (DAT_EXTMEM_7f7a != '\0')) {
                DAT_EXTMEM_cad0 = 2;
              }
              DAT_EXTMEM_7f7a = '\0';
              bEXTMEMca09 = 1;
            }
            DAT_EXTMEM_7f9d = 0;
            DAT_EXTMEM_ca61 = 0xf;
            DAT_EXTMEM_ca0c = 1;
            BANK0_R0 = bVar5;
          }
        }
        else if ((((bEXTMEMcb4a >> 3 & 1) == 1) ||
                 (((DAT_EXTMEM_7f9d == 0 || (2 < DAT_EXTMEM_7f9d)) || (DAT_EXTMEM_7ff4 != '\0'))))
                || ((DAT_EXTMEM_ca9f & 1) == 1)) {
          DAT_EXTMEM_7f9d = 0;
          BANK0_R0 = bVar5;
        }
        else {
          DAT_INTMEM_50 = 0x20;
          DAT_INTMEM_51 = 0x1d;
          BANK0_R2 = bVar3;
          FUN_CODE_044f(0xca00,DAT_EXTMEM_ca9f);
          DAT_EXTMEM_ca0c = 1;
          DAT_EXTMEM_ca61 = 0xf;
          cVar2 = '\x01';
        }
      }
      else {
        cVar2 = '\x01';
        DAT_EXTMEM_ca0c = 1;
        DAT_EXTMEM_ca61 = 0xf;
        BANK0_R0 = bVar5;
      }
      DAT_EXTMEM_7f77 = '\0';
      if (DAT_EXTMEM_7fb6 == '\0' && cVar2 == '\0') {
        DAT_EXTMEM_7fa0 = '\0';
        BANK0_R2 = bVar3;
        FUN_CODE_42b8(DAT_EXTMEM_7fb6 == '\0');
      }
      DAT_EXTMEM_7f76 = '\0';
    }
    bVar5 = 0x7f;
    DAT_INTMEM_48 = 0x35;
    DAT_INTMEM_49 = -0x34;
    DAT_INTMEM_4a = 0;
    BANK0_R2 = bVar3;
    if ((DAT_INTMEM_47 >> 2 & 1) == 1) {
      DAT_INTMEM_50 = 0x20;
      DAT_INTMEM_51 = 6;
      FUN_CODE_044f(0x7f00);
      BANK0_R2 = bVar3;
      bVar3 = FUN_CODE_67d0(CONCAT11(DAT_INTMEM_49,DAT_INTMEM_48),DAT_INTMEM_4a);
      DAT_INTMEM_4b = bVar3 & 7;
      DAT_INTMEM_4c = bVar3 & 0x18;
      cVar2 = FUN_CODE_67d0(CONCAT11(DAT_INTMEM_49 - (((0xfe < DAT_INTMEM_48) << 7) >> 7),
                                     DAT_INTMEM_48 + 1),DAT_INTMEM_4a);
      uVar8 = CONCAT11(DAT_INTMEM_49 - (((0xfd < DAT_INTMEM_48) << 7) >> 7),DAT_INTMEM_48 + 2);
      uVar4 = FUN_CODE_67d0(uVar8,DAT_INTMEM_4a);
      bVar5 = (byte)((ushort)uVar8 >> 8);
      if (BANK0_R7 < 0x10) {
                    /* WARNING: Could not recover jumptable at 0x5f8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ushort)(byte)(cVar2 * '\x03') + 0x5f90))(uVar4);
        return;
      }
    }
    bVar3 = BANK0_R2;
    if ((DAT_INTMEM_47 & 0x28) != 0) {
      DAT_INTMEM_50 = 1;
      DAT_INTMEM_51 = 0x10;
      uVar7 = (ushort)bVar5 << 8;
      FUN_CODE_044f(uVar7);
      DAT_INTMEM_50 = 1;
      DAT_INTMEM_51 = 0x68;
      FUN_CODE_044f(uVar7 & 0xff00);
      DAT_INTMEM_50 = 1;
      DAT_INTMEM_51 = 1;
      FUN_CODE_044f(1);
      DAT_INTMEM_50 = 1;
      DAT_INTMEM_51 = DAT_INTMEM_47;
      FUN_CODE_044f(1);
      FUN_CODE_270e();
      if ((DAT_EXTMEM_7fa7 != '\x02') && (DAT_EXTMEM_7fa7 != '\x05')) {
        BANK0_R2 = bVar3;
        FUN_CODE_421d(0x7f4b);
      }
      do {
      } while( true );
    }
  }
LAB_CODE_5707:
  do {
    bVar3 = BANK0_R2;
    uVar7 = 0xcc9b;
    if (bEXTMEMcc9b == 1) {
      bVar5 = 1;
    }
    else {
      uVar7 = 0xc808;
      bVar5 = DAT_EXTMEM_c808;
      if ((DAT_EXTMEM_c808 & 1) == 0) goto LAB_CODE_572b;
    }
    DAT_INTMEM_50 = 0x20;
    DAT_INTMEM_51 = 0x45;
    FUN_CODE_044f(uVar7 & 0xff00,bVar5);
    BANK0_R2 = bVar3;
  } while( true );
  while( true ) {
    FUN_CODE_07f4(bVar3);
    if ((char)uVar7 == '\x01') goto LAB_CODE_488a;
    if ((char)uVar7 == '\x02') break;
LAB_CODE_4fe8:
    DAT_EXTMEM_7fed = DAT_EXTMEM_d80d & 7;
    uVar7 = 0x7fed;
    BANK0_R3 = BANK0_R3 & 7;
    bVar3 = DAT_EXTMEM_7fed;
    if ((DAT_EXTMEM_7fed == 7) && (uVar7 = 0xd4cc, bVar3 = bEXTMEMd4cc, (bEXTMEMd4cc & 1) == 1))
    goto LAB_CODE_5025;
  }
  BANK0_R3 = BANK0_R3 | 4;
  goto LAB_CODE_4e4a;
LAB_CODE_5025:
  while (bEXTMEMcc9b == 1) {
    DAT_INTMEM_50 = 0x20;
    DAT_INTMEM_51 = 0x42;
    FUN_CODE_044f(0xcc00);
  }
  FUN_CODE_1465();
  DAT_EXTMEM_cc0b = 0;
  DAT_EXTMEM_7fe5 = 0;
  do {
    BANK0_R3 = BANK0_R3 & 0xf0;
    uVar7 = 0xd868;
    BANK0_R4 = BANK0_R4 & 0xf0;
    if (bEXTMEMd819 == BANK0_R4) {
      FUN_CODE_15c1();
      FUN_CODE_1403();
      BANK0_R3 = BANK0_R3 & 0xf0;
      DAT_EXTMEM_7fed = ~DAT_EXTMEM_d804 >> 4;
      DAT_EXTMEM_cc0b = 0;
      DAT_EXTMEM_7fe5 = 0;
      goto LAB_CODE_50b3;
    }
    FUN_CODE_07f4(DAT_EXTMEM_d868);
    if ((char)uVar7 == '\x01') goto LAB_CODE_488a;
  } while ((char)uVar7 != '\x02');
  FUN_CODE_15c1();
  BANK0_R3 = BANK0_R3 | 8;
  goto LAB_CODE_4e4a;
LAB_CODE_50b3:
  BANK0_R3 = BANK0_R3 & DAT_EXTMEM_7fed;
  uVar7 = 0x7fed;
  if (bEXTMEMd84e != BANK0_R4) {
    FUN_CODE_07f4(DAT_EXTMEM_7fed);
    if ((char)uVar7 == '\x01') goto LAB_CODE_488a;
    if ((char)uVar7 == '\x02') goto code_c0x50d7;
    goto LAB_CODE_50b3;
  }
  if (((bCODE00a6 >> 1 & 1) != 1) && (DAT_EXTMEM_7eaa == '\0')) {
    do {
    } while( true );
  }
  if ((bCODE00a9 >> 4 & 1) != 0) {
    FUN_CODE_04d0(bCODE00a9);
  }
  while (bEXTMEMcc9b == 2) {
    DAT_INTMEM_50 = 0x20;
    DAT_INTMEM_51 = 0x43;
    FUN_CODE_044f(0xcc00);
  }
  DAT_INTMEM_50 = 2;
  DAT_INTMEM_51 = 0x26;
  FUN_CODE_044f(0xcc00);
  DAT_EXTMEM_cc0b = 0;
  DAT_EXTMEM_7fe5 = 0;
  do {
    DAT_EXTMEM_7fed = DAT_EXTMEM_d80d & 7;
    uVar7 = 0x7fed;
    BANK0_R3 = BANK0_R3 & 7;
    bVar3 = DAT_EXTMEM_7fed;
    if ((DAT_EXTMEM_7fed == 7) && (uVar7 = 0xd4cc, bVar3 = bEXTMEMd4cc, (bEXTMEMd4cc & 1) != 0)) {
      uEXTMEMc80f = 0;
      uVar7 = 0xcc00;
      uEXTMEMcc00 = 0;
      FUN_CODE_226e();
      DAT_INTMEM_50 = 2;
      DAT_INTMEM_51 = 0x27;
      FUN_CODE_044f(uVar7 & 0xff00);
      DAT_EXTMEM_cc0b = 0;
      DAT_EXTMEM_7fe5 = 0;
      goto LAB_CODE_51aa;
    }
    FUN_CODE_07f4(bVar3);
    if ((char)uVar7 == '\x01') goto LAB_CODE_488a;
  } while ((char)uVar7 != '\x02');
  BANK0_R3 = BANK0_R3 | 0x20;
  goto LAB_CODE_4e4a;
code_c0x50d7:
  BANK0_R3 = BANK0_R3 | 0x10;
  goto LAB_CODE_4e4a;
LAB_CODE_51aa:
  DAT_EXTMEM_7fed = bEXTMEMc803 & 0x80;
  uVar7 = 0x7fed;
  if (DAT_EXTMEM_7fed == 0) {
    FUN_CODE_07f4(0);
    if ((char)uVar7 == '\x01') goto LAB_CODE_488a;
    if ((char)uVar7 == '\x02') goto code_c0x51cb;
    goto LAB_CODE_51aa;
  }
  DAT_EXTMEM_cc0b = 0;
  do {
  } while ((BANK0_R4 != 0) << 7 < '\0');
  DAT_EXTMEM_7fed = cEXTMEMd085;
  DAT_INTMEM_50 = 1;
  DAT_INTMEM_51 = 3;
  FUN_CODE_044f(0x7f00,bEXTMEMc849 >> 4);
  DAT_EXTMEM_7fed = bEXTMEMc849;
  while( true ) {
    while (uVar7 = 0xcc9b, bEXTMEMcc9b == 3) {
      DAT_INTMEM_50 = 0x20;
      DAT_INTMEM_51 = 0x44;
      FUN_CODE_044f(0xcc00);
    }
    FUN_CODE_2369();
    if ((char)uVar7 != '\0') goto LAB_CODE_488a;
    bVar1 = (DAT_EXTMEM_7fed & 1) == 0;
    bVar3 = BANK0_R3 & 0xf;
    if (((bVar1 & bEXTMEMc803) != 0) ||
       (bVar1 = (DAT_EXTMEM_7fed & 2) == 0, (bVar1 & bEXTMEMc840) != 0)) break;
    BANK0_R3 = BANK0_R3 & 3;
    bVar1 = (DAT_EXTMEM_7fed & 4) == 0;
    bVar3 = BANK0_R3;
    if (((bVar1 & bEXTMEMc841) != 0) ||
       (bVar1 = (DAT_EXTMEM_7fed & 8) == 0, bVar1 && cEXTMEMd085 != '?')) break;
  }
  BANK0_R3 = bVar3;
  FUN_CODE_270e(bVar1);
  BANK0_R3 = BANK0_R3 | 0x80;
  goto LAB_CODE_4e4a;
code_c0x51cb:
  BANK0_R3 = BANK0_R3 | 0x40;
  goto LAB_CODE_4e4a;
LAB_CODE_572b:
  DAT_INTMEM_47 = DAT_EXTMEM_7f93 & bEXTMEMcc07 & param_1;
  bEXTMEM7ffd = DAT_EXTMEM_ca40;
  bEXTMEM7ffe = DAT_EXTMEM_ca41;
  BANK0_R1 = BANK0_R1 & 0xf0;
  DAT_EXTMEM_7fed = ~DAT_EXTMEM_d804 >> 4;
  param_1 = DAT_EXTMEM_7f93;
  BANK0_R2 = bVar3;
  if ((DAT_EXTMEM_7fb4 != '\0') && (BANK0_R0 = BANK0_R0 & DAT_EXTMEM_7fed, bEXTMEMd84e == BANK0_R1))
  {
    if (((bCODE00a6 >> 1 & 1) == 0) && (DAT_EXTMEM_7eaa == '\0')) {
      DAT_EXTMEM_7eb8 = DAT_EXTMEM_7eb8 + '\x01';
      if (((2 < BANK0_R0) << 7 < '\0') && (BANK0_R0 < 6)) {
                    /* WARNING: Could not recover jumptable at 0x57d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ushort)(byte)(DAT_EXTMEM_7eb9 * '\x03') + 0x57d7))(DAT_EXTMEM_7fed);
        return;
      }
    }
    else {
      DAT_EXTMEM_7fb4 = '\0';
      DAT_EXTMEM_7fed = DAT_EXTMEM_d804 & 0xf;
      uEXTMEMcc00 = 0;
      DAT_EXTMEM_7fab = 1;
      DAT_EXTMEM_7fa9 = 1;
      DAT_EXTMEM_7faa = 0;
      BANK1_R2 = DAT_EXTMEM_7f7e;
      BANK1_R3 = DAT_EXTMEM_7f7d;
      BANK1_R4 = DAT_EXTMEM_7f7c;
      BANK1_R5 = 0;
      bEXTMEMd80b = DAT_EXTMEM_7fed;
      FUN_CODE_26be(0x7f01);
      BANK0_R2 = bVar3;
      if ((bCODE00a9 >> 4 & 1) != 0) {
        FUN_CODE_04d0(bCODE00a9);
        BANK0_R2 = bVar3;
      }
    }
  }
  goto LAB_CODE_59e3;
}



/* =========================================================
 * CODE:5f93  thunk_FUN_CODE_5fd1  size=3
 * ========================================================= */

/* WARNING: Removing unreachable block (CODE,0x576b) */
/* WARNING: Removing unreachable block (CODE,0x50a2) */
/* WARNING: Removing unreachable block (CODE,0x6438) */

void thunk_FUN_CODE_5fd1(byte param_1)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  undefined1 uVar4;
  byte bVar5;
  byte bVar6;
  ushort uVar7;
  
  bVar3 = BANK0_R2;
  uVar7 = 0x7f7d;
  BANK0_R2 = bVar3;
  if ((DAT_EXTMEM_7f7d == DAT_INTMEM_4c) && (uVar7 = 0x7f7e, DAT_EXTMEM_7f7e == DAT_INTMEM_4b)) {
    DAT_EXTMEM_d868 = 4;
    DAT_INTMEM_50 = 1;
    DAT_INTMEM_51 = 9;
    FUN_CODE_044f(0xd800,DAT_EXTMEM_7f7e);
    bVar5 = BANK0_R7;
    BANK0_R7 = BANK0_R7 | 8;
    if (DAT_EXTMEM_7fa2 == '\x05') {
      DAT_EXTMEM_7fa2 = '\x06';
      DAT_EXTMEM_c804 = 0x84;
      bVar6 = DAT_EXTMEM_7f84;
      if (DAT_EXTMEM_7f84 == 0) {
        BANK0_R7 = bVar5 | 0x28;
        bVar6 = DAT_EXTMEM_d200;
      }
      BANK0_R2 = bVar3;
      FUN_CODE_226e(bVar6);
      DAT_EXTMEM_cc0b = 0;
    }
    DAT_EXTMEM_7fab = 0;
    uVar7 = 0x7eab;
    DAT_EXTMEM_7eab = 4;
    BANK0_R2 = bVar3;
  }
  do {
    bVar3 = BANK0_R2;
    if ((DAT_INTMEM_47 & 0x28) != 0) {
      DAT_INTMEM_50 = 1;
      DAT_INTMEM_51 = 0x10;
      uVar7 = uVar7 & 0xff00;
      FUN_CODE_044f(uVar7);
      DAT_INTMEM_50 = 1;
      DAT_INTMEM_51 = 0x68;
      FUN_CODE_044f(uVar7 & 0xff00);
      DAT_INTMEM_50 = 1;
      DAT_INTMEM_51 = 1;
      FUN_CODE_044f(1);
      DAT_INTMEM_50 = 1;
      DAT_INTMEM_51 = DAT_INTMEM_47;
      FUN_CODE_044f(1);
      FUN_CODE_270e();
      if ((DAT_EXTMEM_7fa7 != '\x02') && (DAT_EXTMEM_7fa7 != '\x05')) {
        BANK0_R2 = bVar3;
        FUN_CODE_421d(0x7f4b);
      }
      do {
      } while( true );
    }
LAB_CODE_5707:
    bVar3 = BANK0_R2;
    uVar7 = 0xcc9b;
    if (bEXTMEMcc9b == 1) {
      bVar5 = 1;
LAB_CODE_5719:
      DAT_INTMEM_50 = 0x20;
      DAT_INTMEM_51 = 0x45;
      FUN_CODE_044f(uVar7 & 0xff00,bVar5);
      BANK0_R2 = bVar3;
      goto LAB_CODE_5707;
    }
    uVar7 = 0xc808;
    bVar5 = DAT_EXTMEM_c808;
    if ((DAT_EXTMEM_c808 & 1) != 0) goto LAB_CODE_5719;
    DAT_INTMEM_47 = DAT_EXTMEM_7f93 & bEXTMEMcc07 & param_1;
    bEXTMEM7ffd = DAT_EXTMEM_ca40;
    bEXTMEM7ffe = DAT_EXTMEM_ca41;
    BANK0_R1 = BANK0_R1 & 0xf0;
    DAT_EXTMEM_7fed = ~DAT_EXTMEM_d804 >> 4;
    param_1 = DAT_EXTMEM_7f93;
    if ((DAT_EXTMEM_7fb4 != '\0') &&
       (BANK0_R0 = BANK0_R0 & DAT_EXTMEM_7fed, bEXTMEMd84e == BANK0_R1)) {
      if (((bCODE00a6 >> 1 & 1) == 0) && (DAT_EXTMEM_7eaa == '\0')) {
        DAT_EXTMEM_7eb8 = DAT_EXTMEM_7eb8 + '\x01';
        if (((2 < BANK0_R0) << 7 < '\0') && (BANK0_R0 < 6)) {
                    /* WARNING: Could not recover jumptable at 0x57d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ushort)(byte)(DAT_EXTMEM_7eb9 * '\x03') + 0x57d7))(DAT_EXTMEM_7fed);
          return;
        }
      }
      else {
        DAT_EXTMEM_7fb4 = '\0';
        DAT_EXTMEM_7fed = DAT_EXTMEM_d804 & 0xf;
        uEXTMEMcc00 = 0;
        DAT_EXTMEM_7fab = 1;
        DAT_EXTMEM_7fa9 = 1;
        DAT_EXTMEM_7faa = 0;
        BANK1_R2 = DAT_EXTMEM_7f7e;
        BANK1_R3 = DAT_EXTMEM_7f7d;
        BANK1_R4 = DAT_EXTMEM_7f7c;
        BANK1_R5 = 0;
        bEXTMEMd80b = DAT_EXTMEM_7fed;
        FUN_CODE_26be(0x7f01);
        if ((bCODE00a9 >> 4 & 1) != 0) {
          BANK0_R2 = bVar3;
          FUN_CODE_04d0(bCODE00a9);
        }
      }
    }
    if (DAT_EXTMEM_7fb5 != '\0') {
      BANK0_R0 = BANK0_R0 & 0xf0;
      param_1 = ~DAT_EXTMEM_d804 & 0xf0 & bEXTMEMd819;
      DAT_INTMEM_4e = ~DAT_EXTMEM_d804 & 0xf0;
      DAT_INTMEM_4f = 0;
      DAT_EXTMEM_7fed = param_1;
      if (param_1 == DAT_INTMEM_4e) {
        BANK0_R2 = bVar3;
        FUN_CODE_15c1(0xff);
      }
    }
    uVar7 = 0x7fbe;
    if (DAT_EXTMEM_7fbe != '\0') {
      if ((bCODE00ac != 0) && (DAT_EXTMEM_7ea7 == '\0')) {
        DAT_EXTMEM_7ea7 = '\x01';
      }
      if (DAT_EXTMEM_7ea7 != '\0') {
        DAT_EXTMEM_7ea6 = DAT_EXTMEM_7ea6 + 1;
      }
      if ((DAT_EXTMEM_7f9d == 0) && (DAT_EXTMEM_7f78 == '\0')) {
        uVar4 = 0x7f;
        bVar5 = 0;
        if (DAT_EXTMEM_7fbd != '\0') goto LAB_CODE_5a6d;
      }
      else {
LAB_CODE_5a6d:
        uVar4 = 0;
        bVar5 = bCODE00ab;
        if ((bCODE00ab >> 6 & 1) != 1) {
          uVar7 = 0;
          uVar4 = 0;
          bVar5 = DAT_EXTMEM_7ea6;
          if (BANK0_R0 <= bCODE00ac) goto LAB_CODE_5aa1;
        }
      }
      BANK0_R2 = bVar3;
      FUN_CODE_421d(CONCAT11(uVar4,0x46),bVar5);
      DAT_EXTMEM_7fbe = '\0';
      bEXTMEMcc09 = 0;
      DAT_EXTMEM_7ea7 = '\0';
      uVar7 = 0x7ea6;
      DAT_EXTMEM_7ea6 = 0;
    }
LAB_CODE_5aa1:
    if ((DAT_INTMEM_47 == 0) && (uVar7 = 0x7ffd, bEXTMEM7ffd == 0)) {
      if ((DAT_EXTMEM_7fa3 != '\0') && ((DAT_EXTMEM_7fa2 == '\x03' || (DAT_EXTMEM_7fa2 == '\x04'))))
      {
        DAT_INTMEM_50 = 4;
        DAT_INTMEM_51 = 0x1b;
        BANK0_R2 = bVar3;
        FUN_CODE_044f(0x7f00,0);
        if (DAT_EXTMEM_7f87 != '\0') {
          DAT_EXTMEM_7fe1 = '\x01';
          DAT_EXTMEM_7fe2 = '\x01';
          DAT_EXTMEM_7fe3 = '\x01';
          DAT_EXTMEM_7fe4 = '\x01';
          DAT_EXTMEM_7ffa = '\x01';
          for (bVar5 = 0; bVar5 < BANK0_R4; bVar5 = bVar5 + 1) {
            BANK0_R6 = BANK0_R6 & 4;
            *(bool *)CONCAT11('\x7f' - (((0x1e < bVar5) << 7) >> 7),bVar5 - 0x1f) =
                 *(char *)CONCAT11('\x7f' - (((0x7f < bVar5) << 7) >> 7),bVar5 + 0x80) != '\0';
          }
          if ((DAT_EXTMEM_7fe1 == '\0') || (DAT_EXTMEM_7fe2 == '\0')) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if ((bVar1) && (DAT_EXTMEM_7fe3 != '\0')) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          if ((bVar1) && (DAT_EXTMEM_7fe4 != '\0')) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          if (DAT_EXTMEM_7f7d == 0x10) {
            bVar5 = 2;
          }
          else {
            bVar5 = DAT_EXTMEM_7f7d == 8;
          }
          bVar6 = DAT_EXTMEM_7f80 & 3;
          bVar5 = *(byte *)CONCAT11('\x7f' - (((0x69 < bVar5) << 7) >> 7),bVar5 + 0x96) & 3;
          if (((bVar6 < BANK0_R3) && (bVar1)) || (bVar5 == BANK0_R4)) {
            DAT_EXTMEM_7f9a = bVar6 << 4 | bVar6;
          }
          else {
            DAT_EXTMEM_7ffa = '\0';
            DAT_EXTMEM_7f9a = bVar5 << 4 | bVar5;
          }
          DAT_EXTMEM_7fe1 = '\x01';
          DAT_EXTMEM_7fe2 = 1;
          DAT_EXTMEM_7fe3 = '\x01';
          DAT_EXTMEM_7fe4 = '\x01';
          for (bVar5 = 0; bVar6 = DAT_EXTMEM_7f9a, bVar5 < BANK0_R4; bVar5 = bVar5 + 1) {
            BANK0_R6 = BANK0_R6 & 0x20;
            *(bool *)CONCAT11('\x7f' - (((0x1e < bVar5) << 7) >> 7),bVar5 - 0x1f) =
                 *(char *)CONCAT11('\x7f' - (((0x7f < bVar5) << 7) >> 7),bVar5 + 0x80) != '\0';
          }
          if ((DAT_EXTMEM_7fe1 == '\0') || (DAT_EXTMEM_7fe2 == 0)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if ((bVar1) && (DAT_EXTMEM_7fe3 != '\0')) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          if ((bVar1) && (DAT_EXTMEM_7fe4 != '\0')) {
            DAT_EXTMEM_7fe3 = '\x01';
          }
          else {
            DAT_EXTMEM_7fe3 = '\0';
          }
          DAT_EXTMEM_7fed = (DAT_EXTMEM_7f80 & 0x18) >> 1;
          DAT_EXTMEM_7fe4 =
               *(byte *)CONCAT11('\x7f' - (((0x69 < DAT_EXTMEM_7fe2) << 7) >> 7),
                                 DAT_EXTMEM_7fe2 + 0x96) & 0xc;
          if (((DAT_EXTMEM_7fed < BANK0_R3) && (DAT_EXTMEM_7fe3 == '\x01')) ||
             (DAT_EXTMEM_7fe4 == BANK0_R4)) {
            DAT_EXTMEM_7f9a = DAT_EXTMEM_7fed << 4 | DAT_EXTMEM_7fed;
          }
          else {
            DAT_EXTMEM_7ffa = '\0';
            DAT_EXTMEM_7f9a = DAT_EXTMEM_7fe4 << 4 | DAT_EXTMEM_7fe4;
          }
          BANK0_R3 = BANK0_R3 | bVar6;
          if (DAT_EXTMEM_7ffa == '\0') {
            DAT_EXTMEM_7f85 = 1;
          }
        }
        if (DAT_EXTMEM_7fa2 == '\x04') {
          DAT_EXTMEM_7fe2 = DAT_EXTMEM_7f80;
          BANK0_R3 = BANK0_R3 & 4;
          BANK0_R4 = BANK0_R4 & 0x20;
          BANK0_R5 = BANK0_R5 & 3;
          bVar5 = ((DAT_EXTMEM_7f80 & 0x18) >> 4) << 1 | (DAT_EXTMEM_7f80 & 8) >> 3;
          DAT_EXTMEM_7fb8 = '\0';
          if ((DAT_EXTMEM_7fba == '\0') || (DAT_EXTMEM_7f80 != 0)) {
            bVar6 = DAT_EXTMEM_7f80;
            if (DAT_EXTMEM_7f87 == '\0') {
              DAT_EXTMEM_7fed = DAT_EXTMEM_7f80 & 3;
              BANK0_R3 = BANK0_R3 | DAT_EXTMEM_7f9a & 0xcc;
              DAT_EXTMEM_7f9a = DAT_EXTMEM_7fed << 4 | DAT_EXTMEM_7fed;
            }
          }
          else {
            DAT_EXTMEM_7fb8 = '\x01';
            bVar6 = 1;
          }
          if (((DAT_EXTMEM_7fb9 == '\0') || (DAT_EXTMEM_7f80 != 0)) ||
             ((DAT_EXTMEM_7fbb == '\0' && ((DAT_EXTMEM_7fbc == '\0' && (DAT_EXTMEM_7fb8 != '\0')))))
             ) {
            if (DAT_EXTMEM_7f87 == '\0') {
              DAT_EXTMEM_7fed = (DAT_EXTMEM_7f80 & 0x18) >> 1;
              BANK0_R3 = BANK0_R3 | DAT_EXTMEM_7f9a & 0x33;
              DAT_EXTMEM_7f9a = DAT_EXTMEM_7fed << 4 | DAT_EXTMEM_7fed;
            }
          }
          else {
            bVar5 = bVar5 + 1;
            DAT_EXTMEM_7fb8 = '\x01';
          }
          bVar6 = bVar5 << 2 | bVar6;
          DAT_EXTMEM_7f9b = bVar6 | bVar6 << 4;
        }
        DAT_EXTMEM_7fa3 = '\0';
        DAT_EXTMEM_7f87 = '\0';
      }
      uEXTMEMcc2d = 0xfe;
      BANK0_R2 = bVar3;
      goto LAB_CODE_5707;
    }
    if ((DAT_INTMEM_47 & 1) != 0) {
      BANK0_R2 = bVar3;
      FUN_CODE_270e();
LAB_CODE_488a:
      while( true ) {
        while( true ) {
          DAT_INTMEM_50 = 1;
          DAT_INTMEM_51 = 1;
          FUN_CODE_044f(uVar7 & 0xff00);
          if ((bCODE00a7 & 1) != 0) {
            FUN_CODE_05db(0,bCODE00a7);
          }
          cEXTMEMcc99 = cEXTMEMcc99 + '\x01';
          BANK0_R3 = BANK0_R3 & 0xfe;
          DAT_EXTMEM_d815 = 0;
          while ((((bEXTMEMc84b & 1) != 0 && (uVar7 = 0xcc9b, bVar3 = bEXTMEMcc9b, bEXTMEMcc9b < 10)
                  ) || (uVar7 = 0xc808, bVar3 = DAT_EXTMEM_c808, (DAT_EXTMEM_c808 & 1) != 0))) {
            DAT_INTMEM_50 = 0x20;
            DAT_INTMEM_51 = 0x40;
            FUN_CODE_044f(uVar7 & 0xff00,bVar3);
          }
          if ((bEXTMEMd86a >> 4 & 1) != 0) {
            uEXTMEMca10 = 3;
            uEXTMEMca15 = 0x20;
            uEXTMEMca14 = 7;
          }
          if ((bCODE00a6 >> 6 & 1) != 0) {
            uEXTMEMca18 = uCODE00aa;
            uEXTMEMca19 = 0xff;
          }
          uEXTMEMcc0c = 199;
          DAT_EXTMEM_cc0b = 0;
          DAT_EXTMEM_c804 = 0;
          DAT_EXTMEM_c84a = '\x02';
          if ((bEXTMEMd86a >> 3 & 1) == 0) {
            uEXTMEMc8a0 = 0xe;
          }
          else {
            uEXTMEMd8a0 = 0xd;
          }
          uEXTMEMd835 = 2;
          BANK0_R3 = BANK0_R3 & 0xfc;
          DAT_INTMEM_50 = 0x20;
          DAT_INTMEM_51 = 1;
          FUN_CODE_044f(0xc800);
          DAT_EXTMEM_7f84 = DAT_EXTMEM_c801 & 0x80;
          if (DAT_EXTMEM_7f84 == 0) {
            uEXTMEMd254 = 0xff;
            uEXTMEMd255 = 0xff;
            BANK0_R3 = BANK0_R3 & 0xdf;
            uEXTMEMd238 = 4;
          }
          DAT_EXTMEM_7fa4 = bEXTMEMcc8e & 4;
          DAT_EXTMEM_7f94 = uEXTMEMcc8c;
          uEXTMEM7f95 = uEXTMEMcc8d;
          DAT_EXTMEM_7f96 = uEXTMEMc828;
          uEXTMEM7f97 = uEXTMEMc829;
          uEXTMEM7f98 = uEXTMEMc82a;
          if (cEXTMEMcc92 == '\0') {
            DAT_EXTMEM_7fa6 = '\x02';
          }
          else {
            BANK0_R3 = BANK0_R3 & 0x7f;
            DAT_EXTMEM_7fa6 = cEXTMEMcc92;
          }
          DAT_EXTMEM_7fa5 = uEXTMEMcc91;
          uEXTMEMcc93 = 6;
          if ((DAT_EXTMEM_7f84 != 0) && ((bEXTMEMc84b >> 3 & 1) != 1)) {
            BANK0_R3 = BANK0_R3 & 0xfb;
          }
          BANK0_R3 = BANK0_R3 & 0xb;
          if ((bCODE00a9 >> 6 & 1) == 0) {
            bEXTMEMd609 = bCODE00a9;
            if ((char)bCODE00a9 < '\0') {
              BANK0_R3 = 0x23;
            }
            else {
              BANK0_R3 = 3;
            }
          }
          else {
            bEXTMEMd609 = 2;
          }
          if ((bCODE00a9 >> 6 & 1) == 0) {
            bEXTMEMd689 = bCODE00a9;
            if ((char)bCODE00a9 < '\0') {
              BANK0_R3 = 0x23;
            }
            else {
              BANK0_R3 = 3;
            }
          }
          else {
            bEXTMEMd689 = 2;
          }
          if ((bCODE00a9 >> 6 & 1) == 0) {
            bEXTMEMd709 = bCODE00a9;
            if ((char)bCODE00a9 < '\0') {
              BANK0_R3 = 0x23;
            }
            else {
              BANK0_R3 = 3;
            }
          }
          else {
            bEXTMEMd709 = 2;
          }
          if ((bCODE00a9 >> 6 & 1) == 0) {
            bEXTMEMd789 = bCODE00a9;
            if ((char)bCODE00a9 < '\0') {
              BANK0_R3 = 0x23;
            }
            else {
              BANK0_R3 = 3;
            }
          }
          else {
            bEXTMEMd789 = 2;
          }
          if ((char)bCODE00a9 < '\0') {
            uEXTMEMd606 = 2;
            uEXTMEMd686 = 2;
            uEXTMEMd706 = 2;
            uEXTMEMd786 = 2;
          }
          BANK0_R3 = BANK0_R3 & 0xfd | 1;
          bEXTMEMd830 = 1;
          DAT_INTMEM_50 = 0x10;
          DAT_INTMEM_51 = 0x70;
          FUN_CODE_044f(0xd800);
          DAT_EXTMEM_cc0b = 0;
          do {
          } while ((bEXTMEMd830 >> 1 & 1) != 1);
          BANK0_R3 = BANK0_R3 & 0x1c;
          if (DAT_EXTMEM_c850 != 1) break;
          BANK0_R3 = 0;
          uVar7 = 0xd830;
          FUN_CODE_270e();
        }
        uVar7 = 0xd86d;
        FUN_CODE_1603();
        if ((char)uVar7 == '\0') break;
        FUN_CODE_270e();
      }
      BANK0_R3 = BANK0_R3 & 0xfe;
      DAT_EXTMEM_7f7d = 0x10;
      FUN_CODE_0cfa(0x7f01);
      uEXTMEMd802 = 2;
      uEXTMEMce06 = 0x10;
      uEXTMEMd801 = 0x81;
      uEXTMEMd803 = 0xf0;
      bEXTMEMd830 = 0;
      DAT_EXTMEM_7f7e = 4;
      FUN_CODE_2820(0x7f00);
      uVar7 = 0x7fe6;
      if (DAT_EXTMEM_7fe6 == '\0') {
        FUN_CODE_1ac6(0);
        uVar7 = uVar7 & 0xff00;
        FUN_CODE_1b66();
        if ((char)uVar7 == '\0') {
          uEXTMEMd84f = 0;
          uVar7 = 0xd802;
          FUN_CODE_1b66();
          if ((char)uVar7 == '\0') {
            FUN_CODE_1f1a();
            goto LAB_CODE_4c29;
          }
          FUN_CODE_270e();
        }
        else {
          FUN_CODE_270e();
        }
        goto LAB_CODE_488a;
      }
LAB_CODE_4c29:
      DAT_EXTMEM_7fe6 = '\x01';
      uEXTMEMd850 = 0xf;
      uEXTMEMd852 = 0x1f;
      uEXTMEMd853 = 0xff;
      DAT_EXTMEM_7fe1 = cEXTMEMd607;
      DAT_EXTMEM_7fe2 = bEXTMEMd687;
      DAT_EXTMEM_7fe3 = cEXTMEMd707;
      DAT_EXTMEM_7fe4 = bEXTMEMd787;
      uEXTMEMd801 = 0;
      uEXTMEMd810 = 0xff;
      bEXTMEMd80b = 0;
      uEXTMEMd80a = 0;
      DAT_EXTMEM_d804 = 0;
      uEXTMEMd85d = 0xac;
      uEXTMEMd85e = 0xd;
      DAT_INTMEM_50 = 1;
      DAT_INTMEM_51 = 0x1e;
      FUN_CODE_044f(0xd800);
      DAT_EXTMEM_cc0b = 0;
      cEXTMEMcc90 = '\0';
      while ((bEXTMEMcc07 & 1) == 1) {
        if (((bCODE00a7 >> 4 & 1) != 0) && (DAT_EXTMEM_7f84 == 0)) {
          DAT_INTMEM_50 = 0x20;
          DAT_INTMEM_51 = 0x53;
          FUN_CODE_044f(0x7f00,0);
          uEXTMEMd254 = 0xff;
          uEXTMEMd255 = 0xff;
          BANK0_R3 = BANK0_R3 & 0xdf;
          uEXTMEMd238 = 4;
        }
        if (BANK0_R4 <= DAT_EXTMEM_cc0b) {
          cEXTMEMcc90 = cEXTMEMcc90 + '\x01';
          DAT_EXTMEM_cc0b = 0;
          if (cEXTMEMcc90 == '\n') {
            BANK0_R3 = BANK0_R3 & 0xfb;
          }
          if ((cEXTMEMcc90 == 'd') && ((bCODE00a7 & 1) == 1)) {
            FUN_CODE_05db(0xff,bCODE00a7,uEXTMEMc848);
          }
        }
      }
      DAT_INTMEM_50 = 1;
      DAT_INTMEM_51 = 0x2c;
      FUN_CODE_044f(0xcc00,bEXTMEMcc07);
      if ((bCODE00a7 & 1) != 0) {
        FUN_CODE_05db(0,bCODE00a7);
      }
      if ((char)bCODE00a7 < '\0') {
        FUN_CODE_056c(bCODE00a7);
      }
      while ((((bEXTMEMc84b & 1) != 0 && (uVar7 = 0xcc9b, bVar3 = bEXTMEMcc9b, bEXTMEMcc9b < 0xb))
             || (uVar7 = 0xc808, bVar3 = DAT_EXTMEM_c808, (DAT_EXTMEM_c808 & 1) != 0))) {
        DAT_INTMEM_50 = 0x20;
        DAT_INTMEM_51 = 0x41;
        FUN_CODE_044f(uVar7 & 0xff00,bVar3);
      }
      DAT_EXTMEM_7f7d = 0;
      DAT_EXTMEM_7ffc = 0;
      DAT_EXTMEM_7fbe = '\0';
      DAT_EXTMEM_7fbf = '\0';
      DAT_EXTMEM_7fbd = '\0';
      DAT_EXTMEM_7fb5 = '\0';
      DAT_EXTMEM_7fb4 = '\0';
      DAT_EXTMEM_7eb9 = '\0';
      DAT_EXTMEM_7fab = 0;
      DAT_EXTMEM_7fa9 = 0;
      DAT_EXTMEM_7faa = 0;
      DAT_EXTMEM_7fb3 = 0;
      BANK0_R3 = BANK0_R3 | 2;
      if ((DAT_EXTMEM_c800 & 1) == 1) {
        DAT_EXTMEM_cc0b = 0;
        DAT_INTMEM_50 = 1;
        DAT_INTMEM_51 = 2;
        FUN_CODE_044f(0xcc00,DAT_EXTMEM_c800);
        if (DAT_INTMEM_4d == '\0') {
          if ((bEXTMEMc84b >> 2 & 1) == 1) {
            DAT_INTMEM_50 = 0xeb;
            FUN_CODE_2389(0xc801,bEXTMEMc84b);
          }
          else {
            DAT_INTMEM_50 = uEXTMEMc848;
            FUN_CODE_2389(0xc801,bEXTMEMc84b);
          }
        }
        DAT_INTMEM_4d = '\x01';
        uEXTMEMcc0c = 99;
        DAT_EXTMEM_c804 = 0x80;
        uEXTMEMca5a = 0;
        BANK0_R3 = BANK0_R3 | 4;
        DAT_EXTMEM_7f7e = 4;
        uEXTMEMd836 = 8;
        FUN_CODE_11e5();
        bEXTMEMcc95 = 0;
        uEXTMEMcc96 = 0;
LAB_CODE_4e4a:
        do {
          FUN_CODE_2242();
          bEXTMEMcc95 = bEXTMEMcc95 + 1;
          if (((bCODE00a6 >> 2 & 1) != 1) && ((bEXTMEMcc95 & 0xf) == 0)) {
            FUN_CODE_0860(bEXTMEMcc95);
          }
          DAT_EXTMEM_d602 = 0x10;
          DAT_EXTMEM_d603 = 0x2b;
          DAT_EXTMEM_d682 = 0x10;
          DAT_EXTMEM_d683 = 0x2b;
          DAT_EXTMEM_d702 = 0x10;
          DAT_EXTMEM_d703 = 0x2b;
          DAT_EXTMEM_d782 = 0x10;
          DAT_EXTMEM_d783 = 0x2b;
          DAT_INTMEM_50 = 2;
          DAT_INTMEM_51 = 0x25;
          FUN_CODE_044f(0xd700);
          uEXTMEMd40f = 3;
          BANK0_R3 = BANK0_R3 & 0xfe;
          DAT_EXTMEM_cc0b = 0;
          DAT_EXTMEM_7fe5 = 0;
          do {
            uVar7 = 0xd4cc;
            if ((bEXTMEMd4cc & 1) == 1) {
              if (((bEXTMEMd4cc >> 1 & 1) == 0) || (cEXTMEMd4b6 != '\x06')) {
                BANK0_R3 = BANK0_R3 | 2;
                goto LAB_CODE_4e4a;
              }
              FUN_CODE_129a();
              if (((DAT_EXTMEM_d4b5 < 9) << 7 < '\0') ||
                 ((DAT_EXTMEM_d4b5 == 9 && (DAT_EXTMEM_d4b4 < 0xc4)))) {
                uEXTMEMd60c = 2;
                uEXTMEMd68c = 2;
                uEXTMEMd70c = 2;
                uEXTMEMd78c = 2;
              }
              else if (((DAT_EXTMEM_d4b5 < 0x13) << 7 < '\0') ||
                      ((DAT_EXTMEM_d4b5 == 0x13 && (DAT_EXTMEM_d4b4 < 0x88)))) {
                uEXTMEMd60c = 1;
                uEXTMEMd68c = 1;
                uEXTMEMd70c = 1;
                uEXTMEMd78c = 1;
              }
              else {
                uEXTMEMd60c = 0;
                uEXTMEMd68c = 0;
                uEXTMEMd70c = 0;
                uEXTMEMd78c = 0;
              }
              uVar7 = 0xd707;
              FUN_CODE_2820(0xd707);
              DAT_INTMEM_50 = 2;
              DAT_INTMEM_51 = 0x14;
              uVar7 = uVar7 & 0xff00;
              FUN_CODE_044f(uVar7);
              DAT_INTMEM_50 = 2;
              DAT_INTMEM_51 = 0x68;
              FUN_CODE_044f(uVar7 & 0xff00);
              DAT_INTMEM_50 = 2;
              DAT_INTMEM_51 = 2;
              FUN_CODE_044f(1);
              DAT_INTMEM_51 = DAT_EXTMEM_d4b5;
              DAT_INTMEM_50 = 2;
              FUN_CODE_044f(0xd401);
              DAT_INTMEM_51 = DAT_EXTMEM_d4b4;
              DAT_INTMEM_50 = 2;
              FUN_CODE_044f(0xd401);
              DAT_EXTMEM_cc0b = 0;
              DAT_EXTMEM_7fe5 = 0;
              goto LAB_CODE_4fe8;
            }
            FUN_CODE_07f4(bEXTMEMd4cc);
            if ((char)uVar7 == '\x01') goto LAB_CODE_488a;
          } while ((char)uVar7 != '\x02');
          BANK0_R3 = BANK0_R3 | 1;
        } while( true );
      }
      DAT_INTMEM_4d = '\0';
      if ((bCODE00a7 >> 5 & 1) == 1) {
        BANK1_R2 = 0;
        BANK1_R3 = 0;
        BANK1_R4 = 0;
        BANK1_R5 = 0;
        FUN_CODE_26be(0xc,bCODE00a7);
        bEXTMEMcc09 = 0;
        do {
          if ((bEXTMEMcc07 >> 2 & 1) == 1) break;
        } while (BANK0_R3 < 0xf1);
        if (BANK0_R3 < 0xf1) {
          DAT_INTMEM_50 = 0x20;
          DAT_INTMEM_51 = 6;
          FUN_CODE_044f(0xcc00,0);
          DAT_INTMEM_48 = 0x35;
          DAT_INTMEM_49 = -0x34;
          DAT_INTMEM_4a = 0;
          cVar2 = FUN_CODE_67d0(0xcc37,0);
          uVar4 = cVar2 != '\0';
          cVar2 = FUN_CODE_67d0(CONCAT11(DAT_INTMEM_49 - (((0xfe < DAT_INTMEM_48) << 7) >> 7),
                                         DAT_INTMEM_48 + 1),DAT_INTMEM_4a);
          BANK0_R7 = BANK0_R7 & 0xf;
          if (cVar2 == '\f') {
            DAT_EXTMEM_0120 = uVar4;
          }
        }
        else {
          DAT_EXTMEM_0120 = 0;
        }
      }
      BANK0_R0 = BANK0_R0 & 0xfb;
      DAT_INTMEM_50 = uEXTMEMc848;
      FUN_CODE_2389(CONCAT11(200,uEXTMEMc848));
      bVar3 = BANK0_R0;
      BANK0_R0 = BANK0_R0 | 4;
      DAT_EXTMEM_7fb6 = '\0';
      uVar4 = 0x7f;
      bVar5 = DAT_EXTMEM_7f84;
      if (DAT_EXTMEM_7f84 == 0) {
        uVar4 = 0xd2;
        BANK0_R0 = bVar3 & 0xf | 4;
        bVar5 = DAT_EXTMEM_d25c;
        if (2 < BANK0_R0) goto LAB_CODE_53a2;
      }
      else {
LAB_CODE_53a2:
        BANK1_R2 = 0;
        BANK1_R3 = 0;
        BANK1_R4 = 0;
        BANK1_R5 = 0;
        FUN_CODE_26be(CONCAT11(uVar4,9),bVar5);
        bEXTMEMcc09 = 0;
        do {
          if ((bEXTMEMcc07 >> 2 & 1) == 1) break;
        } while (BANK0_R0 < 0xf1);
        if (BANK0_R0 < 0xf1) {
          DAT_INTMEM_48 = 0x35;
          DAT_INTMEM_49 = -0x34;
          DAT_INTMEM_4a = 0;
          bVar3 = FUN_CODE_67d0(0xcc36,0);
          if ((bVar3 & 0xf) == 9) {
            cVar2 = FUN_CODE_67d0(CONCAT11(DAT_INTMEM_49 - (((0xfd < DAT_INTMEM_48) << 7) >> 7),
                                           DAT_INTMEM_48 + 2),DAT_INTMEM_4a);
            DAT_EXTMEM_7fe7 = cVar2 != '\0';
          }
          else {
            DAT_EXTMEM_7fe7 = 0;
          }
        }
        else {
          DAT_EXTMEM_7fe7 = 0;
        }
      }
      BANK0_R2 = BANK0_R2 | 0x80;
      uEXTMEMcc0c = 99;
      uEXTMEMca5a = 0;
      DAT_INTMEM_50 = 1;
      DAT_INTMEM_51 = 4;
      uVar4 = 0xca;
      FUN_CODE_044f(0xca00);
      BANK1_R2 = 0;
      BANK1_R3 = 0;
      BANK1_R4 = 0;
      BANK1_R5 = 1;
      FUN_CODE_26be(CONCAT11(uVar4,8));
      if (DAT_EXTMEM_7f84 == 0) {
        bVar3 = BANK0_R2;
        if ((((bEXTMEMd252 >> 5 & 1) != 1) && ((bEXTMEMd218 & 1) != 0)) &&
           (bVar3 = BANK0_R2 & 0xf, 1 < (BANK0_R2 & 0xf))) {
          bVar3 = BANK0_R2 & 0xb;
        }
        BANK0_R2 = bVar3;
        if ((DAT_EXTMEM_d25c & 0xf) == 0) {
          BANK0_R2 = BANK0_R2 | 0x40;
        }
        else {
          BANK0_R2 = BANK0_R2 & 0xbf;
        }
        bVar3 = DAT_EXTMEM_d25d & 0xf;
        FUN_CODE_22d9();
        if (((bEXTMEMd252 >> 5 & 1) == 1) ||
           ((((DAT_EXTMEM_d25c & 0xf) != 0 || ((bEXTMEMd252 >> 3 & 1) != 1)) &&
            (((DAT_EXTMEM_d25c & 0xf) == 0 || ((bEXTMEMd252 >> 2 & 1) == 0)))))) {
          DAT_EXTMEM_7ffc = false;
        }
        else {
          DAT_EXTMEM_7ffc = true;
          if ((char)DAT_EXTMEM_d25d < '\0') {
            uEXTMEMcaa5 = 2;
          }
        }
        DAT_EXTMEM_7f7f = bVar3;
        if ((DAT_EXTMEM_d25c & 0xf) == 0) {
          DAT_EXTMEM_caa3 = 0;
        }
        else {
          DAT_EXTMEM_caa3 = 7;
          BANK0_R2 = BANK0_R2 | 0x20;
        }
      }
      else {
        DAT_EXTMEM_7f7f = 0x10;
        BANK0_R2 = BANK0_R2 & 8;
        DAT_EXTMEM_7ffc = bEXTMEMc84b == 0;
        uEXTMEMcaa5 = 2;
      }
      BANK0_R2 = BANK0_R2 | 0xd1;
      if (((bool)DAT_EXTMEM_7ffc != false) &&
         (BANK0_R2 = BANK0_R2 & 0xfe | 0x78, DAT_EXTMEM_7f84 == 0)) {
        bEXTMEMd208 = bEXTMEMd208 & 0xf7 | 4;
      }
      bVar3 = BANK0_R2;
      DAT_EXTMEM_7fa2 = '\0';
      DAT_EXTMEM_7f76 = '\0';
      DAT_EXTMEM_7f77 = '\0';
      DAT_EXTMEM_7f78 = '\0';
      DAT_EXTMEM_7f79 = '\0';
      DAT_EXTMEM_7f7a = '\0';
      DAT_EXTMEM_7f7b = 0;
      uEXTMEM7f83 = 0;
      uEXTMEM7f82 = 0;
      uEXTMEM7f81 = 0;
      DAT_EXTMEM_7f80 = 0;
      DAT_EXTMEM_7ffa = '\0';
      DAT_EXTMEM_7f86 = 0;
      DAT_EXTMEM_7f87 = '\0';
      DAT_EXTMEM_7f7e = 0;
      DAT_EXTMEM_7f7c = 0;
      uEXTMEM7f8f = 0;
      DAT_EXTMEM_7f8e = 0;
      uEXTMEM7f91 = 0;
      DAT_EXTMEM_7f90 = 0;
      DAT_EXTMEM_7f92 = 0;
      DAT_EXTMEM_7f93 = 0xe7;
      param_1 = 0xe7;
      DAT_EXTMEM_7f99 = 0;
      DAT_EXTMEM_7f9a = 0;
      DAT_EXTMEM_7f9b = 0;
      DAT_EXTMEM_7f9d = 0;
      DAT_EXTMEM_7f9c = 0;
      DAT_EXTMEM_7f85 = 0;
      DAT_EXTMEM_7f9e = 0;
      DAT_EXTMEM_7f9f = '\0';
      DAT_EXTMEM_7fa0 = '\0';
      DAT_EXTMEM_7fa1 = 0;
      DAT_EXTMEM_7fbc = '\0';
      DAT_EXTMEM_7fe0 = '\0';
      DAT_EXTMEM_7fa3 = '\0';
      DAT_EXTMEM_7fb8 = '\0';
      DAT_EXTMEM_7fec = 0;
      BANK1_R0 = '\0';
      BANK1_R1 = '\0';
      DAT_EXTMEM_7ff2 = 0;
      DAT_EXTMEM_7ff3 = '\0';
      DAT_EXTMEM_7ff4 = '\0';
      DAT_EXTMEM_7ffb = '\0';
      DAT_EXTMEM_7ff9 = 0;
      DAT_EXTMEM_7fff = 0;
      DAT_EXTMEM_7ff1 = 0;
      DAT_EXTMEM_7fdd = 0;
      DAT_EXTMEM_7fb7 = 0;
      DAT_EXTMEM_7eab = 0;
      DAT_EXTMEM_7eac = 0;
      DAT_EXTMEM_7ead = 0;
      DAT_EXTMEM_7ea6 = 0;
      DAT_EXTMEM_7ea7 = '\0';
      FUN_CODE_1f5c();
      DAT_EXTMEM_7fb9 = DAT_EXTMEM_c84a == '\0';
      DAT_EXTMEM_7fba = DAT_EXTMEM_c84a == '\0';
      BANK0_R0 = 0;
      DAT_EXTMEM_7fbb = DAT_EXTMEM_c84a != '\0';
      DAT_EXTMEM_7f75 = bEXTMEMcc8e & 1;
      BANK0_R2 = bVar3;
      if (DAT_EXTMEM_7f75 == 0) {
        DAT_EXTMEM_caa9 = 0;
      }
      else {
        DAT_EXTMEM_caa9 = 0xff;
      }
      goto LAB_CODE_5707;
    }
    if ((bEXTMEM7ffd >> 4 & 1) == 1) {
      if (DAT_EXTMEM_7fe0 == '\0') {
        BANK0_R2 = bVar3;
        FUN_CODE_41f1(0);
        if (DAT_EXTMEM_7f79 != '\0') {
          DAT_EXTMEM_7f77 = '\x01';
        }
      }
      else if (DAT_EXTMEM_7ff3 == '\0') {
        DAT_EXTMEM_7fe0 = '\0';
        DAT_EXTMEM_ca20 = 1;
        DAT_EXTMEM_ca21 = 0;
        uEXTMEMca08 = 1;
        DAT_EXTMEM_7f9d = 0;
      }
      else {
        DAT_EXTMEM_7ff2 = 0;
        DAT_EXTMEM_7ff3 = '\0';
        DAT_EXTMEM_ca20 = 2;
        DAT_EXTMEM_ca21 = 1;
        uEXTMEMca22 = 0;
        DAT_EXTMEM_ca23 = 0;
        uEXTMEMca08 = 1;
        DAT_EXTMEM_7f9d = 0;
      }
      DAT_EXTMEM_ca0e = 1;
      DAT_EXTMEM_7f78 = '\0';
      bEXTMEM7ffd = bEXTMEM7ffd & 0xfe;
    }
    if ((bEXTMEM7ffd >> 3 & 1) == 1) {
      DAT_EXTMEM_7ff4 = '\x01';
      DAT_EXTMEM_7fbd = '\0';
      if ((DAT_EXTMEM_7ff3 == '\0' & DAT_EXTMEM_7ff2) == 0) {
        if (cEXTMEMca81 == '\x02') {
          uEXTMEMca0d = 1;
          DAT_EXTMEM_7f9d = 0;
          DAT_EXTMEM_7fbf = '\0';
          DAT_EXTMEM_7f76 = DAT_EXTMEM_7f78 == '\0';
          DAT_EXTMEM_7fbd = '\x01';
          if (DAT_EXTMEM_7f78 != '\0') {
            DAT_EXTMEM_ca61 = 0xf;
          }
        }
        else {
          if (((DAT_EXTMEM_7fbf != '\0') && (DAT_EXTMEM_7fbf = '\0', (bEXTMEMc84b >> 6 & 1) != 1))
             && ((bEXTMEMca83 >> 2 & 1) != 0)) {
            BANK0_R2 = bVar3;
            FUN_CODE_1f5c(bEXTMEMca83);
          }
          if (DAT_EXTMEM_7f78 == '\0') {
            uEXTMEMca0d = 1;
            DAT_EXTMEM_7f76 = '\x01';
          }
          else if (DAT_EXTMEM_7f9f == '\0') {
            if (DAT_EXTMEM_7f79 == '\0') {
              if (BANK1_R0 != '\0' || BANK1_R1 != '\0') {
                BANK0_R2 = bVar3;
                FUN_CODE_2402(0);
              }
              if ((DAT_EXTMEM_7fec & 1) == 0) {
                DAT_EXTMEM_7fed = 1;
              }
              else {
                DAT_EXTMEM_7fed = 2;
              }
              bEXTMEMca09 = DAT_EXTMEM_7fed;
            }
            else {
              if (BANK1_R0 != '\0' || BANK1_R1 != '\0') {
                BANK0_R2 = bVar3;
                FUN_CODE_2402(DAT_EXTMEM_7f79);
              }
              if ((DAT_EXTMEM_7fee != '\0') && (cEXTMEMca81 != '\x01')) {
                BANK0_R2 = bVar3;
                FUN_CODE_1f9b();
              }
              DAT_EXTMEM_7fee = '\0';
              DAT_EXTMEM_7f79 = '\0';
              DAT_INTMEM_50 = 0x20;
              DAT_INTMEM_51 = 0x32;
              BANK0_R2 = bVar3;
              FUN_CODE_044f(0x7f00);
              if ((cEXTMEMca81 != '\x01') && (DAT_EXTMEM_7f7a != '\0')) {
                DAT_EXTMEM_cad0 = 2;
              }
              DAT_EXTMEM_7f7a = '\0';
              bEXTMEMca09 = 1;
            }
            DAT_EXTMEM_7f9d = 0;
            DAT_EXTMEM_7f78 = '\0';
            DAT_EXTMEM_ca61 = 0xf;
          }
        }
      }
      else {
        DAT_EXTMEM_7ff2 = 0;
        if (cEXTMEMca81 == '\x01') {
          DAT_EXTMEM_7ff3 = '\x01';
        }
        else {
          DAT_EXTMEM_7ff3 = '\0';
        }
      }
    }
    bVar5 = BANK0_R0;
    uVar7 = 0x7ffb;
    if ((DAT_EXTMEM_7ffb == '\0' & bEXTMEM7ffd & DAT_EXTMEM_7f9f == '\0') != 0) {
      cVar2 = '\0';
      if (((((bEXTMEMcb4a >> 4 & 1) == 1) || (DAT_EXTMEM_7ff2 == 0)) || ((DAT_EXTMEM_ca9f & 1) != 0)
          ) && (((DAT_EXTMEM_c850 >> 1 & 1) == 1 || (3 < bEXTMEMcc09)))) {
        if (((bEXTMEM7ffe >> 1 & 1) == 1) && (DAT_EXTMEM_7fa0 == '\0')) {
          cVar2 = '\x01';
          if (DAT_EXTMEM_7f76 == '\0') {
            if (DAT_EXTMEM_7fec == 1) {
              if (DAT_EXTMEM_7f77 == '\0') {
                if ((DAT_EXTMEM_7f79 == '\0') || (BANK0_R0 = bVar5, 2 < DAT_EXTMEM_7f9d)) {
                  cVar2 = '\0';
                  DAT_EXTMEM_7f78 = '\0';
                  DAT_EXTMEM_7f79 = '\0';
                  DAT_EXTMEM_7ffb = '\0';
                  DAT_EXTMEM_7f76 = '\0';
                  DAT_EXTMEM_7f9d = 0;
                  BANK0_R0 = bVar5;
                }
              }
              else {
                BANK0_R0 = bVar5;
                if (DAT_EXTMEM_7f79 == '\0') {
                  uEXTMEMca08 = 1;
                  DAT_EXTMEM_7f9d = 0;
                }
              }
            }
            else if ((DAT_EXTMEM_7f9d < 3) << 7 < '\0') {
              DAT_EXTMEM_7f78 = '\x01';
              DAT_EXTMEM_ca0c = 1;
              BANK0_R0 = bVar5;
            }
            else {
              cVar2 = '\0';
              DAT_EXTMEM_7f78 = '\0';
              DAT_EXTMEM_7f79 = '\0';
              DAT_EXTMEM_7ffb = '\0';
              DAT_EXTMEM_7f7a = '\0';
              DAT_EXTMEM_7f76 = '\0';
              DAT_EXTMEM_7f9d = 0;
              DAT_EXTMEM_7ff2 = 0;
              uEXTMEMcad1 = 1;
              BANK0_R0 = bVar5;
            }
          }
          else if (cEXTMEMca81 == '\x02') {
            DAT_EXTMEM_7f78 = '\x01';
            cVar2 = '\0';
            BANK0_R0 = bVar5;
          }
          else {
            if (DAT_EXTMEM_7f79 == '\0') {
              if (BANK1_R0 != '\0' || BANK1_R1 != '\0') {
                BANK0_R2 = bVar3;
                FUN_CODE_2402(0);
              }
              if ((DAT_EXTMEM_7fec & 1) == 0) {
                DAT_EXTMEM_7fed = 1;
              }
              else {
                DAT_EXTMEM_7fed = 2;
              }
              bEXTMEMca09 = DAT_EXTMEM_7fed;
            }
            else {
              if (BANK1_R0 != '\0' || BANK1_R1 != '\0') {
                BANK0_R2 = bVar3;
                FUN_CODE_2402(DAT_EXTMEM_7f79);
              }
              if ((DAT_EXTMEM_7fee != '\0') && (cEXTMEMca81 != '\x01')) {
                BANK0_R0 = bVar5;
                BANK0_R2 = bVar3;
                FUN_CODE_1f9b();
              }
              DAT_EXTMEM_7fee = '\0';
              DAT_EXTMEM_7f79 = '\0';
              DAT_INTMEM_50 = 0x20;
              DAT_INTMEM_51 = 0x32;
              BANK0_R0 = bVar5;
              BANK0_R2 = bVar3;
              FUN_CODE_044f(0x7f00);
              if ((cEXTMEMca81 != '\x01') && (DAT_EXTMEM_7f7a != '\0')) {
                DAT_EXTMEM_cad0 = 2;
              }
              DAT_EXTMEM_7f7a = '\0';
              bEXTMEMca09 = 1;
            }
            DAT_EXTMEM_7f9d = 0;
            DAT_EXTMEM_ca61 = 0xf;
            DAT_EXTMEM_ca0c = 1;
            BANK0_R0 = bVar5;
          }
        }
        else if ((((bEXTMEMcb4a >> 3 & 1) == 1) ||
                 (((DAT_EXTMEM_7f9d == 0 || (2 < DAT_EXTMEM_7f9d)) || (DAT_EXTMEM_7ff4 != '\0'))))
                || ((DAT_EXTMEM_ca9f & 1) == 1)) {
          DAT_EXTMEM_7f9d = 0;
          BANK0_R0 = bVar5;
        }
        else {
          DAT_INTMEM_50 = 0x20;
          DAT_INTMEM_51 = 0x1d;
          BANK0_R2 = bVar3;
          FUN_CODE_044f(0xca00,DAT_EXTMEM_ca9f);
          DAT_EXTMEM_ca0c = 1;
          DAT_EXTMEM_ca61 = 0xf;
          cVar2 = '\x01';
        }
      }
      else {
        cVar2 = '\x01';
        DAT_EXTMEM_ca0c = 1;
        DAT_EXTMEM_ca61 = 0xf;
        BANK0_R0 = bVar5;
      }
      DAT_EXTMEM_7f77 = '\0';
      if (DAT_EXTMEM_7fb6 == '\0' && cVar2 == '\0') {
        DAT_EXTMEM_7fa0 = '\0';
        BANK0_R2 = bVar3;
        FUN_CODE_42b8(DAT_EXTMEM_7fb6 == '\0');
      }
      uVar7 = 0x7f76;
      DAT_EXTMEM_7f76 = '\0';
    }
    DAT_INTMEM_48 = 0x35;
    DAT_INTMEM_49 = -0x34;
    DAT_INTMEM_4a = 0;
    BANK0_R2 = bVar3;
    if ((DAT_INTMEM_47 >> 2 & 1) == 1) {
      DAT_INTMEM_50 = 0x20;
      DAT_INTMEM_51 = 6;
      FUN_CODE_044f(uVar7 & 0xff00);
      BANK0_R2 = bVar3;
      bVar3 = FUN_CODE_67d0(CONCAT11(DAT_INTMEM_49,DAT_INTMEM_48),DAT_INTMEM_4a);
      DAT_INTMEM_4b = bVar3 & 7;
      DAT_INTMEM_4c = bVar3 & 0x18;
      cVar2 = FUN_CODE_67d0(CONCAT11(DAT_INTMEM_49 - (((0xfe < DAT_INTMEM_48) << 7) >> 7),
                                     DAT_INTMEM_48 + 1),DAT_INTMEM_4a);
      uVar7 = CONCAT11(DAT_INTMEM_49 - (((0xfd < DAT_INTMEM_48) << 7) >> 7),DAT_INTMEM_48 + 2);
      uVar4 = FUN_CODE_67d0(uVar7,DAT_INTMEM_4a);
      if (BANK0_R7 < 0x10) {
                    /* WARNING: Could not recover jumptable at 0x5f8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ushort)(byte)(cVar2 * '\x03') + 0x5f90))(uVar4);
        return;
      }
    }
  } while( true );
  while( true ) {
    FUN_CODE_07f4(bVar3);
    if ((char)uVar7 == '\x01') goto LAB_CODE_488a;
    if ((char)uVar7 == '\x02') break;
LAB_CODE_4fe8:
    DAT_EXTMEM_7fed = DAT_EXTMEM_d80d & 7;
    uVar7 = 0x7fed;
    BANK0_R3 = BANK0_R3 & 7;
    bVar3 = DAT_EXTMEM_7fed;
    if ((DAT_EXTMEM_7fed == 7) && (uVar7 = 0xd4cc, bVar3 = bEXTMEMd4cc, (bEXTMEMd4cc & 1) == 1))
    goto LAB_CODE_5025;
  }
  BANK0_R3 = BANK0_R3 | 4;
  goto LAB_CODE_4e4a;
LAB_CODE_5025:
  while (bEXTMEMcc9b == 1) {
    DAT_INTMEM_50 = 0x20;
    DAT_INTMEM_51 = 0x42;
    FUN_CODE_044f(0xcc00);
  }
  FUN_CODE_1465();
  DAT_EXTMEM_cc0b = 0;
  DAT_EXTMEM_7fe5 = 0;
  do {
    BANK0_R3 = BANK0_R3 & 0xf0;
    uVar7 = 0xd868;
    BANK0_R4 = BANK0_R4 & 0xf0;
    if (bEXTMEMd819 == BANK0_R4) {
      FUN_CODE_15c1();
      FUN_CODE_1403();
      BANK0_R3 = BANK0_R3 & 0xf0;
      DAT_EXTMEM_7fed = ~DAT_EXTMEM_d804 >> 4;
      DAT_EXTMEM_cc0b = 0;
      DAT_EXTMEM_7fe5 = 0;
      goto LAB_CODE_50b3;
    }
    FUN_CODE_07f4(DAT_EXTMEM_d868);
    if ((char)uVar7 == '\x01') goto LAB_CODE_488a;
  } while ((char)uVar7 != '\x02');
  FUN_CODE_15c1();
  BANK0_R3 = BANK0_R3 | 8;
  goto LAB_CODE_4e4a;
LAB_CODE_50b3:
  BANK0_R3 = BANK0_R3 & DAT_EXTMEM_7fed;
  uVar7 = 0x7fed;
  if (bEXTMEMd84e != BANK0_R4) {
    FUN_CODE_07f4(DAT_EXTMEM_7fed);
    if ((char)uVar7 == '\x01') goto LAB_CODE_488a;
    if ((char)uVar7 == '\x02') goto code_c0x50d7;
    goto LAB_CODE_50b3;
  }
  if (((bCODE00a6 >> 1 & 1) != 1) && (DAT_EXTMEM_7eaa == '\0')) {
    do {
    } while( true );
  }
  if ((bCODE00a9 >> 4 & 1) != 0) {
    FUN_CODE_04d0(bCODE00a9);
  }
  while (bEXTMEMcc9b == 2) {
    DAT_INTMEM_50 = 0x20;
    DAT_INTMEM_51 = 0x43;
    FUN_CODE_044f(0xcc00);
  }
  DAT_INTMEM_50 = 2;
  DAT_INTMEM_51 = 0x26;
  FUN_CODE_044f(0xcc00);
  DAT_EXTMEM_cc0b = 0;
  DAT_EXTMEM_7fe5 = 0;
  do {
    DAT_EXTMEM_7fed = DAT_EXTMEM_d80d & 7;
    uVar7 = 0x7fed;
    BANK0_R3 = BANK0_R3 & 7;
    bVar3 = DAT_EXTMEM_7fed;
    if ((DAT_EXTMEM_7fed == 7) && (uVar7 = 0xd4cc, bVar3 = bEXTMEMd4cc, (bEXTMEMd4cc & 1) != 0)) {
      uEXTMEMc80f = 0;
      uVar7 = 0xcc00;
      uEXTMEMcc00 = 0;
      FUN_CODE_226e();
      DAT_INTMEM_50 = 2;
      DAT_INTMEM_51 = 0x27;
      FUN_CODE_044f(uVar7 & 0xff00);
      DAT_EXTMEM_cc0b = 0;
      DAT_EXTMEM_7fe5 = 0;
      goto LAB_CODE_51aa;
    }
    FUN_CODE_07f4(bVar3);
    if ((char)uVar7 == '\x01') goto LAB_CODE_488a;
  } while ((char)uVar7 != '\x02');
  BANK0_R3 = BANK0_R3 | 0x20;
  goto LAB_CODE_4e4a;
code_c0x50d7:
  BANK0_R3 = BANK0_R3 | 0x10;
  goto LAB_CODE_4e4a;
LAB_CODE_51aa:
  DAT_EXTMEM_7fed = bEXTMEMc803 & 0x80;
  uVar7 = 0x7fed;
  if (DAT_EXTMEM_7fed == 0) {
    FUN_CODE_07f4(0);
    if ((char)uVar7 == '\x01') goto LAB_CODE_488a;
    if ((char)uVar7 == '\x02') goto code_c0x51cb;
    goto LAB_CODE_51aa;
  }
  DAT_EXTMEM_cc0b = 0;
  do {
  } while ((BANK0_R4 != 0) << 7 < '\0');
  DAT_EXTMEM_7fed = cEXTMEMd085;
  DAT_INTMEM_50 = 1;
  DAT_INTMEM_51 = 3;
  FUN_CODE_044f(0x7f00,bEXTMEMc849 >> 4);
  DAT_EXTMEM_7fed = bEXTMEMc849;
  while( true ) {
    while (uVar7 = 0xcc9b, bEXTMEMcc9b == 3) {
      DAT_INTMEM_50 = 0x20;
      DAT_INTMEM_51 = 0x44;
      FUN_CODE_044f(0xcc00);
    }
    FUN_CODE_2369();
    if ((char)uVar7 != '\0') goto LAB_CODE_488a;
    bVar1 = (DAT_EXTMEM_7fed & 1) == 0;
    bVar3 = BANK0_R3 & 0xf;
    if (((bVar1 & bEXTMEMc803) != 0) ||
       (bVar1 = (DAT_EXTMEM_7fed & 2) == 0, (bVar1 & bEXTMEMc840) != 0)) break;
    BANK0_R3 = BANK0_R3 & 3;
    bVar1 = (DAT_EXTMEM_7fed & 4) == 0;
    bVar3 = BANK0_R3;
    if (((bVar1 & bEXTMEMc841) != 0) ||
       (bVar1 = (DAT_EXTMEM_7fed & 8) == 0, bVar1 && cEXTMEMd085 != '?')) break;
  }
  BANK0_R3 = bVar3;
  FUN_CODE_270e(bVar1);
  BANK0_R3 = BANK0_R3 | 0x80;
  goto LAB_CODE_4e4a;
code_c0x51cb:
  BANK0_R3 = BANK0_R3 | 0x40;
  goto LAB_CODE_4e4a;
}



/* =========================================================
 * CODE:5fd1  FUN_CODE_5fd1  size=128
 * ========================================================= */

/* WARNING: Removing unreachable block (CODE,0x576b) */
/* WARNING: Removing unreachable block (CODE,0x50a2) */
/* WARNING: Removing unreachable block (CODE,0x6438) */

void FUN_CODE_5fd1(byte param_1)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  undefined1 uVar4;
  byte bVar5;
  byte bVar6;
  ushort uVar7;
  
  bVar3 = BANK0_R2;
  uVar7 = 0x7f7d;
  BANK0_R2 = bVar3;
  if ((DAT_EXTMEM_7f7d == DAT_INTMEM_4c) && (uVar7 = 0x7f7e, DAT_EXTMEM_7f7e == DAT_INTMEM_4b)) {
    DAT_EXTMEM_d868 = 4;
    DAT_INTMEM_50 = 1;
    DAT_INTMEM_51 = 9;
    FUN_CODE_044f(0xd800,DAT_EXTMEM_7f7e);
    bVar5 = BANK0_R7;
    BANK0_R7 = BANK0_R7 | 8;
    if (DAT_EXTMEM_7fa2 == '\x05') {
      DAT_EXTMEM_7fa2 = '\x06';
      DAT_EXTMEM_c804 = 0x84;
      bVar6 = DAT_EXTMEM_7f84;
      if (DAT_EXTMEM_7f84 == 0) {
        BANK0_R7 = bVar5 | 0x28;
        bVar6 = DAT_EXTMEM_d200;
      }
      BANK0_R2 = bVar3;
      FUN_CODE_226e(bVar6);
      DAT_EXTMEM_cc0b = 0;
    }
    DAT_EXTMEM_7fab = 0;
    uVar7 = 0x7eab;
    DAT_EXTMEM_7eab = 4;
    BANK0_R2 = bVar3;
  }
  do {
    bVar3 = BANK0_R2;
    if ((DAT_INTMEM_47 & 0x28) != 0) {
      DAT_INTMEM_50 = 1;
      DAT_INTMEM_51 = 0x10;
      uVar7 = uVar7 & 0xff00;
      FUN_CODE_044f(uVar7);
      DAT_INTMEM_50 = 1;
      DAT_INTMEM_51 = 0x68;
      FUN_CODE_044f(uVar7 & 0xff00);
      DAT_INTMEM_50 = 1;
      DAT_INTMEM_51 = 1;
      FUN_CODE_044f(1);
      DAT_INTMEM_50 = 1;
      DAT_INTMEM_51 = DAT_INTMEM_47;
      FUN_CODE_044f(1);
      FUN_CODE_270e();
      if ((DAT_EXTMEM_7fa7 != '\x02') && (DAT_EXTMEM_7fa7 != '\x05')) {
        BANK0_R2 = bVar3;
        FUN_CODE_421d(0x7f4b);
      }
      do {
      } while( true );
    }
LAB_CODE_5707:
    bVar3 = BANK0_R2;
    uVar7 = 0xcc9b;
    if (bEXTMEMcc9b == 1) {
      bVar5 = 1;
LAB_CODE_5719:
      DAT_INTMEM_50 = 0x20;
      DAT_INTMEM_51 = 0x45;
      FUN_CODE_044f(uVar7 & 0xff00,bVar5);
      BANK0_R2 = bVar3;
      goto LAB_CODE_5707;
    }
    uVar7 = 0xc808;
    bVar5 = DAT_EXTMEM_c808;
    if ((DAT_EXTMEM_c808 & 1) != 0) goto LAB_CODE_5719;
    DAT_INTMEM_47 = DAT_EXTMEM_7f93 & bEXTMEMcc07 & param_1;
    bEXTMEM7ffd = DAT_EXTMEM_ca40;
    bEXTMEM7ffe = DAT_EXTMEM_ca41;
    BANK0_R1 = BANK0_R1 & 0xf0;
    DAT_EXTMEM_7fed = ~DAT_EXTMEM_d804 >> 4;
    param_1 = DAT_EXTMEM_7f93;
    if ((DAT_EXTMEM_7fb4 != '\0') &&
       (BANK0_R0 = BANK0_R0 & DAT_EXTMEM_7fed, bEXTMEMd84e == BANK0_R1)) {
      if (((bCODE00a6 >> 1 & 1) == 0) && (DAT_EXTMEM_7eaa == '\0')) {
        DAT_EXTMEM_7eb8 = DAT_EXTMEM_7eb8 + '\x01';
        if (((2 < BANK0_R0) << 7 < '\0') && (BANK0_R0 < 6)) {
                    /* WARNING: Could not recover jumptable at 0x57d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ushort)(byte)(DAT_EXTMEM_7eb9 * '\x03') + 0x57d7))(DAT_EXTMEM_7fed);
          return;
        }
      }
      else {
        DAT_EXTMEM_7fb4 = '\0';
        DAT_EXTMEM_7fed = DAT_EXTMEM_d804 & 0xf;
        uEXTMEMcc00 = 0;
        DAT_EXTMEM_7fab = 1;
        DAT_EXTMEM_7fa9 = 1;
        DAT_EXTMEM_7faa = 0;
        BANK1_R2 = DAT_EXTMEM_7f7e;
        BANK1_R3 = DAT_EXTMEM_7f7d;
        BANK1_R4 = DAT_EXTMEM_7f7c;
        BANK1_R5 = 0;
        bEXTMEMd80b = DAT_EXTMEM_7fed;
        FUN_CODE_26be(0x7f01);
        if ((bCODE00a9 >> 4 & 1) != 0) {
          BANK0_R2 = bVar3;
          FUN_CODE_04d0(bCODE00a9);
        }
      }
    }
    if (DAT_EXTMEM_7fb5 != '\0') {
      BANK0_R0 = BANK0_R0 & 0xf0;
      param_1 = ~DAT_EXTMEM_d804 & 0xf0 & bEXTMEMd819;
      DAT_INTMEM_4e = ~DAT_EXTMEM_d804 & 0xf0;
      DAT_INTMEM_4f = 0;
      DAT_EXTMEM_7fed = param_1;
      if (param_1 == DAT_INTMEM_4e) {
        BANK0_R2 = bVar3;
        FUN_CODE_15c1(0xff);
      }
    }
    uVar7 = 0x7fbe;
    if (DAT_EXTMEM_7fbe != '\0') {
      if ((bCODE00ac != 0) && (DAT_EXTMEM_7ea7 == '\0')) {
        DAT_EXTMEM_7ea7 = '\x01';
      }
      if (DAT_EXTMEM_7ea7 != '\0') {
        DAT_EXTMEM_7ea6 = DAT_EXTMEM_7ea6 + 1;
      }
      if ((DAT_EXTMEM_7f9d == 0) && (DAT_EXTMEM_7f78 == '\0')) {
        uVar4 = 0x7f;
        bVar5 = 0;
        if (DAT_EXTMEM_7fbd != '\0') goto LAB_CODE_5a6d;
      }
      else {
LAB_CODE_5a6d:
        uVar4 = 0;
        bVar5 = bCODE00ab;
        if ((bCODE00ab >> 6 & 1) != 1) {
          uVar7 = 0;
          uVar4 = 0;
          bVar5 = DAT_EXTMEM_7ea6;
          if (BANK0_R0 <= bCODE00ac) goto LAB_CODE_5aa1;
        }
      }
      BANK0_R2 = bVar3;
      FUN_CODE_421d(CONCAT11(uVar4,0x46),bVar5);
      DAT_EXTMEM_7fbe = '\0';
      bEXTMEMcc09 = 0;
      DAT_EXTMEM_7ea7 = '\0';
      uVar7 = 0x7ea6;
      DAT_EXTMEM_7ea6 = 0;
    }
LAB_CODE_5aa1:
    if ((DAT_INTMEM_47 == 0) && (uVar7 = 0x7ffd, bEXTMEM7ffd == 0)) {
      if ((DAT_EXTMEM_7fa3 != '\0') && ((DAT_EXTMEM_7fa2 == '\x03' || (DAT_EXTMEM_7fa2 == '\x04'))))
      {
        DAT_INTMEM_50 = 4;
        DAT_INTMEM_51 = 0x1b;
        BANK0_R2 = bVar3;
        FUN_CODE_044f(0x7f00,0);
        if (DAT_EXTMEM_7f87 != '\0') {
          DAT_EXTMEM_7fe1 = '\x01';
          DAT_EXTMEM_7fe2 = '\x01';
          DAT_EXTMEM_7fe3 = '\x01';
          DAT_EXTMEM_7fe4 = '\x01';
          DAT_EXTMEM_7ffa = '\x01';
          for (bVar5 = 0; bVar5 < BANK0_R4; bVar5 = bVar5 + 1) {
            BANK0_R6 = BANK0_R6 & 4;
            *(bool *)CONCAT11('\x7f' - (((0x1e < bVar5) << 7) >> 7),bVar5 - 0x1f) =
                 *(char *)CONCAT11('\x7f' - (((0x7f < bVar5) << 7) >> 7),bVar5 + 0x80) != '\0';
          }
          if ((DAT_EXTMEM_7fe1 == '\0') || (DAT_EXTMEM_7fe2 == '\0')) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if ((bVar1) && (DAT_EXTMEM_7fe3 != '\0')) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          if ((bVar1) && (DAT_EXTMEM_7fe4 != '\0')) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          if (DAT_EXTMEM_7f7d == 0x10) {
            bVar5 = 2;
          }
          else {
            bVar5 = DAT_EXTMEM_7f7d == 8;
          }
          bVar6 = DAT_EXTMEM_7f80 & 3;
          bVar5 = *(byte *)CONCAT11('\x7f' - (((0x69 < bVar5) << 7) >> 7),bVar5 + 0x96) & 3;
          if (((bVar6 < BANK0_R3) && (bVar1)) || (bVar5 == BANK0_R4)) {
            DAT_EXTMEM_7f9a = bVar6 << 4 | bVar6;
          }
          else {
            DAT_EXTMEM_7ffa = '\0';
            DAT_EXTMEM_7f9a = bVar5 << 4 | bVar5;
          }
          DAT_EXTMEM_7fe1 = '\x01';
          DAT_EXTMEM_7fe2 = 1;
          DAT_EXTMEM_7fe3 = '\x01';
          DAT_EXTMEM_7fe4 = '\x01';
          for (bVar5 = 0; bVar6 = DAT_EXTMEM_7f9a, bVar5 < BANK0_R4; bVar5 = bVar5 + 1) {
            BANK0_R6 = BANK0_R6 & 0x20;
            *(bool *)CONCAT11('\x7f' - (((0x1e < bVar5) << 7) >> 7),bVar5 - 0x1f) =
                 *(char *)CONCAT11('\x7f' - (((0x7f < bVar5) << 7) >> 7),bVar5 + 0x80) != '\0';
          }
          if ((DAT_EXTMEM_7fe1 == '\0') || (DAT_EXTMEM_7fe2 == 0)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if ((bVar1) && (DAT_EXTMEM_7fe3 != '\0')) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          if ((bVar1) && (DAT_EXTMEM_7fe4 != '\0')) {
            DAT_EXTMEM_7fe3 = '\x01';
          }
          else {
            DAT_EXTMEM_7fe3 = '\0';
          }
          DAT_EXTMEM_7fed = (DAT_EXTMEM_7f80 & 0x18) >> 1;
          DAT_EXTMEM_7fe4 =
               *(byte *)CONCAT11('\x7f' - (((0x69 < DAT_EXTMEM_7fe2) << 7) >> 7),
                                 DAT_EXTMEM_7fe2 + 0x96) & 0xc;
          if (((DAT_EXTMEM_7fed < BANK0_R3) && (DAT_EXTMEM_7fe3 == '\x01')) ||
             (DAT_EXTMEM_7fe4 == BANK0_R4)) {
            DAT_EXTMEM_7f9a = DAT_EXTMEM_7fed << 4 | DAT_EXTMEM_7fed;
          }
          else {
            DAT_EXTMEM_7ffa = '\0';
            DAT_EXTMEM_7f9a = DAT_EXTMEM_7fe4 << 4 | DAT_EXTMEM_7fe4;
          }
          BANK0_R3 = BANK0_R3 | bVar6;
          if (DAT_EXTMEM_7ffa == '\0') {
            DAT_EXTMEM_7f85 = 1;
          }
        }
        if (DAT_EXTMEM_7fa2 == '\x04') {
          DAT_EXTMEM_7fe2 = DAT_EXTMEM_7f80;
          BANK0_R3 = BANK0_R3 & 4;
          BANK0_R4 = BANK0_R4 & 0x20;
          BANK0_R5 = BANK0_R5 & 3;
          bVar5 = ((DAT_EXTMEM_7f80 & 0x18) >> 4) << 1 | (DAT_EXTMEM_7f80 & 8) >> 3;
          DAT_EXTMEM_7fb8 = '\0';
          if ((DAT_EXTMEM_7fba == '\0') || (DAT_EXTMEM_7f80 != 0)) {
            bVar6 = DAT_EXTMEM_7f80;
            if (DAT_EXTMEM_7f87 == '\0') {
              DAT_EXTMEM_7fed = DAT_EXTMEM_7f80 & 3;
              BANK0_R3 = BANK0_R3 | DAT_EXTMEM_7f9a & 0xcc;
              DAT_EXTMEM_7f9a = DAT_EXTMEM_7fed << 4 | DAT_EXTMEM_7fed;
            }
          }
          else {
            DAT_EXTMEM_7fb8 = '\x01';
            bVar6 = 1;
          }
          if (((DAT_EXTMEM_7fb9 == '\0') || (DAT_EXTMEM_7f80 != 0)) ||
             ((DAT_EXTMEM_7fbb == '\0' && ((DAT_EXTMEM_7fbc == '\0' && (DAT_EXTMEM_7fb8 != '\0')))))
             ) {
            if (DAT_EXTMEM_7f87 == '\0') {
              DAT_EXTMEM_7fed = (DAT_EXTMEM_7f80 & 0x18) >> 1;
              BANK0_R3 = BANK0_R3 | DAT_EXTMEM_7f9a & 0x33;
              DAT_EXTMEM_7f9a = DAT_EXTMEM_7fed << 4 | DAT_EXTMEM_7fed;
            }
          }
          else {
            bVar5 = bVar5 + 1;
            DAT_EXTMEM_7fb8 = '\x01';
          }
          bVar6 = bVar5 << 2 | bVar6;
          DAT_EXTMEM_7f9b = bVar6 | bVar6 << 4;
        }
        DAT_EXTMEM_7fa3 = '\0';
        DAT_EXTMEM_7f87 = '\0';
      }
      uEXTMEMcc2d = 0xfe;
      BANK0_R2 = bVar3;
      goto LAB_CODE_5707;
    }
    if ((DAT_INTMEM_47 & 1) != 0) {
      BANK0_R2 = bVar3;
      FUN_CODE_270e();
LAB_CODE_488a:
      while( true ) {
        while( true ) {
          DAT_INTMEM_50 = 1;
          DAT_INTMEM_51 = 1;
          FUN_CODE_044f(uVar7 & 0xff00);
          if ((bCODE00a7 & 1) != 0) {
            FUN_CODE_05db(0,bCODE00a7);
          }
          cEXTMEMcc99 = cEXTMEMcc99 + '\x01';
          BANK0_R3 = BANK0_R3 & 0xfe;
          DAT_EXTMEM_d815 = 0;
          while ((((bEXTMEMc84b & 1) != 0 && (uVar7 = 0xcc9b, bVar3 = bEXTMEMcc9b, bEXTMEMcc9b < 10)
                  ) || (uVar7 = 0xc808, bVar3 = DAT_EXTMEM_c808, (DAT_EXTMEM_c808 & 1) != 0))) {
            DAT_INTMEM_50 = 0x20;
            DAT_INTMEM_51 = 0x40;
            FUN_CODE_044f(uVar7 & 0xff00,bVar3);
          }
          if ((bEXTMEMd86a >> 4 & 1) != 0) {
            uEXTMEMca10 = 3;
            uEXTMEMca15 = 0x20;
            uEXTMEMca14 = 7;
          }
          if ((bCODE00a6 >> 6 & 1) != 0) {
            uEXTMEMca18 = uCODE00aa;
            uEXTMEMca19 = 0xff;
          }
          uEXTMEMcc0c = 199;
          DAT_EXTMEM_cc0b = 0;
          DAT_EXTMEM_c804 = 0;
          DAT_EXTMEM_c84a = '\x02';
          if ((bEXTMEMd86a >> 3 & 1) == 0) {
            uEXTMEMc8a0 = 0xe;
          }
          else {
            uEXTMEMd8a0 = 0xd;
          }
          uEXTMEMd835 = 2;
          BANK0_R3 = BANK0_R3 & 0xfc;
          DAT_INTMEM_50 = 0x20;
          DAT_INTMEM_51 = 1;
          FUN_CODE_044f(0xc800);
          DAT_EXTMEM_7f84 = DAT_EXTMEM_c801 & 0x80;
          if (DAT_EXTMEM_7f84 == 0) {
            uEXTMEMd254 = 0xff;
            uEXTMEMd255 = 0xff;
            BANK0_R3 = BANK0_R3 & 0xdf;
            uEXTMEMd238 = 4;
          }
          DAT_EXTMEM_7fa4 = bEXTMEMcc8e & 4;
          DAT_EXTMEM_7f94 = uEXTMEMcc8c;
          uEXTMEM7f95 = uEXTMEMcc8d;
          DAT_EXTMEM_7f96 = uEXTMEMc828;
          uEXTMEM7f97 = uEXTMEMc829;
          uEXTMEM7f98 = uEXTMEMc82a;
          if (cEXTMEMcc92 == '\0') {
            DAT_EXTMEM_7fa6 = '\x02';
          }
          else {
            BANK0_R3 = BANK0_R3 & 0x7f;
            DAT_EXTMEM_7fa6 = cEXTMEMcc92;
          }
          DAT_EXTMEM_7fa5 = uEXTMEMcc91;
          uEXTMEMcc93 = 6;
          if ((DAT_EXTMEM_7f84 != 0) && ((bEXTMEMc84b >> 3 & 1) != 1)) {
            BANK0_R3 = BANK0_R3 & 0xfb;
          }
          BANK0_R3 = BANK0_R3 & 0xb;
          if ((bCODE00a9 >> 6 & 1) == 0) {
            bEXTMEMd609 = bCODE00a9;
            if ((char)bCODE00a9 < '\0') {
              BANK0_R3 = 0x23;
            }
            else {
              BANK0_R3 = 3;
            }
          }
          else {
            bEXTMEMd609 = 2;
          }
          if ((bCODE00a9 >> 6 & 1) == 0) {
            bEXTMEMd689 = bCODE00a9;
            if ((char)bCODE00a9 < '\0') {
              BANK0_R3 = 0x23;
            }
            else {
              BANK0_R3 = 3;
            }
          }
          else {
            bEXTMEMd689 = 2;
          }
          if ((bCODE00a9 >> 6 & 1) == 0) {
            bEXTMEMd709 = bCODE00a9;
            if ((char)bCODE00a9 < '\0') {
              BANK0_R3 = 0x23;
            }
            else {
              BANK0_R3 = 3;
            }
          }
          else {
            bEXTMEMd709 = 2;
          }
          if ((bCODE00a9 >> 6 & 1) == 0) {
            bEXTMEMd789 = bCODE00a9;
            if ((char)bCODE00a9 < '\0') {
              BANK0_R3 = 0x23;
            }
            else {
              BANK0_R3 = 3;
            }
          }
          else {
            bEXTMEMd789 = 2;
          }
          if ((char)bCODE00a9 < '\0') {
            uEXTMEMd606 = 2;
            uEXTMEMd686 = 2;
            uEXTMEMd706 = 2;
            uEXTMEMd786 = 2;
          }
          BANK0_R3 = BANK0_R3 & 0xfd | 1;
          bEXTMEMd830 = 1;
          DAT_INTMEM_50 = 0x10;
          DAT_INTMEM_51 = 0x70;
          FUN_CODE_044f(0xd800);
          DAT_EXTMEM_cc0b = 0;
          do {
          } while ((bEXTMEMd830 >> 1 & 1) != 1);
          BANK0_R3 = BANK0_R3 & 0x1c;
          if (DAT_EXTMEM_c850 != 1) break;
          BANK0_R3 = 0;
          uVar7 = 0xd830;
          FUN_CODE_270e();
        }
        uVar7 = 0xd86d;
        FUN_CODE_1603();
        if ((char)uVar7 == '\0') break;
        FUN_CODE_270e();
      }
      BANK0_R3 = BANK0_R3 & 0xfe;
      DAT_EXTMEM_7f7d = 0x10;
      FUN_CODE_0cfa(0x7f01);
      uEXTMEMd802 = 2;
      uEXTMEMce06 = 0x10;
      uEXTMEMd801 = 0x81;
      uEXTMEMd803 = 0xf0;
      bEXTMEMd830 = 0;
      DAT_EXTMEM_7f7e = 4;
      FUN_CODE_2820(0x7f00);
      uVar7 = 0x7fe6;
      if (DAT_EXTMEM_7fe6 == '\0') {
        FUN_CODE_1ac6(0);
        uVar7 = uVar7 & 0xff00;
        FUN_CODE_1b66();
        if ((char)uVar7 == '\0') {
          uEXTMEMd84f = 0;
          uVar7 = 0xd802;
          FUN_CODE_1b66();
          if ((char)uVar7 == '\0') {
            FUN_CODE_1f1a();
            goto LAB_CODE_4c29;
          }
          FUN_CODE_270e();
        }
        else {
          FUN_CODE_270e();
        }
        goto LAB_CODE_488a;
      }
LAB_CODE_4c29:
      DAT_EXTMEM_7fe6 = '\x01';
      uEXTMEMd850 = 0xf;
      uEXTMEMd852 = 0x1f;
      uEXTMEMd853 = 0xff;
      DAT_EXTMEM_7fe1 = cEXTMEMd607;
      DAT_EXTMEM_7fe2 = bEXTMEMd687;
      DAT_EXTMEM_7fe3 = cEXTMEMd707;
      DAT_EXTMEM_7fe4 = bEXTMEMd787;
      uEXTMEMd801 = 0;
      uEXTMEMd810 = 0xff;
      bEXTMEMd80b = 0;
      uEXTMEMd80a = 0;
      DAT_EXTMEM_d804 = 0;
      uEXTMEMd85d = 0xac;
      uEXTMEMd85e = 0xd;
      DAT_INTMEM_50 = 1;
      DAT_INTMEM_51 = 0x1e;
      FUN_CODE_044f(0xd800);
      DAT_EXTMEM_cc0b = 0;
      cEXTMEMcc90 = '\0';
      while ((bEXTMEMcc07 & 1) == 1) {
        if (((bCODE00a7 >> 4 & 1) != 0) && (DAT_EXTMEM_7f84 == 0)) {
          DAT_INTMEM_50 = 0x20;
          DAT_INTMEM_51 = 0x53;
          FUN_CODE_044f(0x7f00,0);
          uEXTMEMd254 = 0xff;
          uEXTMEMd255 = 0xff;
          BANK0_R3 = BANK0_R3 & 0xdf;
          uEXTMEMd238 = 4;
        }
        if (BANK0_R4 <= DAT_EXTMEM_cc0b) {
          cEXTMEMcc90 = cEXTMEMcc90 + '\x01';
          DAT_EXTMEM_cc0b = 0;
          if (cEXTMEMcc90 == '\n') {
            BANK0_R3 = BANK0_R3 & 0xfb;
          }
          if ((cEXTMEMcc90 == 'd') && ((bCODE00a7 & 1) == 1)) {
            FUN_CODE_05db(0xff,bCODE00a7,uEXTMEMc848);
          }
        }
      }
      DAT_INTMEM_50 = 1;
      DAT_INTMEM_51 = 0x2c;
      FUN_CODE_044f(0xcc00,bEXTMEMcc07);
      if ((bCODE00a7 & 1) != 0) {
        FUN_CODE_05db(0,bCODE00a7);
      }
      if ((char)bCODE00a7 < '\0') {
        FUN_CODE_056c(bCODE00a7);
      }
      while ((((bEXTMEMc84b & 1) != 0 && (uVar7 = 0xcc9b, bVar3 = bEXTMEMcc9b, bEXTMEMcc9b < 0xb))
             || (uVar7 = 0xc808, bVar3 = DAT_EXTMEM_c808, (DAT_EXTMEM_c808 & 1) != 0))) {
        DAT_INTMEM_50 = 0x20;
        DAT_INTMEM_51 = 0x41;
        FUN_CODE_044f(uVar7 & 0xff00,bVar3);
      }
      DAT_EXTMEM_7f7d = 0;
      DAT_EXTMEM_7ffc = 0;
      DAT_EXTMEM_7fbe = '\0';
      DAT_EXTMEM_7fbf = '\0';
      DAT_EXTMEM_7fbd = '\0';
      DAT_EXTMEM_7fb5 = '\0';
      DAT_EXTMEM_7fb4 = '\0';
      DAT_EXTMEM_7eb9 = '\0';
      DAT_EXTMEM_7fab = 0;
      DAT_EXTMEM_7fa9 = 0;
      DAT_EXTMEM_7faa = 0;
      DAT_EXTMEM_7fb3 = 0;
      BANK0_R3 = BANK0_R3 | 2;
      if ((DAT_EXTMEM_c800 & 1) == 1) {
        DAT_EXTMEM_cc0b = 0;
        DAT_INTMEM_50 = 1;
        DAT_INTMEM_51 = 2;
        FUN_CODE_044f(0xcc00,DAT_EXTMEM_c800);
        if (DAT_INTMEM_4d == '\0') {
          if ((bEXTMEMc84b >> 2 & 1) == 1) {
            DAT_INTMEM_50 = 0xeb;
            FUN_CODE_2389(0xc801,bEXTMEMc84b);
          }
          else {
            DAT_INTMEM_50 = uEXTMEMc848;
            FUN_CODE_2389(0xc801,bEXTMEMc84b);
          }
        }
        DAT_INTMEM_4d = '\x01';
        uEXTMEMcc0c = 99;
        DAT_EXTMEM_c804 = 0x80;
        uEXTMEMca5a = 0;
        BANK0_R3 = BANK0_R3 | 4;
        DAT_EXTMEM_7f7e = 4;
        uEXTMEMd836 = 8;
        FUN_CODE_11e5();
        bEXTMEMcc95 = 0;
        uEXTMEMcc96 = 0;
LAB_CODE_4e4a:
        do {
          FUN_CODE_2242();
          bEXTMEMcc95 = bEXTMEMcc95 + 1;
          if (((bCODE00a6 >> 2 & 1) != 1) && ((bEXTMEMcc95 & 0xf) == 0)) {
            FUN_CODE_0860(bEXTMEMcc95);
          }
          DAT_EXTMEM_d602 = 0x10;
          DAT_EXTMEM_d603 = 0x2b;
          DAT_EXTMEM_d682 = 0x10;
          DAT_EXTMEM_d683 = 0x2b;
          DAT_EXTMEM_d702 = 0x10;
          DAT_EXTMEM_d703 = 0x2b;
          DAT_EXTMEM_d782 = 0x10;
          DAT_EXTMEM_d783 = 0x2b;
          DAT_INTMEM_50 = 2;
          DAT_INTMEM_51 = 0x25;
          FUN_CODE_044f(0xd700);
          uEXTMEMd40f = 3;
          BANK0_R3 = BANK0_R3 & 0xfe;
          DAT_EXTMEM_cc0b = 0;
          DAT_EXTMEM_7fe5 = 0;
          do {
            uVar7 = 0xd4cc;
            if ((bEXTMEMd4cc & 1) == 1) {
              if (((bEXTMEMd4cc >> 1 & 1) == 0) || (cEXTMEMd4b6 != '\x06')) {
                BANK0_R3 = BANK0_R3 | 2;
                goto LAB_CODE_4e4a;
              }
              FUN_CODE_129a();
              if (((DAT_EXTMEM_d4b5 < 9) << 7 < '\0') ||
                 ((DAT_EXTMEM_d4b5 == 9 && (DAT_EXTMEM_d4b4 < 0xc4)))) {
                uEXTMEMd60c = 2;
                uEXTMEMd68c = 2;
                uEXTMEMd70c = 2;
                uEXTMEMd78c = 2;
              }
              else if (((DAT_EXTMEM_d4b5 < 0x13) << 7 < '\0') ||
                      ((DAT_EXTMEM_d4b5 == 0x13 && (DAT_EXTMEM_d4b4 < 0x88)))) {
                uEXTMEMd60c = 1;
                uEXTMEMd68c = 1;
                uEXTMEMd70c = 1;
                uEXTMEMd78c = 1;
              }
              else {
                uEXTMEMd60c = 0;
                uEXTMEMd68c = 0;
                uEXTMEMd70c = 0;
                uEXTMEMd78c = 0;
              }
              uVar7 = 0xd707;
              FUN_CODE_2820(0xd707);
              DAT_INTMEM_50 = 2;
              DAT_INTMEM_51 = 0x14;
              uVar7 = uVar7 & 0xff00;
              FUN_CODE_044f(uVar7);
              DAT_INTMEM_50 = 2;
              DAT_INTMEM_51 = 0x68;
              FUN_CODE_044f(uVar7 & 0xff00);
              DAT_INTMEM_50 = 2;
              DAT_INTMEM_51 = 2;
              FUN_CODE_044f(1);
              DAT_INTMEM_51 = DAT_EXTMEM_d4b5;
              DAT_INTMEM_50 = 2;
              FUN_CODE_044f(0xd401);
              DAT_INTMEM_51 = DAT_EXTMEM_d4b4;
              DAT_INTMEM_50 = 2;
              FUN_CODE_044f(0xd401);
              DAT_EXTMEM_cc0b = 0;
              DAT_EXTMEM_7fe5 = 0;
              goto LAB_CODE_4fe8;
            }
            FUN_CODE_07f4(bEXTMEMd4cc);
            if ((char)uVar7 == '\x01') goto LAB_CODE_488a;
          } while ((char)uVar7 != '\x02');
          BANK0_R3 = BANK0_R3 | 1;
        } while( true );
      }
      DAT_INTMEM_4d = '\0';
      if ((bCODE00a7 >> 5 & 1) == 1) {
        BANK1_R2 = 0;
        BANK1_R3 = 0;
        BANK1_R4 = 0;
        BANK1_R5 = 0;
        FUN_CODE_26be(0xc,bCODE00a7);
        bEXTMEMcc09 = 0;
        do {
          if ((bEXTMEMcc07 >> 2 & 1) == 1) break;
        } while (BANK0_R3 < 0xf1);
        if (BANK0_R3 < 0xf1) {
          DAT_INTMEM_50 = 0x20;
          DAT_INTMEM_51 = 6;
          FUN_CODE_044f(0xcc00,0);
          DAT_INTMEM_48 = 0x35;
          DAT_INTMEM_49 = -0x34;
          DAT_INTMEM_4a = 0;
          cVar2 = FUN_CODE_67d0(0xcc37,0);
          uVar4 = cVar2 != '\0';
          cVar2 = FUN_CODE_67d0(CONCAT11(DAT_INTMEM_49 - (((0xfe < DAT_INTMEM_48) << 7) >> 7),
                                         DAT_INTMEM_48 + 1),DAT_INTMEM_4a);
          BANK0_R7 = BANK0_R7 & 0xf;
          if (cVar2 == '\f') {
            DAT_EXTMEM_0120 = uVar4;
          }
        }
        else {
          DAT_EXTMEM_0120 = 0;
        }
      }
      BANK0_R0 = BANK0_R0 & 0xfb;
      DAT_INTMEM_50 = uEXTMEMc848;
      FUN_CODE_2389(CONCAT11(200,uEXTMEMc848));
      bVar3 = BANK0_R0;
      BANK0_R0 = BANK0_R0 | 4;
      DAT_EXTMEM_7fb6 = '\0';
      uVar4 = 0x7f;
      bVar5 = DAT_EXTMEM_7f84;
      if (DAT_EXTMEM_7f84 == 0) {
        uVar4 = 0xd2;
        BANK0_R0 = bVar3 & 0xf | 4;
        bVar5 = DAT_EXTMEM_d25c;
        if (2 < BANK0_R0) goto LAB_CODE_53a2;
      }
      else {
LAB_CODE_53a2:
        BANK1_R2 = 0;
        BANK1_R3 = 0;
        BANK1_R4 = 0;
        BANK1_R5 = 0;
        FUN_CODE_26be(CONCAT11(uVar4,9),bVar5);
        bEXTMEMcc09 = 0;
        do {
          if ((bEXTMEMcc07 >> 2 & 1) == 1) break;
        } while (BANK0_R0 < 0xf1);
        if (BANK0_R0 < 0xf1) {
          DAT_INTMEM_48 = 0x35;
          DAT_INTMEM_49 = -0x34;
          DAT_INTMEM_4a = 0;
          bVar3 = FUN_CODE_67d0(0xcc36,0);
          if ((bVar3 & 0xf) == 9) {
            cVar2 = FUN_CODE_67d0(CONCAT11(DAT_INTMEM_49 - (((0xfd < DAT_INTMEM_48) << 7) >> 7),
                                           DAT_INTMEM_48 + 2),DAT_INTMEM_4a);
            DAT_EXTMEM_7fe7 = cVar2 != '\0';
          }
          else {
            DAT_EXTMEM_7fe7 = 0;
          }
        }
        else {
          DAT_EXTMEM_7fe7 = 0;
        }
      }
      BANK0_R2 = BANK0_R2 | 0x80;
      uEXTMEMcc0c = 99;
      uEXTMEMca5a = 0;
      DAT_INTMEM_50 = 1;
      DAT_INTMEM_51 = 4;
      uVar4 = 0xca;
      FUN_CODE_044f(0xca00);
      BANK1_R2 = 0;
      BANK1_R3 = 0;
      BANK1_R4 = 0;
      BANK1_R5 = 1;
      FUN_CODE_26be(CONCAT11(uVar4,8));
      if (DAT_EXTMEM_7f84 == 0) {
        bVar3 = BANK0_R2;
        if ((((bEXTMEMd252 >> 5 & 1) != 1) && ((bEXTMEMd218 & 1) != 0)) &&
           (bVar3 = BANK0_R2 & 0xf, 1 < (BANK0_R2 & 0xf))) {
          bVar3 = BANK0_R2 & 0xb;
        }
        BANK0_R2 = bVar3;
        if ((DAT_EXTMEM_d25c & 0xf) == 0) {
          BANK0_R2 = BANK0_R2 | 0x40;
        }
        else {
          BANK0_R2 = BANK0_R2 & 0xbf;
        }
        bVar3 = DAT_EXTMEM_d25d & 0xf;
        FUN_CODE_22d9();
        if (((bEXTMEMd252 >> 5 & 1) == 1) ||
           ((((DAT_EXTMEM_d25c & 0xf) != 0 || ((bEXTMEMd252 >> 3 & 1) != 1)) &&
            (((DAT_EXTMEM_d25c & 0xf) == 0 || ((bEXTMEMd252 >> 2 & 1) == 0)))))) {
          DAT_EXTMEM_7ffc = false;
        }
        else {
          DAT_EXTMEM_7ffc = true;
          if ((char)DAT_EXTMEM_d25d < '\0') {
            uEXTMEMcaa5 = 2;
          }
        }
        DAT_EXTMEM_7f7f = bVar3;
        if ((DAT_EXTMEM_d25c & 0xf) == 0) {
          DAT_EXTMEM_caa3 = 0;
        }
        else {
          DAT_EXTMEM_caa3 = 7;
          BANK0_R2 = BANK0_R2 | 0x20;
        }
      }
      else {
        DAT_EXTMEM_7f7f = 0x10;
        BANK0_R2 = BANK0_R2 & 8;
        DAT_EXTMEM_7ffc = bEXTMEMc84b == 0;
        uEXTMEMcaa5 = 2;
      }
      BANK0_R2 = BANK0_R2 | 0xd1;
      if (((bool)DAT_EXTMEM_7ffc != false) &&
         (BANK0_R2 = BANK0_R2 & 0xfe | 0x78, DAT_EXTMEM_7f84 == 0)) {
        bEXTMEMd208 = bEXTMEMd208 & 0xf7 | 4;
      }
      bVar3 = BANK0_R2;
      DAT_EXTMEM_7fa2 = '\0';
      DAT_EXTMEM_7f76 = '\0';
      DAT_EXTMEM_7f77 = '\0';
      DAT_EXTMEM_7f78 = '\0';
      DAT_EXTMEM_7f79 = '\0';
      DAT_EXTMEM_7f7a = '\0';
      DAT_EXTMEM_7f7b = 0;
      uEXTMEM7f83 = 0;
      uEXTMEM7f82 = 0;
      uEXTMEM7f81 = 0;
      DAT_EXTMEM_7f80 = 0;
      DAT_EXTMEM_7ffa = '\0';
      DAT_EXTMEM_7f86 = 0;
      DAT_EXTMEM_7f87 = '\0';
      DAT_EXTMEM_7f7e = 0;
      DAT_EXTMEM_7f7c = 0;
      uEXTMEM7f8f = 0;
      DAT_EXTMEM_7f8e = 0;
      uEXTMEM7f91 = 0;
      DAT_EXTMEM_7f90 = 0;
      DAT_EXTMEM_7f92 = 0;
      DAT_EXTMEM_7f93 = 0xe7;
      param_1 = 0xe7;
      DAT_EXTMEM_7f99 = 0;
      DAT_EXTMEM_7f9a = 0;
      DAT_EXTMEM_7f9b = 0;
      DAT_EXTMEM_7f9d = 0;
      DAT_EXTMEM_7f9c = 0;
      DAT_EXTMEM_7f85 = 0;
      DAT_EXTMEM_7f9e = 0;
      DAT_EXTMEM_7f9f = '\0';
      DAT_EXTMEM_7fa0 = '\0';
      DAT_EXTMEM_7fa1 = 0;
      DAT_EXTMEM_7fbc = '\0';
      DAT_EXTMEM_7fe0 = '\0';
      DAT_EXTMEM_7fa3 = '\0';
      DAT_EXTMEM_7fb8 = '\0';
      DAT_EXTMEM_7fec = 0;
      BANK1_R0 = '\0';
      BANK1_R1 = '\0';
      DAT_EXTMEM_7ff2 = 0;
      DAT_EXTMEM_7ff3 = '\0';
      DAT_EXTMEM_7ff4 = '\0';
      DAT_EXTMEM_7ffb = '\0';
      DAT_EXTMEM_7ff9 = 0;
      DAT_EXTMEM_7fff = 0;
      DAT_EXTMEM_7ff1 = 0;
      DAT_EXTMEM_7fdd = 0;
      DAT_EXTMEM_7fb7 = 0;
      DAT_EXTMEM_7eab = 0;
      DAT_EXTMEM_7eac = 0;
      DAT_EXTMEM_7ead = 0;
      DAT_EXTMEM_7ea6 = 0;
      DAT_EXTMEM_7ea7 = '\0';
      FUN_CODE_1f5c();
      DAT_EXTMEM_7fb9 = DAT_EXTMEM_c84a == '\0';
      DAT_EXTMEM_7fba = DAT_EXTMEM_c84a == '\0';
      BANK0_R0 = 0;
      DAT_EXTMEM_7fbb = DAT_EXTMEM_c84a != '\0';
      DAT_EXTMEM_7f75 = bEXTMEMcc8e & 1;
      BANK0_R2 = bVar3;
      if (DAT_EXTMEM_7f75 == 0) {
        DAT_EXTMEM_caa9 = 0;
      }
      else {
        DAT_EXTMEM_caa9 = 0xff;
      }
      goto LAB_CODE_5707;
    }
    if ((bEXTMEM7ffd >> 4 & 1) == 1) {
      if (DAT_EXTMEM_7fe0 == '\0') {
        BANK0_R2 = bVar3;
        FUN_CODE_41f1(0);
        if (DAT_EXTMEM_7f79 != '\0') {
          DAT_EXTMEM_7f77 = '\x01';
        }
      }
      else if (DAT_EXTMEM_7ff3 == '\0') {
        DAT_EXTMEM_7fe0 = '\0';
        DAT_EXTMEM_ca20 = 1;
        DAT_EXTMEM_ca21 = 0;
        uEXTMEMca08 = 1;
        DAT_EXTMEM_7f9d = 0;
      }
      else {
        DAT_EXTMEM_7ff2 = 0;
        DAT_EXTMEM_7ff3 = '\0';
        DAT_EXTMEM_ca20 = 2;
        DAT_EXTMEM_ca21 = 1;
        uEXTMEMca22 = 0;
        DAT_EXTMEM_ca23 = 0;
        uEXTMEMca08 = 1;
        DAT_EXTMEM_7f9d = 0;
      }
      DAT_EXTMEM_ca0e = 1;
      DAT_EXTMEM_7f78 = '\0';
      bEXTMEM7ffd = bEXTMEM7ffd & 0xfe;
    }
    if ((bEXTMEM7ffd >> 3 & 1) == 1) {
      DAT_EXTMEM_7ff4 = '\x01';
      DAT_EXTMEM_7fbd = '\0';
      if ((DAT_EXTMEM_7ff3 == '\0' & DAT_EXTMEM_7ff2) == 0) {
        if (cEXTMEMca81 == '\x02') {
          uEXTMEMca0d = 1;
          DAT_EXTMEM_7f9d = 0;
          DAT_EXTMEM_7fbf = '\0';
          DAT_EXTMEM_7f76 = DAT_EXTMEM_7f78 == '\0';
          DAT_EXTMEM_7fbd = '\x01';
          if (DAT_EXTMEM_7f78 != '\0') {
            DAT_EXTMEM_ca61 = 0xf;
          }
        }
        else {
          if (((DAT_EXTMEM_7fbf != '\0') && (DAT_EXTMEM_7fbf = '\0', (bEXTMEMc84b >> 6 & 1) != 1))
             && ((bEXTMEMca83 >> 2 & 1) != 0)) {
            BANK0_R2 = bVar3;
            FUN_CODE_1f5c(bEXTMEMca83);
          }
          if (DAT_EXTMEM_7f78 == '\0') {
            uEXTMEMca0d = 1;
            DAT_EXTMEM_7f76 = '\x01';
          }
          else if (DAT_EXTMEM_7f9f == '\0') {
            if (DAT_EXTMEM_7f79 == '\0') {
              if (BANK1_R0 != '\0' || BANK1_R1 != '\0') {
                BANK0_R2 = bVar3;
                FUN_CODE_2402(0);
              }
              if ((DAT_EXTMEM_7fec & 1) == 0) {
                DAT_EXTMEM_7fed = 1;
              }
              else {
                DAT_EXTMEM_7fed = 2;
              }
              bEXTMEMca09 = DAT_EXTMEM_7fed;
            }
            else {
              if (BANK1_R0 != '\0' || BANK1_R1 != '\0') {
                BANK0_R2 = bVar3;
                FUN_CODE_2402(DAT_EXTMEM_7f79);
              }
              if ((DAT_EXTMEM_7fee != '\0') && (cEXTMEMca81 != '\x01')) {
                BANK0_R2 = bVar3;
                FUN_CODE_1f9b();
              }
              DAT_EXTMEM_7fee = '\0';
              DAT_EXTMEM_7f79 = '\0';
              DAT_INTMEM_50 = 0x20;
              DAT_INTMEM_51 = 0x32;
              BANK0_R2 = bVar3;
              FUN_CODE_044f(0x7f00);
              if ((cEXTMEMca81 != '\x01') && (DAT_EXTMEM_7f7a != '\0')) {
                DAT_EXTMEM_cad0 = 2;
              }
              DAT_EXTMEM_7f7a = '\0';
              bEXTMEMca09 = 1;
            }
            DAT_EXTMEM_7f9d = 0;
            DAT_EXTMEM_7f78 = '\0';
            DAT_EXTMEM_ca61 = 0xf;
          }
        }
      }
      else {
        DAT_EXTMEM_7ff2 = 0;
        if (cEXTMEMca81 == '\x01') {
          DAT_EXTMEM_7ff3 = '\x01';
        }
        else {
          DAT_EXTMEM_7ff3 = '\0';
        }
      }
    }
    bVar5 = BANK0_R0;
    uVar7 = 0x7ffb;
    if ((DAT_EXTMEM_7ffb == '\0' & bEXTMEM7ffd & DAT_EXTMEM_7f9f == '\0') != 0) {
      cVar2 = '\0';
      if (((((bEXTMEMcb4a >> 4 & 1) == 1) || (DAT_EXTMEM_7ff2 == 0)) || ((DAT_EXTMEM_ca9f & 1) != 0)
          ) && (((DAT_EXTMEM_c850 >> 1 & 1) == 1 || (3 < bEXTMEMcc09)))) {
        if (((bEXTMEM7ffe >> 1 & 1) == 1) && (DAT_EXTMEM_7fa0 == '\0')) {
          cVar2 = '\x01';
          if (DAT_EXTMEM_7f76 == '\0') {
            if (DAT_EXTMEM_7fec == 1) {
              if (DAT_EXTMEM_7f77 == '\0') {
                if ((DAT_EXTMEM_7f79 == '\0') || (BANK0_R0 = bVar5, 2 < DAT_EXTMEM_7f9d)) {
                  cVar2 = '\0';
                  DAT_EXTMEM_7f78 = '\0';
                  DAT_EXTMEM_7f79 = '\0';
                  DAT_EXTMEM_7ffb = '\0';
                  DAT_EXTMEM_7f76 = '\0';
                  DAT_EXTMEM_7f9d = 0;
                  BANK0_R0 = bVar5;
                }
              }
              else {
                BANK0_R0 = bVar5;
                if (DAT_EXTMEM_7f79 == '\0') {
                  uEXTMEMca08 = 1;
                  DAT_EXTMEM_7f9d = 0;
                }
              }
            }
            else if ((DAT_EXTMEM_7f9d < 3) << 7 < '\0') {
              DAT_EXTMEM_7f78 = '\x01';
              DAT_EXTMEM_ca0c = 1;
              BANK0_R0 = bVar5;
            }
            else {
              cVar2 = '\0';
              DAT_EXTMEM_7f78 = '\0';
              DAT_EXTMEM_7f79 = '\0';
              DAT_EXTMEM_7ffb = '\0';
              DAT_EXTMEM_7f7a = '\0';
              DAT_EXTMEM_7f76 = '\0';
              DAT_EXTMEM_7f9d = 0;
              DAT_EXTMEM_7ff2 = 0;
              uEXTMEMcad1 = 1;
              BANK0_R0 = bVar5;
            }
          }
          else if (cEXTMEMca81 == '\x02') {
            DAT_EXTMEM_7f78 = '\x01';
            cVar2 = '\0';
            BANK0_R0 = bVar5;
          }
          else {
            if (DAT_EXTMEM_7f79 == '\0') {
              if (BANK1_R0 != '\0' || BANK1_R1 != '\0') {
                BANK0_R2 = bVar3;
                FUN_CODE_2402(0);
              }
              if ((DAT_EXTMEM_7fec & 1) == 0) {
                DAT_EXTMEM_7fed = 1;
              }
              else {
                DAT_EXTMEM_7fed = 2;
              }
              bEXTMEMca09 = DAT_EXTMEM_7fed;
            }
            else {
              if (BANK1_R0 != '\0' || BANK1_R1 != '\0') {
                BANK0_R2 = bVar3;
                FUN_CODE_2402(DAT_EXTMEM_7f79);
              }
              if ((DAT_EXTMEM_7fee != '\0') && (cEXTMEMca81 != '\x01')) {
                BANK0_R0 = bVar5;
                BANK0_R2 = bVar3;
                FUN_CODE_1f9b();
              }
              DAT_EXTMEM_7fee = '\0';
              DAT_EXTMEM_7f79 = '\0';
              DAT_INTMEM_50 = 0x20;
              DAT_INTMEM_51 = 0x32;
              BANK0_R0 = bVar5;
              BANK0_R2 = bVar3;
              FUN_CODE_044f(0x7f00);
              if ((cEXTMEMca81 != '\x01') && (DAT_EXTMEM_7f7a != '\0')) {
                DAT_EXTMEM_cad0 = 2;
              }
              DAT_EXTMEM_7f7a = '\0';
              bEXTMEMca09 = 1;
            }
            DAT_EXTMEM_7f9d = 0;
            DAT_EXTMEM_ca61 = 0xf;
            DAT_EXTMEM_ca0c = 1;
            BANK0_R0 = bVar5;
          }
        }
        else if ((((bEXTMEMcb4a >> 3 & 1) == 1) ||
                 (((DAT_EXTMEM_7f9d == 0 || (2 < DAT_EXTMEM_7f9d)) || (DAT_EXTMEM_7ff4 != '\0'))))
                || ((DAT_EXTMEM_ca9f & 1) == 1)) {
          DAT_EXTMEM_7f9d = 0;
          BANK0_R0 = bVar5;
        }
        else {
          DAT_INTMEM_50 = 0x20;
          DAT_INTMEM_51 = 0x1d;
          BANK0_R2 = bVar3;
          FUN_CODE_044f(0xca00,DAT_EXTMEM_ca9f);
          DAT_EXTMEM_ca0c = 1;
          DAT_EXTMEM_ca61 = 0xf;
          cVar2 = '\x01';
        }
      }
      else {
        cVar2 = '\x01';
        DAT_EXTMEM_ca0c = 1;
        DAT_EXTMEM_ca61 = 0xf;
        BANK0_R0 = bVar5;
      }
      DAT_EXTMEM_7f77 = '\0';
      if (DAT_EXTMEM_7fb6 == '\0' && cVar2 == '\0') {
        DAT_EXTMEM_7fa0 = '\0';
        BANK0_R2 = bVar3;
        FUN_CODE_42b8(DAT_EXTMEM_7fb6 == '\0');
      }
      uVar7 = 0x7f76;
      DAT_EXTMEM_7f76 = '\0';
    }
    DAT_INTMEM_48 = 0x35;
    DAT_INTMEM_49 = -0x34;
    DAT_INTMEM_4a = 0;
    BANK0_R2 = bVar3;
    if ((DAT_INTMEM_47 >> 2 & 1) == 1) {
      DAT_INTMEM_50 = 0x20;
      DAT_INTMEM_51 = 6;
      FUN_CODE_044f(uVar7 & 0xff00);
      BANK0_R2 = bVar3;
      bVar3 = FUN_CODE_67d0(CONCAT11(DAT_INTMEM_49,DAT_INTMEM_48),DAT_INTMEM_4a);
      DAT_INTMEM_4b = bVar3 & 7;
      DAT_INTMEM_4c = bVar3 & 0x18;
      cVar2 = FUN_CODE_67d0(CONCAT11(DAT_INTMEM_49 - (((0xfe < DAT_INTMEM_48) << 7) >> 7),
                                     DAT_INTMEM_48 + 1),DAT_INTMEM_4a);
      uVar7 = CONCAT11(DAT_INTMEM_49 - (((0xfd < DAT_INTMEM_48) << 7) >> 7),DAT_INTMEM_48 + 2);
      uVar4 = FUN_CODE_67d0(uVar7,DAT_INTMEM_4a);
      if (BANK0_R7 < 0x10) {
                    /* WARNING: Could not recover jumptable at 0x5f8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ushort)(byte)(cVar2 * '\x03') + 0x5f90))(uVar4);
        return;
      }
    }
  } while( true );
  while( true ) {
    FUN_CODE_07f4(bVar3);
    if ((char)uVar7 == '\x01') goto LAB_CODE_488a;
    if ((char)uVar7 == '\x02') break;
LAB_CODE_4fe8:
    DAT_EXTMEM_7fed = DAT_EXTMEM_d80d & 7;
    uVar7 = 0x7fed;
    BANK0_R3 = BANK0_R3 & 7;
    bVar3 = DAT_EXTMEM_7fed;
    if ((DAT_EXTMEM_7fed == 7) && (uVar7 = 0xd4cc, bVar3 = bEXTMEMd4cc, (bEXTMEMd4cc & 1) == 1))
    goto LAB_CODE_5025;
  }
  BANK0_R3 = BANK0_R3 | 4;
  goto LAB_CODE_4e4a;
LAB_CODE_5025:
  while (bEXTMEMcc9b == 1) {
    DAT_INTMEM_50 = 0x20;
    DAT_INTMEM_51 = 0x42;
    FUN_CODE_044f(0xcc00);
  }
  FUN_CODE_1465();
  DAT_EXTMEM_cc0b = 0;
  DAT_EXTMEM_7fe5 = 0;
  do {
    BANK0_R3 = BANK0_R3 & 0xf0;
    uVar7 = 0xd868;
    BANK0_R4 = BANK0_R4 & 0xf0;
    if (bEXTMEMd819 == BANK0_R4) {
      FUN_CODE_15c1();
      FUN_CODE_1403();
      BANK0_R3 = BANK0_R3 & 0xf0;
      DAT_EXTMEM_7fed = ~DAT_EXTMEM_d804 >> 4;
      DAT_EXTMEM_cc0b = 0;
      DAT_EXTMEM_7fe5 = 0;
      goto LAB_CODE_50b3;
    }
    FUN_CODE_07f4(DAT_EXTMEM_d868);
    if ((char)uVar7 == '\x01') goto LAB_CODE_488a;
  } while ((char)uVar7 != '\x02');
  FUN_CODE_15c1();
  BANK0_R3 = BANK0_R3 | 8;
  goto LAB_CODE_4e4a;
LAB_CODE_50b3:
  BANK0_R3 = BANK0_R3 & DAT_EXTMEM_7fed;
  uVar7 = 0x7fed;
  if (bEXTMEMd84e != BANK0_R4) {
    FUN_CODE_07f4(DAT_EXTMEM_7fed);
    if ((char)uVar7 == '\x01') goto LAB_CODE_488a;
    if ((char)uVar7 == '\x02') goto code_c0x50d7;
    goto LAB_CODE_50b3;
  }
  if (((bCODE00a6 >> 1 & 1) != 1) && (DAT_EXTMEM_7eaa == '\0')) {
    do {
    } while( true );
  }
  if ((bCODE00a9 >> 4 & 1) != 0) {
    FUN_CODE_04d0(bCODE00a9);
  }
  while (bEXTMEMcc9b == 2) {
    DAT_INTMEM_50 = 0x20;
    DAT_INTMEM_51 = 0x43;
    FUN_CODE_044f(0xcc00);
  }
  DAT_INTMEM_50 = 2;
  DAT_INTMEM_51 = 0x26;
  FUN_CODE_044f(0xcc00);
  DAT_EXTMEM_cc0b = 0;
  DAT_EXTMEM_7fe5 = 0;
  do {
    DAT_EXTMEM_7fed = DAT_EXTMEM_d80d & 7;
    uVar7 = 0x7fed;
    BANK0_R3 = BANK0_R3 & 7;
    bVar3 = DAT_EXTMEM_7fed;
    if ((DAT_EXTMEM_7fed == 7) && (uVar7 = 0xd4cc, bVar3 = bEXTMEMd4cc, (bEXTMEMd4cc & 1) != 0)) {
      uEXTMEMc80f = 0;
      uVar7 = 0xcc00;
      uEXTMEMcc00 = 0;
      FUN_CODE_226e();
      DAT_INTMEM_50 = 2;
      DAT_INTMEM_51 = 0x27;
      FUN_CODE_044f(uVar7 & 0xff00);
      DAT_EXTMEM_cc0b = 0;
      DAT_EXTMEM_7fe5 = 0;
      goto LAB_CODE_51aa;
    }
    FUN_CODE_07f4(bVar3);
    if ((char)uVar7 == '\x01') goto LAB_CODE_488a;
  } while ((char)uVar7 != '\x02');
  BANK0_R3 = BANK0_R3 | 0x20;
  goto LAB_CODE_4e4a;
code_c0x50d7:
  BANK0_R3 = BANK0_R3 | 0x10;
  goto LAB_CODE_4e4a;
LAB_CODE_51aa:
  DAT_EXTMEM_7fed = bEXTMEMc803 & 0x80;
  uVar7 = 0x7fed;
  if (DAT_EXTMEM_7fed == 0) {
    FUN_CODE_07f4(0);
    if ((char)uVar7 == '\x01') goto LAB_CODE_488a;
    if ((char)uVar7 == '\x02') goto code_c0x51cb;
    goto LAB_CODE_51aa;
  }
  DAT_EXTMEM_cc0b = 0;
  do {
  } while ((BANK0_R4 != 0) << 7 < '\0');
  DAT_EXTMEM_7fed = cEXTMEMd085;
  DAT_INTMEM_50 = 1;
  DAT_INTMEM_51 = 3;
  FUN_CODE_044f(0x7f00,bEXTMEMc849 >> 4);
  DAT_EXTMEM_7fed = bEXTMEMc849;
  while( true ) {
    while (uVar7 = 0xcc9b, bEXTMEMcc9b == 3) {
      DAT_INTMEM_50 = 0x20;
      DAT_INTMEM_51 = 0x44;
      FUN_CODE_044f(0xcc00);
    }
    FUN_CODE_2369();
    if ((char)uVar7 != '\0') goto LAB_CODE_488a;
    bVar1 = (DAT_EXTMEM_7fed & 1) == 0;
    bVar3 = BANK0_R3 & 0xf;
    if (((bVar1 & bEXTMEMc803) != 0) ||
       (bVar1 = (DAT_EXTMEM_7fed & 2) == 0, (bVar1 & bEXTMEMc840) != 0)) break;
    BANK0_R3 = BANK0_R3 & 3;
    bVar1 = (DAT_EXTMEM_7fed & 4) == 0;
    bVar3 = BANK0_R3;
    if (((bVar1 & bEXTMEMc841) != 0) ||
       (bVar1 = (DAT_EXTMEM_7fed & 8) == 0, bVar1 && cEXTMEMd085 != '?')) break;
  }
  BANK0_R3 = bVar3;
  FUN_CODE_270e(bVar1);
  BANK0_R3 = BANK0_R3 | 0x80;
  goto LAB_CODE_4e4a;
code_c0x51cb:
  BANK0_R3 = BANK0_R3 | 0x40;
  goto LAB_CODE_4e4a;
}



/* =========================================================
 * CODE:6051  FUN_CODE_6051  size=118
 * ========================================================= */

/* WARNING: Removing unreachable block (CODE,0x576b) */
/* WARNING: Removing unreachable block (CODE,0x50a2) */
/* WARNING: Removing unreachable block (CODE,0x6438) */

void FUN_CODE_6051(ushort param_1,byte param_2)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  undefined1 uVar4;
  byte bVar5;
  byte bVar6;
  ushort uVar7;
  
  bVar3 = BANK0_R2;
  DAT_INTMEM_50 = 1;
  DAT_INTMEM_51 = 0x60;
  FUN_CODE_044f(param_1 & 0xff00);
  BANK0_R2 = bVar3;
  if (((DAT_EXTMEM_7fa2 == 3) || (bVar5 = DAT_EXTMEM_7fa2, DAT_EXTMEM_7fa2 == 4)) &&
     (bVar5 = bCODE00ab, (bCODE00ab >> 5 & 1) != 0)) {
    DAT_INTMEM_50 = 1;
    DAT_INTMEM_51 = 0x5f;
    uVar7 = 0;
    FUN_CODE_044f(0);
    BANK0_R2 = bVar3;
  }
  else {
    DAT_EXTMEM_d868 = 6;
    FUN_CODE_270e(bVar5);
    uVar7 = 0x7fa7;
    BANK0_R2 = bVar3;
    if ((DAT_EXTMEM_7fa7 != '\x02') && (uVar7 = 0x7fa7, DAT_EXTMEM_7fa7 != '\x05')) {
      FUN_CODE_421d(0x7f47);
      uVar7 = 0x7eab;
      DAT_EXTMEM_7eab = 0x40;
      BANK0_R2 = bVar3;
    }
  }
  do {
    bVar3 = BANK0_R2;
    if ((DAT_INTMEM_47 & 0x28) != 0) {
      DAT_INTMEM_50 = 1;
      DAT_INTMEM_51 = 0x10;
      uVar7 = uVar7 & 0xff00;
      FUN_CODE_044f(uVar7);
      DAT_INTMEM_50 = 1;
      DAT_INTMEM_51 = 0x68;
      FUN_CODE_044f(uVar7 & 0xff00);
      DAT_INTMEM_50 = 1;
      DAT_INTMEM_51 = 1;
      FUN_CODE_044f(1);
      DAT_INTMEM_50 = 1;
      DAT_INTMEM_51 = DAT_INTMEM_47;
      FUN_CODE_044f(1);
      FUN_CODE_270e();
      if ((DAT_EXTMEM_7fa7 != '\x02') && (DAT_EXTMEM_7fa7 != '\x05')) {
        BANK0_R2 = bVar3;
        FUN_CODE_421d(0x7f4b);
      }
      do {
      } while( true );
    }
LAB_CODE_5707:
    bVar3 = BANK0_R2;
    uVar7 = 0xcc9b;
    if (bEXTMEMcc9b == 1) {
      bVar5 = 1;
LAB_CODE_5719:
      DAT_INTMEM_50 = 0x20;
      DAT_INTMEM_51 = 0x45;
      FUN_CODE_044f(uVar7 & 0xff00,bVar5);
      BANK0_R2 = bVar3;
      goto LAB_CODE_5707;
    }
    uVar7 = 0xc808;
    bVar5 = DAT_EXTMEM_c808;
    if ((DAT_EXTMEM_c808 & 1) != 0) goto LAB_CODE_5719;
    DAT_INTMEM_47 = DAT_EXTMEM_7f93 & bEXTMEMcc07 & param_2;
    bEXTMEM7ffd = DAT_EXTMEM_ca40;
    bEXTMEM7ffe = DAT_EXTMEM_ca41;
    BANK0_R1 = BANK0_R1 & 0xf0;
    DAT_EXTMEM_7fed = ~DAT_EXTMEM_d804 >> 4;
    param_2 = DAT_EXTMEM_7f93;
    if ((DAT_EXTMEM_7fb4 != '\0') &&
       (BANK0_R0 = BANK0_R0 & DAT_EXTMEM_7fed, bEXTMEMd84e == BANK0_R1)) {
      if (((bCODE00a6 >> 1 & 1) == 0) && (DAT_EXTMEM_7eaa == '\0')) {
        DAT_EXTMEM_7eb8 = DAT_EXTMEM_7eb8 + '\x01';
        if (((2 < BANK0_R0) << 7 < '\0') && (BANK0_R0 < 6)) {
                    /* WARNING: Could not recover jumptable at 0x57d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ushort)(byte)(DAT_EXTMEM_7eb9 * '\x03') + 0x57d7))(DAT_EXTMEM_7fed);
          return;
        }
      }
      else {
        DAT_EXTMEM_7fb4 = '\0';
        DAT_EXTMEM_7fed = DAT_EXTMEM_d804 & 0xf;
        uEXTMEMcc00 = 0;
        DAT_EXTMEM_7fab = 1;
        DAT_EXTMEM_7fa9 = 1;
        DAT_EXTMEM_7faa = 0;
        BANK1_R2 = DAT_EXTMEM_7f7e;
        BANK1_R3 = DAT_EXTMEM_7f7d;
        BANK1_R4 = DAT_EXTMEM_7f7c;
        BANK1_R5 = 0;
        bEXTMEMd80b = DAT_EXTMEM_7fed;
        FUN_CODE_26be(0x7f01);
        if ((bCODE00a9 >> 4 & 1) != 0) {
          BANK0_R2 = bVar3;
          FUN_CODE_04d0(bCODE00a9);
        }
      }
    }
    if (DAT_EXTMEM_7fb5 != '\0') {
      BANK0_R0 = BANK0_R0 & 0xf0;
      param_2 = ~DAT_EXTMEM_d804 & 0xf0 & bEXTMEMd819;
      DAT_INTMEM_4e = ~DAT_EXTMEM_d804 & 0xf0;
      DAT_INTMEM_4f = 0;
      DAT_EXTMEM_7fed = param_2;
      if (param_2 == DAT_INTMEM_4e) {
        BANK0_R2 = bVar3;
        FUN_CODE_15c1(0xff);
      }
    }
    uVar7 = 0x7fbe;
    if (DAT_EXTMEM_7fbe != '\0') {
      if ((bCODE00ac != 0) && (DAT_EXTMEM_7ea7 == '\0')) {
        DAT_EXTMEM_7ea7 = '\x01';
      }
      if (DAT_EXTMEM_7ea7 != '\0') {
        DAT_EXTMEM_7ea6 = DAT_EXTMEM_7ea6 + 1;
      }
      if ((DAT_EXTMEM_7f9d == 0) && (DAT_EXTMEM_7f78 == '\0')) {
        uVar4 = 0x7f;
        bVar5 = 0;
        if (DAT_EXTMEM_7fbd != '\0') goto LAB_CODE_5a6d;
      }
      else {
LAB_CODE_5a6d:
        uVar4 = 0;
        bVar5 = bCODE00ab;
        if ((bCODE00ab >> 6 & 1) != 1) {
          uVar7 = 0;
          uVar4 = 0;
          bVar5 = DAT_EXTMEM_7ea6;
          if (BANK0_R0 <= bCODE00ac) goto LAB_CODE_5aa1;
        }
      }
      BANK0_R2 = bVar3;
      FUN_CODE_421d(CONCAT11(uVar4,0x46),bVar5);
      DAT_EXTMEM_7fbe = '\0';
      bEXTMEMcc09 = 0;
      DAT_EXTMEM_7ea7 = '\0';
      uVar7 = 0x7ea6;
      DAT_EXTMEM_7ea6 = 0;
    }
LAB_CODE_5aa1:
    if ((DAT_INTMEM_47 == 0) && (uVar7 = 0x7ffd, bEXTMEM7ffd == 0)) {
      if ((DAT_EXTMEM_7fa3 != '\0') && ((DAT_EXTMEM_7fa2 == 3 || (DAT_EXTMEM_7fa2 == 4)))) {
        DAT_INTMEM_50 = 4;
        DAT_INTMEM_51 = 0x1b;
        BANK0_R2 = bVar3;
        FUN_CODE_044f(0x7f00,0);
        if (DAT_EXTMEM_7f87 != '\0') {
          DAT_EXTMEM_7fe1 = '\x01';
          DAT_EXTMEM_7fe2 = '\x01';
          DAT_EXTMEM_7fe3 = '\x01';
          DAT_EXTMEM_7fe4 = '\x01';
          DAT_EXTMEM_7ffa = '\x01';
          for (bVar5 = 0; bVar5 < BANK0_R4; bVar5 = bVar5 + 1) {
            BANK0_R6 = BANK0_R6 & 4;
            *(bool *)CONCAT11('\x7f' - (((0x1e < bVar5) << 7) >> 7),bVar5 - 0x1f) =
                 *(char *)CONCAT11('\x7f' - (((0x7f < bVar5) << 7) >> 7),bVar5 + 0x80) != '\0';
          }
          if ((DAT_EXTMEM_7fe1 == '\0') || (DAT_EXTMEM_7fe2 == '\0')) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if ((bVar1) && (DAT_EXTMEM_7fe3 != '\0')) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          if ((bVar1) && (DAT_EXTMEM_7fe4 != '\0')) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          if (DAT_EXTMEM_7f7d == '\x10') {
            bVar5 = 2;
          }
          else {
            bVar5 = DAT_EXTMEM_7f7d == '\b';
          }
          bVar6 = DAT_EXTMEM_7f80 & 3;
          bVar5 = *(byte *)CONCAT11('\x7f' - (((0x69 < bVar5) << 7) >> 7),bVar5 + 0x96) & 3;
          if (((bVar6 < BANK0_R3) && (bVar1)) || (bVar5 == BANK0_R4)) {
            DAT_EXTMEM_7f9a = bVar6 << 4 | bVar6;
          }
          else {
            DAT_EXTMEM_7ffa = '\0';
            DAT_EXTMEM_7f9a = bVar5 << 4 | bVar5;
          }
          DAT_EXTMEM_7fe1 = '\x01';
          DAT_EXTMEM_7fe2 = 1;
          DAT_EXTMEM_7fe3 = '\x01';
          DAT_EXTMEM_7fe4 = '\x01';
          for (bVar5 = 0; bVar6 = DAT_EXTMEM_7f9a, bVar5 < BANK0_R4; bVar5 = bVar5 + 1) {
            BANK0_R6 = BANK0_R6 & 0x20;
            *(bool *)CONCAT11('\x7f' - (((0x1e < bVar5) << 7) >> 7),bVar5 - 0x1f) =
                 *(char *)CONCAT11('\x7f' - (((0x7f < bVar5) << 7) >> 7),bVar5 + 0x80) != '\0';
          }
          if ((DAT_EXTMEM_7fe1 == '\0') || (DAT_EXTMEM_7fe2 == 0)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if ((bVar1) && (DAT_EXTMEM_7fe3 != '\0')) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          if ((bVar1) && (DAT_EXTMEM_7fe4 != '\0')) {
            DAT_EXTMEM_7fe3 = '\x01';
          }
          else {
            DAT_EXTMEM_7fe3 = '\0';
          }
          DAT_EXTMEM_7fed = (DAT_EXTMEM_7f80 & 0x18) >> 1;
          DAT_EXTMEM_7fe4 =
               *(byte *)CONCAT11('\x7f' - (((0x69 < DAT_EXTMEM_7fe2) << 7) >> 7),
                                 DAT_EXTMEM_7fe2 + 0x96) & 0xc;
          if (((DAT_EXTMEM_7fed < BANK0_R3) && (DAT_EXTMEM_7fe3 == '\x01')) ||
             (DAT_EXTMEM_7fe4 == BANK0_R4)) {
            DAT_EXTMEM_7f9a = DAT_EXTMEM_7fed << 4 | DAT_EXTMEM_7fed;
          }
          else {
            DAT_EXTMEM_7ffa = '\0';
            DAT_EXTMEM_7f9a = DAT_EXTMEM_7fe4 << 4 | DAT_EXTMEM_7fe4;
          }
          BANK0_R3 = BANK0_R3 | bVar6;
          if (DAT_EXTMEM_7ffa == '\0') {
            DAT_EXTMEM_7f85 = 1;
          }
        }
        if (DAT_EXTMEM_7fa2 == 4) {
          DAT_EXTMEM_7fe2 = DAT_EXTMEM_7f80;
          BANK0_R3 = BANK0_R3 & 4;
          BANK0_R4 = BANK0_R4 & 0x20;
          BANK0_R5 = BANK0_R5 & 3;
          bVar5 = ((DAT_EXTMEM_7f80 & 0x18) >> 4) << 1 | (DAT_EXTMEM_7f80 & 8) >> 3;
          DAT_EXTMEM_7fb8 = '\0';
          if ((DAT_EXTMEM_7fba == '\0') || (DAT_EXTMEM_7f80 != 0)) {
            bVar6 = DAT_EXTMEM_7f80;
            if (DAT_EXTMEM_7f87 == '\0') {
              DAT_EXTMEM_7fed = DAT_EXTMEM_7f80 & 3;
              BANK0_R3 = BANK0_R3 | DAT_EXTMEM_7f9a & 0xcc;
              DAT_EXTMEM_7f9a = DAT_EXTMEM_7fed << 4 | DAT_EXTMEM_7fed;
            }
          }
          else {
            DAT_EXTMEM_7fb8 = '\x01';
            bVar6 = 1;
          }
          if (((DAT_EXTMEM_7fb9 == '\0') || (DAT_EXTMEM_7f80 != 0)) ||
             ((DAT_EXTMEM_7fbb == '\0' && ((DAT_EXTMEM_7fbc == '\0' && (DAT_EXTMEM_7fb8 != '\0')))))
             ) {
            if (DAT_EXTMEM_7f87 == '\0') {
              DAT_EXTMEM_7fed = (DAT_EXTMEM_7f80 & 0x18) >> 1;
              BANK0_R3 = BANK0_R3 | DAT_EXTMEM_7f9a & 0x33;
              DAT_EXTMEM_7f9a = DAT_EXTMEM_7fed << 4 | DAT_EXTMEM_7fed;
            }
          }
          else {
            bVar5 = bVar5 + 1;
            DAT_EXTMEM_7fb8 = '\x01';
          }
          bVar6 = bVar5 << 2 | bVar6;
          DAT_EXTMEM_7f9b = bVar6 | bVar6 << 4;
        }
        DAT_EXTMEM_7fa3 = '\0';
        DAT_EXTMEM_7f87 = '\0';
      }
      uEXTMEMcc2d = 0xfe;
      BANK0_R2 = bVar3;
      goto LAB_CODE_5707;
    }
    if ((DAT_INTMEM_47 & 1) != 0) {
      BANK0_R2 = bVar3;
      FUN_CODE_270e();
LAB_CODE_488a:
      while( true ) {
        while( true ) {
          DAT_INTMEM_50 = 1;
          DAT_INTMEM_51 = 1;
          FUN_CODE_044f(uVar7 & 0xff00);
          if ((bCODE00a7 & 1) != 0) {
            FUN_CODE_05db(0,bCODE00a7);
          }
          cEXTMEMcc99 = cEXTMEMcc99 + '\x01';
          BANK0_R3 = BANK0_R3 & 0xfe;
          DAT_EXTMEM_d815 = 0;
          while ((((bEXTMEMc84b & 1) != 0 && (uVar7 = 0xcc9b, bVar3 = bEXTMEMcc9b, bEXTMEMcc9b < 10)
                  ) || (uVar7 = 0xc808, bVar3 = DAT_EXTMEM_c808, (DAT_EXTMEM_c808 & 1) != 0))) {
            DAT_INTMEM_50 = 0x20;
            DAT_INTMEM_51 = 0x40;
            FUN_CODE_044f(uVar7 & 0xff00,bVar3);
          }
          if ((bEXTMEMd86a >> 4 & 1) != 0) {
            uEXTMEMca10 = 3;
            uEXTMEMca15 = 0x20;
            uEXTMEMca14 = 7;
          }
          if ((bCODE00a6 >> 6 & 1) != 0) {
            uEXTMEMca18 = uCODE00aa;
            uEXTMEMca19 = 0xff;
          }
          uEXTMEMcc0c = 199;
          DAT_EXTMEM_cc0b = 0;
          DAT_EXTMEM_c804 = 0;
          DAT_EXTMEM_c84a = '\x02';
          if ((bEXTMEMd86a >> 3 & 1) == 0) {
            uEXTMEMc8a0 = 0xe;
          }
          else {
            uEXTMEMd8a0 = 0xd;
          }
          uEXTMEMd835 = 2;
          BANK0_R3 = BANK0_R3 & 0xfc;
          DAT_INTMEM_50 = 0x20;
          DAT_INTMEM_51 = 1;
          FUN_CODE_044f(0xc800);
          DAT_EXTMEM_7f84 = DAT_EXTMEM_c801 & 0x80;
          if (DAT_EXTMEM_7f84 == 0) {
            uEXTMEMd254 = 0xff;
            uEXTMEMd255 = 0xff;
            BANK0_R3 = BANK0_R3 & 0xdf;
            uEXTMEMd238 = 4;
          }
          DAT_EXTMEM_7fa4 = bEXTMEMcc8e & 4;
          DAT_EXTMEM_7f94 = uEXTMEMcc8c;
          uEXTMEM7f95 = uEXTMEMcc8d;
          DAT_EXTMEM_7f96 = uEXTMEMc828;
          uEXTMEM7f97 = uEXTMEMc829;
          uEXTMEM7f98 = uEXTMEMc82a;
          if (cEXTMEMcc92 == '\0') {
            DAT_EXTMEM_7fa6 = '\x02';
          }
          else {
            BANK0_R3 = BANK0_R3 & 0x7f;
            DAT_EXTMEM_7fa6 = cEXTMEMcc92;
          }
          DAT_EXTMEM_7fa5 = uEXTMEMcc91;
          uEXTMEMcc93 = 6;
          if ((DAT_EXTMEM_7f84 != 0) && ((bEXTMEMc84b >> 3 & 1) != 1)) {
            BANK0_R3 = BANK0_R3 & 0xfb;
          }
          BANK0_R3 = BANK0_R3 & 0xb;
          if ((bCODE00a9 >> 6 & 1) == 0) {
            bEXTMEMd609 = bCODE00a9;
            if ((char)bCODE00a9 < '\0') {
              BANK0_R3 = 0x23;
            }
            else {
              BANK0_R3 = 3;
            }
          }
          else {
            bEXTMEMd609 = 2;
          }
          if ((bCODE00a9 >> 6 & 1) == 0) {
            bEXTMEMd689 = bCODE00a9;
            if ((char)bCODE00a9 < '\0') {
              BANK0_R3 = 0x23;
            }
            else {
              BANK0_R3 = 3;
            }
          }
          else {
            bEXTMEMd689 = 2;
          }
          if ((bCODE00a9 >> 6 & 1) == 0) {
            bEXTMEMd709 = bCODE00a9;
            if ((char)bCODE00a9 < '\0') {
              BANK0_R3 = 0x23;
            }
            else {
              BANK0_R3 = 3;
            }
          }
          else {
            bEXTMEMd709 = 2;
          }
          if ((bCODE00a9 >> 6 & 1) == 0) {
            bEXTMEMd789 = bCODE00a9;
            if ((char)bCODE00a9 < '\0') {
              BANK0_R3 = 0x23;
            }
            else {
              BANK0_R3 = 3;
            }
          }
          else {
            bEXTMEMd789 = 2;
          }
          if ((char)bCODE00a9 < '\0') {
            uEXTMEMd606 = 2;
            uEXTMEMd686 = 2;
            uEXTMEMd706 = 2;
            uEXTMEMd786 = 2;
          }
          BANK0_R3 = BANK0_R3 & 0xfd | 1;
          bEXTMEMd830 = 1;
          DAT_INTMEM_50 = 0x10;
          DAT_INTMEM_51 = 0x70;
          FUN_CODE_044f(0xd800);
          DAT_EXTMEM_cc0b = 0;
          do {
          } while ((bEXTMEMd830 >> 1 & 1) != 1);
          BANK0_R3 = BANK0_R3 & 0x1c;
          if (DAT_EXTMEM_c850 != 1) break;
          BANK0_R3 = 0;
          uVar7 = 0xd830;
          FUN_CODE_270e();
        }
        uVar7 = 0xd86d;
        FUN_CODE_1603();
        if ((char)uVar7 == '\0') break;
        FUN_CODE_270e();
      }
      BANK0_R3 = BANK0_R3 & 0xfe;
      DAT_EXTMEM_7f7d = '\x10';
      FUN_CODE_0cfa(0x7f01);
      uEXTMEMd802 = 2;
      uEXTMEMce06 = 0x10;
      uEXTMEMd801 = 0x81;
      uEXTMEMd803 = 0xf0;
      bEXTMEMd830 = 0;
      DAT_EXTMEM_7f7e = 4;
      FUN_CODE_2820(0x7f00);
      uVar7 = 0x7fe6;
      if (DAT_EXTMEM_7fe6 == '\0') {
        FUN_CODE_1ac6(0);
        uVar7 = uVar7 & 0xff00;
        FUN_CODE_1b66();
        if ((char)uVar7 == '\0') {
          uEXTMEMd84f = 0;
          uVar7 = 0xd802;
          FUN_CODE_1b66();
          if ((char)uVar7 == '\0') {
            FUN_CODE_1f1a();
            goto LAB_CODE_4c29;
          }
          FUN_CODE_270e();
        }
        else {
          FUN_CODE_270e();
        }
        goto LAB_CODE_488a;
      }
LAB_CODE_4c29:
      DAT_EXTMEM_7fe6 = '\x01';
      uEXTMEMd850 = 0xf;
      uEXTMEMd852 = 0x1f;
      uEXTMEMd853 = 0xff;
      DAT_EXTMEM_7fe1 = cEXTMEMd607;
      DAT_EXTMEM_7fe2 = bEXTMEMd687;
      DAT_EXTMEM_7fe3 = cEXTMEMd707;
      DAT_EXTMEM_7fe4 = bEXTMEMd787;
      uEXTMEMd801 = 0;
      uEXTMEMd810 = 0xff;
      bEXTMEMd80b = 0;
      uEXTMEMd80a = 0;
      DAT_EXTMEM_d804 = 0;
      uEXTMEMd85d = 0xac;
      uEXTMEMd85e = 0xd;
      DAT_INTMEM_50 = 1;
      DAT_INTMEM_51 = 0x1e;
      FUN_CODE_044f(0xd800);
      DAT_EXTMEM_cc0b = 0;
      cEXTMEMcc90 = '\0';
      while ((bEXTMEMcc07 & 1) == 1) {
        if (((bCODE00a7 >> 4 & 1) != 0) && (DAT_EXTMEM_7f84 == 0)) {
          DAT_INTMEM_50 = 0x20;
          DAT_INTMEM_51 = 0x53;
          FUN_CODE_044f(0x7f00,0);
          uEXTMEMd254 = 0xff;
          uEXTMEMd255 = 0xff;
          BANK0_R3 = BANK0_R3 & 0xdf;
          uEXTMEMd238 = 4;
        }
        if (BANK0_R4 <= DAT_EXTMEM_cc0b) {
          cEXTMEMcc90 = cEXTMEMcc90 + '\x01';
          DAT_EXTMEM_cc0b = 0;
          if (cEXTMEMcc90 == '\n') {
            BANK0_R3 = BANK0_R3 & 0xfb;
          }
          if ((cEXTMEMcc90 == 'd') && ((bCODE00a7 & 1) == 1)) {
            FUN_CODE_05db(0xff,bCODE00a7,uEXTMEMc848);
          }
        }
      }
      DAT_INTMEM_50 = 1;
      DAT_INTMEM_51 = 0x2c;
      FUN_CODE_044f(0xcc00,bEXTMEMcc07);
      if ((bCODE00a7 & 1) != 0) {
        FUN_CODE_05db(0,bCODE00a7);
      }
      if ((char)bCODE00a7 < '\0') {
        FUN_CODE_056c(bCODE00a7);
      }
      while ((((bEXTMEMc84b & 1) != 0 && (uVar7 = 0xcc9b, bVar3 = bEXTMEMcc9b, bEXTMEMcc9b < 0xb))
             || (uVar7 = 0xc808, bVar3 = DAT_EXTMEM_c808, (DAT_EXTMEM_c808 & 1) != 0))) {
        DAT_INTMEM_50 = 0x20;
        DAT_INTMEM_51 = 0x41;
        FUN_CODE_044f(uVar7 & 0xff00,bVar3);
      }
      DAT_EXTMEM_7f7d = '\0';
      DAT_EXTMEM_7ffc = 0;
      DAT_EXTMEM_7fbe = '\0';
      DAT_EXTMEM_7fbf = '\0';
      DAT_EXTMEM_7fbd = '\0';
      DAT_EXTMEM_7fb5 = '\0';
      DAT_EXTMEM_7fb4 = '\0';
      DAT_EXTMEM_7eb9 = '\0';
      DAT_EXTMEM_7fab = 0;
      DAT_EXTMEM_7fa9 = 0;
      DAT_EXTMEM_7faa = 0;
      DAT_EXTMEM_7fb3 = 0;
      BANK0_R3 = BANK0_R3 | 2;
      if ((DAT_EXTMEM_c800 & 1) == 1) {
        DAT_EXTMEM_cc0b = 0;
        DAT_INTMEM_50 = 1;
        DAT_INTMEM_51 = 2;
        FUN_CODE_044f(0xcc00,DAT_EXTMEM_c800);
        if (DAT_INTMEM_4d == '\0') {
          if ((bEXTMEMc84b >> 2 & 1) == 1) {
            DAT_INTMEM_50 = 0xeb;
            FUN_CODE_2389(0xc801,bEXTMEMc84b);
          }
          else {
            DAT_INTMEM_50 = uEXTMEMc848;
            FUN_CODE_2389(0xc801,bEXTMEMc84b);
          }
        }
        DAT_INTMEM_4d = '\x01';
        uEXTMEMcc0c = 99;
        DAT_EXTMEM_c804 = 0x80;
        uEXTMEMca5a = 0;
        BANK0_R3 = BANK0_R3 | 4;
        DAT_EXTMEM_7f7e = 4;
        uEXTMEMd836 = 8;
        FUN_CODE_11e5();
        bEXTMEMcc95 = 0;
        uEXTMEMcc96 = 0;
LAB_CODE_4e4a:
        do {
          FUN_CODE_2242();
          bEXTMEMcc95 = bEXTMEMcc95 + 1;
          if (((bCODE00a6 >> 2 & 1) != 1) && ((bEXTMEMcc95 & 0xf) == 0)) {
            FUN_CODE_0860(bEXTMEMcc95);
          }
          DAT_EXTMEM_d602 = 0x10;
          DAT_EXTMEM_d603 = 0x2b;
          DAT_EXTMEM_d682 = 0x10;
          DAT_EXTMEM_d683 = 0x2b;
          DAT_EXTMEM_d702 = 0x10;
          DAT_EXTMEM_d703 = 0x2b;
          DAT_EXTMEM_d782 = 0x10;
          DAT_EXTMEM_d783 = 0x2b;
          DAT_INTMEM_50 = 2;
          DAT_INTMEM_51 = 0x25;
          FUN_CODE_044f(0xd700);
          uEXTMEMd40f = 3;
          BANK0_R3 = BANK0_R3 & 0xfe;
          DAT_EXTMEM_cc0b = 0;
          DAT_EXTMEM_7fe5 = 0;
          do {
            uVar7 = 0xd4cc;
            if ((bEXTMEMd4cc & 1) == 1) {
              if (((bEXTMEMd4cc >> 1 & 1) == 0) || (cEXTMEMd4b6 != '\x06')) {
                BANK0_R3 = BANK0_R3 | 2;
                goto LAB_CODE_4e4a;
              }
              FUN_CODE_129a();
              if (((DAT_EXTMEM_d4b5 < 9) << 7 < '\0') ||
                 ((DAT_EXTMEM_d4b5 == 9 && (DAT_EXTMEM_d4b4 < 0xc4)))) {
                uEXTMEMd60c = 2;
                uEXTMEMd68c = 2;
                uEXTMEMd70c = 2;
                uEXTMEMd78c = 2;
              }
              else if (((DAT_EXTMEM_d4b5 < 0x13) << 7 < '\0') ||
                      ((DAT_EXTMEM_d4b5 == 0x13 && (DAT_EXTMEM_d4b4 < 0x88)))) {
                uEXTMEMd60c = 1;
                uEXTMEMd68c = 1;
                uEXTMEMd70c = 1;
                uEXTMEMd78c = 1;
              }
              else {
                uEXTMEMd60c = 0;
                uEXTMEMd68c = 0;
                uEXTMEMd70c = 0;
                uEXTMEMd78c = 0;
              }
              uVar7 = 0xd707;
              FUN_CODE_2820(0xd707);
              DAT_INTMEM_50 = 2;
              DAT_INTMEM_51 = 0x14;
              uVar7 = uVar7 & 0xff00;
              FUN_CODE_044f(uVar7);
              DAT_INTMEM_50 = 2;
              DAT_INTMEM_51 = 0x68;
              FUN_CODE_044f(uVar7 & 0xff00);
              DAT_INTMEM_50 = 2;
              DAT_INTMEM_51 = 2;
              FUN_CODE_044f(1);
              DAT_INTMEM_51 = DAT_EXTMEM_d4b5;
              DAT_INTMEM_50 = 2;
              FUN_CODE_044f(0xd401);
              DAT_INTMEM_51 = DAT_EXTMEM_d4b4;
              DAT_INTMEM_50 = 2;
              FUN_CODE_044f(0xd401);
              DAT_EXTMEM_cc0b = 0;
              DAT_EXTMEM_7fe5 = 0;
              goto LAB_CODE_4fe8;
            }
            FUN_CODE_07f4(bEXTMEMd4cc);
            if ((char)uVar7 == '\x01') goto LAB_CODE_488a;
          } while ((char)uVar7 != '\x02');
          BANK0_R3 = BANK0_R3 | 1;
        } while( true );
      }
      DAT_INTMEM_4d = '\0';
      if ((bCODE00a7 >> 5 & 1) == 1) {
        BANK1_R2 = 0;
        BANK1_R3 = '\0';
        BANK1_R4 = 0;
        BANK1_R5 = 0;
        FUN_CODE_26be(0xc,bCODE00a7);
        bEXTMEMcc09 = 0;
        do {
          if ((bEXTMEMcc07 >> 2 & 1) == 1) break;
        } while (BANK0_R3 < 0xf1);
        if (BANK0_R3 < 0xf1) {
          DAT_INTMEM_50 = 0x20;
          DAT_INTMEM_51 = 6;
          FUN_CODE_044f(0xcc00,0);
          DAT_INTMEM_48 = 0x35;
          DAT_INTMEM_49 = -0x34;
          DAT_INTMEM_4a = 0;
          cVar2 = FUN_CODE_67d0(0xcc37,0);
          uVar4 = cVar2 != '\0';
          cVar2 = FUN_CODE_67d0(CONCAT11(DAT_INTMEM_49 - (((0xfe < DAT_INTMEM_48) << 7) >> 7),
                                         DAT_INTMEM_48 + 1),DAT_INTMEM_4a);
          BANK0_R7 = BANK0_R7 & 0xf;
          if (cVar2 == '\f') {
            DAT_EXTMEM_0120 = uVar4;
          }
        }
        else {
          DAT_EXTMEM_0120 = 0;
        }
      }
      BANK0_R0 = BANK0_R0 & 0xfb;
      DAT_INTMEM_50 = uEXTMEMc848;
      FUN_CODE_2389(CONCAT11(200,uEXTMEMc848));
      bVar3 = BANK0_R0;
      BANK0_R0 = BANK0_R0 | 4;
      DAT_EXTMEM_7fb6 = '\0';
      uVar4 = 0x7f;
      bVar5 = DAT_EXTMEM_7f84;
      if (DAT_EXTMEM_7f84 == 0) {
        uVar4 = 0xd2;
        BANK0_R0 = bVar3 & 0xf | 4;
        bVar5 = DAT_EXTMEM_d25c;
        if (2 < BANK0_R0) goto LAB_CODE_53a2;
      }
      else {
LAB_CODE_53a2:
        BANK1_R2 = 0;
        BANK1_R3 = '\0';
        BANK1_R4 = 0;
        BANK1_R5 = 0;
        FUN_CODE_26be(CONCAT11(uVar4,9),bVar5);
        bEXTMEMcc09 = 0;
        do {
          if ((bEXTMEMcc07 >> 2 & 1) == 1) break;
        } while (BANK0_R0 < 0xf1);
        if (BANK0_R0 < 0xf1) {
          DAT_INTMEM_48 = 0x35;
          DAT_INTMEM_49 = -0x34;
          DAT_INTMEM_4a = 0;
          bVar3 = FUN_CODE_67d0(0xcc36,0);
          if ((bVar3 & 0xf) == 9) {
            cVar2 = FUN_CODE_67d0(CONCAT11(DAT_INTMEM_49 - (((0xfd < DAT_INTMEM_48) << 7) >> 7),
                                           DAT_INTMEM_48 + 2),DAT_INTMEM_4a);
            DAT_EXTMEM_7fe7 = cVar2 != '\0';
          }
          else {
            DAT_EXTMEM_7fe7 = 0;
          }
        }
        else {
          DAT_EXTMEM_7fe7 = 0;
        }
      }
      BANK0_R2 = BANK0_R2 | 0x80;
      uEXTMEMcc0c = 99;
      uEXTMEMca5a = 0;
      DAT_INTMEM_50 = 1;
      DAT_INTMEM_51 = 4;
      uVar4 = 0xca;
      FUN_CODE_044f(0xca00);
      BANK1_R2 = 0;
      BANK1_R3 = '\0';
      BANK1_R4 = 0;
      BANK1_R5 = 1;
      FUN_CODE_26be(CONCAT11(uVar4,8));
      if (DAT_EXTMEM_7f84 == 0) {
        bVar3 = BANK0_R2;
        if ((((bEXTMEMd252 >> 5 & 1) != 1) && ((bEXTMEMd218 & 1) != 0)) &&
           (bVar3 = BANK0_R2 & 0xf, 1 < (BANK0_R2 & 0xf))) {
          bVar3 = BANK0_R2 & 0xb;
        }
        BANK0_R2 = bVar3;
        if ((DAT_EXTMEM_d25c & 0xf) == 0) {
          BANK0_R2 = BANK0_R2 | 0x40;
        }
        else {
          BANK0_R2 = BANK0_R2 & 0xbf;
        }
        bVar3 = DAT_EXTMEM_d25d & 0xf;
        FUN_CODE_22d9();
        if (((bEXTMEMd252 >> 5 & 1) == 1) ||
           ((((DAT_EXTMEM_d25c & 0xf) != 0 || ((bEXTMEMd252 >> 3 & 1) != 1)) &&
            (((DAT_EXTMEM_d25c & 0xf) == 0 || ((bEXTMEMd252 >> 2 & 1) == 0)))))) {
          DAT_EXTMEM_7ffc = false;
        }
        else {
          DAT_EXTMEM_7ffc = true;
          if ((char)DAT_EXTMEM_d25d < '\0') {
            uEXTMEMcaa5 = 2;
          }
        }
        DAT_EXTMEM_7f7f = bVar3;
        if ((DAT_EXTMEM_d25c & 0xf) == 0) {
          DAT_EXTMEM_caa3 = 0;
        }
        else {
          DAT_EXTMEM_caa3 = 7;
          BANK0_R2 = BANK0_R2 | 0x20;
        }
      }
      else {
        DAT_EXTMEM_7f7f = 0x10;
        BANK0_R2 = BANK0_R2 & 8;
        DAT_EXTMEM_7ffc = bEXTMEMc84b == 0;
        uEXTMEMcaa5 = 2;
      }
      BANK0_R2 = BANK0_R2 | 0xd1;
      if (((bool)DAT_EXTMEM_7ffc != false) &&
         (BANK0_R2 = BANK0_R2 & 0xfe | 0x78, DAT_EXTMEM_7f84 == 0)) {
        bEXTMEMd208 = bEXTMEMd208 & 0xf7 | 4;
      }
      bVar3 = BANK0_R2;
      DAT_EXTMEM_7fa2 = 0;
      DAT_EXTMEM_7f76 = '\0';
      DAT_EXTMEM_7f77 = '\0';
      DAT_EXTMEM_7f78 = '\0';
      DAT_EXTMEM_7f79 = '\0';
      DAT_EXTMEM_7f7a = '\0';
      DAT_EXTMEM_7f7b = 0;
      uEXTMEM7f83 = 0;
      uEXTMEM7f82 = 0;
      uEXTMEM7f81 = 0;
      DAT_EXTMEM_7f80 = 0;
      DAT_EXTMEM_7ffa = '\0';
      DAT_EXTMEM_7f86 = 0;
      DAT_EXTMEM_7f87 = '\0';
      DAT_EXTMEM_7f7e = 0;
      DAT_EXTMEM_7f7c = 0;
      uEXTMEM7f8f = 0;
      DAT_EXTMEM_7f8e = 0;
      uEXTMEM7f91 = 0;
      DAT_EXTMEM_7f90 = 0;
      DAT_EXTMEM_7f92 = 0;
      DAT_EXTMEM_7f93 = 0xe7;
      param_2 = 0xe7;
      DAT_EXTMEM_7f99 = 0;
      DAT_EXTMEM_7f9a = 0;
      DAT_EXTMEM_7f9b = 0;
      DAT_EXTMEM_7f9d = 0;
      DAT_EXTMEM_7f9c = 0;
      DAT_EXTMEM_7f85 = 0;
      DAT_EXTMEM_7f9e = 0;
      DAT_EXTMEM_7f9f = '\0';
      DAT_EXTMEM_7fa0 = '\0';
      DAT_EXTMEM_7fa1 = 0;
      DAT_EXTMEM_7fbc = '\0';
      DAT_EXTMEM_7fe0 = '\0';
      DAT_EXTMEM_7fa3 = '\0';
      DAT_EXTMEM_7fb8 = '\0';
      DAT_EXTMEM_7fec = 0;
      BANK1_R0 = '\0';
      BANK1_R1 = '\0';
      DAT_EXTMEM_7ff2 = 0;
      DAT_EXTMEM_7ff3 = '\0';
      DAT_EXTMEM_7ff4 = '\0';
      DAT_EXTMEM_7ffb = '\0';
      DAT_EXTMEM_7ff9 = 0;
      DAT_EXTMEM_7fff = 0;
      DAT_EXTMEM_7ff1 = 0;
      DAT_EXTMEM_7fdd = 0;
      DAT_EXTMEM_7fb7 = 0;
      DAT_EXTMEM_7eab = 0;
      DAT_EXTMEM_7eac = 0;
      DAT_EXTMEM_7ead = 0;
      DAT_EXTMEM_7ea6 = 0;
      DAT_EXTMEM_7ea7 = '\0';
      FUN_CODE_1f5c();
      DAT_EXTMEM_7fb9 = DAT_EXTMEM_c84a == '\0';
      DAT_EXTMEM_7fba = DAT_EXTMEM_c84a == '\0';
      BANK0_R0 = 0;
      DAT_EXTMEM_7fbb = DAT_EXTMEM_c84a != '\0';
      DAT_EXTMEM_7f75 = bEXTMEMcc8e & 1;
      BANK0_R2 = bVar3;
      if (DAT_EXTMEM_7f75 == 0) {
        DAT_EXTMEM_caa9 = 0;
      }
      else {
        DAT_EXTMEM_caa9 = 0xff;
      }
      goto LAB_CODE_5707;
    }
    if ((bEXTMEM7ffd >> 4 & 1) == 1) {
      if (DAT_EXTMEM_7fe0 == '\0') {
        BANK0_R2 = bVar3;
        FUN_CODE_41f1(0);
        if (DAT_EXTMEM_7f79 != '\0') {
          DAT_EXTMEM_7f77 = '\x01';
        }
      }
      else if (DAT_EXTMEM_7ff3 == '\0') {
        DAT_EXTMEM_7fe0 = '\0';
        DAT_EXTMEM_ca20 = 1;
        DAT_EXTMEM_ca21 = 0;
        uEXTMEMca08 = 1;
        DAT_EXTMEM_7f9d = 0;
      }
      else {
        DAT_EXTMEM_7ff2 = 0;
        DAT_EXTMEM_7ff3 = '\0';
        DAT_EXTMEM_ca20 = 2;
        DAT_EXTMEM_ca21 = 1;
        uEXTMEMca22 = 0;
        DAT_EXTMEM_ca23 = 0;
        uEXTMEMca08 = 1;
        DAT_EXTMEM_7f9d = 0;
      }
      DAT_EXTMEM_ca0e = 1;
      DAT_EXTMEM_7f78 = '\0';
      bEXTMEM7ffd = bEXTMEM7ffd & 0xfe;
    }
    if ((bEXTMEM7ffd >> 3 & 1) == 1) {
      DAT_EXTMEM_7ff4 = '\x01';
      DAT_EXTMEM_7fbd = '\0';
      if ((DAT_EXTMEM_7ff3 == '\0' & DAT_EXTMEM_7ff2) == 0) {
        if (cEXTMEMca81 == '\x02') {
          uEXTMEMca0d = 1;
          DAT_EXTMEM_7f9d = 0;
          DAT_EXTMEM_7fbf = '\0';
          DAT_EXTMEM_7f76 = DAT_EXTMEM_7f78 == '\0';
          DAT_EXTMEM_7fbd = '\x01';
          if (DAT_EXTMEM_7f78 != '\0') {
            DAT_EXTMEM_ca61 = 0xf;
          }
        }
        else {
          if (((DAT_EXTMEM_7fbf != '\0') && (DAT_EXTMEM_7fbf = '\0', (bEXTMEMc84b >> 6 & 1) != 1))
             && ((bEXTMEMca83 >> 2 & 1) != 0)) {
            BANK0_R2 = bVar3;
            FUN_CODE_1f5c(bEXTMEMca83);
          }
          if (DAT_EXTMEM_7f78 == '\0') {
            uEXTMEMca0d = 1;
            DAT_EXTMEM_7f76 = '\x01';
          }
          else if (DAT_EXTMEM_7f9f == '\0') {
            if (DAT_EXTMEM_7f79 == '\0') {
              if (BANK1_R0 != '\0' || BANK1_R1 != '\0') {
                BANK0_R2 = bVar3;
                FUN_CODE_2402(0);
              }
              if ((DAT_EXTMEM_7fec & 1) == 0) {
                DAT_EXTMEM_7fed = 1;
              }
              else {
                DAT_EXTMEM_7fed = 2;
              }
              bEXTMEMca09 = DAT_EXTMEM_7fed;
            }
            else {
              if (BANK1_R0 != '\0' || BANK1_R1 != '\0') {
                BANK0_R2 = bVar3;
                FUN_CODE_2402(DAT_EXTMEM_7f79);
              }
              if ((DAT_EXTMEM_7fee != '\0') && (cEXTMEMca81 != '\x01')) {
                BANK0_R2 = bVar3;
                FUN_CODE_1f9b();
              }
              DAT_EXTMEM_7fee = '\0';
              DAT_EXTMEM_7f79 = '\0';
              DAT_INTMEM_50 = 0x20;
              DAT_INTMEM_51 = 0x32;
              BANK0_R2 = bVar3;
              FUN_CODE_044f(0x7f00);
              if ((cEXTMEMca81 != '\x01') && (DAT_EXTMEM_7f7a != '\0')) {
                DAT_EXTMEM_cad0 = 2;
              }
              DAT_EXTMEM_7f7a = '\0';
              bEXTMEMca09 = 1;
            }
            DAT_EXTMEM_7f9d = 0;
            DAT_EXTMEM_7f78 = '\0';
            DAT_EXTMEM_ca61 = 0xf;
          }
        }
      }
      else {
        DAT_EXTMEM_7ff2 = 0;
        if (cEXTMEMca81 == '\x01') {
          DAT_EXTMEM_7ff3 = '\x01';
        }
        else {
          DAT_EXTMEM_7ff3 = '\0';
        }
      }
    }
    bVar5 = BANK0_R0;
    uVar7 = 0x7ffb;
    if ((DAT_EXTMEM_7ffb == '\0' & bEXTMEM7ffd & DAT_EXTMEM_7f9f == '\0') != 0) {
      cVar2 = '\0';
      if (((((bEXTMEMcb4a >> 4 & 1) == 1) || (DAT_EXTMEM_7ff2 == 0)) || ((DAT_EXTMEM_ca9f & 1) != 0)
          ) && (((DAT_EXTMEM_c850 >> 1 & 1) == 1 || (3 < bEXTMEMcc09)))) {
        if (((bEXTMEM7ffe >> 1 & 1) == 1) && (DAT_EXTMEM_7fa0 == '\0')) {
          cVar2 = '\x01';
          if (DAT_EXTMEM_7f76 == '\0') {
            if (DAT_EXTMEM_7fec == 1) {
              if (DAT_EXTMEM_7f77 == '\0') {
                if ((DAT_EXTMEM_7f79 == '\0') || (BANK0_R0 = bVar5, 2 < DAT_EXTMEM_7f9d)) {
                  cVar2 = '\0';
                  DAT_EXTMEM_7f78 = '\0';
                  DAT_EXTMEM_7f79 = '\0';
                  DAT_EXTMEM_7ffb = '\0';
                  DAT_EXTMEM_7f76 = '\0';
                  DAT_EXTMEM_7f9d = 0;
                  BANK0_R0 = bVar5;
                }
              }
              else {
                BANK0_R0 = bVar5;
                if (DAT_EXTMEM_7f79 == '\0') {
                  uEXTMEMca08 = 1;
                  DAT_EXTMEM_7f9d = 0;
                }
              }
            }
            else if ((DAT_EXTMEM_7f9d < 3) << 7 < '\0') {
              DAT_EXTMEM_7f78 = '\x01';
              DAT_EXTMEM_ca0c = 1;
              BANK0_R0 = bVar5;
            }
            else {
              cVar2 = '\0';
              DAT_EXTMEM_7f78 = '\0';
              DAT_EXTMEM_7f79 = '\0';
              DAT_EXTMEM_7ffb = '\0';
              DAT_EXTMEM_7f7a = '\0';
              DAT_EXTMEM_7f76 = '\0';
              DAT_EXTMEM_7f9d = 0;
              DAT_EXTMEM_7ff2 = 0;
              uEXTMEMcad1 = 1;
              BANK0_R0 = bVar5;
            }
          }
          else if (cEXTMEMca81 == '\x02') {
            DAT_EXTMEM_7f78 = '\x01';
            cVar2 = '\0';
            BANK0_R0 = bVar5;
          }
          else {
            if (DAT_EXTMEM_7f79 == '\0') {
              if (BANK1_R0 != '\0' || BANK1_R1 != '\0') {
                BANK0_R2 = bVar3;
                FUN_CODE_2402(0);
              }
              if ((DAT_EXTMEM_7fec & 1) == 0) {
                DAT_EXTMEM_7fed = 1;
              }
              else {
                DAT_EXTMEM_7fed = 2;
              }
              bEXTMEMca09 = DAT_EXTMEM_7fed;
            }
            else {
              if (BANK1_R0 != '\0' || BANK1_R1 != '\0') {
                BANK0_R2 = bVar3;
                FUN_CODE_2402(DAT_EXTMEM_7f79);
              }
              if ((DAT_EXTMEM_7fee != '\0') && (cEXTMEMca81 != '\x01')) {
                BANK0_R0 = bVar5;
                BANK0_R2 = bVar3;
                FUN_CODE_1f9b();
              }
              DAT_EXTMEM_7fee = '\0';
              DAT_EXTMEM_7f79 = '\0';
              DAT_INTMEM_50 = 0x20;
              DAT_INTMEM_51 = 0x32;
              BANK0_R0 = bVar5;
              BANK0_R2 = bVar3;
              FUN_CODE_044f(0x7f00);
              if ((cEXTMEMca81 != '\x01') && (DAT_EXTMEM_7f7a != '\0')) {
                DAT_EXTMEM_cad0 = 2;
              }
              DAT_EXTMEM_7f7a = '\0';
              bEXTMEMca09 = 1;
            }
            DAT_EXTMEM_7f9d = 0;
            DAT_EXTMEM_ca61 = 0xf;
            DAT_EXTMEM_ca0c = 1;
            BANK0_R0 = bVar5;
          }
        }
        else if ((((bEXTMEMcb4a >> 3 & 1) == 1) ||
                 (((DAT_EXTMEM_7f9d == 0 || (2 < DAT_EXTMEM_7f9d)) || (DAT_EXTMEM_7ff4 != '\0'))))
                || ((DAT_EXTMEM_ca9f & 1) == 1)) {
          DAT_EXTMEM_7f9d = 0;
          BANK0_R0 = bVar5;
        }
        else {
          DAT_INTMEM_50 = 0x20;
          DAT_INTMEM_51 = 0x1d;
          BANK0_R2 = bVar3;
          FUN_CODE_044f(0xca00,DAT_EXTMEM_ca9f);
          DAT_EXTMEM_ca0c = 1;
          DAT_EXTMEM_ca61 = 0xf;
          cVar2 = '\x01';
        }
      }
      else {
        cVar2 = '\x01';
        DAT_EXTMEM_ca0c = 1;
        DAT_EXTMEM_ca61 = 0xf;
        BANK0_R0 = bVar5;
      }
      DAT_EXTMEM_7f77 = '\0';
      if (DAT_EXTMEM_7fb6 == '\0' && cVar2 == '\0') {
        DAT_EXTMEM_7fa0 = '\0';
        BANK0_R2 = bVar3;
        FUN_CODE_42b8(DAT_EXTMEM_7fb6 == '\0');
      }
      uVar7 = 0x7f76;
      DAT_EXTMEM_7f76 = '\0';
    }
    DAT_INTMEM_48 = 0x35;
    DAT_INTMEM_49 = -0x34;
    DAT_INTMEM_4a = 0;
    BANK0_R2 = bVar3;
    if ((DAT_INTMEM_47 >> 2 & 1) == 1) {
      DAT_INTMEM_50 = 0x20;
      DAT_INTMEM_51 = 6;
      FUN_CODE_044f(uVar7 & 0xff00);
      BANK0_R2 = bVar3;
      bVar3 = FUN_CODE_67d0(CONCAT11(DAT_INTMEM_49,DAT_INTMEM_48),DAT_INTMEM_4a);
      DAT_INTMEM_4b = bVar3 & 7;
      DAT_INTMEM_4c = bVar3 & 0x18;
      cVar2 = FUN_CODE_67d0(CONCAT11(DAT_INTMEM_49 - (((0xfe < DAT_INTMEM_48) << 7) >> 7),
                                     DAT_INTMEM_48 + 1),DAT_INTMEM_4a);
      uVar7 = CONCAT11(DAT_INTMEM_49 - (((0xfd < DAT_INTMEM_48) << 7) >> 7),DAT_INTMEM_48 + 2);
      uVar4 = FUN_CODE_67d0(uVar7,DAT_INTMEM_4a);
      if (BANK0_R7 < 0x10) {
                    /* WARNING: Could not recover jumptable at 0x5f8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ushort)(byte)(cVar2 * '\x03') + 0x5f90))(uVar4);
        return;
      }
    }
  } while( true );
  while( true ) {
    FUN_CODE_07f4(bVar3);
    if ((char)uVar7 == '\x01') goto LAB_CODE_488a;
    if ((char)uVar7 == '\x02') break;
LAB_CODE_4fe8:
    DAT_EXTMEM_7fed = DAT_EXTMEM_d80d & 7;
    uVar7 = 0x7fed;
    BANK0_R3 = BANK0_R3 & 7;
    bVar3 = DAT_EXTMEM_7fed;
    if ((DAT_EXTMEM_7fed == 7) && (uVar7 = 0xd4cc, bVar3 = bEXTMEMd4cc, (bEXTMEMd4cc & 1) == 1))
    goto LAB_CODE_5025;
  }
  BANK0_R3 = BANK0_R3 | 4;
  goto LAB_CODE_4e4a;
LAB_CODE_5025:
  while (bEXTMEMcc9b == 1) {
    DAT_INTMEM_50 = 0x20;
    DAT_INTMEM_51 = 0x42;
    FUN_CODE_044f(0xcc00);
  }
  FUN_CODE_1465();
  DAT_EXTMEM_cc0b = 0;
  DAT_EXTMEM_7fe5 = 0;
  do {
    BANK0_R3 = BANK0_R3 & 0xf0;
    uVar7 = 0xd868;
    BANK0_R4 = BANK0_R4 & 0xf0;
    if (bEXTMEMd819 == BANK0_R4) {
      FUN_CODE_15c1();
      FUN_CODE_1403();
      BANK0_R3 = BANK0_R3 & 0xf0;
      DAT_EXTMEM_7fed = ~DAT_EXTMEM_d804 >> 4;
      DAT_EXTMEM_cc0b = 0;
      DAT_EXTMEM_7fe5 = 0;
      goto LAB_CODE_50b3;
    }
    FUN_CODE_07f4(DAT_EXTMEM_d868);
    if ((char)uVar7 == '\x01') goto LAB_CODE_488a;
  } while ((char)uVar7 != '\x02');
  FUN_CODE_15c1();
  BANK0_R3 = BANK0_R3 | 8;
  goto LAB_CODE_4e4a;
LAB_CODE_50b3:
  BANK0_R3 = BANK0_R3 & DAT_EXTMEM_7fed;
  uVar7 = 0x7fed;
  if (bEXTMEMd84e != BANK0_R4) {
    FUN_CODE_07f4(DAT_EXTMEM_7fed);
    if ((char)uVar7 == '\x01') goto LAB_CODE_488a;
    if ((char)uVar7 == '\x02') goto code_c0x50d7;
    goto LAB_CODE_50b3;
  }
  if (((bCODE00a6 >> 1 & 1) != 1) && (DAT_EXTMEM_7eaa == '\0')) {
    do {
    } while( true );
  }
  if ((bCODE00a9 >> 4 & 1) != 0) {
    FUN_CODE_04d0(bCODE00a9);
  }
  while (bEXTMEMcc9b == 2) {
    DAT_INTMEM_50 = 0x20;
    DAT_INTMEM_51 = 0x43;
    FUN_CODE_044f(0xcc00);
  }
  DAT_INTMEM_50 = 2;
  DAT_INTMEM_51 = 0x26;
  FUN_CODE_044f(0xcc00);
  DAT_EXTMEM_cc0b = 0;
  DAT_EXTMEM_7fe5 = 0;
  do {
    DAT_EXTMEM_7fed = DAT_EXTMEM_d80d & 7;
    uVar7 = 0x7fed;
    BANK0_R3 = BANK0_R3 & 7;
    bVar3 = DAT_EXTMEM_7fed;
    if ((DAT_EXTMEM_7fed == 7) && (uVar7 = 0xd4cc, bVar3 = bEXTMEMd4cc, (bEXTMEMd4cc & 1) != 0)) {
      uEXTMEMc80f = 0;
      uVar7 = 0xcc00;
      uEXTMEMcc00 = 0;
      FUN_CODE_226e();
      DAT_INTMEM_50 = 2;
      DAT_INTMEM_51 = 0x27;
      FUN_CODE_044f(uVar7 & 0xff00);
      DAT_EXTMEM_cc0b = 0;
      DAT_EXTMEM_7fe5 = 0;
      goto LAB_CODE_51aa;
    }
    FUN_CODE_07f4(bVar3);
    if ((char)uVar7 == '\x01') goto LAB_CODE_488a;
  } while ((char)uVar7 != '\x02');
  BANK0_R3 = BANK0_R3 | 0x20;
  goto LAB_CODE_4e4a;
code_c0x50d7:
  BANK0_R3 = BANK0_R3 | 0x10;
  goto LAB_CODE_4e4a;
LAB_CODE_51aa:
  DAT_EXTMEM_7fed = bEXTMEMc803 & 0x80;
  uVar7 = 0x7fed;
  if (DAT_EXTMEM_7fed == 0) {
    FUN_CODE_07f4(0);
    if ((char)uVar7 == '\x01') goto LAB_CODE_488a;
    if ((char)uVar7 == '\x02') goto code_c0x51cb;
    goto LAB_CODE_51aa;
  }
  DAT_EXTMEM_cc0b = 0;
  do {
  } while ((BANK0_R4 != 0) << 7 < '\0');
  DAT_EXTMEM_7fed = cEXTMEMd085;
  DAT_INTMEM_50 = 1;
  DAT_INTMEM_51 = 3;
  FUN_CODE_044f(0x7f00,bEXTMEMc849 >> 4);
  DAT_EXTMEM_7fed = bEXTMEMc849;
  while( true ) {
    while (uVar7 = 0xcc9b, bEXTMEMcc9b == 3) {
      DAT_INTMEM_50 = 0x20;
      DAT_INTMEM_51 = 0x44;
      FUN_CODE_044f(0xcc00);
    }
    FUN_CODE_2369();
    if ((char)uVar7 != '\0') goto LAB_CODE_488a;
    bVar1 = (DAT_EXTMEM_7fed & 1) == 0;
    bVar3 = BANK0_R3 & 0xf;
    if (((bVar1 & bEXTMEMc803) != 0) ||
       (bVar1 = (DAT_EXTMEM_7fed & 2) == 0, (bVar1 & bEXTMEMc840) != 0)) break;
    BANK0_R3 = BANK0_R3 & 3;
    bVar1 = (DAT_EXTMEM_7fed & 4) == 0;
    bVar3 = BANK0_R3;
    if (((bVar1 & bEXTMEMc841) != 0) ||
       (bVar1 = (DAT_EXTMEM_7fed & 8) == 0, bVar1 && cEXTMEMd085 != '?')) break;
  }
  BANK0_R3 = bVar3;
  FUN_CODE_270e(bVar1);
  BANK0_R3 = BANK0_R3 | 0x80;
  goto LAB_CODE_4e4a;
code_c0x51cb:
  BANK0_R3 = BANK0_R3 | 0x40;
  goto LAB_CODE_4e4a;
}



/* =========================================================
 * CODE:60c7  FUN_CODE_60c7  size=109
 * ========================================================= */

/* WARNING: Removing unreachable block (CODE,0x576b) */
/* WARNING: Removing unreachable block (CODE,0x50a2) */
/* WARNING: Removing unreachable block (CODE,0x6438) */

void FUN_CODE_60c7(ushort param_1,byte param_2)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  undefined1 uVar4;
  byte bVar5;
  byte bVar6;
  ushort uVar7;
  
  bVar3 = BANK0_R2;
  DAT_INTMEM_50 = 1;
  DAT_INTMEM_51 = 0x61;
  FUN_CODE_044f(param_1 & 0xff00);
  BANK0_R2 = bVar3;
  if ((DAT_EXTMEM_7f84 == 0) && (uVar4 = 0xd2, (DAT_EXTMEM_d25c & 0xf) == 0)) {
    FUN_CODE_270e(DAT_EXTMEM_d25c);
    FUN_CODE_421d(CONCAT11(uVar4,0x49));
  }
  else {
    uVar4 = 0x7f;
    if (DAT_EXTMEM_7f7d == '\0') {
      FUN_CODE_270e(0);
      FUN_CODE_421d(CONCAT11(uVar4,0x48));
    }
    else {
      BANK0_R7 = BANK0_R7 | 2;
      DAT_EXTMEM_7f89 = 0x40;
      FUN_CODE_270e();
      FUN_CODE_427b();
    }
  }
  uVar7 = 0x7eab;
  DAT_EXTMEM_7eab = 0x10;
  BANK0_R2 = bVar3;
  do {
    bVar3 = BANK0_R2;
    if ((DAT_INTMEM_47 & 0x28) != 0) {
      DAT_INTMEM_50 = 1;
      DAT_INTMEM_51 = 0x10;
      uVar7 = uVar7 & 0xff00;
      FUN_CODE_044f(uVar7);
      DAT_INTMEM_50 = 1;
      DAT_INTMEM_51 = 0x68;
      FUN_CODE_044f(uVar7 & 0xff00);
      DAT_INTMEM_50 = 1;
      DAT_INTMEM_51 = 1;
      FUN_CODE_044f(1);
      DAT_INTMEM_50 = 1;
      DAT_INTMEM_51 = DAT_INTMEM_47;
      FUN_CODE_044f(1);
      FUN_CODE_270e();
      if ((DAT_EXTMEM_7fa7 != '\x02') && (DAT_EXTMEM_7fa7 != '\x05')) {
        BANK0_R2 = bVar3;
        FUN_CODE_421d(0x7f4b);
      }
      do {
      } while( true );
    }
LAB_CODE_5707:
    bVar3 = BANK0_R2;
    uVar7 = 0xcc9b;
    if (bEXTMEMcc9b == 1) {
      bVar5 = 1;
LAB_CODE_5719:
      DAT_INTMEM_50 = 0x20;
      DAT_INTMEM_51 = 0x45;
      FUN_CODE_044f(uVar7 & 0xff00,bVar5);
      BANK0_R2 = bVar3;
      goto LAB_CODE_5707;
    }
    uVar7 = 0xc808;
    bVar5 = DAT_EXTMEM_c808;
    if ((DAT_EXTMEM_c808 & 1) != 0) goto LAB_CODE_5719;
    DAT_INTMEM_47 = DAT_EXTMEM_7f93 & bEXTMEMcc07 & param_2;
    bEXTMEM7ffd = DAT_EXTMEM_ca40;
    bEXTMEM7ffe = DAT_EXTMEM_ca41;
    BANK0_R1 = BANK0_R1 & 0xf0;
    DAT_EXTMEM_7fed = ~DAT_EXTMEM_d804 >> 4;
    param_2 = DAT_EXTMEM_7f93;
    if ((DAT_EXTMEM_7fb4 != '\0') &&
       (BANK0_R0 = BANK0_R0 & DAT_EXTMEM_7fed, bEXTMEMd84e == BANK0_R1)) {
      if (((bCODE00a6 >> 1 & 1) == 0) && (DAT_EXTMEM_7eaa == '\0')) {
        DAT_EXTMEM_7eb8 = DAT_EXTMEM_7eb8 + '\x01';
        if (((2 < BANK0_R0) << 7 < '\0') && (BANK0_R0 < 6)) {
                    /* WARNING: Could not recover jumptable at 0x57d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ushort)(byte)(DAT_EXTMEM_7eb9 * '\x03') + 0x57d7))(DAT_EXTMEM_7fed);
          return;
        }
      }
      else {
        DAT_EXTMEM_7fb4 = '\0';
        DAT_EXTMEM_7fed = DAT_EXTMEM_d804 & 0xf;
        uEXTMEMcc00 = 0;
        DAT_EXTMEM_7fab = 1;
        DAT_EXTMEM_7fa9 = 1;
        DAT_EXTMEM_7faa = 0;
        BANK1_R2 = DAT_EXTMEM_7f7e;
        BANK1_R3 = DAT_EXTMEM_7f7d;
        BANK1_R4 = DAT_EXTMEM_7f7c;
        BANK1_R5 = 0;
        bEXTMEMd80b = DAT_EXTMEM_7fed;
        FUN_CODE_26be(0x7f01);
        if ((bCODE00a9 >> 4 & 1) != 0) {
          BANK0_R2 = bVar3;
          FUN_CODE_04d0(bCODE00a9);
        }
      }
    }
    if (DAT_EXTMEM_7fb5 != '\0') {
      BANK0_R0 = BANK0_R0 & 0xf0;
      param_2 = ~DAT_EXTMEM_d804 & 0xf0 & bEXTMEMd819;
      DAT_INTMEM_4e = ~DAT_EXTMEM_d804 & 0xf0;
      DAT_INTMEM_4f = 0;
      DAT_EXTMEM_7fed = param_2;
      if (param_2 == DAT_INTMEM_4e) {
        BANK0_R2 = bVar3;
        FUN_CODE_15c1(0xff);
      }
    }
    uVar7 = 0x7fbe;
    if (DAT_EXTMEM_7fbe != '\0') {
      if ((bCODE00ac != 0) && (DAT_EXTMEM_7ea7 == '\0')) {
        DAT_EXTMEM_7ea7 = '\x01';
      }
      if (DAT_EXTMEM_7ea7 != '\0') {
        DAT_EXTMEM_7ea6 = DAT_EXTMEM_7ea6 + 1;
      }
      if ((DAT_EXTMEM_7f9d == 0) && (DAT_EXTMEM_7f78 == '\0')) {
        uVar4 = 0x7f;
        bVar5 = 0;
        if (DAT_EXTMEM_7fbd != '\0') goto LAB_CODE_5a6d;
      }
      else {
LAB_CODE_5a6d:
        uVar4 = 0;
        bVar5 = bCODE00ab;
        if ((bCODE00ab >> 6 & 1) != 1) {
          uVar7 = 0;
          uVar4 = 0;
          bVar5 = DAT_EXTMEM_7ea6;
          if (BANK0_R0 <= bCODE00ac) goto LAB_CODE_5aa1;
        }
      }
      BANK0_R2 = bVar3;
      FUN_CODE_421d(CONCAT11(uVar4,0x46),bVar5);
      DAT_EXTMEM_7fbe = '\0';
      bEXTMEMcc09 = 0;
      DAT_EXTMEM_7ea7 = '\0';
      uVar7 = 0x7ea6;
      DAT_EXTMEM_7ea6 = 0;
    }
LAB_CODE_5aa1:
    if ((DAT_INTMEM_47 == 0) && (uVar7 = 0x7ffd, bEXTMEM7ffd == 0)) {
      if ((DAT_EXTMEM_7fa3 != '\0') && ((DAT_EXTMEM_7fa2 == '\x03' || (DAT_EXTMEM_7fa2 == '\x04'))))
      {
        DAT_INTMEM_50 = 4;
        DAT_INTMEM_51 = 0x1b;
        BANK0_R2 = bVar3;
        FUN_CODE_044f(0x7f00,0);
        if (DAT_EXTMEM_7f87 != '\0') {
          DAT_EXTMEM_7fe1 = '\x01';
          DAT_EXTMEM_7fe2 = '\x01';
          DAT_EXTMEM_7fe3 = '\x01';
          DAT_EXTMEM_7fe4 = '\x01';
          DAT_EXTMEM_7ffa = '\x01';
          for (bVar5 = 0; bVar5 < BANK0_R4; bVar5 = bVar5 + 1) {
            BANK0_R6 = BANK0_R6 & 4;
            *(bool *)CONCAT11('\x7f' - (((0x1e < bVar5) << 7) >> 7),bVar5 - 0x1f) =
                 *(char *)CONCAT11('\x7f' - (((0x7f < bVar5) << 7) >> 7),bVar5 + 0x80) != '\0';
          }
          if ((DAT_EXTMEM_7fe1 == '\0') || (DAT_EXTMEM_7fe2 == '\0')) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if ((bVar1) && (DAT_EXTMEM_7fe3 != '\0')) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          if ((bVar1) && (DAT_EXTMEM_7fe4 != '\0')) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          if (DAT_EXTMEM_7f7d == '\x10') {
            bVar5 = 2;
          }
          else {
            bVar5 = DAT_EXTMEM_7f7d == '\b';
          }
          bVar6 = DAT_EXTMEM_7f80 & 3;
          bVar5 = *(byte *)CONCAT11('\x7f' - (((0x69 < bVar5) << 7) >> 7),bVar5 + 0x96) & 3;
          if (((bVar6 < BANK0_R3) && (bVar1)) || (bVar5 == BANK0_R4)) {
            DAT_EXTMEM_7f9a = bVar6 << 4 | bVar6;
          }
          else {
            DAT_EXTMEM_7ffa = '\0';
            DAT_EXTMEM_7f9a = bVar5 << 4 | bVar5;
          }
          DAT_EXTMEM_7fe1 = '\x01';
          DAT_EXTMEM_7fe2 = 1;
          DAT_EXTMEM_7fe3 = '\x01';
          DAT_EXTMEM_7fe4 = '\x01';
          for (bVar5 = 0; bVar6 = DAT_EXTMEM_7f9a, bVar5 < BANK0_R4; bVar5 = bVar5 + 1) {
            BANK0_R6 = BANK0_R6 & 0x20;
            *(bool *)CONCAT11('\x7f' - (((0x1e < bVar5) << 7) >> 7),bVar5 - 0x1f) =
                 *(char *)CONCAT11('\x7f' - (((0x7f < bVar5) << 7) >> 7),bVar5 + 0x80) != '\0';
          }
          if ((DAT_EXTMEM_7fe1 == '\0') || (DAT_EXTMEM_7fe2 == 0)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if ((bVar1) && (DAT_EXTMEM_7fe3 != '\0')) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          if ((bVar1) && (DAT_EXTMEM_7fe4 != '\0')) {
            DAT_EXTMEM_7fe3 = '\x01';
          }
          else {
            DAT_EXTMEM_7fe3 = '\0';
          }
          DAT_EXTMEM_7fed = (DAT_EXTMEM_7f80 & 0x18) >> 1;
          DAT_EXTMEM_7fe4 =
               *(byte *)CONCAT11('\x7f' - (((0x69 < DAT_EXTMEM_7fe2) << 7) >> 7),
                                 DAT_EXTMEM_7fe2 + 0x96) & 0xc;
          if (((DAT_EXTMEM_7fed < BANK0_R3) && (DAT_EXTMEM_7fe3 == '\x01')) ||
             (DAT_EXTMEM_7fe4 == BANK0_R4)) {
            DAT_EXTMEM_7f9a = DAT_EXTMEM_7fed << 4 | DAT_EXTMEM_7fed;
          }
          else {
            DAT_EXTMEM_7ffa = '\0';
            DAT_EXTMEM_7f9a = DAT_EXTMEM_7fe4 << 4 | DAT_EXTMEM_7fe4;
          }
          BANK0_R3 = BANK0_R3 | bVar6;
          if (DAT_EXTMEM_7ffa == '\0') {
            DAT_EXTMEM_7f85 = 1;
          }
        }
        if (DAT_EXTMEM_7fa2 == '\x04') {
          DAT_EXTMEM_7fe2 = DAT_EXTMEM_7f80;
          BANK0_R3 = BANK0_R3 & 4;
          BANK0_R4 = BANK0_R4 & 0x20;
          BANK0_R5 = BANK0_R5 & 3;
          bVar5 = ((DAT_EXTMEM_7f80 & 0x18) >> 4) << 1 | (DAT_EXTMEM_7f80 & 8) >> 3;
          DAT_EXTMEM_7fb8 = '\0';
          if ((DAT_EXTMEM_7fba == '\0') || (DAT_EXTMEM_7f80 != 0)) {
            bVar6 = DAT_EXTMEM_7f80;
            if (DAT_EXTMEM_7f87 == '\0') {
              DAT_EXTMEM_7fed = DAT_EXTMEM_7f80 & 3;
              BANK0_R3 = BANK0_R3 | DAT_EXTMEM_7f9a & 0xcc;
              DAT_EXTMEM_7f9a = DAT_EXTMEM_7fed << 4 | DAT_EXTMEM_7fed;
            }
          }
          else {
            DAT_EXTMEM_7fb8 = '\x01';
            bVar6 = 1;
          }
          if (((DAT_EXTMEM_7fb9 == '\0') || (DAT_EXTMEM_7f80 != 0)) ||
             ((DAT_EXTMEM_7fbb == '\0' && ((DAT_EXTMEM_7fbc == '\0' && (DAT_EXTMEM_7fb8 != '\0')))))
             ) {
            if (DAT_EXTMEM_7f87 == '\0') {
              DAT_EXTMEM_7fed = (DAT_EXTMEM_7f80 & 0x18) >> 1;
              BANK0_R3 = BANK0_R3 | DAT_EXTMEM_7f9a & 0x33;
              DAT_EXTMEM_7f9a = DAT_EXTMEM_7fed << 4 | DAT_EXTMEM_7fed;
            }
          }
          else {
            bVar5 = bVar5 + 1;
            DAT_EXTMEM_7fb8 = '\x01';
          }
          bVar6 = bVar5 << 2 | bVar6;
          DAT_EXTMEM_7f9b = bVar6 | bVar6 << 4;
        }
        DAT_EXTMEM_7fa3 = '\0';
        DAT_EXTMEM_7f87 = '\0';
      }
      uEXTMEMcc2d = 0xfe;
      BANK0_R2 = bVar3;
      goto LAB_CODE_5707;
    }
    if ((DAT_INTMEM_47 & 1) != 0) {
      BANK0_R2 = bVar3;
      FUN_CODE_270e();
LAB_CODE_488a:
      while( true ) {
        while( true ) {
          DAT_INTMEM_50 = 1;
          DAT_INTMEM_51 = 1;
          FUN_CODE_044f(uVar7 & 0xff00);
          if ((bCODE00a7 & 1) != 0) {
            FUN_CODE_05db(0,bCODE00a7);
          }
          cEXTMEMcc99 = cEXTMEMcc99 + '\x01';
          BANK0_R3 = BANK0_R3 & 0xfe;
          DAT_EXTMEM_d815 = 0;
          while ((((bEXTMEMc84b & 1) != 0 && (uVar7 = 0xcc9b, bVar3 = bEXTMEMcc9b, bEXTMEMcc9b < 10)
                  ) || (uVar7 = 0xc808, bVar3 = DAT_EXTMEM_c808, (DAT_EXTMEM_c808 & 1) != 0))) {
            DAT_INTMEM_50 = 0x20;
            DAT_INTMEM_51 = 0x40;
            FUN_CODE_044f(uVar7 & 0xff00,bVar3);
          }
          if ((bEXTMEMd86a >> 4 & 1) != 0) {
            uEXTMEMca10 = 3;
            uEXTMEMca15 = 0x20;
            uEXTMEMca14 = 7;
          }
          if ((bCODE00a6 >> 6 & 1) != 0) {
            uEXTMEMca18 = uCODE00aa;
            uEXTMEMca19 = 0xff;
          }
          uEXTMEMcc0c = 199;
          DAT_EXTMEM_cc0b = 0;
          DAT_EXTMEM_c804 = 0;
          DAT_EXTMEM_c84a = '\x02';
          if ((bEXTMEMd86a >> 3 & 1) == 0) {
            uEXTMEMc8a0 = 0xe;
          }
          else {
            uEXTMEMd8a0 = 0xd;
          }
          uEXTMEMd835 = 2;
          BANK0_R3 = BANK0_R3 & 0xfc;
          DAT_INTMEM_50 = 0x20;
          DAT_INTMEM_51 = 1;
          FUN_CODE_044f(0xc800);
          DAT_EXTMEM_7f84 = DAT_EXTMEM_c801 & 0x80;
          if (DAT_EXTMEM_7f84 == 0) {
            uEXTMEMd254 = 0xff;
            uEXTMEMd255 = 0xff;
            BANK0_R3 = BANK0_R3 & 0xdf;
            uEXTMEMd238 = 4;
          }
          DAT_EXTMEM_7fa4 = bEXTMEMcc8e & 4;
          DAT_EXTMEM_7f94 = uEXTMEMcc8c;
          uEXTMEM7f95 = uEXTMEMcc8d;
          DAT_EXTMEM_7f96 = uEXTMEMc828;
          uEXTMEM7f97 = uEXTMEMc829;
          uEXTMEM7f98 = uEXTMEMc82a;
          if (cEXTMEMcc92 == '\0') {
            DAT_EXTMEM_7fa6 = '\x02';
          }
          else {
            BANK0_R3 = BANK0_R3 & 0x7f;
            DAT_EXTMEM_7fa6 = cEXTMEMcc92;
          }
          DAT_EXTMEM_7fa5 = uEXTMEMcc91;
          uEXTMEMcc93 = 6;
          if ((DAT_EXTMEM_7f84 != 0) && ((bEXTMEMc84b >> 3 & 1) != 1)) {
            BANK0_R3 = BANK0_R3 & 0xfb;
          }
          BANK0_R3 = BANK0_R3 & 0xb;
          if ((bCODE00a9 >> 6 & 1) == 0) {
            bEXTMEMd609 = bCODE00a9;
            if ((char)bCODE00a9 < '\0') {
              BANK0_R3 = 0x23;
            }
            else {
              BANK0_R3 = 3;
            }
          }
          else {
            bEXTMEMd609 = 2;
          }
          if ((bCODE00a9 >> 6 & 1) == 0) {
            bEXTMEMd689 = bCODE00a9;
            if ((char)bCODE00a9 < '\0') {
              BANK0_R3 = 0x23;
            }
            else {
              BANK0_R3 = 3;
            }
          }
          else {
            bEXTMEMd689 = 2;
          }
          if ((bCODE00a9 >> 6 & 1) == 0) {
            bEXTMEMd709 = bCODE00a9;
            if ((char)bCODE00a9 < '\0') {
              BANK0_R3 = 0x23;
            }
            else {
              BANK0_R3 = 3;
            }
          }
          else {
            bEXTMEMd709 = 2;
          }
          if ((bCODE00a9 >> 6 & 1) == 0) {
            bEXTMEMd789 = bCODE00a9;
            if ((char)bCODE00a9 < '\0') {
              BANK0_R3 = 0x23;
            }
            else {
              BANK0_R3 = 3;
            }
          }
          else {
            bEXTMEMd789 = 2;
          }
          if ((char)bCODE00a9 < '\0') {
            uEXTMEMd606 = 2;
            uEXTMEMd686 = 2;
            uEXTMEMd706 = 2;
            uEXTMEMd786 = 2;
          }
          BANK0_R3 = BANK0_R3 & 0xfd | 1;
          bEXTMEMd830 = 1;
          DAT_INTMEM_50 = 0x10;
          DAT_INTMEM_51 = 0x70;
          FUN_CODE_044f(0xd800);
          DAT_EXTMEM_cc0b = 0;
          do {
          } while ((bEXTMEMd830 >> 1 & 1) != 1);
          BANK0_R3 = BANK0_R3 & 0x1c;
          if (DAT_EXTMEM_c850 != 1) break;
          BANK0_R3 = 0;
          uVar7 = 0xd830;
          FUN_CODE_270e();
        }
        uVar7 = 0xd86d;
        FUN_CODE_1603();
        if ((char)uVar7 == '\0') break;
        FUN_CODE_270e();
      }
      BANK0_R3 = BANK0_R3 & 0xfe;
      DAT_EXTMEM_7f7d = '\x10';
      FUN_CODE_0cfa(0x7f01);
      uEXTMEMd802 = 2;
      uEXTMEMce06 = 0x10;
      uEXTMEMd801 = 0x81;
      uEXTMEMd803 = 0xf0;
      bEXTMEMd830 = 0;
      DAT_EXTMEM_7f7e = 4;
      FUN_CODE_2820(0x7f00);
      uVar7 = 0x7fe6;
      if (DAT_EXTMEM_7fe6 == '\0') {
        FUN_CODE_1ac6(0);
        uVar7 = uVar7 & 0xff00;
        FUN_CODE_1b66();
        if ((char)uVar7 == '\0') {
          uEXTMEMd84f = 0;
          uVar7 = 0xd802;
          FUN_CODE_1b66();
          if ((char)uVar7 == '\0') {
            FUN_CODE_1f1a();
            goto LAB_CODE_4c29;
          }
          FUN_CODE_270e();
        }
        else {
          FUN_CODE_270e();
        }
        goto LAB_CODE_488a;
      }
LAB_CODE_4c29:
      DAT_EXTMEM_7fe6 = '\x01';
      uEXTMEMd850 = 0xf;
      uEXTMEMd852 = 0x1f;
      uEXTMEMd853 = 0xff;
      DAT_EXTMEM_7fe1 = cEXTMEMd607;
      DAT_EXTMEM_7fe2 = bEXTMEMd687;
      DAT_EXTMEM_7fe3 = cEXTMEMd707;
      DAT_EXTMEM_7fe4 = bEXTMEMd787;
      uEXTMEMd801 = 0;
      uEXTMEMd810 = 0xff;
      bEXTMEMd80b = 0;
      uEXTMEMd80a = 0;
      DAT_EXTMEM_d804 = 0;
      uEXTMEMd85d = 0xac;
      uEXTMEMd85e = 0xd;
      DAT_INTMEM_50 = 1;
      DAT_INTMEM_51 = 0x1e;
      FUN_CODE_044f(0xd800);
      DAT_EXTMEM_cc0b = 0;
      cEXTMEMcc90 = '\0';
      while ((bEXTMEMcc07 & 1) == 1) {
        if (((bCODE00a7 >> 4 & 1) != 0) && (DAT_EXTMEM_7f84 == 0)) {
          DAT_INTMEM_50 = 0x20;
          DAT_INTMEM_51 = 0x53;
          FUN_CODE_044f(0x7f00,0);
          uEXTMEMd254 = 0xff;
          uEXTMEMd255 = 0xff;
          BANK0_R3 = BANK0_R3 & 0xdf;
          uEXTMEMd238 = 4;
        }
        if (BANK0_R4 <= DAT_EXTMEM_cc0b) {
          cEXTMEMcc90 = cEXTMEMcc90 + '\x01';
          DAT_EXTMEM_cc0b = 0;
          if (cEXTMEMcc90 == '\n') {
            BANK0_R3 = BANK0_R3 & 0xfb;
          }
          if ((cEXTMEMcc90 == 'd') && ((bCODE00a7 & 1) == 1)) {
            FUN_CODE_05db(0xff,bCODE00a7,uEXTMEMc848);
          }
        }
      }
      DAT_INTMEM_50 = 1;
      DAT_INTMEM_51 = 0x2c;
      FUN_CODE_044f(0xcc00,bEXTMEMcc07);
      if ((bCODE00a7 & 1) != 0) {
        FUN_CODE_05db(0,bCODE00a7);
      }
      if ((char)bCODE00a7 < '\0') {
        FUN_CODE_056c(bCODE00a7);
      }
      while ((((bEXTMEMc84b & 1) != 0 && (uVar7 = 0xcc9b, bVar3 = bEXTMEMcc9b, bEXTMEMcc9b < 0xb))
             || (uVar7 = 0xc808, bVar3 = DAT_EXTMEM_c808, (DAT_EXTMEM_c808 & 1) != 0))) {
        DAT_INTMEM_50 = 0x20;
        DAT_INTMEM_51 = 0x41;
        FUN_CODE_044f(uVar7 & 0xff00,bVar3);
      }
      DAT_EXTMEM_7f7d = '\0';
      DAT_EXTMEM_7ffc = 0;
      DAT_EXTMEM_7fbe = '\0';
      DAT_EXTMEM_7fbf = '\0';
      DAT_EXTMEM_7fbd = '\0';
      DAT_EXTMEM_7fb5 = '\0';
      DAT_EXTMEM_7fb4 = '\0';
      DAT_EXTMEM_7eb9 = '\0';
      DAT_EXTMEM_7fab = 0;
      DAT_EXTMEM_7fa9 = 0;
      DAT_EXTMEM_7faa = 0;
      DAT_EXTMEM_7fb3 = 0;
      BANK0_R3 = BANK0_R3 | 2;
      if ((DAT_EXTMEM_c800 & 1) == 1) {
        DAT_EXTMEM_cc0b = 0;
        DAT_INTMEM_50 = 1;
        DAT_INTMEM_51 = 2;
        FUN_CODE_044f(0xcc00,DAT_EXTMEM_c800);
        if (DAT_INTMEM_4d == '\0') {
          if ((bEXTMEMc84b >> 2 & 1) == 1) {
            DAT_INTMEM_50 = 0xeb;
            FUN_CODE_2389(0xc801,bEXTMEMc84b);
          }
          else {
            DAT_INTMEM_50 = uEXTMEMc848;
            FUN_CODE_2389(0xc801,bEXTMEMc84b);
          }
        }
        DAT_INTMEM_4d = '\x01';
        uEXTMEMcc0c = 99;
        DAT_EXTMEM_c804 = 0x80;
        uEXTMEMca5a = 0;
        BANK0_R3 = BANK0_R3 | 4;
        DAT_EXTMEM_7f7e = 4;
        uEXTMEMd836 = 8;
        FUN_CODE_11e5();
        bEXTMEMcc95 = 0;
        uEXTMEMcc96 = 0;
LAB_CODE_4e4a:
        do {
          FUN_CODE_2242();
          bEXTMEMcc95 = bEXTMEMcc95 + 1;
          if (((bCODE00a6 >> 2 & 1) != 1) && ((bEXTMEMcc95 & 0xf) == 0)) {
            FUN_CODE_0860(bEXTMEMcc95);
          }
          DAT_EXTMEM_d602 = 0x10;
          DAT_EXTMEM_d603 = 0x2b;
          DAT_EXTMEM_d682 = 0x10;
          DAT_EXTMEM_d683 = 0x2b;
          DAT_EXTMEM_d702 = 0x10;
          DAT_EXTMEM_d703 = 0x2b;
          DAT_EXTMEM_d782 = 0x10;
          DAT_EXTMEM_d783 = 0x2b;
          DAT_INTMEM_50 = 2;
          DAT_INTMEM_51 = 0x25;
          FUN_CODE_044f(0xd700);
          uEXTMEMd40f = 3;
          BANK0_R3 = BANK0_R3 & 0xfe;
          DAT_EXTMEM_cc0b = 0;
          DAT_EXTMEM_7fe5 = 0;
          do {
            uVar7 = 0xd4cc;
            if ((bEXTMEMd4cc & 1) == 1) {
              if (((bEXTMEMd4cc >> 1 & 1) == 0) || (cEXTMEMd4b6 != '\x06')) {
                BANK0_R3 = BANK0_R3 | 2;
                goto LAB_CODE_4e4a;
              }
              FUN_CODE_129a();
              if (((DAT_EXTMEM_d4b5 < 9) << 7 < '\0') ||
                 ((DAT_EXTMEM_d4b5 == 9 && (DAT_EXTMEM_d4b4 < 0xc4)))) {
                uEXTMEMd60c = 2;
                uEXTMEMd68c = 2;
                uEXTMEMd70c = 2;
                uEXTMEMd78c = 2;
              }
              else if (((DAT_EXTMEM_d4b5 < 0x13) << 7 < '\0') ||
                      ((DAT_EXTMEM_d4b5 == 0x13 && (DAT_EXTMEM_d4b4 < 0x88)))) {
                uEXTMEMd60c = 1;
                uEXTMEMd68c = 1;
                uEXTMEMd70c = 1;
                uEXTMEMd78c = 1;
              }
              else {
                uEXTMEMd60c = 0;
                uEXTMEMd68c = 0;
                uEXTMEMd70c = 0;
                uEXTMEMd78c = 0;
              }
              uVar7 = 0xd707;
              FUN_CODE_2820(0xd707);
              DAT_INTMEM_50 = 2;
              DAT_INTMEM_51 = 0x14;
              uVar7 = uVar7 & 0xff00;
              FUN_CODE_044f(uVar7);
              DAT_INTMEM_50 = 2;
              DAT_INTMEM_51 = 0x68;
              FUN_CODE_044f(uVar7 & 0xff00);
              DAT_INTMEM_50 = 2;
              DAT_INTMEM_51 = 2;
              FUN_CODE_044f(1);
              DAT_INTMEM_51 = DAT_EXTMEM_d4b5;
              DAT_INTMEM_50 = 2;
              FUN_CODE_044f(0xd401);
              DAT_INTMEM_51 = DAT_EXTMEM_d4b4;
              DAT_INTMEM_50 = 2;
              FUN_CODE_044f(0xd401);
              DAT_EXTMEM_cc0b = 0;
              DAT_EXTMEM_7fe5 = 0;
              goto LAB_CODE_4fe8;
            }
            FUN_CODE_07f4(bEXTMEMd4cc);
            if ((char)uVar7 == '\x01') goto LAB_CODE_488a;
          } while ((char)uVar7 != '\x02');
          BANK0_R3 = BANK0_R3 | 1;
        } while( true );
      }
      DAT_INTMEM_4d = '\0';
      if ((bCODE00a7 >> 5 & 1) == 1) {
        BANK1_R2 = 0;
        BANK1_R3 = '\0';
        BANK1_R4 = 0;
        BANK1_R5 = 0;
        FUN_CODE_26be(0xc,bCODE00a7);
        bEXTMEMcc09 = 0;
        do {
          if ((bEXTMEMcc07 >> 2 & 1) == 1) break;
        } while (BANK0_R3 < 0xf1);
        if (BANK0_R3 < 0xf1) {
          DAT_INTMEM_50 = 0x20;
          DAT_INTMEM_51 = 6;
          FUN_CODE_044f(0xcc00,0);
          DAT_INTMEM_48 = 0x35;
          DAT_INTMEM_49 = -0x34;
          DAT_INTMEM_4a = 0;
          cVar2 = FUN_CODE_67d0(0xcc37,0);
          uVar4 = cVar2 != '\0';
          cVar2 = FUN_CODE_67d0(CONCAT11(DAT_INTMEM_49 - (((0xfe < DAT_INTMEM_48) << 7) >> 7),
                                         DAT_INTMEM_48 + 1),DAT_INTMEM_4a);
          BANK0_R7 = BANK0_R7 & 0xf;
          if (cVar2 == '\f') {
            DAT_EXTMEM_0120 = uVar4;
          }
        }
        else {
          DAT_EXTMEM_0120 = 0;
        }
      }
      BANK0_R0 = BANK0_R0 & 0xfb;
      DAT_INTMEM_50 = uEXTMEMc848;
      FUN_CODE_2389(CONCAT11(200,uEXTMEMc848));
      bVar3 = BANK0_R0;
      BANK0_R0 = BANK0_R0 | 4;
      DAT_EXTMEM_7fb6 = '\0';
      uVar4 = 0x7f;
      bVar5 = DAT_EXTMEM_7f84;
      if (DAT_EXTMEM_7f84 == 0) {
        uVar4 = 0xd2;
        BANK0_R0 = bVar3 & 0xf | 4;
        bVar5 = DAT_EXTMEM_d25c;
        if (2 < BANK0_R0) goto LAB_CODE_53a2;
      }
      else {
LAB_CODE_53a2:
        BANK1_R2 = 0;
        BANK1_R3 = '\0';
        BANK1_R4 = 0;
        BANK1_R5 = 0;
        FUN_CODE_26be(CONCAT11(uVar4,9),bVar5);
        bEXTMEMcc09 = 0;
        do {
          if ((bEXTMEMcc07 >> 2 & 1) == 1) break;
        } while (BANK0_R0 < 0xf1);
        if (BANK0_R0 < 0xf1) {
          DAT_INTMEM_48 = 0x35;
          DAT_INTMEM_49 = -0x34;
          DAT_INTMEM_4a = 0;
          bVar3 = FUN_CODE_67d0(0xcc36,0);
          if ((bVar3 & 0xf) == 9) {
            cVar2 = FUN_CODE_67d0(CONCAT11(DAT_INTMEM_49 - (((0xfd < DAT_INTMEM_48) << 7) >> 7),
                                           DAT_INTMEM_48 + 2),DAT_INTMEM_4a);
            DAT_EXTMEM_7fe7 = cVar2 != '\0';
          }
          else {
            DAT_EXTMEM_7fe7 = 0;
          }
        }
        else {
          DAT_EXTMEM_7fe7 = 0;
        }
      }
      BANK0_R2 = BANK0_R2 | 0x80;
      uEXTMEMcc0c = 99;
      uEXTMEMca5a = 0;
      DAT_INTMEM_50 = 1;
      DAT_INTMEM_51 = 4;
      uVar4 = 0xca;
      FUN_CODE_044f(0xca00);
      BANK1_R2 = 0;
      BANK1_R3 = '\0';
      BANK1_R4 = 0;
      BANK1_R5 = 1;
      FUN_CODE_26be(CONCAT11(uVar4,8));
      if (DAT_EXTMEM_7f84 == 0) {
        bVar3 = BANK0_R2;
        if ((((bEXTMEMd252 >> 5 & 1) != 1) && ((bEXTMEMd218 & 1) != 0)) &&
           (bVar3 = BANK0_R2 & 0xf, 1 < (BANK0_R2 & 0xf))) {
          bVar3 = BANK0_R2 & 0xb;
        }
        BANK0_R2 = bVar3;
        if ((DAT_EXTMEM_d25c & 0xf) == 0) {
          BANK0_R2 = BANK0_R2 | 0x40;
        }
        else {
          BANK0_R2 = BANK0_R2 & 0xbf;
        }
        bVar3 = DAT_EXTMEM_d25d & 0xf;
        FUN_CODE_22d9();
        if (((bEXTMEMd252 >> 5 & 1) == 1) ||
           ((((DAT_EXTMEM_d25c & 0xf) != 0 || ((bEXTMEMd252 >> 3 & 1) != 1)) &&
            (((DAT_EXTMEM_d25c & 0xf) == 0 || ((bEXTMEMd252 >> 2 & 1) == 0)))))) {
          DAT_EXTMEM_7ffc = false;
        }
        else {
          DAT_EXTMEM_7ffc = true;
          if ((char)DAT_EXTMEM_d25d < '\0') {
            uEXTMEMcaa5 = 2;
          }
        }
        DAT_EXTMEM_7f7f = bVar3;
        if ((DAT_EXTMEM_d25c & 0xf) == 0) {
          DAT_EXTMEM_caa3 = 0;
        }
        else {
          DAT_EXTMEM_caa3 = 7;
          BANK0_R2 = BANK0_R2 | 0x20;
        }
      }
      else {
        DAT_EXTMEM_7f7f = 0x10;
        BANK0_R2 = BANK0_R2 & 8;
        DAT_EXTMEM_7ffc = bEXTMEMc84b == 0;
        uEXTMEMcaa5 = 2;
      }
      BANK0_R2 = BANK0_R2 | 0xd1;
      if (((bool)DAT_EXTMEM_7ffc != false) &&
         (BANK0_R2 = BANK0_R2 & 0xfe | 0x78, DAT_EXTMEM_7f84 == 0)) {
        bEXTMEMd208 = bEXTMEMd208 & 0xf7 | 4;
      }
      bVar3 = BANK0_R2;
      DAT_EXTMEM_7fa2 = '\0';
      DAT_EXTMEM_7f76 = '\0';
      DAT_EXTMEM_7f77 = '\0';
      DAT_EXTMEM_7f78 = '\0';
      DAT_EXTMEM_7f79 = '\0';
      DAT_EXTMEM_7f7a = '\0';
      DAT_EXTMEM_7f7b = 0;
      uEXTMEM7f83 = 0;
      uEXTMEM7f82 = 0;
      uEXTMEM7f81 = 0;
      DAT_EXTMEM_7f80 = 0;
      DAT_EXTMEM_7ffa = '\0';
      DAT_EXTMEM_7f86 = 0;
      DAT_EXTMEM_7f87 = '\0';
      DAT_EXTMEM_7f7e = 0;
      DAT_EXTMEM_7f7c = 0;
      uEXTMEM7f8f = 0;
      DAT_EXTMEM_7f8e = 0;
      uEXTMEM7f91 = 0;
      DAT_EXTMEM_7f90 = 0;
      DAT_EXTMEM_7f92 = 0;
      DAT_EXTMEM_7f93 = 0xe7;
      param_2 = 0xe7;
      DAT_EXTMEM_7f99 = 0;
      DAT_EXTMEM_7f9a = 0;
      DAT_EXTMEM_7f9b = 0;
      DAT_EXTMEM_7f9d = 0;
      DAT_EXTMEM_7f9c = 0;
      DAT_EXTMEM_7f85 = 0;
      DAT_EXTMEM_7f9e = 0;
      DAT_EXTMEM_7f9f = '\0';
      DAT_EXTMEM_7fa0 = '\0';
      DAT_EXTMEM_7fa1 = 0;
      DAT_EXTMEM_7fbc = '\0';
      DAT_EXTMEM_7fe0 = '\0';
      DAT_EXTMEM_7fa3 = '\0';
      DAT_EXTMEM_7fb8 = '\0';
      DAT_EXTMEM_7fec = 0;
      BANK1_R0 = '\0';
      BANK1_R1 = '\0';
      DAT_EXTMEM_7ff2 = 0;
      DAT_EXTMEM_7ff3 = '\0';
      DAT_EXTMEM_7ff4 = '\0';
      DAT_EXTMEM_7ffb = '\0';
      DAT_EXTMEM_7ff9 = 0;
      DAT_EXTMEM_7fff = 0;
      DAT_EXTMEM_7ff1 = 0;
      DAT_EXTMEM_7fdd = 0;
      DAT_EXTMEM_7fb7 = 0;
      DAT_EXTMEM_7eab = 0;
      DAT_EXTMEM_7eac = 0;
      DAT_EXTMEM_7ead = 0;
      DAT_EXTMEM_7ea6 = 0;
      DAT_EXTMEM_7ea7 = '\0';
      FUN_CODE_1f5c();
      DAT_EXTMEM_7fb9 = DAT_EXTMEM_c84a == '\0';
      DAT_EXTMEM_7fba = DAT_EXTMEM_c84a == '\0';
      BANK0_R0 = 0;
      DAT_EXTMEM_7fbb = DAT_EXTMEM_c84a != '\0';
      DAT_EXTMEM_7f75 = bEXTMEMcc8e & 1;
      BANK0_R2 = bVar3;
      if (DAT_EXTMEM_7f75 == 0) {
        DAT_EXTMEM_caa9 = 0;
      }
      else {
        DAT_EXTMEM_caa9 = 0xff;
      }
      goto LAB_CODE_5707;
    }
    if ((bEXTMEM7ffd >> 4 & 1) == 1) {
      if (DAT_EXTMEM_7fe0 == '\0') {
        BANK0_R2 = bVar3;
        FUN_CODE_41f1(0);
        if (DAT_EXTMEM_7f79 != '\0') {
          DAT_EXTMEM_7f77 = '\x01';
        }
      }
      else if (DAT_EXTMEM_7ff3 == '\0') {
        DAT_EXTMEM_7fe0 = '\0';
        DAT_EXTMEM_ca20 = 1;
        DAT_EXTMEM_ca21 = 0;
        uEXTMEMca08 = 1;
        DAT_EXTMEM_7f9d = 0;
      }
      else {
        DAT_EXTMEM_7ff2 = 0;
        DAT_EXTMEM_7ff3 = '\0';
        DAT_EXTMEM_ca20 = 2;
        DAT_EXTMEM_ca21 = 1;
        uEXTMEMca22 = 0;
        DAT_EXTMEM_ca23 = 0;
        uEXTMEMca08 = 1;
        DAT_EXTMEM_7f9d = 0;
      }
      DAT_EXTMEM_ca0e = 1;
      DAT_EXTMEM_7f78 = '\0';
      bEXTMEM7ffd = bEXTMEM7ffd & 0xfe;
    }
    if ((bEXTMEM7ffd >> 3 & 1) == 1) {
      DAT_EXTMEM_7ff4 = '\x01';
      DAT_EXTMEM_7fbd = '\0';
      if ((DAT_EXTMEM_7ff3 == '\0' & DAT_EXTMEM_7ff2) == 0) {
        if (cEXTMEMca81 == '\x02') {
          uEXTMEMca0d = 1;
          DAT_EXTMEM_7f9d = 0;
          DAT_EXTMEM_7fbf = '\0';
          DAT_EXTMEM_7f76 = DAT_EXTMEM_7f78 == '\0';
          DAT_EXTMEM_7fbd = '\x01';
          if (DAT_EXTMEM_7f78 != '\0') {
            DAT_EXTMEM_ca61 = 0xf;
          }
        }
        else {
          if (((DAT_EXTMEM_7fbf != '\0') && (DAT_EXTMEM_7fbf = '\0', (bEXTMEMc84b >> 6 & 1) != 1))
             && ((bEXTMEMca83 >> 2 & 1) != 0)) {
            BANK0_R2 = bVar3;
            FUN_CODE_1f5c(bEXTMEMca83);
          }
          if (DAT_EXTMEM_7f78 == '\0') {
            uEXTMEMca0d = 1;
            DAT_EXTMEM_7f76 = '\x01';
          }
          else if (DAT_EXTMEM_7f9f == '\0') {
            if (DAT_EXTMEM_7f79 == '\0') {
              if (BANK1_R0 != '\0' || BANK1_R1 != '\0') {
                BANK0_R2 = bVar3;
                FUN_CODE_2402(0);
              }
              if ((DAT_EXTMEM_7fec & 1) == 0) {
                DAT_EXTMEM_7fed = 1;
              }
              else {
                DAT_EXTMEM_7fed = 2;
              }
              bEXTMEMca09 = DAT_EXTMEM_7fed;
            }
            else {
              if (BANK1_R0 != '\0' || BANK1_R1 != '\0') {
                BANK0_R2 = bVar3;
                FUN_CODE_2402(DAT_EXTMEM_7f79);
              }
              if ((DAT_EXTMEM_7fee != '\0') && (cEXTMEMca81 != '\x01')) {
                BANK0_R2 = bVar3;
                FUN_CODE_1f9b();
              }
              DAT_EXTMEM_7fee = '\0';
              DAT_EXTMEM_7f79 = '\0';
              DAT_INTMEM_50 = 0x20;
              DAT_INTMEM_51 = 0x32;
              BANK0_R2 = bVar3;
              FUN_CODE_044f(0x7f00);
              if ((cEXTMEMca81 != '\x01') && (DAT_EXTMEM_7f7a != '\0')) {
                DAT_EXTMEM_cad0 = 2;
              }
              DAT_EXTMEM_7f7a = '\0';
              bEXTMEMca09 = 1;
            }
            DAT_EXTMEM_7f9d = 0;
            DAT_EXTMEM_7f78 = '\0';
            DAT_EXTMEM_ca61 = 0xf;
          }
        }
      }
      else {
        DAT_EXTMEM_7ff2 = 0;
        if (cEXTMEMca81 == '\x01') {
          DAT_EXTMEM_7ff3 = '\x01';
        }
        else {
          DAT_EXTMEM_7ff3 = '\0';
        }
      }
    }
    bVar5 = BANK0_R0;
    uVar7 = 0x7ffb;
    if ((DAT_EXTMEM_7ffb == '\0' & bEXTMEM7ffd & DAT_EXTMEM_7f9f == '\0') != 0) {
      cVar2 = '\0';
      if (((((bEXTMEMcb4a >> 4 & 1) == 1) || (DAT_EXTMEM_7ff2 == 0)) || ((DAT_EXTMEM_ca9f & 1) != 0)
          ) && (((DAT_EXTMEM_c850 >> 1 & 1) == 1 || (3 < bEXTMEMcc09)))) {
        if (((bEXTMEM7ffe >> 1 & 1) == 1) && (DAT_EXTMEM_7fa0 == '\0')) {
          cVar2 = '\x01';
          if (DAT_EXTMEM_7f76 == '\0') {
            if (DAT_EXTMEM_7fec == 1) {
              if (DAT_EXTMEM_7f77 == '\0') {
                if ((DAT_EXTMEM_7f79 == '\0') || (BANK0_R0 = bVar5, 2 < DAT_EXTMEM_7f9d)) {
                  cVar2 = '\0';
                  DAT_EXTMEM_7f78 = '\0';
                  DAT_EXTMEM_7f79 = '\0';
                  DAT_EXTMEM_7ffb = '\0';
                  DAT_EXTMEM_7f76 = '\0';
                  DAT_EXTMEM_7f9d = 0;
                  BANK0_R0 = bVar5;
                }
              }
              else {
                BANK0_R0 = bVar5;
                if (DAT_EXTMEM_7f79 == '\0') {
                  uEXTMEMca08 = 1;
                  DAT_EXTMEM_7f9d = 0;
                }
              }
            }
            else if ((DAT_EXTMEM_7f9d < 3) << 7 < '\0') {
              DAT_EXTMEM_7f78 = '\x01';
              DAT_EXTMEM_ca0c = 1;
              BANK0_R0 = bVar5;
            }
            else {
              cVar2 = '\0';
              DAT_EXTMEM_7f78 = '\0';
              DAT_EXTMEM_7f79 = '\0';
              DAT_EXTMEM_7ffb = '\0';
              DAT_EXTMEM_7f7a = '\0';
              DAT_EXTMEM_7f76 = '\0';
              DAT_EXTMEM_7f9d = 0;
              DAT_EXTMEM_7ff2 = 0;
              uEXTMEMcad1 = 1;
              BANK0_R0 = bVar5;
            }
          }
          else if (cEXTMEMca81 == '\x02') {
            DAT_EXTMEM_7f78 = '\x01';
            cVar2 = '\0';
            BANK0_R0 = bVar5;
          }
          else {
            if (DAT_EXTMEM_7f79 == '\0') {
              if (BANK1_R0 != '\0' || BANK1_R1 != '\0') {
                BANK0_R2 = bVar3;
                FUN_CODE_2402(0);
              }
              if ((DAT_EXTMEM_7fec & 1) == 0) {
                DAT_EXTMEM_7fed = 1;
              }
              else {
                DAT_EXTMEM_7fed = 2;
              }
              bEXTMEMca09 = DAT_EXTMEM_7fed;
            }
            else {
              if (BANK1_R0 != '\0' || BANK1_R1 != '\0') {
                BANK0_R2 = bVar3;
                FUN_CODE_2402(DAT_EXTMEM_7f79);
              }
              if ((DAT_EXTMEM_7fee != '\0') && (cEXTMEMca81 != '\x01')) {
                BANK0_R0 = bVar5;
                BANK0_R2 = bVar3;
                FUN_CODE_1f9b();
              }
              DAT_EXTMEM_7fee = '\0';
              DAT_EXTMEM_7f79 = '\0';
              DAT_INTMEM_50 = 0x20;
              DAT_INTMEM_51 = 0x32;
              BANK0_R0 = bVar5;
              BANK0_R2 = bVar3;
              FUN_CODE_044f(0x7f00);
              if ((cEXTMEMca81 != '\x01') && (DAT_EXTMEM_7f7a != '\0')) {
                DAT_EXTMEM_cad0 = 2;
              }
              DAT_EXTMEM_7f7a = '\0';
              bEXTMEMca09 = 1;
            }
            DAT_EXTMEM_7f9d = 0;
            DAT_EXTMEM_ca61 = 0xf;
            DAT_EXTMEM_ca0c = 1;
            BANK0_R0 = bVar5;
          }
        }
        else if ((((bEXTMEMcb4a >> 3 & 1) == 1) ||
                 (((DAT_EXTMEM_7f9d == 0 || (2 < DAT_EXTMEM_7f9d)) || (DAT_EXTMEM_7ff4 != '\0'))))
                || ((DAT_EXTMEM_ca9f & 1) == 1)) {
          DAT_EXTMEM_7f9d = 0;
          BANK0_R0 = bVar5;
        }
        else {
          DAT_INTMEM_50 = 0x20;
          DAT_INTMEM_51 = 0x1d;
          BANK0_R2 = bVar3;
          FUN_CODE_044f(0xca00,DAT_EXTMEM_ca9f);
          DAT_EXTMEM_ca0c = 1;
          DAT_EXTMEM_ca61 = 0xf;
          cVar2 = '\x01';
        }
      }
      else {
        cVar2 = '\x01';
        DAT_EXTMEM_ca0c = 1;
        DAT_EXTMEM_ca61 = 0xf;
        BANK0_R0 = bVar5;
      }
      DAT_EXTMEM_7f77 = '\0';
      if (DAT_EXTMEM_7fb6 == '\0' && cVar2 == '\0') {
        DAT_EXTMEM_7fa0 = '\0';
        BANK0_R2 = bVar3;
        FUN_CODE_42b8(DAT_EXTMEM_7fb6 == '\0');
      }
      uVar7 = 0x7f76;
      DAT_EXTMEM_7f76 = '\0';
    }
    DAT_INTMEM_48 = 0x35;
    DAT_INTMEM_49 = -0x34;
    DAT_INTMEM_4a = 0;
    BANK0_R2 = bVar3;
    if ((DAT_INTMEM_47 >> 2 & 1) == 1) {
      DAT_INTMEM_50 = 0x20;
      DAT_INTMEM_51 = 6;
      FUN_CODE_044f(uVar7 & 0xff00);
      BANK0_R2 = bVar3;
      bVar3 = FUN_CODE_67d0(CONCAT11(DAT_INTMEM_49,DAT_INTMEM_48),DAT_INTMEM_4a);
      DAT_INTMEM_4b = bVar3 & 7;
      DAT_INTMEM_4c = bVar3 & 0x18;
      cVar2 = FUN_CODE_67d0(CONCAT11(DAT_INTMEM_49 - (((0xfe < DAT_INTMEM_48) << 7) >> 7),
                                     DAT_INTMEM_48 + 1),DAT_INTMEM_4a);
      uVar7 = CONCAT11(DAT_INTMEM_49 - (((0xfd < DAT_INTMEM_48) << 7) >> 7),DAT_INTMEM_48 + 2);
      uVar4 = FUN_CODE_67d0(uVar7,DAT_INTMEM_4a);
      if (BANK0_R7 < 0x10) {
                    /* WARNING: Could not recover jumptable at 0x5f8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ushort)(byte)(cVar2 * '\x03') + 0x5f90))(uVar4);
        return;
      }
    }
  } while( true );
  while( true ) {
    FUN_CODE_07f4(bVar3);
    if ((char)uVar7 == '\x01') goto LAB_CODE_488a;
    if ((char)uVar7 == '\x02') break;
LAB_CODE_4fe8:
    DAT_EXTMEM_7fed = DAT_EXTMEM_d80d & 7;
    uVar7 = 0x7fed;
    BANK0_R3 = BANK0_R3 & 7;
    bVar3 = DAT_EXTMEM_7fed;
    if ((DAT_EXTMEM_7fed == 7) && (uVar7 = 0xd4cc, bVar3 = bEXTMEMd4cc, (bEXTMEMd4cc & 1) == 1))
    goto LAB_CODE_5025;
  }
  BANK0_R3 = BANK0_R3 | 4;
  goto LAB_CODE_4e4a;
LAB_CODE_5025:
  while (bEXTMEMcc9b == 1) {
    DAT_INTMEM_50 = 0x20;
    DAT_INTMEM_51 = 0x42;
    FUN_CODE_044f(0xcc00);
  }
  FUN_CODE_1465();
  DAT_EXTMEM_cc0b = 0;
  DAT_EXTMEM_7fe5 = 0;
  do {
    BANK0_R3 = BANK0_R3 & 0xf0;
    uVar7 = 0xd868;
    BANK0_R4 = BANK0_R4 & 0xf0;
    if (bEXTMEMd819 == BANK0_R4) {
      FUN_CODE_15c1();
      FUN_CODE_1403();
      BANK0_R3 = BANK0_R3 & 0xf0;
      DAT_EXTMEM_7fed = ~DAT_EXTMEM_d804 >> 4;
      DAT_EXTMEM_cc0b = 0;
      DAT_EXTMEM_7fe5 = 0;
      goto LAB_CODE_50b3;
    }
    FUN_CODE_07f4(DAT_EXTMEM_d868);
    if ((char)uVar7 == '\x01') goto LAB_CODE_488a;
  } while ((char)uVar7 != '\x02');
  FUN_CODE_15c1();
  BANK0_R3 = BANK0_R3 | 8;
  goto LAB_CODE_4e4a;
LAB_CODE_50b3:
  BANK0_R3 = BANK0_R3 & DAT_EXTMEM_7fed;
  uVar7 = 0x7fed;
  if (bEXTMEMd84e != BANK0_R4) {
    FUN_CODE_07f4(DAT_EXTMEM_7fed);
    if ((char)uVar7 == '\x01') goto LAB_CODE_488a;
    if ((char)uVar7 == '\x02') goto code_c0x50d7;
    goto LAB_CODE_50b3;
  }
  if (((bCODE00a6 >> 1 & 1) != 1) && (DAT_EXTMEM_7eaa == '\0')) {
    do {
    } while( true );
  }
  if ((bCODE00a9 >> 4 & 1) != 0) {
    FUN_CODE_04d0(bCODE00a9);
  }
  while (bEXTMEMcc9b == 2) {
    DAT_INTMEM_50 = 0x20;
    DAT_INTMEM_51 = 0x43;
    FUN_CODE_044f(0xcc00);
  }
  DAT_INTMEM_50 = 2;
  DAT_INTMEM_51 = 0x26;
  FUN_CODE_044f(0xcc00);
  DAT_EXTMEM_cc0b = 0;
  DAT_EXTMEM_7fe5 = 0;
  do {
    DAT_EXTMEM_7fed = DAT_EXTMEM_d80d & 7;
    uVar7 = 0x7fed;
    BANK0_R3 = BANK0_R3 & 7;
    bVar3 = DAT_EXTMEM_7fed;
    if ((DAT_EXTMEM_7fed == 7) && (uVar7 = 0xd4cc, bVar3 = bEXTMEMd4cc, (bEXTMEMd4cc & 1) != 0)) {
      uEXTMEMc80f = 0;
      uVar7 = 0xcc00;
      uEXTMEMcc00 = 0;
      FUN_CODE_226e();
      DAT_INTMEM_50 = 2;
      DAT_INTMEM_51 = 0x27;
      FUN_CODE_044f(uVar7 & 0xff00);
      DAT_EXTMEM_cc0b = 0;
      DAT_EXTMEM_7fe5 = 0;
      goto LAB_CODE_51aa;
    }
    FUN_CODE_07f4(bVar3);
    if ((char)uVar7 == '\x01') goto LAB_CODE_488a;
  } while ((char)uVar7 != '\x02');
  BANK0_R3 = BANK0_R3 | 0x20;
  goto LAB_CODE_4e4a;
code_c0x50d7:
  BANK0_R3 = BANK0_R3 | 0x10;
  goto LAB_CODE_4e4a;
LAB_CODE_51aa:
  DAT_EXTMEM_7fed = bEXTMEMc803 & 0x80;
  uVar7 = 0x7fed;
  if (DAT_EXTMEM_7fed == 0) {
    FUN_CODE_07f4(0);
    if ((char)uVar7 == '\x01') goto LAB_CODE_488a;
    if ((char)uVar7 == '\x02') goto code_c0x51cb;
    goto LAB_CODE_51aa;
  }
  DAT_EXTMEM_cc0b = 0;
  do {
  } while ((BANK0_R4 != 0) << 7 < '\0');
  DAT_EXTMEM_7fed = cEXTMEMd085;
  DAT_INTMEM_50 = 1;
  DAT_INTMEM_51 = 3;
  FUN_CODE_044f(0x7f00,bEXTMEMc849 >> 4);
  DAT_EXTMEM_7fed = bEXTMEMc849;
  while( true ) {
    while (uVar7 = 0xcc9b, bEXTMEMcc9b == 3) {
      DAT_INTMEM_50 = 0x20;
      DAT_INTMEM_51 = 0x44;
      FUN_CODE_044f(0xcc00);
    }
    FUN_CODE_2369();
    if ((char)uVar7 != '\0') goto LAB_CODE_488a;
    bVar1 = (DAT_EXTMEM_7fed & 1) == 0;
    bVar3 = BANK0_R3 & 0xf;
    if (((bVar1 & bEXTMEMc803) != 0) ||
       (bVar1 = (DAT_EXTMEM_7fed & 2) == 0, (bVar1 & bEXTMEMc840) != 0)) break;
    BANK0_R3 = BANK0_R3 & 3;
    bVar1 = (DAT_EXTMEM_7fed & 4) == 0;
    bVar3 = BANK0_R3;
    if (((bVar1 & bEXTMEMc841) != 0) ||
       (bVar1 = (DAT_EXTMEM_7fed & 8) == 0, bVar1 && cEXTMEMd085 != '?')) break;
  }
  BANK0_R3 = bVar3;
  FUN_CODE_270e(bVar1);
  BANK0_R3 = BANK0_R3 | 0x80;
  goto LAB_CODE_4e4a;
code_c0x51cb:
  BANK0_R3 = BANK0_R3 | 0x40;
  goto LAB_CODE_4e4a;
}



/* =========================================================
 * CODE:6134  FUN_CODE_6134  size=45
 * ========================================================= */

/* WARNING: Removing unreachable block (CODE,0x576b) */
/* WARNING: Removing unreachable block (CODE,0x50a2) */
/* WARNING: Removing unreachable block (CODE,0x6438) */

void FUN_CODE_6134(byte param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  undefined1 uVar4;
  byte bVar5;
  byte bVar6;
  ushort uVar7;
  
  bVar3 = (DAT_EXTMEM_c606 >> 4 & 1) != 0;
  bVar5 = FUN_CODE_67d0(CONCAT11(param_3,param_2),param_4);
  bVar6 = BANK0_R2;
  DAT_EXTMEM_7f88 = bVar5 & 0xfe | bVar3;
  uVar7 = 0x7f4a;
  FUN_CODE_421d(0x7f4a);
  BANK0_R2 = bVar6;
  do {
    bVar3 = BANK0_R2;
    if ((DAT_INTMEM_47 & 0x28) != 0) {
      DAT_INTMEM_50 = 1;
      DAT_INTMEM_51 = 0x10;
      uVar7 = uVar7 & 0xff00;
      FUN_CODE_044f(uVar7);
      DAT_INTMEM_50 = 1;
      DAT_INTMEM_51 = 0x68;
      FUN_CODE_044f(uVar7 & 0xff00);
      DAT_INTMEM_50 = 1;
      DAT_INTMEM_51 = 1;
      FUN_CODE_044f(1);
      DAT_INTMEM_50 = 1;
      DAT_INTMEM_51 = DAT_INTMEM_47;
      FUN_CODE_044f(1);
      FUN_CODE_270e();
      if ((DAT_EXTMEM_7fa7 != '\x02') && (DAT_EXTMEM_7fa7 != '\x05')) {
        BANK0_R2 = bVar3;
        FUN_CODE_421d(0x7f4b);
      }
      do {
      } while( true );
    }
LAB_CODE_5707:
    bVar3 = BANK0_R2;
    uVar7 = 0xcc9b;
    if (bEXTMEMcc9b == 1) {
      bVar6 = 1;
LAB_CODE_5719:
      DAT_INTMEM_50 = 0x20;
      DAT_INTMEM_51 = 0x45;
      FUN_CODE_044f(uVar7 & 0xff00,bVar6);
      BANK0_R2 = bVar3;
      goto LAB_CODE_5707;
    }
    uVar7 = 0xc808;
    bVar6 = DAT_EXTMEM_c808;
    if ((DAT_EXTMEM_c808 & 1) != 0) goto LAB_CODE_5719;
    DAT_INTMEM_47 = DAT_EXTMEM_7f93 & bEXTMEMcc07 & param_1;
    bEXTMEM7ffd = DAT_EXTMEM_ca40;
    bEXTMEM7ffe = DAT_EXTMEM_ca41;
    BANK0_R1 = BANK0_R1 & 0xf0;
    DAT_EXTMEM_7fed = ~DAT_EXTMEM_d804 >> 4;
    param_1 = DAT_EXTMEM_7f93;
    if ((DAT_EXTMEM_7fb4 != '\0') &&
       (BANK0_R0 = BANK0_R0 & DAT_EXTMEM_7fed, bEXTMEMd84e == BANK0_R1)) {
      if (((bCODE00a6 >> 1 & 1) == 0) && (DAT_EXTMEM_7eaa == '\0')) {
        DAT_EXTMEM_7eb8 = DAT_EXTMEM_7eb8 + '\x01';
        if (((2 < BANK0_R0) << 7 < '\0') && (BANK0_R0 < 6)) {
                    /* WARNING: Could not recover jumptable at 0x57d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ushort)(byte)(DAT_EXTMEM_7eb9 * '\x03') + 0x57d7))(DAT_EXTMEM_7fed);
          return;
        }
      }
      else {
        DAT_EXTMEM_7fb4 = '\0';
        DAT_EXTMEM_7fed = DAT_EXTMEM_d804 & 0xf;
        uEXTMEMcc00 = 0;
        DAT_EXTMEM_7fab = 1;
        DAT_EXTMEM_7fa9 = 1;
        DAT_EXTMEM_7faa = 0;
        BANK1_R2 = DAT_EXTMEM_7f7e;
        BANK1_R3 = DAT_EXTMEM_7f7d;
        BANK1_R4 = DAT_EXTMEM_7f7c;
        BANK1_R5 = 0;
        bEXTMEMd80b = DAT_EXTMEM_7fed;
        FUN_CODE_26be(0x7f01);
        if ((bCODE00a9 >> 4 & 1) != 0) {
          BANK0_R2 = bVar3;
          FUN_CODE_04d0(bCODE00a9);
        }
      }
    }
    if (DAT_EXTMEM_7fb5 != '\0') {
      BANK0_R0 = BANK0_R0 & 0xf0;
      param_1 = ~DAT_EXTMEM_d804 & 0xf0 & bEXTMEMd819;
      DAT_INTMEM_4e = ~DAT_EXTMEM_d804 & 0xf0;
      DAT_INTMEM_4f = 0;
      DAT_EXTMEM_7fed = param_1;
      if (param_1 == DAT_INTMEM_4e) {
        BANK0_R2 = bVar3;
        FUN_CODE_15c1(0xff);
      }
    }
    uVar7 = 0x7fbe;
    if (DAT_EXTMEM_7fbe != '\0') {
      if ((bCODE00ac != 0) && (DAT_EXTMEM_7ea7 == '\0')) {
        DAT_EXTMEM_7ea7 = '\x01';
      }
      if (DAT_EXTMEM_7ea7 != '\0') {
        DAT_EXTMEM_7ea6 = DAT_EXTMEM_7ea6 + 1;
      }
      if ((DAT_EXTMEM_7f9d == 0) && (DAT_EXTMEM_7f78 == '\0')) {
        uVar4 = 0x7f;
        bVar6 = 0;
        if (DAT_EXTMEM_7fbd != '\0') goto LAB_CODE_5a6d;
      }
      else {
LAB_CODE_5a6d:
        uVar4 = 0;
        bVar6 = bCODE00ab;
        if ((bCODE00ab >> 6 & 1) != 1) {
          uVar7 = 0;
          uVar4 = 0;
          bVar6 = DAT_EXTMEM_7ea6;
          if (BANK0_R0 <= bCODE00ac) goto LAB_CODE_5aa1;
        }
      }
      BANK0_R2 = bVar3;
      FUN_CODE_421d(CONCAT11(uVar4,0x46),bVar6);
      DAT_EXTMEM_7fbe = '\0';
      bEXTMEMcc09 = 0;
      DAT_EXTMEM_7ea7 = '\0';
      uVar7 = 0x7ea6;
      DAT_EXTMEM_7ea6 = 0;
    }
LAB_CODE_5aa1:
    if ((DAT_INTMEM_47 == 0) && (uVar7 = 0x7ffd, bEXTMEM7ffd == 0)) {
      if ((DAT_EXTMEM_7fa3 != '\0') && ((DAT_EXTMEM_7fa2 == '\x03' || (DAT_EXTMEM_7fa2 == '\x04'))))
      {
        DAT_INTMEM_50 = 4;
        DAT_INTMEM_51 = 0x1b;
        BANK0_R2 = bVar3;
        FUN_CODE_044f(0x7f00,0);
        if (DAT_EXTMEM_7f87 != '\0') {
          DAT_EXTMEM_7fe1 = '\x01';
          DAT_EXTMEM_7fe2 = '\x01';
          DAT_EXTMEM_7fe3 = '\x01';
          DAT_EXTMEM_7fe4 = '\x01';
          DAT_EXTMEM_7ffa = '\x01';
          for (bVar6 = 0; bVar6 < BANK0_R4; bVar6 = bVar6 + 1) {
            BANK0_R6 = BANK0_R6 & 4;
            *(bool *)CONCAT11('\x7f' - (((0x1e < bVar6) << 7) >> 7),bVar6 - 0x1f) =
                 *(char *)CONCAT11('\x7f' - (((0x7f < bVar6) << 7) >> 7),bVar6 + 0x80) != '\0';
          }
          if ((DAT_EXTMEM_7fe1 == '\0') || (DAT_EXTMEM_7fe2 == '\0')) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if ((bVar1) && (DAT_EXTMEM_7fe3 != '\0')) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          if ((bVar1) && (DAT_EXTMEM_7fe4 != '\0')) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          if (DAT_EXTMEM_7f7d == '\x10') {
            bVar6 = 2;
          }
          else {
            bVar6 = DAT_EXTMEM_7f7d == '\b';
          }
          bVar5 = DAT_EXTMEM_7f80 & 3;
          bVar6 = *(byte *)CONCAT11('\x7f' - (((0x69 < bVar6) << 7) >> 7),bVar6 + 0x96) & 3;
          if (((bVar5 < BANK0_R3) && (bVar1)) || (bVar6 == BANK0_R4)) {
            DAT_EXTMEM_7f9a = bVar5 << 4 | bVar5;
          }
          else {
            DAT_EXTMEM_7ffa = '\0';
            DAT_EXTMEM_7f9a = bVar6 << 4 | bVar6;
          }
          DAT_EXTMEM_7fe1 = '\x01';
          DAT_EXTMEM_7fe2 = 1;
          DAT_EXTMEM_7fe3 = '\x01';
          DAT_EXTMEM_7fe4 = '\x01';
          for (bVar6 = 0; bVar5 = DAT_EXTMEM_7f9a, bVar6 < BANK0_R4; bVar6 = bVar6 + 1) {
            BANK0_R6 = BANK0_R6 & 0x20;
            *(bool *)CONCAT11('\x7f' - (((0x1e < bVar6) << 7) >> 7),bVar6 - 0x1f) =
                 *(char *)CONCAT11('\x7f' - (((0x7f < bVar6) << 7) >> 7),bVar6 + 0x80) != '\0';
          }
          if ((DAT_EXTMEM_7fe1 == '\0') || (DAT_EXTMEM_7fe2 == 0)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if ((bVar1) && (DAT_EXTMEM_7fe3 != '\0')) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          if ((bVar1) && (DAT_EXTMEM_7fe4 != '\0')) {
            DAT_EXTMEM_7fe3 = '\x01';
          }
          else {
            DAT_EXTMEM_7fe3 = '\0';
          }
          DAT_EXTMEM_7fed = (DAT_EXTMEM_7f80 & 0x18) >> 1;
          DAT_EXTMEM_7fe4 =
               *(byte *)CONCAT11('\x7f' - (((0x69 < DAT_EXTMEM_7fe2) << 7) >> 7),
                                 DAT_EXTMEM_7fe2 + 0x96) & 0xc;
          if (((DAT_EXTMEM_7fed < BANK0_R3) && (DAT_EXTMEM_7fe3 == '\x01')) ||
             (DAT_EXTMEM_7fe4 == BANK0_R4)) {
            DAT_EXTMEM_7f9a = DAT_EXTMEM_7fed << 4 | DAT_EXTMEM_7fed;
          }
          else {
            DAT_EXTMEM_7ffa = '\0';
            DAT_EXTMEM_7f9a = DAT_EXTMEM_7fe4 << 4 | DAT_EXTMEM_7fe4;
          }
          BANK0_R3 = BANK0_R3 | bVar5;
          if (DAT_EXTMEM_7ffa == '\0') {
            DAT_EXTMEM_7f85 = 1;
          }
        }
        if (DAT_EXTMEM_7fa2 == '\x04') {
          DAT_EXTMEM_7fe2 = DAT_EXTMEM_7f80;
          BANK0_R3 = BANK0_R3 & 4;
          BANK0_R4 = BANK0_R4 & 0x20;
          BANK0_R5 = BANK0_R5 & 3;
          bVar6 = ((DAT_EXTMEM_7f80 & 0x18) >> 4) << 1 | (DAT_EXTMEM_7f80 & 8) >> 3;
          DAT_EXTMEM_7fb8 = '\0';
          if ((DAT_EXTMEM_7fba == '\0') || (DAT_EXTMEM_7f80 != 0)) {
            bVar5 = DAT_EXTMEM_7f80;
            if (DAT_EXTMEM_7f87 == '\0') {
              DAT_EXTMEM_7fed = DAT_EXTMEM_7f80 & 3;
              BANK0_R3 = BANK0_R3 | DAT_EXTMEM_7f9a & 0xcc;
              DAT_EXTMEM_7f9a = DAT_EXTMEM_7fed << 4 | DAT_EXTMEM_7fed;
            }
          }
          else {
            DAT_EXTMEM_7fb8 = '\x01';
            bVar5 = 1;
          }
          if (((DAT_EXTMEM_7fb9 == '\0') || (DAT_EXTMEM_7f80 != 0)) ||
             ((DAT_EXTMEM_7fbb == '\0' && ((DAT_EXTMEM_7fbc == '\0' && (DAT_EXTMEM_7fb8 != '\0')))))
             ) {
            if (DAT_EXTMEM_7f87 == '\0') {
              DAT_EXTMEM_7fed = (DAT_EXTMEM_7f80 & 0x18) >> 1;
              BANK0_R3 = BANK0_R3 | DAT_EXTMEM_7f9a & 0x33;
              DAT_EXTMEM_7f9a = DAT_EXTMEM_7fed << 4 | DAT_EXTMEM_7fed;
            }
          }
          else {
            bVar6 = bVar6 + 1;
            DAT_EXTMEM_7fb8 = '\x01';
          }
          bVar5 = bVar6 << 2 | bVar5;
          DAT_EXTMEM_7f9b = bVar5 | bVar5 << 4;
        }
        DAT_EXTMEM_7fa3 = '\0';
        DAT_EXTMEM_7f87 = '\0';
      }
      uEXTMEMcc2d = 0xfe;
      BANK0_R2 = bVar3;
      goto LAB_CODE_5707;
    }
    if ((DAT_INTMEM_47 & 1) != 0) {
      BANK0_R2 = bVar3;
      FUN_CODE_270e();
LAB_CODE_488a:
      while( true ) {
        while( true ) {
          DAT_INTMEM_50 = 1;
          DAT_INTMEM_51 = 1;
          FUN_CODE_044f(uVar7 & 0xff00);
          if ((bCODE00a7 & 1) != 0) {
            FUN_CODE_05db(0,bCODE00a7);
          }
          cEXTMEMcc99 = cEXTMEMcc99 + '\x01';
          BANK0_R3 = BANK0_R3 & 0xfe;
          DAT_EXTMEM_d815 = 0;
          while ((((bEXTMEMc84b & 1) != 0 && (uVar7 = 0xcc9b, bVar3 = bEXTMEMcc9b, bEXTMEMcc9b < 10)
                  ) || (uVar7 = 0xc808, bVar3 = DAT_EXTMEM_c808, (DAT_EXTMEM_c808 & 1) != 0))) {
            DAT_INTMEM_50 = 0x20;
            DAT_INTMEM_51 = 0x40;
            FUN_CODE_044f(uVar7 & 0xff00,bVar3);
          }
          if ((bEXTMEMd86a >> 4 & 1) != 0) {
            uEXTMEMca10 = 3;
            uEXTMEMca15 = 0x20;
            uEXTMEMca14 = 7;
          }
          if ((bCODE00a6 >> 6 & 1) != 0) {
            uEXTMEMca18 = uCODE00aa;
            uEXTMEMca19 = 0xff;
          }
          uEXTMEMcc0c = 199;
          DAT_EXTMEM_cc0b = 0;
          DAT_EXTMEM_c804 = 0;
          DAT_EXTMEM_c84a = '\x02';
          if ((bEXTMEMd86a >> 3 & 1) == 0) {
            uEXTMEMc8a0 = 0xe;
          }
          else {
            uEXTMEMd8a0 = 0xd;
          }
          uEXTMEMd835 = 2;
          BANK0_R3 = BANK0_R3 & 0xfc;
          DAT_INTMEM_50 = 0x20;
          DAT_INTMEM_51 = 1;
          FUN_CODE_044f(0xc800);
          DAT_EXTMEM_7f84 = DAT_EXTMEM_c801 & 0x80;
          if (DAT_EXTMEM_7f84 == 0) {
            uEXTMEMd254 = 0xff;
            uEXTMEMd255 = 0xff;
            BANK0_R3 = BANK0_R3 & 0xdf;
            uEXTMEMd238 = 4;
          }
          DAT_EXTMEM_7fa4 = bEXTMEMcc8e & 4;
          DAT_EXTMEM_7f94 = uEXTMEMcc8c;
          uEXTMEM7f95 = uEXTMEMcc8d;
          DAT_EXTMEM_7f96 = uEXTMEMc828;
          uEXTMEM7f97 = uEXTMEMc829;
          uEXTMEM7f98 = uEXTMEMc82a;
          if (cEXTMEMcc92 == '\0') {
            DAT_EXTMEM_7fa6 = '\x02';
          }
          else {
            BANK0_R3 = BANK0_R3 & 0x7f;
            DAT_EXTMEM_7fa6 = cEXTMEMcc92;
          }
          DAT_EXTMEM_7fa5 = uEXTMEMcc91;
          uEXTMEMcc93 = 6;
          if ((DAT_EXTMEM_7f84 != 0) && ((bEXTMEMc84b >> 3 & 1) != 1)) {
            BANK0_R3 = BANK0_R3 & 0xfb;
          }
          BANK0_R3 = BANK0_R3 & 0xb;
          if ((bCODE00a9 >> 6 & 1) == 0) {
            bEXTMEMd609 = bCODE00a9;
            if ((char)bCODE00a9 < '\0') {
              BANK0_R3 = 0x23;
            }
            else {
              BANK0_R3 = 3;
            }
          }
          else {
            bEXTMEMd609 = 2;
          }
          if ((bCODE00a9 >> 6 & 1) == 0) {
            bEXTMEMd689 = bCODE00a9;
            if ((char)bCODE00a9 < '\0') {
              BANK0_R3 = 0x23;
            }
            else {
              BANK0_R3 = 3;
            }
          }
          else {
            bEXTMEMd689 = 2;
          }
          if ((bCODE00a9 >> 6 & 1) == 0) {
            bEXTMEMd709 = bCODE00a9;
            if ((char)bCODE00a9 < '\0') {
              BANK0_R3 = 0x23;
            }
            else {
              BANK0_R3 = 3;
            }
          }
          else {
            bEXTMEMd709 = 2;
          }
          if ((bCODE00a9 >> 6 & 1) == 0) {
            bEXTMEMd789 = bCODE00a9;
            if ((char)bCODE00a9 < '\0') {
              BANK0_R3 = 0x23;
            }
            else {
              BANK0_R3 = 3;
            }
          }
          else {
            bEXTMEMd789 = 2;
          }
          if ((char)bCODE00a9 < '\0') {
            uEXTMEMd606 = 2;
            uEXTMEMd686 = 2;
            uEXTMEMd706 = 2;
            uEXTMEMd786 = 2;
          }
          BANK0_R3 = BANK0_R3 & 0xfd | 1;
          bEXTMEMd830 = 1;
          DAT_INTMEM_50 = 0x10;
          DAT_INTMEM_51 = 0x70;
          FUN_CODE_044f(0xd800);
          DAT_EXTMEM_cc0b = 0;
          do {
          } while ((bEXTMEMd830 >> 1 & 1) != 1);
          BANK0_R3 = BANK0_R3 & 0x1c;
          if (DAT_EXTMEM_c850 != 1) break;
          BANK0_R3 = 0;
          uVar7 = 0xd830;
          FUN_CODE_270e();
        }
        uVar7 = 0xd86d;
        FUN_CODE_1603();
        if ((char)uVar7 == '\0') break;
        FUN_CODE_270e();
      }
      BANK0_R3 = BANK0_R3 & 0xfe;
      DAT_EXTMEM_7f7d = '\x10';
      FUN_CODE_0cfa(0x7f01);
      uEXTMEMd802 = 2;
      uEXTMEMce06 = 0x10;
      uEXTMEMd801 = 0x81;
      uEXTMEMd803 = 0xf0;
      bEXTMEMd830 = 0;
      DAT_EXTMEM_7f7e = 4;
      FUN_CODE_2820(0x7f00);
      uVar7 = 0x7fe6;
      if (DAT_EXTMEM_7fe6 == '\0') {
        FUN_CODE_1ac6(0);
        uVar7 = uVar7 & 0xff00;
        FUN_CODE_1b66();
        if ((char)uVar7 == '\0') {
          uEXTMEMd84f = 0;
          uVar7 = 0xd802;
          FUN_CODE_1b66();
          if ((char)uVar7 == '\0') {
            FUN_CODE_1f1a();
            goto LAB_CODE_4c29;
          }
          FUN_CODE_270e();
        }
        else {
          FUN_CODE_270e();
        }
        goto LAB_CODE_488a;
      }
LAB_CODE_4c29:
      DAT_EXTMEM_7fe6 = '\x01';
      uEXTMEMd850 = 0xf;
      uEXTMEMd852 = 0x1f;
      uEXTMEMd853 = 0xff;
      DAT_EXTMEM_7fe1 = cEXTMEMd607;
      DAT_EXTMEM_7fe2 = bEXTMEMd687;
      DAT_EXTMEM_7fe3 = cEXTMEMd707;
      DAT_EXTMEM_7fe4 = bEXTMEMd787;
      uEXTMEMd801 = 0;
      uEXTMEMd810 = 0xff;
      bEXTMEMd80b = 0;
      uEXTMEMd80a = 0;
      DAT_EXTMEM_d804 = 0;
      uEXTMEMd85d = 0xac;
      uEXTMEMd85e = 0xd;
      DAT_INTMEM_50 = 1;
      DAT_INTMEM_51 = 0x1e;
      FUN_CODE_044f(0xd800);
      DAT_EXTMEM_cc0b = 0;
      cEXTMEMcc90 = '\0';
      while ((bEXTMEMcc07 & 1) == 1) {
        if (((bCODE00a7 >> 4 & 1) != 0) && (DAT_EXTMEM_7f84 == 0)) {
          DAT_INTMEM_50 = 0x20;
          DAT_INTMEM_51 = 0x53;
          FUN_CODE_044f(0x7f00,0);
          uEXTMEMd254 = 0xff;
          uEXTMEMd255 = 0xff;
          BANK0_R3 = BANK0_R3 & 0xdf;
          uEXTMEMd238 = 4;
        }
        if (BANK0_R4 <= DAT_EXTMEM_cc0b) {
          cEXTMEMcc90 = cEXTMEMcc90 + '\x01';
          DAT_EXTMEM_cc0b = 0;
          if (cEXTMEMcc90 == '\n') {
            BANK0_R3 = BANK0_R3 & 0xfb;
          }
          if ((cEXTMEMcc90 == 'd') && ((bCODE00a7 & 1) == 1)) {
            FUN_CODE_05db(0xff,bCODE00a7,uEXTMEMc848);
          }
        }
      }
      DAT_INTMEM_50 = 1;
      DAT_INTMEM_51 = 0x2c;
      FUN_CODE_044f(0xcc00,bEXTMEMcc07);
      if ((bCODE00a7 & 1) != 0) {
        FUN_CODE_05db(0,bCODE00a7);
      }
      if ((char)bCODE00a7 < '\0') {
        FUN_CODE_056c(bCODE00a7);
      }
      while ((((bEXTMEMc84b & 1) != 0 && (uVar7 = 0xcc9b, bVar3 = bEXTMEMcc9b, bEXTMEMcc9b < 0xb))
             || (uVar7 = 0xc808, bVar3 = DAT_EXTMEM_c808, (DAT_EXTMEM_c808 & 1) != 0))) {
        DAT_INTMEM_50 = 0x20;
        DAT_INTMEM_51 = 0x41;
        FUN_CODE_044f(uVar7 & 0xff00,bVar3);
      }
      DAT_EXTMEM_7f7d = '\0';
      DAT_EXTMEM_7ffc = 0;
      DAT_EXTMEM_7fbe = '\0';
      DAT_EXTMEM_7fbf = '\0';
      DAT_EXTMEM_7fbd = '\0';
      DAT_EXTMEM_7fb5 = '\0';
      DAT_EXTMEM_7fb4 = '\0';
      DAT_EXTMEM_7eb9 = '\0';
      DAT_EXTMEM_7fab = 0;
      DAT_EXTMEM_7fa9 = 0;
      DAT_EXTMEM_7faa = 0;
      DAT_EXTMEM_7fb3 = 0;
      BANK0_R3 = BANK0_R3 | 2;
      if ((DAT_EXTMEM_c800 & 1) == 1) {
        DAT_EXTMEM_cc0b = 0;
        DAT_INTMEM_50 = 1;
        DAT_INTMEM_51 = 2;
        FUN_CODE_044f(0xcc00,DAT_EXTMEM_c800);
        if (DAT_INTMEM_4d == '\0') {
          if ((bEXTMEMc84b >> 2 & 1) == 1) {
            DAT_INTMEM_50 = 0xeb;
            FUN_CODE_2389(0xc801,bEXTMEMc84b);
          }
          else {
            DAT_INTMEM_50 = uEXTMEMc848;
            FUN_CODE_2389(0xc801,bEXTMEMc84b);
          }
        }
        DAT_INTMEM_4d = '\x01';
        uEXTMEMcc0c = 99;
        DAT_EXTMEM_c804 = 0x80;
        uEXTMEMca5a = 0;
        BANK0_R3 = BANK0_R3 | 4;
        DAT_EXTMEM_7f7e = 4;
        uEXTMEMd836 = 8;
        FUN_CODE_11e5();
        bEXTMEMcc95 = 0;
        uEXTMEMcc96 = 0;
LAB_CODE_4e4a:
        do {
          FUN_CODE_2242();
          bEXTMEMcc95 = bEXTMEMcc95 + 1;
          if (((bCODE00a6 >> 2 & 1) != 1) && ((bEXTMEMcc95 & 0xf) == 0)) {
            FUN_CODE_0860(bEXTMEMcc95);
          }
          DAT_EXTMEM_d602 = 0x10;
          DAT_EXTMEM_d603 = 0x2b;
          DAT_EXTMEM_d682 = 0x10;
          DAT_EXTMEM_d683 = 0x2b;
          DAT_EXTMEM_d702 = 0x10;
          DAT_EXTMEM_d703 = 0x2b;
          DAT_EXTMEM_d782 = 0x10;
          DAT_EXTMEM_d783 = 0x2b;
          DAT_INTMEM_50 = 2;
          DAT_INTMEM_51 = 0x25;
          FUN_CODE_044f(0xd700);
          uEXTMEMd40f = 3;
          BANK0_R3 = BANK0_R3 & 0xfe;
          DAT_EXTMEM_cc0b = 0;
          DAT_EXTMEM_7fe5 = 0;
          do {
            uVar7 = 0xd4cc;
            if ((bEXTMEMd4cc & 1) == 1) {
              if (((bEXTMEMd4cc >> 1 & 1) == 0) || (cEXTMEMd4b6 != '\x06')) {
                BANK0_R3 = BANK0_R3 | 2;
                goto LAB_CODE_4e4a;
              }
              FUN_CODE_129a();
              if (((DAT_EXTMEM_d4b5 < 9) << 7 < '\0') ||
                 ((DAT_EXTMEM_d4b5 == 9 && (DAT_EXTMEM_d4b4 < 0xc4)))) {
                uEXTMEMd60c = 2;
                uEXTMEMd68c = 2;
                uEXTMEMd70c = 2;
                uEXTMEMd78c = 2;
              }
              else if (((DAT_EXTMEM_d4b5 < 0x13) << 7 < '\0') ||
                      ((DAT_EXTMEM_d4b5 == 0x13 && (DAT_EXTMEM_d4b4 < 0x88)))) {
                uEXTMEMd60c = 1;
                uEXTMEMd68c = 1;
                uEXTMEMd70c = 1;
                uEXTMEMd78c = 1;
              }
              else {
                uEXTMEMd60c = 0;
                uEXTMEMd68c = 0;
                uEXTMEMd70c = 0;
                uEXTMEMd78c = 0;
              }
              uVar7 = 0xd707;
              FUN_CODE_2820(0xd707);
              DAT_INTMEM_50 = 2;
              DAT_INTMEM_51 = 0x14;
              uVar7 = uVar7 & 0xff00;
              FUN_CODE_044f(uVar7);
              DAT_INTMEM_50 = 2;
              DAT_INTMEM_51 = 0x68;
              FUN_CODE_044f(uVar7 & 0xff00);
              DAT_INTMEM_50 = 2;
              DAT_INTMEM_51 = 2;
              FUN_CODE_044f(1);
              DAT_INTMEM_51 = DAT_EXTMEM_d4b5;
              DAT_INTMEM_50 = 2;
              FUN_CODE_044f(0xd401);
              DAT_INTMEM_51 = DAT_EXTMEM_d4b4;
              DAT_INTMEM_50 = 2;
              FUN_CODE_044f(0xd401);
              DAT_EXTMEM_cc0b = 0;
              DAT_EXTMEM_7fe5 = 0;
              goto LAB_CODE_4fe8;
            }
            FUN_CODE_07f4(bEXTMEMd4cc);
            if ((char)uVar7 == '\x01') goto LAB_CODE_488a;
          } while ((char)uVar7 != '\x02');
          BANK0_R3 = BANK0_R3 | 1;
        } while( true );
      }
      DAT_INTMEM_4d = '\0';
      if ((bCODE00a7 >> 5 & 1) == 1) {
        BANK1_R2 = 0;
        BANK1_R3 = '\0';
        BANK1_R4 = 0;
        BANK1_R5 = 0;
        FUN_CODE_26be(0xc,bCODE00a7);
        bEXTMEMcc09 = 0;
        do {
          if ((bEXTMEMcc07 >> 2 & 1) == 1) break;
        } while (BANK0_R3 < 0xf1);
        if (BANK0_R3 < 0xf1) {
          DAT_INTMEM_50 = 0x20;
          DAT_INTMEM_51 = 6;
          FUN_CODE_044f(0xcc00,0);
          DAT_INTMEM_48 = 0x35;
          DAT_INTMEM_49 = -0x34;
          DAT_INTMEM_4a = 0;
          cVar2 = FUN_CODE_67d0(0xcc37,0);
          uVar4 = cVar2 != '\0';
          cVar2 = FUN_CODE_67d0(CONCAT11(DAT_INTMEM_49 - (((0xfe < DAT_INTMEM_48) << 7) >> 7),
                                         DAT_INTMEM_48 + 1),DAT_INTMEM_4a);
          BANK0_R7 = BANK0_R7 & 0xf;
          if (cVar2 == '\f') {
            DAT_EXTMEM_0120 = uVar4;
          }
        }
        else {
          DAT_EXTMEM_0120 = 0;
        }
      }
      BANK0_R0 = BANK0_R0 & 0xfb;
      DAT_INTMEM_50 = uEXTMEMc848;
      FUN_CODE_2389(CONCAT11(200,uEXTMEMc848));
      bVar3 = BANK0_R0;
      BANK0_R0 = BANK0_R0 | 4;
      DAT_EXTMEM_7fb6 = '\0';
      uVar4 = 0x7f;
      bVar6 = DAT_EXTMEM_7f84;
      if (DAT_EXTMEM_7f84 == 0) {
        uVar4 = 0xd2;
        BANK0_R0 = bVar3 & 0xf | 4;
        bVar6 = DAT_EXTMEM_d25c;
        if (2 < BANK0_R0) goto LAB_CODE_53a2;
      }
      else {
LAB_CODE_53a2:
        BANK1_R2 = 0;
        BANK1_R3 = '\0';
        BANK1_R4 = 0;
        BANK1_R5 = 0;
        FUN_CODE_26be(CONCAT11(uVar4,9),bVar6);
        bEXTMEMcc09 = 0;
        do {
          if ((bEXTMEMcc07 >> 2 & 1) == 1) break;
        } while (BANK0_R0 < 0xf1);
        if (BANK0_R0 < 0xf1) {
          DAT_INTMEM_48 = 0x35;
          DAT_INTMEM_49 = -0x34;
          DAT_INTMEM_4a = 0;
          bVar3 = FUN_CODE_67d0(0xcc36,0);
          if ((bVar3 & 0xf) == 9) {
            cVar2 = FUN_CODE_67d0(CONCAT11(DAT_INTMEM_49 - (((0xfd < DAT_INTMEM_48) << 7) >> 7),
                                           DAT_INTMEM_48 + 2),DAT_INTMEM_4a);
            DAT_EXTMEM_7fe7 = cVar2 != '\0';
          }
          else {
            DAT_EXTMEM_7fe7 = 0;
          }
        }
        else {
          DAT_EXTMEM_7fe7 = 0;
        }
      }
      BANK0_R2 = BANK0_R2 | 0x80;
      uEXTMEMcc0c = 99;
      uEXTMEMca5a = 0;
      DAT_INTMEM_50 = 1;
      DAT_INTMEM_51 = 4;
      uVar4 = 0xca;
      FUN_CODE_044f(0xca00);
      BANK1_R2 = 0;
      BANK1_R3 = '\0';
      BANK1_R4 = 0;
      BANK1_R5 = 1;
      FUN_CODE_26be(CONCAT11(uVar4,8));
      if (DAT_EXTMEM_7f84 == 0) {
        bVar3 = BANK0_R2;
        if ((((bEXTMEMd252 >> 5 & 1) != 1) && ((bEXTMEMd218 & 1) != 0)) &&
           (bVar3 = BANK0_R2 & 0xf, 1 < (BANK0_R2 & 0xf))) {
          bVar3 = BANK0_R2 & 0xb;
        }
        BANK0_R2 = bVar3;
        if ((DAT_EXTMEM_d25c & 0xf) == 0) {
          BANK0_R2 = BANK0_R2 | 0x40;
        }
        else {
          BANK0_R2 = BANK0_R2 & 0xbf;
        }
        bVar3 = DAT_EXTMEM_d25d & 0xf;
        FUN_CODE_22d9();
        if (((bEXTMEMd252 >> 5 & 1) == 1) ||
           ((((DAT_EXTMEM_d25c & 0xf) != 0 || ((bEXTMEMd252 >> 3 & 1) != 1)) &&
            (((DAT_EXTMEM_d25c & 0xf) == 0 || ((bEXTMEMd252 >> 2 & 1) == 0)))))) {
          DAT_EXTMEM_7ffc = false;
        }
        else {
          DAT_EXTMEM_7ffc = true;
          if ((char)DAT_EXTMEM_d25d < '\0') {
            uEXTMEMcaa5 = 2;
          }
        }
        DAT_EXTMEM_7f7f = bVar3;
        if ((DAT_EXTMEM_d25c & 0xf) == 0) {
          DAT_EXTMEM_caa3 = 0;
        }
        else {
          DAT_EXTMEM_caa3 = 7;
          BANK0_R2 = BANK0_R2 | 0x20;
        }
      }
      else {
        DAT_EXTMEM_7f7f = 0x10;
        BANK0_R2 = BANK0_R2 & 8;
        DAT_EXTMEM_7ffc = bEXTMEMc84b == 0;
        uEXTMEMcaa5 = 2;
      }
      BANK0_R2 = BANK0_R2 | 0xd1;
      if (((bool)DAT_EXTMEM_7ffc != false) &&
         (BANK0_R2 = BANK0_R2 & 0xfe | 0x78, DAT_EXTMEM_7f84 == 0)) {
        bEXTMEMd208 = bEXTMEMd208 & 0xf7 | 4;
      }
      bVar3 = BANK0_R2;
      DAT_EXTMEM_7fa2 = '\0';
      DAT_EXTMEM_7f76 = '\0';
      DAT_EXTMEM_7f77 = '\0';
      DAT_EXTMEM_7f78 = '\0';
      DAT_EXTMEM_7f79 = '\0';
      DAT_EXTMEM_7f7a = '\0';
      DAT_EXTMEM_7f7b = 0;
      uEXTMEM7f83 = 0;
      uEXTMEM7f82 = 0;
      uEXTMEM7f81 = 0;
      DAT_EXTMEM_7f80 = 0;
      DAT_EXTMEM_7ffa = '\0';
      DAT_EXTMEM_7f86 = 0;
      DAT_EXTMEM_7f87 = '\0';
      DAT_EXTMEM_7f7e = 0;
      DAT_EXTMEM_7f7c = 0;
      uEXTMEM7f8f = 0;
      DAT_EXTMEM_7f8e = 0;
      uEXTMEM7f91 = 0;
      DAT_EXTMEM_7f90 = 0;
      DAT_EXTMEM_7f92 = 0;
      DAT_EXTMEM_7f93 = 0xe7;
      param_1 = 0xe7;
      DAT_EXTMEM_7f99 = 0;
      DAT_EXTMEM_7f9a = 0;
      DAT_EXTMEM_7f9b = 0;
      DAT_EXTMEM_7f9d = 0;
      DAT_EXTMEM_7f9c = 0;
      DAT_EXTMEM_7f85 = 0;
      DAT_EXTMEM_7f9e = 0;
      DAT_EXTMEM_7f9f = '\0';
      DAT_EXTMEM_7fa0 = '\0';
      DAT_EXTMEM_7fa1 = 0;
      DAT_EXTMEM_7fbc = '\0';
      DAT_EXTMEM_7fe0 = '\0';
      DAT_EXTMEM_7fa3 = '\0';
      DAT_EXTMEM_7fb8 = '\0';
      DAT_EXTMEM_7fec = 0;
      BANK1_R0 = '\0';
      BANK1_R1 = '\0';
      DAT_EXTMEM_7ff2 = 0;
      DAT_EXTMEM_7ff3 = '\0';
      DAT_EXTMEM_7ff4 = '\0';
      DAT_EXTMEM_7ffb = '\0';
      DAT_EXTMEM_7ff9 = 0;
      DAT_EXTMEM_7fff = 0;
      DAT_EXTMEM_7ff1 = 0;
      DAT_EXTMEM_7fdd = 0;
      DAT_EXTMEM_7fb7 = 0;
      DAT_EXTMEM_7eab = 0;
      DAT_EXTMEM_7eac = 0;
      DAT_EXTMEM_7ead = 0;
      DAT_EXTMEM_7ea6 = 0;
      DAT_EXTMEM_7ea7 = '\0';
      FUN_CODE_1f5c();
      DAT_EXTMEM_7fb9 = DAT_EXTMEM_c84a == '\0';
      DAT_EXTMEM_7fba = DAT_EXTMEM_c84a == '\0';
      BANK0_R0 = 0;
      DAT_EXTMEM_7fbb = DAT_EXTMEM_c84a != '\0';
      DAT_EXTMEM_7f75 = bEXTMEMcc8e & 1;
      BANK0_R2 = bVar3;
      if (DAT_EXTMEM_7f75 == 0) {
        DAT_EXTMEM_caa9 = 0;
      }
      else {
        DAT_EXTMEM_caa9 = 0xff;
      }
      goto LAB_CODE_5707;
    }
    if ((bEXTMEM7ffd >> 4 & 1) == 1) {
      if (DAT_EXTMEM_7fe0 == '\0') {
        BANK0_R2 = bVar3;
        FUN_CODE_41f1(0);
        if (DAT_EXTMEM_7f79 != '\0') {
          DAT_EXTMEM_7f77 = '\x01';
        }
      }
      else if (DAT_EXTMEM_7ff3 == '\0') {
        DAT_EXTMEM_7fe0 = '\0';
        DAT_EXTMEM_ca20 = 1;
        DAT_EXTMEM_ca21 = 0;
        uEXTMEMca08 = 1;
        DAT_EXTMEM_7f9d = 0;
      }
      else {
        DAT_EXTMEM_7ff2 = 0;
        DAT_EXTMEM_7ff3 = '\0';
        DAT_EXTMEM_ca20 = 2;
        DAT_EXTMEM_ca21 = 1;
        uEXTMEMca22 = 0;
        DAT_EXTMEM_ca23 = 0;
        uEXTMEMca08 = 1;
        DAT_EXTMEM_7f9d = 0;
      }
      DAT_EXTMEM_ca0e = 1;
      DAT_EXTMEM_7f78 = '\0';
      bEXTMEM7ffd = bEXTMEM7ffd & 0xfe;
    }
    if ((bEXTMEM7ffd >> 3 & 1) == 1) {
      DAT_EXTMEM_7ff4 = '\x01';
      DAT_EXTMEM_7fbd = '\0';
      if ((DAT_EXTMEM_7ff3 == '\0' & DAT_EXTMEM_7ff2) == 0) {
        if (cEXTMEMca81 == '\x02') {
          uEXTMEMca0d = 1;
          DAT_EXTMEM_7f9d = 0;
          DAT_EXTMEM_7fbf = '\0';
          DAT_EXTMEM_7f76 = DAT_EXTMEM_7f78 == '\0';
          DAT_EXTMEM_7fbd = '\x01';
          if (DAT_EXTMEM_7f78 != '\0') {
            DAT_EXTMEM_ca61 = 0xf;
          }
        }
        else {
          if (((DAT_EXTMEM_7fbf != '\0') && (DAT_EXTMEM_7fbf = '\0', (bEXTMEMc84b >> 6 & 1) != 1))
             && ((bEXTMEMca83 >> 2 & 1) != 0)) {
            BANK0_R2 = bVar3;
            FUN_CODE_1f5c(bEXTMEMca83);
          }
          if (DAT_EXTMEM_7f78 == '\0') {
            uEXTMEMca0d = 1;
            DAT_EXTMEM_7f76 = '\x01';
          }
          else if (DAT_EXTMEM_7f9f == '\0') {
            if (DAT_EXTMEM_7f79 == '\0') {
              if (BANK1_R0 != '\0' || BANK1_R1 != '\0') {
                BANK0_R2 = bVar3;
                FUN_CODE_2402(0);
              }
              if ((DAT_EXTMEM_7fec & 1) == 0) {
                DAT_EXTMEM_7fed = 1;
              }
              else {
                DAT_EXTMEM_7fed = 2;
              }
              bEXTMEMca09 = DAT_EXTMEM_7fed;
            }
            else {
              if (BANK1_R0 != '\0' || BANK1_R1 != '\0') {
                BANK0_R2 = bVar3;
                FUN_CODE_2402(DAT_EXTMEM_7f79);
              }
              if ((DAT_EXTMEM_7fee != '\0') && (cEXTMEMca81 != '\x01')) {
                BANK0_R2 = bVar3;
                FUN_CODE_1f9b();
              }
              DAT_EXTMEM_7fee = '\0';
              DAT_EXTMEM_7f79 = '\0';
              DAT_INTMEM_50 = 0x20;
              DAT_INTMEM_51 = 0x32;
              BANK0_R2 = bVar3;
              FUN_CODE_044f(0x7f00);
              if ((cEXTMEMca81 != '\x01') && (DAT_EXTMEM_7f7a != '\0')) {
                DAT_EXTMEM_cad0 = 2;
              }
              DAT_EXTMEM_7f7a = '\0';
              bEXTMEMca09 = 1;
            }
            DAT_EXTMEM_7f9d = 0;
            DAT_EXTMEM_7f78 = '\0';
            DAT_EXTMEM_ca61 = 0xf;
          }
        }
      }
      else {
        DAT_EXTMEM_7ff2 = 0;
        if (cEXTMEMca81 == '\x01') {
          DAT_EXTMEM_7ff3 = '\x01';
        }
        else {
          DAT_EXTMEM_7ff3 = '\0';
        }
      }
    }
    bVar6 = BANK0_R0;
    uVar7 = 0x7ffb;
    if ((DAT_EXTMEM_7ffb == '\0' & bEXTMEM7ffd & DAT_EXTMEM_7f9f == '\0') != 0) {
      cVar2 = '\0';
      if (((((bEXTMEMcb4a >> 4 & 1) == 1) || (DAT_EXTMEM_7ff2 == 0)) || ((DAT_EXTMEM_ca9f & 1) != 0)
          ) && (((DAT_EXTMEM_c850 >> 1 & 1) == 1 || (3 < bEXTMEMcc09)))) {
        if (((bEXTMEM7ffe >> 1 & 1) == 1) && (DAT_EXTMEM_7fa0 == '\0')) {
          cVar2 = '\x01';
          if (DAT_EXTMEM_7f76 == '\0') {
            if (DAT_EXTMEM_7fec == 1) {
              if (DAT_EXTMEM_7f77 == '\0') {
                if ((DAT_EXTMEM_7f79 == '\0') || (BANK0_R0 = bVar6, 2 < DAT_EXTMEM_7f9d)) {
                  cVar2 = '\0';
                  DAT_EXTMEM_7f78 = '\0';
                  DAT_EXTMEM_7f79 = '\0';
                  DAT_EXTMEM_7ffb = '\0';
                  DAT_EXTMEM_7f76 = '\0';
                  DAT_EXTMEM_7f9d = 0;
                  BANK0_R0 = bVar6;
                }
              }
              else {
                BANK0_R0 = bVar6;
                if (DAT_EXTMEM_7f79 == '\0') {
                  uEXTMEMca08 = 1;
                  DAT_EXTMEM_7f9d = 0;
                }
              }
            }
            else if ((DAT_EXTMEM_7f9d < 3) << 7 < '\0') {
              DAT_EXTMEM_7f78 = '\x01';
              DAT_EXTMEM_ca0c = 1;
              BANK0_R0 = bVar6;
            }
            else {
              cVar2 = '\0';
              DAT_EXTMEM_7f78 = '\0';
              DAT_EXTMEM_7f79 = '\0';
              DAT_EXTMEM_7ffb = '\0';
              DAT_EXTMEM_7f7a = '\0';
              DAT_EXTMEM_7f76 = '\0';
              DAT_EXTMEM_7f9d = 0;
              DAT_EXTMEM_7ff2 = 0;
              uEXTMEMcad1 = 1;
              BANK0_R0 = bVar6;
            }
          }
          else if (cEXTMEMca81 == '\x02') {
            DAT_EXTMEM_7f78 = '\x01';
            cVar2 = '\0';
            BANK0_R0 = bVar6;
          }
          else {
            if (DAT_EXTMEM_7f79 == '\0') {
              if (BANK1_R0 != '\0' || BANK1_R1 != '\0') {
                BANK0_R2 = bVar3;
                FUN_CODE_2402(0);
              }
              if ((DAT_EXTMEM_7fec & 1) == 0) {
                DAT_EXTMEM_7fed = 1;
              }
              else {
                DAT_EXTMEM_7fed = 2;
              }
              bEXTMEMca09 = DAT_EXTMEM_7fed;
            }
            else {
              if (BANK1_R0 != '\0' || BANK1_R1 != '\0') {
                BANK0_R2 = bVar3;
                FUN_CODE_2402(DAT_EXTMEM_7f79);
              }
              if ((DAT_EXTMEM_7fee != '\0') && (cEXTMEMca81 != '\x01')) {
                BANK0_R0 = bVar6;
                BANK0_R2 = bVar3;
                FUN_CODE_1f9b();
              }
              DAT_EXTMEM_7fee = '\0';
              DAT_EXTMEM_7f79 = '\0';
              DAT_INTMEM_50 = 0x20;
              DAT_INTMEM_51 = 0x32;
              BANK0_R0 = bVar6;
              BANK0_R2 = bVar3;
              FUN_CODE_044f(0x7f00);
              if ((cEXTMEMca81 != '\x01') && (DAT_EXTMEM_7f7a != '\0')) {
                DAT_EXTMEM_cad0 = 2;
              }
              DAT_EXTMEM_7f7a = '\0';
              bEXTMEMca09 = 1;
            }
            DAT_EXTMEM_7f9d = 0;
            DAT_EXTMEM_ca61 = 0xf;
            DAT_EXTMEM_ca0c = 1;
            BANK0_R0 = bVar6;
          }
        }
        else if ((((bEXTMEMcb4a >> 3 & 1) == 1) ||
                 (((DAT_EXTMEM_7f9d == 0 || (2 < DAT_EXTMEM_7f9d)) || (DAT_EXTMEM_7ff4 != '\0'))))
                || ((DAT_EXTMEM_ca9f & 1) == 1)) {
          DAT_EXTMEM_7f9d = 0;
          BANK0_R0 = bVar6;
        }
        else {
          DAT_INTMEM_50 = 0x20;
          DAT_INTMEM_51 = 0x1d;
          BANK0_R2 = bVar3;
          FUN_CODE_044f(0xca00,DAT_EXTMEM_ca9f);
          DAT_EXTMEM_ca0c = 1;
          DAT_EXTMEM_ca61 = 0xf;
          cVar2 = '\x01';
        }
      }
      else {
        cVar2 = '\x01';
        DAT_EXTMEM_ca0c = 1;
        DAT_EXTMEM_ca61 = 0xf;
        BANK0_R0 = bVar6;
      }
      DAT_EXTMEM_7f77 = '\0';
      if (DAT_EXTMEM_7fb6 == '\0' && cVar2 == '\0') {
        DAT_EXTMEM_7fa0 = '\0';
        BANK0_R2 = bVar3;
        FUN_CODE_42b8(DAT_EXTMEM_7fb6 == '\0');
      }
      uVar7 = 0x7f76;
      DAT_EXTMEM_7f76 = '\0';
    }
    DAT_INTMEM_48 = 0x35;
    DAT_INTMEM_49 = -0x34;
    DAT_INTMEM_4a = 0;
    BANK0_R2 = bVar3;
    if ((DAT_INTMEM_47 >> 2 & 1) == 1) {
      DAT_INTMEM_50 = 0x20;
      DAT_INTMEM_51 = 6;
      FUN_CODE_044f(uVar7 & 0xff00);
      BANK0_R2 = bVar3;
      bVar3 = FUN_CODE_67d0(CONCAT11(DAT_INTMEM_49,DAT_INTMEM_48),DAT_INTMEM_4a);
      DAT_INTMEM_4b = bVar3 & 7;
      DAT_INTMEM_4c = bVar3 & 0x18;
      cVar2 = FUN_CODE_67d0(CONCAT11(DAT_INTMEM_49 - (((0xfe < DAT_INTMEM_48) << 7) >> 7),
                                     DAT_INTMEM_48 + 1),DAT_INTMEM_4a);
      uVar7 = CONCAT11(DAT_INTMEM_49 - (((0xfd < DAT_INTMEM_48) << 7) >> 7),DAT_INTMEM_48 + 2);
      uVar4 = FUN_CODE_67d0(uVar7,DAT_INTMEM_4a);
      if (BANK0_R7 < 0x10) {
                    /* WARNING: Could not recover jumptable at 0x5f8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ushort)(byte)(cVar2 * '\x03') + 0x5f90))(uVar4);
        return;
      }
    }
  } while( true );
  while( true ) {
    FUN_CODE_07f4(bVar3);
    if ((char)uVar7 == '\x01') goto LAB_CODE_488a;
    if ((char)uVar7 == '\x02') break;
LAB_CODE_4fe8:
    DAT_EXTMEM_7fed = DAT_EXTMEM_d80d & 7;
    uVar7 = 0x7fed;
    BANK0_R3 = BANK0_R3 & 7;
    bVar3 = DAT_EXTMEM_7fed;
    if ((DAT_EXTMEM_7fed == 7) && (uVar7 = 0xd4cc, bVar3 = bEXTMEMd4cc, (bEXTMEMd4cc & 1) == 1))
    goto LAB_CODE_5025;
  }
  BANK0_R3 = BANK0_R3 | 4;
  goto LAB_CODE_4e4a;
LAB_CODE_5025:
  while (bEXTMEMcc9b == 1) {
    DAT_INTMEM_50 = 0x20;
    DAT_INTMEM_51 = 0x42;
    FUN_CODE_044f(0xcc00);
  }
  FUN_CODE_1465();
  DAT_EXTMEM_cc0b = 0;
  DAT_EXTMEM_7fe5 = 0;
  do {
    BANK0_R3 = BANK0_R3 & 0xf0;
    uVar7 = 0xd868;
    BANK0_R4 = BANK0_R4 & 0xf0;
    if (bEXTMEMd819 == BANK0_R4) {
      FUN_CODE_15c1();
      FUN_CODE_1403();
      BANK0_R3 = BANK0_R3 & 0xf0;
      DAT_EXTMEM_7fed = ~DAT_EXTMEM_d804 >> 4;
      DAT_EXTMEM_cc0b = 0;
      DAT_EXTMEM_7fe5 = 0;
      goto LAB_CODE_50b3;
    }
    FUN_CODE_07f4(DAT_EXTMEM_d868);
    if ((char)uVar7 == '\x01') goto LAB_CODE_488a;
  } while ((char)uVar7 != '\x02');
  FUN_CODE_15c1();
  BANK0_R3 = BANK0_R3 | 8;
  goto LAB_CODE_4e4a;
LAB_CODE_50b3:
  BANK0_R3 = BANK0_R3 & DAT_EXTMEM_7fed;
  uVar7 = 0x7fed;
  if (bEXTMEMd84e != BANK0_R4) {
    FUN_CODE_07f4(DAT_EXTMEM_7fed);
    if ((char)uVar7 == '\x01') goto LAB_CODE_488a;
    if ((char)uVar7 == '\x02') goto code_c0x50d7;
    goto LAB_CODE_50b3;
  }
  if (((bCODE00a6 >> 1 & 1) != 1) && (DAT_EXTMEM_7eaa == '\0')) {
    do {
    } while( true );
  }
  if ((bCODE00a9 >> 4 & 1) != 0) {
    FUN_CODE_04d0(bCODE00a9);
  }
  while (bEXTMEMcc9b == 2) {
    DAT_INTMEM_50 = 0x20;
    DAT_INTMEM_51 = 0x43;
    FUN_CODE_044f(0xcc00);
  }
  DAT_INTMEM_50 = 2;
  DAT_INTMEM_51 = 0x26;
  FUN_CODE_044f(0xcc00);
  DAT_EXTMEM_cc0b = 0;
  DAT_EXTMEM_7fe5 = 0;
  do {
    DAT_EXTMEM_7fed = DAT_EXTMEM_d80d & 7;
    uVar7 = 0x7fed;
    BANK0_R3 = BANK0_R3 & 7;
    bVar3 = DAT_EXTMEM_7fed;
    if ((DAT_EXTMEM_7fed == 7) && (uVar7 = 0xd4cc, bVar3 = bEXTMEMd4cc, (bEXTMEMd4cc & 1) != 0)) {
      uEXTMEMc80f = 0;
      uVar7 = 0xcc00;
      uEXTMEMcc00 = 0;
      FUN_CODE_226e();
      DAT_INTMEM_50 = 2;
      DAT_INTMEM_51 = 0x27;
      FUN_CODE_044f(uVar7 & 0xff00);
      DAT_EXTMEM_cc0b = 0;
      DAT_EXTMEM_7fe5 = 0;
      goto LAB_CODE_51aa;
    }
    FUN_CODE_07f4(bVar3);
    if ((char)uVar7 == '\x01') goto LAB_CODE_488a;
  } while ((char)uVar7 != '\x02');
  BANK0_R3 = BANK0_R3 | 0x20;
  goto LAB_CODE_4e4a;
code_c0x50d7:
  BANK0_R3 = BANK0_R3 | 0x10;
  goto LAB_CODE_4e4a;
LAB_CODE_51aa:
  DAT_EXTMEM_7fed = bEXTMEMc803 & 0x80;
  uVar7 = 0x7fed;
  if (DAT_EXTMEM_7fed == 0) {
    FUN_CODE_07f4(0);
    if ((char)uVar7 == '\x01') goto LAB_CODE_488a;
    if ((char)uVar7 == '\x02') goto code_c0x51cb;
    goto LAB_CODE_51aa;
  }
  DAT_EXTMEM_cc0b = 0;
  do {
  } while ((BANK0_R4 != 0) << 7 < '\0');
  DAT_EXTMEM_7fed = cEXTMEMd085;
  DAT_INTMEM_50 = 1;
  DAT_INTMEM_51 = 3;
  FUN_CODE_044f(0x7f00,bEXTMEMc849 >> 4);
  DAT_EXTMEM_7fed = bEXTMEMc849;
  while( true ) {
    while (uVar7 = 0xcc9b, bEXTMEMcc9b == 3) {
      DAT_INTMEM_50 = 0x20;
      DAT_INTMEM_51 = 0x44;
      FUN_CODE_044f(0xcc00);
    }
    FUN_CODE_2369();
    if ((char)uVar7 != '\0') goto LAB_CODE_488a;
    bVar1 = (DAT_EXTMEM_7fed & 1) == 0;
    bVar3 = BANK0_R3 & 0xf;
    if (((bVar1 & bEXTMEMc803) != 0) ||
       (bVar1 = (DAT_EXTMEM_7fed & 2) == 0, (bVar1 & bEXTMEMc840) != 0)) break;
    BANK0_R3 = BANK0_R3 & 3;
    bVar1 = (DAT_EXTMEM_7fed & 4) == 0;
    bVar3 = BANK0_R3;
    if (((bVar1 & bEXTMEMc841) != 0) ||
       (bVar1 = (DAT_EXTMEM_7fed & 8) == 0, bVar1 && cEXTMEMd085 != '?')) break;
  }
  BANK0_R3 = bVar3;
  FUN_CODE_270e(bVar1);
  BANK0_R3 = BANK0_R3 | 0x80;
  goto LAB_CODE_4e4a;
code_c0x51cb:
  BANK0_R3 = BANK0_R3 | 0x40;
  goto LAB_CODE_4e4a;
}



/* =========================================================
 * CODE:6161  FUN_CODE_6161  size=10
 * ========================================================= */

/* WARNING: Removing unreachable block (CODE,0x576b) */
/* WARNING: Removing unreachable block (CODE,0x50a2) */
/* WARNING: Removing unreachable block (CODE,0x6438) */

void FUN_CODE_6161(ushort param_1,byte param_2)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  undefined1 uVar4;
  byte bVar5;
  byte bVar6;
  ushort uVar7;
  
  bVar3 = BANK0_R2;
  FUN_CODE_226e();
  BANK0_R2 = bVar3;
  do {
    bVar3 = BANK0_R2;
    if ((DAT_INTMEM_47 & 0x28) != 0) {
      DAT_INTMEM_50 = 1;
      DAT_INTMEM_51 = 0x10;
      param_1 = param_1 & 0xff00;
      FUN_CODE_044f(param_1);
      DAT_INTMEM_50 = 1;
      DAT_INTMEM_51 = 0x68;
      FUN_CODE_044f(param_1 & 0xff00);
      DAT_INTMEM_50 = 1;
      DAT_INTMEM_51 = 1;
      FUN_CODE_044f(1);
      DAT_INTMEM_50 = 1;
      DAT_INTMEM_51 = DAT_INTMEM_47;
      FUN_CODE_044f(1);
      FUN_CODE_270e();
      if ((DAT_EXTMEM_7fa7 != '\x02') && (DAT_EXTMEM_7fa7 != '\x05')) {
        BANK0_R2 = bVar3;
        FUN_CODE_421d(0x7f4b);
      }
      do {
      } while( true );
    }
LAB_CODE_5707:
    bVar3 = BANK0_R2;
    uVar7 = 0xcc9b;
    if (bEXTMEMcc9b == 1) {
      bVar5 = 1;
LAB_CODE_5719:
      DAT_INTMEM_50 = 0x20;
      DAT_INTMEM_51 = 0x45;
      FUN_CODE_044f(uVar7 & 0xff00,bVar5);
      BANK0_R2 = bVar3;
      goto LAB_CODE_5707;
    }
    uVar7 = 0xc808;
    bVar5 = DAT_EXTMEM_c808;
    if ((DAT_EXTMEM_c808 & 1) != 0) goto LAB_CODE_5719;
    DAT_INTMEM_47 = DAT_EXTMEM_7f93 & bEXTMEMcc07 & param_2;
    bEXTMEM7ffd = DAT_EXTMEM_ca40;
    bEXTMEM7ffe = DAT_EXTMEM_ca41;
    BANK0_R1 = BANK0_R1 & 0xf0;
    DAT_EXTMEM_7fed = ~DAT_EXTMEM_d804 >> 4;
    param_2 = DAT_EXTMEM_7f93;
    if ((DAT_EXTMEM_7fb4 != '\0') &&
       (BANK0_R0 = BANK0_R0 & DAT_EXTMEM_7fed, bEXTMEMd84e == BANK0_R1)) {
      if (((bCODE00a6 >> 1 & 1) == 0) && (DAT_EXTMEM_7eaa == '\0')) {
        DAT_EXTMEM_7eb8 = DAT_EXTMEM_7eb8 + '\x01';
        if (((2 < BANK0_R0) << 7 < '\0') && (BANK0_R0 < 6)) {
                    /* WARNING: Could not recover jumptable at 0x57d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ushort)(byte)(DAT_EXTMEM_7eb9 * '\x03') + 0x57d7))(DAT_EXTMEM_7fed);
          return;
        }
      }
      else {
        DAT_EXTMEM_7fb4 = '\0';
        DAT_EXTMEM_7fed = DAT_EXTMEM_d804 & 0xf;
        uEXTMEMcc00 = 0;
        DAT_EXTMEM_7fab = 1;
        DAT_EXTMEM_7fa9 = 1;
        DAT_EXTMEM_7faa = 0;
        BANK1_R2 = DAT_EXTMEM_7f7e;
        BANK1_R3 = DAT_EXTMEM_7f7d;
        BANK1_R4 = DAT_EXTMEM_7f7c;
        BANK1_R5 = 0;
        bEXTMEMd80b = DAT_EXTMEM_7fed;
        FUN_CODE_26be(0x7f01);
        if ((bCODE00a9 >> 4 & 1) != 0) {
          BANK0_R2 = bVar3;
          FUN_CODE_04d0(bCODE00a9);
        }
      }
    }
    if (DAT_EXTMEM_7fb5 != '\0') {
      BANK0_R0 = BANK0_R0 & 0xf0;
      param_2 = ~DAT_EXTMEM_d804 & 0xf0 & bEXTMEMd819;
      DAT_INTMEM_4e = ~DAT_EXTMEM_d804 & 0xf0;
      DAT_INTMEM_4f = 0;
      DAT_EXTMEM_7fed = param_2;
      if (param_2 == DAT_INTMEM_4e) {
        BANK0_R2 = bVar3;
        FUN_CODE_15c1(0xff);
      }
    }
    uVar7 = 0x7fbe;
    if (DAT_EXTMEM_7fbe != '\0') {
      if ((bCODE00ac != 0) && (DAT_EXTMEM_7ea7 == '\0')) {
        DAT_EXTMEM_7ea7 = '\x01';
      }
      if (DAT_EXTMEM_7ea7 != '\0') {
        DAT_EXTMEM_7ea6 = DAT_EXTMEM_7ea6 + 1;
      }
      if ((DAT_EXTMEM_7f9d == 0) && (DAT_EXTMEM_7f78 == '\0')) {
        uVar4 = 0x7f;
        bVar5 = 0;
        if (DAT_EXTMEM_7fbd != '\0') goto LAB_CODE_5a6d;
      }
      else {
LAB_CODE_5a6d:
        uVar4 = 0;
        bVar5 = bCODE00ab;
        if ((bCODE00ab >> 6 & 1) != 1) {
          uVar7 = 0;
          uVar4 = 0;
          bVar5 = DAT_EXTMEM_7ea6;
          if (BANK0_R0 <= bCODE00ac) goto LAB_CODE_5aa1;
        }
      }
      BANK0_R2 = bVar3;
      FUN_CODE_421d(CONCAT11(uVar4,0x46),bVar5);
      DAT_EXTMEM_7fbe = '\0';
      bEXTMEMcc09 = 0;
      DAT_EXTMEM_7ea7 = '\0';
      uVar7 = 0x7ea6;
      DAT_EXTMEM_7ea6 = 0;
    }
LAB_CODE_5aa1:
    if ((DAT_INTMEM_47 == 0) && (uVar7 = 0x7ffd, bEXTMEM7ffd == 0)) {
      if ((DAT_EXTMEM_7fa3 != '\0') && ((DAT_EXTMEM_7fa2 == '\x03' || (DAT_EXTMEM_7fa2 == '\x04'))))
      {
        DAT_INTMEM_50 = 4;
        DAT_INTMEM_51 = 0x1b;
        BANK0_R2 = bVar3;
        FUN_CODE_044f(0x7f00,0);
        if (DAT_EXTMEM_7f87 != '\0') {
          DAT_EXTMEM_7fe1 = '\x01';
          DAT_EXTMEM_7fe2 = '\x01';
          DAT_EXTMEM_7fe3 = '\x01';
          DAT_EXTMEM_7fe4 = '\x01';
          DAT_EXTMEM_7ffa = '\x01';
          for (bVar5 = 0; bVar5 < BANK0_R4; bVar5 = bVar5 + 1) {
            BANK0_R6 = BANK0_R6 & 4;
            *(bool *)CONCAT11('\x7f' - (((0x1e < bVar5) << 7) >> 7),bVar5 - 0x1f) =
                 *(char *)CONCAT11('\x7f' - (((0x7f < bVar5) << 7) >> 7),bVar5 + 0x80) != '\0';
          }
          if ((DAT_EXTMEM_7fe1 == '\0') || (DAT_EXTMEM_7fe2 == '\0')) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if ((bVar1) && (DAT_EXTMEM_7fe3 != '\0')) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          if ((bVar1) && (DAT_EXTMEM_7fe4 != '\0')) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          if (DAT_EXTMEM_7f7d == '\x10') {
            bVar5 = 2;
          }
          else {
            bVar5 = DAT_EXTMEM_7f7d == '\b';
          }
          bVar6 = DAT_EXTMEM_7f80 & 3;
          bVar5 = *(byte *)CONCAT11('\x7f' - (((0x69 < bVar5) << 7) >> 7),bVar5 + 0x96) & 3;
          if (((bVar6 < BANK0_R3) && (bVar1)) || (bVar5 == BANK0_R4)) {
            DAT_EXTMEM_7f9a = bVar6 << 4 | bVar6;
          }
          else {
            DAT_EXTMEM_7ffa = '\0';
            DAT_EXTMEM_7f9a = bVar5 << 4 | bVar5;
          }
          DAT_EXTMEM_7fe1 = '\x01';
          DAT_EXTMEM_7fe2 = 1;
          DAT_EXTMEM_7fe3 = '\x01';
          DAT_EXTMEM_7fe4 = '\x01';
          for (bVar5 = 0; bVar6 = DAT_EXTMEM_7f9a, bVar5 < BANK0_R4; bVar5 = bVar5 + 1) {
            BANK0_R6 = BANK0_R6 & 0x20;
            *(bool *)CONCAT11('\x7f' - (((0x1e < bVar5) << 7) >> 7),bVar5 - 0x1f) =
                 *(char *)CONCAT11('\x7f' - (((0x7f < bVar5) << 7) >> 7),bVar5 + 0x80) != '\0';
          }
          if ((DAT_EXTMEM_7fe1 == '\0') || (DAT_EXTMEM_7fe2 == 0)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if ((bVar1) && (DAT_EXTMEM_7fe3 != '\0')) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          if ((bVar1) && (DAT_EXTMEM_7fe4 != '\0')) {
            DAT_EXTMEM_7fe3 = '\x01';
          }
          else {
            DAT_EXTMEM_7fe3 = '\0';
          }
          DAT_EXTMEM_7fed = (DAT_EXTMEM_7f80 & 0x18) >> 1;
          DAT_EXTMEM_7fe4 =
               *(byte *)CONCAT11('\x7f' - (((0x69 < DAT_EXTMEM_7fe2) << 7) >> 7),
                                 DAT_EXTMEM_7fe2 + 0x96) & 0xc;
          if (((DAT_EXTMEM_7fed < BANK0_R3) && (DAT_EXTMEM_7fe3 == '\x01')) ||
             (DAT_EXTMEM_7fe4 == BANK0_R4)) {
            DAT_EXTMEM_7f9a = DAT_EXTMEM_7fed << 4 | DAT_EXTMEM_7fed;
          }
          else {
            DAT_EXTMEM_7ffa = '\0';
            DAT_EXTMEM_7f9a = DAT_EXTMEM_7fe4 << 4 | DAT_EXTMEM_7fe4;
          }
          BANK0_R3 = BANK0_R3 | bVar6;
          if (DAT_EXTMEM_7ffa == '\0') {
            DAT_EXTMEM_7f85 = 1;
          }
        }
        if (DAT_EXTMEM_7fa2 == '\x04') {
          DAT_EXTMEM_7fe2 = DAT_EXTMEM_7f80;
          BANK0_R3 = BANK0_R3 & 4;
          BANK0_R4 = BANK0_R4 & 0x20;
          BANK0_R5 = BANK0_R5 & 3;
          bVar5 = ((DAT_EXTMEM_7f80 & 0x18) >> 4) << 1 | (DAT_EXTMEM_7f80 & 8) >> 3;
          DAT_EXTMEM_7fb8 = '\0';
          if ((DAT_EXTMEM_7fba == '\0') || (DAT_EXTMEM_7f80 != 0)) {
            bVar6 = DAT_EXTMEM_7f80;
            if (DAT_EXTMEM_7f87 == '\0') {
              DAT_EXTMEM_7fed = DAT_EXTMEM_7f80 & 3;
              BANK0_R3 = BANK0_R3 | DAT_EXTMEM_7f9a & 0xcc;
              DAT_EXTMEM_7f9a = DAT_EXTMEM_7fed << 4 | DAT_EXTMEM_7fed;
            }
          }
          else {
            DAT_EXTMEM_7fb8 = '\x01';
            bVar6 = 1;
          }
          if (((DAT_EXTMEM_7fb9 == '\0') || (DAT_EXTMEM_7f80 != 0)) ||
             ((DAT_EXTMEM_7fbb == '\0' && ((DAT_EXTMEM_7fbc == '\0' && (DAT_EXTMEM_7fb8 != '\0')))))
             ) {
            if (DAT_EXTMEM_7f87 == '\0') {
              DAT_EXTMEM_7fed = (DAT_EXTMEM_7f80 & 0x18) >> 1;
              BANK0_R3 = BANK0_R3 | DAT_EXTMEM_7f9a & 0x33;
              DAT_EXTMEM_7f9a = DAT_EXTMEM_7fed << 4 | DAT_EXTMEM_7fed;
            }
          }
          else {
            bVar5 = bVar5 + 1;
            DAT_EXTMEM_7fb8 = '\x01';
          }
          bVar6 = bVar5 << 2 | bVar6;
          DAT_EXTMEM_7f9b = bVar6 | bVar6 << 4;
        }
        DAT_EXTMEM_7fa3 = '\0';
        DAT_EXTMEM_7f87 = '\0';
      }
      uEXTMEMcc2d = 0xfe;
      BANK0_R2 = bVar3;
      goto LAB_CODE_5707;
    }
    if ((DAT_INTMEM_47 & 1) != 0) {
      BANK0_R2 = bVar3;
      FUN_CODE_270e();
LAB_CODE_488a:
      while( true ) {
        while( true ) {
          DAT_INTMEM_50 = 1;
          DAT_INTMEM_51 = 1;
          FUN_CODE_044f(uVar7 & 0xff00);
          if ((bCODE00a7 & 1) != 0) {
            FUN_CODE_05db(0,bCODE00a7);
          }
          cEXTMEMcc99 = cEXTMEMcc99 + '\x01';
          BANK0_R3 = BANK0_R3 & 0xfe;
          DAT_EXTMEM_d815 = 0;
          while ((((bEXTMEMc84b & 1) != 0 && (uVar7 = 0xcc9b, bVar3 = bEXTMEMcc9b, bEXTMEMcc9b < 10)
                  ) || (uVar7 = 0xc808, bVar3 = DAT_EXTMEM_c808, (DAT_EXTMEM_c808 & 1) != 0))) {
            DAT_INTMEM_50 = 0x20;
            DAT_INTMEM_51 = 0x40;
            FUN_CODE_044f(uVar7 & 0xff00,bVar3);
          }
          if ((bEXTMEMd86a >> 4 & 1) != 0) {
            uEXTMEMca10 = 3;
            uEXTMEMca15 = 0x20;
            uEXTMEMca14 = 7;
          }
          if ((bCODE00a6 >> 6 & 1) != 0) {
            uEXTMEMca18 = uCODE00aa;
            uEXTMEMca19 = 0xff;
          }
          uEXTMEMcc0c = 199;
          DAT_EXTMEM_cc0b = 0;
          DAT_EXTMEM_c804 = 0;
          DAT_EXTMEM_c84a = '\x02';
          if ((bEXTMEMd86a >> 3 & 1) == 0) {
            uEXTMEMc8a0 = 0xe;
          }
          else {
            uEXTMEMd8a0 = 0xd;
          }
          uEXTMEMd835 = 2;
          BANK0_R3 = BANK0_R3 & 0xfc;
          DAT_INTMEM_50 = 0x20;
          DAT_INTMEM_51 = 1;
          FUN_CODE_044f(0xc800);
          DAT_EXTMEM_7f84 = DAT_EXTMEM_c801 & 0x80;
          if (DAT_EXTMEM_7f84 == 0) {
            uEXTMEMd254 = 0xff;
            uEXTMEMd255 = 0xff;
            BANK0_R3 = BANK0_R3 & 0xdf;
            uEXTMEMd238 = 4;
          }
          DAT_EXTMEM_7fa4 = bEXTMEMcc8e & 4;
          DAT_EXTMEM_7f94 = uEXTMEMcc8c;
          uEXTMEM7f95 = uEXTMEMcc8d;
          DAT_EXTMEM_7f96 = uEXTMEMc828;
          uEXTMEM7f97 = uEXTMEMc829;
          uEXTMEM7f98 = uEXTMEMc82a;
          if (cEXTMEMcc92 == '\0') {
            DAT_EXTMEM_7fa6 = '\x02';
          }
          else {
            BANK0_R3 = BANK0_R3 & 0x7f;
            DAT_EXTMEM_7fa6 = cEXTMEMcc92;
          }
          DAT_EXTMEM_7fa5 = uEXTMEMcc91;
          uEXTMEMcc93 = 6;
          if ((DAT_EXTMEM_7f84 != 0) && ((bEXTMEMc84b >> 3 & 1) != 1)) {
            BANK0_R3 = BANK0_R3 & 0xfb;
          }
          BANK0_R3 = BANK0_R3 & 0xb;
          if ((bCODE00a9 >> 6 & 1) == 0) {
            bEXTMEMd609 = bCODE00a9;
            if ((char)bCODE00a9 < '\0') {
              BANK0_R3 = 0x23;
            }
            else {
              BANK0_R3 = 3;
            }
          }
          else {
            bEXTMEMd609 = 2;
          }
          if ((bCODE00a9 >> 6 & 1) == 0) {
            bEXTMEMd689 = bCODE00a9;
            if ((char)bCODE00a9 < '\0') {
              BANK0_R3 = 0x23;
            }
            else {
              BANK0_R3 = 3;
            }
          }
          else {
            bEXTMEMd689 = 2;
          }
          if ((bCODE00a9 >> 6 & 1) == 0) {
            bEXTMEMd709 = bCODE00a9;
            if ((char)bCODE00a9 < '\0') {
              BANK0_R3 = 0x23;
            }
            else {
              BANK0_R3 = 3;
            }
          }
          else {
            bEXTMEMd709 = 2;
          }
          if ((bCODE00a9 >> 6 & 1) == 0) {
            bEXTMEMd789 = bCODE00a9;
            if ((char)bCODE00a9 < '\0') {
              BANK0_R3 = 0x23;
            }
            else {
              BANK0_R3 = 3;
            }
          }
          else {
            bEXTMEMd789 = 2;
          }
          if ((char)bCODE00a9 < '\0') {
            uEXTMEMd606 = 2;
            uEXTMEMd686 = 2;
            uEXTMEMd706 = 2;
            uEXTMEMd786 = 2;
          }
          BANK0_R3 = BANK0_R3 & 0xfd | 1;
          bEXTMEMd830 = 1;
          DAT_INTMEM_50 = 0x10;
          DAT_INTMEM_51 = 0x70;
          FUN_CODE_044f(0xd800);
          DAT_EXTMEM_cc0b = 0;
          do {
          } while ((bEXTMEMd830 >> 1 & 1) != 1);
          BANK0_R3 = BANK0_R3 & 0x1c;
          if (DAT_EXTMEM_c850 != 1) break;
          BANK0_R3 = 0;
          uVar7 = 0xd830;
          FUN_CODE_270e();
        }
        uVar7 = 0xd86d;
        FUN_CODE_1603();
        if ((char)uVar7 == '\0') break;
        FUN_CODE_270e();
      }
      BANK0_R3 = BANK0_R3 & 0xfe;
      DAT_EXTMEM_7f7d = '\x10';
      FUN_CODE_0cfa(0x7f01);
      uEXTMEMd802 = 2;
      uEXTMEMce06 = 0x10;
      uEXTMEMd801 = 0x81;
      uEXTMEMd803 = 0xf0;
      bEXTMEMd830 = 0;
      DAT_EXTMEM_7f7e = 4;
      FUN_CODE_2820(0x7f00);
      uVar7 = 0x7fe6;
      if (DAT_EXTMEM_7fe6 == '\0') {
        FUN_CODE_1ac6(0);
        uVar7 = uVar7 & 0xff00;
        FUN_CODE_1b66();
        if ((char)uVar7 == '\0') {
          uEXTMEMd84f = 0;
          uVar7 = 0xd802;
          FUN_CODE_1b66();
          if ((char)uVar7 == '\0') {
            FUN_CODE_1f1a();
            goto LAB_CODE_4c29;
          }
          FUN_CODE_270e();
        }
        else {
          FUN_CODE_270e();
        }
        goto LAB_CODE_488a;
      }
LAB_CODE_4c29:
      DAT_EXTMEM_7fe6 = '\x01';
      uEXTMEMd850 = 0xf;
      uEXTMEMd852 = 0x1f;
      uEXTMEMd853 = 0xff;
      DAT_EXTMEM_7fe1 = cEXTMEMd607;
      DAT_EXTMEM_7fe2 = bEXTMEMd687;
      DAT_EXTMEM_7fe3 = cEXTMEMd707;
      DAT_EXTMEM_7fe4 = bEXTMEMd787;
      uEXTMEMd801 = 0;
      uEXTMEMd810 = 0xff;
      bEXTMEMd80b = 0;
      uEXTMEMd80a = 0;
      DAT_EXTMEM_d804 = 0;
      uEXTMEMd85d = 0xac;
      uEXTMEMd85e = 0xd;
      DAT_INTMEM_50 = 1;
      DAT_INTMEM_51 = 0x1e;
      FUN_CODE_044f(0xd800);
      DAT_EXTMEM_cc0b = 0;
      cEXTMEMcc90 = '\0';
      while ((bEXTMEMcc07 & 1) == 1) {
        if (((bCODE00a7 >> 4 & 1) != 0) && (DAT_EXTMEM_7f84 == 0)) {
          DAT_INTMEM_50 = 0x20;
          DAT_INTMEM_51 = 0x53;
          FUN_CODE_044f(0x7f00,0);
          uEXTMEMd254 = 0xff;
          uEXTMEMd255 = 0xff;
          BANK0_R3 = BANK0_R3 & 0xdf;
          uEXTMEMd238 = 4;
        }
        if (BANK0_R4 <= DAT_EXTMEM_cc0b) {
          cEXTMEMcc90 = cEXTMEMcc90 + '\x01';
          DAT_EXTMEM_cc0b = 0;
          if (cEXTMEMcc90 == '\n') {
            BANK0_R3 = BANK0_R3 & 0xfb;
          }
          if ((cEXTMEMcc90 == 'd') && ((bCODE00a7 & 1) == 1)) {
            FUN_CODE_05db(0xff,bCODE00a7,uEXTMEMc848);
          }
        }
      }
      DAT_INTMEM_50 = 1;
      DAT_INTMEM_51 = 0x2c;
      FUN_CODE_044f(0xcc00,bEXTMEMcc07);
      if ((bCODE00a7 & 1) != 0) {
        FUN_CODE_05db(0,bCODE00a7);
      }
      if ((char)bCODE00a7 < '\0') {
        FUN_CODE_056c(bCODE00a7);
      }
      while ((((bEXTMEMc84b & 1) != 0 && (uVar7 = 0xcc9b, bVar3 = bEXTMEMcc9b, bEXTMEMcc9b < 0xb))
             || (uVar7 = 0xc808, bVar3 = DAT_EXTMEM_c808, (DAT_EXTMEM_c808 & 1) != 0))) {
        DAT_INTMEM_50 = 0x20;
        DAT_INTMEM_51 = 0x41;
        FUN_CODE_044f(uVar7 & 0xff00,bVar3);
      }
      DAT_EXTMEM_7f7d = '\0';
      DAT_EXTMEM_7ffc = 0;
      DAT_EXTMEM_7fbe = '\0';
      DAT_EXTMEM_7fbf = '\0';
      DAT_EXTMEM_7fbd = '\0';
      DAT_EXTMEM_7fb5 = '\0';
      DAT_EXTMEM_7fb4 = '\0';
      DAT_EXTMEM_7eb9 = '\0';
      DAT_EXTMEM_7fab = 0;
      DAT_EXTMEM_7fa9 = 0;
      DAT_EXTMEM_7faa = 0;
      DAT_EXTMEM_7fb3 = 0;
      BANK0_R3 = BANK0_R3 | 2;
      if ((DAT_EXTMEM_c800 & 1) == 1) {
        DAT_EXTMEM_cc0b = 0;
        DAT_INTMEM_50 = 1;
        DAT_INTMEM_51 = 2;
        FUN_CODE_044f(0xcc00,DAT_EXTMEM_c800);
        if (DAT_INTMEM_4d == '\0') {
          if ((bEXTMEMc84b >> 2 & 1) == 1) {
            DAT_INTMEM_50 = 0xeb;
            FUN_CODE_2389(0xc801,bEXTMEMc84b);
          }
          else {
            DAT_INTMEM_50 = uEXTMEMc848;
            FUN_CODE_2389(0xc801,bEXTMEMc84b);
          }
        }
        DAT_INTMEM_4d = '\x01';
        uEXTMEMcc0c = 99;
        DAT_EXTMEM_c804 = 0x80;
        uEXTMEMca5a = 0;
        BANK0_R3 = BANK0_R3 | 4;
        DAT_EXTMEM_7f7e = 4;
        uEXTMEMd836 = 8;
        FUN_CODE_11e5();
        bEXTMEMcc95 = 0;
        uEXTMEMcc96 = 0;
LAB_CODE_4e4a:
        do {
          FUN_CODE_2242();
          bEXTMEMcc95 = bEXTMEMcc95 + 1;
          if (((bCODE00a6 >> 2 & 1) != 1) && ((bEXTMEMcc95 & 0xf) == 0)) {
            FUN_CODE_0860(bEXTMEMcc95);
          }
          DAT_EXTMEM_d602 = 0x10;
          DAT_EXTMEM_d603 = 0x2b;
          DAT_EXTMEM_d682 = 0x10;
          DAT_EXTMEM_d683 = 0x2b;
          DAT_EXTMEM_d702 = 0x10;
          DAT_EXTMEM_d703 = 0x2b;
          DAT_EXTMEM_d782 = 0x10;
          DAT_EXTMEM_d783 = 0x2b;
          DAT_INTMEM_50 = 2;
          DAT_INTMEM_51 = 0x25;
          FUN_CODE_044f(0xd700);
          uEXTMEMd40f = 3;
          BANK0_R3 = BANK0_R3 & 0xfe;
          DAT_EXTMEM_cc0b = 0;
          DAT_EXTMEM_7fe5 = 0;
          do {
            uVar7 = 0xd4cc;
            if ((bEXTMEMd4cc & 1) == 1) {
              if (((bEXTMEMd4cc >> 1 & 1) == 0) || (cEXTMEMd4b6 != '\x06')) {
                BANK0_R3 = BANK0_R3 | 2;
                goto LAB_CODE_4e4a;
              }
              FUN_CODE_129a();
              if (((DAT_EXTMEM_d4b5 < 9) << 7 < '\0') ||
                 ((DAT_EXTMEM_d4b5 == 9 && (DAT_EXTMEM_d4b4 < 0xc4)))) {
                uEXTMEMd60c = 2;
                uEXTMEMd68c = 2;
                uEXTMEMd70c = 2;
                uEXTMEMd78c = 2;
              }
              else if (((DAT_EXTMEM_d4b5 < 0x13) << 7 < '\0') ||
                      ((DAT_EXTMEM_d4b5 == 0x13 && (DAT_EXTMEM_d4b4 < 0x88)))) {
                uEXTMEMd60c = 1;
                uEXTMEMd68c = 1;
                uEXTMEMd70c = 1;
                uEXTMEMd78c = 1;
              }
              else {
                uEXTMEMd60c = 0;
                uEXTMEMd68c = 0;
                uEXTMEMd70c = 0;
                uEXTMEMd78c = 0;
              }
              uVar7 = 0xd707;
              FUN_CODE_2820(0xd707);
              DAT_INTMEM_50 = 2;
              DAT_INTMEM_51 = 0x14;
              uVar7 = uVar7 & 0xff00;
              FUN_CODE_044f(uVar7);
              DAT_INTMEM_50 = 2;
              DAT_INTMEM_51 = 0x68;
              FUN_CODE_044f(uVar7 & 0xff00);
              DAT_INTMEM_50 = 2;
              DAT_INTMEM_51 = 2;
              FUN_CODE_044f(1);
              DAT_INTMEM_51 = DAT_EXTMEM_d4b5;
              DAT_INTMEM_50 = 2;
              FUN_CODE_044f(0xd401);
              DAT_INTMEM_51 = DAT_EXTMEM_d4b4;
              DAT_INTMEM_50 = 2;
              FUN_CODE_044f(0xd401);
              DAT_EXTMEM_cc0b = 0;
              DAT_EXTMEM_7fe5 = 0;
              goto LAB_CODE_4fe8;
            }
            FUN_CODE_07f4(bEXTMEMd4cc);
            if ((char)uVar7 == '\x01') goto LAB_CODE_488a;
          } while ((char)uVar7 != '\x02');
          BANK0_R3 = BANK0_R3 | 1;
        } while( true );
      }
      DAT_INTMEM_4d = '\0';
      if ((bCODE00a7 >> 5 & 1) == 1) {
        BANK1_R2 = 0;
        BANK1_R3 = '\0';
        BANK1_R4 = 0;
        BANK1_R5 = 0;
        FUN_CODE_26be(0xc,bCODE00a7);
        bEXTMEMcc09 = 0;
        do {
          if ((bEXTMEMcc07 >> 2 & 1) == 1) break;
        } while (BANK0_R3 < 0xf1);
        if (BANK0_R3 < 0xf1) {
          DAT_INTMEM_50 = 0x20;
          DAT_INTMEM_51 = 6;
          FUN_CODE_044f(0xcc00,0);
          DAT_INTMEM_48 = 0x35;
          DAT_INTMEM_49 = -0x34;
          DAT_INTMEM_4a = 0;
          cVar2 = FUN_CODE_67d0(0xcc37,0);
          uVar4 = cVar2 != '\0';
          cVar2 = FUN_CODE_67d0(CONCAT11(DAT_INTMEM_49 - (((0xfe < DAT_INTMEM_48) << 7) >> 7),
                                         DAT_INTMEM_48 + 1),DAT_INTMEM_4a);
          BANK0_R7 = BANK0_R7 & 0xf;
          if (cVar2 == '\f') {
            DAT_EXTMEM_0120 = uVar4;
          }
        }
        else {
          DAT_EXTMEM_0120 = 0;
        }
      }
      BANK0_R0 = BANK0_R0 & 0xfb;
      DAT_INTMEM_50 = uEXTMEMc848;
      FUN_CODE_2389(CONCAT11(200,uEXTMEMc848));
      bVar3 = BANK0_R0;
      BANK0_R0 = BANK0_R0 | 4;
      DAT_EXTMEM_7fb6 = '\0';
      uVar4 = 0x7f;
      bVar5 = DAT_EXTMEM_7f84;
      if (DAT_EXTMEM_7f84 == 0) {
        uVar4 = 0xd2;
        BANK0_R0 = bVar3 & 0xf | 4;
        bVar5 = DAT_EXTMEM_d25c;
        if (2 < BANK0_R0) goto LAB_CODE_53a2;
      }
      else {
LAB_CODE_53a2:
        BANK1_R2 = 0;
        BANK1_R3 = '\0';
        BANK1_R4 = 0;
        BANK1_R5 = 0;
        FUN_CODE_26be(CONCAT11(uVar4,9),bVar5);
        bEXTMEMcc09 = 0;
        do {
          if ((bEXTMEMcc07 >> 2 & 1) == 1) break;
        } while (BANK0_R0 < 0xf1);
        if (BANK0_R0 < 0xf1) {
          DAT_INTMEM_48 = 0x35;
          DAT_INTMEM_49 = -0x34;
          DAT_INTMEM_4a = 0;
          bVar3 = FUN_CODE_67d0(0xcc36,0);
          if ((bVar3 & 0xf) == 9) {
            cVar2 = FUN_CODE_67d0(CONCAT11(DAT_INTMEM_49 - (((0xfd < DAT_INTMEM_48) << 7) >> 7),
                                           DAT_INTMEM_48 + 2),DAT_INTMEM_4a);
            DAT_EXTMEM_7fe7 = cVar2 != '\0';
          }
          else {
            DAT_EXTMEM_7fe7 = 0;
          }
        }
        else {
          DAT_EXTMEM_7fe7 = 0;
        }
      }
      BANK0_R2 = BANK0_R2 | 0x80;
      uEXTMEMcc0c = 99;
      uEXTMEMca5a = 0;
      DAT_INTMEM_50 = 1;
      DAT_INTMEM_51 = 4;
      uVar4 = 0xca;
      FUN_CODE_044f(0xca00);
      BANK1_R2 = 0;
      BANK1_R3 = '\0';
      BANK1_R4 = 0;
      BANK1_R5 = 1;
      FUN_CODE_26be(CONCAT11(uVar4,8));
      if (DAT_EXTMEM_7f84 == 0) {
        bVar3 = BANK0_R2;
        if ((((bEXTMEMd252 >> 5 & 1) != 1) && ((bEXTMEMd218 & 1) != 0)) &&
           (bVar3 = BANK0_R2 & 0xf, 1 < (BANK0_R2 & 0xf))) {
          bVar3 = BANK0_R2 & 0xb;
        }
        BANK0_R2 = bVar3;
        if ((DAT_EXTMEM_d25c & 0xf) == 0) {
          BANK0_R2 = BANK0_R2 | 0x40;
        }
        else {
          BANK0_R2 = BANK0_R2 & 0xbf;
        }
        bVar3 = DAT_EXTMEM_d25d & 0xf;
        FUN_CODE_22d9();
        if (((bEXTMEMd252 >> 5 & 1) == 1) ||
           ((((DAT_EXTMEM_d25c & 0xf) != 0 || ((bEXTMEMd252 >> 3 & 1) != 1)) &&
            (((DAT_EXTMEM_d25c & 0xf) == 0 || ((bEXTMEMd252 >> 2 & 1) == 0)))))) {
          DAT_EXTMEM_7ffc = false;
        }
        else {
          DAT_EXTMEM_7ffc = true;
          if ((char)DAT_EXTMEM_d25d < '\0') {
            uEXTMEMcaa5 = 2;
          }
        }
        DAT_EXTMEM_7f7f = bVar3;
        if ((DAT_EXTMEM_d25c & 0xf) == 0) {
          DAT_EXTMEM_caa3 = 0;
        }
        else {
          DAT_EXTMEM_caa3 = 7;
          BANK0_R2 = BANK0_R2 | 0x20;
        }
      }
      else {
        DAT_EXTMEM_7f7f = 0x10;
        BANK0_R2 = BANK0_R2 & 8;
        DAT_EXTMEM_7ffc = bEXTMEMc84b == 0;
        uEXTMEMcaa5 = 2;
      }
      BANK0_R2 = BANK0_R2 | 0xd1;
      if (((bool)DAT_EXTMEM_7ffc != false) &&
         (BANK0_R2 = BANK0_R2 & 0xfe | 0x78, DAT_EXTMEM_7f84 == 0)) {
        bEXTMEMd208 = bEXTMEMd208 & 0xf7 | 4;
      }
      bVar3 = BANK0_R2;
      DAT_EXTMEM_7fa2 = '\0';
      DAT_EXTMEM_7f76 = '\0';
      DAT_EXTMEM_7f77 = '\0';
      DAT_EXTMEM_7f78 = '\0';
      DAT_EXTMEM_7f79 = '\0';
      DAT_EXTMEM_7f7a = '\0';
      DAT_EXTMEM_7f7b = 0;
      uEXTMEM7f83 = 0;
      uEXTMEM7f82 = 0;
      uEXTMEM7f81 = 0;
      DAT_EXTMEM_7f80 = 0;
      DAT_EXTMEM_7ffa = '\0';
      DAT_EXTMEM_7f86 = 0;
      DAT_EXTMEM_7f87 = '\0';
      DAT_EXTMEM_7f7e = 0;
      DAT_EXTMEM_7f7c = 0;
      uEXTMEM7f8f = 0;
      DAT_EXTMEM_7f8e = 0;
      uEXTMEM7f91 = 0;
      DAT_EXTMEM_7f90 = 0;
      DAT_EXTMEM_7f92 = 0;
      DAT_EXTMEM_7f93 = 0xe7;
      param_2 = 0xe7;
      DAT_EXTMEM_7f99 = 0;
      DAT_EXTMEM_7f9a = 0;
      DAT_EXTMEM_7f9b = 0;
      DAT_EXTMEM_7f9d = 0;
      DAT_EXTMEM_7f9c = 0;
      DAT_EXTMEM_7f85 = 0;
      DAT_EXTMEM_7f9e = 0;
      DAT_EXTMEM_7f9f = '\0';
      DAT_EXTMEM_7fa0 = '\0';
      DAT_EXTMEM_7fa1 = 0;
      DAT_EXTMEM_7fbc = '\0';
      DAT_EXTMEM_7fe0 = '\0';
      DAT_EXTMEM_7fa3 = '\0';
      DAT_EXTMEM_7fb8 = '\0';
      DAT_EXTMEM_7fec = 0;
      BANK1_R0 = '\0';
      BANK1_R1 = '\0';
      DAT_EXTMEM_7ff2 = 0;
      DAT_EXTMEM_7ff3 = '\0';
      DAT_EXTMEM_7ff4 = '\0';
      DAT_EXTMEM_7ffb = '\0';
      DAT_EXTMEM_7ff9 = 0;
      DAT_EXTMEM_7fff = 0;
      DAT_EXTMEM_7ff1 = 0;
      DAT_EXTMEM_7fdd = 0;
      DAT_EXTMEM_7fb7 = 0;
      DAT_EXTMEM_7eab = 0;
      DAT_EXTMEM_7eac = 0;
      DAT_EXTMEM_7ead = 0;
      DAT_EXTMEM_7ea6 = 0;
      DAT_EXTMEM_7ea7 = '\0';
      FUN_CODE_1f5c();
      DAT_EXTMEM_7fb9 = DAT_EXTMEM_c84a == '\0';
      DAT_EXTMEM_7fba = DAT_EXTMEM_c84a == '\0';
      BANK0_R0 = 0;
      DAT_EXTMEM_7fbb = DAT_EXTMEM_c84a != '\0';
      DAT_EXTMEM_7f75 = bEXTMEMcc8e & 1;
      BANK0_R2 = bVar3;
      if (DAT_EXTMEM_7f75 == 0) {
        DAT_EXTMEM_caa9 = 0;
      }
      else {
        DAT_EXTMEM_caa9 = 0xff;
      }
      goto LAB_CODE_5707;
    }
    if ((bEXTMEM7ffd >> 4 & 1) == 1) {
      if (DAT_EXTMEM_7fe0 == '\0') {
        BANK0_R2 = bVar3;
        FUN_CODE_41f1(0);
        if (DAT_EXTMEM_7f79 != '\0') {
          DAT_EXTMEM_7f77 = '\x01';
        }
      }
      else if (DAT_EXTMEM_7ff3 == '\0') {
        DAT_EXTMEM_7fe0 = '\0';
        DAT_EXTMEM_ca20 = 1;
        DAT_EXTMEM_ca21 = 0;
        uEXTMEMca08 = 1;
        DAT_EXTMEM_7f9d = 0;
      }
      else {
        DAT_EXTMEM_7ff2 = 0;
        DAT_EXTMEM_7ff3 = '\0';
        DAT_EXTMEM_ca20 = 2;
        DAT_EXTMEM_ca21 = 1;
        uEXTMEMca22 = 0;
        DAT_EXTMEM_ca23 = 0;
        uEXTMEMca08 = 1;
        DAT_EXTMEM_7f9d = 0;
      }
      DAT_EXTMEM_ca0e = 1;
      DAT_EXTMEM_7f78 = '\0';
      bEXTMEM7ffd = bEXTMEM7ffd & 0xfe;
    }
    if ((bEXTMEM7ffd >> 3 & 1) == 1) {
      DAT_EXTMEM_7ff4 = '\x01';
      DAT_EXTMEM_7fbd = '\0';
      if ((DAT_EXTMEM_7ff3 == '\0' & DAT_EXTMEM_7ff2) == 0) {
        if (cEXTMEMca81 == '\x02') {
          uEXTMEMca0d = 1;
          DAT_EXTMEM_7f9d = 0;
          DAT_EXTMEM_7fbf = '\0';
          DAT_EXTMEM_7f76 = DAT_EXTMEM_7f78 == '\0';
          DAT_EXTMEM_7fbd = '\x01';
          if (DAT_EXTMEM_7f78 != '\0') {
            DAT_EXTMEM_ca61 = 0xf;
          }
        }
        else {
          if (((DAT_EXTMEM_7fbf != '\0') && (DAT_EXTMEM_7fbf = '\0', (bEXTMEMc84b >> 6 & 1) != 1))
             && ((bEXTMEMca83 >> 2 & 1) != 0)) {
            BANK0_R2 = bVar3;
            FUN_CODE_1f5c(bEXTMEMca83);
          }
          if (DAT_EXTMEM_7f78 == '\0') {
            uEXTMEMca0d = 1;
            DAT_EXTMEM_7f76 = '\x01';
          }
          else if (DAT_EXTMEM_7f9f == '\0') {
            if (DAT_EXTMEM_7f79 == '\0') {
              if (BANK1_R0 != '\0' || BANK1_R1 != '\0') {
                BANK0_R2 = bVar3;
                FUN_CODE_2402(0);
              }
              if ((DAT_EXTMEM_7fec & 1) == 0) {
                DAT_EXTMEM_7fed = 1;
              }
              else {
                DAT_EXTMEM_7fed = 2;
              }
              bEXTMEMca09 = DAT_EXTMEM_7fed;
            }
            else {
              if (BANK1_R0 != '\0' || BANK1_R1 != '\0') {
                BANK0_R2 = bVar3;
                FUN_CODE_2402(DAT_EXTMEM_7f79);
              }
              if ((DAT_EXTMEM_7fee != '\0') && (cEXTMEMca81 != '\x01')) {
                BANK0_R2 = bVar3;
                FUN_CODE_1f9b();
              }
              DAT_EXTMEM_7fee = '\0';
              DAT_EXTMEM_7f79 = '\0';
              DAT_INTMEM_50 = 0x20;
              DAT_INTMEM_51 = 0x32;
              BANK0_R2 = bVar3;
              FUN_CODE_044f(0x7f00);
              if ((cEXTMEMca81 != '\x01') && (DAT_EXTMEM_7f7a != '\0')) {
                DAT_EXTMEM_cad0 = 2;
              }
              DAT_EXTMEM_7f7a = '\0';
              bEXTMEMca09 = 1;
            }
            DAT_EXTMEM_7f9d = 0;
            DAT_EXTMEM_7f78 = '\0';
            DAT_EXTMEM_ca61 = 0xf;
          }
        }
      }
      else {
        DAT_EXTMEM_7ff2 = 0;
        if (cEXTMEMca81 == '\x01') {
          DAT_EXTMEM_7ff3 = '\x01';
        }
        else {
          DAT_EXTMEM_7ff3 = '\0';
        }
      }
    }
    bVar5 = BANK0_R0;
    param_1 = 0x7ffb;
    if ((DAT_EXTMEM_7ffb == '\0' & bEXTMEM7ffd & DAT_EXTMEM_7f9f == '\0') != 0) {
      cVar2 = '\0';
      if (((((bEXTMEMcb4a >> 4 & 1) == 1) || (DAT_EXTMEM_7ff2 == 0)) || ((DAT_EXTMEM_ca9f & 1) != 0)
          ) && (((DAT_EXTMEM_c850 >> 1 & 1) == 1 || (3 < bEXTMEMcc09)))) {
        if (((bEXTMEM7ffe >> 1 & 1) == 1) && (DAT_EXTMEM_7fa0 == '\0')) {
          cVar2 = '\x01';
          if (DAT_EXTMEM_7f76 == '\0') {
            if (DAT_EXTMEM_7fec == 1) {
              if (DAT_EXTMEM_7f77 == '\0') {
                if ((DAT_EXTMEM_7f79 == '\0') || (BANK0_R0 = bVar5, 2 < DAT_EXTMEM_7f9d)) {
                  cVar2 = '\0';
                  DAT_EXTMEM_7f78 = '\0';
                  DAT_EXTMEM_7f79 = '\0';
                  DAT_EXTMEM_7ffb = '\0';
                  DAT_EXTMEM_7f76 = '\0';
                  DAT_EXTMEM_7f9d = 0;
                  BANK0_R0 = bVar5;
                }
              }
              else {
                BANK0_R0 = bVar5;
                if (DAT_EXTMEM_7f79 == '\0') {
                  uEXTMEMca08 = 1;
                  DAT_EXTMEM_7f9d = 0;
                }
              }
            }
            else if ((DAT_EXTMEM_7f9d < 3) << 7 < '\0') {
              DAT_EXTMEM_7f78 = '\x01';
              DAT_EXTMEM_ca0c = 1;
              BANK0_R0 = bVar5;
            }
            else {
              cVar2 = '\0';
              DAT_EXTMEM_7f78 = '\0';
              DAT_EXTMEM_7f79 = '\0';
              DAT_EXTMEM_7ffb = '\0';
              DAT_EXTMEM_7f7a = '\0';
              DAT_EXTMEM_7f76 = '\0';
              DAT_EXTMEM_7f9d = 0;
              DAT_EXTMEM_7ff2 = 0;
              uEXTMEMcad1 = 1;
              BANK0_R0 = bVar5;
            }
          }
          else if (cEXTMEMca81 == '\x02') {
            DAT_EXTMEM_7f78 = '\x01';
            cVar2 = '\0';
            BANK0_R0 = bVar5;
          }
          else {
            if (DAT_EXTMEM_7f79 == '\0') {
              if (BANK1_R0 != '\0' || BANK1_R1 != '\0') {
                BANK0_R2 = bVar3;
                FUN_CODE_2402(0);
              }
              if ((DAT_EXTMEM_7fec & 1) == 0) {
                DAT_EXTMEM_7fed = 1;
              }
              else {
                DAT_EXTMEM_7fed = 2;
              }
              bEXTMEMca09 = DAT_EXTMEM_7fed;
            }
            else {
              if (BANK1_R0 != '\0' || BANK1_R1 != '\0') {
                BANK0_R2 = bVar3;
                FUN_CODE_2402(DAT_EXTMEM_7f79);
              }
              if ((DAT_EXTMEM_7fee != '\0') && (cEXTMEMca81 != '\x01')) {
                BANK0_R0 = bVar5;
                BANK0_R2 = bVar3;
                FUN_CODE_1f9b();
              }
              DAT_EXTMEM_7fee = '\0';
              DAT_EXTMEM_7f79 = '\0';
              DAT_INTMEM_50 = 0x20;
              DAT_INTMEM_51 = 0x32;
              BANK0_R0 = bVar5;
              BANK0_R2 = bVar3;
              FUN_CODE_044f(0x7f00);
              if ((cEXTMEMca81 != '\x01') && (DAT_EXTMEM_7f7a != '\0')) {
                DAT_EXTMEM_cad0 = 2;
              }
              DAT_EXTMEM_7f7a = '\0';
              bEXTMEMca09 = 1;
            }
            DAT_EXTMEM_7f9d = 0;
            DAT_EXTMEM_ca61 = 0xf;
            DAT_EXTMEM_ca0c = 1;
            BANK0_R0 = bVar5;
          }
        }
        else if ((((bEXTMEMcb4a >> 3 & 1) == 1) ||
                 (((DAT_EXTMEM_7f9d == 0 || (2 < DAT_EXTMEM_7f9d)) || (DAT_EXTMEM_7ff4 != '\0'))))
                || ((DAT_EXTMEM_ca9f & 1) == 1)) {
          DAT_EXTMEM_7f9d = 0;
          BANK0_R0 = bVar5;
        }
        else {
          DAT_INTMEM_50 = 0x20;
          DAT_INTMEM_51 = 0x1d;
          BANK0_R2 = bVar3;
          FUN_CODE_044f(0xca00,DAT_EXTMEM_ca9f);
          DAT_EXTMEM_ca0c = 1;
          DAT_EXTMEM_ca61 = 0xf;
          cVar2 = '\x01';
        }
      }
      else {
        cVar2 = '\x01';
        DAT_EXTMEM_ca0c = 1;
        DAT_EXTMEM_ca61 = 0xf;
        BANK0_R0 = bVar5;
      }
      DAT_EXTMEM_7f77 = '\0';
      if (DAT_EXTMEM_7fb6 == '\0' && cVar2 == '\0') {
        DAT_EXTMEM_7fa0 = '\0';
        BANK0_R2 = bVar3;
        FUN_CODE_42b8(DAT_EXTMEM_7fb6 == '\0');
      }
      param_1 = 0x7f76;
      DAT_EXTMEM_7f76 = '\0';
    }
    DAT_INTMEM_48 = 0x35;
    DAT_INTMEM_49 = -0x34;
    DAT_INTMEM_4a = 0;
    BANK0_R2 = bVar3;
    if ((DAT_INTMEM_47 >> 2 & 1) == 1) {
      DAT_INTMEM_50 = 0x20;
      DAT_INTMEM_51 = 6;
      FUN_CODE_044f(param_1 & 0xff00);
      BANK0_R2 = bVar3;
      bVar3 = FUN_CODE_67d0(CONCAT11(DAT_INTMEM_49,DAT_INTMEM_48),DAT_INTMEM_4a);
      DAT_INTMEM_4b = bVar3 & 7;
      DAT_INTMEM_4c = bVar3 & 0x18;
      cVar2 = FUN_CODE_67d0(CONCAT11(DAT_INTMEM_49 - (((0xfe < DAT_INTMEM_48) << 7) >> 7),
                                     DAT_INTMEM_48 + 1),DAT_INTMEM_4a);
      param_1 = CONCAT11(DAT_INTMEM_49 - (((0xfd < DAT_INTMEM_48) << 7) >> 7),DAT_INTMEM_48 + 2);
      uVar4 = FUN_CODE_67d0(param_1,DAT_INTMEM_4a);
      if (BANK0_R7 < 0x10) {
                    /* WARNING: Could not recover jumptable at 0x5f8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ushort)(byte)(cVar2 * '\x03') + 0x5f90))(uVar4);
        return;
      }
    }
  } while( true );
  while( true ) {
    FUN_CODE_07f4(bVar3);
    if ((char)uVar7 == '\x01') goto LAB_CODE_488a;
    if ((char)uVar7 == '\x02') break;
LAB_CODE_4fe8:
    DAT_EXTMEM_7fed = DAT_EXTMEM_d80d & 7;
    uVar7 = 0x7fed;
    BANK0_R3 = BANK0_R3 & 7;
    bVar3 = DAT_EXTMEM_7fed;
    if ((DAT_EXTMEM_7fed == 7) && (uVar7 = 0xd4cc, bVar3 = bEXTMEMd4cc, (bEXTMEMd4cc & 1) == 1))
    goto LAB_CODE_5025;
  }
  BANK0_R3 = BANK0_R3 | 4;
  goto LAB_CODE_4e4a;
LAB_CODE_5025:
  while (bEXTMEMcc9b == 1) {
    DAT_INTMEM_50 = 0x20;
    DAT_INTMEM_51 = 0x42;
    FUN_CODE_044f(0xcc00);
  }
  FUN_CODE_1465();
  DAT_EXTMEM_cc0b = 0;
  DAT_EXTMEM_7fe5 = 0;
  do {
    BANK0_R3 = BANK0_R3 & 0xf0;
    uVar7 = 0xd868;
    BANK0_R4 = BANK0_R4 & 0xf0;
    if (bEXTMEMd819 == BANK0_R4) {
      FUN_CODE_15c1();
      FUN_CODE_1403();
      BANK0_R3 = BANK0_R3 & 0xf0;
      DAT_EXTMEM_7fed = ~DAT_EXTMEM_d804 >> 4;
      DAT_EXTMEM_cc0b = 0;
      DAT_EXTMEM_7fe5 = 0;
      goto LAB_CODE_50b3;
    }
    FUN_CODE_07f4(DAT_EXTMEM_d868);
    if ((char)uVar7 == '\x01') goto LAB_CODE_488a;
  } while ((char)uVar7 != '\x02');
  FUN_CODE_15c1();
  BANK0_R3 = BANK0_R3 | 8;
  goto LAB_CODE_4e4a;
LAB_CODE_50b3:
  BANK0_R3 = BANK0_R3 & DAT_EXTMEM_7fed;
  uVar7 = 0x7fed;
  if (bEXTMEMd84e != BANK0_R4) {
    FUN_CODE_07f4(DAT_EXTMEM_7fed);
    if ((char)uVar7 == '\x01') goto LAB_CODE_488a;
    if ((char)uVar7 == '\x02') goto code_c0x50d7;
    goto LAB_CODE_50b3;
  }
  if (((bCODE00a6 >> 1 & 1) != 1) && (DAT_EXTMEM_7eaa == '\0')) {
    do {
    } while( true );
  }
  if ((bCODE00a9 >> 4 & 1) != 0) {
    FUN_CODE_04d0(bCODE00a9);
  }
  while (bEXTMEMcc9b == 2) {
    DAT_INTMEM_50 = 0x20;
    DAT_INTMEM_51 = 0x43;
    FUN_CODE_044f(0xcc00);
  }
  DAT_INTMEM_50 = 2;
  DAT_INTMEM_51 = 0x26;
  FUN_CODE_044f(0xcc00);
  DAT_EXTMEM_cc0b = 0;
  DAT_EXTMEM_7fe5 = 0;
  do {
    DAT_EXTMEM_7fed = DAT_EXTMEM_d80d & 7;
    uVar7 = 0x7fed;
    BANK0_R3 = BANK0_R3 & 7;
    bVar3 = DAT_EXTMEM_7fed;
    if ((DAT_EXTMEM_7fed == 7) && (uVar7 = 0xd4cc, bVar3 = bEXTMEMd4cc, (bEXTMEMd4cc & 1) != 0)) {
      uEXTMEMc80f = 0;
      uVar7 = 0xcc00;
      uEXTMEMcc00 = 0;
      FUN_CODE_226e();
      DAT_INTMEM_50 = 2;
      DAT_INTMEM_51 = 0x27;
      FUN_CODE_044f(uVar7 & 0xff00);
      DAT_EXTMEM_cc0b = 0;
      DAT_EXTMEM_7fe5 = 0;
      goto LAB_CODE_51aa;
    }
    FUN_CODE_07f4(bVar3);
    if ((char)uVar7 == '\x01') goto LAB_CODE_488a;
  } while ((char)uVar7 != '\x02');
  BANK0_R3 = BANK0_R3 | 0x20;
  goto LAB_CODE_4e4a;
code_c0x50d7:
  BANK0_R3 = BANK0_R3 | 0x10;
  goto LAB_CODE_4e4a;
LAB_CODE_51aa:
  DAT_EXTMEM_7fed = bEXTMEMc803 & 0x80;
  uVar7 = 0x7fed;
  if (DAT_EXTMEM_7fed == 0) {
    FUN_CODE_07f4(0);
    if ((char)uVar7 == '\x01') goto LAB_CODE_488a;
    if ((char)uVar7 == '\x02') goto code_c0x51cb;
    goto LAB_CODE_51aa;
  }
  DAT_EXTMEM_cc0b = 0;
  do {
  } while ((BANK0_R4 != 0) << 7 < '\0');
  DAT_EXTMEM_7fed = cEXTMEMd085;
  DAT_INTMEM_50 = 1;
  DAT_INTMEM_51 = 3;
  FUN_CODE_044f(0x7f00,bEXTMEMc849 >> 4);
  DAT_EXTMEM_7fed = bEXTMEMc849;
  while( true ) {
    while (uVar7 = 0xcc9b, bEXTMEMcc9b == 3) {
      DAT_INTMEM_50 = 0x20;
      DAT_INTMEM_51 = 0x44;
      FUN_CODE_044f(0xcc00);
    }
    FUN_CODE_2369();
    if ((char)uVar7 != '\0') goto LAB_CODE_488a;
    bVar1 = (DAT_EXTMEM_7fed & 1) == 0;
    bVar3 = BANK0_R3 & 0xf;
    if (((bVar1 & bEXTMEMc803) != 0) ||
       (bVar1 = (DAT_EXTMEM_7fed & 2) == 0, (bVar1 & bEXTMEMc840) != 0)) break;
    BANK0_R3 = BANK0_R3 & 3;
    bVar1 = (DAT_EXTMEM_7fed & 4) == 0;
    bVar3 = BANK0_R3;
    if (((bVar1 & bEXTMEMc841) != 0) ||
       (bVar1 = (DAT_EXTMEM_7fed & 8) == 0, bVar1 && cEXTMEMd085 != '?')) break;
  }
  BANK0_R3 = bVar3;
  FUN_CODE_270e(bVar1);
  BANK0_R3 = BANK0_R3 | 0x80;
  goto LAB_CODE_4e4a;
code_c0x51cb:
  BANK0_R3 = BANK0_R3 | 0x40;
  goto LAB_CODE_4e4a;
}



/* =========================================================
 * CODE:616b  FUN_CODE_616b  size=1515
 * ========================================================= */

/* WARNING: Removing unreachable block (CODE,0x576b) */
/* WARNING: Removing unreachable block (CODE,0x50a2) */
/* WARNING: Removing unreachable block (CODE,0x6438) */

void FUN_CODE_616b(byte param_1,char param_2)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  undefined1 uVar5;
  byte bVar6;
  byte bVar7;
  ushort uVar8;
  
  bVar6 = BANK0_R6;
  bVar4 = BANK0_R2;
  FUN_CODE_2211(1);
  uVar8 = 0x7ffb;
  DAT_EXTMEM_7ffb = '\0';
  BANK0_R2 = bVar4;
  BANK0_R6 = bVar6;
  if (param_2 == '\0') {
    DAT_EXTMEM_7fff = 1;
    for (DAT_EXTMEM_7fed = 0; uVar8 = 0x7fed, DAT_EXTMEM_7fed < 4;
        DAT_EXTMEM_7fed = DAT_EXTMEM_7fed + 1) {
      if (*(char *)CONCAT11('\x7f' - (((10 < DAT_EXTMEM_7fed) << 7) >> 7),DAT_EXTMEM_7fed - 0xb) <
          '\0') {
        DAT_EXTMEM_7f93 = DAT_EXTMEM_7f93 & 0xf7;
        cVar3 = *(char *)CONCAT11('\x7f' - (((10 < DAT_EXTMEM_7fed) << 7) >> 7),
                                  DAT_EXTMEM_7fed - 0xb);
        BANK0_R3 = BANK0_R3 & 7;
        if (cVar3 == '\0') {
          if (DAT_EXTMEM_7ff9 == '\0') {
            DAT_EXTMEM_7f93 = DAT_EXTMEM_7f93 | 8;
          }
        }
        else if (cVar3 == '\x02') {
          if ((bEXTMEMc84b & 1) == 0) {
            BANK0_R3 = BANK0_R3 | 0x70;
          }
          else {
            uEXTMEMc87d = 0x20;
            uEXTMEMc87e = 0xff;
            uEXTMEMc87f = 1;
            cVar3 = DAT_EXTMEM_7fed + 1;
            bVar4 = 1;
            while (cVar3 = cVar3 + -1, cVar3 != '\0') {
              bVar4 = bVar4 * '\x02';
            }
            BANK0_R3 = BANK0_R3 | bVar4 & 0xf;
            cVar2 = DAT_EXTMEM_7fed + 1;
            cVar3 = '\x01';
            while (cVar2 = cVar2 + -1, cVar2 != '\0') {
              cVar3 = cVar3 * '\x02';
            }
            BANK0_R3 = BANK0_R3 & ~(cVar3 << 4);
            uEXTMEMc871 = 0x80;
          }
        }
        else if (cVar3 == '\x03') {
          cVar2 = DAT_EXTMEM_7fed + 1;
          cVar3 = '\x01';
          while (cVar2 = cVar2 + -1, cVar2 != '\0') {
            cVar3 = cVar3 * '\x02';
          }
          BANK0_R3 = BANK0_R3 | cVar3 << 4;
          cVar3 = DAT_EXTMEM_7fed + 1;
          bVar4 = 1;
          while (cVar3 = cVar3 + -1, cVar3 != '\0') {
            bVar4 = bVar4 * '\x02';
          }
          BANK0_R3 = BANK0_R3 & ~(bVar4 & 0xf);
          uEXTMEMc871 = 0x80;
        }
        else if (cVar3 == '\x05') {
          uEXTMEMc87d = 0;
          uEXTMEMc87e = 0;
          uEXTMEMc87f = 0;
          BANK0_R3 = BANK0_R3 | 1;
          cVar3 = DAT_EXTMEM_7fed + 1;
          bVar4 = 1;
          while (cVar3 = cVar3 + -1, cVar3 != '\0') {
            bVar4 = bVar4 * '\x02';
          }
          BANK0_R3 = BANK0_R3 | bVar4 & 0xf;
          cVar2 = DAT_EXTMEM_7fed + 1;
          cVar3 = '\x01';
          while (cVar2 = cVar2 + -1, cVar2 != '\0') {
            cVar3 = cVar3 * '\x02';
          }
          BANK0_R3 = BANK0_R3 & ~(cVar3 << 4) | 0x80;
        }
        BANK0_R5 = BANK0_R5 & 0x7f;
        *(undefined1 *)CONCAT11('\x7f' - (((10 < DAT_EXTMEM_7fed) << 7) >> 7),DAT_EXTMEM_7fed - 0xb)
             = *(undefined1 *)
                CONCAT11('\x7f' - (((10 < DAT_EXTMEM_7fed) << 7) >> 7),DAT_EXTMEM_7fed - 0xb);
      }
    }
  }
  do {
    bVar4 = BANK0_R2;
    if ((DAT_INTMEM_47 & 0x28) != 0) {
      DAT_INTMEM_50 = 1;
      DAT_INTMEM_51 = 0x10;
      uVar8 = uVar8 & 0xff00;
      FUN_CODE_044f(uVar8);
      DAT_INTMEM_50 = 1;
      DAT_INTMEM_51 = 0x68;
      FUN_CODE_044f(uVar8 & 0xff00);
      DAT_INTMEM_50 = 1;
      DAT_INTMEM_51 = 1;
      FUN_CODE_044f(1);
      DAT_INTMEM_50 = 1;
      DAT_INTMEM_51 = DAT_INTMEM_47;
      FUN_CODE_044f(1);
      FUN_CODE_270e();
      if ((DAT_EXTMEM_7fa7 != '\x02') && (DAT_EXTMEM_7fa7 != '\x05')) {
        BANK0_R2 = bVar4;
        FUN_CODE_421d(0x7f4b);
      }
      do {
      } while( true );
    }
LAB_CODE_5707:
    bVar4 = BANK0_R2;
    uVar8 = 0xcc9b;
    if (bEXTMEMcc9b == 1) {
      bVar6 = 1;
LAB_CODE_5719:
      DAT_INTMEM_50 = 0x20;
      DAT_INTMEM_51 = 0x45;
      FUN_CODE_044f(uVar8 & 0xff00,bVar6);
      BANK0_R2 = bVar4;
      goto LAB_CODE_5707;
    }
    uVar8 = 0xc808;
    bVar6 = DAT_EXTMEM_c808;
    if ((DAT_EXTMEM_c808 & 1) != 0) goto LAB_CODE_5719;
    DAT_INTMEM_47 = DAT_EXTMEM_7f93 & bEXTMEMcc07 & param_1;
    bEXTMEM7ffd = DAT_EXTMEM_ca40;
    bEXTMEM7ffe = DAT_EXTMEM_ca41;
    BANK0_R1 = BANK0_R1 & 0xf0;
    DAT_EXTMEM_7fed = ~DAT_EXTMEM_d804 >> 4;
    param_1 = DAT_EXTMEM_7f93;
    if ((DAT_EXTMEM_7fb4 != '\0') &&
       (BANK0_R0 = BANK0_R0 & DAT_EXTMEM_7fed, bEXTMEMd84e == BANK0_R1)) {
      if (((bCODE00a6 >> 1 & 1) == 0) && (DAT_EXTMEM_7eaa == '\0')) {
        DAT_EXTMEM_7eb8 = DAT_EXTMEM_7eb8 + '\x01';
        if (((2 < BANK0_R0) << 7 < '\0') && (BANK0_R0 < 6)) {
                    /* WARNING: Could not recover jumptable at 0x57d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ushort)(byte)(DAT_EXTMEM_7eb9 * '\x03') + 0x57d7))(DAT_EXTMEM_7fed);
          return;
        }
      }
      else {
        DAT_EXTMEM_7fb4 = '\0';
        DAT_EXTMEM_7fed = DAT_EXTMEM_d804 & 0xf;
        uEXTMEMcc00 = 0;
        DAT_EXTMEM_7fab = 1;
        DAT_EXTMEM_7fa9 = 1;
        DAT_EXTMEM_7faa = 0;
        BANK1_R2 = DAT_EXTMEM_7f7e;
        BANK1_R3 = DAT_EXTMEM_7f7d;
        BANK1_R4 = DAT_EXTMEM_7f7c;
        BANK1_R5 = 0;
        bEXTMEMd80b = DAT_EXTMEM_7fed;
        FUN_CODE_26be(0x7f01);
        if ((bCODE00a9 >> 4 & 1) != 0) {
          BANK0_R2 = bVar4;
          FUN_CODE_04d0(bCODE00a9);
        }
      }
    }
    if (DAT_EXTMEM_7fb5 != '\0') {
      BANK0_R0 = BANK0_R0 & 0xf0;
      param_1 = ~DAT_EXTMEM_d804 & 0xf0 & bEXTMEMd819;
      DAT_INTMEM_4e = ~DAT_EXTMEM_d804 & 0xf0;
      DAT_INTMEM_4f = 0;
      DAT_EXTMEM_7fed = param_1;
      if (param_1 == DAT_INTMEM_4e) {
        BANK0_R2 = bVar4;
        FUN_CODE_15c1(0xff);
      }
    }
    uVar8 = 0x7fbe;
    if (DAT_EXTMEM_7fbe != '\0') {
      if ((bCODE00ac != 0) && (DAT_EXTMEM_7ea7 == '\0')) {
        DAT_EXTMEM_7ea7 = '\x01';
      }
      if (DAT_EXTMEM_7ea7 != '\0') {
        DAT_EXTMEM_7ea6 = DAT_EXTMEM_7ea6 + 1;
      }
      if ((DAT_EXTMEM_7f9d == 0) && (DAT_EXTMEM_7f78 == '\0')) {
        uVar5 = 0x7f;
        bVar6 = 0;
        if (DAT_EXTMEM_7fbd != '\0') goto LAB_CODE_5a6d;
      }
      else {
LAB_CODE_5a6d:
        uVar5 = 0;
        bVar6 = bCODE00ab;
        if ((bCODE00ab >> 6 & 1) != 1) {
          uVar8 = 0;
          uVar5 = 0;
          bVar6 = DAT_EXTMEM_7ea6;
          if (BANK0_R0 <= bCODE00ac) goto LAB_CODE_5aa1;
        }
      }
      BANK0_R2 = bVar4;
      FUN_CODE_421d(CONCAT11(uVar5,0x46),bVar6);
      DAT_EXTMEM_7fbe = '\0';
      bEXTMEMcc09 = 0;
      DAT_EXTMEM_7ea7 = '\0';
      uVar8 = 0x7ea6;
      DAT_EXTMEM_7ea6 = 0;
    }
LAB_CODE_5aa1:
    if ((DAT_INTMEM_47 == 0) && (uVar8 = 0x7ffd, bEXTMEM7ffd == 0)) {
      if ((DAT_EXTMEM_7fa3 != '\0') && ((DAT_EXTMEM_7fa2 == '\x03' || (DAT_EXTMEM_7fa2 == '\x04'))))
      {
        DAT_INTMEM_50 = 4;
        DAT_INTMEM_51 = 0x1b;
        BANK0_R2 = bVar4;
        FUN_CODE_044f(0x7f00,0);
        if (DAT_EXTMEM_7f87 != '\0') {
          DAT_EXTMEM_7fe1 = '\x01';
          DAT_EXTMEM_7fe2 = '\x01';
          DAT_EXTMEM_7fe3 = '\x01';
          DAT_EXTMEM_7fe4 = '\x01';
          DAT_EXTMEM_7ffa = '\x01';
          for (bVar6 = 0; bVar6 < BANK0_R4; bVar6 = bVar6 + 1) {
            BANK0_R6 = BANK0_R6 & 4;
            *(bool *)CONCAT11('\x7f' - (((0x1e < bVar6) << 7) >> 7),bVar6 - 0x1f) =
                 *(char *)CONCAT11('\x7f' - (((0x7f < bVar6) << 7) >> 7),bVar6 + 0x80) != '\0';
          }
          if ((DAT_EXTMEM_7fe1 == '\0') || (DAT_EXTMEM_7fe2 == '\0')) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if ((bVar1) && (DAT_EXTMEM_7fe3 != '\0')) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          if ((bVar1) && (DAT_EXTMEM_7fe4 != '\0')) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          if (DAT_EXTMEM_7f7d == '\x10') {
            bVar6 = 2;
          }
          else {
            bVar6 = DAT_EXTMEM_7f7d == '\b';
          }
          bVar7 = DAT_EXTMEM_7f80 & 3;
          bVar6 = *(byte *)CONCAT11('\x7f' - (((0x69 < bVar6) << 7) >> 7),bVar6 + 0x96) & 3;
          if (((bVar7 < BANK0_R3) && (bVar1)) || (bVar6 == BANK0_R4)) {
            DAT_EXTMEM_7f9a = bVar7 << 4 | bVar7;
          }
          else {
            DAT_EXTMEM_7ffa = '\0';
            DAT_EXTMEM_7f9a = bVar6 << 4 | bVar6;
          }
          DAT_EXTMEM_7fe1 = '\x01';
          DAT_EXTMEM_7fe2 = 1;
          DAT_EXTMEM_7fe3 = '\x01';
          DAT_EXTMEM_7fe4 = '\x01';
          for (bVar6 = 0; bVar7 = DAT_EXTMEM_7f9a, bVar6 < BANK0_R4; bVar6 = bVar6 + 1) {
            BANK0_R6 = BANK0_R6 & 0x20;
            *(bool *)CONCAT11('\x7f' - (((0x1e < bVar6) << 7) >> 7),bVar6 - 0x1f) =
                 *(char *)CONCAT11('\x7f' - (((0x7f < bVar6) << 7) >> 7),bVar6 + 0x80) != '\0';
          }
          if ((DAT_EXTMEM_7fe1 == '\0') || (DAT_EXTMEM_7fe2 == 0)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if ((bVar1) && (DAT_EXTMEM_7fe3 != '\0')) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          if ((bVar1) && (DAT_EXTMEM_7fe4 != '\0')) {
            DAT_EXTMEM_7fe3 = '\x01';
          }
          else {
            DAT_EXTMEM_7fe3 = '\0';
          }
          DAT_EXTMEM_7fed = (DAT_EXTMEM_7f80 & 0x18) >> 1;
          DAT_EXTMEM_7fe4 =
               *(byte *)CONCAT11('\x7f' - (((0x69 < DAT_EXTMEM_7fe2) << 7) >> 7),
                                 DAT_EXTMEM_7fe2 + 0x96) & 0xc;
          if (((DAT_EXTMEM_7fed < BANK0_R3) && (DAT_EXTMEM_7fe3 == '\x01')) ||
             (DAT_EXTMEM_7fe4 == BANK0_R4)) {
            DAT_EXTMEM_7f9a = DAT_EXTMEM_7fed << 4 | DAT_EXTMEM_7fed;
          }
          else {
            DAT_EXTMEM_7ffa = '\0';
            DAT_EXTMEM_7f9a = DAT_EXTMEM_7fe4 << 4 | DAT_EXTMEM_7fe4;
          }
          BANK0_R3 = BANK0_R3 | bVar7;
          if (DAT_EXTMEM_7ffa == '\0') {
            DAT_EXTMEM_7f85 = 1;
          }
        }
        if (DAT_EXTMEM_7fa2 == '\x04') {
          DAT_EXTMEM_7fe2 = DAT_EXTMEM_7f80;
          BANK0_R3 = BANK0_R3 & 4;
          BANK0_R4 = BANK0_R4 & 0x20;
          BANK0_R5 = BANK0_R5 & 3;
          bVar6 = ((DAT_EXTMEM_7f80 & 0x18) >> 4) << 1 | (DAT_EXTMEM_7f80 & 8) >> 3;
          DAT_EXTMEM_7fb8 = '\0';
          if ((DAT_EXTMEM_7fba == '\0') || (DAT_EXTMEM_7f80 != 0)) {
            bVar7 = DAT_EXTMEM_7f80;
            if (DAT_EXTMEM_7f87 == '\0') {
              DAT_EXTMEM_7fed = DAT_EXTMEM_7f80 & 3;
              BANK0_R3 = BANK0_R3 | DAT_EXTMEM_7f9a & 0xcc;
              DAT_EXTMEM_7f9a = DAT_EXTMEM_7fed << 4 | DAT_EXTMEM_7fed;
            }
          }
          else {
            DAT_EXTMEM_7fb8 = '\x01';
            bVar7 = 1;
          }
          if (((DAT_EXTMEM_7fb9 == '\0') || (DAT_EXTMEM_7f80 != 0)) ||
             ((DAT_EXTMEM_7fbb == '\0' && ((DAT_EXTMEM_7fbc == '\0' && (DAT_EXTMEM_7fb8 != '\0')))))
             ) {
            if (DAT_EXTMEM_7f87 == '\0') {
              DAT_EXTMEM_7fed = (DAT_EXTMEM_7f80 & 0x18) >> 1;
              BANK0_R3 = BANK0_R3 | DAT_EXTMEM_7f9a & 0x33;
              DAT_EXTMEM_7f9a = DAT_EXTMEM_7fed << 4 | DAT_EXTMEM_7fed;
            }
          }
          else {
            bVar6 = bVar6 + 1;
            DAT_EXTMEM_7fb8 = '\x01';
          }
          bVar7 = bVar6 << 2 | bVar7;
          DAT_EXTMEM_7f9b = bVar7 | bVar7 << 4;
        }
        DAT_EXTMEM_7fa3 = '\0';
        DAT_EXTMEM_7f87 = '\0';
      }
      uEXTMEMcc2d = 0xfe;
      BANK0_R2 = bVar4;
      goto LAB_CODE_5707;
    }
    if ((DAT_INTMEM_47 & 1) != 0) {
      BANK0_R2 = bVar4;
      FUN_CODE_270e();
LAB_CODE_488a:
      while( true ) {
        while( true ) {
          DAT_INTMEM_50 = 1;
          DAT_INTMEM_51 = 1;
          FUN_CODE_044f(uVar8 & 0xff00);
          if ((bCODE00a7 & 1) != 0) {
            FUN_CODE_05db(0,bCODE00a7);
          }
          cEXTMEMcc99 = cEXTMEMcc99 + '\x01';
          BANK0_R3 = BANK0_R3 & 0xfe;
          DAT_EXTMEM_d815 = 0;
          while ((((bEXTMEMc84b & 1) != 0 && (uVar8 = 0xcc9b, bVar4 = bEXTMEMcc9b, bEXTMEMcc9b < 10)
                  ) || (uVar8 = 0xc808, bVar4 = DAT_EXTMEM_c808, (DAT_EXTMEM_c808 & 1) != 0))) {
            DAT_INTMEM_50 = 0x20;
            DAT_INTMEM_51 = 0x40;
            FUN_CODE_044f(uVar8 & 0xff00,bVar4);
          }
          if ((bEXTMEMd86a >> 4 & 1) != 0) {
            uEXTMEMca10 = 3;
            uEXTMEMca15 = 0x20;
            uEXTMEMca14 = 7;
          }
          if ((bCODE00a6 >> 6 & 1) != 0) {
            uEXTMEMca18 = uCODE00aa;
            uEXTMEMca19 = 0xff;
          }
          uEXTMEMcc0c = 199;
          DAT_EXTMEM_cc0b = 0;
          DAT_EXTMEM_c804 = 0;
          DAT_EXTMEM_c84a = '\x02';
          if ((bEXTMEMd86a >> 3 & 1) == 0) {
            uEXTMEMc8a0 = 0xe;
          }
          else {
            uEXTMEMd8a0 = 0xd;
          }
          uEXTMEMd835 = 2;
          BANK0_R3 = BANK0_R3 & 0xfc;
          DAT_INTMEM_50 = 0x20;
          DAT_INTMEM_51 = 1;
          FUN_CODE_044f(0xc800);
          DAT_EXTMEM_7f84 = DAT_EXTMEM_c801 & 0x80;
          if (DAT_EXTMEM_7f84 == 0) {
            uEXTMEMd254 = 0xff;
            uEXTMEMd255 = 0xff;
            BANK0_R3 = BANK0_R3 & 0xdf;
            uEXTMEMd238 = 4;
          }
          DAT_EXTMEM_7fa4 = bEXTMEMcc8e & 4;
          DAT_EXTMEM_7f94 = uEXTMEMcc8c;
          uEXTMEM7f95 = uEXTMEMcc8d;
          DAT_EXTMEM_7f96 = uEXTMEMc828;
          uEXTMEM7f97 = uEXTMEMc829;
          uEXTMEM7f98 = uEXTMEMc82a;
          if (cEXTMEMcc92 == '\0') {
            DAT_EXTMEM_7fa6 = '\x02';
          }
          else {
            BANK0_R3 = BANK0_R3 & 0x7f;
            DAT_EXTMEM_7fa6 = cEXTMEMcc92;
          }
          DAT_EXTMEM_7fa5 = uEXTMEMcc91;
          uEXTMEMcc93 = 6;
          if ((DAT_EXTMEM_7f84 != 0) && ((bEXTMEMc84b >> 3 & 1) != 1)) {
            BANK0_R3 = BANK0_R3 & 0xfb;
          }
          BANK0_R3 = BANK0_R3 & 0xb;
          if ((bCODE00a9 >> 6 & 1) == 0) {
            bEXTMEMd609 = bCODE00a9;
            if ((char)bCODE00a9 < '\0') {
              BANK0_R3 = 0x23;
            }
            else {
              BANK0_R3 = 3;
            }
          }
          else {
            bEXTMEMd609 = 2;
          }
          if ((bCODE00a9 >> 6 & 1) == 0) {
            bEXTMEMd689 = bCODE00a9;
            if ((char)bCODE00a9 < '\0') {
              BANK0_R3 = 0x23;
            }
            else {
              BANK0_R3 = 3;
            }
          }
          else {
            bEXTMEMd689 = 2;
          }
          if ((bCODE00a9 >> 6 & 1) == 0) {
            bEXTMEMd709 = bCODE00a9;
            if ((char)bCODE00a9 < '\0') {
              BANK0_R3 = 0x23;
            }
            else {
              BANK0_R3 = 3;
            }
          }
          else {
            bEXTMEMd709 = 2;
          }
          if ((bCODE00a9 >> 6 & 1) == 0) {
            bEXTMEMd789 = bCODE00a9;
            if ((char)bCODE00a9 < '\0') {
              BANK0_R3 = 0x23;
            }
            else {
              BANK0_R3 = 3;
            }
          }
          else {
            bEXTMEMd789 = 2;
          }
          if ((char)bCODE00a9 < '\0') {
            uEXTMEMd606 = 2;
            uEXTMEMd686 = 2;
            uEXTMEMd706 = 2;
            uEXTMEMd786 = 2;
          }
          BANK0_R3 = BANK0_R3 & 0xfd | 1;
          bEXTMEMd830 = 1;
          DAT_INTMEM_50 = 0x10;
          DAT_INTMEM_51 = 0x70;
          FUN_CODE_044f(0xd800);
          DAT_EXTMEM_cc0b = 0;
          do {
          } while ((bEXTMEMd830 >> 1 & 1) != 1);
          BANK0_R3 = BANK0_R3 & 0x1c;
          if (DAT_EXTMEM_c850 != 1) break;
          BANK0_R3 = 0;
          uVar8 = 0xd830;
          FUN_CODE_270e();
        }
        uVar8 = 0xd86d;
        FUN_CODE_1603();
        if ((char)uVar8 == '\0') break;
        FUN_CODE_270e();
      }
      BANK0_R3 = BANK0_R3 & 0xfe;
      DAT_EXTMEM_7f7d = '\x10';
      FUN_CODE_0cfa(0x7f01);
      uEXTMEMd802 = 2;
      uEXTMEMce06 = 0x10;
      uEXTMEMd801 = 0x81;
      uEXTMEMd803 = 0xf0;
      bEXTMEMd830 = 0;
      DAT_EXTMEM_7f7e = 4;
      FUN_CODE_2820(0x7f00);
      uVar8 = 0x7fe6;
      if (DAT_EXTMEM_7fe6 == '\0') {
        FUN_CODE_1ac6(0);
        uVar8 = uVar8 & 0xff00;
        FUN_CODE_1b66();
        if ((char)uVar8 == '\0') {
          uEXTMEMd84f = 0;
          uVar8 = 0xd802;
          FUN_CODE_1b66();
          if ((char)uVar8 == '\0') {
            FUN_CODE_1f1a();
            goto LAB_CODE_4c29;
          }
          FUN_CODE_270e();
        }
        else {
          FUN_CODE_270e();
        }
        goto LAB_CODE_488a;
      }
LAB_CODE_4c29:
      DAT_EXTMEM_7fe6 = '\x01';
      uEXTMEMd850 = 0xf;
      uEXTMEMd852 = 0x1f;
      uEXTMEMd853 = 0xff;
      DAT_EXTMEM_7fe1 = cEXTMEMd607;
      DAT_EXTMEM_7fe2 = bEXTMEMd687;
      DAT_EXTMEM_7fe3 = cEXTMEMd707;
      DAT_EXTMEM_7fe4 = bEXTMEMd787;
      uEXTMEMd801 = 0;
      uEXTMEMd810 = 0xff;
      bEXTMEMd80b = 0;
      uEXTMEMd80a = 0;
      DAT_EXTMEM_d804 = 0;
      uEXTMEMd85d = 0xac;
      uEXTMEMd85e = 0xd;
      DAT_INTMEM_50 = 1;
      DAT_INTMEM_51 = 0x1e;
      FUN_CODE_044f(0xd800);
      DAT_EXTMEM_cc0b = 0;
      cEXTMEMcc90 = '\0';
      while ((bEXTMEMcc07 & 1) == 1) {
        if (((bCODE00a7 >> 4 & 1) != 0) && (DAT_EXTMEM_7f84 == 0)) {
          DAT_INTMEM_50 = 0x20;
          DAT_INTMEM_51 = 0x53;
          FUN_CODE_044f(0x7f00,0);
          uEXTMEMd254 = 0xff;
          uEXTMEMd255 = 0xff;
          BANK0_R3 = BANK0_R3 & 0xdf;
          uEXTMEMd238 = 4;
        }
        if (BANK0_R4 <= DAT_EXTMEM_cc0b) {
          cEXTMEMcc90 = cEXTMEMcc90 + '\x01';
          DAT_EXTMEM_cc0b = 0;
          if (cEXTMEMcc90 == '\n') {
            BANK0_R3 = BANK0_R3 & 0xfb;
          }
          if ((cEXTMEMcc90 == 'd') && ((bCODE00a7 & 1) == 1)) {
            FUN_CODE_05db(0xff,bCODE00a7,uEXTMEMc848);
          }
        }
      }
      DAT_INTMEM_50 = 1;
      DAT_INTMEM_51 = 0x2c;
      FUN_CODE_044f(0xcc00,bEXTMEMcc07);
      if ((bCODE00a7 & 1) != 0) {
        FUN_CODE_05db(0,bCODE00a7);
      }
      if ((char)bCODE00a7 < '\0') {
        FUN_CODE_056c(bCODE00a7);
      }
      while ((((bEXTMEMc84b & 1) != 0 && (uVar8 = 0xcc9b, bVar4 = bEXTMEMcc9b, bEXTMEMcc9b < 0xb))
             || (uVar8 = 0xc808, bVar4 = DAT_EXTMEM_c808, (DAT_EXTMEM_c808 & 1) != 0))) {
        DAT_INTMEM_50 = 0x20;
        DAT_INTMEM_51 = 0x41;
        FUN_CODE_044f(uVar8 & 0xff00,bVar4);
      }
      DAT_EXTMEM_7f7d = '\0';
      DAT_EXTMEM_7ffc = 0;
      DAT_EXTMEM_7fbe = '\0';
      DAT_EXTMEM_7fbf = '\0';
      DAT_EXTMEM_7fbd = '\0';
      DAT_EXTMEM_7fb5 = '\0';
      DAT_EXTMEM_7fb4 = '\0';
      DAT_EXTMEM_7eb9 = '\0';
      DAT_EXTMEM_7fab = 0;
      DAT_EXTMEM_7fa9 = 0;
      DAT_EXTMEM_7faa = 0;
      DAT_EXTMEM_7fb3 = 0;
      BANK0_R3 = BANK0_R3 | 2;
      if ((DAT_EXTMEM_c800 & 1) == 1) {
        DAT_EXTMEM_cc0b = 0;
        DAT_INTMEM_50 = 1;
        DAT_INTMEM_51 = 2;
        FUN_CODE_044f(0xcc00,DAT_EXTMEM_c800);
        if (DAT_INTMEM_4d == '\0') {
          if ((bEXTMEMc84b >> 2 & 1) == 1) {
            DAT_INTMEM_50 = 0xeb;
            FUN_CODE_2389(0xc801,bEXTMEMc84b);
          }
          else {
            DAT_INTMEM_50 = uEXTMEMc848;
            FUN_CODE_2389(0xc801,bEXTMEMc84b);
          }
        }
        DAT_INTMEM_4d = '\x01';
        uEXTMEMcc0c = 99;
        DAT_EXTMEM_c804 = 0x80;
        uEXTMEMca5a = 0;
        BANK0_R3 = BANK0_R3 | 4;
        DAT_EXTMEM_7f7e = 4;
        uEXTMEMd836 = 8;
        FUN_CODE_11e5();
        bEXTMEMcc95 = 0;
        uEXTMEMcc96 = 0;
LAB_CODE_4e4a:
        do {
          FUN_CODE_2242();
          bEXTMEMcc95 = bEXTMEMcc95 + 1;
          if (((bCODE00a6 >> 2 & 1) != 1) && ((bEXTMEMcc95 & 0xf) == 0)) {
            FUN_CODE_0860(bEXTMEMcc95);
          }
          DAT_EXTMEM_d602 = 0x10;
          DAT_EXTMEM_d603 = 0x2b;
          DAT_EXTMEM_d682 = 0x10;
          DAT_EXTMEM_d683 = 0x2b;
          DAT_EXTMEM_d702 = 0x10;
          DAT_EXTMEM_d703 = 0x2b;
          DAT_EXTMEM_d782 = 0x10;
          DAT_EXTMEM_d783 = 0x2b;
          DAT_INTMEM_50 = 2;
          DAT_INTMEM_51 = 0x25;
          FUN_CODE_044f(0xd700);
          uEXTMEMd40f = 3;
          BANK0_R3 = BANK0_R3 & 0xfe;
          DAT_EXTMEM_cc0b = 0;
          DAT_EXTMEM_7fe5 = 0;
          do {
            uVar8 = 0xd4cc;
            if ((bEXTMEMd4cc & 1) == 1) {
              if (((bEXTMEMd4cc >> 1 & 1) == 0) || (cEXTMEMd4b6 != '\x06')) {
                BANK0_R3 = BANK0_R3 | 2;
                goto LAB_CODE_4e4a;
              }
              FUN_CODE_129a();
              if (((DAT_EXTMEM_d4b5 < 9) << 7 < '\0') ||
                 ((DAT_EXTMEM_d4b5 == 9 && (DAT_EXTMEM_d4b4 < 0xc4)))) {
                uEXTMEMd60c = 2;
                uEXTMEMd68c = 2;
                uEXTMEMd70c = 2;
                uEXTMEMd78c = 2;
              }
              else if (((DAT_EXTMEM_d4b5 < 0x13) << 7 < '\0') ||
                      ((DAT_EXTMEM_d4b5 == 0x13 && (DAT_EXTMEM_d4b4 < 0x88)))) {
                uEXTMEMd60c = 1;
                uEXTMEMd68c = 1;
                uEXTMEMd70c = 1;
                uEXTMEMd78c = 1;
              }
              else {
                uEXTMEMd60c = 0;
                uEXTMEMd68c = 0;
                uEXTMEMd70c = 0;
                uEXTMEMd78c = 0;
              }
              uVar8 = 0xd707;
              FUN_CODE_2820(0xd707);
              DAT_INTMEM_50 = 2;
              DAT_INTMEM_51 = 0x14;
              uVar8 = uVar8 & 0xff00;
              FUN_CODE_044f(uVar8);
              DAT_INTMEM_50 = 2;
              DAT_INTMEM_51 = 0x68;
              FUN_CODE_044f(uVar8 & 0xff00);
              DAT_INTMEM_50 = 2;
              DAT_INTMEM_51 = 2;
              FUN_CODE_044f(1);
              DAT_INTMEM_51 = DAT_EXTMEM_d4b5;
              DAT_INTMEM_50 = 2;
              FUN_CODE_044f(0xd401);
              DAT_INTMEM_51 = DAT_EXTMEM_d4b4;
              DAT_INTMEM_50 = 2;
              FUN_CODE_044f(0xd401);
              DAT_EXTMEM_cc0b = 0;
              DAT_EXTMEM_7fe5 = 0;
              goto LAB_CODE_4fe8;
            }
            FUN_CODE_07f4(bEXTMEMd4cc);
            if ((char)uVar8 == '\x01') goto LAB_CODE_488a;
          } while ((char)uVar8 != '\x02');
          BANK0_R3 = BANK0_R3 | 1;
        } while( true );
      }
      DAT_INTMEM_4d = '\0';
      if ((bCODE00a7 >> 5 & 1) == 1) {
        BANK1_R2 = 0;
        BANK1_R3 = '\0';
        BANK1_R4 = 0;
        BANK1_R5 = 0;
        FUN_CODE_26be(0xc,bCODE00a7);
        bEXTMEMcc09 = 0;
        do {
          if ((bEXTMEMcc07 >> 2 & 1) == 1) break;
        } while (BANK0_R3 < 0xf1);
        if (BANK0_R3 < 0xf1) {
          DAT_INTMEM_50 = 0x20;
          DAT_INTMEM_51 = 6;
          FUN_CODE_044f(0xcc00,0);
          DAT_INTMEM_48 = 0x35;
          DAT_INTMEM_49 = -0x34;
          DAT_INTMEM_4a = 0;
          cVar3 = FUN_CODE_67d0(0xcc37,0);
          uVar5 = cVar3 != '\0';
          cVar3 = FUN_CODE_67d0(CONCAT11(DAT_INTMEM_49 - (((0xfe < DAT_INTMEM_48) << 7) >> 7),
                                         DAT_INTMEM_48 + 1),DAT_INTMEM_4a);
          BANK0_R7 = BANK0_R7 & 0xf;
          if (cVar3 == '\f') {
            DAT_EXTMEM_0120 = uVar5;
          }
        }
        else {
          DAT_EXTMEM_0120 = 0;
        }
      }
      BANK0_R0 = BANK0_R0 & 0xfb;
      DAT_INTMEM_50 = uEXTMEMc848;
      FUN_CODE_2389(CONCAT11(200,uEXTMEMc848));
      bVar4 = BANK0_R0;
      BANK0_R0 = BANK0_R0 | 4;
      DAT_EXTMEM_7fb6 = '\0';
      uVar5 = 0x7f;
      bVar6 = DAT_EXTMEM_7f84;
      if (DAT_EXTMEM_7f84 == 0) {
        uVar5 = 0xd2;
        BANK0_R0 = bVar4 & 0xf | 4;
        bVar6 = DAT_EXTMEM_d25c;
        if (2 < BANK0_R0) goto LAB_CODE_53a2;
      }
      else {
LAB_CODE_53a2:
        BANK1_R2 = 0;
        BANK1_R3 = '\0';
        BANK1_R4 = 0;
        BANK1_R5 = 0;
        FUN_CODE_26be(CONCAT11(uVar5,9),bVar6);
        bEXTMEMcc09 = 0;
        do {
          if ((bEXTMEMcc07 >> 2 & 1) == 1) break;
        } while (BANK0_R0 < 0xf1);
        if (BANK0_R0 < 0xf1) {
          DAT_INTMEM_48 = 0x35;
          DAT_INTMEM_49 = -0x34;
          DAT_INTMEM_4a = 0;
          bVar4 = FUN_CODE_67d0(0xcc36,0);
          if ((bVar4 & 0xf) == 9) {
            cVar3 = FUN_CODE_67d0(CONCAT11(DAT_INTMEM_49 - (((0xfd < DAT_INTMEM_48) << 7) >> 7),
                                           DAT_INTMEM_48 + 2),DAT_INTMEM_4a);
            DAT_EXTMEM_7fe7 = cVar3 != '\0';
          }
          else {
            DAT_EXTMEM_7fe7 = 0;
          }
        }
        else {
          DAT_EXTMEM_7fe7 = 0;
        }
      }
      BANK0_R2 = BANK0_R2 | 0x80;
      uEXTMEMcc0c = 99;
      uEXTMEMca5a = 0;
      DAT_INTMEM_50 = 1;
      DAT_INTMEM_51 = 4;
      uVar5 = 0xca;
      FUN_CODE_044f(0xca00);
      BANK1_R2 = 0;
      BANK1_R3 = '\0';
      BANK1_R4 = 0;
      BANK1_R5 = 1;
      FUN_CODE_26be(CONCAT11(uVar5,8));
      if (DAT_EXTMEM_7f84 == 0) {
        bVar4 = BANK0_R2;
        if ((((bEXTMEMd252 >> 5 & 1) != 1) && ((bEXTMEMd218 & 1) != 0)) &&
           (bVar4 = BANK0_R2 & 0xf, 1 < (BANK0_R2 & 0xf))) {
          bVar4 = BANK0_R2 & 0xb;
        }
        BANK0_R2 = bVar4;
        if ((DAT_EXTMEM_d25c & 0xf) == 0) {
          BANK0_R2 = BANK0_R2 | 0x40;
        }
        else {
          BANK0_R2 = BANK0_R2 & 0xbf;
        }
        bVar4 = DAT_EXTMEM_d25d & 0xf;
        FUN_CODE_22d9();
        if (((bEXTMEMd252 >> 5 & 1) == 1) ||
           ((((DAT_EXTMEM_d25c & 0xf) != 0 || ((bEXTMEMd252 >> 3 & 1) != 1)) &&
            (((DAT_EXTMEM_d25c & 0xf) == 0 || ((bEXTMEMd252 >> 2 & 1) == 0)))))) {
          DAT_EXTMEM_7ffc = false;
        }
        else {
          DAT_EXTMEM_7ffc = true;
          if ((char)DAT_EXTMEM_d25d < '\0') {
            uEXTMEMcaa5 = 2;
          }
        }
        DAT_EXTMEM_7f7f = bVar4;
        if ((DAT_EXTMEM_d25c & 0xf) == 0) {
          DAT_EXTMEM_caa3 = 0;
        }
        else {
          DAT_EXTMEM_caa3 = 7;
          BANK0_R2 = BANK0_R2 | 0x20;
        }
      }
      else {
        DAT_EXTMEM_7f7f = 0x10;
        BANK0_R2 = BANK0_R2 & 8;
        DAT_EXTMEM_7ffc = bEXTMEMc84b == 0;
        uEXTMEMcaa5 = 2;
      }
      BANK0_R2 = BANK0_R2 | 0xd1;
      if (((bool)DAT_EXTMEM_7ffc != false) &&
         (BANK0_R2 = BANK0_R2 & 0xfe | 0x78, DAT_EXTMEM_7f84 == 0)) {
        bEXTMEMd208 = bEXTMEMd208 & 0xf7 | 4;
      }
      bVar4 = BANK0_R2;
      DAT_EXTMEM_7fa2 = '\0';
      DAT_EXTMEM_7f76 = '\0';
      DAT_EXTMEM_7f77 = '\0';
      DAT_EXTMEM_7f78 = '\0';
      DAT_EXTMEM_7f79 = '\0';
      DAT_EXTMEM_7f7a = '\0';
      DAT_EXTMEM_7f7b = 0;
      uEXTMEM7f83 = 0;
      uEXTMEM7f82 = 0;
      uEXTMEM7f81 = 0;
      DAT_EXTMEM_7f80 = 0;
      DAT_EXTMEM_7ffa = '\0';
      DAT_EXTMEM_7f86 = 0;
      DAT_EXTMEM_7f87 = '\0';
      DAT_EXTMEM_7f7e = 0;
      DAT_EXTMEM_7f7c = 0;
      uEXTMEM7f8f = 0;
      DAT_EXTMEM_7f8e = 0;
      uEXTMEM7f91 = 0;
      DAT_EXTMEM_7f90 = 0;
      DAT_EXTMEM_7f92 = 0;
      DAT_EXTMEM_7f93 = 0xe7;
      param_1 = 0xe7;
      DAT_EXTMEM_7f99 = 0;
      DAT_EXTMEM_7f9a = 0;
      DAT_EXTMEM_7f9b = 0;
      DAT_EXTMEM_7f9d = 0;
      DAT_EXTMEM_7f9c = 0;
      DAT_EXTMEM_7f85 = 0;
      DAT_EXTMEM_7f9e = 0;
      DAT_EXTMEM_7f9f = '\0';
      DAT_EXTMEM_7fa0 = '\0';
      DAT_EXTMEM_7fa1 = 0;
      DAT_EXTMEM_7fbc = '\0';
      DAT_EXTMEM_7fe0 = '\0';
      DAT_EXTMEM_7fa3 = '\0';
      DAT_EXTMEM_7fb8 = '\0';
      DAT_EXTMEM_7fec = 0;
      BANK1_R0 = '\0';
      BANK1_R1 = '\0';
      DAT_EXTMEM_7ff2 = 0;
      DAT_EXTMEM_7ff3 = '\0';
      DAT_EXTMEM_7ff4 = '\0';
      DAT_EXTMEM_7ffb = '\0';
      DAT_EXTMEM_7ff9 = '\0';
      DAT_EXTMEM_7fff = 0;
      DAT_EXTMEM_7ff1 = 0;
      DAT_EXTMEM_7fdd = 0;
      DAT_EXTMEM_7fb7 = 0;
      DAT_EXTMEM_7eab = 0;
      DAT_EXTMEM_7eac = 0;
      DAT_EXTMEM_7ead = 0;
      DAT_EXTMEM_7ea6 = 0;
      DAT_EXTMEM_7ea7 = '\0';
      FUN_CODE_1f5c();
      DAT_EXTMEM_7fb9 = DAT_EXTMEM_c84a == '\0';
      DAT_EXTMEM_7fba = DAT_EXTMEM_c84a == '\0';
      BANK0_R0 = 0;
      DAT_EXTMEM_7fbb = DAT_EXTMEM_c84a != '\0';
      DAT_EXTMEM_7f75 = bEXTMEMcc8e & 1;
      BANK0_R2 = bVar4;
      if (DAT_EXTMEM_7f75 == 0) {
        DAT_EXTMEM_caa9 = 0;
      }
      else {
        DAT_EXTMEM_caa9 = 0xff;
      }
      goto LAB_CODE_5707;
    }
    if ((bEXTMEM7ffd >> 4 & 1) == 1) {
      if (DAT_EXTMEM_7fe0 == '\0') {
        BANK0_R2 = bVar4;
        FUN_CODE_41f1(0);
        if (DAT_EXTMEM_7f79 != '\0') {
          DAT_EXTMEM_7f77 = '\x01';
        }
      }
      else if (DAT_EXTMEM_7ff3 == '\0') {
        DAT_EXTMEM_7fe0 = '\0';
        DAT_EXTMEM_ca20 = 1;
        DAT_EXTMEM_ca21 = 0;
        uEXTMEMca08 = 1;
        DAT_EXTMEM_7f9d = 0;
      }
      else {
        DAT_EXTMEM_7ff2 = 0;
        DAT_EXTMEM_7ff3 = '\0';
        DAT_EXTMEM_ca20 = 2;
        DAT_EXTMEM_ca21 = 1;
        uEXTMEMca22 = 0;
        DAT_EXTMEM_ca23 = 0;
        uEXTMEMca08 = 1;
        DAT_EXTMEM_7f9d = 0;
      }
      DAT_EXTMEM_ca0e = 1;
      DAT_EXTMEM_7f78 = '\0';
      bEXTMEM7ffd = bEXTMEM7ffd & 0xfe;
    }
    if ((bEXTMEM7ffd >> 3 & 1) == 1) {
      DAT_EXTMEM_7ff4 = '\x01';
      DAT_EXTMEM_7fbd = '\0';
      if ((DAT_EXTMEM_7ff3 == '\0' & DAT_EXTMEM_7ff2) == 0) {
        if (cEXTMEMca81 == '\x02') {
          uEXTMEMca0d = 1;
          DAT_EXTMEM_7f9d = 0;
          DAT_EXTMEM_7fbf = '\0';
          DAT_EXTMEM_7f76 = DAT_EXTMEM_7f78 == '\0';
          DAT_EXTMEM_7fbd = '\x01';
          if (DAT_EXTMEM_7f78 != '\0') {
            DAT_EXTMEM_ca61 = 0xf;
          }
        }
        else {
          if (((DAT_EXTMEM_7fbf != '\0') && (DAT_EXTMEM_7fbf = '\0', (bEXTMEMc84b >> 6 & 1) != 1))
             && ((bEXTMEMca83 >> 2 & 1) != 0)) {
            BANK0_R2 = bVar4;
            FUN_CODE_1f5c(bEXTMEMca83);
          }
          if (DAT_EXTMEM_7f78 == '\0') {
            uEXTMEMca0d = 1;
            DAT_EXTMEM_7f76 = '\x01';
          }
          else if (DAT_EXTMEM_7f9f == '\0') {
            if (DAT_EXTMEM_7f79 == '\0') {
              if (BANK1_R0 != '\0' || BANK1_R1 != '\0') {
                BANK0_R2 = bVar4;
                FUN_CODE_2402(0);
              }
              if ((DAT_EXTMEM_7fec & 1) == 0) {
                DAT_EXTMEM_7fed = 1;
              }
              else {
                DAT_EXTMEM_7fed = 2;
              }
              bEXTMEMca09 = DAT_EXTMEM_7fed;
            }
            else {
              if (BANK1_R0 != '\0' || BANK1_R1 != '\0') {
                BANK0_R2 = bVar4;
                FUN_CODE_2402(DAT_EXTMEM_7f79);
              }
              if ((DAT_EXTMEM_7fee != '\0') && (cEXTMEMca81 != '\x01')) {
                BANK0_R2 = bVar4;
                FUN_CODE_1f9b();
              }
              DAT_EXTMEM_7fee = '\0';
              DAT_EXTMEM_7f79 = '\0';
              DAT_INTMEM_50 = 0x20;
              DAT_INTMEM_51 = 0x32;
              BANK0_R2 = bVar4;
              FUN_CODE_044f(0x7f00);
              if ((cEXTMEMca81 != '\x01') && (DAT_EXTMEM_7f7a != '\0')) {
                DAT_EXTMEM_cad0 = 2;
              }
              DAT_EXTMEM_7f7a = '\0';
              bEXTMEMca09 = 1;
            }
            DAT_EXTMEM_7f9d = 0;
            DAT_EXTMEM_7f78 = '\0';
            DAT_EXTMEM_ca61 = 0xf;
          }
        }
      }
      else {
        DAT_EXTMEM_7ff2 = 0;
        if (cEXTMEMca81 == '\x01') {
          DAT_EXTMEM_7ff3 = '\x01';
        }
        else {
          DAT_EXTMEM_7ff3 = '\0';
        }
      }
    }
    bVar6 = BANK0_R0;
    uVar8 = 0x7ffb;
    if ((DAT_EXTMEM_7ffb == '\0' & bEXTMEM7ffd & DAT_EXTMEM_7f9f == '\0') != 0) {
      cVar3 = '\0';
      if (((((bEXTMEMcb4a >> 4 & 1) == 1) || (DAT_EXTMEM_7ff2 == 0)) || ((DAT_EXTMEM_ca9f & 1) != 0)
          ) && (((DAT_EXTMEM_c850 >> 1 & 1) == 1 || (3 < bEXTMEMcc09)))) {
        if (((bEXTMEM7ffe >> 1 & 1) == 1) && (DAT_EXTMEM_7fa0 == '\0')) {
          cVar3 = '\x01';
          if (DAT_EXTMEM_7f76 == '\0') {
            if (DAT_EXTMEM_7fec == 1) {
              if (DAT_EXTMEM_7f77 == '\0') {
                if ((DAT_EXTMEM_7f79 == '\0') || (BANK0_R0 = bVar6, 2 < DAT_EXTMEM_7f9d)) {
                  cVar3 = '\0';
                  DAT_EXTMEM_7f78 = '\0';
                  DAT_EXTMEM_7f79 = '\0';
                  DAT_EXTMEM_7ffb = '\0';
                  DAT_EXTMEM_7f76 = '\0';
                  DAT_EXTMEM_7f9d = 0;
                  BANK0_R0 = bVar6;
                }
              }
              else {
                BANK0_R0 = bVar6;
                if (DAT_EXTMEM_7f79 == '\0') {
                  uEXTMEMca08 = 1;
                  DAT_EXTMEM_7f9d = 0;
                }
              }
            }
            else if ((DAT_EXTMEM_7f9d < 3) << 7 < '\0') {
              DAT_EXTMEM_7f78 = '\x01';
              DAT_EXTMEM_ca0c = 1;
              BANK0_R0 = bVar6;
            }
            else {
              cVar3 = '\0';
              DAT_EXTMEM_7f78 = '\0';
              DAT_EXTMEM_7f79 = '\0';
              DAT_EXTMEM_7ffb = '\0';
              DAT_EXTMEM_7f7a = '\0';
              DAT_EXTMEM_7f76 = '\0';
              DAT_EXTMEM_7f9d = 0;
              DAT_EXTMEM_7ff2 = 0;
              uEXTMEMcad1 = 1;
              BANK0_R0 = bVar6;
            }
          }
          else if (cEXTMEMca81 == '\x02') {
            DAT_EXTMEM_7f78 = '\x01';
            cVar3 = '\0';
            BANK0_R0 = bVar6;
          }
          else {
            if (DAT_EXTMEM_7f79 == '\0') {
              if (BANK1_R0 != '\0' || BANK1_R1 != '\0') {
                BANK0_R2 = bVar4;
                FUN_CODE_2402(0);
              }
              if ((DAT_EXTMEM_7fec & 1) == 0) {
                DAT_EXTMEM_7fed = 1;
              }
              else {
                DAT_EXTMEM_7fed = 2;
              }
              bEXTMEMca09 = DAT_EXTMEM_7fed;
            }
            else {
              if (BANK1_R0 != '\0' || BANK1_R1 != '\0') {
                BANK0_R2 = bVar4;
                FUN_CODE_2402(DAT_EXTMEM_7f79);
              }
              if ((DAT_EXTMEM_7fee != '\0') && (cEXTMEMca81 != '\x01')) {
                BANK0_R0 = bVar6;
                BANK0_R2 = bVar4;
                FUN_CODE_1f9b();
              }
              DAT_EXTMEM_7fee = '\0';
              DAT_EXTMEM_7f79 = '\0';
              DAT_INTMEM_50 = 0x20;
              DAT_INTMEM_51 = 0x32;
              BANK0_R0 = bVar6;
              BANK0_R2 = bVar4;
              FUN_CODE_044f(0x7f00);
              if ((cEXTMEMca81 != '\x01') && (DAT_EXTMEM_7f7a != '\0')) {
                DAT_EXTMEM_cad0 = 2;
              }
              DAT_EXTMEM_7f7a = '\0';
              bEXTMEMca09 = 1;
            }
            DAT_EXTMEM_7f9d = 0;
            DAT_EXTMEM_ca61 = 0xf;
            DAT_EXTMEM_ca0c = 1;
            BANK0_R0 = bVar6;
          }
        }
        else if ((((bEXTMEMcb4a >> 3 & 1) == 1) ||
                 (((DAT_EXTMEM_7f9d == 0 || (2 < DAT_EXTMEM_7f9d)) || (DAT_EXTMEM_7ff4 != '\0'))))
                || ((DAT_EXTMEM_ca9f & 1) == 1)) {
          DAT_EXTMEM_7f9d = 0;
          BANK0_R0 = bVar6;
        }
        else {
          DAT_INTMEM_50 = 0x20;
          DAT_INTMEM_51 = 0x1d;
          BANK0_R2 = bVar4;
          FUN_CODE_044f(0xca00,DAT_EXTMEM_ca9f);
          DAT_EXTMEM_ca0c = 1;
          DAT_EXTMEM_ca61 = 0xf;
          cVar3 = '\x01';
        }
      }
      else {
        cVar3 = '\x01';
        DAT_EXTMEM_ca0c = 1;
        DAT_EXTMEM_ca61 = 0xf;
        BANK0_R0 = bVar6;
      }
      DAT_EXTMEM_7f77 = '\0';
      if (DAT_EXTMEM_7fb6 == '\0' && cVar3 == '\0') {
        DAT_EXTMEM_7fa0 = '\0';
        BANK0_R2 = bVar4;
        FUN_CODE_42b8(DAT_EXTMEM_7fb6 == '\0');
      }
      uVar8 = 0x7f76;
      DAT_EXTMEM_7f76 = '\0';
    }
    DAT_INTMEM_48 = 0x35;
    DAT_INTMEM_49 = -0x34;
    DAT_INTMEM_4a = 0;
    BANK0_R2 = bVar4;
    if ((DAT_INTMEM_47 >> 2 & 1) == 1) {
      DAT_INTMEM_50 = 0x20;
      DAT_INTMEM_51 = 6;
      FUN_CODE_044f(uVar8 & 0xff00);
      BANK0_R2 = bVar4;
      bVar4 = FUN_CODE_67d0(CONCAT11(DAT_INTMEM_49,DAT_INTMEM_48),DAT_INTMEM_4a);
      DAT_INTMEM_4b = bVar4 & 7;
      DAT_INTMEM_4c = bVar4 & 0x18;
      cVar3 = FUN_CODE_67d0(CONCAT11(DAT_INTMEM_49 - (((0xfe < DAT_INTMEM_48) << 7) >> 7),
                                     DAT_INTMEM_48 + 1),DAT_INTMEM_4a);
      uVar8 = CONCAT11(DAT_INTMEM_49 - (((0xfd < DAT_INTMEM_48) << 7) >> 7),DAT_INTMEM_48 + 2);
      uVar5 = FUN_CODE_67d0(uVar8,DAT_INTMEM_4a);
      if (BANK0_R7 < 0x10) {
                    /* WARNING: Could not recover jumptable at 0x5f8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ushort)(byte)(cVar3 * '\x03') + 0x5f90))(uVar5);
        return;
      }
    }
  } while( true );
  while( true ) {
    FUN_CODE_07f4(bVar4);
    if ((char)uVar8 == '\x01') goto LAB_CODE_488a;
    if ((char)uVar8 == '\x02') break;
LAB_CODE_4fe8:
    DAT_EXTMEM_7fed = DAT_EXTMEM_d80d & 7;
    uVar8 = 0x7fed;
    BANK0_R3 = BANK0_R3 & 7;
    bVar4 = DAT_EXTMEM_7fed;
    if ((DAT_EXTMEM_7fed == 7) && (uVar8 = 0xd4cc, bVar4 = bEXTMEMd4cc, (bEXTMEMd4cc & 1) == 1))
    goto LAB_CODE_5025;
  }
  BANK0_R3 = BANK0_R3 | 4;
  goto LAB_CODE_4e4a;
LAB_CODE_5025:
  while (bEXTMEMcc9b == 1) {
    DAT_INTMEM_50 = 0x20;
    DAT_INTMEM_51 = 0x42;
    FUN_CODE_044f(0xcc00);
  }
  FUN_CODE_1465();
  DAT_EXTMEM_cc0b = 0;
  DAT_EXTMEM_7fe5 = 0;
  do {
    BANK0_R3 = BANK0_R3 & 0xf0;
    uVar8 = 0xd868;
    BANK0_R4 = BANK0_R4 & 0xf0;
    if (bEXTMEMd819 == BANK0_R4) {
      FUN_CODE_15c1();
      FUN_CODE_1403();
      BANK0_R3 = BANK0_R3 & 0xf0;
      DAT_EXTMEM_7fed = ~DAT_EXTMEM_d804 >> 4;
      DAT_EXTMEM_cc0b = 0;
      DAT_EXTMEM_7fe5 = 0;
      goto LAB_CODE_50b3;
    }
    FUN_CODE_07f4(DAT_EXTMEM_d868);
    if ((char)uVar8 == '\x01') goto LAB_CODE_488a;
  } while ((char)uVar8 != '\x02');
  FUN_CODE_15c1();
  BANK0_R3 = BANK0_R3 | 8;
  goto LAB_CODE_4e4a;
LAB_CODE_50b3:
  BANK0_R3 = BANK0_R3 & DAT_EXTMEM_7fed;
  uVar8 = 0x7fed;
  if (bEXTMEMd84e != BANK0_R4) {
    FUN_CODE_07f4(DAT_EXTMEM_7fed);
    if ((char)uVar8 == '\x01') goto LAB_CODE_488a;
    if ((char)uVar8 == '\x02') goto code_c0x50d7;
    goto LAB_CODE_50b3;
  }
  if (((bCODE00a6 >> 1 & 1) != 1) && (DAT_EXTMEM_7eaa == '\0')) {
    do {
    } while( true );
  }
  if ((bCODE00a9 >> 4 & 1) != 0) {
    FUN_CODE_04d0(bCODE00a9);
  }
  while (bEXTMEMcc9b == 2) {
    DAT_INTMEM_50 = 0x20;
    DAT_INTMEM_51 = 0x43;
    FUN_CODE_044f(0xcc00);
  }
  DAT_INTMEM_50 = 2;
  DAT_INTMEM_51 = 0x26;
  FUN_CODE_044f(0xcc00);
  DAT_EXTMEM_cc0b = 0;
  DAT_EXTMEM_7fe5 = 0;
  do {
    DAT_EXTMEM_7fed = DAT_EXTMEM_d80d & 7;
    uVar8 = 0x7fed;
    BANK0_R3 = BANK0_R3 & 7;
    bVar4 = DAT_EXTMEM_7fed;
    if ((DAT_EXTMEM_7fed == 7) && (uVar8 = 0xd4cc, bVar4 = bEXTMEMd4cc, (bEXTMEMd4cc & 1) != 0)) {
      uEXTMEMc80f = 0;
      uVar8 = 0xcc00;
      uEXTMEMcc00 = 0;
      FUN_CODE_226e();
      DAT_INTMEM_50 = 2;
      DAT_INTMEM_51 = 0x27;
      FUN_CODE_044f(uVar8 & 0xff00);
      DAT_EXTMEM_cc0b = 0;
      DAT_EXTMEM_7fe5 = 0;
      goto LAB_CODE_51aa;
    }
    FUN_CODE_07f4(bVar4);
    if ((char)uVar8 == '\x01') goto LAB_CODE_488a;
  } while ((char)uVar8 != '\x02');
  BANK0_R3 = BANK0_R3 | 0x20;
  goto LAB_CODE_4e4a;
code_c0x50d7:
  BANK0_R3 = BANK0_R3 | 0x10;
  goto LAB_CODE_4e4a;
LAB_CODE_51aa:
  DAT_EXTMEM_7fed = bEXTMEMc803 & 0x80;
  uVar8 = 0x7fed;
  if (DAT_EXTMEM_7fed == 0) {
    FUN_CODE_07f4(0);
    if ((char)uVar8 == '\x01') goto LAB_CODE_488a;
    if ((char)uVar8 == '\x02') goto code_c0x51cb;
    goto LAB_CODE_51aa;
  }
  DAT_EXTMEM_cc0b = 0;
  do {
  } while ((BANK0_R4 != 0) << 7 < '\0');
  DAT_EXTMEM_7fed = cEXTMEMd085;
  DAT_INTMEM_50 = 1;
  DAT_INTMEM_51 = 3;
  FUN_CODE_044f(0x7f00,bEXTMEMc849 >> 4);
  DAT_EXTMEM_7fed = bEXTMEMc849;
  while( true ) {
    while (uVar8 = 0xcc9b, bEXTMEMcc9b == 3) {
      DAT_INTMEM_50 = 0x20;
      DAT_INTMEM_51 = 0x44;
      FUN_CODE_044f(0xcc00);
    }
    FUN_CODE_2369();
    if ((char)uVar8 != '\0') goto LAB_CODE_488a;
    bVar1 = (DAT_EXTMEM_7fed & 1) == 0;
    bVar4 = BANK0_R3 & 0xf;
    if (((bVar1 & bEXTMEMc803) != 0) ||
       (bVar1 = (DAT_EXTMEM_7fed & 2) == 0, (bVar1 & bEXTMEMc840) != 0)) break;
    BANK0_R3 = BANK0_R3 & 3;
    bVar1 = (DAT_EXTMEM_7fed & 4) == 0;
    bVar4 = BANK0_R3;
    if (((bVar1 & bEXTMEMc841) != 0) ||
       (bVar1 = (DAT_EXTMEM_7fed & 8) == 0, bVar1 && cEXTMEMd085 != '?')) break;
  }
  BANK0_R3 = bVar4;
  FUN_CODE_270e(bVar1);
  BANK0_R3 = BANK0_R3 | 0x80;
  goto LAB_CODE_4e4a;
code_c0x51cb:
  BANK0_R3 = BANK0_R3 | 0x40;
  goto LAB_CODE_4e4a;
}



/* =========================================================
 * CODE:67cd  thunk_FUN_CODE_4868  size=3
 * callers: CODE:0203
 * ========================================================= */

/* WARNING: Removing unreachable block (CODE,0x50a2) */
/* WARNING: Removing unreachable block (CODE,0x576b) */
/* WARNING: Removing unreachable block (CODE,0x6438) */

void thunk_FUN_CODE_4868(void)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  undefined1 uVar5;
  byte bVar6;
  byte bVar7;
  ushort uVar8;
  undefined2 uVar9;
  
  DAT_INTMEM_4d = '\0';
  DAT_EXTMEM_7fe6 = '\0';
  cEXTMEMcc99 = '\0';
  uVar8 = 0xcc18;
  uEXTMEMcc18 = 6;
LAB_CODE_488a:
  do {
    while( true ) {
      while( true ) {
        DAT_INTMEM_50 = 1;
        DAT_INTMEM_51 = 1;
        FUN_CODE_044f(uVar8 & 0xff00);
        if ((bCODE00a7 & 1) != 0) {
          FUN_CODE_05db(0,bCODE00a7);
        }
        cEXTMEMcc99 = cEXTMEMcc99 + '\x01';
        BANK0_R3 = BANK0_R3 & 0xfe;
        DAT_EXTMEM_d815 = 0;
        while ((((bEXTMEMc84b & 1) != 0 && (uVar8 = 0xcc9b, bVar2 = bEXTMEMcc9b, bEXTMEMcc9b < 10))
               || (uVar8 = 0xc808, bVar2 = DAT_EXTMEM_c808, (DAT_EXTMEM_c808 & 1) != 0))) {
          DAT_INTMEM_50 = 0x20;
          DAT_INTMEM_51 = 0x40;
          FUN_CODE_044f(uVar8 & 0xff00,bVar2);
        }
        if ((bEXTMEMd86a >> 4 & 1) != 0) {
          uEXTMEMca10 = 3;
          uEXTMEMca15 = 0x20;
          uEXTMEMca14 = 7;
        }
        if ((bCODE00a6 >> 6 & 1) != 0) {
          uEXTMEMca18 = uCODE00aa;
          uEXTMEMca19 = 0xff;
        }
        uEXTMEMcc0c = 199;
        DAT_EXTMEM_cc0b = 0;
        DAT_EXTMEM_c804 = 0;
        DAT_EXTMEM_c84a = '\x02';
        if ((bEXTMEMd86a >> 3 & 1) == 0) {
          uEXTMEMc8a0 = 0xe;
        }
        else {
          uEXTMEMd8a0 = 0xd;
        }
        uEXTMEMd835 = 2;
        BANK0_R3 = BANK0_R3 & 0xfc;
        DAT_INTMEM_50 = 0x20;
        DAT_INTMEM_51 = 1;
        FUN_CODE_044f(0xc800);
        DAT_EXTMEM_7f84 = DAT_EXTMEM_c801 & 0x80;
        if (DAT_EXTMEM_7f84 == 0) {
          uEXTMEMd254 = 0xff;
          uEXTMEMd255 = 0xff;
          BANK0_R3 = BANK0_R3 & 0xdf;
          uEXTMEMd238 = 4;
        }
        DAT_EXTMEM_7fa4 = bEXTMEMcc8e & 4;
        DAT_EXTMEM_7f94 = uEXTMEMcc8c;
        uEXTMEM7f95 = uEXTMEMcc8d;
        DAT_EXTMEM_7f96 = uEXTMEMc828;
        uEXTMEM7f97 = uEXTMEMc829;
        uEXTMEM7f98 = uEXTMEMc82a;
        if (cEXTMEMcc92 == '\0') {
          DAT_EXTMEM_7fa6 = '\x02';
        }
        else {
          BANK0_R3 = BANK0_R3 & 0x7f;
          DAT_EXTMEM_7fa6 = cEXTMEMcc92;
        }
        DAT_EXTMEM_7fa5 = uEXTMEMcc91;
        uEXTMEMcc93 = 6;
        if ((DAT_EXTMEM_7f84 != 0) && ((bEXTMEMc84b >> 3 & 1) != 1)) {
          BANK0_R3 = BANK0_R3 & 0xfb;
        }
        BANK0_R3 = BANK0_R3 & 0xb;
        if ((bCODE00a9 >> 6 & 1) == 0) {
          bEXTMEMd609 = bCODE00a9;
          if ((char)bCODE00a9 < '\0') {
            BANK0_R3 = 0x23;
          }
          else {
            BANK0_R3 = 3;
          }
        }
        else {
          bEXTMEMd609 = 2;
        }
        if ((bCODE00a9 >> 6 & 1) == 0) {
          bEXTMEMd689 = bCODE00a9;
          if ((char)bCODE00a9 < '\0') {
            BANK0_R3 = 0x23;
          }
          else {
            BANK0_R3 = 3;
          }
        }
        else {
          bEXTMEMd689 = 2;
        }
        if ((bCODE00a9 >> 6 & 1) == 0) {
          bEXTMEMd709 = bCODE00a9;
          if ((char)bCODE00a9 < '\0') {
            BANK0_R3 = 0x23;
          }
          else {
            BANK0_R3 = 3;
          }
        }
        else {
          bEXTMEMd709 = 2;
        }
        if ((bCODE00a9 >> 6 & 1) == 0) {
          bEXTMEMd789 = bCODE00a9;
          if ((char)bCODE00a9 < '\0') {
            BANK0_R3 = 0x23;
          }
          else {
            BANK0_R3 = 3;
          }
        }
        else {
          bEXTMEMd789 = 2;
        }
        if ((char)bCODE00a9 < '\0') {
          uEXTMEMd606 = 2;
          uEXTMEMd686 = 2;
          uEXTMEMd706 = 2;
          uEXTMEMd786 = 2;
        }
        BANK0_R3 = BANK0_R3 & 0xfd | 1;
        bEXTMEMd830 = 1;
        DAT_INTMEM_50 = 0x10;
        DAT_INTMEM_51 = 0x70;
        FUN_CODE_044f(0xd800);
        DAT_EXTMEM_cc0b = 0;
        do {
        } while ((bEXTMEMd830 >> 1 & 1) != 1);
        BANK0_R3 = BANK0_R3 & 0x1c;
        if (DAT_EXTMEM_c850 != 1) break;
        BANK0_R3 = 0;
        uVar8 = 0xd830;
        FUN_CODE_270e();
      }
      uVar8 = 0xd86d;
      FUN_CODE_1603();
      if ((char)uVar8 == '\0') break;
      FUN_CODE_270e();
    }
    BANK0_R3 = BANK0_R3 & 0xfe;
    DAT_EXTMEM_7f7d = '\x10';
    FUN_CODE_0cfa(0x7f01);
    uEXTMEMd802 = 2;
    uEXTMEMce06 = 0x10;
    uEXTMEMd801 = 0x81;
    uEXTMEMd803 = 0xf0;
    bEXTMEMd830 = 0;
    DAT_EXTMEM_7f7e = 4;
    FUN_CODE_2820(0x7f00);
    uVar8 = 0x7fe6;
    if (DAT_EXTMEM_7fe6 == '\0') {
      FUN_CODE_1ac6(0);
      uVar8 = uVar8 & 0xff00;
      FUN_CODE_1b66();
      if ((char)uVar8 == '\0') {
        uEXTMEMd84f = 0;
        uVar8 = 0xd802;
        FUN_CODE_1b66();
        if ((char)uVar8 == '\0') {
          FUN_CODE_1f1a();
          goto LAB_CODE_4c29;
        }
        FUN_CODE_270e();
      }
      else {
        FUN_CODE_270e();
      }
      goto LAB_CODE_488a;
    }
LAB_CODE_4c29:
    DAT_EXTMEM_7fe6 = '\x01';
    uEXTMEMd850 = 0xf;
    uEXTMEMd852 = 0x1f;
    uEXTMEMd853 = 0xff;
    DAT_EXTMEM_7fe1 = cEXTMEMd607;
    DAT_EXTMEM_7fe2 = bEXTMEMd687;
    DAT_EXTMEM_7fe3 = cEXTMEMd707;
    DAT_EXTMEM_7fe4 = bEXTMEMd787;
    uEXTMEMd801 = 0;
    uEXTMEMd810 = 0xff;
    bEXTMEMd80b = 0;
    uEXTMEMd80a = 0;
    DAT_EXTMEM_d804 = 0;
    uEXTMEMd85d = 0xac;
    uEXTMEMd85e = 0xd;
    DAT_INTMEM_50 = 1;
    DAT_INTMEM_51 = 0x1e;
    FUN_CODE_044f(0xd800);
    DAT_EXTMEM_cc0b = 0;
    cEXTMEMcc90 = '\0';
    while ((bEXTMEMcc07 & 1) == 1) {
      if (((bCODE00a7 >> 4 & 1) != 0) && (DAT_EXTMEM_7f84 == 0)) {
        DAT_INTMEM_50 = 0x20;
        DAT_INTMEM_51 = 0x53;
        FUN_CODE_044f(0x7f00,0);
        uEXTMEMd254 = 0xff;
        uEXTMEMd255 = 0xff;
        BANK0_R3 = BANK0_R3 & 0xdf;
        uEXTMEMd238 = 4;
      }
      if (BANK0_R4 <= DAT_EXTMEM_cc0b) {
        cEXTMEMcc90 = cEXTMEMcc90 + '\x01';
        DAT_EXTMEM_cc0b = 0;
        if (cEXTMEMcc90 == '\n') {
          BANK0_R3 = BANK0_R3 & 0xfb;
        }
        if ((cEXTMEMcc90 == 'd') && ((bCODE00a7 & 1) == 1)) {
          FUN_CODE_05db(0xff,bCODE00a7,uEXTMEMc848);
        }
      }
    }
    DAT_INTMEM_50 = 1;
    DAT_INTMEM_51 = 0x2c;
    FUN_CODE_044f(0xcc00,bEXTMEMcc07);
    if ((bCODE00a7 & 1) != 0) {
      FUN_CODE_05db(0,bCODE00a7);
    }
    if ((char)bCODE00a7 < '\0') {
      FUN_CODE_056c(bCODE00a7);
    }
    while ((((bEXTMEMc84b & 1) != 0 && (uVar8 = 0xcc9b, bVar2 = bEXTMEMcc9b, bEXTMEMcc9b < 0xb)) ||
           (uVar8 = 0xc808, bVar2 = DAT_EXTMEM_c808, (DAT_EXTMEM_c808 & 1) != 0))) {
      DAT_INTMEM_50 = 0x20;
      DAT_INTMEM_51 = 0x41;
      FUN_CODE_044f(uVar8 & 0xff00,bVar2);
    }
    DAT_EXTMEM_7f7d = '\0';
    DAT_EXTMEM_7ffc = 0;
    DAT_EXTMEM_7fbe = '\0';
    DAT_EXTMEM_7fbf = '\0';
    DAT_EXTMEM_7fbd = '\0';
    DAT_EXTMEM_7fb5 = '\0';
    DAT_EXTMEM_7fb4 = '\0';
    DAT_EXTMEM_7eb9 = '\0';
    DAT_EXTMEM_7fab = 0;
    DAT_EXTMEM_7fa9 = 0;
    DAT_EXTMEM_7faa = 0;
    DAT_EXTMEM_7fb3 = 0;
    BANK0_R3 = BANK0_R3 | 2;
    if ((DAT_EXTMEM_c800 & 1) == 1) {
      DAT_EXTMEM_cc0b = 0;
      DAT_INTMEM_50 = 1;
      DAT_INTMEM_51 = 2;
      FUN_CODE_044f(0xcc00,DAT_EXTMEM_c800);
      if (DAT_INTMEM_4d == '\0') {
        if ((bEXTMEMc84b >> 2 & 1) == 1) {
          DAT_INTMEM_50 = 0xeb;
          FUN_CODE_2389(0xc801,bEXTMEMc84b);
        }
        else {
          DAT_INTMEM_50 = uEXTMEMc848;
          FUN_CODE_2389(0xc801,bEXTMEMc84b);
        }
      }
      DAT_INTMEM_4d = '\x01';
      uEXTMEMcc0c = 99;
      DAT_EXTMEM_c804 = 0x80;
      uEXTMEMca5a = 0;
      BANK0_R3 = BANK0_R3 | 4;
      DAT_EXTMEM_7f7e = 4;
      uEXTMEMd836 = 8;
      FUN_CODE_11e5();
      bEXTMEMcc95 = 0;
      uEXTMEMcc96 = 0;
LAB_CODE_4e4a:
      do {
        FUN_CODE_2242();
        bEXTMEMcc95 = bEXTMEMcc95 + 1;
        if (((bCODE00a6 >> 2 & 1) != 1) && ((bEXTMEMcc95 & 0xf) == 0)) {
          FUN_CODE_0860(bEXTMEMcc95);
        }
        DAT_EXTMEM_d602 = 0x10;
        DAT_EXTMEM_d603 = 0x2b;
        DAT_EXTMEM_d682 = 0x10;
        DAT_EXTMEM_d683 = 0x2b;
        DAT_EXTMEM_d702 = 0x10;
        DAT_EXTMEM_d703 = 0x2b;
        DAT_EXTMEM_d782 = 0x10;
        DAT_EXTMEM_d783 = 0x2b;
        DAT_INTMEM_50 = 2;
        DAT_INTMEM_51 = 0x25;
        FUN_CODE_044f(0xd700);
        uEXTMEMd40f = 3;
        BANK0_R3 = BANK0_R3 & 0xfe;
        DAT_EXTMEM_cc0b = 0;
        DAT_EXTMEM_7fe5 = 0;
        do {
          uVar8 = 0xd4cc;
          if ((bEXTMEMd4cc & 1) == 1) {
            if (((bEXTMEMd4cc >> 1 & 1) == 0) || (cEXTMEMd4b6 != '\x06')) {
              BANK0_R3 = BANK0_R3 | 2;
              goto LAB_CODE_4e4a;
            }
            FUN_CODE_129a();
            if (((DAT_EXTMEM_d4b5 < 9) << 7 < '\0') ||
               ((DAT_EXTMEM_d4b5 == 9 && (DAT_EXTMEM_d4b4 < 0xc4)))) {
              uEXTMEMd60c = 2;
              uEXTMEMd68c = 2;
              uEXTMEMd70c = 2;
              uEXTMEMd78c = 2;
            }
            else if (((DAT_EXTMEM_d4b5 < 0x13) << 7 < '\0') ||
                    ((DAT_EXTMEM_d4b5 == 0x13 && (DAT_EXTMEM_d4b4 < 0x88)))) {
              uEXTMEMd60c = 1;
              uEXTMEMd68c = 1;
              uEXTMEMd70c = 1;
              uEXTMEMd78c = 1;
            }
            else {
              uEXTMEMd60c = 0;
              uEXTMEMd68c = 0;
              uEXTMEMd70c = 0;
              uEXTMEMd78c = 0;
            }
            uVar8 = 0xd707;
            FUN_CODE_2820(0xd707);
            DAT_INTMEM_50 = 2;
            DAT_INTMEM_51 = 0x14;
            uVar8 = uVar8 & 0xff00;
            FUN_CODE_044f(uVar8);
            DAT_INTMEM_50 = 2;
            DAT_INTMEM_51 = 0x68;
            FUN_CODE_044f(uVar8 & 0xff00);
            DAT_INTMEM_50 = 2;
            DAT_INTMEM_51 = 2;
            FUN_CODE_044f(1);
            DAT_INTMEM_51 = DAT_EXTMEM_d4b5;
            DAT_INTMEM_50 = 2;
            FUN_CODE_044f(0xd401);
            DAT_INTMEM_51 = DAT_EXTMEM_d4b4;
            DAT_INTMEM_50 = 2;
            FUN_CODE_044f(0xd401);
            DAT_EXTMEM_cc0b = 0;
            DAT_EXTMEM_7fe5 = 0;
            goto LAB_CODE_4fe8;
          }
          FUN_CODE_07f4(bEXTMEMd4cc);
          if ((char)uVar8 == '\x01') goto LAB_CODE_488a;
        } while ((char)uVar8 != '\x02');
        BANK0_R3 = BANK0_R3 | 1;
      } while( true );
    }
    DAT_INTMEM_4d = '\0';
    if ((bCODE00a7 >> 5 & 1) == 1) {
      BANK1_R2 = 0;
      BANK1_R3 = '\0';
      BANK1_R4 = 0;
      BANK1_R5 = 0;
      FUN_CODE_26be(0xc,bCODE00a7);
      bEXTMEMcc09 = 0;
      do {
        if ((bEXTMEMcc07 >> 2 & 1) == 1) break;
      } while (BANK0_R3 < 0xf1);
      if (BANK0_R3 < 0xf1) {
        DAT_INTMEM_50 = 0x20;
        DAT_INTMEM_51 = 6;
        FUN_CODE_044f(0xcc00,0);
        DAT_INTMEM_48 = 0x35;
        DAT_INTMEM_49 = -0x34;
        DAT_INTMEM_4a = 0;
        cVar4 = FUN_CODE_67d0(0xcc37,0);
        uVar5 = cVar4 != '\0';
        cVar4 = FUN_CODE_67d0(CONCAT11(DAT_INTMEM_49 - (((0xfe < DAT_INTMEM_48) << 7) >> 7),
                                       DAT_INTMEM_48 + 1),DAT_INTMEM_4a);
        BANK0_R7 = BANK0_R7 & 0xf;
        if (cVar4 == '\f') {
          DAT_EXTMEM_0120 = uVar5;
        }
      }
      else {
        DAT_EXTMEM_0120 = 0;
      }
    }
    BANK0_R0 = BANK0_R0 & 0xfb;
    DAT_INTMEM_50 = uEXTMEMc848;
    FUN_CODE_2389(CONCAT11(200,uEXTMEMc848));
    bVar2 = BANK0_R0;
    BANK0_R0 = BANK0_R0 | 4;
    DAT_EXTMEM_7fb6 = '\0';
    uVar5 = 0x7f;
    bVar3 = DAT_EXTMEM_7f84;
    if (DAT_EXTMEM_7f84 == 0) {
      uVar5 = 0xd2;
      BANK0_R0 = bVar2 & 0xf | 4;
      bVar3 = DAT_EXTMEM_d25c;
      if (2 < BANK0_R0) goto LAB_CODE_53a2;
    }
    else {
LAB_CODE_53a2:
      BANK1_R2 = 0;
      BANK1_R3 = '\0';
      BANK1_R4 = 0;
      BANK1_R5 = 0;
      FUN_CODE_26be(CONCAT11(uVar5,9),bVar3);
      bEXTMEMcc09 = 0;
      do {
        if ((bEXTMEMcc07 >> 2 & 1) == 1) break;
      } while (BANK0_R0 < 0xf1);
      if (BANK0_R0 < 0xf1) {
        DAT_INTMEM_48 = 0x35;
        DAT_INTMEM_49 = -0x34;
        DAT_INTMEM_4a = 0;
        bVar2 = FUN_CODE_67d0(0xcc36,0);
        if ((bVar2 & 0xf) == 9) {
          cVar4 = FUN_CODE_67d0(CONCAT11(DAT_INTMEM_49 - (((0xfd < DAT_INTMEM_48) << 7) >> 7),
                                         DAT_INTMEM_48 + 2),DAT_INTMEM_4a);
          DAT_EXTMEM_7fe7 = cVar4 != '\0';
        }
        else {
          DAT_EXTMEM_7fe7 = 0;
        }
      }
      else {
        DAT_EXTMEM_7fe7 = 0;
      }
    }
    BANK0_R2 = BANK0_R2 | 0x80;
    uEXTMEMcc0c = 99;
    uEXTMEMca5a = 0;
    DAT_INTMEM_50 = 1;
    DAT_INTMEM_51 = 4;
    uVar5 = 0xca;
    FUN_CODE_044f(0xca00);
    BANK1_R2 = 0;
    BANK1_R3 = '\0';
    BANK1_R4 = 0;
    BANK1_R5 = 1;
    FUN_CODE_26be(CONCAT11(uVar5,8));
    if (DAT_EXTMEM_7f84 == 0) {
      bVar2 = BANK0_R2;
      if ((((bEXTMEMd252 >> 5 & 1) != 1) && ((bEXTMEMd218 & 1) != 0)) &&
         (bVar2 = BANK0_R2 & 0xf, 1 < (BANK0_R2 & 0xf))) {
        bVar2 = BANK0_R2 & 0xb;
      }
      BANK0_R2 = bVar2;
      if ((DAT_EXTMEM_d25c & 0xf) == 0) {
        BANK0_R2 = BANK0_R2 | 0x40;
      }
      else {
        BANK0_R2 = BANK0_R2 & 0xbf;
      }
      bVar2 = DAT_EXTMEM_d25d & 0xf;
      FUN_CODE_22d9();
      if (((bEXTMEMd252 >> 5 & 1) == 1) ||
         ((((DAT_EXTMEM_d25c & 0xf) != 0 || ((bEXTMEMd252 >> 3 & 1) != 1)) &&
          (((DAT_EXTMEM_d25c & 0xf) == 0 || ((bEXTMEMd252 >> 2 & 1) == 0)))))) {
        DAT_EXTMEM_7ffc = false;
      }
      else {
        DAT_EXTMEM_7ffc = true;
        if ((char)DAT_EXTMEM_d25d < '\0') {
          uEXTMEMcaa5 = 2;
        }
      }
      DAT_EXTMEM_7f7f = bVar2;
      if ((DAT_EXTMEM_d25c & 0xf) == 0) {
        DAT_EXTMEM_caa3 = 0;
      }
      else {
        DAT_EXTMEM_caa3 = 7;
        BANK0_R2 = BANK0_R2 | 0x20;
      }
    }
    else {
      DAT_EXTMEM_7f7f = 0x10;
      BANK0_R2 = BANK0_R2 & 8;
      DAT_EXTMEM_7ffc = bEXTMEMc84b == 0;
      uEXTMEMcaa5 = 2;
    }
    BANK0_R2 = BANK0_R2 | 0xd1;
    if (((bool)DAT_EXTMEM_7ffc != false) &&
       (BANK0_R2 = BANK0_R2 & 0xfe | 0x78, DAT_EXTMEM_7f84 == 0)) {
      bEXTMEMd208 = bEXTMEMd208 & 0xf7 | 4;
    }
    bVar3 = BANK0_R2;
    DAT_EXTMEM_7fa2 = '\0';
    DAT_EXTMEM_7f76 = '\0';
    DAT_EXTMEM_7f77 = '\0';
    DAT_EXTMEM_7f78 = '\0';
    DAT_EXTMEM_7f79 = '\0';
    DAT_EXTMEM_7f7a = '\0';
    DAT_EXTMEM_7f7b = 0;
    uEXTMEM7f83 = 0;
    uEXTMEM7f82 = 0;
    uEXTMEM7f81 = 0;
    DAT_EXTMEM_7f80 = 0;
    DAT_EXTMEM_7ffa = '\0';
    DAT_EXTMEM_7f86 = 0;
    DAT_EXTMEM_7f87 = '\0';
    DAT_EXTMEM_7f7e = 0;
    DAT_EXTMEM_7f7c = 0;
    uEXTMEM7f8f = 0;
    DAT_EXTMEM_7f8e = 0;
    uEXTMEM7f91 = 0;
    DAT_EXTMEM_7f90 = 0;
    DAT_EXTMEM_7f92 = 0;
    DAT_EXTMEM_7f93 = 0xe7;
    bVar2 = 0xe7;
    DAT_EXTMEM_7f99 = 0;
    DAT_EXTMEM_7f9a = 0;
    DAT_EXTMEM_7f9b = 0;
    DAT_EXTMEM_7f9d = 0;
    DAT_EXTMEM_7f9c = 0;
    DAT_EXTMEM_7f85 = 0;
    DAT_EXTMEM_7f9e = 0;
    DAT_EXTMEM_7f9f = '\0';
    DAT_EXTMEM_7fa0 = '\0';
    DAT_EXTMEM_7fa1 = 0;
    DAT_EXTMEM_7fbc = '\0';
    DAT_EXTMEM_7fe0 = '\0';
    DAT_EXTMEM_7fa3 = '\0';
    DAT_EXTMEM_7fb8 = '\0';
    DAT_EXTMEM_7fec = 0;
    BANK1_R0 = '\0';
    BANK1_R1 = '\0';
    DAT_EXTMEM_7ff2 = 0;
    DAT_EXTMEM_7ff3 = '\0';
    DAT_EXTMEM_7ff4 = '\0';
    DAT_EXTMEM_7ffb = '\0';
    DAT_EXTMEM_7ff9 = 0;
    DAT_EXTMEM_7fff = 0;
    DAT_EXTMEM_7ff1 = 0;
    DAT_EXTMEM_7fdd = 0;
    DAT_EXTMEM_7fb7 = 0;
    DAT_EXTMEM_7eab = 0;
    DAT_EXTMEM_7eac = 0;
    DAT_EXTMEM_7ead = 0;
    DAT_EXTMEM_7ea6 = 0;
    DAT_EXTMEM_7ea7 = '\0';
    FUN_CODE_1f5c();
    DAT_EXTMEM_7fb9 = DAT_EXTMEM_c84a == '\0';
    DAT_EXTMEM_7fba = DAT_EXTMEM_c84a == '\0';
    BANK0_R0 = 0;
    DAT_EXTMEM_7fbb = DAT_EXTMEM_c84a != '\0';
    DAT_EXTMEM_7f75 = bEXTMEMcc8e & 1;
    BANK0_R2 = bVar3;
    if (DAT_EXTMEM_7f75 == 0) {
      DAT_EXTMEM_caa9 = 0;
    }
    else {
      DAT_EXTMEM_caa9 = 0xff;
    }
LAB_CODE_5707:
    while (bVar3 = BANK0_R2, uVar8 = 0xcc9b, bEXTMEMcc9b == 1) {
      bVar6 = 1;
LAB_CODE_5719:
      DAT_INTMEM_50 = 0x20;
      DAT_INTMEM_51 = 0x45;
      FUN_CODE_044f(uVar8 & 0xff00,bVar6);
      BANK0_R2 = bVar3;
    }
    uVar8 = 0xc808;
    bVar6 = DAT_EXTMEM_c808;
    if ((DAT_EXTMEM_c808 & 1) != 0) goto LAB_CODE_5719;
    DAT_INTMEM_47 = DAT_EXTMEM_7f93 & bEXTMEMcc07 & bVar2;
    bEXTMEM7ffd = DAT_EXTMEM_ca40;
    bEXTMEM7ffe = DAT_EXTMEM_ca41;
    BANK0_R1 = BANK0_R1 & 0xf0;
    DAT_EXTMEM_7fed = ~DAT_EXTMEM_d804 >> 4;
    bVar2 = DAT_EXTMEM_7f93;
    if ((DAT_EXTMEM_7fb4 != '\0') &&
       (BANK0_R0 = BANK0_R0 & DAT_EXTMEM_7fed, bEXTMEMd84e == BANK0_R1)) {
      if (((bCODE00a6 >> 1 & 1) == 0) && (DAT_EXTMEM_7eaa == '\0')) {
        DAT_EXTMEM_7eb8 = DAT_EXTMEM_7eb8 + '\x01';
        if (((2 < BANK0_R0) << 7 < '\0') && (BANK0_R0 < 6)) {
                    /* WARNING: Could not recover jumptable at 0x57d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ushort)(byte)(DAT_EXTMEM_7eb9 * '\x03') + 0x57d7))(DAT_EXTMEM_7fed);
          return;
        }
      }
      else {
        DAT_EXTMEM_7fb4 = '\0';
        DAT_EXTMEM_7fed = DAT_EXTMEM_d804 & 0xf;
        uEXTMEMcc00 = 0;
        DAT_EXTMEM_7fab = 1;
        DAT_EXTMEM_7fa9 = 1;
        DAT_EXTMEM_7faa = 0;
        BANK1_R2 = DAT_EXTMEM_7f7e;
        BANK1_R3 = DAT_EXTMEM_7f7d;
        BANK1_R4 = DAT_EXTMEM_7f7c;
        BANK1_R5 = 0;
        bEXTMEMd80b = DAT_EXTMEM_7fed;
        FUN_CODE_26be(0x7f01);
        if ((bCODE00a9 >> 4 & 1) != 0) {
          BANK0_R2 = bVar3;
          FUN_CODE_04d0(bCODE00a9);
        }
      }
    }
    if (DAT_EXTMEM_7fb5 != '\0') {
      BANK0_R0 = BANK0_R0 & 0xf0;
      bVar2 = ~DAT_EXTMEM_d804 & 0xf0 & bEXTMEMd819;
      DAT_INTMEM_4e = ~DAT_EXTMEM_d804 & 0xf0;
      DAT_INTMEM_4f = 0;
      DAT_EXTMEM_7fed = bVar2;
      if (bVar2 == DAT_INTMEM_4e) {
        BANK0_R2 = bVar3;
        FUN_CODE_15c1(0xff);
      }
    }
    uVar8 = 0x7fbe;
    if (DAT_EXTMEM_7fbe != '\0') {
      if ((bCODE00ac != 0) && (DAT_EXTMEM_7ea7 == '\0')) {
        DAT_EXTMEM_7ea7 = '\x01';
      }
      if (DAT_EXTMEM_7ea7 != '\0') {
        DAT_EXTMEM_7ea6 = DAT_EXTMEM_7ea6 + 1;
      }
      if ((DAT_EXTMEM_7f9d == 0) && (DAT_EXTMEM_7f78 == '\0')) {
        uVar5 = 0x7f;
        bVar6 = 0;
        if (DAT_EXTMEM_7fbd != '\0') goto LAB_CODE_5a6d;
      }
      else {
LAB_CODE_5a6d:
        uVar5 = 0;
        bVar6 = bCODE00ab;
        if ((bCODE00ab >> 6 & 1) != 1) {
          uVar8 = 0;
          uVar5 = 0;
          bVar6 = DAT_EXTMEM_7ea6;
          if (BANK0_R0 <= bCODE00ac) goto LAB_CODE_5aa1;
        }
      }
      BANK0_R2 = bVar3;
      FUN_CODE_421d(CONCAT11(uVar5,0x46),bVar6);
      DAT_EXTMEM_7fbe = '\0';
      bEXTMEMcc09 = 0;
      DAT_EXTMEM_7ea7 = '\0';
      uVar8 = 0x7ea6;
      DAT_EXTMEM_7ea6 = 0;
    }
LAB_CODE_5aa1:
    if ((DAT_INTMEM_47 == 0) && (uVar8 = 0x7ffd, bEXTMEM7ffd == 0)) {
      if ((DAT_EXTMEM_7fa3 != '\0') && ((DAT_EXTMEM_7fa2 == '\x03' || (DAT_EXTMEM_7fa2 == '\x04'))))
      {
        DAT_INTMEM_50 = 4;
        DAT_INTMEM_51 = 0x1b;
        BANK0_R2 = bVar3;
        FUN_CODE_044f(0x7f00,0);
        if (DAT_EXTMEM_7f87 != '\0') {
          DAT_EXTMEM_7fe1 = '\x01';
          DAT_EXTMEM_7fe2 = '\x01';
          DAT_EXTMEM_7fe3 = '\x01';
          DAT_EXTMEM_7fe4 = '\x01';
          DAT_EXTMEM_7ffa = '\x01';
          for (bVar6 = 0; bVar6 < BANK0_R4; bVar6 = bVar6 + 1) {
            BANK0_R6 = BANK0_R6 & 4;
            *(bool *)CONCAT11('\x7f' - (((0x1e < bVar6) << 7) >> 7),bVar6 - 0x1f) =
                 *(char *)CONCAT11('\x7f' - (((0x7f < bVar6) << 7) >> 7),bVar6 + 0x80) != '\0';
          }
          if ((DAT_EXTMEM_7fe1 == '\0') || (DAT_EXTMEM_7fe2 == '\0')) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if ((bVar1) && (DAT_EXTMEM_7fe3 != '\0')) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          if ((bVar1) && (DAT_EXTMEM_7fe4 != '\0')) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          if (DAT_EXTMEM_7f7d == '\x10') {
            bVar6 = 2;
          }
          else {
            bVar6 = DAT_EXTMEM_7f7d == '\b';
          }
          bVar7 = DAT_EXTMEM_7f80 & 3;
          bVar6 = *(byte *)CONCAT11('\x7f' - (((0x69 < bVar6) << 7) >> 7),bVar6 + 0x96) & 3;
          if (((bVar7 < BANK0_R3) && (bVar1)) || (bVar6 == BANK0_R4)) {
            DAT_EXTMEM_7f9a = bVar7 << 4 | bVar7;
          }
          else {
            DAT_EXTMEM_7ffa = '\0';
            DAT_EXTMEM_7f9a = bVar6 << 4 | bVar6;
          }
          DAT_EXTMEM_7fe1 = '\x01';
          DAT_EXTMEM_7fe2 = 1;
          DAT_EXTMEM_7fe3 = '\x01';
          DAT_EXTMEM_7fe4 = '\x01';
          for (bVar6 = 0; bVar7 = DAT_EXTMEM_7f9a, bVar6 < BANK0_R4; bVar6 = bVar6 + 1) {
            BANK0_R6 = BANK0_R6 & 0x20;
            *(bool *)CONCAT11('\x7f' - (((0x1e < bVar6) << 7) >> 7),bVar6 - 0x1f) =
                 *(char *)CONCAT11('\x7f' - (((0x7f < bVar6) << 7) >> 7),bVar6 + 0x80) != '\0';
          }
          if ((DAT_EXTMEM_7fe1 == '\0') || (DAT_EXTMEM_7fe2 == 0)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if ((bVar1) && (DAT_EXTMEM_7fe3 != '\0')) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          if ((bVar1) && (DAT_EXTMEM_7fe4 != '\0')) {
            DAT_EXTMEM_7fe3 = '\x01';
          }
          else {
            DAT_EXTMEM_7fe3 = '\0';
          }
          DAT_EXTMEM_7fed = (DAT_EXTMEM_7f80 & 0x18) >> 1;
          DAT_EXTMEM_7fe4 =
               *(byte *)CONCAT11('\x7f' - (((0x69 < DAT_EXTMEM_7fe2) << 7) >> 7),
                                 DAT_EXTMEM_7fe2 + 0x96) & 0xc;
          if (((DAT_EXTMEM_7fed < BANK0_R3) && (DAT_EXTMEM_7fe3 == '\x01')) ||
             (DAT_EXTMEM_7fe4 == BANK0_R4)) {
            DAT_EXTMEM_7f9a = DAT_EXTMEM_7fed << 4 | DAT_EXTMEM_7fed;
          }
          else {
            DAT_EXTMEM_7ffa = '\0';
            DAT_EXTMEM_7f9a = DAT_EXTMEM_7fe4 << 4 | DAT_EXTMEM_7fe4;
          }
          BANK0_R3 = BANK0_R3 | bVar7;
          if (DAT_EXTMEM_7ffa == '\0') {
            DAT_EXTMEM_7f85 = 1;
          }
        }
        if (DAT_EXTMEM_7fa2 == '\x04') {
          DAT_EXTMEM_7fe2 = DAT_EXTMEM_7f80;
          BANK0_R3 = BANK0_R3 & 4;
          BANK0_R4 = BANK0_R4 & 0x20;
          BANK0_R5 = BANK0_R5 & 3;
          bVar6 = ((DAT_EXTMEM_7f80 & 0x18) >> 4) << 1 | (DAT_EXTMEM_7f80 & 8) >> 3;
          DAT_EXTMEM_7fb8 = '\0';
          if ((DAT_EXTMEM_7fba == '\0') || (DAT_EXTMEM_7f80 != 0)) {
            bVar7 = DAT_EXTMEM_7f80;
            if (DAT_EXTMEM_7f87 == '\0') {
              DAT_EXTMEM_7fed = DAT_EXTMEM_7f80 & 3;
              BANK0_R3 = BANK0_R3 | DAT_EXTMEM_7f9a & 0xcc;
              DAT_EXTMEM_7f9a = DAT_EXTMEM_7fed << 4 | DAT_EXTMEM_7fed;
            }
          }
          else {
            DAT_EXTMEM_7fb8 = '\x01';
            bVar7 = 1;
          }
          if (((DAT_EXTMEM_7fb9 == '\0') || (DAT_EXTMEM_7f80 != 0)) ||
             ((DAT_EXTMEM_7fbb == '\0' && ((DAT_EXTMEM_7fbc == '\0' && (DAT_EXTMEM_7fb8 != '\0')))))
             ) {
            if (DAT_EXTMEM_7f87 == '\0') {
              DAT_EXTMEM_7fed = (DAT_EXTMEM_7f80 & 0x18) >> 1;
              BANK0_R3 = BANK0_R3 | DAT_EXTMEM_7f9a & 0x33;
              DAT_EXTMEM_7f9a = DAT_EXTMEM_7fed << 4 | DAT_EXTMEM_7fed;
            }
          }
          else {
            bVar6 = bVar6 + 1;
            DAT_EXTMEM_7fb8 = '\x01';
          }
          bVar7 = bVar6 << 2 | bVar7;
          DAT_EXTMEM_7f9b = bVar7 | bVar7 << 4;
        }
        DAT_EXTMEM_7fa3 = '\0';
        DAT_EXTMEM_7f87 = '\0';
      }
      uEXTMEMcc2d = 0xfe;
      BANK0_R2 = bVar3;
      goto LAB_CODE_5707;
    }
    if ((DAT_INTMEM_47 & 1) == 0) {
      if ((bEXTMEM7ffd >> 4 & 1) == 1) {
        if (DAT_EXTMEM_7fe0 == '\0') {
          BANK0_R2 = bVar3;
          FUN_CODE_41f1(0);
          if (DAT_EXTMEM_7f79 != '\0') {
            DAT_EXTMEM_7f77 = '\x01';
          }
        }
        else if (DAT_EXTMEM_7ff3 == '\0') {
          DAT_EXTMEM_7fe0 = '\0';
          DAT_EXTMEM_ca20 = 1;
          DAT_EXTMEM_ca21 = 0;
          uEXTMEMca08 = 1;
          DAT_EXTMEM_7f9d = 0;
        }
        else {
          DAT_EXTMEM_7ff2 = 0;
          DAT_EXTMEM_7ff3 = '\0';
          DAT_EXTMEM_ca20 = 2;
          DAT_EXTMEM_ca21 = 1;
          uEXTMEMca22 = 0;
          DAT_EXTMEM_ca23 = 0;
          uEXTMEMca08 = 1;
          DAT_EXTMEM_7f9d = 0;
        }
        DAT_EXTMEM_ca0e = 1;
        DAT_EXTMEM_7f78 = '\0';
        bEXTMEM7ffd = bEXTMEM7ffd & 0xfe;
      }
      if ((bEXTMEM7ffd >> 3 & 1) == 1) {
        DAT_EXTMEM_7ff4 = '\x01';
        DAT_EXTMEM_7fbd = '\0';
        if ((DAT_EXTMEM_7ff3 == '\0' & DAT_EXTMEM_7ff2) == 0) {
          if (cEXTMEMca81 == '\x02') {
            uEXTMEMca0d = 1;
            DAT_EXTMEM_7f9d = 0;
            DAT_EXTMEM_7fbf = '\0';
            DAT_EXTMEM_7f76 = DAT_EXTMEM_7f78 == '\0';
            DAT_EXTMEM_7fbd = '\x01';
            if (DAT_EXTMEM_7f78 != '\0') {
              DAT_EXTMEM_ca61 = 0xf;
            }
          }
          else {
            if (((DAT_EXTMEM_7fbf != '\0') && (DAT_EXTMEM_7fbf = '\0', (bEXTMEMc84b >> 6 & 1) != 1))
               && ((bEXTMEMca83 >> 2 & 1) != 0)) {
              BANK0_R2 = bVar3;
              FUN_CODE_1f5c(bEXTMEMca83);
            }
            if (DAT_EXTMEM_7f78 == '\0') {
              uEXTMEMca0d = 1;
              DAT_EXTMEM_7f76 = '\x01';
            }
            else if (DAT_EXTMEM_7f9f == '\0') {
              if (DAT_EXTMEM_7f79 == '\0') {
                if (BANK1_R0 != '\0' || BANK1_R1 != '\0') {
                  BANK0_R2 = bVar3;
                  FUN_CODE_2402(0);
                }
                if ((DAT_EXTMEM_7fec & 1) == 0) {
                  DAT_EXTMEM_7fed = 1;
                }
                else {
                  DAT_EXTMEM_7fed = 2;
                }
                bEXTMEMca09 = DAT_EXTMEM_7fed;
              }
              else {
                if (BANK1_R0 != '\0' || BANK1_R1 != '\0') {
                  BANK0_R2 = bVar3;
                  FUN_CODE_2402(DAT_EXTMEM_7f79);
                }
                if ((DAT_EXTMEM_7fee != '\0') && (cEXTMEMca81 != '\x01')) {
                  BANK0_R2 = bVar3;
                  FUN_CODE_1f9b();
                }
                DAT_EXTMEM_7fee = '\0';
                DAT_EXTMEM_7f79 = '\0';
                DAT_INTMEM_50 = 0x20;
                DAT_INTMEM_51 = 0x32;
                BANK0_R2 = bVar3;
                FUN_CODE_044f(0x7f00);
                if ((cEXTMEMca81 != '\x01') && (DAT_EXTMEM_7f7a != '\0')) {
                  DAT_EXTMEM_cad0 = 2;
                }
                DAT_EXTMEM_7f7a = '\0';
                bEXTMEMca09 = 1;
              }
              DAT_EXTMEM_7f9d = 0;
              DAT_EXTMEM_7f78 = '\0';
              DAT_EXTMEM_ca61 = 0xf;
            }
          }
        }
        else {
          DAT_EXTMEM_7ff2 = 0;
          if (cEXTMEMca81 == '\x01') {
            DAT_EXTMEM_7ff3 = '\x01';
          }
          else {
            DAT_EXTMEM_7ff3 = '\0';
          }
        }
      }
      bVar6 = BANK0_R0;
      if ((DAT_EXTMEM_7ffb == '\0' & bEXTMEM7ffd & DAT_EXTMEM_7f9f == '\0') != 0) {
        cVar4 = '\0';
        if (((((bEXTMEMcb4a >> 4 & 1) == 1) || (DAT_EXTMEM_7ff2 == 0)) ||
            ((DAT_EXTMEM_ca9f & 1) != 0)) &&
           (((DAT_EXTMEM_c850 >> 1 & 1) == 1 || (3 < bEXTMEMcc09)))) {
          if (((bEXTMEM7ffe >> 1 & 1) == 1) && (DAT_EXTMEM_7fa0 == '\0')) {
            cVar4 = '\x01';
            if (DAT_EXTMEM_7f76 == '\0') {
              if (DAT_EXTMEM_7fec == 1) {
                if (DAT_EXTMEM_7f77 == '\0') {
                  if ((DAT_EXTMEM_7f79 == '\0') || (BANK0_R0 = bVar6, 2 < DAT_EXTMEM_7f9d)) {
                    cVar4 = '\0';
                    DAT_EXTMEM_7f78 = '\0';
                    DAT_EXTMEM_7f79 = '\0';
                    DAT_EXTMEM_7ffb = '\0';
                    DAT_EXTMEM_7f76 = '\0';
                    DAT_EXTMEM_7f9d = 0;
                    BANK0_R0 = bVar6;
                  }
                }
                else {
                  BANK0_R0 = bVar6;
                  if (DAT_EXTMEM_7f79 == '\0') {
                    uEXTMEMca08 = 1;
                    DAT_EXTMEM_7f9d = 0;
                  }
                }
              }
              else if ((DAT_EXTMEM_7f9d < 3) << 7 < '\0') {
                DAT_EXTMEM_7f78 = '\x01';
                DAT_EXTMEM_ca0c = 1;
                BANK0_R0 = bVar6;
              }
              else {
                cVar4 = '\0';
                DAT_EXTMEM_7f78 = '\0';
                DAT_EXTMEM_7f79 = '\0';
                DAT_EXTMEM_7ffb = '\0';
                DAT_EXTMEM_7f7a = '\0';
                DAT_EXTMEM_7f76 = '\0';
                DAT_EXTMEM_7f9d = 0;
                DAT_EXTMEM_7ff2 = 0;
                uEXTMEMcad1 = 1;
                BANK0_R0 = bVar6;
              }
            }
            else if (cEXTMEMca81 == '\x02') {
              DAT_EXTMEM_7f78 = '\x01';
              cVar4 = '\0';
              BANK0_R0 = bVar6;
            }
            else {
              if (DAT_EXTMEM_7f79 == '\0') {
                if (BANK1_R0 != '\0' || BANK1_R1 != '\0') {
                  BANK0_R2 = bVar3;
                  FUN_CODE_2402(0);
                }
                if ((DAT_EXTMEM_7fec & 1) == 0) {
                  DAT_EXTMEM_7fed = 1;
                }
                else {
                  DAT_EXTMEM_7fed = 2;
                }
                bEXTMEMca09 = DAT_EXTMEM_7fed;
              }
              else {
                if (BANK1_R0 != '\0' || BANK1_R1 != '\0') {
                  BANK0_R2 = bVar3;
                  FUN_CODE_2402(DAT_EXTMEM_7f79);
                }
                if ((DAT_EXTMEM_7fee != '\0') && (cEXTMEMca81 != '\x01')) {
                  BANK0_R0 = bVar6;
                  BANK0_R2 = bVar3;
                  FUN_CODE_1f9b();
                }
                DAT_EXTMEM_7fee = '\0';
                DAT_EXTMEM_7f79 = '\0';
                DAT_INTMEM_50 = 0x20;
                DAT_INTMEM_51 = 0x32;
                BANK0_R0 = bVar6;
                BANK0_R2 = bVar3;
                FUN_CODE_044f(0x7f00);
                if ((cEXTMEMca81 != '\x01') && (DAT_EXTMEM_7f7a != '\0')) {
                  DAT_EXTMEM_cad0 = 2;
                }
                DAT_EXTMEM_7f7a = '\0';
                bEXTMEMca09 = 1;
              }
              DAT_EXTMEM_7f9d = 0;
              DAT_EXTMEM_ca61 = 0xf;
              DAT_EXTMEM_ca0c = 1;
              BANK0_R0 = bVar6;
            }
          }
          else if ((((bEXTMEMcb4a >> 3 & 1) == 1) ||
                   (((DAT_EXTMEM_7f9d == 0 || (2 < DAT_EXTMEM_7f9d)) || (DAT_EXTMEM_7ff4 != '\0'))))
                  || ((DAT_EXTMEM_ca9f & 1) == 1)) {
            DAT_EXTMEM_7f9d = 0;
            BANK0_R0 = bVar6;
          }
          else {
            DAT_INTMEM_50 = 0x20;
            DAT_INTMEM_51 = 0x1d;
            BANK0_R2 = bVar3;
            FUN_CODE_044f(0xca00,DAT_EXTMEM_ca9f);
            DAT_EXTMEM_ca0c = 1;
            DAT_EXTMEM_ca61 = 0xf;
            cVar4 = '\x01';
          }
        }
        else {
          cVar4 = '\x01';
          DAT_EXTMEM_ca0c = 1;
          DAT_EXTMEM_ca61 = 0xf;
          BANK0_R0 = bVar6;
        }
        DAT_EXTMEM_7f77 = '\0';
        if (DAT_EXTMEM_7fb6 == '\0' && cVar4 == '\0') {
          DAT_EXTMEM_7fa0 = '\0';
          BANK0_R2 = bVar3;
          FUN_CODE_42b8(DAT_EXTMEM_7fb6 == '\0');
        }
        DAT_EXTMEM_7f76 = '\0';
      }
      bVar6 = 0x7f;
      DAT_INTMEM_48 = 0x35;
      DAT_INTMEM_49 = -0x34;
      DAT_INTMEM_4a = 0;
      BANK0_R2 = bVar3;
      if ((DAT_INTMEM_47 >> 2 & 1) == 1) {
        DAT_INTMEM_50 = 0x20;
        DAT_INTMEM_51 = 6;
        FUN_CODE_044f(0x7f00);
        BANK0_R2 = bVar3;
        bVar3 = FUN_CODE_67d0(CONCAT11(DAT_INTMEM_49,DAT_INTMEM_48),DAT_INTMEM_4a);
        DAT_INTMEM_4b = bVar3 & 7;
        DAT_INTMEM_4c = bVar3 & 0x18;
        cVar4 = FUN_CODE_67d0(CONCAT11(DAT_INTMEM_49 - (((0xfe < DAT_INTMEM_48) << 7) >> 7),
                                       DAT_INTMEM_48 + 1),DAT_INTMEM_4a);
        uVar9 = CONCAT11(DAT_INTMEM_49 - (((0xfd < DAT_INTMEM_48) << 7) >> 7),DAT_INTMEM_48 + 2);
        uVar5 = FUN_CODE_67d0(uVar9,DAT_INTMEM_4a);
        bVar6 = (byte)((ushort)uVar9 >> 8);
        if (BANK0_R7 < 0x10) {
                    /* WARNING: Could not recover jumptable at 0x5f8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ushort)(byte)(cVar4 * '\x03') + 0x5f90))(uVar5);
          return;
        }
      }
      bVar3 = BANK0_R2;
      if ((DAT_INTMEM_47 & 0x28) != 0) {
        DAT_INTMEM_50 = 1;
        DAT_INTMEM_51 = 0x10;
        uVar8 = (ushort)bVar6 << 8;
        FUN_CODE_044f(uVar8);
        DAT_INTMEM_50 = 1;
        DAT_INTMEM_51 = 0x68;
        FUN_CODE_044f(uVar8 & 0xff00);
        DAT_INTMEM_50 = 1;
        DAT_INTMEM_51 = 1;
        FUN_CODE_044f(1);
        DAT_INTMEM_50 = 1;
        DAT_INTMEM_51 = DAT_INTMEM_47;
        FUN_CODE_044f(1);
        FUN_CODE_270e();
        if ((DAT_EXTMEM_7fa7 != '\x02') && (DAT_EXTMEM_7fa7 != '\x05')) {
          BANK0_R2 = bVar3;
          FUN_CODE_421d(0x7f4b);
        }
        do {
        } while( true );
      }
      goto LAB_CODE_5707;
    }
    BANK0_R2 = bVar3;
    FUN_CODE_270e();
  } while( true );
  while( true ) {
    FUN_CODE_07f4(bVar2);
    if ((char)uVar8 == '\x01') goto LAB_CODE_488a;
    if ((char)uVar8 == '\x02') break;
LAB_CODE_4fe8:
    DAT_EXTMEM_7fed = DAT_EXTMEM_d80d & 7;
    uVar8 = 0x7fed;
    BANK0_R3 = BANK0_R3 & 7;
    bVar2 = DAT_EXTMEM_7fed;
    if ((DAT_EXTMEM_7fed == 7) && (uVar8 = 0xd4cc, bVar2 = bEXTMEMd4cc, (bEXTMEMd4cc & 1) == 1))
    goto LAB_CODE_5025;
  }
  BANK0_R3 = BANK0_R3 | 4;
  goto LAB_CODE_4e4a;
LAB_CODE_5025:
  while (bEXTMEMcc9b == 1) {
    DAT_INTMEM_50 = 0x20;
    DAT_INTMEM_51 = 0x42;
    FUN_CODE_044f(0xcc00);
  }
  FUN_CODE_1465();
  DAT_EXTMEM_cc0b = 0;
  DAT_EXTMEM_7fe5 = 0;
  do {
    BANK0_R3 = BANK0_R3 & 0xf0;
    uVar8 = 0xd868;
    BANK0_R4 = BANK0_R4 & 0xf0;
    if (bEXTMEMd819 == BANK0_R4) {
      FUN_CODE_15c1();
      FUN_CODE_1403();
      BANK0_R3 = BANK0_R3 & 0xf0;
      DAT_EXTMEM_7fed = ~DAT_EXTMEM_d804 >> 4;
      DAT_EXTMEM_cc0b = 0;
      DAT_EXTMEM_7fe5 = 0;
      goto LAB_CODE_50b3;
    }
    FUN_CODE_07f4(DAT_EXTMEM_d868);
    if ((char)uVar8 == '\x01') goto LAB_CODE_488a;
  } while ((char)uVar8 != '\x02');
  FUN_CODE_15c1();
  BANK0_R3 = BANK0_R3 | 8;
  goto LAB_CODE_4e4a;
LAB_CODE_50b3:
  BANK0_R3 = BANK0_R3 & DAT_EXTMEM_7fed;
  uVar8 = 0x7fed;
  if (bEXTMEMd84e != BANK0_R4) {
    FUN_CODE_07f4(DAT_EXTMEM_7fed);
    if ((char)uVar8 == '\x01') goto LAB_CODE_488a;
    if ((char)uVar8 == '\x02') goto code_c0x50d7;
    goto LAB_CODE_50b3;
  }
  if (((bCODE00a6 >> 1 & 1) != 1) && (DAT_EXTMEM_7eaa == '\0')) {
    do {
    } while( true );
  }
  if ((bCODE00a9 >> 4 & 1) != 0) {
    FUN_CODE_04d0(bCODE00a9);
  }
  while (bEXTMEMcc9b == 2) {
    DAT_INTMEM_50 = 0x20;
    DAT_INTMEM_51 = 0x43;
    FUN_CODE_044f(0xcc00);
  }
  DAT_INTMEM_50 = 2;
  DAT_INTMEM_51 = 0x26;
  FUN_CODE_044f(0xcc00);
  DAT_EXTMEM_cc0b = 0;
  DAT_EXTMEM_7fe5 = 0;
  do {
    DAT_EXTMEM_7fed = DAT_EXTMEM_d80d & 7;
    uVar8 = 0x7fed;
    BANK0_R3 = BANK0_R3 & 7;
    bVar2 = DAT_EXTMEM_7fed;
    if ((DAT_EXTMEM_7fed == 7) && (uVar8 = 0xd4cc, bVar2 = bEXTMEMd4cc, (bEXTMEMd4cc & 1) != 0)) {
      uEXTMEMc80f = 0;
      uVar8 = 0xcc00;
      uEXTMEMcc00 = 0;
      FUN_CODE_226e();
      DAT_INTMEM_50 = 2;
      DAT_INTMEM_51 = 0x27;
      FUN_CODE_044f(uVar8 & 0xff00);
      DAT_EXTMEM_cc0b = 0;
      DAT_EXTMEM_7fe5 = 0;
      goto LAB_CODE_51aa;
    }
    FUN_CODE_07f4(bVar2);
    if ((char)uVar8 == '\x01') goto LAB_CODE_488a;
  } while ((char)uVar8 != '\x02');
  BANK0_R3 = BANK0_R3 | 0x20;
  goto LAB_CODE_4e4a;
code_c0x50d7:
  BANK0_R3 = BANK0_R3 | 0x10;
  goto LAB_CODE_4e4a;
LAB_CODE_51aa:
  DAT_EXTMEM_7fed = bEXTMEMc803 & 0x80;
  uVar8 = 0x7fed;
  if (DAT_EXTMEM_7fed == 0) {
    FUN_CODE_07f4(0);
    if ((char)uVar8 == '\x01') goto LAB_CODE_488a;
    if ((char)uVar8 == '\x02') goto code_c0x51cb;
    goto LAB_CODE_51aa;
  }
  DAT_EXTMEM_cc0b = 0;
  do {
  } while ((BANK0_R4 != 0) << 7 < '\0');
  DAT_EXTMEM_7fed = cEXTMEMd085;
  DAT_INTMEM_50 = 1;
  DAT_INTMEM_51 = 3;
  FUN_CODE_044f(0x7f00,bEXTMEMc849 >> 4);
  DAT_EXTMEM_7fed = bEXTMEMc849;
  while( true ) {
    while (uVar8 = 0xcc9b, bEXTMEMcc9b == 3) {
      DAT_INTMEM_50 = 0x20;
      DAT_INTMEM_51 = 0x44;
      FUN_CODE_044f(0xcc00);
    }
    FUN_CODE_2369();
    if ((char)uVar8 != '\0') goto LAB_CODE_488a;
    bVar1 = (DAT_EXTMEM_7fed & 1) == 0;
    bVar2 = BANK0_R3 & 0xf;
    if (((bVar1 & bEXTMEMc803) != 0) ||
       (bVar1 = (DAT_EXTMEM_7fed & 2) == 0, (bVar1 & bEXTMEMc840) != 0)) break;
    BANK0_R3 = BANK0_R3 & 3;
    bVar1 = (DAT_EXTMEM_7fed & 4) == 0;
    bVar2 = BANK0_R3;
    if (((bVar1 & bEXTMEMc841) != 0) ||
       (bVar1 = (DAT_EXTMEM_7fed & 8) == 0, bVar1 && cEXTMEMd085 != '?')) break;
  }
  BANK0_R3 = bVar2;
  FUN_CODE_270e(bVar1);
  BANK0_R3 = BANK0_R3 | 0x80;
  goto LAB_CODE_4e4a;
code_c0x51cb:
  BANK0_R3 = BANK0_R3 | 0x40;
  goto LAB_CODE_4e4a;
}



/* =========================================================
 * CODE:67d0  FUN_CODE_67d0  size=23
 * callers: CODE:586a, CODE:6134, CODE:4868, CODE:2878
 * ========================================================= */

undefined1 FUN_CODE_67d0(undefined1 *param_1,byte param_2)

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
 * CODE:67e4  FUN_CODE_67e4  size=3
 * ========================================================= */

undefined1 FUN_CODE_67e4(byte param_1)

{
  return *(undefined1 *)(ushort)param_1;
}



/* =========================================================
 * CODE:67ea  FUN_CODE_67ea  size=2
 * ========================================================= */

undefined1 FUN_CODE_67ea(undefined1 *param_1)

{
  return *param_1;
}



/* =========================================================
 * CODE:67ec  FUN_CODE_67ec  size=4
 * callers: CODE:0208
 * ========================================================= */

void FUN_CODE_67ec(void)

{
  return;
}



/* total functions=132 decompiled=132 */
