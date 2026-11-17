/* Decompiled ARM/Cortex-M image: cm_code.bin */
/* language ARM:LE:32:Cortex */

/* =========================================================
 * 00000000  MasterStackPointer  size=96
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MasterStackPointer(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)(_DAT_00000284 + param_1) != '*') {
    if (*(char *)(_DAT_00000288 + param_1) == '\0') {
      *(undefined1 *)(_DAT_00000288 + param_1) = 1;
    }
    else if (*(char *)(_DAT_00000288 + param_1) == '\x02') {
      *(undefined1 *)(_DAT_00000288 + param_1) = 0;
      iVar2 = param_1 * _DAT_0000028c + _DAT_00000290;
      iVar1 = iVar2 + _DAT_00000294;
      FUN_000002d0(param_1);
      func_0xffffbff2(param_1,iVar1);
      *(undefined1 *)(iVar2 + 0xe22) = 1;
      *(undefined1 *)(iVar1 + 0x10a) = 0;
      *(byte *)(iVar1 + 0x112) = *(byte *)(iVar1 + 0x112) & 0xfd;
      return;
    }
  }
  FUN_000002c4(param_1);
  return;
}



/* =========================================================
 * 0000006a  FUN_0000006a  size=50
 * ========================================================= */

void FUN_0000006a(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  if ((*(char *)(param_4 + param_2 * 0x80 + 2) == '\x02') && (*(char *)(param_4 + 0xe15) == '\x02'))
  {
    *(undefined1 *)(param_4 + 0xe15) = 3;
  }
  else if (*(char *)(param_4 + 0xe15) != '\x03') goto LAB_00000096;
  *(undefined1 *)(param_4 + 0xc14) = 0;
LAB_00000096:
  FUN_000002dc();
  return;
}



/* =========================================================
 * 0000009c  FUN_0000009c  size=78
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000009c(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 uStack_30;
  byte bStack_2f;
  
  iVar1 = FUN_000002e8();
  if (iVar1 != 0) {
    iVar1 = param_1 * 0x20 + _DAT_00000298;
    func_0xffffed48(&uStack_30,iVar1,0x20);
    if (((param_2 != 0xff) &&
        (uVar2 = FUN_000002f4(iVar1 + 2), (uVar2 & 1 << (param_2 & 0xff)) != 0)) &&
       ((bStack_2f & 1) != 0)) {
      FUN_00000300(param_1,0);
    }
    FUN_00000300(param_1,param_2);
  }
  return;
}



/* =========================================================
 * 000000ea  FUN_000000ea  size=50
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000000ea(int param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_0000030c();
  iVar1 = param_1 * _DAT_0000028c + _DAT_00000290;
  func_0xffffef04(iVar1 + 0x3ec,0x54);
  *(undefined1 *)(iVar1 + 0xc79) = 0;
  FUN_00000318(param_1,param_2);
  return;
}



/* =========================================================
 * 0000011c  FUN_0000011c  size=160
 * callers: 000001bc, 000001e0
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000011c(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar2 = _DAT_000002a8;
  bVar1 = *(byte *)(_DAT_0000029c + 0x10);
  if ((param_1 != 0xff) && (iVar4 = param_1 * 4 + _DAT_000002a0, *(char *)(iVar4 + 3) == '\0')) {
    uVar5 = (uint)*(byte *)(iVar4 + 2);
    *(undefined4 *)(_DAT_000002a8 + 0xc) = _DAT_000002a4;
    iVar4 = param_1 * 0x1000 + _DAT_000002ac;
    if (param_2 == 0) {
      *(uint *)(iVar4 + 8) =
           *(uint *)(iVar4 + 8) & 0xfffc1fff |
           (*(byte *)(_DAT_000002b8 + param_1 + 0x10) & 0x1f) << 0xd;
    }
    else if (param_2 == 1) {
      iVar3 = uVar5 * _DAT_0000028c + _DAT_00000290;
      if (((((int)((uint)bVar1 << 0x1a) < 0) && (*(uint *)(iVar3 + 0x3f8) >> 0x10 == _DAT_000002b0))
          && (*(char *)(iVar3 + 0xb6d) == '\x01')) &&
         ((*(int *)(_DAT_000002b4 + uVar5 * 4) != 0 &&
          ((*(uint *)(iVar3 + 0xc28) & 0xfffff) >> 10 < 0x65)))) {
        *(uint *)(iVar4 + 8) = (*(uint *)(iVar4 + 8) & 0xfffc1fff) + 0x1e000;
      }
    }
    *(undefined4 *)(iVar2 + 0xc) = 0;
  }
  return;
}



/* =========================================================
 * 000001bc  FUN_000001bc  size=36
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000001bc(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00000324();
  FUN_0000011c(*(undefined1 *)(_DAT_0000028c * param_1 + _DAT_00000290 + 0xb68),1);
  return uVar1;
}



/* =========================================================
 * 000001e0  FUN_000001e0  size=24
 * ========================================================= */

void FUN_000001e0(undefined4 param_1,undefined4 param_2,int param_3)

{
  FUN_00000330();
  if (param_3 == 0) {
    FUN_0000011c(param_1,0);
  }
  return;
}



/* =========================================================
 * 000001f8  FUN_000001f8  size=110
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000001f8(int param_1)

{
  ushort uVar1;
  int iVar2;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  FUN_0000033c(&uStack_28,0xb,0xff);
  iVar2 = param_1 * _DAT_0000028c + _DAT_00000290;
  if ((int)(*(uint *)(iVar2 + 0xcf4) << 0x1d) < 0) {
    uVar1 = *(ushort *)(_DAT_0000029c + -2);
    *(uint *)(iVar2 + 0xcf4) = *(uint *)(iVar2 + 0xcf4) & 0xfffffffb;
    FUN_00000348(param_1,(uVar1 & 1) == 0,(int)&uStack_20 + 2,&uStack_28);
  }
  if ((int)((uint)*(ushort *)(iVar2 + 0xcf4) << 0x1e) < 0) {
    DataSynchronizationBarrier(0xf);
    *(undefined4 *)(_DAT_000002c0 + 0xc) = _DAT_000002bc;
    DataSynchronizationBarrier(0xf);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  return;
}



/* =========================================================
 * 000002c4  FUN_000002c4  size=8
 * callers: 00000000
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000002c4(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 000002d0  FUN_000002d0  size=8
 * callers: 00000000
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000002d0(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 000002dc  FUN_000002dc  size=8
 * callers: 0000006a
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000002dc(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 000002e8  FUN_000002e8  size=8
 * callers: 0000009c
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000002e8(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 000002f4  FUN_000002f4  size=8
 * callers: 0000009c
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000002f4(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 00000300  FUN_00000300  size=8
 * callers: 0000009c
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00000300(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 0000030c  FUN_0000030c  size=8
 * callers: 000000ea
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0000030c(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 00000318  FUN_00000318  size=8
 * callers: 000000ea
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00000318(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 00000324  FUN_00000324  size=8
 * callers: 000001bc
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00000324(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 00000330  FUN_00000330  size=8
 * callers: 000001e0
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00000330(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 0000033c  FUN_0000033c  size=8
 * callers: 000001f8
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0000033c(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 00000348  FUN_00000348  size=8
 * callers: 000001f8
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00000348(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 000003c0  FUN_000003c0  size=60
 * callers: 00002778
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000003c0(uint param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = (param_1 & 3) << 3;
  uVar3 = 0xff << iVar4;
  uVar2 = ((param_2 & 3) << 6) << iVar4;
  if ((int)param_1 < 0) {
    iVar4 = ((param_1 & 0xf) - 8 & 0xfffffffc) + _DAT_000007c0;
    *(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x1c) & ~uVar3 | uVar2;
    return;
  }
  puVar1 = (uint *)((param_1 & 0xfffffffc) + _DAT_000007c4);
  *puVar1 = *puVar1 & ~uVar3 | uVar2;
  return;
}



/* =========================================================
 * 000003fc  FUN_000003fc  size=38
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000003fc(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = FUN_00002fec();
  uVar2 = *(uint *)(_DAT_000007c8 + param_1 * 4);
  if (((uVar2 & 0xfffff) >> 10 == 0) && ((int)(uVar2 << 5) < 0)) {
    FUN_00002ff8(param_1,0x2b);
  }
  return uVar1;
}



/* =========================================================
 * 00000422  FUN_00000422  size=122
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000422(int param_1,uint param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar3 = _DAT_000007cc;
  param_1 = param_1 * 0x100;
  uVar7 = 0;
  puVar4 = (uint *)(param_1 + _DAT_000007d0);
  *puVar4 = *puVar4 & 0xfffffff8;
  cVar1 = *(char *)(param_2 + 0x111);
  if (cVar1 == '\x01') {
    puVar4[3] = param_2;
    uVar6 = 0x10;
    uVar5 = (*(ushort *)(param_2 + 0x10c) & 0x1ff) << 0x13;
  }
  else if ((cVar1 == '\x04') || (cVar1 == '\x05')) {
    uVar6 = 0x60;
    uVar5 = 0;
    *(uint *)(param_1 + 0x40000014) = *(uint *)(param_1 + 0x40000014) & 0xfff5ffff;
  }
  else {
    uVar6 = 0x20;
    uVar5 = 0;
    if (cVar1 == '\x02') {
      uVar7 = 0x800;
    }
  }
  bVar2 = *(byte *)(param_2 + 0x108);
  puVar4[1] = puVar4[1] & ~uVar3;
  puVar4[1] = puVar4[1] | uVar5 | uVar6 | uVar7 | (uint)bVar2 << 8 | 7;
  *puVar4 = 1;
  return;
}



/* =========================================================
 * 0000049c  FUN_0000049c  size=12
 * ========================================================= */

void FUN_0000049c(undefined4 param_1,int param_2)

{
  if (param_2 != 9) {
    FUN_00003004();
  }
  return;
}



/* =========================================================
 * 000004a8  FUN_000004a8  size=32
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000004a8(int param_1,int param_2)

{
  int iVar1;
  
  FUN_00003010();
  if (param_2 == 3) {
    iVar1 = param_1 * 0x100 + _DAT_000007d4;
    *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 0x100000;
  }
  return;
}



/* =========================================================
 * 000004c8  FUN_000004c8  size=110
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000004c8(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 * 0x100 + _DAT_000007d4 + -8);
  iVar1 = _DAT_000007d8 * param_1 + _DAT_000007dc;
  if (iVar2 * 0x2000 < 0) {
    *(undefined1 *)(iVar1 + 0xc36) = 1;
  }
  FUN_0000301c(param_1);
  if (iVar2 << 0xd < 0) {
    if (((*(char *)(iVar1 + 0xb6d) != '\0') || (*(char *)(iVar1 + 0xc0f) != '\x01')) ||
       (*(char *)(iVar1 + 0xc0e) != '\x01')) {
      FUN_00003028(param_1,0);
    }
    iVar1 = param_1 * 0x100 + _DAT_000007d4;
    *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) & 0xffefffff;
    *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 0x100000;
  }
  return;
}



/* =========================================================
 * 00000536  FUN_00000536  size=18
 * ========================================================= */

void FUN_00000536(undefined4 param_1)

{
  FUN_00003028(param_1,0);
  FUN_00003034(param_1);
  return;
}



/* =========================================================
 * 00000548  FUN_00000548  size=44
 * callers: 000012d6
 * ========================================================= */

undefined4 FUN_00000548(char param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_00003040(param_1 * '\x02' + '\x0f');
  uVar2 = FUN_00003040(param_1 * '\x02' + '\x10');
  if ((uVar1 < 0x1ac) && (uVar2 < 0x1ac)) {
    return 0;
  }
  return 1;
}



/* =========================================================
 * 00000574  FUN_00000574  size=16
 * callers: 00000584, 000020e0
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00000574(int param_1)

{
  return (*(uint *)(param_1 * 0x100 + _DAT_000007d4 + -0x3c) & 0xff) >> 7;
}



/* =========================================================
 * 00000584  FUN_00000584  size=128
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00000584(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint *puVar3;
  
  if (((*(char *)(_DAT_000007e0 + param_1) == '\a') || (*(char *)(_DAT_000007e0 + param_1) == '\b'))
     && (iVar1 = FUN_0000304c(param_1), iVar1 == 0)) {
    iVar1 = param_1 * _DAT_000007d8 + _DAT_000007dc;
    if (*(char *)(iVar1 + 0xb6e) == '\0') {
      if ((*(ushort *)(iVar1 + 0x3d4) & 0x1fff) >> 0xb != 3) goto LAB_000005de;
    }
    else if ((*(char *)(iVar1 + 0xb6e) != '\x01') ||
            ((*(ushort *)(iVar1 + 0x3d4) & 0x1fff) >> 0xb < 2)) goto LAB_000005de;
    iVar1 = FUN_00000574(param_1);
    if (iVar1 == 0) {
      puVar3 = (uint *)(param_1 * 0x100 + _DAT_000007d4 + -0x40);
      puVar3[2] = puVar3[2] | 0x40;
      *puVar3 = *puVar3 | 0x40;
      return 0xff;
    }
  }
LAB_000005de:
  uVar2 = FUN_00003058(param_1);
  return uVar2;
}



/* =========================================================
 * 00000604  FUN_00000604  size=54
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000604(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 * 0x100 + _DAT_000007d4 + -0x3c) << 0x19 < 0) &&
     (((*(char *)(_DAT_000007e0 + param_1) == '\a' || (*(char *)(_DAT_000007e0 + param_1) == '\b'))
      && (iVar1 = FUN_00003064(param_1), iVar1 != 0)))) {
    FUN_00003070(param_1);
  }
  FUN_0000307c(param_1);
  return;
}



/* =========================================================
 * 0000063a  FUN_0000063a  size=48
 * callers: 00000690
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0000063a(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(_DAT_000007e4 + param_1);
  if (bVar1 != 0x3c) {
    if (bVar1 < 0x3d) {
      if (((bVar1 != 0x1c) && (bVar1 != 0x1e)) && ((bVar1 != 0x28 && (bVar1 != 0x3b)))) {
        return 0;
      }
    }
    else if (((bVar1 != 0xf3) && (bVar1 != 0xf8)) && (bVar1 != 0xfa)) {
      return 0;
    }
  }
  return 1;
}



/* =========================================================
 * 0000066a  FUN_0000066a  size=38
 * callers: 00000690, 00000df0
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000066a(int param_1,undefined1 param_2)

{
  int iVar1;
  
  if (*(char *)(param_1 * 0x24 + _DAT_000007e8 + 10) != '\x01') {
    FUN_00003088(param_1);
    iVar1 = _DAT_000007ec;
    *(undefined1 *)(_DAT_000007e4 + param_1) = param_2;
    *(undefined1 *)(iVar1 + param_1) = 0xff;
  }
  return;
}



/* =========================================================
 * 00000690  FUN_00000690  size=94
 * callers: 00000df0
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000690(int param_1,undefined1 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_r2;
  
  iVar1 = FUN_00003094();
  iVar3 = _DAT_000007d8 * param_1 + _DAT_000007dc;
  if (iVar1 == 0) {
    if ((*(char *)(iVar3 + 0xb82) != '\0') &&
       (iVar1 = FUN_0000063a(param_1), iVar3 = extraout_r2, iVar1 != 0)) {
      FUN_000030a0(param_1,0x11);
      return;
    }
    *(undefined1 *)(iVar3 + 0xe2a) = param_2;
    uVar2 = 4;
  }
  else if (*(char *)(iVar3 + 0xb82) == '\x01') {
    uVar2 = 0x2d;
  }
  else {
    if (*(char *)(iVar3 + 0xb82) != '\x02') {
      return;
    }
    uVar2 = 0x11;
  }
  FUN_0000066a(param_1,uVar2);
  return;
}



/* =========================================================
 * 000006ee  FUN_000006ee  size=104
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_000006ee(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  byte bVar6;
  
  iVar3 = FUN_000030ac();
  iVar2 = _DAT_000007e0;
  if ((iVar3 == 0xff) &&
     (iVar4 = param_1 * _DAT_000007d8 + _DAT_000007dc, *(char *)(iVar4 + 0xb6e) == '\0')) {
    bVar6 = *(byte *)(iVar4 + 0xc6c) & 0xf7;
    *(byte *)(iVar4 + 0xc6c) = bVar6;
    cVar1 = *(char *)(iVar2 + param_1);
    if ((cVar1 == '\x11') || ((cVar1 == '\x0e' || (cVar1 == '\x0f')))) {
      *(byte *)(iVar4 + 0xc6c) = bVar6 | 8;
      if (*(char *)(iVar4 + 0xe00) != '\x16') {
        return 0xff;
      }
      uVar5 = 0;
    }
    else {
      if (cVar1 != '\x10') {
        return 0xff;
      }
      uVar5 = 3;
    }
    FUN_000030b8(param_1,uVar5);
  }
  return iVar3;
}



/* =========================================================
 * 0000079a  FUN_0000079a  size=38
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000079a(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (((param_1 == 7) || (param_1 == 8)) &&
     ((*(ushort *)(_DAT_000007f0 + 0x22) & 0x7fff) >> 0xc == 7)) {
    param_2 = _DAT_000007f4;
  }
  FUN_000030c4(2,param_1,param_2,param_3);
  return;
}



/* =========================================================
 * 000007f8  FUN_000007f8  size=218
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000007f8(int param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  iVar1 = param_1 * 0x100 + _DAT_00000be4;
  uVar4 = *(uint *)(iVar1 + 4);
  if (param_1 == 0) {
    uVar2 = *(uint *)(_DAT_00000be8 + 0x7c) & 3;
  }
  else {
    uVar2 = (*(uint *)(_DAT_00000be8 + 0x7c) & 0xf) >> 2;
  }
  if (param_2 != 0) {
    if (param_4 == 1) {
      uVar5 = 1;
      uVar6 = uVar5;
    }
    else if (param_4 == 2) {
      uVar5 = 2;
      uVar6 = 3;
    }
    else {
      uVar5 = 0;
      uVar6 = 0;
    }
    if (*(char *)(_DAT_00000be8 + 0x94) == '\0') {
      iVar3 = _DAT_00000bec * param_1 + _DAT_00000bf0;
      *(uint *)(iVar3 + 1000) = *(uint *)(iVar3 + 1000) & 0xfffffff3;
      FUN_00002ff8(param_1,0x1b);
      if (param_3 == 1) {
        *(uint *)(iVar3 + 0x3dc) = *(uint *)(iVar3 + 0x3dc) | 0x20;
        FUN_00002ff8(param_1,0x1a);
      }
    }
    if ((((param_2 & 1) != 0) && (uVar4 = uVar4 & _DAT_00000bf4, param_3 == 1)) && (uVar2 != 2)) {
      uVar4 = uVar6 << 10 | uVar5 << 6 | uVar5 << 2 | uVar4 | _DAT_00000bf8;
    }
    if ((((int)(param_2 << 0x1e) < 0) && (uVar4 = uVar4 & _DAT_00000bfc, param_3 == 1)) &&
       (uVar2 != 3)) {
      uVar4 = uVar6 << 8 | uVar5 << 4 | uVar5 | uVar4 | _DAT_00000c00;
    }
    *(uint *)(iVar1 + 4) = uVar4;
  }
  return;
}



/* =========================================================
 * 000008d2  FUN_000008d2  size=112
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000008d2(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 != 0) {
    if (*(char *)(_DAT_00000be8 + 0x94) == '\0') {
      iVar2 = _DAT_00000bec * param_1 + _DAT_00000bf0;
      *(uint *)(iVar2 + 1000) = *(uint *)(iVar2 + 1000) & 0xfffffff3;
      if (param_3 == 1) {
        *(uint *)(iVar2 + 0x3dc) = *(uint *)(iVar2 + 0x3dc) & 0xffffffdf;
        FUN_00002ff8(param_1,0x1a);
      }
    }
    iVar2 = param_1 * 0x100 + _DAT_00000be4;
    uVar1 = *(uint *)(iVar2 + 4) | 0x3000;
    if (((param_2 & 1) != 0) && (uVar1 = uVar1 & _DAT_00000bf4, param_3 == 1)) {
      uVar1 = uVar1 | _DAT_00000c04;
    }
    if (((int)(param_2 << 0x1e) < 0) && (uVar1 = uVar1 & _DAT_00000bfc, param_3 == 1)) {
      uVar1 = uVar1 | _DAT_00000c08;
    }
    *(uint *)(iVar2 + 4) = uVar1;
  }
  return;
}



/* =========================================================
 * 00000942  FUN_00000942  size=18
 * ========================================================= */

void FUN_00000942(undefined4 param_1)

{
  FUN_000030d0(param_1,1);
  FUN_000030dc(param_1);
  return;
}



/* =========================================================
 * 00000954  FUN_00000954  size=136
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000954(void)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  
  iVar4 = _DAT_00000be8;
  cVar1 = *_DAT_00000c0c;
  cVar2 = _DAT_00000c0c[1];
  if ((*(byte *)(_DAT_00000be8 + 0x38) & 1) == 0) {
    return;
  }
  if (*(char *)(_DAT_00000c10 + 0x1c) != '\0') {
    return;
  }
  if (*_DAT_00000c14 != '\0') {
    return;
  }
  if (-1 < (int)((uint)*(byte *)(_DAT_00000be8 + 0x96) << 0x1d)) {
    FUN_000030e8(4);
    FUN_000030f4(0x40);
    FUN_00003100(4,400,_DAT_00000c18);
  }
  uVar5 = 0;
  bVar3 = (bool)isCurrentModePrivileged();
  if (bVar3) {
    uVar5 = isIRQinterruptsEnabled();
  }
  disableIRQinterrupts();
  if (((uint)*(ushort *)(iVar4 + 0x96) * 0x800000 - _DAT_00000c1c != 0) ||
     (cVar1 != '\0' || cVar2 != '\0')) {
    if (((*(ushort *)(iVar4 + 0x96) & 0x1fc) < 0x1fc) || (cVar1 != '\0' || cVar2 != '\0'))
    goto LAB_000009d4;
    uVar6 = 4;
  }
  else {
    uVar6 = 5;
  }
  FUN_0000310c(uVar6);
LAB_000009d4:
  if ((uVar5 & 1) == 0) {
    enableIRQinterrupts();
  }
  return;
}



/* =========================================================
 * 000009dc  FUN_000009dc  size=110
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_000009dc(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 *param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_18;
  
  if (param_2 + _DAT_00000c20 == 0) {
    uStack_18 = *_DAT_00000c28;
    *_DAT_00000c2c = 3;
    FUN_00003118(&uStack_18);
    *_DAT_00000c34 = _DAT_00000c30;
  }
  else {
    if (param_2 + _DAT_00000c20 + _DAT_00000c24 != 0) {
      return 1;
    }
    iVar1 = param_1 * _DAT_00000bec + _DAT_00000bf0;
    if (((*(char *)(iVar1 + 0xb6e) == '\x01') || (*(char *)(iVar1 + 0xb82) == '\x02')) &&
       (*(char *)(_DAT_00000c38 + param_1) == '\0')) {
      uStack_18 = param_4;
      uVar2 = FUN_00003124(param_1,0x16,param_2);
      *param_6 = uVar2;
    }
    else {
      *param_6 = 3;
    }
  }
  return 0;
}



/* =========================================================
 * 00000a4a  FUN_00000a4a  size=104
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000a4a(int param_1)

{
  int iVar1;
  
  iVar1 = _DAT_00000bec * param_1 + _DAT_00000bf0;
  *(undefined1 *)(iVar1 + 0x443) = 1;
  *(undefined1 *)(iVar1 + 0x442) = 1;
  FUN_00003130(param_1,0);
  *(undefined1 *)(iVar1 + 0xe26) = 1;
  if (*(char *)(iVar1 + 0xb6d) != '\x01') {
    FUN_0000313c(param_1,10);
    return;
  }
  if (*(char *)(iVar1 + 0xb82) == '\x02') {
    FUN_00003148(param_1);
  }
  FUN_00003154(param_1,_DAT_00000c3c,10);
  *(undefined1 *)(param_1 * 0x24 + _DAT_00000c40 + 10) = 1;
  return;
}



/* =========================================================
 * 00000ab2  FUN_00000ab2  size=26
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000ab2(int param_1,undefined4 param_2,int param_3)

{
  if ((*(char *)(param_1 * 0x24 + _DAT_00000c40 + 10) == '\0') && (param_3 != 0x72)) {
    FUN_00003160();
  }
  return;
}



/* =========================================================
 * 00000acc  FUN_00000acc  size=20
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00000acc(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0000316c();
  if (*(char *)(_DAT_00000c38 + param_1) == '\x02') {
    uVar1 = 0x72;
  }
  return uVar1;
}



/* =========================================================
 * 00000b02  FUN_00000b02  size=144
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000b02(int param_1,int param_2,undefined1 *param_3)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  
  *param_3 = 1;
  iVar8 = param_1 * 0x24 + _DAT_00000c40;
  bVar1 = *(byte *)(iVar8 + 0x1c);
  iVar4 = _DAT_00000bec * param_1 + _DAT_00000bf0;
  if (param_2 == 0x1a) {
    pcVar7 = (char *)(iVar8 + 0x1c);
    uVar6 = 0;
    puVar5 = (uint *)(iVar4 + 0x3dc);
    do {
      cVar2 = *pcVar7;
      uVar3 = *puVar5;
      pcVar7 = pcVar7 + 1;
      puVar5 = (uint *)((int)puVar5 + 1);
      if (cVar2 != (char)uVar3) {
        uVar6 = *(uint *)(iVar4 + 0x3dc);
        *(undefined4 *)(iVar8 + 0x20) = *(undefined4 *)(iVar4 + 0x3e0);
        *(uint *)(iVar8 + 0x1c) = uVar6;
        goto LAB_00000b88;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < 8);
  }
  else {
    if (param_2 == 0x1b) {
      if (*(int *)(iVar8 + 0xc) == *(int *)(iVar4 + 1000)) goto LAB_00000b7e;
      *(int *)(iVar8 + 0xc) = *(int *)(iVar4 + 1000);
    }
    else {
      if (param_2 != 0x40) {
        return;
      }
      if (*(int *)(iVar8 + 0x10) == *(int *)(iVar4 + 0xb74)) goto LAB_00000b7e;
      *(int *)(iVar8 + 0x10) = *(int *)(iVar4 + 0xb74);
    }
    uVar6 = (uint)*(byte *)(iVar4 + 0x3dc);
LAB_00000b88:
    if ((uVar6 & 1) != 0 || (bVar1 & 1) != 0) {
      return;
    }
  }
LAB_00000b7e:
  *param_3 = 0;
  return;
}



/* =========================================================
 * 00000b92  FUN_00000b92  size=94
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000b92(int param_1,int param_2,undefined1 *param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = param_1 * _DAT_00000bec + _DAT_00000bf0;
  iVar2 = param_1 * 0x24 + _DAT_00000c40;
  if (param_2 == 0x18) {
    uVar1 = *(ushort *)(iVar4 + 0xdfc);
    if (*(ushort *)(iVar2 + 0x18) == uVar1) goto LAB_00000bcc;
    uVar5 = *(uint *)(iVar2 + 0x18);
    *(ushort *)(iVar2 + 0x18) = uVar1;
    if ((uVar1 & 1) != 0) {
      return;
    }
    uVar5 = uVar5 & 0xffff;
  }
  else {
    if (param_2 != 0x19) {
      return;
    }
    uVar5 = *(uint *)(iVar2 + 0x14);
    uVar3 = *(uint *)(iVar4 + 0x3e4);
    if (uVar5 == uVar3) goto LAB_00000bcc;
    *(uint *)(iVar2 + 0x14) = uVar3;
    if ((uVar3 & 1) != 0) {
      return;
    }
  }
  if ((uVar5 & 1) != 0) {
    return;
  }
LAB_00000bcc:
  *param_3 = 0;
  return;
}



/* =========================================================
 * 00000c52  FUN_00000c52  size=60
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000c52(void)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  
  iVar1 = _DAT_00001030;
  *(undefined4 *)(_DAT_00001030 + 0x10) = *(undefined4 *)(_DAT_0000102c + 0xc);
  iVar2 = _DAT_00001034;
  uVar4 = 0;
  do {
    iVar5 = uVar4 * _DAT_00001038 + iVar2;
    *(undefined4 *)(iVar5 + 0x48) = *(undefined4 *)(iVar1 + 0x10);
    uVar4 = uVar4 + 1 & 0xff;
    *(undefined4 *)(iVar5 + 0x60) = *(undefined4 *)(iVar1 + 0x10);
    puVar3 = _DAT_0000103c;
  } while (uVar4 < 2);
  FUN_00003178(_DAT_0000103c + 2,_DAT_00001030 + 0x16,0xe);
  *(undefined1 *)(_DAT_00001040 + 4) = 1;
  *puVar3 = 1;
  return;
}



/* =========================================================
 * 00000c8e  FUN_00000c8e  size=270
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000c8e(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined1 uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  
  piVar2 = *(int **)(_DAT_00001044 + param_1 * 4);
  if (*piVar2 == 0) {
    return;
  }
  *piVar2 = 0;
  iVar3 = _DAT_00001048;
  iVar7 = param_1 * 0x24 + _DAT_0000103c + 0x14;
  if (*(char *)(iVar7 + 10) == '\x01') {
LAB_00000cea:
    *(undefined1 *)(iVar7 + 10) = 0;
  }
  else {
    cVar1 = *(char *)(_DAT_0000104c + param_1);
    iVar6 = param_1 * _DAT_00001038 + _DAT_00001034;
    if (cVar1 == '\x15') {
      iVar3 = FUN_0000304c(param_1);
      if ((iVar3 == 0) || (iVar3 = FUN_00003184(param_1), iVar3 == 0)) {
        if (*(byte *)(iVar6 + 0xb6a) < 0x32) {
          uVar4 = 0x16;
        }
        else {
          uVar4 = 0xbe;
        }
      }
      else {
        uVar4 = 0x96;
      }
      goto LAB_00000d16;
    }
    if (cVar1 == '/') {
      if (*(char *)(_DAT_00001048 + param_1) == -0x42) {
        FUN_0000313c(param_1,0xbe,_DAT_0000104c,_DAT_00001034,param_4);
        FUN_00003190(param_1);
        return;
      }
LAB_00000d74:
      if (*(char *)(iVar3 + param_1) == -0x41) {
        *(undefined1 *)(iVar6 + 0xe27) = *(undefined1 *)(iVar6 + 0xe28);
      }
    }
    else {
      pcVar5 = (char *)(_DAT_00001038 * param_1 + _DAT_00001034 + 0xe00);
      if (cVar1 != 'J') {
        if (cVar1 == '6') {
          if ((*pcVar5 == '\x04') || (*pcVar5 == '\x05')) goto LAB_00000d5e;
        }
        else if (cVar1 == 'V') {
          if ((*pcVar5 == '\b') || (*pcVar5 == '\t')) goto LAB_00000d5e;
        }
        else {
          if (cVar1 != -0x7c) goto LAB_00000d66;
          if (*pcVar5 == '\x17') goto LAB_00000d5e;
        }
        goto LAB_00000d74;
      }
      if (*pcVar5 != '\f') goto LAB_00000d74;
LAB_00000d5e:
      FUN_000030b8(param_1,1);
LAB_00000d66:
      if ((*(char *)(_DAT_0000104c + param_1) != -0x67) || (*(char *)(iVar3 + param_1) != -0x66))
      goto LAB_00000d74;
      *(undefined1 *)(iVar6 + 0xc14) = 0;
    }
    if (*(char *)(iVar7 + 10) == '\x01') goto LAB_00000cea;
  }
  uVar4 = *(undefined1 *)(iVar3 + param_1);
LAB_00000d16:
  FUN_0000313c(param_1,uVar4);
  return;
}



/* =========================================================
 * 00000d9c  FUN_00000d9c  size=84
 * callers: 00000df0
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00000d9c(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = 0x12;
  if (param_2 == 0) {
    if (*(char *)(_DAT_0000104c + param_1) == 'r') {
      iVar3 = _DAT_00001038 * param_1 + _DAT_00001034;
      *(byte *)(iVar3 + 0x3ef) = *(byte *)(iVar3 + 0x3ef) | 0x80;
      return 0x74;
    }
    if (*(char *)(_DAT_0000104c + param_1) == 'u') {
      return 0x77;
    }
  }
  else if ((param_2 == 1) || (param_2 == 2)) {
    cVar1 = *(char *)(_DAT_0000104c + param_1);
    if (cVar1 == -0x6a) {
      return 0x98;
    }
    if (cVar1 == -99) {
      return 0x9f;
    }
    if (cVar1 == -0x60) {
      uVar2 = 0xa2;
    }
  }
  return uVar2;
}



/* =========================================================
 * 00000df0  FUN_00000df0  size=1006
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00000df0(int param_1,ushort *param_2,undefined1 *param_3)

{
  char cVar1;
  char cVar2;
  ushort uVar3;
  short sVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined4 uStack_34;
  
  *(undefined1 *)(_DAT_00001050 + param_1) = 0;
  uVar3 = *param_2;
  cVar1 = (char)param_2[0x84];
  uVar11 = (uVar3 & 0x7fff) >> 0xc;
  sVar4 = -((short)uVar3 >> 0xf);
  uVar14 = uVar3 & 0x1f;
  FUN_0000319c(param_1,cVar1,uVar14,uVar11,*(undefined4 *)(param_2 + 2),sVar4);
  iVar9 = _DAT_00001054;
  iVar10 = _DAT_0000104c;
  iVar6 = param_1 * _DAT_00001038 + _DAT_00001034;
  iVar7 = iVar6 + 0xb80;
  iVar8 = iVar6 + 0x3c0;
  if (uVar11 == 0 && sVar4 == 0) {
    if (((((uVar3 & 0x1f) == 0) || (uVar14 - 0xe < 2)) || (uVar14 - 0x16 < 10)) ||
       ((uVar14 == 0x12 || (uVar14 == 0x11)))) goto LAB_00000eb8;
    iVar12 = param_1 * _DAT_00001038 + _DAT_00001034;
    if (uVar14 == 10) {
      iVar10 = FUN_00003094(param_1);
      if (iVar10 == 0) {
LAB_00001064:
        uVar13 = 0x11;
LAB_00000fa0:
        FUN_000031a8(param_1,uVar13);
        goto LAB_0000120a;
      }
      if (*(char *)(iVar12 + 0xb6d) == '\x01') {
        iVar10 = (uint)*(byte *)(iVar8 + 8) << 0x1b;
LAB_0000100a:
        if (-1 < iVar10) goto LAB_00000f6e;
      }
      else if (*(char *)(iVar12 + 0xb6d) == '\0') {
        iVar10 = (uint)*(byte *)(iVar8 + 8) << 0x19;
        goto LAB_0000100a;
      }
      uStack_34 = 0x35;
    }
    else {
      if (uVar14 < 0xb) {
        if (uVar14 == 1) {
          *(undefined1 *)(iVar6 + 0xea4) = 2;
          goto LAB_0000120a;
        }
        if (uVar14 == 7) {
          if (*(char *)(_DAT_0000104c + param_1) != *(char *)(_DAT_0000105c + param_1)) {
            uVar13 = 9;
            goto LAB_00000fa0;
          }
          *(undefined1 *)(iVar6 + 0xc14) = 1;
          if (*(char *)(iVar12 + 0xb6d) == '\x01') {
            uStack_34 = 0x16;
          }
          else {
            if (*(char *)(iVar9 + param_1) != '\x01') goto LAB_00000f6e;
            uStack_34 = 0xc;
          }
          goto LAB_00000f78;
        }
        if (uVar14 == 8) {
          if (*(char *)(_DAT_0000104c + param_1) == '*') {
LAB_00000fa8:
            *(undefined1 *)(iVar6 + 0xc14) = 1;
            uStack_34 = 0xd;
            goto LAB_00000f78;
          }
          if (*(char *)(_DAT_0000104c + param_1) == '\x17') {
            if (*(char *)(_DAT_00001054 + param_1) == '\x01') goto LAB_00000fa8;
            if (*(char *)(_DAT_00001054 + param_1) == '\0') {
              *(undefined1 *)(iVar6 + 0xc14) = 1;
              goto LAB_00000f6e;
            }
          }
          uVar13 = 8;
          goto LAB_00000fa0;
        }
        if (uVar14 != 9) {
          return 1;
        }
        iVar10 = FUN_00003094(param_1);
        if (iVar10 == 0) goto LAB_00001064;
        if (*(char *)(iVar12 + 0xb6e) == '\0') {
          iVar10 = (uint)*(ushort *)(iVar8 + 8) << 0x11;
LAB_00000fdc:
          if (-1 < iVar10) goto LAB_00000f6e;
        }
        else if (*(char *)(iVar12 + 0xb6e) == '\x01') {
          iVar10 = (uint)*(ushort *)(iVar8 + 8) << 0x13;
          goto LAB_00000fdc;
        }
        uStack_34 = 0x53;
        goto LAB_00000f78;
      }
      if (uVar14 != 0xb) {
        if (uVar14 != 0x10) {
          if ((uVar14 != 0x14) && (uVar14 != 0x15)) {
            return 1;
          }
          FUN_00000690(param_1,0x13);
          goto LAB_0000120a;
        }
        uStack_34 = 0x12;
        if (*(char *)(iVar6 + 0xb82) == '\x02') {
          if (*(char *)(_DAT_0000104c + param_1) == -0xd) {
            *param_3 = 0;
            return 0;
          }
          *(uint *)(iVar6 + 0xb74) = *(uint *)(iVar6 + 0xb74) | 1;
          FUN_00002ff8(param_1,0x40);
          cVar2 = *(char *)(iVar10 + param_1);
          iVar10 = param_1 * _DAT_00001484 + _DAT_00001488;
          if (cVar2 == '\x0e') {
            cVar1 = *(char *)(iVar10 + 0xe10);
            if (cVar1 == '\a') {
              *(undefined1 *)(iVar6 + 0xc15) = 0;
            }
            else if (cVar1 == '\b') {
              *(undefined1 *)(iVar6 + 0xc16) = 0;
            }
            else if (cVar1 == '\x11') {
              *(undefined1 *)(iVar6 + 0xc1a) = 0;
            }
          }
          else if (cVar2 == '\x1a') {
            *(undefined1 *)(iVar6 + 0xc1b) = 0;
          }
          else if (cVar2 == '6') {
            *(undefined1 *)(iVar6 + 0xc18) = 0;
          }
          else if (cVar2 == 'V') {
            *(undefined1 *)(iVar6 + 0xc17) = 0;
          }
          else if (cVar2 == 'J') {
            *(undefined1 *)(iVar6 + 0xc19) = 0;
            if (((*(char *)(iVar12 + 0xb6b) != '\x02') &&
                (1 < (*(ushort *)(iVar8 + 0x14) & 0x1fff) >> 0xb)) &&
               (iVar9 = FUN_000031b4(param_1), iVar9 != 0)) {
              iVar9 = FUN_000031c0(param_1,1);
              if (iVar9 == 0) {
                FUN_000031cc(param_1,0x1a,400,_DAT_0000148c);
              }
              else {
                *(undefined1 *)(iVar12 + 0xb6b) = 2;
              }
              FUN_00002ff8(param_1,0x1c);
            }
            if (*(char *)(iVar10 + 0xe00) == '\f') {
              FUN_000030b8(param_1,0);
            }
          }
          else if ((*(char *)(iVar6 + 0xc14) == '\x02') || (*(char *)(iVar6 + 0xc14) == '\x05')) {
            uStack_34 = FUN_00000d9c(param_1,cVar1);
          }
          goto LAB_00000f78;
        }
        uVar13 = 0x13;
        goto LAB_00000fa0;
      }
      iVar10 = FUN_00003094(param_1);
      if (iVar10 == 0) goto LAB_00001064;
      if ((int)((uint)*(ushort *)(iVar8 + 8) << 0x15) < 0) {
        uStack_34 = 0x4f;
        goto LAB_00000f78;
      }
LAB_00000f6e:
      if (*(char *)(iVar7 + 2) == '\x02') {
        uStack_34 = 0x11;
      }
      else {
        uStack_34 = 0x2d;
      }
    }
  }
  else {
    if ((uVar11 == 0) || (sVar4 != 0)) {
      if ((sVar4 == 1) &&
         ((((((uVar3 & 0x1f) == 0 || (uVar14 - 0xf < 0x11)) || (uVar14 == 1)) ||
           ((uVar14 == 8 || (uVar14 == 10)))) ||
          ((uVar14 == 0xc || ((uVar14 == 0xd || (uVar14 == 0xe)))))))) {
        if (((int)((uint)*(byte *)(_DAT_00001030 + 0x98) << 0x1b) < 0) &&
           (((short)param_2[1] < 0 && (*(char *)(iVar6 + 0xb82) == '\x02')))) {
          FUN_00003154(param_1,_DAT_00001058,0x11);
          goto LAB_00000f2c;
        }
        goto LAB_00000eb8;
      }
      if (uVar11 == 0) {
        return 1;
      }
      if (sVar4 != 0) {
        return 1;
      }
    }
    else if ((((uVar3 & 0x1f) == 0) || (uVar14 - 8 < 7)) || (uVar14 - 0x10 < 0x10)) {
LAB_00000eb8:
      FUN_00000690(param_1,0x13);
LAB_00000f2c:
      *param_3 = 1;
      return 0;
    }
    if (uVar14 != 3) {
      return 1;
    }
    uVar11 = *(uint *)(param_2 + 2);
    *(byte *)(iVar6 + 0xe2c) = *(byte *)(iVar6 + 0xe2c) & 0xef;
    iVar10 = FUN_000031d8(param_1);
    if (iVar10 == 0) {
      FUN_00002ff8(param_1,0x2f);
      goto LAB_0000120a;
    }
    if (*(char *)(iVar7 + 2) == '\x02') {
      if (cVar1 == '\0') {
        uVar5 = 1;
      }
      else {
        uVar5 = 4;
      }
      *(undefined1 *)(iVar6 + 0xc14) = uVar5;
    }
    *(undefined1 *)(iVar6 + 0x443) = 1;
    *(uint *)(iVar8 + 0x1c) = *(uint *)(iVar8 + 0x1c) | 0x8000000;
    FUN_000031e4();
    FUN_00002ff8(param_1,8);
    FUN_00002ff8(param_1,0x1a);
    if (uVar11 >> 0x1c == 5) {
      uStack_34 = 0x45;
    }
    else {
      if (uVar11 >> 0x1c != 8) goto LAB_0000120a;
      uStack_34 = 0x46;
    }
  }
LAB_00000f78:
  FUN_0000066a(param_1,uStack_34);
LAB_0000120a:
  *param_3 = 1;
  return 0;
}



/* =========================================================
 * 00001216  FUN_00001216  size=44
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001216(int param_1)

{
  if (((*(char *)(_DAT_00001490 + 7) != '\0') && (param_1 != 0xff)) &&
     (*(char *)(param_1 * 4 + _DAT_00001494 + 3) == '\0')) {
    FUN_000031f0(param_1 * 0x100 + _DAT_00001498,0x8000,0xf);
  }
  return;
}



/* =========================================================
 * 00001242  FUN_00001242  size=52
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001242(int param_1)

{
  FUN_000031fc(param_1,4);
  if ((*(byte *)(_DAT_00001484 * param_1 + _DAT_00001488 + 0x3d4) & 3) == 0) {
    FUN_00003214(param_1,0);
  }
  else {
    FUN_00003208(param_1,0);
  }
  return;
}



/* =========================================================
 * 00001276  FUN_00001276  size=22
 * ========================================================= */

void FUN_00001276(undefined4 param_1)

{
  FUN_00003220();
  FUN_0000322c(0x55,0,1,param_1);
  return;
}



/* =========================================================
 * 0000128c  FUN_0000128c  size=30
 * ========================================================= */

void FUN_0000128c(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  FUN_00003238();
  if (param_1 == 0) {
    uVar1 = 1;
    uVar2 = 0x80;
  }
  else {
    uVar1 = 2;
    uVar2 = 0x100;
  }
  FUN_000030e8(uVar1 | uVar2);
  return;
}



/* =========================================================
 * 000012aa  FUN_000012aa  size=44
 * callers: 000012d6
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000012aa(int param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = _DAT_00001484 * param_1 + _DAT_00001488;
  if (*(char *)(iVar2 + 0xeaa) == '\x01') {
    bVar1 = *(byte *)(iVar2 + 0xeab);
  }
  else {
    if (*(char *)(iVar2 + 0xeaa) != '\x02') {
      return 0;
    }
    bVar1 = *(byte *)(iVar2 + 0xeac);
  }
  if (bVar1 != param_2) {
    return 0;
  }
  return 1;
}



/* =========================================================
 * 000012d6  FUN_000012d6  size=672
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000012d6(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  
  iVar7 = param_1 * _DAT_00001484 + _DAT_00001488;
  cVar1 = *(char *)(iVar7 + 0xeae);
  uVar8 = 0x100;
  if (cVar1 == 'a') {
    if (param_1 == 0) {
      uVar3 = 1;
    }
    else {
      uVar3 = 2;
    }
    FUN_000030f4(uVar3);
    iVar6 = FUN_00003250(param_1);
    if ((iVar6 == 0) ||
       (((*(char *)(iVar7 + 0xdff) != '\0' || ((int)((uint)*(byte *)(iVar7 + 0xcb1) << 0x1b) < 0))
        && (iVar6 = FUN_0000325c(param_1), iVar6 == 0)))) {
      FUN_00003238(param_1);
      if (param_1 == 0) {
        uVar2 = 1;
        uVar8 = 0x80;
      }
      else {
        uVar2 = 2;
      }
      FUN_000030e8(uVar2 | uVar8);
    }
    else if ((*(char *)(iVar7 + 0x443) == '\0') && (*(char *)(iVar7 + 0xdff) == '\0')) {
      iVar6 = FUN_0000325c(param_1);
      if (iVar6 == 0) {
        FUN_000031cc(param_1,7,0x28,_DAT_000014a0);
      }
      else {
        iVar6 = FUN_0000325c(param_1);
        if (iVar6 != 0) {
          FUN_000031fc(param_1,7);
        }
      }
    }
    if (((*(int *)(_DAT_0000149c + param_1 * 4) != 0) && (*(char *)(iVar7 + 0xc10) == '\0')) &&
       ((*(int *)(iVar7 + 0xb00) != 0 && (uVar8 = FUN_0000325c(param_1), 3 < uVar8)))) {
      FUN_00003268(param_1);
    }
    if (((*(uint *)(iVar7 + 0xb74) & 0x1fffffff) >> 0x1b == 2) &&
       (iVar7 = FUN_000012aa(param_1,5), iVar7 != 0)) {
      if (*(char *)(_DAT_000014a4 + param_1) == '\x01') {
        *(undefined1 *)(_DAT_000014a8 + param_1) = 0x2a;
        *(undefined1 *)(_DAT_000014ac + param_1) = 0x2a;
        iVar7 = FUN_00003064(param_1);
        if (iVar7 != 0) {
          FUN_00003070(param_1);
        }
      }
      else if ((*(char *)(_DAT_000014a8 + param_1) != '*') &&
              (*(char *)(_DAT_000014a4 + param_1) != '\x03')) {
        *(undefined1 *)(_DAT_000014a4 + param_1) = 2;
      }
    }
    FUN_00003274(param_1);
    return 0;
  }
  if (cVar1 == 'b') {
    if ((*(char *)(iVar7 + 0xeab) != '\x01') || (*(char *)(iVar7 + 0xeac) != '\x01')) {
      FUN_000031cc(param_1,4,0x1e0,_DAT_000018ac,param_4);
      if (*(char *)(iVar7 + 0xeab) != '\x01') {
        return 0;
      }
      if (*(char *)(iVar7 + 0xeac) != '\x01') {
        return 0;
      }
    }
    if (param_1 == 0) {
      uVar3 = 1;
    }
    else {
      uVar3 = 2;
    }
    FUN_000030f4(uVar3);
    FUN_000031fc(param_1,7);
    return 0;
  }
  iVar6 = param_1 * _DAT_00001484 + _DAT_00001488;
  if (cVar1 == 'e') {
    if ((*(byte *)(iVar7 + 0xeab) < 3) && (*(byte *)(iVar7 + 0xeac) < 3)) {
      uVar5 = 0x28;
      uVar4 = 7;
      uVar3 = _DAT_000018a0;
    }
    else {
      FUN_000031fc(param_1,7);
      if (*(char *)(_DAT_000018a4 + param_1) == '\0') {
        return 0;
      }
      iVar7 = FUN_00003250(param_1);
      if (iVar7 != 1) {
        iVar7 = FUN_00000548(param_1);
        if (iVar7 == 0) {
          return 0;
        }
        if ((*(byte *)(iVar6 + 0x3d4) & 3) != 0) {
          FUN_00003208(param_1,0);
          return 0;
        }
        FUN_00003214(param_1,0);
        return 0;
      }
      if (((*(ushort *)(iVar6 + 0x3d4) & 0x3ff) >> 8 != 1) ||
         ((*(ushort *)(iVar6 + 0x3d4) & 3) != 2)) {
        FUN_0000328c(param_1,1);
        return 0;
      }
      FUN_00003298(param_1);
      FUN_00003280(param_1,0x45);
      uVar5 = 0x10;
      uVar4 = 0;
      uVar3 = _DAT_000018a8;
    }
LAB_00001550:
    FUN_000031cc(param_1,uVar4,uVar5,uVar3,param_4);
    return 0;
  }
  if (cVar1 != 'g') {
    return 1;
  }
  bVar9 = *(char *)(iVar7 + 0xeab) == '\x02';
  do {
    if (bVar9) goto LAB_000014b0;
    cVar1 = *(char *)(iVar7 + 0xeac);
    bVar9 = true;
  } while (cVar1 == '\x02');
  if (*(char *)(iVar7 + 0xeab) == '\x01') {
    if (cVar1 == '\x01') {
LAB_000014b0:
      FUN_000031fc(param_1,1);
      FUN_00003280(param_1,100);
      uVar5 = 0x1e0;
      uVar4 = 4;
      uVar3 = _DAT_0000189c;
      goto LAB_00001550;
    }
  }
  else if (cVar1 != '\x01') {
    *(uint *)(iVar6 + 0x3dc) = *(uint *)(iVar6 + 0x3dc) & 0xfffffff0;
    FUN_00003244(param_1);
    goto LAB_00001332;
  }
  *(uint *)(iVar6 + 0x3dc) = (*(uint *)(iVar6 + 0x3dc) & 0xfffffff1) + 8 | 1;
LAB_00001332:
  FUN_00002ff8(param_1,0x1a);
  if (param_1 == 0) {
    uVar2 = 1;
    uVar8 = 0x80;
  }
  else {
    uVar2 = 2;
  }
  FUN_000030e8(uVar2 | uVar8);
  return 0;
}



/* =========================================================
 * 000015a2  FUN_000015a2  size=64
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000015a2(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  
  uVar1 = 0;
  puVar3 = (uint *)(param_1 * 0x100 + _DAT_000018b0);
  uVar2 = puVar3[2];
  if ((uVar2 & 1) == 0) {
    if ((int)(uVar2 << 0x1d) < 0) {
      FUN_000032b0(param_1,0,puVar3[5]);
      uVar1 = 4;
    }
    else if ((int)(uVar2 << 0x1e) < 0) {
      *puVar3 = *puVar3 & 0xfffffff8;
      FUN_000032b0(param_1,5,puVar3[5]);
      uVar1 = 2;
    }
  }
  else {
    FUN_000032a4();
    uVar1 = 1;
  }
  puVar3[2] = uVar1;
  return;
}



/* =========================================================
 * 000015e2  FUN_000015e2  size=186
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000015e2(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == 0) {
    uVar1 = 0x80;
  }
  else {
    uVar1 = 0x100;
  }
  FUN_000030f4(uVar1 | 0x20);
  FUN_000032bc(param_1);
  iVar2 = FUN_000032c8(param_1);
  if (iVar2 == 0xff) {
    iVar2 = FUN_000032d4(param_1);
    if (iVar2 == 0) {
      iVar2 = FUN_000032e0(param_1);
      if (iVar2 == 0) {
        iVar2 = FUN_000032ec(param_1);
        iVar3 = param_1 * _DAT_000018b8 + _DAT_000018b4;
        if (((iVar2 == 0) || (*(char *)(iVar3 + 0xc24) != '\0')) ||
           ((*(char *)(iVar3 + 0xc25) != '\x01' &&
            (((*(char *)(iVar3 + 0xb6e) != '\x01' || (*(char *)(iVar3 + 0xb6b) == '\x02')) ||
             (*(char *)(param_1 * 0x24 + _DAT_000018bc + 9) != '\0')))))) {
          *(uint *)(iVar3 + 0x3c8) = *(uint *)(iVar3 + 0x3c8) & 0xfffff7ff;
          FUN_000032f8(param_1);
          return;
        }
        iVar2 = 0x4a;
      }
      else {
        iVar2 = 0x56;
      }
    }
    else {
      iVar2 = 0x36;
    }
  }
  iVar3 = FUN_00003064(param_1);
  if (iVar3 == 0) {
    return;
  }
  FUN_00003304(param_1,iVar2);
  return;
}



/* =========================================================
 * 0000169c  FUN_0000169c  size=90
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_0000169c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_00003310();
  if (iVar1 == 0) {
    iVar2 = param_1 * _DAT_000018b8 + _DAT_000018b4;
    *(undefined1 *)(iVar2 + 0xc25) = 0;
    iVar1 = _DAT_000018bc;
    *(undefined1 *)(param_1 * 0x24 + _DAT_000018bc + 9) = 1;
    if (*(char *)(iVar2 + 0xb6d) == '\0') {
      uVar3 = 0x2a;
    }
    else {
      uVar3 = 0x17;
    }
    FUN_00003154(param_1,_DAT_000018c0,uVar3,iVar1,param_4);
  }
  else {
    FUN_0000331c(param_1,0,0xb,0,0);
  }
  return *(undefined1 *)(_DAT_000018c4 + param_1);
}



/* =========================================================
 * 000016f6  FUN_000016f6  size=114
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000016f6(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_1 * _DAT_000018b8 + _DAT_000018b4;
  FUN_00003328(iVar3 + _DAT_000018c8,0x51,param_3,param_4,param_4);
  *(undefined1 *)(param_1 * 0x24 + _DAT_000018bc + 9) = 0;
  *(undefined1 *)(_DAT_000018cc + param_1) = 0;
  FUN_000031fc(param_1,0xe);
  FUN_000031fc(param_1,0x1c);
  iVar4 = _DAT_000018d4;
  uVar2 = 0;
  *(undefined4 *)(_DAT_000018d0 + 0x2c) = 0;
  do {
    iVar1 = uVar2 * 0x10 + iVar4;
    *(undefined1 *)(iVar1 + 6) = 0;
    uVar2 = uVar2 + 1 & 0xff;
    *(undefined1 *)(iVar1 + 7) = 0;
  } while (uVar2 < 5);
  uVar2 = 0;
  iVar4 = _DAT_000018c8 + 0xce;
  do {
    FUN_00003334(iVar3 + uVar2 * 0x14 + iVar4,10);
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 < 0xc);
  FUN_00003340(param_1);
  return;
}



/* =========================================================
 * 00001768  FUN_00001768  size=110
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001768(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 * 4 + _DAT_000018d8 + 2);
  FUN_0000334c(param_1,param_2,param_3,param_4,param_5,param_1,param_2,param_3,param_4);
  if ((((param_4 == 1) && (param_2 == 0)) && (*(char *)(_DAT_000018dc + 7) != '\0')) &&
     (*(char *)(_DAT_000018b8 * (uint)bVar1 + _DAT_000018b4 + 0xb64) == '\0')) {
    iVar2 = 1 << ((int)(char)((char)param_1 + '\x05') & 0x1fU);
    *_DAT_000018e0 = iVar2;
    FUN_000031f0(param_1 * 0x100 + _DAT_000018e4,0x8000,0xf);
    _DAT_000018e0[-0x20] = iVar2;
  }
  return;
}



/* =========================================================
 * 000017d6  FUN_000017d6  size=106
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000017d6(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = FUN_00003358(param_1,(*(uint *)(_DAT_000018e8 + param_1 * 4) & 0x7fffffff) >> 0x1c,param_3
                       ,param_4,param_4);
  iVar4 = param_1 * _DAT_000018b8 + _DAT_000018b4;
  bVar1 = *(byte *)(iVar4 + 0xb68);
  FUN_00003364(param_1);
  iVar3 = FUN_00003370(uVar2,1);
  if ((((iVar3 != 0) && (uVar2 == bVar1)) && (*(char *)(uVar2 * 4 + _DAT_000018d8 + 3) == '\0')) &&
     ((*(char *)(_DAT_000018dc + 7) != '\0' && (*(char *)(iVar4 + 0xb64) == '\x01')))) {
    FUN_000031f0(uVar2 * 0x100 + _DAT_000018e4,0x8000,0xf,0);
  }
  return;
}



/* =========================================================
 * 00001840  FUN_00001840  size=74
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001840(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  FUN_0000337c();
  if (param_2 != 0) {
    iVar3 = param_1 * _DAT_000018b8 + _DAT_000018b4;
    cVar1 = *(char *)(iVar3 + 0xeae);
    if (((cVar1 == '`') || (cVar1 == '%')) && (*(char *)(iVar3 + 0xeb0) == '\0')) {
      if (param_1 == 0) {
        uVar2 = 1;
        uVar4 = 0x80;
      }
      else {
        uVar2 = 2;
        uVar4 = 0x100;
      }
      FUN_000030f4(uVar2 | uVar4);
    }
    FUN_00002ff8(param_1,0x46);
  }
  return;
}



/* =========================================================
 * 0000188a  FUN_0000188a  size=18
 * ========================================================= */

void FUN_0000188a(undefined4 param_1)

{
  FUN_00002ff8(param_1,0x46);
  FUN_00003388(param_1);
  return;
}



/* =========================================================
 * 000018ec  FUN_000018ec  size=404
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000018ec(int param_1)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 auStack_24 [4];
  
  auStack_24[0] = *(undefined4 *)(_DAT_00001cec + 4);
  auStack_24[1] = *(undefined4 *)(_DAT_00001cec + 8);
  auStack_24[2] = *(undefined4 *)(_DAT_00001cec + 0xc);
  auStack_24[3] = *(undefined4 *)(_DAT_00001cec + 0x10);
  bVar1 = *(byte *)(_DAT_00001cf0 + 0x10);
  uVar4 = (**(uint **)(_DAT_00001cf4 + param_1 * 4) & 0x7fffffff) >> 0x1a;
  if (3 < uVar4 - 1) {
    return;
  }
  uVar10 = **(uint **)(uVar4 * 4 + _DAT_00001cf8 + -4) & 0xffff;
  uVar8 = *(uint *)(_DAT_00001cfc + 8);
  uVar4 = *(uint *)(_DAT_00001d00 + param_1 * 4);
  *(uint *)(_DAT_00001cfc + 8) = uVar4;
  if ((uVar4 & uVar8) == 0) goto LAB_00001a78;
  uVar4 = 0;
  bVar3 = (bool)isCurrentModePrivileged();
  if (bVar3) {
    uVar4 = isIRQinterruptsEnabled();
  }
  disableIRQinterrupts();
  FUN_00003394(param_1,0);
  iVar6 = _DAT_00001d10;
  if ((uVar4 & 1) == 0) {
    enableIRQinterrupts();
  }
  iVar5 = param_1 * _DAT_00001d04 + _DAT_00001d08;
  if (uVar10 < *(ushort *)(iVar5 + 0xb56)) {
    if (*(char *)(iVar5 + 0xb65) == '\0') {
      if (*(char *)(iVar5 + 0xeb5) == '\x01') {
        FUN_000033a0(param_1,0);
        FUN_000033ac(param_1,0);
        *(undefined1 *)(iVar5 + 0xeb5) = 0;
        iVar6 = param_1 * 0x100 + _DAT_00001d14;
        *(uint *)(iVar6 + 0x2c) = *(uint *)(iVar6 + 0x2c) & 0x7fffffff;
        if ((int)((uint)*(ushort *)(_DAT_00001cf0 + 0x66) << 0x10) < 0) {
          *(uint *)(_DAT_00001d18 + 0x2c) = *(uint *)(_DAT_00001d18 + 0x2c) & 0x7fffffff;
        }
      }
      else {
        cVar2 = *(char *)(_DAT_00001d10 + param_1);
        if (cVar2 == '\n') {
          uVar7 = 0xb;
        }
        else if (cVar2 == '<') {
          if ((bVar1 & 0x1f) >> 3 != 0) {
            uVar7 = auStack_24[(bVar1 & 0x1f) >> 3];
            uVar9 = 0x39;
            goto LAB_00001a16;
          }
          uVar7 = 0x39;
        }
        else {
          if (cVar2 != '.') {
            if (*(char *)(iVar5 + 0xc0f) == '\0') {
              FUN_000033d0(param_1,2,1);
              FUN_00002ff8(param_1,0x23);
              FUN_000031cc(param_1,0x13,2000,_DAT_00001d1c);
            }
            else {
              *(undefined1 *)(iVar5 + 0xc11) = 1;
              if ((*(char *)(iVar5 + 0xb6d) != '\0') && (*(char *)(iVar5 + 0xb6d) == '\x01')) {
                FUN_000033b8(param_1,*(undefined1 *)(iVar5 + 0xb68));
                *(undefined1 *)(iVar5 + 0xb68) = 0xff;
                FUN_000033c4(param_1,1);
                if (*(char *)(iVar6 + param_1) == -6) {
                  uVar7 = 0xf6;
                  goto LAB_00001a44;
                }
              }
            }
            goto LAB_00001a6c;
          }
          uVar7 = 0x2f;
        }
LAB_00001a44:
        FUN_0000313c(param_1,uVar7);
      }
    }
    else {
      *(undefined1 *)(iVar5 + 0xb65) = 0;
      FUN_000031fc(param_1,0xd);
      FUN_000033a0(param_1,0);
      FUN_000033ac(param_1,0);
      uVar9 = 0x1e;
      uVar7 = _DAT_00001d0c;
LAB_00001a16:
      FUN_00003154(param_1,uVar7,uVar9);
    }
  }
LAB_00001a6c:
  if (uVar10 < 0x1c) {
    FUN_000033ac(param_1,0);
  }
LAB_00001a78:
  FUN_000033dc(param_1);
  return;
}



/* =========================================================
 * 00001a80  FUN_00001a80  size=134
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_00001a80(int param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = _DAT_00001d24;
  if (((int)((uint)*_DAT_00001d20 << 0x1d) < 0) && ((*(ushort *)(_DAT_00001d24 + 0x22) & 3) != 2)) {
    FUN_000033e8(param_1);
  }
  if ((*(ushort *)(iVar3 + 0x22) & 3) != 0) {
    FUN_000033f4(param_1,1);
  }
  iVar3 = param_1 * _DAT_00001d04 + _DAT_00001d08;
  puVar1 = (uint *)(iVar3 + 0xb00);
  if ((((*puVar1 != 0) && (*(char *)(iVar3 + 0xb82) == '\x02')) &&
      ((int)((uint)*(byte *)(_DAT_00001cf0 + 0x76) << 0x1a) < 0)) &&
     ((*puVar1 & 0x1ffffff) >> 0x17 != 0)) {
    FUN_00003400(param_1);
  }
  FUN_0000340c(param_1);
  FUN_00003418(param_1);
  if (param_1 == 0) {
    uVar2 = 0x80;
  }
  else {
    uVar2 = 0x100;
  }
  FUN_000030e8(uVar2);
  return *(undefined1 *)(_DAT_00001d10 + param_1);
}



/* =========================================================
 * 00001b06  FUN_00001b06  size=62
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001b06(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,int param_6)

{
  if (((param_2 != 0) || (((param_4 != 0 && (param_3 == 0xf)) || (param_3 != 0x10)))) ||
     (((param_4 != 0 || (param_6 != 0)) ||
      (1 < *(byte *)(param_1 * _DAT_00001d04 + _DAT_00001d08 + 0xc14) - 2)))) {
    FUN_00003424();
  }
  return;
}



/* =========================================================
 * 00001b44  FUN_00001b44  size=110
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001b44(int param_1,int param_2,uint param_3,uint param_4,undefined2 param_5,uint param_6)

{
  byte bVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = param_1 * _DAT_00001d04 + _DAT_00001d08;
  puVar2 = (uint *)(iVar4 + _DAT_00001d28);
  uVar3 = 0x8000;
  if (param_2 == 0) {
    if ((*(char *)(iVar4 + 0xb82) != '\x02') && (param_3 == 1)) {
      *puVar2 = 0x8000;
      goto LAB_00001b6a;
    }
    bVar1 = *(byte *)(iVar4 + 0xb84);
  }
  else {
    bVar1 = *(byte *)(iVar4 + 0xb85);
  }
  uVar3 = (uint)bVar1 << 0xd | 0x8000;
  *puVar2 = uVar3;
LAB_00001b6a:
  *puVar2 = uVar3 | param_3 & 0x1f | (param_4 & 3) << 6 | (param_6 & 7) << 8;
  *(undefined2 *)((int)puVar2 + 2) = param_5;
  FUN_0000331c(param_1,param_2,0xf,1,0);
  return;
}



/* =========================================================
 * 00001bb2  FUN_00001bb2  size=60
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001bb2(int param_1)

{
  int iVar1;
  
  FUN_00003430();
  iVar1 = param_1 * _DAT_00001d04 + _DAT_00001d08;
  if (((*(char *)(iVar1 + 0xeab) == '\x01') && (*(char *)(iVar1 + 0xeac) == '\x01')) &&
     ((int)((uint)*(byte *)(iVar1 + 0x3d4) << 0x19) < 0)) {
    FUN_0000322c(0x55,1,1,param_1);
  }
  return;
}



/* =========================================================
 * 00001bee  FUN_00001bee  size=120
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001bee(uint param_1,uint param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = _DAT_00001d04 * param_1 + _DAT_00001d08;
  bVar2 = false;
  bVar1 = *(byte *)(iVar3 + 0xb68);
  *(undefined1 *)(iVar3 + 0xb68) = 0xff;
  uVar4 = 0;
  do {
    if (*(byte *)(uVar4 * 4 + _DAT_00001d2c + 2) == param_1) {
      if (((*_DAT_00001d20 & 7) >> 2 & ~param_2) == 0) {
        bVar2 = false;
LAB_00001c50:
        FUN_0000343c(param_1,uVar4,0);
      }
      else if ((*(char *)(iVar3 + 0xeb6) == '\x01') && (bVar1 == uVar4)) {
        bVar2 = true;
        *(char *)(iVar3 + 0xb68) = (char)uVar4;
      }
      else if (!bVar2) goto LAB_00001c50;
    }
    uVar4 = uVar4 + 1 & 0xff;
    if (3 < uVar4) {
      return;
    }
  } while( true );
}



/* =========================================================
 * 00001c66  FUN_00001c66  size=52
 * callers: 00002afe
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001c66(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  
  iVar2 = _DAT_00001d34;
  iVar1 = _DAT_00001d30;
  *(undefined1 *)(_DAT_00001d30 + 8) = 0xff;
  *(undefined1 *)(iVar2 + 0xc) = 0xff;
  iVar3 = *_DAT_00001d20;
  if (-1 < iVar3 << 0x1d) {
    return;
  }
  if (iVar3 << 0xe < 0) {
    uVar4 = 0;
  }
  else {
    if (-1 < iVar3 << 0xc) goto LAB_00001c88;
    uVar4 = 2;
  }
  *(undefined1 *)(iVar1 + 8) = uVar4;
LAB_00001c88:
  if (iVar3 << 0xd < 0) {
    uVar4 = 1;
  }
  else {
    if (-1 < iVar3 << 0xb) {
      return;
    }
    uVar4 = 3;
  }
  *(undefined1 *)(iVar2 + 0xc) = uVar4;
  return;
}



/* =========================================================
 * 00001c9a  FUN_00001c9a  size=212
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001c9a(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  
  iVar4 = _DAT_00001d04 * param_1 + _DAT_00001d08;
  *(ushort *)(iVar4 + 0xdfc) = *(ushort *)(iVar4 + 0xdfc) & 0xfffd;
  FUN_00003448(param_1,0,2,param_4,param_4);
  FUN_00003454(param_1,1);
  uVar1 = *(undefined1 *)(iVar4 + 0xb68);
  FUN_00003328(iVar4 + _DAT_00001d38,_DAT_00001d28 + -0xf9);
  *(undefined1 *)(iVar4 + 0xb68) = uVar1;
  FUN_00003460(param_1);
  *(undefined4 *)(_DAT_00001cfc + 8) = *(undefined4 *)(_DAT_00001cfc + 8);
  if (-1 < (int)((uint)*_DAT_00001d20 << 0x1d)) {
    FUN_0000346c(param_1);
    FUN_00003478(param_1,0);
    FUN_00003478(param_1,2);
  }
  *(undefined1 *)(iVar4 + 0xc36) = 0;
  FUN_00003484(param_1,0);
  FUN_00003394(param_1,0);
  FUN_00003490(param_1);
  FUN_0000349c(param_1);
  FUN_00003028(param_1,0);
  FUN_000034a8(param_1,1);
  FUN_000034b4(param_1,5);
  iVar2 = _DAT_00002190;
  *(undefined1 *)(iVar4 + 0xea3) = 0xff;
  *(undefined1 *)(iVar2 + param_1) = 1;
  iVar4 = param_1 * 0x100 + _DAT_00002194;
  *(uint *)(iVar4 + 0x38) = *(uint *)(iVar4 + 0x38) | 0x1800000;
  puVar3 = _DAT_00002198;
  *_DAT_00002198 = 0;
  puVar3[1] = 0;
  return;
}



/* =========================================================
 * 00001dbe  FUN_00001dbe  size=54
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_00001dbe(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  
  iVar1 = _DAT_000021a4;
  iVar3 = param_1 * _DAT_0000219c + _DAT_000021a0;
  if (*(char *)(iVar3 + 0xc7a) == '\0') {
    uVar2 = 0xe;
  }
  else {
    *(undefined1 *)(iVar3 + 0xc7a) = 0;
    uVar2 = 0xb;
  }
  *(undefined1 *)(iVar1 + param_1) = uVar2;
  FUN_00003304(param_1,*(undefined1 *)(_DAT_000021a8 + param_1));
  return *(undefined1 *)(_DAT_00002190 + param_1);
}



/* =========================================================
 * 00001df4  FUN_00001df4  size=40
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001df4(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar3 = isIRQinterruptsEnabled();
  }
  disableIRQinterrupts();
  FUN_000034c0();
  iVar2 = param_1 * 0x100 + _DAT_000021ac;
  *(uint *)(iVar2 + 0x1c) = (*(uint *)(iVar2 + 0x1c) & 0xfffffff9) + 2;
  if ((uVar3 & 1) == 0) {
    enableIRQinterrupts();
  }
  return;
}



/* =========================================================
 * 00001e1c  FUN_00001e1c  size=46
 * ========================================================= */

void FUN_00001e1c(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    if (param_4 == 0) {
      uVar2 = 6;
    }
    else {
      uVar2 = 7;
    }
  }
  else {
    if (((param_3 == 1) || (param_3 == 4)) || (param_3 == 0x10)) {
      iVar1 = 10;
    }
    else {
      iVar1 = 8;
    }
    uVar2 = iVar1 + param_4 & 0xff;
  }
  FUN_000034cc(param_1,uVar2);
  return;
}



/* =========================================================
 * 00001e50  FUN_00001e50  size=236
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00001e50(int param_1,int param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  
  param_2 = param_2 + param_3;
  bVar2 = true;
  if ((((*(int *)(param_2 + 0x44c) != 0) && (-1 < *(int *)(param_2 + 0x44c) << 6)) ||
      ((*(int *)(param_2 + 0x44c) != 0 &&
       (((*(char *)(param_2 + 0xcb4) != '\0' &&
         ((int)((uint)*(byte *)(_DAT_000021b0 + 0x12) << 0x1e) < 0)) &&
        (-1 < *(int *)(param_2 + 0x44c) << 5)))))) ||
     ((*(int *)(param_2 + 0xb00) != 0 && (-1 < *(int *)(param_2 + 0xb00) << 6)))) {
    bVar2 = false;
  }
  cVar1 = *(char *)(param_1 * _DAT_0000219c + _DAT_000021a0 + 0xe00);
  if (((*(char *)(param_2 + 0xc22) == '\0') && (bVar2)) && (*(char *)(param_2 + 0xc17) == '\x01')) {
    iVar3 = param_1 * _DAT_0000219c + _DAT_000021a0;
    if (*(char *)(param_2 + 0xb6e) == '\x01') {
      if ((*(int *)(iVar3 + 0x3c8) << 0x13 < 0) &&
         (((cVar1 == '\t' || (*(int *)(iVar3 + 0x3c8) << 0x12 < 0)) &&
          (-1 < (int)((uint)*(byte *)(iVar3 + 0xc6c) << 0x1e))))) {
        iVar3 = (uint)*(byte *)(iVar3 + 0xc6c) << 0x1a;
LAB_00001f22:
        if (-1 < iVar3) {
          return 1;
        }
      }
      goto LAB_00001f2a;
    }
    if ((*(char *)(param_2 + 0xb6e) != '\0') || (-1 < *(int *)(iVar3 + 0x3c8) << 0x11))
    goto LAB_00001f2a;
    if ((cVar1 == '\b') ||
       ((*(int *)(iVar3 + 0x3c8) << 0x10 < 0 || ((*(ushort *)(param_2 + 0xcf4) & 1) != 0)))) {
      iVar3 = (uint)*(byte *)(iVar3 + 0xc6c) << 0x19;
      goto LAB_00001f22;
    }
  }
  else {
LAB_00001f2a:
    if (cVar1 == '\b') goto LAB_00001f32;
  }
  if (cVar1 != '\t') {
    return 0;
  }
LAB_00001f32:
  FUN_000030b8(param_1,3);
  return 0;
}



/* =========================================================
 * 00001f3c  FUN_00001f3c  size=98
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001f3c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = _DAT_0000219c * param_1 + _DAT_000021a0;
  iVar3 = iVar2 + _DAT_000021b4;
  FUN_000034d8(param_1);
  if (((*(char *)(iVar2 + 0xe23) == '\x01') &&
      (**(int **)(_DAT_000021b8 + param_1 * 4) == _DAT_000021bc)) &&
     (*(char *)(_DAT_00002190 + param_1) == '\x04')) {
    FUN_000034e4(param_1);
    FUN_000034d8(param_1);
  }
  iVar1 = _DAT_00002198;
  if (*(char *)(iVar3 + 0x10a) == '\x01') {
    *(undefined1 *)(_DAT_00002198 + param_1) = 3;
  }
  if (*(char *)(iVar2 + 0xe22) == '\x01') {
    *(undefined1 *)(iVar1 + param_1) = 0;
  }
  return;
}



/* =========================================================
 * 00001f9e  FUN_00001f9e  size=48
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001f9e(int param_1)

{
  int iVar1;
  
  FUN_000034f0();
  iVar1 = _DAT_0000219c * param_1 + _DAT_000021a0;
  if ((*(byte *)(iVar1 + 0x3d4) & 0x3f) >> 3 < 2) {
    *(undefined1 *)(iVar1 + 0xb83) = 1;
    *(undefined1 *)(iVar1 + 0xb85) = 0;
  }
  return;
}



/* =========================================================
 * 00001fce  FUN_00001fce  size=54
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_00001fce(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_00003310();
  iVar1 = _DAT_00002190;
  if (iVar2 != 0) {
    if (*(char *)(_DAT_00002190 + param_1) == -0x68) {
      iVar2 = param_1 * _DAT_0000219c + _DAT_000021a0;
      *(undefined1 *)(iVar2 + 0xb83) = 1;
      *(undefined1 *)(iVar2 + 0xb85) = 0;
    }
    FUN_00003304(param_1,0x14);
  }
  return *(undefined1 *)(iVar1 + param_1);
}



/* =========================================================
 * 00002004  FUN_00002004  size=52
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002004(int param_1)

{
  int iVar1;
  
  if (*(char *)(_DAT_000021c0 + param_1) != *(char *)(_DAT_00002190 + param_1)) {
    iVar1 = _DAT_0000219c * param_1 + _DAT_000021a0;
    *(char *)(iVar1 + 0xb83) = *(char *)(iVar1 + 0xb82);
    *(bool *)(iVar1 + 0xb85) = *(char *)(iVar1 + 0xb82) == '\x02';
  }
  FUN_000034fc();
  return;
}



/* =========================================================
 * 00002038  FUN_00002038  size=48
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_00002038(int param_1)

{
  int iVar1;
  
  *(undefined1 *)(_DAT_000021a4 + param_1) = 0xe;
  iVar1 = param_1 * _DAT_0000219c + _DAT_000021a0;
  *(undefined1 *)(iVar1 + 0xb83) = 1;
  *(undefined1 *)(iVar1 + 0xb85) = 0;
  FUN_00003304(param_1,*(undefined1 *)(_DAT_000021a8 + param_1));
  return *(undefined1 *)(_DAT_00002190 + param_1);
}



/* =========================================================
 * 00002068  FUN_00002068  size=120
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002068(int param_1)

{
  bool bVar1;
  char *pcVar2;
  uint uVar3;
  
  FUN_00003508();
  FUN_00002ff8(param_1,0x18);
  pcVar2 = _DAT_000021c4;
  uVar3 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar3 = isIRQinterruptsEnabled();
  }
  disableIRQinterrupts();
  _DAT_000021c4[param_1] = '\0';
  if ((*pcVar2 == '\0') && (pcVar2[1] == '\0')) {
    if ((*(uint *)(_DAT_000021cc + 8) >> 0x1e != 2) && (*(uint *)(_DAT_000021d0 + 0xc) >> 0x1e != 2)
       ) {
      FUN_00003514(4,4,4,4,0);
      FUN_00003520();
    }
  }
  else {
    if (*_DAT_000021c8 == '\0') {
      *_DAT_000021c8 = '\x01';
    }
    else {
      *_DAT_000021c8 = '\0';
    }
    *(undefined1 *)(_DAT_000021b0 + 8) = 1;
  }
  if ((uVar3 & 1) == 0) {
    enableIRQinterrupts();
  }
  FUN_0000352c(param_1,0);
  return;
}



/* =========================================================
 * 000020e0  FUN_000020e0  size=116
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000020e0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1 * _DAT_0000219c + _DAT_000021a0;
  if ((*(char *)(iVar2 + 0xb6b) != '\x02') &&
     (((((*(ushort *)(iVar2 + 0x3d4) & 0x1fff) >> 0xb < 2 ||
        (iVar1 = FUN_000031b4(param_1), iVar1 == 0)) ||
       ((*(char *)(iVar2 + 0xb6e) == '\0' && ((*(ushort *)(iVar2 + 0x3d4) & 0x1fff) >> 0xb != 3))))
      || ((*(char *)(iVar2 + 0xc19) == '\0' || (iVar1 = FUN_00000574(param_1), iVar1 == 0)))))) {
    if (*(char *)(iVar2 + 0xe00) == '\f') {
      FUN_000030b8(param_1,3);
    }
    return 0;
  }
  return 1;
}



/* =========================================================
 * 00002154  FUN_00002154  size=64
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002154(int param_1)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = param_1 * _DAT_0000219c + _DAT_000021a0;
  uVar1 = *(ushort *)(iVar2 + 0x3d4);
  FUN_00003538();
  if (((int)((uint)*_DAT_000021d4 << 0x1d) < 0) && (*(char *)(iVar2 + 0xeb6) != '\0')) {
    *(ushort *)(iVar2 + 0x3d4) = *(ushort *)(iVar2 + 0x3d4) & 0xe7ff | uVar1 & 0x1800;
  }
  return;
}



/* =========================================================
 * 000021de  FUN_000021de  size=30
 * ========================================================= */

void FUN_000021de(int param_1,int param_2)

{
  param_2 = param_1 * 0x100 + param_2;
  *(uint *)(param_2 + 0x24) = (*(uint *)(param_2 + 0x24) & 0x81ffffff) + 0x18000000;
  FUN_00003478(param_1,3);
  return;
}



/* =========================================================
 * 000021fc  FUN_000021fc  size=24
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000021fc(int param_1)

{
  int iVar1;
  
  iVar1 = _DAT_000025c4;
  *(undefined1 *)(_DAT_000025c4 + param_1 * 0x24) = 1;
  FUN_00003544();
  *(undefined1 *)(iVar1 + param_1 * 0x24) = 0;
  return;
}



/* =========================================================
 * 00002214  FUN_00002214  size=186
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002214(int param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  
  uVar2 = _DAT_000025d8;
  iVar6 = param_1;
  if (param_5 == 0) {
    iVar4 = param_1 * _DAT_000025cc + _DAT_000025d0;
    puVar5 = (uint *)(iVar4 + _DAT_000025c8);
    if (param_3 == 4) {
      if (((int)((uint)*_DAT_000025d4 << 0x1d) < 0) ||
         ((iVar3 = FUN_00003550(param_1), iVar3 == 0 && (iVar3 = FUN_0000355c(param_1), iVar3 == 0))
         )) {
        uVar2 = *puVar5 & ~uVar2;
      }
      else {
        uVar2 = *puVar5 | uVar2;
      }
      *puVar5 = uVar2;
      for (uVar2 = 1; uVar2 < *(byte *)(iVar4 + 0xa4); uVar2 = uVar2 + 1) {
        iVar3 = iVar4 + uVar2 * 4;
        *(undefined4 *)(iVar3 + 0x8d8) = *(undefined4 *)(iVar3 + 0xa8);
      }
    }
    else if ((((param_3 == 0xf) && (*(char *)(_DAT_000025c4 + param_1 * 0x24) == '\x01')) &&
             ((*puVar5 & 0x1f) == 1)) && ((*puVar5 & 0xff) >> 6 == 1)) {
      if (param_2 == 0) {
        puVar1 = (undefined4 *)(iVar4 + 0x4c);
      }
      else {
        puVar1 = (undefined4 *)(iVar4 + 100);
      }
      *(undefined4 *)(iVar4 + 0x8e4) = *puVar1;
    }
  }
  FUN_00003568(param_1,param_2,param_3,param_4,param_5,iVar6);
  return;
}



/* =========================================================
 * 000022ce  FUN_000022ce  size=58
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_000022ce(int param_1)

{
  undefined4 uVar1;
  
  FUN_00003574();
  FUN_00003580(param_1);
  uVar1 = _DAT_000025e0;
  if (((int)((uint)*_DAT_000025d4 << 0x1d) < 0) && (*(char *)(_DAT_000025c4 + -0x14) != '\0')) {
    *(char *)(_DAT_000025c4 + -0x14) = '\0';
    uVar1 = _DAT_000025dc;
  }
  FUN_0000358c(param_1,uVar1,9);
  return *(undefined1 *)(_DAT_000025e4 + param_1);
}



/* =========================================================
 * 00002308  FUN_00002308  size=28
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002308(int param_1)

{
  FUN_00003598();
  *(undefined1 *)(_DAT_000025cc * param_1 + _DAT_000025d0 + 0xc14) = 0;
  return;
}



/* =========================================================
 * 00002324  FUN_00002324  size=34
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002324(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = 0;
  iVar3 = _DAT_000025c0 + 0x40;
  do {
    iVar2 = uVar1 * 0x100 + iVar3;
    *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0x7fffffff;
    uVar1 = uVar1 + 1 & 0xff;
  } while (uVar1 < 2);
  FUN_000035a4();
  return;
}



/* =========================================================
 * 00002348  FUN_00002348  size=32
 * ========================================================= */

void FUN_00002348(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  do {
    iVar2 = uVar1 * 0x100 + param_3 + 0x40;
    *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) | (param_3 + 0x40) * 0x1000000;
    uVar1 = uVar1 + 1 & 0xff;
  } while (uVar1 < 2);
  FUN_000035b0();
  return;
}



/* =========================================================
 * 00002368  FUN_00002368  size=62
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00002368(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_00003448(param_1,0);
  uVar2 = FUN_000035bc(param_1);
  iVar1 = _DAT_000025e8;
  if (((int)((uint)*_DAT_000025d4 << 0x1d) < 0) && ((*(ushort *)(_DAT_000025e8 + 0x22) & 3) != 2)) {
    FUN_000033e8(param_1);
  }
  if ((*(ushort *)(iVar1 + 0x22) & 3) != 0) {
    FUN_000033f4(param_1,1);
  }
  return uVar2;
}



/* =========================================================
 * 000023a6  FUN_000023a6  size=42
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000023a6(int param_1)

{
  FUN_000035c8();
  if (*(byte *)(_DAT_000025cc * param_1 + _DAT_000025d0 + 0xe00) - 0x1d < 10) {
    FUN_000030b8(param_1,1);
  }
  return;
}



/* =========================================================
 * 000023d0  FUN_000023d0  size=190
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000023d0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = _DAT_000025d0;
  iVar3 = _DAT_000025cc * (1U - param_1 & 0xff) + _DAT_000025d0;
  uVar2 = 1U - param_1 & 0xff;
  if (param_2 == 0) {
    if (((*(char *)(iVar3 + 0xb6d) == '\x01') || ((*(byte *)(iVar3 + 0x3dc) & 1) == 0)) ||
       ((*(char *)(iVar3 + 0xb6d) == '\0' && (*(char *)(iVar3 + 0xb68) == -1)))) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    iVar4 = param_1 * _DAT_000025cc + _DAT_000025d0;
    if (bVar1) {
      FUN_000033c4(param_1,0,iVar4,0xea0,param_4);
      *(undefined1 *)(iVar4 + 0xeba) = 0;
      return;
    }
    *(undefined1 *)(iVar4 + 0xeba) = 1;
  }
  else {
    if ((param_2 != 1) || (*(char *)(iVar3 + 0xb6d) != '\0')) {
      return;
    }
    if (((*(int *)(_DAT_000025ec + uVar2 * 4) != 0) ||
        ((*(uint *)(iVar3 + 0x3dc) & 0x3ffffff) >> 0x18 == 1)) &&
       ((*(ushort *)(_DAT_000025e8 + 0x22) & 3) == 1)) {
      iVar3 = FUN_000035d4(param_1,uVar2,0);
      uVar2 = 1U - iVar3 & 0xff;
      iVar4 = uVar2 * _DAT_000025cc + iVar4;
      FUN_000033b8(uVar2,*(undefined1 *)(iVar4 + 0xb68));
      *(undefined1 *)(iVar4 + 0xb68) = 0xff;
      *(undefined1 *)(iVar4 + 0xeba) = 1;
      FUN_000035e0(iVar3);
      return;
    }
  }
  return;
}



/* =========================================================
 * 0000248e  FUN_0000248e  size=224
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0000248e(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint auStack_28 [4];
  int iStack_18;
  
  auStack_28[0] = *(uint *)(_DAT_000025f0 + 0x14);
  auStack_28[1] = *(undefined4 *)(_DAT_000025f0 + 0x18);
  auStack_28[2] = *(undefined4 *)(_DAT_000025f0 + 0x1c);
  iVar1 = param_1 * _DAT_000025cc + _DAT_000025d0;
  iStack_18 = iVar1 + 0x3c0;
  iVar3 = param_2 * _DAT_000025cc + _DAT_000025d0;
  auStack_28[3] = iVar3;
  if (((*(uint *)(iVar1 + 0x3dc) & 0x3ffffff) >> 0x18 == 0) &&
     ((*(uint *)(iVar3 + 0x3dc) & 0x3ffffff) >> 0x18 == 0)) {
    param_2 = FUN_000035f8(param_1,param_2);
  }
  else {
    if ((*(uint *)(iVar1 + 0x3dc) & 0x3ffffff) >> 0x18 == 0) {
      uVar4 = FUN_000035ec(*(undefined4 *)
                            (iVar1 + ((*(uint *)(_DAT_000025ec + param_1 * 4) & 0x7fffffff) >> 0x1c)
                                     * 4 + 0x448));
    }
    else {
      uVar4 = *(uint *)((int)auStack_28 + (*(byte *)(iVar1 + 0xdfc) & 0xc));
    }
    if ((*(uint *)(iVar3 + 0x3dc) & 0x3ffffff) >> 0x18 == 0) {
      uVar2 = FUN_000035ec(*(undefined4 *)
                            (auStack_28[3] +
                             ((*(uint *)(_DAT_000025ec + param_2 * 4) & 0x7fffffff) >> 0x1c) * 4 +
                            0x448));
    }
    else {
      uVar2 = *(uint *)((int)auStack_28 + (*(byte *)(auStack_28[3] + 0xdfc) & 0xc));
    }
    if (uVar4 == uVar2) {
      if (((*(uint *)(iVar3 + 0x3dc) & 0x3ffffff) >> 0x18 != 0) &&
         ((*(uint *)(iStack_18 + 0x1c) & 0x3ffffff) >> 0x18 == 0)) {
        return param_1;
      }
    }
    else if (uVar2 < uVar4) {
      return param_1;
    }
  }
  return param_2;
}



/* =========================================================
 * 0000256e  FUN_0000256e  size=80
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0000256e(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 1U - param_1 & 0xff;
  uVar1 = FUN_00003604(param_1);
  iVar2 = _DAT_000025d0;
  *(undefined1 *)(_DAT_000025cc * param_1 + _DAT_000025d0 + 0xeba) = 0;
  if ((((*(ushort *)(_DAT_000025e8 + 0x22) & 3) != 0) &&
      (iVar2 = uVar3 * _DAT_000025cc + iVar2, *(char *)(iVar2 + 0xb6d) == '\0')) &&
     (*(char *)(iVar2 + 0xeba) == '\x01')) {
    FUN_000035e0(uVar3);
  }
  return uVar1;
}



/* =========================================================
 * 000025f4  FUN_000025f4  size=58
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000025f4(int param_1)

{
  int iVar1;
  
  *(undefined1 *)(param_1 * _DAT_000029d8 + _DAT_000029dc + 0xeba) = 0;
  *(undefined1 *)(param_1 * 0x24 + _DAT_000029e0 + 10) = 0;
  FUN_00003610(param_1);
  if (param_1 == 0) {
    iVar1 = 0x14;
  }
  else {
    iVar1 = 0x15;
  }
  *_DAT_000029e4 = 1 << iVar1;
  return;
}



/* =========================================================
 * 0000262e  FUN_0000262e  size=284
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000262e(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint uStack_18;
  
  iVar2 = param_1 * 0x100 + _DAT_000029e8;
  uStack_18 = 2;
  bVar1 = false;
  iVar6 = param_1 * 0x24 + _DAT_000029e0;
  puVar5 = (uint *)(param_1 * 0x100 + _DAT_000029ec);
  if (*(int *)(iVar2 + 8) * 0x4000 < 0) {
    FUN_0000361c(param_1);
    *(undefined4 *)(iVar6 + 4) = 0;
    FUN_00003628();
    FUN_00003634();
    uVar3 = 0x20000;
  }
  else {
    uVar4 = puVar5[5];
    if (((int)(uVar4 << 0x1e) < 0) || (*(char *)(_DAT_000029f0 + param_1) == 'F')) {
      *(undefined4 *)(iVar6 + 4) = 1;
    }
    FUN_00003628();
    FUN_00003634();
    if ((uVar4 & 1) == 0) {
      if (*(int *)(iVar6 + 4) == 0) {
        *puVar5 = *puVar5 & 0xfffffff8;
      }
    }
    else if ((int)(uVar4 << 0x18) < 0) {
      if ((int)(uVar4 << 0x19) < 0) {
        iVar6 = param_1 * _DAT_000029d8 + _DAT_000029dc;
        if (*(char *)(iVar6 + 0x9de) == '\x01') {
          if (*(char *)(iVar6 + 0x9e5) == '\x03') {
            *(undefined1 *)(iVar6 + 0x9de) = 0;
            FUN_00003658(param_1);
          }
          else {
            FUN_00003640(param_1,_DAT_000029f4);
          }
        }
        bVar1 = true;
        FUN_0000364c(param_1);
      }
      else {
        bVar1 = false;
        FUN_0000364c(param_1);
        uStack_18 = 3;
      }
    }
    else {
      FUN_000032b0(param_1,4,uVar4);
      bVar1 = true;
      uStack_18 = 3;
    }
    puVar5[5] = uStack_18;
    uVar3 = 0x40000;
  }
  if ((bVar1) && ((*puVar5 & 7) != 1)) {
    *puVar5 = *puVar5 & 0xfffffff8;
  }
  *(undefined4 *)(iVar2 + 8) = uVar3;
  return;
}



/* =========================================================
 * 0000274a  FUN_0000274a  size=46
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000274a(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = param_1 * 0x100 + _DAT_000029ec;
  uVar1 = *(uint *)(iVar2 + 0x14);
  if (((uVar1 & 1) != 0) && ((int)(uVar1 << 0x19) < 0)) {
    FUN_000032b0(param_1,3,uVar1);
    *(undefined4 *)(iVar2 + 0x14) = 0x41;
  }
  FUN_00003664(param_1);
  return;
}



/* =========================================================
 * 00002778  FUN_00002778  size=24
 * ========================================================= */

void FUN_00002778(void)

{
  FUN_00003670();
  FUN_000003c0(0xe,3);
  FUN_000003c0(0xf,3);
  return;
}



/* =========================================================
 * 00002790  FUN_00002790  size=260
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002790(int param_1,int param_2,int param_3,int param_4)

{
  short sVar1;
  short sVar2;
  ushort uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  short sVar7;
  int iVar8;
  
  iVar6 = _DAT_000029d8 * param_1 + _DAT_000029dc;
  iVar8 = iVar6 + _DAT_000029f8;
  FUN_00003334(iVar8,0x104);
  if (((param_2 == 1) || (param_2 == 2)) || (param_4 == 0)) {
    sVar7 = 1;
  }
  else {
    sVar7 = 0;
  }
  if (param_3 == 7) {
    *(undefined2 *)(iVar6 + _DAT_000029f8 + -2) = 0;
    if (sVar7 == 0) {
      sVar2 = 0;
    }
    else {
      sVar2 = 7;
    }
    sVar1 = sVar7 * -0x8000;
    *(short *)(iVar6 + 0x8d6) = sVar1;
    uVar3 = *(ushort *)(iVar6 + 0x8d4) & 0x8fff;
    *(ushort *)(iVar6 + 0x8d4) = uVar3 | sVar2 << 0xc;
    uVar4 = *(undefined4 *)(*(int *)(iVar6 + 0xafc) + 4);
    if (((byte)uVar4 < 2) && ((byte)((uint)uVar4 >> 8) < 8)) {
      *(short *)(iVar6 + 0x8d6) = sVar1 + 0x1a;
      if (sVar7 == 0) {
        sVar2 = 0;
      }
      else {
        sVar2 = 7;
      }
      *(ushort *)(iVar6 + 0x8d4) = uVar3 | sVar2 << 0xc;
      if (param_2 == 0) {
        FUN_00003688(iVar8,iVar6 + 0x184,0x1a);
      }
      else {
        FUN_00003178(iVar8,iVar6 + 0x19e,0x1a);
      }
    }
    else {
      *(short *)(iVar6 + 0x8d6) = sVar1 + 4;
      if (sVar7 == 0) {
        sVar2 = 0;
      }
      else {
        sVar2 = 2;
      }
      *(ushort *)(iVar6 + 0x8d4) = uVar3 | sVar2 << 0xc;
      *(undefined4 *)(iVar6 + 0x8d8) = 0;
    }
    if (sVar7 == 0) {
      uVar5 = *(ushort *)(iVar6 + 0x8d6) & 0x1ff;
    }
    else {
      uVar5 = (*(ushort *)(iVar6 + 0x8d4) & 0x7fff) >> 0xc;
    }
    FUN_0000331c(param_1,param_2,7,uVar5,1);
  }
  else {
    FUN_0000367c(param_1,param_2,param_3,param_4);
  }
  return;
}



/* =========================================================
 * 00002894  FUN_00002894  size=104
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_00002894(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_00003310();
  if (iVar1 == 0) {
    FUN_00003304(param_1,*(undefined1 *)(_DAT_000029fc + param_1));
  }
  else {
    iVar1 = param_1 * _DAT_000029d8 + _DAT_000029dc;
    uVar2 = (uint)*(byte *)(*(int *)(iVar1 + 0xafc) + 4);
    if (uVar2 < 8) {
      uVar3 = *(undefined4 *)(iVar1 + uVar2 * 4 + 0x124);
    }
    else {
      uVar3 = 0xffff0100;
    }
    *(undefined4 *)(iVar1 + 0x8d8) = uVar3;
    FUN_0000331c(param_1,0,5,1,0);
  }
  return *(undefined1 *)(_DAT_000029f0 + param_1);
}



/* =========================================================
 * 000028fc  FUN_000028fc  size=148
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000028fc(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_2 == 0x27) {
    uVar2 = FUN_000036a0();
    FUN_000036ac(param_3,uVar2,1);
    iVar3 = _DAT_000029d8 * param_1 + _DAT_000029dc;
    if ((int)(*(uint *)(iVar3 + 0xc4) << 0xe) < 0) {
      *(uint *)(iVar3 + 0xc4) =
           *(uint *)(iVar3 + 0xc4) & 0xfffeffff |
           ((*(uint *)(iVar3 + 0x3c8) & 0xfffff) >> 0x13) << 0x10;
    }
    iVar1 = _DAT_000029e0;
    if ((((*(byte *)(_DAT_000029e0 + -6) & 3) == 2) &&
        ((*(ushort *)(_DAT_00002a00 + 0x22) & 3) == 1)) && (*(char *)(iVar3 + 0xb6d) == '\0')) {
      FUN_00003070(param_1);
    }
    else {
      FUN_000036b8(0);
      FUN_000036b8(1);
    }
    FUN_00003178(iVar1 + -0x12,_DAT_00002a00 + 0x16,0xe);
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00003694();
  }
  return uVar2;
}



/* =========================================================
 * 00002990  FUN_00002990  size=26
 * callers: 00002afe
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002990(void)

{
  int iVar1;
  
  iVar1 = _DAT_000029e0;
  *(char *)(_DAT_000029e0 + -4) = (char)((*(uint *)(_DAT_00002a04 + 8) & 0x3ffff) >> 0xd);
  *(char *)(iVar1 + -3) = (char)((*(uint *)(_DAT_00002a08 + 8) & 0x3ffff) >> 0xd);
  return;
}



/* =========================================================
 * 000029aa  FUN_000029aa  size=20
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000029aa(int param_1)

{
  *(undefined1 *)(param_1 * 0x24 + _DAT_000029e0 + 8) = 1;
  FUN_000036c4();
  return;
}



/* =========================================================
 * 000029be  FUN_000029be  size=24
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000029be(int param_1)

{
  *(undefined1 *)(_DAT_00002a0c + param_1) = 0xff;
  *(undefined1 *)(param_1 * 0x24 + _DAT_000029e0 + 8) = 0xff;
  FUN_000036d0();
  return;
}



/* =========================================================
 * 00002a10  FUN_00002a10  size=168
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002a10(int param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  uint uVar10;
  
  iVar4 = _DAT_00002e0c;
  bVar3 = true;
  if (*(char *)(_DAT_00002dfc + param_1) == '\x01') {
    uVar5 = 0;
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      uVar5 = isIRQinterruptsEnabled();
    }
    disableIRQinterrupts();
    iVar7 = param_1 * 0x100 + _DAT_00002e00;
    iVar6 = param_1 * 0x24 + _DAT_00002e04;
    uVar10 = *(uint *)(iVar7 + 0xc) & 7;
    if (*(byte *)(iVar6 + 8) == uVar10) {
      if (*(byte *)(_DAT_00002e08 + param_1) != uVar10) {
        *(char *)(_DAT_00002e08 + param_1) = (char)uVar10;
      }
      while (((uint)*(byte *)(_DAT_00002e1c + param_1) != (uint)*(byte *)(iVar4 + param_1) &&
             (bVar3))) {
        cVar1 = *(char *)((uint)*(byte *)(iVar4 + param_1) * 2 + _DAT_00002e10 + param_1);
        if (uVar10 == 1) {
          uVar9 = _DAT_00002e14;
          if (cVar1 == '\x02') {
LAB_00002a7c:
            *(undefined4 *)(iVar7 + 0x10) = uVar9;
            uVar8 = 2;
LAB_00002a8a:
            *(undefined1 *)(iVar6 + 8) = uVar8;
            bVar3 = false;
          }
        }
        else if (uVar10 == 2) {
          uVar9 = _DAT_00002e18;
          if (cVar1 == '\x04') goto LAB_00002a7c;
          if (cVar1 == '\x03') {
            *(undefined4 *)(iVar7 + 0x10) = 0x80000000;
            uVar8 = 1;
            goto LAB_00002a8a;
          }
        }
        if (*(char *)(iVar4 + param_1) != *(char *)(_DAT_00002e1c + param_1)) {
          *(byte *)(iVar4 + param_1) = *(char *)(iVar4 + param_1) + 1U & 7;
        }
      }
    }
    if ((uVar5 & 1) == 0) {
      enableIRQinterrupts();
      return;
    }
  }
  else {
    FUN_000036dc();
  }
  return;
}



/* =========================================================
 * 00002ab8  FUN_00002ab8  size=32
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002ab8(int param_1)

{
  int iVar1;
  uint uVar2;
  
  FUN_00003628();
  iVar1 = param_1 * 0x100 + _DAT_00002e00;
  uVar2 = *(uint *)(iVar1 + 0xc);
  *(uint *)(iVar1 + 0xc) = uVar2;
  FUN_000036e8(param_1,0,uVar2 & 0x38);
  return;
}



/* =========================================================
 * 00002ad8  FUN_00002ad8  size=38
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002ad8(int param_1)

{
  int iVar1;
  
  FUN_000036f4();
  iVar1 = _DAT_00002e20 * param_1 + _DAT_00002e24;
  if (*(char *)(iVar1 + 0xb6d) == '\0') {
    *(undefined1 *)(iVar1 + 0xdff) = 0;
  }
  return;
}



/* =========================================================
 * 00002afe  FUN_00002afe  size=776
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002afe(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  int iVar17;
  undefined1 *puVar18;
  uint uVar19;
  undefined4 *puVar20;
  int extraout_r2;
  int extraout_r3;
  int extraout_r12;
  
  iVar2 = _DAT_00002e2c;
  iVar1 = _DAT_00002e28;
  uVar19 = 0;
  do {
    *(undefined1 *)(iVar1 + uVar19) = *(undefined1 *)(iVar2 + uVar19);
    iVar5 = _DAT_00002e38;
    puVar4 = _DAT_00002e34;
    iVar3 = _DAT_00002e30;
    uVar19 = uVar19 + 1 & 0xffff;
  } while (uVar19 < 0x380);
  if ((*(uint *)(_DAT_00002e30 + 8) & 0x1ffff) >> 0x10 == 0) {
    *_DAT_00002e34 = *_DAT_00002e34 | 0x3000;
    uVar19 = *(uint *)(iVar5 + 0x24) | 0x40;
  }
  else {
    *(uint *)(_DAT_00002e30 + 8) = *(uint *)(_DAT_00002e30 + 8) & 0xfffeffff;
    *puVar4 = *puVar4 & 0xffffcfff;
    uVar19 = *(uint *)(iVar5 + 0x24) & 0xffffffbf;
  }
  *(uint *)(iVar5 + 0x24) = uVar19;
  if (-1 < (int)((uint)*(byte *)(iVar3 + 8) << 0x1d)) {
    FUN_00003700(_DAT_00002e3c);
    FUN_0000370c();
    *(byte *)(_DAT_00002e30 + 0x40) = *(byte *)(_DAT_00002e30 + 0x40) | 1;
  }
  iVar1 = _DAT_00002e04;
  *(undefined4 *)(_DAT_00002e04 + 4) = 0;
  *(undefined4 *)(iVar1 + 0x28) = 0;
  *(undefined1 *)(iVar1 + 9) = 0;
  *(undefined1 *)(iVar1 + 0x2d) = 0;
  *(undefined1 *)(iVar1 + 10) = 0;
  uVar8 = _DAT_00002e58;
  *(undefined1 *)(iVar1 + 0x2e) = 0;
  iVar2 = _DAT_00002e44;
  *(undefined4 *)(_DAT_00002e44 + 8) = _DAT_00002e40;
  iVar5 = _DAT_00002e44;
  *(undefined4 *)(_DAT_00002e44 + 0x84) = _DAT_00002e48;
  *(undefined4 *)(iVar5 + 0x6c) = _DAT_00002e4c;
  iVar6 = _DAT_00002e54;
  *(undefined4 *)(_DAT_00002e54 + 0x2c) = _DAT_00002e50;
  uVar12 = _DAT_00002e60;
  iVar9 = _DAT_00002e5c;
  *(undefined4 *)(_DAT_00002e5c + 0x30) = uVar8;
  iVar10 = _DAT_00002e5c;
  *(undefined4 *)(iVar9 + -0x24) = uVar12;
  *(undefined4 *)(iVar10 + -0x54) = _DAT_00002e64;
  iVar5 = _DAT_00002e6c;
  *(undefined4 *)(_DAT_00002e6c + 0x10) = _DAT_00002e68;
  *(undefined4 *)(iVar5 + 0x1c) = _DAT_00002e70;
  *(undefined4 *)(iVar5 + 0x18) = _DAT_00002e74;
  iVar7 = _DAT_00002e54;
  *(undefined4 *)(iVar9 + -0x20) = _DAT_00002e78;
  *(undefined4 *)(iVar7 + -0xa0) = _DAT_00002e7c;
  puVar20 = (undefined4 *)(_DAT_00002e44 + -0x40);
  *(undefined4 *)(_DAT_00002e44 + -0x30) = _DAT_00002e80;
  *(undefined4 *)(iVar7 + -0x100) = _DAT_00002e84;
  *(undefined4 *)(iVar7 + -0x1b0) = _DAT_00002e88;
  *(undefined4 *)(iVar10 + -0xe8) = _DAT_00002e8c;
  *(undefined4 *)(iVar9 + -0x14) = _DAT_00002e90;
  *(undefined4 *)(iVar7 + -0x194) = _DAT_00002e94;
  *(undefined4 *)(iVar6 + 0x34) = _DAT_00002e98;
  puVar14 = _DAT_00002ea0;
  *_DAT_00002ea0 = _DAT_00002e9c;
  *(undefined4 *)(iVar7 + -0x90) = _DAT_00002ea4;
  *(undefined4 *)(iVar10 + -0x10c) = _DAT_00002ea8;
  *(undefined4 *)(iVar10 + -0xc4) = _DAT_00002eac;
  iVar5 = _DAT_00002e44;
  *(undefined4 *)(_DAT_00002e44 + 0xf0) = _DAT_00002eb0;
  puVar15 = _DAT_00002ea0;
  _DAT_00002ea0[-0xd] = _DAT_00002eb4;
  *(undefined4 *)(iVar7 + -0xbc) = _DAT_00002eb8;
  iVar11 = _DAT_00002ebc;
  uVar19 = *(uint *)(iVar3 + 8);
  if ((int)(uVar19 << 0x10) < 0) {
    *(byte *)(_DAT_00002ebc + 0x1c) = *(byte *)(_DAT_00002ebc + 0x1c) | 0x80;
  }
  if (*(char *)(iVar11 + 0x1c) < '\0') {
    *(uint *)(iVar3 + 8) = uVar19 | 0x8000;
    *(ushort *)(_DAT_00002ec0 + 0x18) = *(ushort *)(_DAT_00002ec0 + 0x18) | 3;
    *(uint *)(_DAT_00002ec4 + 0x2c) = *(uint *)(_DAT_00002ec4 + 0x2c) & 0x7fffffff;
    *_DAT_00002ecc = _DAT_00002ec8;
    *(undefined4 *)(_DAT_00002ed0 + 0x1c) = 0;
    *(undefined4 *)(_DAT_00002ed4 + 0x1c) = 0;
  }
  *(undefined4 *)(_DAT_00002edc + 0x24) = _DAT_00002ed8;
  *(undefined4 *)(iVar10 + -0xe0) = _DAT_00002ee0;
  *(undefined4 *)(iVar2 + 0x3c) = _DAT_00002ee4;
  FUN_00001c66();
  *(undefined4 *)(iVar6 + 0x28) = _DAT_00002ee8;
  puVar16 = _DAT_00002ea0;
  _DAT_00002ea0[0x3f] = _DAT_00002eec;
  *(undefined4 *)(iVar7 + -0x1ac) = _DAT_00002ef0;
  iVar3 = _DAT_00002e54;
  *(undefined4 *)(iVar7 + -0x84) = _DAT_00002ef4;
  *(undefined4 *)(iVar3 + 0x5c) = _DAT_00002ef8;
  iVar3 = _DAT_00002e44;
  *(undefined4 *)(iVar10 + -0x60) = _DAT_00002efc;
  *(undefined4 *)(iVar3 + -0x7c) = _DAT_00002f00;
  iVar11 = _DAT_00002f08;
  iVar6 = _DAT_00002edc;
  *(undefined4 *)(_DAT_00002f08 + 0x78) = _DAT_00002f04;
  *(undefined4 *)(iVar6 + 0x58) = _DAT_00002f0c;
  iVar6 = _DAT_00002e54;
  *(undefined4 *)(_DAT_00002e54 + -0x78) = _DAT_00002f10;
  *(undefined4 *)(iVar6 + -0x14) = _DAT_00002f14;
  puVar16[0x39] = _DAT_00002f18;
  puVar16[0x3a] = _DAT_00002f1c;
  puVar16[0x3c] = _DAT_00002f20;
  iVar17 = _DAT_00002edc;
  *(undefined4 *)(iVar6 + 0xf0) = _DAT_00002f24;
  *(undefined4 *)(iVar17 + 0xf8) = _DAT_00002f28;
  *(undefined4 *)(iVar7 + -0xb8) = _DAT_00002f2c;
  *(undefined4 *)(iVar10 + -0x5c) = _DAT_00002f30;
  *(undefined4 *)(iVar6 + 0xf8) = _DAT_00002f34;
  puVar14[0xc] = _DAT_00002f38;
  *(undefined4 *)(_DAT_00002f40 + 0x10) = _DAT_00002f3c;
  iVar13 = _DAT_00002e6c;
  *(undefined4 *)(_DAT_00002e6c + -0x80) = _DAT_00002f44;
  *(undefined4 *)(iVar11 + 0x18) = _DAT_00002f48;
  *(undefined4 *)(iVar11 + 0x1c) = _DAT_00002f4c;
  *(undefined4 *)(iVar13 + 100) = _DAT_00002f50;
  *(undefined4 *)(iVar13 + 0x58) = _DAT_00002f54;
  puVar15[-8] = _DAT_00002f58;
  iVar11 = _DAT_00002e5c;
  *(undefined4 *)(iVar5 + 0xe4) = _DAT_00002f5c;
  *(undefined4 *)(iVar11 + 100) = _DAT_00002f60;
  *(undefined4 *)(iVar7 + -0x198) = _DAT_00002f64;
  *(undefined4 *)(iVar9 + -0x40) = _DAT_00002f68;
  *(undefined4 *)(iVar17 + 0x98) = _DAT_00002f6c;
  *(undefined4 *)(iVar7 + -0x1c0) = _DAT_00002f70;
  *(undefined4 *)(iVar6 + -0x20) = _DAT_00002f74;
  *(undefined4 *)(iVar3 + -100) = _DAT_00002f78;
  iVar3 = _DAT_00002f40;
  *(undefined4 *)(iVar11 + 0x7c) = _DAT_00002f7c;
  *(undefined4 *)(iVar3 + 0x84) = _DAT_00002f80;
  *(undefined4 *)(iVar10 + -0x6c) = _DAT_00002f84;
  *(undefined4 *)(iVar3 + 0x50) = _DAT_00002f88;
  *(undefined4 *)(iVar17 + 0xc0) = _DAT_00002f8c;
  *(undefined4 *)(iVar17 + 0xd8) = _DAT_00002f90;
  *(undefined4 *)(_DAT_00002f98 + 0x3c) = _DAT_00002f94;
  *(undefined4 *)(iVar13 + -0x8c) = _DAT_00002f9c;
  puVar15[-0xf] = _DAT_00002fa0;
  puVar18 = _DAT_00002fa4;
  *_DAT_00002fa4 = 0;
  puVar18[1] = 0;
  *(undefined4 *)(iVar2 + 4) = _DAT_00002fa8;
  *(undefined4 *)(iVar10 + -0x4c) = _DAT_00002fac;
  FUN_00002990();
  _DAT_00002ea0[0x22] = _DAT_00002fb0;
  *(undefined4 *)(iVar10 + -0x104) = _DAT_00002fb4;
  puVar15[-4] = _DAT_00002fb8;
  *puVar20 = _DAT_00002fbc;
  *(undefined1 *)(_DAT_00002e04 + 8) = 0xff;
  *(undefined1 *)(iVar1 + 0x2c) = 0xff;
  *(undefined4 *)(extraout_r2 + 8) = _DAT_00002fc0;
  *(undefined4 *)(extraout_r2 + 4) = _DAT_00002fc4;
  iVar1 = _DAT_00002f98;
  *(undefined4 *)(extraout_r2 + 0x18) = _DAT_00002fc8;
  *(undefined4 *)(iVar1 + -0x74) = _DAT_00002fcc;
  *(undefined4 *)(extraout_r12 + 0x24) = _DAT_00002fd0;
  *(undefined4 *)(extraout_r3 + 0x30) = _DAT_00002fd4;
  *(undefined4 *)(iVar6 + -0x24) = _DAT_00002fd8;
  *(undefined4 *)(iVar13 + 0x74) = _DAT_00002fdc;
  return;
}



/* =========================================================
 * 00002fec  FUN_00002fec  size=8
 * callers: 000003fc
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00002fec(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 00002ff8  FUN_00002ff8  size=8
 * callers: 000007f8, 00000df0, 000008d2, 0000188a, 000003fc, 00002068, 000012d6, 00001840, 000018ec
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00002ff8(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 00003004  FUN_00003004  size=8
 * callers: 0000049c
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003004(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 00003010  FUN_00003010  size=8
 * callers: 000004a8
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003010(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 0000301c  FUN_0000301c  size=8
 * callers: 000004c8
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0000301c(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 00003028  FUN_00003028  size=8
 * callers: 000004c8, 00001c9a, 00000536
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003028(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 00003034  FUN_00003034  size=8
 * callers: 00000536
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003034(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 00003040  FUN_00003040  size=8
 * callers: 00000548
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003040(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 0000304c  FUN_0000304c  size=8
 * callers: 00000584, 00000c8e
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0000304c(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 00003058  FUN_00003058  size=8
 * callers: 00000584
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003058(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 00003064  FUN_00003064  size=8
 * callers: 000015e2, 00000604, 000012d6
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003064(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 00003070  FUN_00003070  size=8
 * callers: 000028fc, 00000604, 000012d6
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003070(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 0000307c  FUN_0000307c  size=8
 * callers: 00000604
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0000307c(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 00003088  FUN_00003088  size=8
 * callers: 0000066a
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003088(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 00003094  FUN_00003094  size=8
 * callers: 00000df0, 00000690
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003094(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 000030a0  FUN_000030a0  size=8
 * callers: 00000690
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000030a0(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 000030ac  FUN_000030ac  size=8
 * callers: 000006ee
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000030ac(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 000030b8  FUN_000030b8  size=8
 * callers: 000020e0, 000006ee, 00000df0, 00001e50, 000023a6, 00000c8e
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000030b8(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 000030c4  FUN_000030c4  size=8
 * callers: 0000079a
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000030c4(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 000030d0  FUN_000030d0  size=8
 * callers: 00000942
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000030d0(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 000030dc  FUN_000030dc  size=8
 * callers: 00000942
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000030dc(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 000030e8  FUN_000030e8  size=8
 * callers: 0000128c, 00001a80, 00000954, 000012d6
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000030e8(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 000030f4  FUN_000030f4  size=8
 * callers: 000015e2, 00000954, 000012d6, 00001840
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000030f4(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 00003100  FUN_00003100  size=8
 * callers: 00000954
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003100(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 0000310c  FUN_0000310c  size=8
 * callers: 00000954
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0000310c(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 00003118  FUN_00003118  size=8
 * callers: 000009dc
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003118(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 00003124  FUN_00003124  size=8
 * callers: 000009dc
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003124(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 00003130  FUN_00003130  size=8
 * callers: 00000a4a
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003130(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 0000313c  FUN_0000313c  size=8
 * callers: 00000c8e, 00000a4a, 000018ec
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0000313c(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 00003148  FUN_00003148  size=8
 * callers: 00000a4a
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003148(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 00003154  FUN_00003154  size=8
 * callers: 0000169c, 00000df0, 00000a4a, 000018ec
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003154(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 00003160  FUN_00003160  size=8
 * callers: 00000ab2
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003160(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 0000316c  FUN_0000316c  size=8
 * callers: 00000acc
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0000316c(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 00003178  FUN_00003178  size=8
 * callers: 00002790, 000028fc, 00000c52
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003178(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 00003184  FUN_00003184  size=8
 * callers: 00000c8e
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003184(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 00003190  FUN_00003190  size=8
 * callers: 00000c8e
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003190(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 0000319c  FUN_0000319c  size=8
 * callers: 00000df0
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0000319c(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 000031a8  FUN_000031a8  size=8
 * callers: 00000df0
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000031a8(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 000031b4  FUN_000031b4  size=8
 * callers: 000020e0, 00000df0
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000031b4(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 000031c0  FUN_000031c0  size=8
 * callers: 00000df0
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000031c0(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 000031cc  FUN_000031cc  size=8
 * callers: 00000df0, 000012d6, 000018ec
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000031cc(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 000031d8  FUN_000031d8  size=8
 * callers: 00000df0
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000031d8(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 000031e4  FUN_000031e4  size=8
 * callers: 00000df0
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000031e4(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 000031f0  FUN_000031f0  size=8
 * callers: 00001216, 000017d6, 00001768
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000031f0(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 000031fc  FUN_000031fc  size=8
 * callers: 00001242, 000016f6, 000012d6, 000018ec
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000031fc(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 00003208  FUN_00003208  size=8
 * callers: 00001242, 000012d6
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003208(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 00003214  FUN_00003214  size=8
 * callers: 00001242, 000012d6
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003214(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 00003220  FUN_00003220  size=8
 * callers: 00001276
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003220(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 0000322c  FUN_0000322c  size=8
 * callers: 00001bb2, 00001276
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0000322c(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 00003238  FUN_00003238  size=8
 * callers: 0000128c, 000012d6
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003238(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 00003244  FUN_00003244  size=8
 * callers: 000012d6
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003244(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 00003250  FUN_00003250  size=8
 * callers: 000012d6
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003250(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 0000325c  FUN_0000325c  size=8
 * callers: 000012d6
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0000325c(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 00003268  FUN_00003268  size=8
 * callers: 000012d6
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003268(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 00003274  FUN_00003274  size=8
 * callers: 000012d6
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003274(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 00003280  FUN_00003280  size=8
 * callers: 000012d6
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003280(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 0000328c  FUN_0000328c  size=8
 * callers: 000012d6
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0000328c(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 00003298  FUN_00003298  size=8
 * callers: 000012d6
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003298(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 000032a4  FUN_000032a4  size=8
 * callers: 000015a2
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000032a4(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 000032b0  FUN_000032b0  size=8
 * callers: 000015a2, 0000262e, 0000274a
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000032b0(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 000032bc  FUN_000032bc  size=8
 * callers: 000015e2
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000032bc(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 000032c8  FUN_000032c8  size=8
 * callers: 000015e2
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000032c8(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 000032d4  FUN_000032d4  size=8
 * callers: 000015e2
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000032d4(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 000032e0  FUN_000032e0  size=8
 * callers: 000015e2
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000032e0(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 000032ec  FUN_000032ec  size=8
 * callers: 000015e2
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000032ec(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 000032f8  FUN_000032f8  size=8
 * callers: 000015e2
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000032f8(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 00003304  FUN_00003304  size=8
 * callers: 00001dbe, 00001fce, 000015e2, 00002038, 00002894
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003304(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 00003310  FUN_00003310  size=8
 * callers: 0000169c, 00001fce, 00002894
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003310(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 0000331c  FUN_0000331c  size=8
 * callers: 0000169c, 00001b44, 00002790, 00002894
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0000331c(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 00003328  FUN_00003328  size=8
 * callers: 00001c9a, 000016f6
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003328(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 00003334  FUN_00003334  size=8
 * callers: 00002790, 000016f6
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003334(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 00003340  FUN_00003340  size=8
 * callers: 000016f6
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003340(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 0000334c  FUN_0000334c  size=8
 * callers: 00001768
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0000334c(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 00003358  FUN_00003358  size=8
 * callers: 000017d6
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003358(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 00003364  FUN_00003364  size=8
 * callers: 000017d6
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003364(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 00003370  FUN_00003370  size=8
 * callers: 000017d6
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003370(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 0000337c  FUN_0000337c  size=8
 * callers: 00001840
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0000337c(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 00003388  FUN_00003388  size=8
 * callers: 0000188a
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003388(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 00003394  FUN_00003394  size=8
 * callers: 00001c9a, 000018ec
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003394(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 000033a0  FUN_000033a0  size=8
 * callers: 000018ec
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000033a0(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 000033ac  FUN_000033ac  size=8
 * callers: 000018ec
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000033ac(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 000033b8  FUN_000033b8  size=8
 * callers: 000023d0, 000018ec
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000033b8(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 000033c4  FUN_000033c4  size=8
 * callers: 000023d0, 000018ec
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000033c4(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 000033d0  FUN_000033d0  size=8
 * callers: 000018ec
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000033d0(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 000033dc  FUN_000033dc  size=8
 * callers: 000018ec
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000033dc(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 000033e8  FUN_000033e8  size=8
 * callers: 00002368, 00001a80
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000033e8(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 000033f4  FUN_000033f4  size=8
 * callers: 00002368, 00001a80
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000033f4(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 00003400  FUN_00003400  size=8
 * callers: 00001a80
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003400(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 0000340c  FUN_0000340c  size=8
 * callers: 00001a80
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0000340c(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 00003418  FUN_00003418  size=8
 * callers: 00001a80
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003418(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 00003424  FUN_00003424  size=8
 * callers: 00001b06
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003424(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 00003430  FUN_00003430  size=8
 * callers: 00001bb2
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003430(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 0000343c  FUN_0000343c  size=8
 * callers: 00001bee
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0000343c(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 00003448  FUN_00003448  size=8
 * callers: 00001c9a, 00002368
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003448(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 00003454  FUN_00003454  size=8
 * callers: 00001c9a
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003454(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 00003460  FUN_00003460  size=8
 * callers: 00001c9a
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003460(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 0000346c  FUN_0000346c  size=8
 * callers: 00001c9a
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0000346c(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 00003478  FUN_00003478  size=8
 * callers: 00001c9a, 000021de
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003478(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 00003484  FUN_00003484  size=8
 * callers: 00001c9a
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003484(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 00003490  FUN_00003490  size=8
 * callers: 00001c9a
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003490(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 0000349c  FUN_0000349c  size=8
 * callers: 00001c9a
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0000349c(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 000034a8  FUN_000034a8  size=8
 * callers: 00001c9a
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000034a8(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 000034b4  FUN_000034b4  size=8
 * callers: 00001c9a
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000034b4(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 000034c0  FUN_000034c0  size=8
 * callers: 00001df4
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000034c0(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 000034cc  FUN_000034cc  size=8
 * callers: 00001e1c
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000034cc(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 000034d8  FUN_000034d8  size=8
 * callers: 00001f3c
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000034d8(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 000034e4  FUN_000034e4  size=8
 * callers: 00001f3c
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000034e4(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 000034f0  FUN_000034f0  size=8
 * callers: 00001f9e
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000034f0(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 000034fc  FUN_000034fc  size=8
 * callers: 00002004
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000034fc(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 00003508  FUN_00003508  size=8
 * callers: 00002068
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003508(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 00003514  FUN_00003514  size=8
 * callers: 00002068
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003514(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 00003520  FUN_00003520  size=8
 * callers: 00002068
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003520(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 0000352c  FUN_0000352c  size=8
 * callers: 00002068
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0000352c(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 00003538  FUN_00003538  size=8
 * callers: 00002154
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003538(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 00003544  FUN_00003544  size=8
 * callers: 000021fc
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003544(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 00003550  FUN_00003550  size=8
 * callers: 00002214
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003550(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 0000355c  FUN_0000355c  size=8
 * callers: 00002214
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0000355c(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 00003568  FUN_00003568  size=8
 * callers: 00002214
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003568(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 00003574  FUN_00003574  size=8
 * callers: 000022ce
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003574(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 00003580  FUN_00003580  size=8
 * callers: 000022ce
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003580(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 0000358c  FUN_0000358c  size=8
 * callers: 000022ce
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0000358c(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 00003598  FUN_00003598  size=8
 * callers: 00002308
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003598(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 000035a4  FUN_000035a4  size=8
 * callers: 00002324
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000035a4(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 000035b0  FUN_000035b0  size=8
 * callers: 00002348
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000035b0(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 000035bc  FUN_000035bc  size=8
 * callers: 00002368
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000035bc(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 000035c8  FUN_000035c8  size=8
 * callers: 000023a6
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000035c8(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 000035d4  FUN_000035d4  size=8
 * callers: 000023d0
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000035d4(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 000035e0  FUN_000035e0  size=8
 * callers: 0000256e, 000023d0
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000035e0(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 000035ec  FUN_000035ec  size=8
 * callers: 0000248e
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000035ec(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 000035f8  FUN_000035f8  size=8
 * callers: 0000248e
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000035f8(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 00003604  FUN_00003604  size=8
 * callers: 0000256e
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003604(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 00003610  FUN_00003610  size=8
 * callers: 000025f4
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003610(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 0000361c  FUN_0000361c  size=8
 * callers: 0000262e
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0000361c(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 00003628  FUN_00003628  size=8
 * callers: 0000262e, 00002ab8
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003628(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 00003634  FUN_00003634  size=8
 * callers: 0000262e
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003634(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 00003640  FUN_00003640  size=8
 * callers: 0000262e
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003640(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 0000364c  FUN_0000364c  size=8
 * callers: 0000262e
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0000364c(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 00003658  FUN_00003658  size=8
 * callers: 0000262e
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003658(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 00003664  FUN_00003664  size=8
 * callers: 0000274a
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003664(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 00003670  FUN_00003670  size=8
 * callers: 00002778
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003670(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 0000367c  FUN_0000367c  size=8
 * callers: 00002790
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0000367c(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 00003688  FUN_00003688  size=8
 * callers: 00002790
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003688(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 00003694  FUN_00003694  size=8
 * callers: 000028fc
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003694(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 000036a0  FUN_000036a0  size=8
 * callers: 000028fc
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000036a0(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 000036ac  FUN_000036ac  size=8
 * callers: 000028fc
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000036ac(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 000036b8  FUN_000036b8  size=8
 * callers: 000028fc
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000036b8(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 000036c4  FUN_000036c4  size=8
 * callers: 000029aa
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000036c4(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 000036d0  FUN_000036d0  size=8
 * callers: 000029be
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000036d0(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 000036dc  FUN_000036dc  size=8
 * callers: 00002a10
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000036dc(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 000036e8  FUN_000036e8  size=8
 * callers: 00002ab8
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000036e8(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 000036f4  FUN_000036f4  size=8
 * callers: 00002ad8
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000036f4(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 00003700  FUN_00003700  size=8
 * callers: 00002afe
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003700(undefined4 param_1)

{
  return param_1;
}



/* =========================================================
 * 0000370c  FUN_0000370c  size=8
 * callers: 00002afe
 * ========================================================= */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0000370c(undefined4 param_1)

{
  return param_1;
}



/* total functions=263 decompiled=263 */
