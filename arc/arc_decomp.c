/* ARC (ARCompact) firmware decompilation — entry-seeded from 0x22814
 * image base 0x22800, language ARCompact:LE:32:default */

/* ==========================================================
 * ram:00022814  entry  size=24  [ENTRY/ROOT]
 * ========================================================== */

void entry(void)

{
  FUN_ram_00027c38();
  FUN_ram_00023814();
  FUN_ram_00027be8();
  FUN_ram_00037e68();
  return;
}



/* ==========================================================
 * ram:0002282c  FUN_ram_0002282c  size=198  [ENTRY/ROOT]
 * ========================================================== */

void FUN_ram_0002282c(void)

{
  undefined4 uStack_1c;
  
  uStack_1c = 0;
  func_0x00017bf4(0x807a78,0xff,0x38);
  func_0x00015eb8(0xd4,&uStack_1c);
  uRam00807ab0 = uStack_1c;
  func_0x00015eb8(0xd8,&uStack_1c);
  uRam00807ab4 = uStack_1c;
  func_0x00015eb8(0xdc,&uStack_1c);
  uRam00807ab8 = uStack_1c;
  func_0x00015eb8(0xe0,&uStack_1c);
  uRam00807abc = (undefined1)uStack_1c;
  func_0x00015eb8(0xe4,&uStack_1c);
  uRam00807abe = (char)uStack_1c;
  uRam00807abd = (char)((uint)uStack_1c >> 8);
  uRam00807abf = (char)((uint)uStack_1c >> 0x10);
  uRam00807ac0 = (char)((uint)uStack_1c >> 0x18);
  return;
}



/* ==========================================================
 * ram:00022ba8  FUN_ram_00022ba8  size=84
 * callers: ram:0002407c
 * ========================================================== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_00022ba8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((_DAT_ram_008016cc & 0x1000000) == 0) {
    uVar1 = 1;
  }
  else {
    func_0x0001a9f0(2);
    uVar1 = FUN_ram_0002a08c(param_1,param_2,param_3);
  }
  return uVar1;
}



/* ==========================================================
 * ram:00022eb4  FUN_ram_00022eb4  size=62
 * callers: ram:0002cc0c,ram:0002407c
 * ========================================================== */

int FUN_ram_00022eb4(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  
  func_0x0001a9f0(4);
  uVar1 = FUN_ram_0002c174(param_1,param_2);
  iVar2 = 1 - uVar1;
  if (1 < uVar1) {
    iVar2 = 0;
  }
  return iVar2;
}



/* ==========================================================
 * ram:00022ef4  FUN_ram_00022ef4  size=56
 * callers: ram:0002407c
 * ========================================================== */

int FUN_ram_00022ef4(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  
  func_0x0001a9f0(4);
  uVar1 = FUN_ram_0002c254(param_1);
  iVar2 = 1 - uVar1;
  if (1 < uVar1) {
    iVar2 = 0;
  }
  return iVar2;
}



/* ==========================================================
 * ram:00023014  FUN_ram_00023014  size=38
 * callers: ram:0002a08c
 * ========================================================== */

undefined4 FUN_ram_00023014(byte *param_1)

{
  undefined4 uVar1;
  
  if ((*param_1 == 0) || (uVar1 = 0, 2 < *param_1)) {
    uVar1 = 1;
  }
  return uVar1;
}



/* ==========================================================
 * ram:0002303c  FUN_ram_0002303c  size=702
 * callers: ram:000233f8
 * ========================================================== */

undefined4 FUN_ram_0002303c(int *param_1,int *param_2,undefined4 *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  bool bVar8;
  
  uVar6 = 1;
  uVar7 = (uint)*(byte *)(param_1 + 2);
  iVar5 = (int)(*(byte *)((int)param_3 + uVar7 * 8 + 0x57) & 0x7c) >> 2;
  iVar4 = *param_1;
  iVar2 = param_1[1];
  iVar3 = uVar7 * 8;
  bVar8 = (*(byte *)((int)param_3 + iVar3 + 0x57) & 3) == 1;
  if ((*(byte *)(param_2 + 2) & 1) == 0) {
    if (bVar8) {
      param_3[uVar7 + 5] = param_3[uVar7 + 5] | 0xff000000;
      *(byte *)((int)param_3 + iVar3 + 0x55) = *(byte *)((int)param_3 + iVar3 + 0x55) & 0xf0;
      *(undefined1 *)((int)param_3 + iVar3 + 0x55) = 0;
      *(byte *)((int)param_3 + iVar3 + 0x56) = *(byte *)((int)param_3 + iVar3 + 0x56) & 0xf0;
      bVar1 = *(byte *)((int)param_3 + iVar3 + 0x57);
      *(byte *)((int)param_3 + iVar3 + 0x57) = bVar1 & 0xfc;
      *(byte *)((int)param_3 + iVar3 + 0x57) = bVar1 & 0x80 | 0x40;
      *(undefined1 *)((int)param_3 + iVar3 + 0x57) = 0x40;
    }
  }
  else {
    if (bVar8) {
      param_2[iVar5 + 5] = param_2[iVar5 + 5] | 0xff000000;
      iVar4 = iVar5 * 8;
      *(byte *)((int)param_2 + iVar4 + 0x55) = *(byte *)((int)param_2 + iVar4 + 0x55) & 0xf0;
      *(undefined1 *)((int)param_2 + iVar4 + 0x55) = 0;
      *(byte *)((int)param_2 + iVar4 + 0x56) = *(byte *)((int)param_2 + iVar4 + 0x56) & 0xf0;
      bVar1 = *(byte *)((int)param_2 + iVar4 + 0x57);
      *(byte *)((int)param_2 + iVar4 + 0x57) = bVar1 & 0xfc;
      *(byte *)((int)param_2 + iVar4 + 0x57) = bVar1 & 0x80 | 0x40;
      *(undefined1 *)((int)param_2 + iVar4 + 0x57) = 0x40;
      param_3[uVar7 + 5] = param_3[uVar7 + 5] | 0xff000000;
      *(byte *)((int)param_3 + iVar3 + 0x55) = *(byte *)((int)param_3 + iVar3 + 0x55) & 0xf0;
      *(undefined1 *)((int)param_3 + iVar3 + 0x55) = 0;
      *(byte *)((int)param_3 + iVar3 + 0x56) = *(byte *)((int)param_3 + iVar3 + 0x56) & 0xf0;
      bVar1 = *(byte *)((int)param_3 + iVar3 + 0x57);
      *(byte *)((int)param_3 + iVar3 + 0x57) = bVar1 & 0xfc;
      *(byte *)((int)param_3 + iVar3 + 0x57) = bVar1 & 0x80 | 0x40;
      *(undefined1 *)((int)param_3 + iVar3 + 0x57) = 0x40;
      iVar4 = func_0x0000e528(*param_2,param_2[1]);
      iVar2 = func_0x0000e528(*param_3,param_3[1]);
      if (iVar4 == 0xff || iVar2 == 0xff) {
        return 1;
      }
      FUN_ram_00026754(iVar4,0);
      FUN_ram_0002dc2c(iVar4,iVar5,iVar2,uVar7);
    }
    else {
      if (*param_2 == 0 && param_2[1] == 0) {
        return 1;
      }
      func_0x0000e640(param_2);
      if (iVar4 != 0 || iVar2 != 0) {
        param_3[*(byte *)(param_1 + 2) + 5] = param_3[*(byte *)(param_1 + 2) + 5] | 0xff000000;
        func_0x0001736c(param_3,(char)param_1[2],0,2);
      }
      FUN_ram_0002d9e8();
    }
    uVar6 = 0;
  }
  return uVar6;
}



/* ==========================================================
 * ram:000232fc  FUN_ram_000232fc  size=252  [ENTRY/ROOT]
 * ========================================================== */

void FUN_ram_000232fc(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uStack_2c;
  undefined1 auStack_28 [8];
  int iStack_20;
  
  uStack_2c = 0;
  iStack_20 = 0;
  iVar1 = FUN_ram_0002c860(param_1,&iStack_20,auStack_28);
  if (iVar1 == 1) {
    uVar2 = (uint)*(byte *)(param_1 + 8);
    uVar3 = *(uint *)(iStack_20 + uVar2 * 4 + 0x14) & 0xffffff;
    if (((uVar3 == 0xe0101 || uVar3 == 0xe0102) || uVar3 == 0xe0103) || uVar3 == 0xe0104) {
      FUN_ram_00030174(param_1,iStack_20,uVar3);
    }
    else if (uVar3 == 1) {
      if (uVar2 == 0) {
        FUN_ram_0002b100(iStack_20,param_1);
      }
      else if (*(char *)(param_1 + 9) == '\0') {
        iVar1 = FUN_ram_0002c9d8(param_1,iStack_20,auStack_28,&uStack_2c);
        if (iVar1 != 0) {
          FUN_ram_0002407c(param_1,auStack_28,iStack_20,uStack_2c);
        }
      }
      else if ((int)(*(byte *)(iStack_20 + uVar2 * 8 + 0x58) & 8) >> 3 != 1) {
        func_0x00014c44(1);
        FUN_ram_000233f8(param_1,iStack_20);
      }
    }
  }
  return;
}



/* ==========================================================
 * ram:000233f8  FUN_ram_000233f8  size=392
 * callers: ram:00023580,ram:0002407c,ram:000232fc
 * ========================================================== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_000233f8(int param_1,int param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uStack_24;
  int iStack_20;
  undefined1 uStack_1c;
  
  uStack_24 = 0xff;
  uStack_1c = *(undefined1 *)(param_1 + 8);
  iVar3 = (uint)*(byte *)(param_1 + 8) * 8;
  *(byte *)(iVar3 + param_2 + 0x57) = *(byte *)(param_2 + iVar3 + 0x57) & 0x7f;
  iVar3 = (uint)*(byte *)(param_1 + 8) * 8;
  bVar1 = *(byte *)(param_2 + iVar3 + 0x58);
  iVar3 = iVar3 + param_2;
  if ((int)(bVar1 & 0x10) >> 4 == 1) {
    *(byte *)(iVar3 + 0x58) = bVar1 & 0xef;
    iVar3 = (uint)*(byte *)(param_1 + 8) * 8;
    *(byte *)(iVar3 + param_2 + 0x60) = *(byte *)(param_2 + iVar3 + 0x60) & 0xef;
    iVar3 = (uint)*(byte *)(param_1 + 8) * 8;
    *(byte *)(iVar3 + param_2 + 0x60) = *(byte *)(param_2 + iVar3 + 0x60) & 0xf7;
    iVar3 = (uint)*(byte *)(param_1 + 8) * 8;
    *(byte *)(iVar3 + param_2 + 0x58) = *(byte *)(param_2 + iVar3 + 0x58) & 0x1f | 0x20;
    iVar3 = (uint)*(byte *)(param_1 + 8) * 8;
    *(byte *)(iVar3 + param_2 + 0x60) = *(byte *)(param_2 + iVar3 + 0x60) & 0x1f | 0x20;
    iVar3 = (uint)*(byte *)(param_1 + 8) * 8 + param_2;
  }
  iStack_20 = param_2;
  if ((*(byte *)(iVar3 + 0x57) & 3) == 2) {
    func_0x00018158(param_2,5);
    iVar3 = (uint)*(byte *)(param_1 + 8) * 8;
    *(byte *)(iVar3 + param_2 + 0x57) = *(byte *)(param_2 + iVar3 + 0x57) & 0xfc;
  }
  else {
    func_0x00018158(param_2,2);
    iVar3 = FUN_ram_00024014(param_2,param_1,&uStack_24);
    if (iVar3 != 0) {
      return;
    }
    uVar2 = func_0x0000e5a0(uStack_24);
    func_0x00019448(uStack_24 & 0xff);
    FUN_ram_0002303c(param_1,uVar2,param_2);
  }
  if ((_DAT_ram_008016cc & 0x20) != 0) {
    (*(code *)((uRam00800442 & 0xfffe) * 2))(0,&iStack_20);
  }
  return;
}



/* ==========================================================
 * ram:00023580  FUN_ram_00023580  size=454
 * callers: ram:0002407c
 * ========================================================== */

bool FUN_ram_00023580(int *param_1,undefined4 *param_2,int param_3,undefined4 param_4,int *param_5)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iStack_50;
  uint uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 uStack_40;
  undefined1 uStack_3f;
  
  iVar4 = param_1[1];
  *param_5 = *param_1;
  param_5[1] = iVar4;
  uVar5 = 0;
  uStack_4c = 0;
  iStack_50 = 0;
  cVar2 = *(char *)((int)param_5 + param_3 + -1);
  if ((*(byte *)(param_2 + 2) & 1) == 0) {
    *(char *)((int)param_5 + param_3 + -1) = cVar2 + -1;
  }
  else {
    *(char *)((int)param_5 + param_3 + -1) = cVar2 + '\x01';
  }
  iVar4 = func_0x0000e264(*param_5,param_5[1]);
  if (iVar4 == 0) {
    return false;
  }
  uStack_3f = 1;
  uStack_40 = *(undefined1 *)((int)param_5 + param_3 + -1);
  uStack_48 = *param_2;
  uStack_44 = param_2[1];
  iVar4 = func_0x0000f478(param_5,uVar5,2,2,&iStack_50,2);
  if (iVar4 == 0x1000000) {
    bVar1 = (uStack_4c & 0x80000000) == 0;
    if (bVar1) {
      FUN_ram_000233f8(&uStack_48,param_4);
    }
    uVar3 = param_5[1];
    param_5[1] = uVar3 | 0x80000000;
    if (*param_5 == iStack_50 && (uVar3 | 0x80000000) == uStack_4c) {
      return bVar1;
    }
  }
  else {
    if (iVar4 != 0x2000000) {
      return true;
    }
    iVar4 = func_0x0000f280();
    if (*(char *)(iVar4 + 0x12) != '\b' && *(char *)(iVar4 + 0x12) != '\0') {
      return true;
    }
  }
  FUN_ram_000233f8(&uStack_48,param_4);
  return true;
}



/* ==========================================================
 * ram:00023748  FUN_ram_00023748  size=62
 * callers: ram:000285cc
 * ========================================================== */

void FUN_ram_00023748(undefined4 param_1,int param_2)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(&DAT_ram_008077ec + (uint)(byte)(&DAT_ram_008077e8)[param_2] * 4))(param_1);
  (&DAT_ram_008077e8)[param_2] = uVar1;
  return;
}



/* ==========================================================
 * ram:00023814  FUN_ram_00023814  size=86
 * callers: ram:00022814
 * ========================================================== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00023814(void)

{
  DAT_ram_008077e8 = 0;
  DAT_ram_008077e9 = 0;
  _DAT_ram_008077ec = 0x1d908;
  _DAT_ram_008077f0 = 0x1d9ec;
  _DAT_ram_008077f4 = 0x1da04;
  _DAT_ram_008077f8 = 0x1da1c;
  _DAT_ram_008077fc = 0x1da34;
  _DAT_ram_00807800 = 0x1dc58;
  return;
}



/* ==========================================================
 * ram:0002386c  FUN_ram_0002386c  size=112  [ENTRY/ROOT]
 * ========================================================== */

void FUN_ram_0002386c(undefined4 param_1)

{
  if (DAT_ram_00807a14 != DAT_ram_00807a15) {
    func_0x00017ba4(param_1,(uint)DAT_ram_00807a14 * 0x42 + 0x807804,DAT_ram_00807a16);
    DAT_ram_00807a14 = DAT_ram_00807a14 + 1 & 7;
    uRam0080175a = 1;
  }
  return;
}



/* ==========================================================
 * ram:00023904  FUN_ram_00023904  size=32
 * callers: ram:0002a08c
 * ========================================================== */

undefined8 FUN_ram_00023904(int param_1)

{
  return CONCAT44(param_1,(uint)(*(byte *)(param_1 * 4 + 0x807bcc) >> 7));
}



/* ==========================================================
 * ram:00023924  FUN_ram_00023924  size=30
 * callers: ram:0002a08c
 * ========================================================== */

int FUN_ram_00023924(int param_1)

{
  return param_1 * 4 + 0x807bcd;
}



/* ==========================================================
 * ram:00023944  FUN_ram_00023944  size=294
 * callers: ram:0002a08c
 * ========================================================== */

undefined4 FUN_ram_00023944(int param_1,int param_2)

{
  int iVar1;
  uint uStack_2c;
  
  uStack_2c = 0;
  if ((int)(*(byte *)(param_1 + 9) & 0x80) >> 7 != 1) {
    return 2;
  }
  iVar1 = func_0x0001b8f8(param_1,param_2 + -1 >> 1 & 0xff,0x95);
  if (((iVar1 != 0) && (iVar1 = func_0x0000f478(param_1,0,2,iVar1,&uStack_2c,1), iVar1 == 0x1000000)
      ) && ((uStack_2c & 0x400000) != 0)) {
    return 0;
  }
  return 1;
}



/* ==========================================================
 * ram:00023a8c  FUN_ram_00023a8c  size=262
 * callers: ram:0002a08c
 * ========================================================== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_00023a8c(undefined4 param_1,uint param_2,uint param_3,byte *param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  uVar4 = 0;
  while ((((uint)uRam00807c04 & 1 << ((byte)uVar4 & 0x1f)) == 0 ||
         (iVar2 = func_0x00017c14(param_1,uVar4 * 0x10 + 0x807c08,0x10), iVar2 != 0))) {
    uVar4 = uVar4 + 1 & 0xff;
    if (0xd < uVar4) {
      return 0;
    }
  }
  if ((_DAT_ram_008016cc & 0x80000000) != 0) {
    bVar1 = *(byte *)(uVar4 * 4 + 0x807bcc);
    uVar3 = (uint)bVar1;
    bVar5 = (bVar1 >> 4 & 7) == param_2;
    if (bVar5) {
      uVar3 = uVar3 & 0xf;
    }
    if (!bVar5 || uVar3 != param_3) {
      return 0;
    }
    if (param_4 != (byte *)0x0) {
      *param_4 = (byte)uVar4;
    }
    return 1;
  }
  return 1;
}



/* ==========================================================
 * ram:00023b94  FUN_ram_00023b94  size=208  [ENTRY/ROOT]
 * ========================================================== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00023b94(undefined4 param_1,int param_2,byte param_3,byte param_4,char param_5)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  
  iVar2 = func_0x0000e5a0(param_2);
  func_0x00017ba4(param_2 * 0x10 + 0x807c08,param_1,0x10);
  uRam00807c04 = uRam00807c04 | (ushort)(1 << ((byte)param_2 & 0x1f));
  if ((_DAT_ram_008016cc & 0x80000000) != 0) {
    param_2 = param_2 * 4;
    bVar1 = *(byte *)(param_2 + 0x807bcc);
    bVar3 = (param_3 & 7) << 4;
    *(byte *)(param_2 + 0x807bcc) = bVar3 | bVar1 & 0x8f;
    *(byte *)(param_2 + 0x807bcc) = param_4 & 0xf | bVar3 | bVar1 & 0x80;
    *(byte *)(param_2 + 0x807bcc) = param_4 & 0xf | bVar3 | param_5 << 7;
    func_0x00017ba4(param_2 + 0x807bcd,iVar2 + 0x10,3);
  }
  return;
}



/* ==========================================================
 * ram:00023cf8  FUN_ram_00023cf8  size=82
 * callers: ram:00032570
 * ========================================================== */

void FUN_ram_00023cf8(void)

{
  undefined1 auStack_14 [4];
  
  auStack_14[0] = 0;
  func_0x0000e840(0,0x19450,0,auStack_14);
  auStack_14[0] = 1;
  func_0x0000e840(1,0x19450,0,auStack_14);
  return;
}



/* ==========================================================
 * ram:00023d4c  FUN_ram_00023d4c  size=182
 * callers: ram:00023eb8
 * ========================================================== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_ram_00023d4c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  
  uVar3 = 1;
  iVar1 = func_0x00012b5c();
  if ((iVar1 == 0) || (iVar2 = func_0x00012c70(iRam00800488), iVar1 = iRam00800488, iVar2 == 0)) {
    uVar3 = 0;
  }
  else if (param_1 == 1) {
    if (*(short *)(iRam00800488 + 0x804) != 0) {
      *(undefined2 *)(iRam00800488 + 0x804) = 0;
      func_0x00012cb8(iVar1);
    }
  }
  else if ((param_1 == 0) &&
          (func_0x00017ba4(0x807c04,iRam00800488 + 0x804,0xe4),
          (_DAT_ram_008016cc & 0x80000000) != 0)) {
    func_0x00017ba4(0x807bcc,iRam00800488 + 0xa94,0x38);
  }
  if (param_1 == 0) {
    uRam00807bca = uVar3;
  }
  return uVar3;
}



/* ==========================================================
 * ram:00023e9c  FUN_ram_00023e9c  size=26
 * callers: ram:0002b510
 * ========================================================== */

void FUN_ram_00023e9c(undefined1 param_1)

{
  uRam00807cf8 = param_1;
  return;
}



/* ==========================================================
 * ram:00023eb8  FUN_ram_00023eb8  size=106  [ENTRY/ROOT]
 * ========================================================== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00023eb8(void)

{
  uRam00807cf9 = 0;
  if (cRam008016d1 == '\0') {
    FUN_ram_00023d4c(0);
    if (sRam00807c04 != 0) {
      uRam00807cf9 = 1;
      return;
    }
  }
  else if ((_DAT_ram_008016cc & 0x2000) == 0) {
    FUN_ram_00023d4c(1);
    return;
  }
  return;
}



/* ==========================================================
 * ram:00023f24  FUN_ram_00023f24  size=26
 * callers: ram:00031028
 * ========================================================== */

void FUN_ram_00023f24(undefined1 param_1)

{
  uRam00807cf9 = param_1;
  return;
}



/* ==========================================================
 * ram:00024014  FUN_ram_00024014  size=102
 * callers: ram:000233f8
 * ========================================================== */

bool FUN_ram_00024014(int param_1,int param_2,uint *param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = *(uint *)((uint)*(byte *)(param_2 + 8) * 4 + param_1 + 0x14) >> 0x18;
  *param_3 = uVar2;
  iVar3 = (uint)*(byte *)(param_2 + 8) * 8;
  bVar1 = *(byte *)(param_1 + iVar3 + 0x57);
  if ((bVar1 & 3) == 3) {
    *(byte *)(iVar3 + param_1 + 0x57) = bVar1 & 0xfc;
    uVar2 = *param_3;
  }
  return uVar2 == 0xff;
}



/* ==========================================================
 * ram:0002407c  FUN_ram_0002407c  size=964
 * callers: ram:000232fc
 * ========================================================== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_ram_0002407c(undefined4 *param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  char acStack_58 [2];
  undefined2 uStack_56;
  int iStack_54;
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined1 uStack_4e;
  undefined1 uStack_4d;
  undefined1 uStack_4c;
  undefined1 auStack_4b [3];
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [4];
  
  acStack_58[0] = '\0';
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_4f = 0;
  uStack_4e = 0;
  uStack_4d = 0;
  uStack_4c = 0;
  auStack_4b[0] = 0;
  uVar3 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar3;
  param_2[1] = uVar3 & 0x7fffffff;
  func_0x0001395c(param_1,param_2,auStack_40);
  iVar2 = func_0x0000e264(*param_2,param_2[1]);
  if (iVar2 == 0) {
LAB_ram_0002419c:
    iVar2 = FUN_ram_0002cad8(param_1,param_2,param_3,param_4,&uStack_4e,&uStack_56,&iStack_54);
    if ((((iVar2 == 1) &&
         (iVar2 = FUN_ram_0002fc5c(param_1,param_2,param_3,uStack_56,param_4,&uStack_4d,&uStack_4c,
                                   auStack_4b), iVar2 != 0)) &&
        (iVar2 = FUN_ram_0002cc0c(param_1,param_2,param_3,uStack_56,param_4,&uStack_50,&uStack_4f),
        iVar2 == 1)) &&
       (((iVar2 = FUN_ram_00023580(param_2,param_1,param_4,param_3,&uStack_48), iVar2 == 0 ||
         (iVar2 = func_0x0000e264(uStack_48,uStack_44), iVar2 == 0)) &&
        (iVar2 = FUN_ram_0002e014(param_1,param_2,param_3,uStack_56,param_4,iStack_54,uStack_50,
                                  uStack_4f,uStack_4d,uStack_4c,auStack_4b[0]), iVar2 == 1)))) {
      if (cRam008016c7 == '\0') {
        uVar3 = (uint)*(byte *)(param_1 + 2);
      }
      else {
        iVar2 = FUN_ram_0002fe2c(uStack_4e,uStack_56,param_2);
        uVar3 = (uint)*(byte *)(param_1 + 2);
        if (iVar2 == 0) goto LAB_ram_000243ac;
      }
      if ((_DAT_ram_008016cc & 0x1000000) == 0) {
LAB_ram_000242c0:
        iVar2 = func_0x0001736c(param_3,uVar3,iStack_54,1);
        if (iVar2 != 0) goto LAB_ram_0002431c;
        func_0x0000e37c(iStack_54,0);
        *(uint *)((uint)*(byte *)(param_1 + 2) * 4 + param_3 + 0x14) =
             *(uint *)(param_3 + (uint)*(byte *)(param_1 + 2) * 4 + 0x14) | 0xff000000;
      }
      else {
        iVar2 = FUN_ram_00022ba8(param_3,uVar3,iStack_54);
        if (iVar2 == 1) {
          uVar3 = (uint)*(byte *)(param_1 + 2);
          goto LAB_ram_000242c0;
        }
LAB_ram_0002431c:
        iVar2 = FUN_ram_00022eb4(param_2,0);
        if (iVar2 == 0) goto LAB_ram_000241dc;
        iVar2 = FUN_ram_00022ef4(iStack_54);
        if ((iVar2 == 0) || (iVar2 = FUN_ram_00022eb4(iStack_54,1), iVar2 == 0)) {
          *(uint *)((uint)*(byte *)(param_1 + 2) * 4 + param_3 + 0x14) =
               *(uint *)(param_3 + (uint)*(byte *)(param_1 + 2) * 4 + 0x14) | 0xff000000;
        }
        else {
          FUN_ram_0002ed44(iStack_54,acStack_58);
          if (acStack_58[0] == '\0') {
            return 0;
          }
          *(uint *)((uint)*(byte *)(param_1 + 2) * 4 + param_3 + 0x14) =
               *(uint *)(param_3 + (uint)*(byte *)(param_1 + 2) * 4 + 0x14) | 0xff000000;
        }
        func_0x0000e37c(iStack_54,0);
      }
      (*(code *)((uRam0080047e & 0xfffe) * 2))(param_3,*(undefined1 *)(param_1 + 2));
      func_0x00018158(param_3,2,*(undefined1 *)(param_1 + 2));
    }
  }
  else {
    iVar2 = func_0x00014870(*param_2,param_2[1]);
    if (iVar2 != 0) {
      FUN_ram_000233f8(param_1,param_3);
      iVar2 = func_0x0000e264(*param_2,param_2[1]);
      if (iVar2 == 0) goto LAB_ram_0002419c;
    }
  }
LAB_ram_000241dc:
  uVar3 = (uint)*(byte *)(param_1 + 2);
LAB_ram_000243ac:
  bVar1 = *(byte *)(param_3 + uVar3 * 8 + 0x58);
  if ((((int)(bVar1 & 0x10) >> 4 == 1) && (iStack_54 != 0)) && ((*(byte *)(iStack_54 + 8) & 1) == 0)
     ) {
    *(byte *)(uVar3 * 8 + param_3 + 0x58) = bVar1 & 0xef;
    *(byte *)((uint)*(byte *)(param_1 + 2) * 8 + param_3 + 0x60) =
         *(byte *)(param_3 + (uint)*(byte *)(param_1 + 2) * 8 + 0x60) & 0xef;
  }
  return 1;
}



/* ==========================================================
 * ram:000248c8  FUN_ram_000248c8  size=186
 * callers: ram:0002e014
 * ========================================================== */

undefined4 FUN_ram_000248c8(undefined4 param_1,byte *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int local_24;
  
  uVar3 = 0;
  local_24 = 0;
  iVar1 = func_0x00017a48(param_1,0,2,5,6);
  if (iVar1 != 0) {
    iVar2 = func_0x0000f478(param_1,0,2,iVar1,&local_24,1);
    if (((iVar2 == 0x1000000) && (local_24 == 0x60500)) &&
       (iVar1 = func_0x0000f478(param_1,0,2,iVar1 + 2U & 0xffff,&local_24,1), iVar1 == 0x1000000)) {
      *param_2 = (byte)local_24 & 0xf;
      uVar3 = 1;
    }
  }
  return uVar3;
}



/* ==========================================================
 * ram:00024afc  FUN_ram_00024afc  size=738
 * callers: ram:0002b100
 * ========================================================== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_00024afc(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  char cStack_3c;
  char acStack_3b [3];
  
  cStack_3c = -1;
  acStack_3b[0] = '\0';
  iVar1 = func_0x00014f58();
  if ((iVar1 == 1) && (param_4 == 1 || param_4 == 4)) {
    return 1;
  }
  if ((param_4 == 4) && ((int)(*(byte *)(param_1 + 0xf) & 0x10) >> 4 == 1)) {
    return 1;
  }
  iVar1 = FUN_ram_0002b16c(&cStack_3c);
  if (iVar1 == 0) {
    return 1;
  }
  if (((cStack_3c == '\0') && (iVar1 = func_0x00023f40(), iVar1 == 1)) && (param_4 != 7)) {
    return 1;
  }
  if (param_4 == 2) {
    iVar1 = (*(code *)((uRam0080047e & 0xfffe) * 2))(param_1,param_2);
  }
  else if (param_4 == 3) {
    (*(code *)((uRam0080047c & 0xfffe) * 2))(param_3,0,1);
    iVar1 = (*(code *)((uRam00800480 & 0xfffe) * 2))(param_1,param_2,param_3);
  }
  else {
    if (param_4 != 5) goto LAB_ram_00024c38;
    iVar1 = (*(code *)((uRam0080047c & 0xfffe) * 2))(param_1,0,0);
  }
  if (iVar1 == 0) {
    return 0;
  }
LAB_ram_00024c38:
  uVar4 = 0x200000;
  if ((((_DAT_ram_008016cc & 0x200000) == 0) && (iVar1 = func_0x00014b44(), iVar1 == 1)) &&
     (param_4 != 6)) {
    while (iVar1 = func_0x000172a8(), iVar1 == 0) {
      iVar1 = func_0x000171b8();
      if (iVar1 != 0) {
        return 0;
      }
    }
  }
  else {
    iVar1 = func_0x00017264();
    if (iVar1 == 0) {
      return 0;
    }
  }
  if ((param_4 != 4) || (iVar1 = (*(code *)((uRam0080047c & 0xfffe) * 2))(param_1,1,0), iVar1 != 0))
  {
    if (param_4 == 1) {
      iVar1 = (*(code *)((uRam0080041e & 0xfffe) * 2))(param_1,param_2,param_3);
      if (iVar1 == 0) {
        return 0;
      }
      (*(code *)((uRam0080047c & 0xfffe) * 2))(param_3,1,0);
    }
    if (param_4 == 1 || param_4 == 4) {
      func_0x0001883c(6);
      uVar2 = func_0x00018b48(0xe);
      func_0x000187b0(6,uVar2);
      func_0x000187f4(6);
      iVar1 = func_0x00014b44();
      if ((iVar1 == 1) ||
         (((param_4 == 1 && ((_DAT_ram_008016cc & 0x10000) != 0)) &&
          ((*(byte *)(param_3 + 0x13) & 1) != 0)))) {
        do {
          iVar1 = func_0x00018880(6);
        } while (iVar1 == 0);
        func_0x0001883c(6);
      }
      iVar1 = FUN_ram_00033870(param_3,acStack_3b);
      if ((acStack_3b[0] != '\0') && (iVar3 = func_0x00014b44(), iVar3 == 1)) {
        do {
          iVar3 = func_0x00018880(6);
        } while (iVar3 == 0);
        func_0x0001883c(6);
      }
      if (iVar1 == 0) {
        return 0;
      }
    }
    iVar1 = func_0x00014b44();
    if (iVar1 != 1 && param_4 != 7) {
      return 1;
    }
    if ((_DAT_ram_008016cc & uVar4) != 0 && param_4 != 7) {
      return 1;
    }
    iVar1 = func_0x00017224();
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



/* ==========================================================
 * ram:00025014  FUN_ram_00025014  size=260
 * callers: ram:00037b88,ram:0002d814,ram:0002d014
 * ========================================================== */

undefined4 FUN_ram_00025014(undefined4 param_1,undefined4 param_2,int param_3)

{
  sbyte sVar1;
  int iVar2;
  uint uVar3;
  uint local_30;
  
  iVar2 = func_0x00017a48(param_1,param_2,1,4,0xff);
  if (iVar2 != 0) {
    uVar3 = iVar2 + 3U & 0xffff;
    iVar2 = func_0x0000f478(param_1,param_2,1,uVar3,&local_30,1);
    if (iVar2 == 0x1000000) {
      sVar1 = 9;
      if (param_3 == 0) {
        sVar1 = 10;
      }
      local_30 = local_30 | 1 << sVar1;
      iVar2 = func_0x0000f594(param_1,param_2,1,uVar3,&local_30,1);
      if (iVar2 == 0x1000000) {
        local_30 = local_30 & ~(1 << sVar1);
        iVar2 = func_0x0000f594(param_1,param_2,1,uVar3,&local_30,1);
        if (iVar2 == 0x1000000) {
          return 0;
        }
      }
    }
  }
  return 1;
}



/* ==========================================================
 * ram:00025118  FUN_ram_00025118  size=1240
 * callers: ram:000350e0
 * ========================================================== */

undefined4
FUN_ram_00025118(uint param_1,undefined1 param_2,uint param_3,char param_4,undefined4 param_5,
                int param_6,char *param_7,undefined4 param_8)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  char cVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  char *pcVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 *puVar14;
  ushort uVar15;
  int iVar16;
  uint uVar17;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  char cStack_bc;
  char acStack_b0 [4];
  ushort uStack_ac;
  byte abStack_aa [106];
  
  puVar14 = &stack0xffffffc0;
  uStack_c8 = 0;
  uStack_c4 = 0;
  bVar1 = 4;
  *param_7 = '\x02';
  FUN_ram_00037180(acStack_b0);
  acStack_b0[param_1 * 8] = '\x01';
  (abStack_aa + param_1 * 8 + -2)[0] = 0;
  (abStack_aa + param_1 * 8 + -2)[1] = 0;
  uVar17 = param_1;
  do {
    if (param_3 == uVar17) {
      if (param_6 == 0) {
        iVar16 = 0;
        do {
          if (puVar14[-0x70] != '\0') {
            uStack_c4 = (uint)(byte)puVar14[-0x6e];
            iVar2 = func_0x0000e5a0(puVar14[-0x6f]);
            iVar3 = func_0x0000e5a0(iVar16);
            uVar17 = (uint)*(byte *)(uStack_c4 * 8 + iVar2 + 0x57);
            if ((uVar17 & 3) == 1) {
              puVar14[-0x6d] = (char)((int)(uVar17 & 0x7c) >> 2);
            }
            else {
              iVar4 = func_0x0000e5e8(iVar3,iVar2);
              if (iVar4 == 1) {
                cStack_bc = (char)((int)(*(byte *)(iVar3 + 8) & 0xfe) >> 1);
              }
              else {
                for (iVar3 = 0; (iVar3 < 7 && (*(char *)(iVar2 + iVar3) != '\0')); iVar3 = iVar3 + 1
                    ) {
                }
                cStack_bc = ((char *)(iVar2 + iVar3))[-1];
              }
              puVar14[-0x6d] = cStack_bc;
            }
          }
          iVar16 = iVar16 + 1;
          puVar14 = puVar14 + 8;
        } while (iVar16 < 0xe);
        cVar5 = '\x01';
        for (uVar17 = param_3; param_1 != uVar17; uVar17 = (uint)(byte)acStack_b0[uVar17 * 8 + 1]) {
          cVar5 = cVar5 + '\x01';
        }
        puVar14 = (undefined1 *)FUN_ram_0002665c(param_5);
        puVar14[0x2a] = cVar5;
        uStack_cc = (uint)(byte)(cVar5 - 1);
        uVar17 = param_3;
        if (param_1 != param_3) {
          while( true ) {
            uStack_c8 = uVar17;
            pcVar10 = puVar14 + uStack_cc;
            pcVar10[0x1c] = (char)uStack_c8;
            iVar16 = uStack_c8 * 8;
            *pcVar10 = acStack_b0[iVar16 + 3];
            cVar7 = param_4;
            if (param_3 != uStack_c8) {
              cVar7 = (char)uStack_c4;
            }
            pcVar10[0xe] = cVar7;
            if (abStack_aa[iVar16] < bVar1) {
              bVar1 = abStack_aa[iVar16];
            }
            uStack_cc = uStack_cc - 1 & 0xff;
            uVar17 = (uint)(byte)acStack_b0[iVar16 + 1];
            if (param_1 == uVar17) break;
            if (param_3 != uVar17) {
              uStack_c4 = (uint)(byte)acStack_b0[uStack_c8 * 8 + 2];
            }
          }
        }
        puVar14[0x1c] = (char)param_1;
        *puVar14 = param_2;
        if (cVar5 != '\x01') {
          param_4 = acStack_b0[uStack_c8 * 8 + 2];
        }
        puVar14[0xe] = param_4;
        *param_7 = bVar1 * (1 >= bVar1) + (1 < bVar1) * '\x02';
        for (iVar16 = 0; iVar16 < (int)(uint)(byte)puVar14[0x2a]; iVar16 = iVar16 + 1) {
          iVar2 = func_0x0000e5a0(puVar14[iVar16 + 0x1c]);
          if (((int)(*(byte *)(iVar2 + (uint)(byte)puVar14[iVar16 + 0xe] * 8 + 0x58) & 0x10) >> 4 ==
               1) && ((*(byte *)((uint)(byte)puVar14[iVar16 + 0xe] * 8 + iVar2 + 0x55) & 0x20) != 0)
             ) {
            puVar14[0x2b] = 1;
            return 1;
          }
        }
      }
      return 1;
    }
    iVar2 = func_0x0000e5a0(uVar17);
    uVar13 = 0;
    uVar6 = *(byte *)(iVar2 + 9) & 0xf;
    iVar16 = iVar2;
    do {
      if ((((*(uint *)(iVar16 + 0x14) & 0xffffff) == 1) &&
          ((int)(*(byte *)(iVar2 + uVar13 * 8 + 0x58) & 8) >> 3 != 1)) &&
         (uVar12 = *(uint *)(iVar16 + 0x14) >> 0x18, uVar12 != 0xff)) {
        iVar3 = FUN_ram_0002de7c(uVar17,uVar13 & 0xff,param_8);
        puVar8 = &stack0xffffffc0 + uVar17 * 8;
        puVar9 = &stack0xffffffc0 + uVar12 * 8;
        if ((int)((uint)*(ushort *)(abStack_aa + uVar17 * 8 + -2) + iVar3) <
            (int)(uint)*(ushort *)(abStack_aa + uVar12 * 8 + -2)) {
          FUN_ram_0003715c(acStack_b0,uVar12,uVar17,uVar13 & 0xff);
          *(short *)(puVar9 + -0x6c) = *(short *)(puVar8 + -0x6c) + (short)iVar3;
          uVar6 = (uint)*(byte *)(uVar13 * 8 + iVar2 + 0x58);
          uVar11 = uVar6 & 7;
          uVar12 = (uint)(byte)puVar9[-0x6a];
          iVar3 = (int)(uVar6 & 0x10) >> 4;
          if ((int)(uVar6 & 0xe0) >> 5 == 2) {
            if (iVar3 == 0) {
LAB_ram_00025388:
              if ((int)(2 - uVar11) < (int)uVar12) {
                puVar9[-0x6a] = (char)(2 - uVar11);
              }
            }
            else if ((int)(4 - uVar11) < (int)uVar12) {
              puVar9[-0x6a] = (char)(4 - uVar11);
            }
          }
          else {
            if (iVar3 != 0) goto LAB_ram_00025388;
            if ((int)(1 - uVar11) < (int)uVar12) {
              puVar9[-0x6a] = (char)(1 - uVar11);
            }
          }
        }
        uVar6 = *(byte *)(iVar2 + 9) & 0xf;
      }
      uVar13 = uVar13 + 1;
      iVar16 = iVar16 + 4;
    } while ((int)uVar13 <= (int)uVar6);
    uVar15 = 0xffff;
    uVar17 = 0;
    uVar6 = 0;
    do {
      if ((*(ushort *)(abStack_aa + uVar6 * 8 + -2) < uVar15) && (acStack_b0[uVar6 * 8] == '\0')) {
        uVar17 = uVar6 & 0xff;
        uVar15 = *(ushort *)(abStack_aa + uVar6 * 8 + -2);
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < 0xe);
    if (uVar15 == 0xffff) {
      return 0;
    }
    acStack_b0[uVar17 * 8] = '\x01';
  } while( true );
}



/* ==========================================================
 * ram:000255f0  FUN_ram_000255f0  size=54
 * callers: ram:00025628
 * ========================================================== */

void FUN_ram_000255f0(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  do {
    iVar2 = uVar1 * 4;
    *(undefined4 *)(param_1 + iVar2) = *(undefined4 *)(param_3 + iVar2);
    ((undefined4 *)(param_1 + iVar2))[4] = *(undefined4 *)(param_2 + iVar2);
    uVar1 = uVar1 + 1 & 0xff;
  } while (uVar1 < 4);
  return;
}



/* ==========================================================
 * ram:00025628  FUN_ram_00025628  size=342
 * callers: ram:000344f4
 * ========================================================== */

undefined4 FUN_ram_00025628(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uStack_88;
  undefined1 auStack_84 [32];
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [16];
  
  pbVar2 = (byte *)FUN_ram_00027cac(param_2);
  bVar1 = *pbVar2;
  FUN_ram_00027ccc(auStack_54,param_2);
  uStack_88 = param_4 << 0x13 | (uint)bVar1 << 0x10 | (uint)pbVar2[10] << 0x14;
  if (param_1 == 6) {
    uStack_88 = (uint)pbVar2[0x16] << 0x19 | (uint)pbVar2[0x15] << 0x18 | uStack_88;
    func_0x000156f0(auStack_44);
    FUN_ram_000255f0(auStack_84,auStack_44,auStack_54);
    uStack_64 = *(undefined4 *)(pbVar2 + 4);
    uStack_60 = *(undefined4 *)pbVar2;
    uStack_5c = *(undefined4 *)(pbVar2 + 0x1c);
    uStack_58 = *(undefined4 *)(pbVar2 + 0x18);
    uVar4 = 0x34;
    uVar5 = 0x40;
  }
  else {
    if (param_1 != 7) {
      return 0;
    }
    uVar3 = 1;
    do {
      *(undefined4 *)(auStack_84 + uVar3 * 4 + -4) = *(undefined4 *)(auStack_54 + uVar3 * 4 + -4);
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < 5);
    uVar4 = 0x14;
    uVar5 = 0x20;
  }
  uVar4 = func_0x00019048(10,param_1,param_3,0,1,&uStack_88,uVar4,uVar5);
  return uVar4;
}



/* ==========================================================
 * ram:00025780  FUN_ram_00025780  size=102
 * callers: ram:00026bf8,ram:000268b4,ram:00026a54,ram:00027014
 * ========================================================== */

undefined4 FUN_ram_00025780(undefined1 *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = func_0x0000e5a0();
  if (iVar1 != 0) {
    do {
      if ((*(uint *)(uVar2 * 4 + iVar1 + 0x14) & 0xffffff) == 2) {
        if (param_1 != (undefined1 *)0x0) {
          *param_1 = (char)uVar2;
        }
        return 1;
      }
      uVar2 = uVar2 + 1 & 0xff;
    } while (uVar2 < 0x10);
  }
  return 0;
}



/* ==========================================================
 * ram:00025814  FUN_ram_00025814  size=332
 * callers: ram:0002d814
 * ========================================================== */

void FUN_ram_00025814(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     int param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = func_0x00014e68();
  uVar2 = FUN_ram_0002ef28(param_1,param_2);
  uVar3 = FUN_ram_0002ef28(param_3,param_4);
  uVar5 = (uVar2 & 0x7f00) >> 8;
  uVar4 = (uVar3 & 0x7f00) >> 8;
  if (0x22 < uVar5) {
    uVar2 = uVar2 & 0xffff80ff | 0x2200;
  }
  if (0x22 < uVar4) {
    uVar3 = uVar3 & 0xffff80ff | 0x2200;
  }
  if (0x21 < uVar5) {
    uVar5 = uVar4;
  }
  if ((0x21 < uVar5) && (param_5 == 1 || iVar1 == 1)) {
    uVar4 = 0xffff80ff;
    uVar5 = FUN_ram_0002f9fc(param_1,param_2);
    if (uVar5 == 0xffff) {
      uVar5 = 0x1200;
    }
    uVar2 = uVar2 & uVar4 | uVar5;
    uVar3 = uVar3 & uVar4 | uVar5;
  }
  func_0x0002fb78(param_1,param_2,uVar3);
  func_0x0002fb78(param_3,param_4,uVar2);
  return;
}



/* ==========================================================
 * ram:00025960  FUN_ram_00025960  size=262
 * callers: ram:00031028
 * ========================================================== */

void FUN_ram_00025960(void)

{
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  
  cVar4 = '\0';
  bVar3 = 0;
  do {
    uVar1 = FUN_ram_0002665c(bVar3);
    iVar2 = func_0x00019048(0xc,2,0,cVar4,0x18,uVar1,0x30,0x3c);
    if (iVar2 == 0) goto LAB_ram_00025a30;
    cVar4 = cVar4 + '\x01';
    bVar3 = bVar3 + 1;
  } while (bVar3 < 8);
  bVar5 = 0;
  bVar3 = 0;
  while( true ) {
    uVar1 = FUN_ram_00026330(bVar5,bVar3);
    iVar2 = func_0x00019048(0xc,2,0,cVar4,0x18,uVar1,8,0x14);
    if (iVar2 == 0) break;
    cVar4 = cVar4 + '\x01';
    bVar3 = bVar3 + 1;
    if (7 < bVar3) {
      bVar5 = bVar5 + 1;
      if (1 < bVar5) {
        func_0x00018ddc();
        func_0x00019c1c(0xfffffff0,0,0x1000);
        return;
      }
      bVar3 = 0;
    }
  }
LAB_ram_00025a30:
  func_0x00018ddc();
  func_0x00019c1c(0xfffffff0,0,0x1000);
  return;
}



/* ==========================================================
 * ram:00025a80  FUN_ram_00025a80  size=24
 * callers: ram:00038370,ram:000350e0,ram:0002d014
 * ========================================================== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_ram_00025a80(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ==========================================================
 * ram:00025a98  FUN_ram_00025a98  size=78
 * callers: ram:00025ae8
 * ========================================================== */

void FUN_ram_00025a98(void)

{
  int iVar1;
  byte bVar2;
  
  bVar2 = 0;
  do {
    iVar1 = FUN_ram_0002665c(bVar2);
    if (*(char *)(iVar1 + 0x2d) != '\0') {
      *(char *)(iVar1 + 0x2a) = *(char *)(iVar1 + 0x2d);
      *(undefined1 *)(iVar1 + 0x2d) = 0;
      FUN_ram_0002d814(iVar1,1);
    }
    bVar2 = bVar2 + 1;
  } while (bVar2 < 8);
  return;
}



/* ==========================================================
 * ram:00025ae8  FUN_ram_00025ae8  size=212
 * callers: ram:0002b510
 * ========================================================== */

void FUN_ram_00025ae8(int param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  uint uVar6;
  byte bVar7;
  bool bVar8;
  
  bVar8 = param_1 == 1;
  bVar7 = 0;
  do {
    puVar5 = (undefined1 *)FUN_ram_0002665c(bVar7);
    uVar6 = (uint)(byte)puVar5[0x2a];
    if (uVar6 != 0) {
      uVar1 = *puVar5;
      uVar2 = puVar5[0x1c];
      uVar3 = puVar5[uVar6 + 0xd];
      uVar4 = puVar5[uVar6 + 0x1b];
      FUN_ram_0002d014(puVar5,bVar7,1,bVar8);
      if (!bVar8) {
        FUN_ram_000264d8(1,uVar4,uVar3,0,1);
        FUN_ram_000264d8(0,uVar2,uVar1,0,1);
      }
    }
    bVar7 = bVar7 + 1;
  } while (bVar7 < 8);
  if (bVar8) {
    FUN_ram_00025a98();
  }
  FUN_ram_00037014();
  return;
}



/* ==========================================================
 * ram:00025bbc  FUN_ram_00025bbc  size=102  [ENTRY/ROOT]
 * ========================================================== */

void FUN_ram_00025bbc(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = FUN_ram_00025e84(0);
  uVar3 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = FUN_ram_00026330(0,uVar3);
      if (((*(char *)(iVar2 + 6) == '\x01') && (*(char *)(iVar2 + 5) == '\0')) &&
         (*(char *)(iVar2 + 4) == '\0')) {
        FUN_ram_0002623c(0,*(undefined1 *)(iVar2 + 7));
      }
      uVar3 = uVar3 + 1 & 0xff;
    } while ((int)uVar3 < iVar1);
  }
  return;
}



/* ==========================================================
 * ram:00025d00  FUN_ram_00025d00  size=386
 * callers: ram:00030174,ram:0002ed44
 * ========================================================== */

bool FUN_ram_00025d00(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  uVar3 = 0;
  func_0x0000e5a0(*(undefined1 *)(param_2 + 4));
  if ((*(char *)(param_2 + 4) != '\0') &&
     (iVar1 = func_0x0000e5a0(), (int)(*(byte *)(iVar1 + 9) & 0x70) >> 4 == 1 && param_1 == 0)) {
    return false;
  }
  pcVar4 = (char *)(param_1 + 0x807578);
  if (0 < *pcVar4) {
    do {
      iVar1 = param_1 * 0x40 + uVar3 * 8;
      if (((*(char *)(param_2 + 4) == *(char *)(iVar1 + 0x807580)) &&
          (*(char *)(param_2 + 7) == *(char *)(iVar1 + 0x807583))) &&
         (*(char *)(param_2 + 6) == '\x01')) {
        if (*(char *)(param_2 + 4) != '\0') {
          return false;
        }
        func_0x00019510(1);
        return false;
      }
      uVar3 = uVar3 + 1 & 0xff;
    } while ((int)uVar3 < (int)*pcVar4);
  }
  func_0x00019510(1);
  iVar1 = (int)*pcVar4;
  if (iVar1 < 8) {
    func_0x00017ba4(param_1 * 0x40 + iVar1 * 8 + 0x80757c,param_2,8);
    *pcVar4 = *pcVar4 + '\x01';
  }
  iVar2 = FUN_ram_000267a8(*(undefined1 *)(param_2 + 4));
  if (iVar2 != 0) {
    FUN_ram_000266a4(*(undefined1 *)(param_2 + 4));
  }
  return iVar1 < 8;
}



/* ==========================================================
 * ram:00025e84  FUN_ram_00025e84  size=32
 * callers: ram:00037014,ram:00025bbc,ram:0002d9e8,ram:000350e0,ram:00035014,ram:0002f814
 * ========================================================== */

int FUN_ram_00025e84(int param_1)

{
  return (int)*(char *)(param_1 + 0x807578);
}



/* ==========================================================
 * ram:00025ea4  FUN_ram_00025ea4  size=158
 * callers: ram:00026134,ram:0002623c
 * ========================================================== */

void FUN_ram_00025ea4(void)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  bVar1 = false;
  bVar2 = false;
  uVar6 = 0;
  if (DAT_ram_00807782 == '\0') {
    iVar3 = func_0x0000e5a0();
    uVar4 = (uint)DAT_ram_00807780;
    uVar5 = (uint)DAT_ram_00807781;
    do {
      uVar7 = *(uint *)(uVar6 * 4 + iVar3 + 0x14) & 0xffffff;
      if (uVar7 == 0xe0101 && !bVar1) {
        bVar1 = true;
        uVar4 = uVar6;
      }
      else if (uVar7 == 0xe0101 && !bVar2) {
        bVar2 = true;
        uVar5 = uVar6;
      }
      uVar6 = (uint)(char)((char)uVar6 + '\x01');
    } while ((int)uVar6 <= (int)(*(byte *)(iVar3 + 9) & 0xf));
    DAT_ram_00807781 = (byte)uVar5;
    DAT_ram_00807780 = (byte)uVar4;
    DAT_ram_00807782 = '\x01';
  }
  return;
}



/* ==========================================================
 * ram:00025f44  FUN_ram_00025f44  size=114
 * callers: ram:00026134,ram:0002623c
 * ========================================================== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_00025f44(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 local_14;
  
  *param_1 = 0;
  local_18 = 0;
  local_14 = 0;
  uVar1 = (uint)_DAT_ram_0080777e;
  if (uVar1 == 0) {
    uVar1 = func_0x00017a48(&local_18,0,2,5,6);
    _DAT_ram_0080777e = (ushort)uVar1;
    if (uVar1 == 0) {
      return 0;
    }
  }
  iVar2 = func_0x000100f8(0,2,uVar1 + 0x10 & 0xffff,param_1);
  if (iVar2 != 1) {
    return 0;
  }
  return 1;
}



/* ==========================================================
 * ram:00025fb8  FUN_ram_00025fb8  size=68
 * callers: ram:00026134,ram:0002623c
 * ========================================================== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_00025fb8(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((_DAT_ram_0080777e == 0) ||
     (iVar1 = func_0x00010150(0,2,_DAT_ram_0080777e + 0x10,param_1), iVar1 != 1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* ==========================================================
 * ram:00026040  FUN_ram_00026040  size=184
 * callers: ram:00026134,ram:0002623c
 * ========================================================== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_00026040(void)

{
  undefined4 uVar1;
  int iVar2;
  int local_18;
  
  local_18 = 0;
  if (_DAT_ram_0080777e != 0) {
    uVar1 = func_0x00018b48(0x1b);
    func_0x000187b0(0,uVar1);
    func_0x000187f4(0);
    do {
      iVar2 = func_0x00010150(0,2,_DAT_ram_0080777e + 0xd,0x80000001);
      if (iVar2 != 1) {
        return 0;
      }
      iVar2 = func_0x000100f8(0,2,_DAT_ram_0080777e + 0xd,&local_18);
      if (iVar2 != 1) {
        return 0;
      }
    } while ((local_18 != -0x7fffffff) && (iVar2 = func_0x00018880(0), iVar2 == 0));
    func_0x0001883c(0);
    iVar2 = func_0x00018880(0);
    if (iVar2 != 1) {
      return 1;
    }
  }
  return 0;
}



/* ==========================================================
 * ram:000260f8  FUN_ram_000260f8  size=58
 * callers: ram:00026134,ram:0002623c
 * ========================================================== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_000260f8(void)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((_DAT_ram_0080777e == 0) ||
     (iVar1 = func_0x00010150(0,2,_DAT_ram_0080777e + 0xd,0), iVar1 != 1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* ==========================================================
 * ram:00026134  FUN_ram_00026134  size=264
 * callers: ram:00038370,ram:000350e0
 * ========================================================== */

undefined4 FUN_ram_00026134(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  uint uStack_28;
  
  uStack_28 = 0;
  if (param_1 != 0) {
    return 1;
  }
  FUN_ram_00025ea4();
  if (DAT_ram_00807780 == param_2) {
    cVar3 = '\x01';
  }
  else {
    if (DAT_ram_00807781 != param_2) {
      return 0;
    }
    cVar3 = '\x02';
  }
  iVar1 = FUN_ram_00025f44(&uStack_28);
  if (iVar1 != 0) {
    if (((cVar3 == '\x01') && ((uStack_28 & 0xf) == 1)) ||
       ((cVar4 = '\0', cVar3 == '\x02' && ((uStack_28 & 0xf0) == 0x10)))) {
      cVar4 = cVar3;
    }
    if (cVar4 != '\0') {
      return 1;
    }
    iVar1 = FUN_ram_00026040();
    if ((iVar1 != 0) && (iVar1 = FUN_ram_00025f44(&uStack_28), iVar1 != 0)) {
      if (((cVar3 != '\x01') || ((uStack_28 & 0xf) == 0)) &&
         ((cVar3 != '\x02' || ((uStack_28 & 0xf0) == 0)))) {
        if (cVar3 == '\x01') {
          uVar2 = uStack_28 | 1;
        }
        else {
          uVar2 = uStack_28 | 0x10;
        }
        FUN_ram_00025fb8(uVar2);
        FUN_ram_000260f8();
        return 1;
      }
      FUN_ram_000260f8();
    }
  }
  return 0;
}



/* ==========================================================
 * ram:0002623c  FUN_ram_0002623c  size=244
 * callers: ram:00038370,ram:00025bbc,ram:000350e0,ram:0002d014
 * ========================================================== */

undefined4 FUN_ram_0002623c(int param_1,uint param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  uint local_24;
  
  local_24 = 0;
  uVar3 = 0xff;
  if (param_1 != 0) {
    return 1;
  }
  FUN_ram_00025ea4();
  if (param_2 == DAT_ram_00807780) {
    cVar2 = '\x01';
  }
  else {
    if (DAT_ram_00807781 != param_2) {
      return 0;
    }
    cVar2 = '\x02';
  }
  iVar1 = FUN_ram_00025f44(&local_24);
  if (iVar1 != 0) {
    if ((cVar2 == '\x01') && ((local_24 & 0xf) == 1)) {
      uVar3 = 0xf0;
    }
    if ((cVar2 == '\x02') && ((local_24 & 0xf0) == 0x10)) {
      uVar3 = uVar3 & 0xffffff0f;
    }
    if (uVar3 == 0xff) {
      return 1;
    }
    iVar1 = FUN_ram_00026040();
    if (iVar1 != 0) {
      iVar1 = FUN_ram_00025f44(&local_24);
      if (iVar1 != 0) {
        FUN_ram_00025fb8(local_24 & uVar3);
        FUN_ram_000260f8();
        return 1;
      }
      FUN_ram_000260f8();
    }
  }
  return 0;
}



/* ==========================================================
 * ram:00026330  FUN_ram_00026330  size=32
 * callers: ram:00037014,ram:00025bbc,ram:0002d9e8,ram:000350e0,ram:00035014,ram:0002f814,ram:00025960
 * ========================================================== */

int FUN_ram_00026330(int param_1,int param_2)

{
  return param_2 * 8 + param_1 * 0x40 + 0x80757c;
}



/* ==========================================================
 * ram:00026350  FUN_ram_00026350  size=390
 * callers: ram:000350e0
 * ========================================================== */

undefined4 FUN_ram_00026350(undefined4 param_1,undefined4 param_2)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  
  uVar11 = 0;
  uVar10 = 0;
  bVar2 = false;
  bVar3 = false;
  iVar9 = 0;
  iVar13 = 0;
  pbVar4 = (byte *)FUN_ram_0002665c();
  bVar1 = pbVar4[0xe];
  iVar5 = func_0x0000e5a0(param_2);
  uVar8 = 0;
  do {
    uVar6 = *(uint *)(uVar8 * 4 + iVar5 + 0x14);
    uVar12 = uVar6 & 0xffffff;
    if ((uVar12 == 1) && (uVar6 >> 0x18 != 0xff)) {
      if (uVar8 == 1 || uVar8 == 2) {
        iVar9 = 1;
      }
      if (uVar8 == 3 || uVar8 == 4) {
        iVar13 = 1;
      }
    }
    if (uVar12 != 0xe0101 || bVar2) {
      if (uVar12 == 0xe0101 && !bVar3) {
        uVar10 = uVar8 & 0xff;
        bVar3 = true;
      }
    }
    else {
      uVar11 = uVar8 & 0xff;
      bVar2 = true;
    }
    uVar8 = (uint)(char)((char)uVar8 + '\x01');
  } while ((int)uVar8 <= (int)(*(byte *)(iVar5 + 9) & 0xf));
  uVar8 = (uint)*pbVar4;
  if (((((uVar11 == uVar8) && (bVar1 == 1 || bVar1 == 2)) ||
       ((uVar10 == uVar8 && (bVar1 == 3 || bVar1 == 4)))) && (1 < pbVar4[0x2a])) ||
     ((pbVar4[0x2a] == 1 &&
      (((iVar9 == iVar13 || (iVar13 == 1 && uVar10 == uVar8)) || (iVar9 == 1 && uVar11 == uVar8)))))
     ) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  return uVar7;
}



/* ==========================================================
 * ram:000264d8  FUN_ram_000264d8  size=330
 * callers: ram:0002d9e8,ram:0002f814,ram:0002dc2c,ram:00025ae8
 * ========================================================== */

undefined4 FUN_ram_000264d8(int param_1,uint param_2,uint param_3,undefined1 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  
  uVar4 = 0;
  func_0x00019510(1);
  if (param_1 == 0 && param_2 == 0) {
    param_5 = 1;
  }
  pcVar5 = (char *)(param_1 + 0x807578);
  iVar1 = (int)*pcVar5;
  if (0 < iVar1) {
    do {
      iVar2 = param_1 * 0x40;
      iVar3 = uVar4 * 8 + iVar2;
      if ((param_2 == *(byte *)(iVar3 + 0x807580)) && (param_3 == *(byte *)(iVar3 + 0x807583))) {
        *(undefined1 *)(iVar3 + 0x807581) = param_4;
        *(char *)(iVar3 + 0x807582) = (char)param_5;
        if (param_5 != 0) {
          return 0;
        }
        for (; (int)uVar4 < iVar1 + -1; uVar4 = uVar4 + 1 & 0xff) {
          func_0x00017ba4(uVar4 * 8 + iVar2 + 0x80757c,uVar4 * 8 + iVar2 + 0x807584,8);
          iVar1 = (int)*pcVar5;
        }
        *(undefined1 *)(iVar1 * 8 + iVar2 + 0x80757a) = 0;
        if (0 < iVar1) {
          *pcVar5 = (char)iVar1 + -1;
        }
        return 1;
      }
      uVar4 = uVar4 + 1 & 0xff;
    } while ((int)uVar4 < iVar1);
  }
  return 0;
}



/* ==========================================================
 * ram:00026624  FUN_ram_00026624  size=54
 * callers: ram:00038370,ram:000350e0,ram:0002d014
 * ========================================================== */

void FUN_ram_00026624(int param_1,int param_2)

{
  undefined1 uVar1;
  
  param_1 = param_1 * 0x30;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined1 *)(param_1 + 0x807626);
  }
  *(undefined1 *)(param_1 + 0x807629) = uVar1;
  *(undefined1 *)(param_1 + 0x807626) = 0;
  *(undefined1 *)(param_1 + 0x807628) = 0;
  return;
}



/* ==========================================================
 * ram:0002665c  FUN_ram_0002665c  size=30
 * callers: ram:00038370,ram:0002d9e8,ram:000350e0,ram:00025118,ram:0002f814,ram:0002dc2c,ram:00025a98,ram:00025960
 * ========================================================== */

undefined8 FUN_ram_0002665c(int param_1)

{
  return CONCAT44(param_1,param_1 * 0x30 + 0x8075fc);
}



/* ==========================================================
 * ram:000266a4  FUN_ram_000266a4  size=176
 * callers: ram:00025d00,ram:00026754
 * ========================================================== */

void FUN_ram_000266a4(uint param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_28 [8];
  
  uVar3 = 0;
  iVar1 = (int)cRam00807578;
  if (0 < iVar1) {
    do {
      iVar2 = uVar3 * 8;
      if ((*(char *)(iVar2 + 0x807582) == '\x01') && (*(byte *)(iVar2 + 0x807580) == param_1)) {
        func_0x00017ba4(auStack_28,iVar2 + 0x80757c,8);
        func_0x00017ba4(iVar2 + 0x80757c,0x80757c,8);
        func_0x00017ba4(0x80757c,auStack_28,8);
        func_0x00019510(1);
        iVar1 = (int)cRam00807578;
      }
      uVar3 = uVar3 + 1 & 0xff;
    } while ((int)uVar3 < iVar1);
  }
  return;
}



/* ==========================================================
 * ram:00026754  FUN_ram_00026754  size=84
 * callers: ram:0002303c,ram:00033870
 * ========================================================== */

void FUN_ram_00026754(undefined4 param_1,int param_2)

{
  ushort uVar1;
  
  uVar1 = (ushort)(1 << ((byte)param_1 & 0x1f));
  uRam0080777c = uRam0080777c & ~uVar1 | (ushort)(param_2 << ((byte)param_1 & 0x1f)) & uVar1;
  if (param_2 == 1) {
    FUN_ram_000266a4(param_1);
  }
  return;
}



/* ==========================================================
 * ram:000267a8  FUN_ram_000267a8  size=44
 * callers: ram:000350e0,ram:00037aa8,ram:00025d00
 * ========================================================== */

uint FUN_ram_000267a8(byte param_1)

{
  return (int)((uint)uRam0080777c & 1 << (param_1 & 0x1f) & 0xffffU) >> (param_1 & 0x1f) & 0xff;
}



/* ==========================================================
 * ram:00026814  FUN_ram_00026814  size=160
 * callers: ram:00026bf8,ram:000268b4
 * ========================================================== */

void FUN_ram_00026814(undefined4 param_1,undefined4 param_2,short param_3)

{
  int iVar1;
  short sVar2;
  uint uStack_28;
  
  uStack_28 = 0;
  sVar2 = param_3 * 2 + 1;
  iVar1 = func_0x0000f478(param_1,param_2,0,sVar2,&uStack_28,1);
  if (iVar1 == 0x1000000) {
    uStack_28 = uStack_28 & 0xfaffffff;
    func_0x0000f594(param_1,param_2,0,sVar2,&uStack_28,1);
  }
  return;
}



/* ==========================================================
 * ram:000268b4  FUN_ram_000268b4  size=416
 * callers: ram:00026bf8
 * ========================================================== */

void FUN_ram_000268b4(void)

{
  undefined1 uVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  byte abStack_44 [4];
  int iStack_40;
  int iStack_3c;
  
  piVar3 = (int *)FUN_ram_00027cac();
  iVar4 = FUN_ram_00025780(abStack_44);
  if (iVar4 != 0) {
    iStack_40 = 0;
    iStack_3c = 0;
    iVar4 = func_0x0000e264(0,0);
    uVar8 = (uint)abStack_44[0];
    uVar1 = *(undefined1 *)((int)piVar3 + 0xe);
    func_0x00014050(iVar4,uVar8,uVar1,1,1);
    bVar2 = *(byte *)(iVar4 + uVar8 * 8 + 0x55);
    iVar5 = uVar8 * 8 + iVar4;
    *(byte *)(iVar5 + 0x55) = bVar2 & 0xf7;
    *(byte *)(iVar5 + 0x55) = (byte)(((int)(bVar2 & 0xf0) >> 4 & 0xfffffff7U) << 4) | bVar2 & 7;
    uVar6 = 0;
    do {
      if (((*(char *)((int)piVar3 + uVar6) == '\0') ||
          (*(char *)((int)&iStack_40 + uVar6) = *(char *)((int)piVar3 + uVar6),
          iStack_40 == *piVar3 && iStack_3c == piVar3[1])) ||
         (iVar5 = func_0x0000e264(), iVar5 == 0)) break;
      iVar7 = (int)(*(byte *)(iVar5 + 8) & 0xfe) >> 1;
      func_0x00014050(iVar5,iVar7,0xf,1,1);
      iVar7 = iVar7 * 8;
      bVar2 = *(byte *)(iVar5 + iVar7 + 0x55);
      iVar7 = iVar7 + iVar5;
      *(byte *)(iVar7 + 0x55) = bVar2 & 0xf7;
      *(byte *)(iVar7 + 0x55) = bVar2 & 7 | (byte)(((int)(bVar2 & 0xf0) >> 4 & 0xfffffff7U) << 4);
      uVar6 = uVar6 + 1 & 0xff;
    } while (uVar6 < 6);
    FUN_ram_00026814(iVar4,uVar8,uVar1);
  }
  return;
}



/* ==========================================================
 * ram:00026a54  FUN_ram_00026a54  size=420
 * callers: ram:00026bf8
 * ========================================================== */

void FUN_ram_00026a54(void)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  undefined1 auStack_3c [4];
  undefined4 uStack_38;
  int iStack_34;
  
  pbVar2 = (byte *)FUN_ram_00027cac();
  iVar3 = FUN_ram_00025780(auStack_3c);
  if (iVar3 != 0) {
    uStack_38 = 0;
    iStack_34 = 0;
    iVar3 = func_0x0000e264(0,0);
    bVar1 = *pbVar2;
    bVar6 = 0xf;
    if (pbVar2[1] == 0) {
      bVar6 = pbVar2[0x10];
    }
    func_0x00014050(iVar3,(uint)bVar1,bVar6,1,1);
    iVar4 = (uint)bVar1 * 8;
    bVar1 = *(byte *)(iVar3 + iVar4 + 0x55);
    iVar4 = iVar4 + iVar3;
    *(byte *)(iVar4 + 0x55) = bVar1 & 0xf7;
    *(byte *)(iVar4 + 0x55) = (byte)(((int)(bVar1 & 0xf0) >> 4 & 0xfffffff7U) << 4) | bVar1 & 7;
    uVar5 = 0;
    while ((((uVar5 < 6 && (pbVar2[uVar5] != 0)) &&
            (*(byte *)((int)&uStack_38 + uVar5) = pbVar2[uVar5],
            uStack_38 != *(int *)pbVar2 || iStack_34 != *(int *)(pbVar2 + 4))) &&
           (iVar3 = func_0x0000e264(), iVar3 != 0))) {
      bVar1 = pbVar2[uVar5 + 1];
      bVar6 = 0xf;
      *(byte *)((int)&uStack_38 + uVar5 + 1) = bVar1;
      if (uStack_38 == *(int *)pbVar2 && iStack_34 == *(int *)(pbVar2 + 4)) {
        bVar6 = pbVar2[0x10];
      }
      *(undefined1 *)((int)&uStack_38 + uVar5 + 1) = 0;
      func_0x00014050(iVar3,(uint)bVar1,bVar6,1,1);
      iVar4 = (uint)bVar1 * 8;
      bVar1 = *(byte *)(iVar3 + iVar4 + 0x55);
      iVar4 = iVar4 + iVar3;
      *(byte *)(iVar4 + 0x55) = bVar1 & 0xf7;
      *(byte *)(iVar4 + 0x55) = (byte)(((int)(bVar1 & 0xf0) >> 4 & 0xfffffff7U) << 4) | bVar1 & 7;
      uVar5 = uVar5 + 1 & 0xff;
    }
  }
  return;
}



/* ==========================================================
 * ram:00026bf8  FUN_ram_00026bf8  size=628  [ENTRY/ROOT]
 * ========================================================== */

void FUN_ram_00026bf8(undefined4 param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  byte abStack_48 [4];
  undefined4 uStack_44;
  int iStack_40;
  
  pbVar2 = (byte *)FUN_ram_00027cac();
  if (*(int *)(param_2 + 4) == 1) {
    FUN_ram_00026a54(param_1);
  }
  else if (*(int *)(param_2 + 4) == 2) {
    FUN_ram_000268b4(param_1);
  }
  else {
    iVar3 = FUN_ram_00025780(abStack_48);
    if (iVar3 != 0) {
      uStack_44 = 0;
      iStack_40 = 0;
      iVar3 = func_0x0000e264(0,0);
      uVar5 = (uint)abStack_48[0];
      bVar1 = pbVar2[0xe];
      func_0x00014050(iVar3,uVar5,bVar1,1,1);
      FUN_ram_00026814(iVar3,uVar5,bVar1);
      bVar1 = *(byte *)(iVar3 + uVar5 * 8 + 0x55);
      iVar4 = uVar5 * 8 + iVar3;
      *(byte *)(iVar4 + 0x55) = bVar1 & 0xf7;
      *(byte *)(iVar4 + 0x55) = (byte)(((int)(bVar1 & 0xf0) >> 4 & 0xfffffff7U) << 4) | bVar1 & 7;
      bVar1 = *pbVar2;
      bVar6 = 0xf;
      if (pbVar2[1] == 0) {
        bVar6 = pbVar2[0x10];
      }
      func_0x00014050(iVar3,(uint)bVar1,bVar6,1,1);
      iVar4 = (uint)bVar1 * 8;
      bVar1 = *(byte *)(iVar3 + iVar4 + 0x55);
      iVar4 = iVar4 + iVar3;
      *(byte *)(iVar4 + 0x55) = bVar1 & 0xf7;
      *(byte *)(iVar4 + 0x55) = (byte)(((int)(bVar1 & 0xf0) >> 4 & 0xfffffff7U) << 4) | bVar1 & 7;
      uVar5 = 0;
      while ((((uVar5 < 6 && (pbVar2[uVar5] != 0)) &&
              (*(byte *)((int)&uStack_44 + uVar5) = pbVar2[uVar5],
              uStack_44 != *(int *)pbVar2 || iStack_40 != *(int *)(pbVar2 + 4))) &&
             (iVar3 = func_0x0000e264(), iVar3 != 0))) {
        iVar4 = (int)(*(byte *)(iVar3 + 8) & 0xfe) >> 1;
        bVar6 = 0xf;
        func_0x00014050(iVar3,iVar4,0xf,1,1);
        iVar4 = iVar4 * 8;
        bVar1 = *(byte *)(iVar3 + iVar4 + 0x55);
        iVar4 = iVar4 + iVar3;
        *(byte *)(iVar4 + 0x55) = bVar1 & 0xf7;
        *(byte *)(iVar4 + 0x55) = (byte)(((int)(bVar1 & 0xf0) >> 4 & 0xfffffff7U) << 4) | bVar1 & 7;
        bVar1 = pbVar2[uVar5 + 1];
        *(byte *)((int)&uStack_44 + uVar5 + 1) = bVar1;
        if (uStack_44 == *(int *)pbVar2 && iStack_40 == *(int *)(pbVar2 + 4)) {
          bVar6 = pbVar2[0x10];
        }
        *(undefined1 *)((int)&uStack_44 + uVar5 + 1) = 0;
        func_0x00014050(iVar3,(uint)bVar1,bVar6,1,1);
        iVar4 = (uint)bVar1 * 8;
        bVar1 = *(byte *)(iVar3 + iVar4 + 0x55);
        iVar4 = iVar4 + iVar3;
        *(byte *)(iVar4 + 0x55) = bVar1 & 0xf7;
        *(byte *)(iVar4 + 0x55) = (byte)(((int)(bVar1 & 0xf0) >> 4 & 0xfffffff7U) << 4) | bVar1 & 7;
        uVar5 = uVar5 + 1 & 0xff;
      }
    }
  }
  return;
}



/* ==========================================================
 * ram:00026e6c  FUN_ram_00026e6c  size=42
 * callers: ram:0002a2cc
 * ========================================================== */

char FUN_ram_00026e6c(int param_1)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = 0;
  cVar1 = '\0';
  do {
    if (*(char *)(param_1 + uVar2) == '\0') {
      return cVar1;
    }
    cVar1 = cVar1 + '\x01';
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 < 7);
  return cVar1;
}



/* ==========================================================
 * ram:00026e98  FUN_ram_00026e98  size=150  [ENTRY/ROOT]
 * ========================================================== */

undefined4 FUN_ram_00026e98(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = iRam008016c0 - 0x4000U >> 0xd & 0xff;
  if (uVar3 != 0) {
    do {
      iVar1 = func_0x0001259c(iRam008016bc + uVar2 * 0x1000,uRam00800488);
      if ((iVar1 != 0) ||
         (iVar1 = func_0x00013128(iRam008016b4 + uVar2 * 0x1000,uRam00800488), iVar1 != 0)) {
        return 0;
      }
      uVar2 = uVar2 + 1 & 0xff;
    } while (uVar2 < uVar3);
  }
  return 1;
}



/* ==========================================================
 * ram:00027014  FUN_ram_00027014  size=1176  [ENTRY/ROOT]
 * ========================================================== */

undefined4 FUN_ram_00027014(byte *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  byte abStack_58 [4];
  undefined4 uStack_54;
  int iStack_50;
  undefined1 auStack_4c [4];
  undefined4 uStack_48;
  uint uStack_44;
  
  iVar3 = FUN_ram_00027cac(param_2);
  uVar4 = 8;
  if (param_2 != 0) {
    uVar4 = 10;
  }
  uVar4 = func_0x00016938(uVar4);
  uVar5 = 9;
  if (param_2 != 0) {
    uVar5 = 0xb;
  }
  uVar5 = func_0x00016938(uVar5);
  iVar6 = FUN_ram_00027cac();
  iVar7 = FUN_ram_00027cac(1);
  func_0x00017ba4(auStack_4c,uVar5,6);
  iVar8 = FUN_ram_00025780(abStack_58);
  if (iVar8 != 0) {
    uStack_54 = 0;
    iStack_50 = 0;
    iVar8 = func_0x0000e264(0,0);
    iVar9 = func_0x0000f478(iVar8,abStack_58[0],1,5,&uStack_44,1);
    if ((((iVar9 == 0x1000000) &&
         (uVar11 = (uint)*(ushort *)(iVar3 + 0xe), uVar11 <= (uStack_44 & 0x7ff))) &&
        ((uint)*(ushort *)(iVar3 + 0x12) <= (uStack_44 & 0x3ff800) >> 0xb)) &&
       (uVar11 != 0 && *(ushort *)(iVar3 + 0x12) != 0)) {
      uVar10 = (uint)abStack_58[0];
      if ((*(char *)(iVar6 + 0xb) == '\0') && (*(char *)(iVar7 + 0xb) == '\0')) {
        uStack_44 = uStack_44 & 0xe03fffff | (uint)DAT_ram_00807784 << 0x16;
        iVar6 = func_0x0000f594(iVar8,uVar10,1,5,&uStack_44,1);
        if (iVar6 != 0x1000000) {
          return 0;
        }
        uVar10 = (uint)abStack_58[0];
        uVar11 = (uint)*(ushort *)(iVar3 + 0xe);
      }
      bVar1 = *param_1;
      uVar12 = 0xf;
      if (param_1[1] == 0) {
        uVar12 = *(undefined1 *)(iVar3 + 0xc);
      }
      func_0x00013f64(&uStack_54,uVar10,uVar11 & 0xff,(uint)bVar1,uVar12,uVar4,0);
      bVar2 = *(byte *)(iVar8 + uVar10 * 8 + 0x55);
      *(byte *)(uVar10 * 8 + iVar8 + 0x55) = bVar2 & 0xf0 | bVar2 & 0xf | 8;
      iVar6 = (uint)bVar1 * 8;
      bVar1 = *(byte *)(iVar8 + iVar6 + 0x55);
      *(byte *)(iVar6 + iVar8 + 0x55) = bVar1 & 0xf | (byte)(((int)(bVar1 & 0xf0) >> 4 | 8U) << 4);
      bVar1 = *param_1;
      uVar12 = 0xf;
      if (param_1[1] == 0) {
        uVar12 = *(undefined1 *)(iVar3 + 0x10);
      }
      uVar11 = uStack_48 >> 2;
      uStack_48 = (DAT_ram_00807783 & 1) << 2 | uStack_48 & 0xfffffffb;
      uVar10 = 0;
      func_0x00013f64(&uStack_54,(uint)bVar1,uVar12,(uint)abStack_58[0],
                      *(undefined1 *)(iVar3 + 0x12),auStack_4c,0);
      iVar6 = (uint)bVar1 * 8;
      bVar1 = *(byte *)(iVar8 + iVar6 + 0x55);
      *(byte *)(iVar6 + iVar8 + 0x55) = bVar1 & 0xf | 8 | bVar1 & 0xf0;
      iVar6 = (uint)abStack_58[0] * 8;
      bVar1 = *(byte *)(iVar8 + iVar6 + 0x55);
      *(byte *)(iVar6 + iVar8 + 0x55) = (byte)(((int)(bVar1 & 0xf0) >> 4 | 8U) << 4) | bVar1 & 0xf;
      uStack_48 = uStack_48 & 0xfffffffb | (uVar11 & 1) << 2;
      while (((uVar10 < 6 && (param_1[uVar10] != 0)) &&
             (*(byte *)((int)&uStack_54 + uVar10) = param_1[uVar10],
             uStack_54 != *(int *)param_1 || iStack_50 != *(int *)(param_1 + 4)))) {
        iVar6 = func_0x0000e264();
        iVar7 = (int)(*(byte *)(iVar6 + 8) & 0xfe) >> 1;
        uVar12 = uStack_48._1_1_;
        if ((int)(*(byte *)(iVar6 + 9) & 0x70) >> 4 == 5) {
          uStack_48._0_2_ = CONCAT11(5,(undefined1)uStack_48);
        }
        bVar1 = param_1[uVar10 + 1];
        uVar13 = 0xf;
        *(byte *)((int)&uStack_54 + uVar10 + 1) = bVar1;
        if (uStack_54 == *(int *)param_1 && iStack_50 == *(int *)(param_1 + 4)) {
          uVar13 = *(undefined1 *)(iVar3 + 0xc);
        }
        *(undefined1 *)((int)&uStack_54 + uVar10 + 1) = 0;
        iVar8 = iVar7;
        func_0x00013f64(&uStack_54,iVar7,0xf,(uint)bVar1,uVar13,auStack_4c,0);
        bVar2 = *(byte *)(iVar6 + iVar7 * 8 + 0x55);
        *(byte *)(iVar7 * 8 + iVar6 + 0x55) = bVar2 & 0xf | 8 | bVar2 & 0xf0;
        iVar7 = (uint)bVar1 * 8;
        bVar1 = *(byte *)(iVar6 + iVar7 + 0x55);
        *(byte *)(iVar7 + iVar6 + 0x55) = (byte)(((int)(bVar1 & 0xf0) >> 4 | 8U) << 4) | bVar1 & 0xf
        ;
        bVar1 = param_1[uVar10 + 1];
        uVar13 = 0xf;
        *(byte *)((int)&uStack_54 + uVar10 + 1) = bVar1;
        if (uStack_54 == *(int *)param_1 && iStack_50 == *(int *)(param_1 + 4)) {
          uVar13 = *(undefined1 *)(iVar3 + 0x10);
        }
        *(undefined1 *)((int)&uStack_54 + uVar10 + 1) = 0;
        func_0x00013f64(&uStack_54,(uint)bVar1,uVar13,iVar8,0xf,auStack_4c,0);
        uStack_48._0_2_ = CONCAT11(uVar12,(undefined1)uStack_48);
        iVar7 = (uint)bVar1 * 8;
        bVar1 = *(byte *)(iVar6 + iVar7 + 0x55);
        *(byte *)(iVar7 + iVar6 + 0x55) = bVar1 & 0xf | 8 | bVar1 & 0xf0;
        bVar1 = *(byte *)(iVar6 + iVar8 * 8 + 0x55);
        *(byte *)(iVar8 * 8 + iVar6 + 0x55) =
             (byte)(((int)(bVar1 & 0xf0) >> 4 | 8U) << 4) | bVar1 & 0xf;
        uVar10 = uVar10 + 1 & 0xff;
      }
      return 1;
    }
  }
  return 0;
}



/* ==========================================================
 * ram:000274ac  FUN_ram_000274ac  size=226
 * callers: ram:00028630
 * ========================================================== */

undefined4 FUN_ram_000274ac(int param_1)

{
  byte *pbVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  undefined4 uVar5;
  undefined1 auStack_34 [16];
  
  uVar4 = *(ushort *)(param_1 + 2) & 7;
  uVar3 = *(ushort *)(param_1 + 2) >> 4 & 0xf;
  uVar5 = 2;
  pbVar1 = (byte *)FUN_ram_00027cac(0);
  if (((pbVar1[8] != 0) && (uVar4 == *pbVar1)) && (uVar3 == pbVar1[10])) {
    FUN_ram_00027ccc(auStack_34,0);
    iVar2 = func_0x00017c14(auStack_34,param_1 + 4,0x10);
    if (iVar2 == 0) {
      uVar5 = 0;
    }
  }
  pbVar1 = (byte *)FUN_ram_00027cac(1);
  if (((pbVar1[8] != 0) && (uVar4 == *pbVar1)) && (uVar3 == pbVar1[10])) {
    FUN_ram_00027ccc(auStack_34,1);
    iVar2 = func_0x00017c14(auStack_34,param_1 + 4,0x10);
    if (iVar2 == 0) {
      uVar5 = 1;
    }
  }
  return uVar5;
}



/* ==========================================================
 * ram:00027590  FUN_ram_00027590  size=262
 * callers: ram:00028630
 * ========================================================== */

undefined4 FUN_ram_00027590(int *param_1,uint param_2)

{
  byte *pbVar1;
  int iVar2;
  
  pbVar1 = (byte *)FUN_ram_00027cac(0);
  if (*param_1 == 0 && param_1[1] == 0) {
    if ((pbVar1[8] == 1) && (param_2 == *pbVar1)) {
      return 0;
    }
    pbVar1 = (byte *)FUN_ram_00027cac(1);
    if ((pbVar1[8] != 1) || (param_2 != *pbVar1)) {
      return 2;
    }
  }
  else {
    if ((pbVar1[8] == 1) && (iVar2 = func_0x0000e5e8(pbVar1,param_1), iVar2 != 0)) {
      return 0;
    }
    iVar2 = FUN_ram_00027cac(1);
    if (*(char *)(iVar2 + 8) != '\x01') {
      return 2;
    }
    iVar2 = func_0x0000e5e8(iVar2,param_1);
    if (iVar2 == 0) {
      return 2;
    }
  }
  return 1;
}



/* ==========================================================
 * ram:00027698  FUN_ram_00027698  size=256  [ENTRY/ROOT]
 * ========================================================== */

void FUN_ram_00027698(int param_1,int param_2,undefined1 *param_3,char param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *param_3;
  uVar2 = func_0x0000e5a0(param_3[0x1c]);
  uVar3 = func_0x0001156c(uVar2,uVar1,0xd802);
  if (uVar3 != 0xffffffff) {
    uVar4 = (uVar3 & 3) + 1;
    uVar3 = func_0x0001156c(uVar2,uVar1,0xd804);
    if (uVar3 != 0xffffffff) {
      uVar3 = uVar3 & 0xf;
      if (uVar3 == 1) {
        uVar4 = uVar4 | 0x10;
      }
      else if (uVar3 == 3) {
        uVar4 = uVar4 | 0x20;
      }
      else if (uVar3 == 0xf) {
        uVar4 = uVar4 | 0x30;
      }
      *(uint *)(param_2 * 4 + param_1 + 4) =
           uVar4 << (param_4 * '\x06' + 6U & 0x1f) | *(uint *)(param_1 + param_2 * 4 + 4);
    }
  }
  return;
}



/* ==========================================================
 * ram:00027814  FUN_ram_00027814  size=404
 * callers: ram:00028744,ram:000285cc
 * ========================================================== */

void FUN_ram_00027814(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  byte abStack_34 [4];
  undefined4 uStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  
  iVar1 = (int)(*(byte *)(param_1 + 2) & 0xc0) >> 6;
  uStack_30 = *param_1;
  uStack_2c = param_1[1] & 0x7fffffff;
  func_0x0001585c(&uStack_30,abStack_34,0);
  if ((abStack_34[0] & 1) == 0) {
    FUN_ram_0002c014(&uStack_30,3,iVar1);
    return;
  }
  FUN_ram_0002a014(&uStack_30,param_2,iVar1);
  uStack_28 = uStack_30;
  uStack_24 = uStack_2c;
  func_0x0001585c(&uStack_28,abStack_34,1);
  iVar1 = func_0x0000e264(uStack_28,uStack_24);
  if ((iVar1 != 0) && ((*(byte *)((uint)abStack_34[0] * 8 + iVar1 + 0x57) & 3) == 3)) {
    FUN_ram_00029814(&uStack_30);
    *(byte *)((uint)abStack_34[0] * 8 + iVar1 + 0x57) =
         *(byte *)(iVar1 + (uint)abStack_34[0] * 8 + 0x57) & 0xfc | 2;
    *(byte *)((uint)abStack_34[0] * 8 + iVar1 + 0x5f) =
         *(byte *)(iVar1 + (uint)abStack_34[0] * 8 + 0x5f) & 0xfc | 2;
    return;
  }
  return;
}



/* ==========================================================
 * ram:000279a8  FUN_ram_000279a8  size=106
 * callers: ram:000285cc
 * ========================================================== */

void FUN_ram_000279a8(undefined4 *param_1)

{
  undefined4 uStack_18;
  uint uStack_14;
  
  if (*(char *)((int)param_1 + 0x1d) == '\x04') {
    uStack_18 = *param_1;
    uStack_14 = param_1[1] & 0x7fffffff;
    FUN_ram_00029814(&uStack_18);
  }
  return;
}



/* ==========================================================
 * ram:00027a14  FUN_ram_00027a14  size=54  [ENTRY/ROOT]
 * ========================================================== */

int FUN_ram_00027a14(int param_1,undefined1 *param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    if (*(char *)(param_1 + uVar2) == '\0') {
      *param_2 = (char)uVar2;
      break;
    }
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 < 7);
  iVar1 = uVar2 - 7;
  if (uVar2 != 7) {
    iVar1 = 1;
  }
  return iVar1;
}



/* ==========================================================
 * ram:00027b78  FUN_ram_00027b78  size=110
 * callers: ram:00038814
 * ========================================================== */

void FUN_ram_00027b78(undefined4 *param_1)

{
  *param_1 = 0x64657669;
  param_1[1] = 0x63656964;
  param_1[2] = 0x76000001;
  param_1[3] = 1;
  param_1[4] = 0x64657669;
  param_1[5] = 0x63657276;
  param_1[6] = 0x76000001;
  param_1[7] = 0x80000100;
  param_1[8] = 0x76656e64;
  param_1[9] = 0x6f726964;
  param_1[10] = 0x76000001;
  param_1[0xb] = 0x8086;
  return;
}



/* ==========================================================
 * ram:00027be8  FUN_ram_00027be8  size=78
 * callers: ram:00022814
 * ========================================================== */

void FUN_ram_00027be8(void)

{
  undefined1 local_c [4];
  
  func_0x00015eb8(0xf4,local_c);
  DAT_ram_00807783 = (byte)local_c._1_2_ & 1;
  DAT_ram_00807784 = SUB21(local_c._1_2_,1);
  return;
}



/* ==========================================================
 * ram:00027c38  FUN_ram_00027c38  size=38
 * callers: ram:00022814
 * ========================================================== */

void FUN_ram_00027c38(void)

{
  FUN_ram_00027c60(0);
  FUN_ram_00027c60(1);
  func_0x000158d0();
  return;
}



/* ==========================================================
 * ram:00027c60  FUN_ram_00027c60  size=76
 * callers: ram:00027c38
 * ========================================================== */

void FUN_ram_00027c60(int param_1)

{
  param_1 = param_1 * 0x30;
  *(undefined1 *)(param_1 + 0x80779c) = 0;
  *(undefined4 *)(param_1 + 0x807788) = 0;
  *(undefined4 *)(param_1 + 0x80778c) = 0;
  *(undefined4 *)(param_1 + 0x8077a8) = 0;
  *(undefined4 *)(param_1 + 0x8077ac) = 0;
  *(undefined4 *)(param_1 + 0x8077b0) = 0;
  *(undefined4 *)(param_1 + 0x8077b4) = 0;
  *(undefined1 *)(param_1 + 0x807793) = 0;
  *(undefined1 *)(param_1 + 0x807790) = 0;
  *(undefined1 *)(param_1 + 0x807791) = 0xff;
  *(undefined1 *)(param_1 + 0x807792) = 0x10;
  *(undefined4 *)(param_1 + 0x8077a0) = 0;
  *(undefined4 *)(param_1 + 0x8077a4) = 0;
  *(undefined2 *)(param_1 + 0x807794) = 0;
  *(undefined2 *)(param_1 + 0x807796) = 0;
  *(undefined2 *)(param_1 + 0x807798) = 0;
  *(undefined2 *)(param_1 + 0x80779a) = 0;
  *(undefined1 *)(param_1 + 0x80779d) = 0;
  *(undefined1 *)(param_1 + 0x80779e) = 0;
  return;
}



/* ==========================================================
 * ram:00027cac  FUN_ram_00027cac  size=32
 * callers: ram:00026bf8,ram:00027590,ram:000274ac,ram:000344f4,ram:000268b4,ram:00030814,ram:00038814,ram:00026a54
 * ========================================================== */

int FUN_ram_00027cac(int param_1)

{
  return param_1 * 0x30 + 0x807788;
}



/* ==========================================================
 * ram:00027ccc  FUN_ram_00027ccc  size=56
 * callers: ram:000274ac,ram:00025628
 * ========================================================== */

void FUN_ram_00027ccc(undefined4 *param_1,int param_2)

{
  param_2 = param_2 * 0x30;
  *param_1 = *(undefined4 *)(param_2 + 0x8077a8);
  param_1[1] = *(undefined4 *)(param_2 + 0x8077ac);
  param_1[2] = *(undefined4 *)(param_2 + 0x8077b0);
  param_1[3] = *(undefined4 *)(param_2 + 0x8077b4);
  return;
}



/* ==========================================================
 * ram:00027d04  FUN_ram_00027d04  size=448
 * callers: ram:00030814,ram:00038814,ram:000285cc
 * ========================================================== */

undefined4 FUN_ram_00027d04(int *param_1,undefined1 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iStack_3c;
  uint uStack_38;
  byte abStack_34 [4];
  
  abStack_34[0] = 0;
  uVar3 = 0;
  iStack_3c = *param_1;
  uStack_38 = param_1[1] & 0x7fffffff;
  func_0x0001585c(&iStack_3c,abStack_34,0);
  if ((abStack_34[0] & 1) != 0) {
    do {
      iVar1 = uVar3 * 0x30;
      if ((*(char *)(iVar1 + 0x807790) == '\x01') &&
         (iStack_3c == *(int *)(iVar1 + 0x807788) && uStack_38 == *(uint *)(iVar1 + 0x80778c))) {
        *param_2 = (char)uVar3;
        return 1;
      }
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < 2);
    if (param_3 != 0) {
      uVar3 = 0;
      do {
        iVar1 = uVar3 * 0x30;
        if (*(char *)(iVar1 + 0x807790) == '\0') {
          *(int *)(iVar1 + 0x807788) = iStack_3c;
          *(uint *)(iVar1 + 0x80778c) = uStack_38;
          iVar2 = func_0x0001585c(&iStack_3c,abStack_34,1);
          if (iVar2 == 0x10) {
            return 0;
          }
          *(char *)(iVar1 + 0x807792) = (char)iVar2;
          iVar2 = func_0x0000e528(iStack_3c,uStack_38);
          if (iVar2 == 0xff) {
            return 0;
          }
          *(char *)(iVar1 + 0x807791) = (char)iVar2;
          *(undefined1 *)(iVar1 + 0x807790) = 1;
          *param_2 = (char)uVar3;
          return 1;
        }
        uVar3 = uVar3 + 1 & 0xff;
      } while (uVar3 < 2);
    }
  }
  return 0;
}



/* ==========================================================
 * ram:00027ec4  FUN_ram_00027ec4  size=204
 * callers: ram:00031028
 * ========================================================== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00027ec4(int param_1)

{
  undefined1 uVar1;
  
  if (*(char *)(param_1 + 4) == '\x10') {
    *(undefined1 *)(param_1 + 0x28) = 0;
    uVar1 = 0;
    if ((_DAT_ram_008016cc & 0x20) != 0) {
      (*(code *)((uRam00800442 & 0xfffe) * 2))(1,param_1 + 0xc,0);
      uVar1 = *(undefined1 *)(param_1 + 0x28);
    }
    func_0x00019048(0xc,0x10,uVar1,0,1,param_1 + 0xc,0x1d,0x29);
    func_0x00018ddc();
    func_0x00019c1c(0xfffffff0,0,0x1000);
  }
  return;
}



/* ==========================================================
 * ram:00028014  FUN_ram_00028014  size=262
 * callers: ram:00028630
 * ========================================================== */

void FUN_ram_00028014(int param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  
  if (param_1 == 2) {
    DAT_ram_008077e8 = (**(code **)(&DAT_ram_008077f8 + (uint)DAT_ram_008077e8 * 4))(2,0);
    DAT_ram_008077e9 = (**(code **)(&DAT_ram_008077f8 + (uint)DAT_ram_008077e9 * 4))(2,1,param_3);
    return;
  }
  if (param_1 == 4) {
    DAT_ram_008077e8 = (**(code **)(&DAT_ram_008077f8 + (uint)DAT_ram_008077e8 * 4))(4,0);
    DAT_ram_008077e9 = (**(code **)(&DAT_ram_008077f8 + (uint)DAT_ram_008077e9 * 4))(4,1,param_3);
    return;
  }
  uVar1 = (**(code **)(&DAT_ram_008077f8 + (uint)(byte)(&DAT_ram_008077e8)[param_2] * 4))();
  (&DAT_ram_008077e8)[param_2] = uVar1;
  return;
}



/* ==========================================================
 * ram:000285cc  FUN_ram_000285cc  size=98  [ENTRY/ROOT]
 * ========================================================== */

void FUN_ram_000285cc(int param_1)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_14 [4];
  
  auStack_14[0] = 2;
  cVar1 = *(char *)(param_1 + 0x19);
  if (cVar1 == '\f') {
    FUN_ram_00027814(param_1,0);
  }
  if (cVar1 == '\a') {
    FUN_ram_000279a8(param_1);
  }
  if ((cVar1 == '\x02') && (iVar2 = FUN_ram_00027d04(param_1,auStack_14,1), iVar2 != 0)) {
    FUN_ram_00023748(param_1,auStack_14[0]);
  }
  return;
}



/* ==========================================================
 * ram:00028630  FUN_ram_00028630  size=276  [ENTRY/ROOT]
 * ========================================================== */

void FUN_ram_00028630(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = FUN_ram_00027590(*param_2,*(undefined1 *)(param_2 + 1));
    if (iVar1 == 2) {
      return;
    }
  }
  else if (param_1 == 1) {
    iVar1 = FUN_ram_000274ac(param_2);
    if (iVar1 == 2) {
      *(undefined1 *)(param_2 + 7) = 1;
      return;
    }
  }
  else if (param_1 == 3) {
    iVar1 = FUN_ram_00036014(*param_2);
    if (iVar1 == 2) {
      *(undefined1 *)(param_2 + 2) = 1;
      return;
    }
  }
  else {
    if (param_1 != 2 && param_1 != 4) {
      return;
    }
    iVar1 = 2;
  }
  FUN_ram_00028014(param_1,iVar1,param_2);
  return;
}



/* ==========================================================
 * ram:00028744  FUN_ram_00028744  size=180  [ENTRY/ROOT]
 * ========================================================== */

void FUN_ram_00028744(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uStack_1c;
  uint uStack_18;
  
  cVar1 = *(char *)((int)param_1 + 0x19);
  iVar2 = (int)(*(byte *)(param_1 + 2) & 0xc0) >> 6;
  uStack_1c = *param_1;
  uStack_18 = param_1[1] & 0x7fffffff;
  if (cVar1 == '\x01') {
    FUN_ram_00027814(param_1,1);
  }
  if (cVar1 == '\x0f') {
    FUN_ram_0002c014(&uStack_1c,3,iVar2);
  }
  if (cVar1 == '\x03') {
    FUN_ram_00038814(&uStack_1c,iVar2,param_1);
  }
  if (cVar1 == '\x05') {
    FUN_ram_00030814(&uStack_1c,iVar2,param_1);
  }
  func_0x0000f22c();
  return;
}



/* ==========================================================
 * ram:00028814  FUN_ram_00028814  size=370
 * callers: ram:0002fe2c
 * ========================================================== */

undefined4
FUN_ram_00028814(int param_1,int param_2,undefined4 param_3,int param_4,undefined1 *param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  byte bStack_3c;
  byte bStack_3b;
  byte abStack_3a [2];
  
  uVar6 = 1;
  uVar4 = 0;
  bStack_3c = 0;
  uVar5 = param_4 + 0x16;
  bStack_3b = 0;
  abStack_3a[0] = 0;
  *param_5 = 1;
  param_1 = param_1 * 4;
  iVar7 = param_1 + 0x807a78;
  if (param_4 == 0) {
LAB_ram_00028910:
    *(undefined4 *)(param_1 + 0x807a78) = 0xffffffff;
  }
  else {
    if (0 < param_2) {
      do {
        uVar5 = uVar5 & 0xffff;
        iVar1 = func_0x000116e4(param_3,uVar5,&bStack_3c);
        if (iVar1 != 0) {
          if (iVar1 == 2) goto LAB_ram_00028910;
          if (iVar1 == 1) goto LAB_ram_00028920;
        }
        if (bStack_3c != 8 && bStack_3c != 2) goto LAB_ram_00028910;
        iVar1 = func_0x000116e4(param_3,uVar5 + 1,&bStack_3b);
        if (iVar1 != 0) {
          if (iVar1 == 2) goto LAB_ram_00028910;
          if (iVar1 == 1) goto LAB_ram_00028920;
        }
        uVar2 = (uint)bStack_3b;
        bStack_3b = (byte)(uVar2 & 7);
        uVar3 = (uint)bStack_3c;
        if (uVar3 == 8) {
          iVar1 = func_0x000116e4(param_3,uVar5 + 5,abStack_3a);
          if (iVar1 != 0) {
            if (iVar1 == 2) goto LAB_ram_00028910;
            if (iVar1 == 1) {
LAB_ram_00028920:
              *param_5 = 0;
              return 0;
            }
          }
          *(char *)((uint)bStack_3b + iVar7 + -1) = (char)((int)(uint)abStack_3a[0] >> 1);
LAB_ram_00028938:
          uVar3 = (uint)bStack_3c;
        }
        else if (uVar3 == 2) {
          *(undefined1 *)((uVar2 & 7) + iVar7 + -1) = 0xfe;
          goto LAB_ram_00028938;
        }
        uVar5 = uVar5 + uVar3;
        uVar6 = uVar6 + 1 & 0xff;
      } while ((int)uVar6 <= param_2);
    }
    uVar4 = 1;
  }
  return uVar4;
}



/* ==========================================================
 * ram:00029014  FUN_ram_00029014  size=220
 * callers: ram:0002b510
 * ========================================================== */

undefined4 FUN_ram_00029014(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  
  uVar6 = 1;
  iVar1 = func_0x0000e5a0(0);
  uVar5 = 1;
  do {
    if ((*(byte *)(uVar5 * 8 + iVar1 + 0x56) & 0xf) != 0) {
      iVar2 = (*(code *)((uRam0080047e & 0xfffe) * 2))(iVar1,uVar5);
      if (iVar2 == 0) {
        uVar6 = 0;
      }
      uVar3 = func_0x0000e5a0(*(uint *)(uVar5 * 4 + iVar1 + 0x14) >> 0x18);
      uVar4 = func_0x00013f04();
      iVar2 = FUN_ram_00030c24(uVar3,uVar4,0);
      if (iVar2 == 0) {
        uVar6 = 0;
      }
    }
    uVar5 = uVar5 + 1 & 0xff;
  } while (uVar5 < 5);
  func_0x0001736c(0,0,0,7);
  func_0x00014b08(1);
  return uVar6;
}



/* ==========================================================
 * ram:000290f0  FUN_ram_000290f0  size=102
 * callers: ram:00030704
 * ========================================================== */

undefined4 FUN_ram_000290f0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  byte bVar2;
  
  bVar2 = bRam00807abe;
  while( true ) {
    if (bRam00807abd < bVar2) {
      return 1;
    }
    iVar1 = FUN_ram_00029c3c(param_1,bVar2,param_2,5);
    if (iVar1 == 0) break;
    bVar2 = bVar2 + 1;
  }
  return 0;
}



/* ==========================================================
 * ram:00029158  FUN_ram_00029158  size=222
 * callers: ram:00030704
 * ========================================================== */

undefined4 FUN_ram_00029158(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char acStack_2c [4];
  
  uVar3 = 0;
  do {
    cVar1 = *(char *)(param_3 * 4 + 0x807a78 + uVar3);
    acStack_2c[uVar3] = cVar1;
    uVar4 = 0;
    if (uVar3 != 0) {
      do {
        if (acStack_2c[uVar4] == cVar1) {
          acStack_2c[uVar3] = -2;
          break;
        }
        uVar4 = uVar4 + 1 & 0xff;
      } while (uVar4 < uVar3);
    }
    uVar3 = uVar3 + 1 & 0xff;
    if (3 < uVar3) {
      uVar3 = 0;
      if (0 < param_2) {
        do {
          if ((acStack_2c[uVar3] != -2) &&
             (iVar2 = FUN_ram_00029c3c(param_1,acStack_2c[uVar3],param_4,5), iVar2 == 0)) {
            return 0;
          }
          uVar3 = uVar3 + 1 & 0xff;
        } while ((int)uVar3 < param_2);
      }
      return 1;
    }
  } while( true );
}



/* ==========================================================
 * ram:00029238  FUN_ram_00029238  size=156
 * callers: ram:000292d4
 * ========================================================== */

void FUN_ram_00029238(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0;
  iVar2 = param_2 * 4 + 0x807a78;
  func_0x00017bf4(param_1,0xff,4);
  if (0 < param_3) {
    do {
      uVar4 = 0;
      if (0 < param_3) {
        do {
          uVar1 = uVar4 + 1 & 0xff;
          if ((uVar3 != uVar4) && (*(char *)(iVar2 + uVar3) == *(char *)(iVar2 + uVar4))) {
            *(char *)(param_1 + uVar3) = (char)(uVar4 + 1);
          }
          uVar4 = uVar1;
        } while ((int)uVar1 < param_3);
      }
      uVar3 = uVar3 + 1 & 0xff;
    } while ((int)uVar3 < param_3);
  }
  return;
}



/* ==========================================================
 * ram:000292d4  FUN_ram_000292d4  size=696  [ENTRY/ROOT]
 * ========================================================== */

undefined4 FUN_ram_000292d4(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  uint uStack_50;
  undefined1 uStack_4c;
  undefined1 auStack_4b [7];
  byte abStack_44 [4];
  
  uVar8 = 1;
  iVar1 = func_0x0000e528(*param_1,param_1[1]);
  bVar5 = bRam00807abe;
  uStack_50 = 0;
  if (iVar1 == 0xff) {
    uVar8 = 0;
  }
  else {
    iVar4 = (int)(*(byte *)((int)param_1 + 9) & 0x70) >> 4;
    if (iVar4 == 1) {
      uStack_50 = 4;
    }
    else if (iVar4 == 0) {
      uStack_50 = 2;
    }
    else if (iVar4 == 2) {
      uStack_50 = 1;
    }
    uStack_4c = uRam00807ac0;
    puVar9 = auStack_4b;
    func_0x00017ba4(puVar9,0x807ab0,4);
    FUN_ram_00029c3c(param_1,uRam00807abf,&uStack_4c,5);
    uStack_4c = uRam00807abc;
    if (*(int *)(iVar1 * 4 + 0x807a78) == -1) {
      func_0x00017ba4(puVar9,0x807ab0,4);
      for (; bVar5 <= bRam00807abd; bVar5 = bVar5 + 1) {
        iVar1 = FUN_ram_00029c3c(param_1,bVar5,&uStack_4c,5);
        if (iVar1 != 1) {
          uVar8 = 0;
        }
      }
    }
    else {
      FUN_ram_00029238(abStack_44,iVar1,uStack_50);
      iVar1 = iVar1 * 4 + 0x807a78;
      uVar7 = 0;
      if (uStack_50 != 0) {
        do {
          uVar6 = uVar7 + 1 & 0xff;
          if (*(char *)(iVar1 + uVar7) != -2) {
            uVar3 = (uint)abStack_44[uVar7];
            bVar5 = *(byte *)((int)param_1 + uVar6 * 8 + 0x57);
            if (uVar3 == 0xff) {
              if (((bVar5 & 3) == 2) ||
                 (uVar2 = 0x807ab0, (uint)param_1[uVar6 + 5] >> 0x18 == 0xff && (bVar5 & 3) == 0)) {
                uVar2 = 0x807ab4;
              }
              func_0x00017ba4(puVar9,uVar2,4);
            }
            else {
              if (((bVar5 & 3) == 2) ||
                 (uVar2 = 0x807ab0, (uint)param_1[uVar6 + 5] >> 0x18 == 0xff && (bVar5 & 3) == 0)) {
                bVar5 = *(byte *)((int)param_1 + uVar3 * 8 + 0x57);
                if (((bVar5 & 3) != 2) &&
                   ((uint)param_1[uVar3 + 5] >> 0x18 != 0xff || (bVar5 & 3) != 0))
                goto LAB_ram_0002953c;
                uVar2 = 0x807ab4;
              }
              func_0x00017ba4(puVar9,uVar2,4);
              *(undefined1 *)((uint)abStack_44[uVar7] + iVar1 + -1) = 0xfe;
            }
            iVar4 = FUN_ram_00029c3c(param_1,*(undefined1 *)(iVar1 + uVar7),&uStack_4c,5);
            if (iVar4 != 1) {
              uVar8 = 0;
            }
          }
LAB_ram_0002953c:
          uVar7 = uVar6;
        } while (uVar6 < uStack_50);
      }
    }
  }
  return uVar8;
}



/* ==========================================================
 * ram:0002958c  FUN_ram_0002958c  size=170
 * callers: ram:00029638
 * ========================================================== */

undefined4 FUN_ram_0002958c(int param_1)

{
  int iVar1;
  uint uStack_24;
  
  iVar1 = func_0x0000f478(0x807ac8,0,2,iRam00807ac4 + 2U & 0xffff,&uStack_24,1);
  if (iVar1 == 0x1000000) {
    if (param_1 == 0) {
      uStack_24 = uStack_24 & 0xffffff7f;
    }
    else {
      uStack_24 = uStack_24 | 0x80;
    }
    iVar1 = func_0x0000f594(0x807ac8,0,2,iRam00807ac4 + 2U & 0xffff,&uStack_24,1);
    if (iVar1 == 0x1000000) {
      return 1;
    }
  }
  return 0;
}



/* ==========================================================
 * ram:00029638  FUN_ram_00029638  size=260
 * callers: ram:00030704
 * ========================================================== */

int FUN_ram_00029638(undefined4 param_1,uint param_2)

{
  int iVar1;
  uint uStack_28;
  
  func_0x00017ba4(0x807ac8,param_1,8);
  iRam00807ac4 = func_0x00017a48(0x807ac8,0,2,5,0);
  if (iRam00807ac4 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_ram_0002958c(0);
    if (iVar1 == 1) {
      iVar1 = func_0x0000f478(0x807ac8,0,2,iRam00807ac4 + 1U & 0xffff,&uStack_28,1);
      if (iVar1 == 0x1000000) {
        uStack_28 = uStack_28 & 0xffff0000 | param_2 & 0xffff;
        iVar1 = func_0x0000f594(0x807ac8,0,2,iRam00807ac4 + 1U & 0xffff,&uStack_28,1);
        if (iVar1 == 0x1000000) {
          iVar1 = FUN_ram_0002958c(1);
          return iVar1;
        }
      }
      iVar1 = 0;
    }
  }
  return iVar1;
}



/* ==========================================================
 * ram:00029814  FUN_ram_00029814  size=58
 * callers: ram:0002cce8,ram:000279a8,ram:00027814
 * ========================================================== */

bool FUN_ram_00029814(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_0002f4e0(0xc,param_1,0,0,0);
  return iVar1 == 0x1000000;
}



/* ==========================================================
 * ram:000299c4  FUN_ram_000299c4  size=258
 * callers: ram:00029c3c
 * ========================================================== */

undefined4 FUN_ram_000299c4(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uStack_24;
  
  uVar1 = func_0x00018b48(0xd);
  func_0x000187b0(0,uVar1);
  func_0x000187f4(0);
  do {
    iVar2 = func_0x0000f478(0x807ac8,0,2,iRam00807ac4 + 6U & 0xffff,&uStack_24,1);
    if (iVar2 != 0x1000000) {
      return 0;
    }
  } while (((uStack_24 & 2) != 0) && (iVar2 = func_0x00018880(0), iVar2 == 0));
  func_0x0001883c(0);
  iVar2 = func_0x00018880(0);
  if (iVar2 == 1) {
    return 2;
  }
  return 1;
}



/* ==========================================================
 * ram:00029ac8  FUN_ram_00029ac8  size=258
 * callers: ram:00029c3c
 * ========================================================== */

undefined4 FUN_ram_00029ac8(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uStack_24;
  
  uVar1 = func_0x00018b48(0xd);
  func_0x000187b0(0,uVar1);
  func_0x000187f4(0);
  do {
    iVar2 = func_0x0000f478(0x807ac8,0,2,iRam00807ac4 + 6U & 0xffff,&uStack_24,1);
    if (iVar2 != 0x1000000) {
      return 0;
    }
  } while (((uStack_24 & 0x40) != 0) && (iVar2 = func_0x00018880(0), iVar2 == 0));
  func_0x0001883c(0);
  iVar2 = func_0x00018880(0);
  if (iVar2 == 1) {
    return 2;
  }
  return 1;
}



/* ==========================================================
 * ram:00029bcc  FUN_ram_00029bcc  size=110
 * callers: ram:00029c3c
 * ========================================================== */

bool FUN_ram_00029bcc(undefined4 param_1)

{
  int iVar1;
  uint uStack_18;
  
  iVar1 = func_0x0000f478(0x807ac8,0,2,iRam00807ac4 + 6U & 0xffff,&uStack_18,1);
  if (iVar1 == 0x1000000) {
    *(bool *)param_1 = (uStack_18 & 0x80) == 0;
  }
  return iVar1 == 0x1000000;
}



/* ==========================================================
 * ram:00029c3c  FUN_ram_00029c3c  size=724
 * callers: ram:000292d4,ram:000290f0,ram:00029158
 * ========================================================== */

int FUN_ram_00029c3c(undefined4 param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uStack_48;
  char acStack_44 [4];
  
  uVar3 = 0;
  uStack_48 = 0;
  uVar2 = 0;
  func_0x00017ba4(0x807ac8,param_1,8);
  iRam00807ac4 = func_0x00017a48(0x807ac8,uVar3,2,5,uVar3);
  if (iRam00807ac4 == 0) {
    return uVar3;
  }
  iVar1 = func_0x0000f478(0x807ac8,uVar3,2,iRam00807ac4 + 3U & 0xffff,&uStack_48,1);
  if (iVar1 == 0x1000000) {
    uStack_48 = param_2 * 2 & 0xffU | uStack_48 & 0xffffff00;
    iVar1 = func_0x0000f594(0x807ac8,uVar3,2,iRam00807ac4 + 3U & 0xffff,&uStack_48,1);
    if ((iVar1 == 0x1000000) &&
       (iVar1 = func_0x0000f478(0x807ac8,uVar3,2,iRam00807ac4 + 5U & 0xffff,&uStack_48,1),
       iVar1 == 0x1000000)) {
      uStack_48 = uStack_48 | 0x90;
      iVar1 = func_0x0000f594(0x807ac8,uVar3,2,iRam00807ac4 + 5U & 0xffff,&uStack_48,1);
      if (iVar1 == 0x1000000) {
        iVar1 = FUN_ram_000299c4();
        if (iVar1 != 1) {
          return iVar1;
        }
        iVar1 = FUN_ram_00029bcc(acStack_44);
        if (iVar1 != 1) {
          return iVar1;
        }
        if (acStack_44[0] == '\0') {
          return 1;
        }
        for (; uVar2 < param_4; uVar2 = uVar2 + 1) {
          iVar1 = func_0x0000f478(0x807ac8,0,2,iRam00807ac4 + 3U & 0xffff,&uStack_48,1);
          if (iVar1 != 0x1000000) {
            return 0;
          }
          uStack_48 = (uint)*(byte *)(param_3 + uVar2) | uStack_48 & 0xffffff00;
          iVar1 = func_0x0000f594(0x807ac8,0,2,iRam00807ac4 + 3U & 0xffff,&uStack_48,1);
          if (iVar1 != 0x1000000) {
            return 0;
          }
          iVar1 = func_0x0000f478(0x807ac8,0,2,iRam00807ac4 + 5U & 0xffff,&uStack_48,1);
          if (iVar1 != 0x1000000) {
            return 0;
          }
          if (uVar2 == param_4 - 1) {
            uStack_48 = uStack_48 | 0x40;
          }
          uStack_48 = uStack_48 | 0x10;
          iVar1 = func_0x0000f594(0x807ac8,0,2,iRam00807ac4 + 5U & 0xffff,&uStack_48,1);
          if (iVar1 != 0x1000000) {
            return 0;
          }
          iVar1 = FUN_ram_000299c4();
          if (iVar1 != 1) {
            return iVar1;
          }
          iVar1 = FUN_ram_00029bcc(acStack_44);
          if (iVar1 != 1) {
            return iVar1;
          }
          if (acStack_44[0] == '\0') {
            return 1;
          }
        }
        uStack_48 = uVar3;
        iVar1 = func_0x0000f594(0x807ac8,0,2,iRam00807ac4 + 5U & 0xffff,&uStack_48,1);
        if (iVar1 == 0x1000000) {
          iVar1 = FUN_ram_00029ac8();
          return iVar1;
        }
      }
    }
  }
  return 0;
}



/* ==========================================================
 * ram:00029f10  FUN_ram_00029f10  size=114  [ENTRY/ROOT]
 * ========================================================== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_00029f10(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  
  bVar1 = bRam00807cfa;
  if ((_DAT_ram_008016cc & 0x20000000) == 0) {
LAB_ram_00029f64:
    bRam00807cfa = bVar1;
    uVar3 = 1;
  }
  else {
    if (bRam00807cfa == 0) {
      iVar2 = func_0x00010150(0,2,0x422,0x80000102);
      bVar1 = (byte)param_1;
      if (iVar2 != 0) goto LAB_ram_00029f64;
    }
    else if ((int)(uint)bRam00807cfa < param_1) {
      bRam00807cfa = (byte)param_1;
    }
    uVar3 = 0;
  }
  return uVar3;
}



/* ==========================================================
 * ram:0002a014  FUN_ram_0002a014  size=118
 * callers: ram:00027814
 * ========================================================== */

bool FUN_ram_0002a014(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  func_0x000156f0(0x807a18);
  if (param_2 == 0) {
    uRam00807a28 = *param_1;
    uRam00807a2c = param_1[1];
  }
  iVar1 = FUN_ram_0002f4e0(2,param_1,0x807a18,6,param_3);
  return iVar1 == 0x1000000;
}



/* ==========================================================
 * ram:0002a08c  FUN_ram_0002a08c  size=438
 * callers: ram:00022ba8
 * ========================================================== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_0002a08c(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  byte abStack_3c [4];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [4];
  
  abStack_3c[0] = 0xff;
  auStack_28[0] = 0;
  bVar4 = false;
  iVar2 = FUN_ram_0002b16c(abStack_3c);
  if ((iVar2 == 0) || (3 < abStack_3c[0])) {
    return false;
  }
  if ((abStack_3c[0] == 1 || abStack_3c[0] == 2) || abStack_3c[0] == 0) {
    iVar2 = func_0x00014bc0();
    if (((iVar2 == 1) && (iVar2 = func_0x00014c20(), iVar2 == 0)) &&
       (iVar2 = func_0x000238f8(), iVar2 == 1)) {
      func_0x00015c80(auStack_38,param_3,1);
      uVar3 = FUN_ram_00023014(param_3);
      iVar2 = FUN_ram_00023a8c(auStack_38,*(byte *)(param_3 + 0xd) & 7,uVar3,auStack_28);
      if (iVar2 == 1) {
        cVar1 = FUN_ram_00023904(auStack_28[0]);
        *(byte *)(param_3 + 0xf) = cVar1 << 3 | *(byte *)(param_3 + 0xf) & 0xf7;
        uVar3 = FUN_ram_00023924(auStack_28[0]);
        func_0x00017ba4(param_3 + 0x10,uVar3,3);
        iVar2 = FUN_ram_00032014(param_1);
        if ((iVar2 == 1) &&
           ((abStack_3c[0] != 2 || (iVar2 = FUN_ram_00023944(param_1,param_2), iVar2 == 0)))) {
          return true;
        }
      }
    }
    else {
      bVar4 = abStack_3c[0] == 0;
    }
  }
  iVar2 = func_0x00014988();
  if (iVar2 == 0) {
    if ((_DAT_ram_008016cc & 0x200000) != 0) {
      FUN_ram_0002a244();
    }
  }
  else {
    FUN_ram_0002a4d0(param_1,param_2,param_3,abStack_3c[0]);
  }
  return bVar4;
}



/* ==========================================================
 * ram:0002a244  FUN_ram_0002a244  size=136
 * callers: ram:0002fc5c,ram:000350e0,ram:000344f4,ram:0002d014,ram:0002a08c
 * ========================================================== */

undefined4 FUN_ram_0002a244(void)

{
  undefined4 uVar1;
  int iVar2;
  uint local_14;
  
  local_14 = 0;
  uVar1 = func_0x0000e5a0(0);
  iVar2 = FUN_ram_00033e4c(uVar1,0x21,8,&local_14);
  if (iVar2 != 0) {
    if ((local_14 & 3) != 3) {
      return 1;
    }
    uVar1 = func_0x0000e5a0(0);
    iVar2 = FUN_ram_00033f78(uVar1,0x144,8,0x100,0x100);
    if (iVar2 != 0) {
      uVar1 = func_0x0000e5a0(0);
      iVar2 = FUN_ram_00033f78(uVar1,0x144,8,0,0x100);
      if (iVar2 != 0) {
        return 1;
      }
    }
  }
  return 0;
}



/* ==========================================================
 * ram:0002a2cc  FUN_ram_0002a2cc  size=516
 * callers: ram:0002fc5c
 * ========================================================== */

void FUN_ram_0002a2cc(byte *param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined1 auStack_4c [10];
  ushort uStack_42;
  
  uVar5 = 0;
  func_0x00017bf4(0x807ad4,0,0xf0);
  func_0x00017bf4(auStack_4c,0,0xc);
  iVar2 = func_0x00015c80(0x807ad4,param_1,1);
  if (iVar2 != 0) {
    cVar1 = FUN_ram_00026e6c(param_1);
    bRam00807ae7 = bRam00807ae7 | 3;
    bRam00807ae6 = cVar1 << 4 | bRam00807ae6 & 8 | *param_1 & 7;
    cRam00807ae5 = cRam00807ad0;
    bVar3 = cRam00807ad0 + 1;
    cRam00807ad0 = cRam00807ad0 + '\x01';
    if (0xf < bVar3) {
      cRam00807ad0 = '\0';
    }
    if (param_3 == 0) {
      uVar5 = 0;
    }
    else if (param_3 == 1) {
      uVar5 = 0x20;
    }
    else if (param_3 == 2) {
      uVar5 = 0x40;
    }
    else if (param_3 == 3) {
      uVar5 = 1;
    }
    iVar2 = FUN_ram_00035cf4(param_1,auStack_4c,0);
    if (iVar2 != 0) {
      bVar3 = 2;
      if (uStack_42 + 0x14 < 0xf1) {
        bVar3 = 1;
      }
      bVar4 = 0;
      if (bVar3 != 0) {
        do {
          iVar2 = FUN_ram_0002f658(param_1,auStack_4c,0x807ad4);
          if (iVar2 == 0) {
            return;
          }
          func_0x00019048(10,3,uVar5,bVar4,bVar3,0x807ad4,0xf0,0xfc);
          func_0x00017bf4(0x807ad4,0,0xf0);
          bVar4 = bVar4 + 1;
        } while (bVar4 < bVar3);
      }
    }
  }
  return;
}



/* ==========================================================
 * ram:0002a4d0  FUN_ram_0002a4d0  size=816
 * callers: ram:0002a08c
 * ========================================================== */

void FUN_ram_0002a4d0(int param_1,uint param_2,byte *param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  ushort uVar5;
  byte bVar6;
  byte bVar7;
  undefined1 auStack_4c [10];
  ushort uStack_42;
  
  func_0x00017bf4(0x807ad4,0,0xf0);
  func_0x00017bf4(auStack_4c,0,0xc);
  iVar3 = func_0x00015c80(0x807ad4,param_3,1);
  if (iVar3 != 0) {
    bRam00807ae4 = *(byte *)(param_1 + 0xb) & 0xf | (byte)((param_2 & 0xf) << 4);
    bRam00807ae5 = bRam00807ad0;
    uVar4 = FUN_ram_00031b94(param_3[0xb]);
    bVar2 = uRam00807ae6._1_1_ & 0xfe;
    if (((param_4 == 3 || param_4 == 0) || ((*(byte *)(param_2 * 8 + param_1 + 0x56) & 0xf) != 0))
       || (uVar4 != 1)) {
      bVar2 = bVar2 | 1;
    }
    uRam00807ae6 = CONCAT11(bVar2,(char)uRam00807ae6) & 0xfdff;
    func_0x0000e728(param_1,param_2,bRam00807ad0);
    bRam00807ad0 = bRam00807ad0 + 1;
    if (0xf < bRam00807ad0) {
      bRam00807ad0 = 0;
    }
    uRam00807ae6._0_1_ = (byte)uRam00807ae6 & 0xf | (param_3[0xd] & 7) << 4;
    bVar2 = func_0x0000e528(*(undefined4 *)param_3,*(undefined4 *)(param_3 + 4));
    uRam00807ae6 = CONCAT11((5U < (uint)((int)(param_3[9] & 0x70) >> 4)) << 3 |
                            uRam00807ae6._1_1_ & 0xc3 |
                            (((uint)uRam00807bc8 & 1 << (bVar2 & 0x1f)) != 0) << 2,
                            (byte)uRam00807ae6);
    iVar3 = 1 - uVar4;
    if (1 < uVar4) {
      iVar3 = 0;
    }
    uVar5 = uRam00807ae6 & 0xfff7 | (ushort)(iVar3 << 3);
    uRam00807ae6._0_1_ = (byte)uVar5;
    uRam00807ae6._1_1_ = (byte)(uVar5 >> 8);
    uRam00807ae6 = CONCAT11(uRam00807ae6._1_1_,*param_3 & 7 | (byte)uRam00807ae6 & 0xf8);
    iVar3 = FUN_ram_000375d4(param_3);
    if (iVar3 != 0) {
      uVar4 = (uint)param_3[0xd];
      bVar2 = param_3[((int)(param_3[8] & 0xfe) >> 1) * 8 + 0x58];
      bVar1 = param_3[0xf];
      iVar3 = FUN_ram_00035cf4(param_3,auStack_4c,0);
      if (iVar3 != 0) {
        bVar6 = 2;
        if (uStack_42 + 0x14 < 0xf1) {
          bVar6 = 1;
        }
        bVar7 = 0;
        if (bVar6 != 0) {
          do {
            iVar3 = FUN_ram_0002f658(param_3,auStack_4c,0x807ad4);
            if (iVar3 == 0) {
              return;
            }
            func_0x00019048(10,3,(int)(uVar4 & 8) >> 3 | ((int)(uVar4 & 0x30) >> 4) * 2 |
                                 ((int)(uVar4 & 0xc0) >> 6) << 3 | ((int)(bVar2 & 0x10) >> 4) << 5 |
                                 ((int)(bVar1 & 2) >> 1) << 6 | ((int)(bVar2 & 0xe0) >> 6 & 1U) << 7
                            ,bVar7,bVar6,0x807ad4,0xf0,0xfc);
            func_0x00017bf4(0x807ad4,0,0xf0);
            bVar7 = bVar7 + 1;
          } while (bVar7 < bVar6);
        }
      }
    }
  }
  return;
}



/* ==========================================================
 * ram:0002a814  FUN_ram_0002a814  size=156  [ENTRY/ROOT]
 * ========================================================== */

void FUN_ram_0002a814(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = func_0x00012c70(iRam00800488);
  if (iVar1 == 0) {
    return;
  }
  iVar2 = iRam00800488 + 0x910;
  iVar1 = FUN_ram_0002aa34(param_1,0,iVar2);
  if (iVar1 == 1) {
    iVar1 = FUN_ram_0002aad8(param_1,param_2,iVar2);
  }
  else {
    iVar1 = FUN_ram_0002a904(param_1,param_2,iVar2);
    if (iVar1 != 0) goto LAB_ram_0002a890;
    iVar1 = FUN_ram_0002a998(0,0,iVar2);
    if (iVar1 == 0) {
      return;
    }
    iVar1 = FUN_ram_0002a904(param_1,param_2,iVar2);
  }
  if (iVar1 == 0) {
    return;
  }
LAB_ram_0002a890:
  func_0x00012cb8(iRam00800488);
  return;
}



/* ==========================================================
 * ram:0002a8b0  FUN_ram_0002a8b0  size=84  [ENTRY/ROOT]
 * ========================================================== */

void FUN_ram_0002a8b0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = func_0x00012c70(iRam00800488);
  if (iVar1 != 0) {
    FUN_ram_0002aa34(param_1,param_2,iRam00800488 + 0x910);
  }
  return;
}



/* ==========================================================
 * ram:0002a904  FUN_ram_0002a904  size=148
 * callers: ram:0002a814
 * ========================================================== */

bool FUN_ram_0002a904(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = *(byte *)(param_3 + 0x181) + 1 & 7;
  bVar2 = uVar1 != *(byte *)(param_3 + 0x180);
  if (bVar2) {
    func_0x00017ba4((uint)*(byte *)(param_3 + 0x181) * 0x30 + param_3,param_1,0x10);
    func_0x00017ba4((uint)*(byte *)(param_3 + 0x181) * 0x30 + param_3 + 0x10,param_2,0x20);
    *(char *)(param_3 + 0x181) = (char)uVar1;
  }
  return bVar2;
}



/* ==========================================================
 * ram:0002a998  FUN_ram_0002a998  size=156
 * callers: ram:0002a814
 * ========================================================== */

undefined4 FUN_ram_0002a998(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = (uint)*(byte *)(param_3 + 0x180);
  if (uVar2 == *(byte *)(param_3 + 0x181)) {
    uVar1 = 0;
  }
  else {
    if (param_1 != 0) {
      func_0x00017ba4(param_1,param_3 + uVar2 * 0x30,0x10);
      uVar2 = (uint)*(byte *)(param_3 + 0x180);
    }
    if (param_2 != 0) {
      func_0x00017ba4(param_2,uVar2 * 0x30 + param_3 + 0x10,0x20);
      uVar2 = (uint)*(byte *)(param_3 + 0x180);
    }
    *(byte *)(param_3 + 0x180) = (char)uVar2 + 1U & 7;
    uVar1 = 1;
  }
  return uVar1;
}



/* ==========================================================
 * ram:0002aa34  FUN_ram_0002aa34  size=164
 * callers: ram:0002a8b0,ram:0002a814
 * ========================================================== */

undefined4 FUN_ram_0002aa34(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (uint)*(byte *)(param_3 + 0x180);
  while( true ) {
    if (*(byte *)(param_3 + 0x181) == uVar3) {
      return 0;
    }
    iVar2 = uVar3 * 0x30 + param_3;
    iVar1 = func_0x00017c14(param_1,iVar2,0x10);
    if (iVar1 == 0) break;
    uVar3 = uVar3 + 1 & 7;
  }
  if (param_2 != 0) {
    func_0x00017ba4(param_2,iVar2 + 0x10,0x20);
  }
  return 1;
}



/* ==========================================================
 * ram:0002aad8  FUN_ram_0002aad8  size=164
 * callers: ram:0002a814
 * ========================================================== */

undefined4 FUN_ram_0002aad8(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (uint)*(byte *)(param_3 + 0x180);
  while( true ) {
    if (*(byte *)(param_3 + 0x181) == uVar3) {
      return 0;
    }
    iVar2 = uVar3 * 0x30 + param_3;
    iVar1 = func_0x00017c14(param_1,iVar2,0x10);
    if (iVar1 == 0) break;
    uVar3 = uVar3 + 1 & 7;
  }
  func_0x00017ba4(iVar2 + 0x10,param_2,0x20);
  return 1;
}



/* ==========================================================
 * ram:0002ab7c  FUN_ram_0002ab7c  size=40
 * callers: ram:0002ac14
 * ========================================================== */

void FUN_ram_0002ab7c(uint *param_1,uint *param_2,uint param_3,int param_4)

{
  uint uVar1;
  bool bVar2;
  
  while (bVar2 = param_4 != 0, param_4 = param_4 + -1, bVar2) {
    uVar1 = *param_2;
    param_2 = param_2 + 1;
    *param_1 = uVar1 ^ param_3;
    param_1 = param_1 + 1;
  }
  return;
}



/* ==========================================================
 * ram:0002aba4  FUN_ram_0002aba4  size=110
 * callers: ram:0002ac14
 * ========================================================== */

int FUN_ram_0002aba4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  
  func_0x00017bf4(0x808d90,0,0x80);
  uVar1 = func_0x0000ad48(0x808d90,param_1,param_2,0x10003);
  if (uVar1 == 0) {
    uVar1 = func_0x0000ad90(0x808d90,param_3);
  }
  iVar2 = 1 - uVar1;
  if (1 < uVar1) {
    iVar2 = 0;
  }
  return iVar2;
}



/* ==========================================================
 * ram:0002ac14  FUN_ram_0002ac14  size=184  [ENTRY/ROOT]
 * ========================================================== */

void FUN_ram_0002ac14(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_c0 [64];
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [64];
  
  func_0x00017bf4(auStack_60,0,0x40);
  func_0x00017b54(auStack_60,param_1,8);
  FUN_ram_0002ab7c(auStack_c0,auStack_60,0x36363636,0x10);
  func_0x00017b54(auStack_80,param_2,8);
  iVar1 = FUN_ram_0002aba4(auStack_c0,0x60,param_3);
  if (iVar1 == 1) {
    FUN_ram_0002ab7c(auStack_c0,auStack_60,0x5c5c5c5c,0x10);
    func_0x00017b54(auStack_80,param_3,8);
    FUN_ram_0002aba4(auStack_c0,0x60,param_3);
  }
  return;
}



/* ==========================================================
 * ram:0002accc  FUN_ram_0002accc  size=110
 * callers: ram:0002ad3c,ram:000330a4
 * ========================================================== */

undefined4
FUN_ram_0002accc(undefined4 param_1,undefined4 param_2,undefined2 *param_3,undefined2 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  *param_3 = 0;
  *param_4 = 0;
  iVar1 = func_0x0001b8f8(param_1,param_2,0x2a);
  *param_3 = (short)iVar1;
  if (iVar1 != 0) {
    iVar1 = func_0x0001b8f8(param_1,param_2,0xad);
    *param_4 = (short)iVar1;
    if (iVar1 != 0) {
      uVar2 = 1;
    }
  }
  return uVar2;
}



/* ==========================================================
 * ram:0002ad3c  FUN_ram_0002ad3c  size=400
 * callers: ram:000330a4
 * ========================================================== */

undefined4 FUN_ram_0002ad3c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uStack_38;
  char cStack_34;
  char acStack_33 [3];
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  
  uStack_38 = 0;
  cStack_34 = '\0';
  acStack_33[0] = '\0';
  acStack_33[1] = 0;
  acStack_33[2] = 0;
  uStack_30 = 0;
  uStack_2e = 0;
  uStack_2c = 0;
  uStack_2a = 0;
  iVar1 = FUN_ram_0002accc(param_1,0,&uStack_30,&uStack_2c);
  if ((((iVar1 != 0) && (iVar1 = FUN_ram_0002accc(param_1,1,&uStack_2e,&uStack_2a), iVar1 != 0)) &&
      (iVar1 = func_0x0001b8f8(param_1,0,0x61), iVar1 != 0)) &&
     (iVar2 = func_0x0001b8f8(param_1,1,0x61), iVar2 != 0)) {
    uVar3 = func_0x00018b48(0x1d);
    func_0x000187b0(9,uVar3);
    func_0x000187f4(9);
    while (iVar4 = func_0x0000f478(param_1,0,2,iVar1,&uStack_38,1), iVar4 == 0x1000000) {
      if ((uStack_38 & 0x1000000) != 0) {
        return 0;
      }
      iVar4 = func_0x0000f478(param_1,0,2,iVar2,&uStack_38,1);
      if (iVar4 != 0x1000000) {
        return 1;
      }
      if ((uStack_38 & 0x1000000) != 0) {
        return 0;
      }
      iVar4 = FUN_ram_0002b014(param_1,uStack_30,uStack_2c,&cStack_34,acStack_33 + 1);
      if (iVar4 == 0) {
        return 1;
      }
      iVar4 = FUN_ram_0002b014(param_1,uStack_2e,uStack_2a,acStack_33,acStack_33 + 2);
      if (iVar4 == 0) {
        return 1;
      }
      if ((cStack_34 == '\0') && (acStack_33[0] == '\0')) {
        return 1;
      }
      iVar4 = func_0x00018880(9);
      if (iVar4 != 0) {
        return 1;
      }
    }
  }
  return 1;
}



/* ==========================================================
 * ram:0002b014  FUN_ram_0002b014  size=234
 * callers: ram:0002ad3c,ram:000330a4
 * ========================================================== */

undefined4
FUN_ram_0002b014(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4,
                undefined1 *param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint uStack_38;
  
  uVar2 = 0;
  uStack_38 = 0;
  iVar1 = func_0x0000f478(param_1,0,2,param_2,&uStack_38,1);
  if (iVar1 == 0x1000000) {
    if ((uStack_38 & 0x80000000) != 0) {
      *param_4 = 1;
    }
    iVar1 = func_0x0000f478(param_1,0,2,param_3,&uStack_38,1);
    if (iVar1 == 0x1000000) {
      if ((uStack_38 & 0x80000000) != 0) {
        *param_5 = 1;
      }
      uVar2 = 1;
    }
  }
  return uVar2;
}



/* ==========================================================
 * ram:0002b100  FUN_ram_0002b100  size=106
 * callers: ram:000232fc
 * ========================================================== */

undefined4 FUN_ram_0002b100(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 1;
  if (5 < (uint)((int)(*(byte *)(param_1 + 9) & 0x70) >> 4)) {
    uVar2 = 5;
    if (*(char *)(param_2 + 9) == '\0') {
      uVar2 = 4;
    }
    iVar1 = FUN_ram_00024afc(param_1,0,0,uVar2);
    if (iVar1 == 0) {
      uVar3 = 0;
    }
  }
  return uVar3;
}



/* ==========================================================
 * ram:0002b16c  FUN_ram_0002b16c  size=184
 * callers: ram:00034828,ram:00031c08,ram:00024afc,ram:00031028,ram:00030d9c,ram:0002a08c,ram:00031814
 * ========================================================== */

undefined4 FUN_ram_0002b16c(byte *param_1)

{
  int iVar1;
  undefined4 uStack_20;
  
  uStack_20 = 0;
  if (bRam00807cec != 0xff) {
    *param_1 = bRam00807cec;
    return 1;
  }
  iVar1 = func_0x000133b4(0);
  iVar1 = func_0x00013038(iVar1 + 0x800,&uStack_20,1);
  if (iVar1 != 0) {
    return 0;
  }
  bRam00807cec = (byte)uStack_20 & 7;
  *param_1 = bRam00807cec;
  return 1;
}



/* ==========================================================
 * ram:0002b3b8  FUN_ram_0002b3b8  size=162
 * callers: ram:0002b510
 * ========================================================== */

undefined4 FUN_ram_0002b3b8(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = func_0x00012c70(iRam00800488);
  if (iVar1 == 0) {
    return 0;
  }
  if (param_1 == 0x1e) {
    uVar2 = *(uint *)(iRam00800488 + 0x800) & 0xffffffbf;
  }
  else {
    uVar2 = *(uint *)(iRam00800488 + 0x800) | 0x40;
  }
  *(uint *)(iRam00800488 + 0x800) = uVar2;
  iVar1 = func_0x000112d8();
  if ((iVar1 == 0) && (iVar1 = func_0x00012cb8(iRam00800488), iVar1 != 0)) {
    return 1;
  }
  return 0;
}



/* ==========================================================
 * ram:0002b45c  FUN_ram_0002b45c  size=178
 * callers: ram:0002b510
 * ========================================================== */

undefined4 FUN_ram_0002b45c(uint param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = func_0x00012c70(iRam00800488);
  if (iVar1 == 0) {
    return 0;
  }
  *(uint *)(iRam00800488 + 0x800) = *(uint *)(iRam00800488 + 0x800) & ~param_2 | param_2 & param_1;
  iVar1 = func_0x000112d8();
  if ((iVar1 == 0) && (iVar1 = func_0x00012cb8(iRam00800488), iVar1 != 0)) {
    return 1;
  }
  return 0;
}



/* ==========================================================
 * ram:0002b510  FUN_ram_0002b510  size=560  [ENTRY/ROOT]
 * ========================================================== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0002b510(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uStack_38;
  undefined4 uStack_34;
  char cStack_30;
  
  uVar3 = 1;
  iVar1 = func_0x00014e68();
  if (param_1 == 0) {
    func_0x00014aa0(0);
    goto LAB_ram_0002b704;
  }
  if (param_1 == 1) {
    func_0x00014aa0(1);
    goto LAB_ram_0002b704;
  }
  if (param_1 == 2) {
    func_0x00014aa0(2);
    goto LAB_ram_0002b704;
  }
  if (param_1 == 5) {
    uVar3 = FUN_ram_00032570();
    goto LAB_ram_0002b704;
  }
  if ((param_1 < 0x20) || (0x27 < param_1)) {
    if (param_1 == 6) {
      uVar3 = FUN_ram_00029014();
      goto LAB_ram_0002b704;
    }
    if (param_1 == 0x1e || param_1 == 0x1f) {
      if ((_DAT_ram_008016cc & 0x800) == 0) goto LAB_ram_0002b704;
      if ((iVar1 != 1 || param_1 != 0x1f) && (iVar1 != 0 || param_1 != 0x1e)) {
        uVar3 = FUN_ram_0002b3b8(param_1);
        func_0x00014e2c(param_1 != 0x1e);
        func_0x0001a9f0(3);
        FUN_ram_00025ae8(param_1 != 0x1e);
        goto LAB_ram_0002b704;
      }
    }
    else {
      if (param_1 == 0x10 || param_1 == 0x11) {
        if ((_DAT_ram_008016cc & 0x20) != 0) {
          uStack_34 = Auxregsffcc;
          cStack_30 = '\0';
          uStack_38 = param_1;
          (*(code *)((uRam00800442 & 0xfffe) * 2))(3,&uStack_38);
          uVar3 = (uint)(cStack_30 != '\x01');
        }
        goto LAB_ram_0002b704;
      }
      if (param_1 == 4) {
        func_0x000149b0(0);
      }
      else {
        if (param_1 == 7) {
          cStack_30 = '\0';
          uStack_38 = param_1;
          func_0x000149b0(0);
          (*(code *)((uRam00800442 & 0xfffe) * 2))(4,&uStack_38);
          uVar3 = (uint)(cStack_30 != '\x01');
          goto LAB_ram_0002b704;
        }
        if (param_1 == 0x30) {
          uVar3 = Auxregsffcc;
          FUN_ram_00023e9c(uVar3 & 7);
          iVar1 = uVar3 << 7;
          uVar2 = 0x380;
          goto LAB_ram_0002b5bc;
        }
        if (param_1 != 0x31) {
          uVar3 = 0;
          goto LAB_ram_0002b704;
        }
        uVar3 = func_0x00023e90();
        Auxregsffc4 = uVar3 & 7;
      }
    }
    uVar3 = 1;
  }
  else {
    uVar3 = param_1 & 1 | ((param_1 & 4) >> 2) * 2 | ((param_1 & 2) >> 1) << 2;
    func_0x00014dc4(uVar3);
    iVar1 = uVar3 << 3;
    uVar2 = 0x38;
LAB_ram_0002b5bc:
    uVar3 = FUN_ram_0002b45c(iVar1,uVar2);
  }
LAB_ram_0002b704:
  iVar1 = 1 - uVar3;
  if (1 < uVar3) {
    iVar1 = 0;
  }
  func_0x0000efc0(iVar1,0);
  return;
}



/* ==========================================================
 * ram:0002b740  FUN_ram_0002b740  size=150
 * callers: ram:00033b98
 * ========================================================== */

void FUN_ram_0002b740(int param_1,int param_2,int param_3)

{
  if (param_2 == 0) {
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xf7 | (byte)(param_3 << 3);
    return;
  }
  if (param_2 == 1) {
    *(byte *)(param_1 + 0x10) = (byte)(param_3 << 7) | *(byte *)(param_1 + 0x10) & 0x7f;
    return;
  }
  if (param_2 == 2) {
    *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) & 0xf7 | (byte)(param_3 << 3);
    return;
  }
  if (param_2 == 3) {
    *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) & 0x7f | (byte)(param_3 << 7);
    return;
  }
  return;
}



/* ==========================================================
 * ram:0002be7c  FUN_ram_0002be7c  size=112
 * callers: ram:000329e0
 * ========================================================== */

ulonglong FUN_ram_0002be7c(int param_1,int param_2)

{
  if (param_2 == 0) {
    return (ulonglong)(*(byte *)(param_1 + 0x10) & 7);
  }
  if (param_2 == 1) {
    return CONCAT44(1,(int)(*(byte *)(param_1 + 0x10) & 0x70) >> 4);
  }
  if (param_2 == 2) {
    return CONCAT44(2,*(byte *)(param_1 + 0x11) & 7);
  }
  if (param_2 != 3) {
    return CONCAT44(param_2,2);
  }
  return CONCAT44(3,(int)(*(byte *)(param_1 + 0x11) & 0x70) >> 4);
}



/* ==========================================================
 * ram:0002beec  FUN_ram_0002beec  size=150
 * callers: ram:00033b98
 * ========================================================== */

void FUN_ram_0002beec(int param_1,int param_2,int param_3)

{
  if (param_2 == 0) {
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xf8 | (byte)param_3;
    return;
  }
  if (param_2 == 1) {
    *(byte *)(param_1 + 0x10) = (byte)(param_3 << 4) | *(byte *)(param_1 + 0x10) & 0x8f;
    return;
  }
  if (param_2 == 2) {
    *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) & 0xf8 | (byte)param_3;
    return;
  }
  if (param_2 == 3) {
    *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) & 0x8f | (byte)(param_3 << 4);
    return;
  }
  return;
}



/* ==========================================================
 * ram:0002c014  FUN_ram_0002c014  size=78
 * callers: ram:00028744,ram:00027814
 * ========================================================== */

bool FUN_ram_0002c014(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  uRam00807a18 = param_2;
  iVar1 = FUN_ram_0002f4e0(7,param_1,0x807a18,1,param_3);
  return iVar1 == 0x1000000;
}



/* ==========================================================
 * ram:0002c064  FUN_ram_0002c064  size=204
 * callers: ram:00030c24,ram:000330a4
 * ========================================================== */

void FUN_ram_0002c064(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined4 uStack_20;
  
  uVar2 = 5;
  uStack_20 = 0;
  bVar3 = *param_1 == 0 && param_1[1] == 0;
  if (*param_1 == 0 && param_1[1] == 0) {
    bVar3 = param_3 == 0;
  }
  if ((bVar3) && (uVar2 = 2, param_2 != 4)) {
    uVar2 = 5;
  }
  iVar1 = FUN_ram_00033e4c(param_1,6,uVar2,&uStack_20);
  if ((((iVar1 != 0) && (iVar1 = FUN_ram_00033f78(param_1,6,uVar2,0xff0000ff,0xffff00), iVar1 != 0))
      && (iVar1 = func_0x0001b7ec(param_1,6,uVar2,uStack_20), iVar1 != 0)) &&
     (iVar1 = FUN_ram_00033f78(param_1,0x144,uVar2,0x800000,0x800000), iVar1 != 0)) {
    FUN_ram_00033f78(param_1,0x144,uVar2,0xff7fffff,0x800000);
  }
  return;
}



/* ==========================================================
 * ram:0002c174  FUN_ram_0002c174  size=224
 * callers: ram:00022eb4
 * ========================================================== */

undefined4 FUN_ram_0002c174(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uStack_2c;
  
  uStack_2c = 0;
  iVar3 = 0;
  iVar1 = func_0x00017a48(param_1,0,2,3,0xff);
  if (iVar1 != 0) {
    uVar2 = iVar1 + 3U & 0xffff;
    iVar1 = func_0x0000f478(param_1,0,2,uVar2,&uStack_2c,1);
    if (iVar1 == 0x1000000) {
      if (param_2 == 1) {
        iVar3 = 0x10;
      }
      uStack_2c = iVar3 << 0x10 | uStack_2c & 0xffff;
      iVar1 = func_0x0000f594(param_1,0,2,uVar2,&uStack_2c,1);
      if (iVar1 == 0x1000000) {
        return 0;
      }
    }
  }
  return 1;
}



/* ==========================================================
 * ram:0002c254  FUN_ram_0002c254  size=166
 * callers: ram:00022ef4
 * ========================================================== */

undefined4 FUN_ram_0002c254(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  uVar3 = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uVar1 = func_0x0000e5a0(0);
  iVar2 = FUN_ram_0002c730(uVar1,&uStack_28);
  if ((((iVar2 != 0) || (iVar2 = FUN_ram_0002c2fc(param_1,0), iVar2 != 0)) ||
      (iVar2 = FUN_ram_0002c4a8(param_1,1), iVar2 != 0)) ||
     (((iVar2 = FUN_ram_0002c570(param_1,&uStack_28), iVar2 != 0 ||
       (iVar2 = FUN_ram_0002c2fc(param_1,1), iVar2 != 0)) ||
      (iVar2 = FUN_ram_0002c4a8(param_1,0), iVar2 != 0)))) {
    uVar3 = 1;
  }
  return uVar3;
}



/* ==========================================================
 * ram:0002c2fc  FUN_ram_0002c2fc  size=428
 * callers: ram:0002c254
 * ========================================================== */

undefined4 FUN_ram_0002c2fc(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uStack_30;
  
  uStack_30 = 0;
  uVar1 = func_0x00017a48(param_1,0,2,3,0xff);
  if (uVar1 != 0) {
    iVar2 = func_0x0000f478(param_1,0,2,uVar1 & 0xffff,&uStack_30,1);
    if (iVar2 == 0x1000000) {
      iVar2 = 800;
      if (param_2 != 1) {
        iVar2 = 0x1e;
      }
      uStack_30 = iVar2 << 0x10 | uStack_30 & 0x8000ffff;
      iVar2 = func_0x0000f594(param_1,0,2,uVar1 & 0xffff,&uStack_30,1);
      if (iVar2 == 0x1000000) {
        uVar1 = uVar1 + 0xf & 0xffff;
        iVar2 = func_0x0000f478(param_1,0,2,uVar1,&uStack_30,1);
        if (iVar2 == 0x1000000) {
          uVar3 = 8;
          if (param_2 != 1) {
            uVar3 = 4;
          }
          iVar2 = 8;
          if (param_2 != 1) {
            iVar2 = 4;
          }
          iVar4 = 8;
          if (param_2 != 1) {
            iVar4 = 4;
          }
          iVar5 = 8;
          if (param_2 != 1) {
            iVar5 = 4;
          }
          uStack_30 = uStack_30 & 0xff000020 | uVar3 | iVar2 << 6 | iVar4 << 0xc | iVar5 << 0x12;
          iVar2 = func_0x0000f594(param_1,0,2,uVar1,&uStack_30,1);
          if (iVar2 == 0x1000000) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}



/* ==========================================================
 * ram:0002c4a8  FUN_ram_0002c4a8  size=200
 * callers: ram:0002c254
 * ========================================================== */

undefined4 FUN_ram_0002c4a8(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uStack_28;
  
  uStack_28 = 0;
  iVar1 = func_0x00017a48(param_1,0,2,5,3);
  if (iVar1 != 0) {
    uVar2 = iVar1 + 0x1aU & 0xffff;
    iVar1 = func_0x0000f478(param_1,0,2,uVar2,&uStack_28,1);
    if (iVar1 == 0x1000000) {
      if (param_2 == 1) {
        uStack_28 = uStack_28 | 0x400000;
      }
      else {
        uStack_28 = uStack_28 & 0xffbfffff;
      }
      iVar1 = func_0x0000f594(param_1,0,2,uVar2,&uStack_28,1);
      if (iVar1 == 0x1000000) {
        return 0;
      }
    }
  }
  return 1;
}



/* ==========================================================
 * ram:0002c570  FUN_ram_0002c570  size=448
 * callers: ram:0002c254
 * ========================================================== */

undefined4 FUN_ram_0002c570(undefined4 param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iStack_38;
  uint uStack_34;
  uint uStack_30;
  
  iStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  iVar1 = func_0x00017a48(param_1,0,2,5,3);
  if (iVar1 != 0) {
    uVar4 = iVar1 + 4U & 0xffff;
    uStack_34 = param_2[1] << 0x10 | *param_2;
    uStack_30 = param_2[1] >> 0x10 | param_2[2] << 0x10;
    iVar2 = func_0x0000f594(param_1,0,2,uVar4,&uStack_34,1);
    if ((iVar2 == 0x1000000) &&
       (iVar2 = func_0x0000f594(param_1,0,2,uVar4 + 1 & 0xffff,&uStack_30,1), iVar2 == 0x1000000)) {
      uVar4 = iVar1 + 6U & 0xffff;
      iStack_38 = 1;
      iVar1 = func_0x0000f594(param_1,0,2,uVar4,&iStack_38,1);
      if (iVar1 == 0x1000000) {
        iStack_38 = 0;
        iVar1 = func_0x0000f594(param_1,0,2,uVar4 + 1 & 0xffff,&iStack_38,1);
        if (iVar1 == 0x1000000) {
          uVar3 = func_0x00018b48(6);
          func_0x000187b0(0,uVar3);
          func_0x000187f4(0);
          do {
            iVar1 = func_0x0000f478(param_1,0,2,uVar4,&iStack_38,1);
            if (iVar1 != 0x1000000) {
              return 1;
            }
          } while ((iStack_38 != 0) && (iVar1 = func_0x00018880(0), iVar1 == 0));
          func_0x0001883c(0);
          iVar1 = func_0x00018880(0);
          if (iVar1 != 1) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}



/* ==========================================================
 * ram:0002c730  FUN_ram_0002c730  size=208
 * callers: ram:0002c254
 * ========================================================== */

undefined4 FUN_ram_0002c730(undefined4 param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = func_0x00017a48(param_1,0,2,3,0xff);
  if ((((iVar1 == 0) ||
       (iVar2 = func_0x0000f478(param_1,0,2,iVar1 + 1U & 0xffff,param_2,1), iVar2 != 0x1000000)) ||
      (iVar2 = func_0x0000f478(param_1,0,2,iVar1 + 2U & 0xffff,param_2 + 1,1), iVar2 != 0x1000000))
     || (iVar1 = func_0x0000f478(param_1,0,2,iVar1 + 3U & 0xffff,param_2 + 2,1), iVar1 != 0x1000000)
     ) {
    uVar3 = 1;
  }
  else {
    *param_2 = *param_2 >> 0x10;
    param_2[2] = (uint)(ushort)param_2[2];
    uVar3 = 0;
  }
  return uVar3;
}



/* ==========================================================
 * ram:0002c860  FUN_ram_0002c860  size=374
 * callers: ram:000232fc
 * ========================================================== */

undefined4 FUN_ram_0002c860(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uStack_24;
  uint uStack_20;
  
  uVar4 = 0;
  iVar2 = func_0x00014ae4();
  if (iVar2 != 1) {
    uVar1 = param_1[1];
    *param_3 = *param_1;
    param_3[1] = uVar1;
    uStack_24 = *param_1;
    uStack_20 = param_1[1];
    param_3[1] = param_3[1] & 0x7fffffff;
    uStack_20 = uStack_20 & 0x7fffffff;
    uVar3 = func_0x00014e04();
    uRam00807572 = (uVar3 & 1) == 0;
    uVar3 = func_0x00014e04();
    uRam00807573 = (uVar3 & 2) == 0;
    iVar2 = func_0x00013b68(&uStack_24,param_1);
    if ((iVar2 == 0) && (iVar2 = func_0x00018134(), iVar2 == 0)) {
      iVar2 = func_0x0000e264(uStack_24,uStack_20);
      *param_2 = iVar2;
      if ((iVar2 != 0) &&
         ((iVar2 = func_0x00014870(uStack_24,uStack_20), iVar2 == 0 &&
          (*(byte *)(param_1 + 2) < 0x10)))) {
        uVar4 = 1;
      }
    }
  }
  return uVar4;
}



/* ==========================================================
 * ram:0002c9d8  FUN_ram_0002c9d8  size=88
 * callers: ram:000232fc
 * ========================================================== */

bool FUN_ram_0002c9d8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  func_0x0001395c(param_1,param_3,param_4);
  iVar1 = FUN_ram_0002e814(param_1);
  return iVar1 == 0;
}



/* ==========================================================
 * ram:0002ca30  FUN_ram_0002ca30  size=166
 * callers: ram:0002cad8
 * ========================================================== */

undefined4 FUN_ram_0002ca30(int param_1,undefined4 param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  
  if (param_3 == 0x2000000) {
    iVar2 = func_0x0000f280();
    cVar1 = *(char *)(iVar2 + 0x12);
    if (((cVar1 != '\0') && (cVar1 == '\b' || cVar1 == '\t')) &&
       (iVar2 = FUN_ram_0002cce8(param_4,*(undefined1 *)(param_1 + 8),param_2), iVar2 != 0)) {
      iVar2 = (uint)*(byte *)(param_1 + 8) * 8;
      *(byte *)(iVar2 + param_4 + 0x57) = *(byte *)(param_4 + iVar2 + 0x57) & 0xfc | 2;
      func_0x00018158(param_4,4,*(undefined1 *)(param_1 + 8));
    }
  }
  return 0;
}



/* ==========================================================
 * ram:0002cad8  FUN_ram_0002cad8  size=308
 * callers: ram:0002407c
 * ========================================================== */

undefined4
FUN_ram_0002cad8(int param_1,undefined4 param_2,int param_3,uint param_4,undefined4 param_5,
                undefined4 param_6,int *param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined4 uStack_30;
  
  uVar5 = 0;
  uStack_30 = 0x1000000;
  iVar1 = func_0x00014c80();
  if (iVar1 == 1) {
    iVar1 = func_0x00018880(8);
    if (iVar1 == 0) {
      func_0x000187f4(8);
    }
    else {
      func_0x0001883c(8);
      func_0x00014c44(1);
    }
  }
  if (param_4 < bRam00807574) {
    iVar1 = func_0x0000e2dc(param_5);
    *param_7 = iVar1;
    if (iVar1 != 0) {
      iVar1 = func_0x000139b4(param_2,param_6,&uStack_30);
      if (iVar1 == 0) {
        uVar5 = 1;
      }
      else {
        uVar5 = FUN_ram_0002ca30(param_1,param_2,uStack_30,param_3);
      }
    }
  }
  else {
    iVar1 = FUN_ram_0002cce8(param_3,*(undefined1 *)(param_1 + 8),param_2);
    iVar2 = (uint)*(byte *)(param_1 + 8) * 8;
    iVar3 = iVar2 + param_3;
    bVar4 = *(byte *)(param_3 + iVar2 + 0x57) & 0xfc;
    if (iVar1 != 0) {
      *(byte *)(iVar3 + 0x57) = bVar4 | 2;
      func_0x00018158(param_3,4,*(undefined1 *)(param_1 + 8));
      iVar1 = (uint)*(byte *)(param_1 + 8) * 8;
      iVar3 = iVar1 + param_3;
      bVar4 = *(byte *)(param_3 + iVar1 + 0x57) & 0xfc;
    }
    *(byte *)(iVar3 + 0x57) = bVar4 | 3;
  }
  return uVar5;
}



/* ==========================================================
 * ram:0002cc0c  FUN_ram_0002cc0c  size=218
 * callers: ram:0002407c
 * ========================================================== */

undefined4
FUN_ram_0002cc0c(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uStack_30;
  
  uStack_30 = 0;
  iVar1 = func_0x00013a2c(param_2,&uStack_30,param_6,param_7,param_5,0);
  if (iVar1 == 0) {
    iVar1 = FUN_ram_00022eb4(param_2,0);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = func_0x00013bd4(param_2,uRam008016c4);
    if ((iVar1 == 0) && (iVar1 = func_0x00013ae8(param_2,uStack_30), iVar1 == 0)) {
      return 1;
    }
  }
  iVar1 = (uint)*(byte *)(param_1 + 8) * 8;
  *(byte *)(iVar1 + param_3 + 0x57) = *(byte *)(param_3 + iVar1 + 0x57) & 0xfc | 3;
  return 0;
}



/* ==========================================================
 * ram:0002cce8  FUN_ram_0002cce8  size=226
 * callers: ram:0002cad8,ram:0002ca30
 * ========================================================== */

bool FUN_ram_0002cce8(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  bool bVar2;
  undefined4 auStack_5c [5];
  undefined1 auStack_48 [16];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  byte abStack_2c [4];
  
  iVar1 = 0;
  abStack_2c[0] = 0;
  do {
    auStack_5c[iVar1] = 0;
    iVar1 = (int)(char)((char)iVar1 + '\x01');
  } while (iVar1 < 0xc);
  func_0x00015698(auStack_5c);
  auStack_5c[4] = 0x101;
  func_0x000156f0(auStack_48);
  uStack_38 = param_1[1];
  uStack_34 = *param_1;
  uStack_30 = param_2;
  iVar1 = func_0x0000f680(6,param_3,auStack_5c,0xc,0);
  bVar2 = iVar1 == 0x1000000;
  func_0x0001585c(param_3,abStack_2c,0);
  if (((abStack_2c[0] & 1) != 0) && (iVar1 = FUN_ram_00029814(param_3), iVar1 == 0)) {
    bVar2 = false;
  }
  return bVar2;
}



/* ==========================================================
 * ram:0002cdcc  FUN_ram_0002cdcc  size=192  [ENTRY/ROOT]
 * ========================================================== */

void FUN_ram_0002cdcc(byte *param_1,uint param_2)

{
  uint uStack_20;
  
  func_0x00017bf4(&uStack_20,0,4);
  if (*(int *)param_1 != 0 || *(int *)(param_1 + 4) != 0) {
    param_2 = (uint)*param_1;
  }
  uStack_20 = (param_2 & 7) << 0x10 | uStack_20 & 0xff08ffff | ((param_1[0xd] & 7) + 1) * 0x100000;
  func_0x00019048(10,4,0,0,1,&uStack_20,4,0x10);
  return;
}



/* ==========================================================
 * ram:0002d014  FUN_ram_0002d014  size=686
 * callers: ram:00038370,ram:0002d9e8,ram:0002f814,ram:0002dc2c,ram:00025ae8
 * ========================================================== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_0002d014(char *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uStack_44;
  
  uVar7 = 0;
  uStack_44 = 0;
  if (param_1 == (char *)0x0) {
    uVar7 = 1;
  }
  else {
    iVar4 = func_0x0000e5a0(param_1[0x1c]);
    iVar5 = func_0x0000e5a0(param_1[(byte)param_1[0x2a] + 0x1b]);
    cVar1 = *param_1;
    cVar2 = param_1[(byte)param_1[0x2a] + 0xd];
    uVar8 = (uint)(byte)param_1[(byte)param_1[0x2a] + 0x1b];
    cVar3 = param_1[0x1c];
    if ((*(byte *)(iVar5 + 8) & 1) != 0) {
      uVar7 = FUN_ram_00030290(iVar5,cVar2,0,cVar1,cVar3);
    }
    if ((*(byte *)(iVar4 + 8) & 1) != 0) {
      uVar7 = FUN_ram_00030290(iVar4,cVar1,0,cVar2,uVar8);
    }
    FUN_ram_0002d2d8(param_1 + 0x1c,param_1,param_1 + 0xe,param_1[0x2a],1,param_1[0x2c],
                     param_1[0x2b]);
    FUN_ram_00026624(param_2,param_4);
    if (((*(byte *)(iVar4 + 8) & 1) != 0) && ((int)(*(byte *)(iVar4 + 9) & 0x70) >> 4 == 1)) {
      iVar6 = func_0x0001156c(iVar4,cVar1,0xcc9b);
      if (cVar1 == '\r') {
        uStack_44 = 0x400000;
      }
      else {
        uStack_44 = 0x200000;
      }
      func_0x0000f594(iVar4,0,2,0x26,&uStack_44,1);
      uStack_44 = 0;
      func_0x0000f594(iVar4,0,2,0x26,&uStack_44,1);
      if (iVar6 != -1) {
        func_0x00011498(iVar4,cVar1,0xcc9b,iVar6);
      }
    }
    if (((*(byte *)(iVar5 + 8) & 1) != 0) && ((int)(*(byte *)(iVar5 + 9) & 0x70) >> 4 == 1)) {
      if (param_3 == 1) {
        iVar6 = func_0x00019208();
        if (iVar6 == 0) {
          func_0x0000f918(iVar5,cVar2,1);
        }
        else {
          func_0x000194d4(1);
        }
      }
      uStack_44 = 0x800000;
      func_0x0000f594(iVar5,0,2,0x26,&uStack_44,1);
      uStack_44 = 0;
      func_0x0000f594(iVar5,0,2,0x26,&uStack_44,1);
      if ((param_3 == 1) && (iVar6 = func_0x00019208(), iVar6 == 0)) {
        func_0x00018b48(0xb);
        func_0x00019c68();
        func_0x0000f918(iVar5,cVar2,0);
      }
    }
    if ((*(byte *)(iVar4 + 8) & 1) != 0) {
      uVar7 = FUN_ram_00025014(iVar4,cVar1,1);
      FUN_ram_0002623c(cVar3,cVar1);
    }
    iVar4 = func_0x00014988();
    if (iVar4 == 1) {
      FUN_ram_00025a80();
    }
    else if ((_DAT_ram_008016cc & 0x200000) != 0) {
      FUN_ram_0002a244();
    }
  }
  return uVar7;
}



/* ==========================================================
 * ram:0002d2d8  FUN_ram_0002d2d8  size=856
 * callers: ram:0002f014,ram:0002d014
 * ========================================================== */

undefined4
FUN_ram_0002d2d8(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7
                )

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  sbyte sVar6;
  sbyte sVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uStack_54;
  
  sVar6 = 2;
  if (param_7 == 0) {
    sVar6 = 1;
  }
  sVar7 = 2;
  if (param_7 == 0) {
    sVar7 = 1;
  }
  uVar8 = 0xd;
  if (param_7 == 0) {
    uVar8 = 10;
  }
  uVar10 = 0xc;
  if (param_7 == 0) {
    uVar10 = 9;
  }
  uVar5 = 0xe;
  if (param_7 == 0) {
    uVar5 = 0xb;
  }
  uStack_54 = 0;
  uVar13 = (uint)(char)(param_4 - 1U);
  uVar14 = uVar13;
  do {
    if ((int)uVar14 < 0) {
      for (; -1 < (int)uVar13; uVar13 = (uint)(char)((char)uVar13 + -1)) {
        iVar12 = func_0x0000e5a0(*(undefined1 *)(param_1 + uVar13));
        if ((*(byte *)(iVar12 + 8) & 1) != 0) {
          iVar3 = (uint)*(byte *)(param_2 + uVar13) * 8;
          bVar1 = *(byte *)(iVar12 + iVar3 + 0x55);
          *(byte *)(iVar3 + iVar12 + 0x55) = bVar1 & 0xf & ~(byte)(1 << sVar6) | bVar1 & 0xf0;
          iVar3 = (uint)*(byte *)(param_3 + uVar13) * 8;
          bVar1 = *(byte *)(iVar12 + iVar3 + 0x55);
          *(byte *)(iVar3 + iVar12 + 0x55) =
               bVar1 & 0xf | (byte)(((int)(bVar1 & 0xf0) >> 4 & ~(1 << sVar7)) << 4);
          iVar3 = (uint)*(byte *)(param_3 + uVar13) * 8;
          bVar1 = *(byte *)(iVar12 + iVar3 + 0x58);
          uVar14 = bVar1 & 7;
          if (param_6 <= (int)uVar14) {
            *(byte *)(iVar3 + iVar12 + 0x58) = bVar1 & 0xf8 | (char)uVar14 - (char)param_6;
          }
        }
      }
      return uStack_54;
    }
    iVar12 = 1 - uVar14;
    if (1 < uVar14) {
      iVar12 = 0;
    }
    bVar2 = false;
    if ((uVar14 == param_4 - 1U) && (param_5 != 0)) {
      bVar2 = true;
    }
    iVar3 = func_0x0000e5a0(*(undefined1 *)(param_1 + uVar14));
    if ((*(byte *)(iVar3 + 8) & 1) != 0) {
      uVar9 = 9;
      if (!bVar2) {
        uVar9 = uVar8;
      }
      uVar11 = 9;
      if (iVar12 == 0) {
        uVar11 = uVar8;
      }
      iVar4 = func_0x00014050(iVar3,*(undefined1 *)(param_2 + uVar14),uVar11,0,0,
                              (uint)*(byte *)(param_3 + uVar14) * 4 + iVar3,uVar9);
      if (iVar4 == 0) {
        uVar9 = 8;
        if (iVar12 == 0) {
          uVar9 = uVar10;
        }
        iVar12 = func_0x00014050(iVar3,*(undefined1 *)(param_2 + uVar14),uVar9,0,0);
        if (iVar12 == 0) {
          uVar9 = 8;
          if (!bVar2) {
            uVar9 = uVar5;
          }
          iVar12 = func_0x00014050(iVar3,*(undefined1 *)(param_3 + uVar14),uVar9,0,0);
          if (iVar12 == 0) goto LAB_ram_0002d4d4;
        }
      }
      uStack_54 = 1;
    }
LAB_ram_0002d4d4:
    uVar14 = (uint)(char)((char)uVar14 + -1);
  } while( true );
}



/* ==========================================================
 * ram:0002d630  FUN_ram_0002d630  size=396  [ENTRY/ROOT]
 * ========================================================== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_0002d630(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  iVar1 = iRam008016b0;
  iStack_34 = param_1[0x3ff];
  uStack_30 = *param_1;
  iStack_2c = 0;
  *param_1 = 0xffffffff;
  param_1[0x3ff] = 0xffffffff;
  iVar2 = FUN_ram_00031e54(iRam008016b0,param_1);
  if (iVar2 == 0) {
    iVar2 = func_0x000131e8(iRam008016b0 + 0xffc,&iStack_34,1);
    if (iVar2 == 0) {
      iVar2 = func_0x000131e8(iRam008016b0,&uStack_30,1);
      if ((iVar2 == 0) && (iVar2 = func_0x00012a04(iRam008016b8), iVar2 == 0)) {
        if ((_DAT_ram_008016cc & 0x40000000) != 0) {
          func_0x00013038(iRam008016b0,&iStack_2c,1);
          iStack_34 = iStack_34 + iStack_2c + 1;
          iVar2 = func_0x000131e8(iRam008016b8 + 0xffc,&iStack_34,1);
          if (iVar2 != 0) {
            return 0;
          }
        }
        iRam008016b0 = iRam008016b8;
        iRam008016b8 = iVar1;
        return 1;
      }
      func_0x00012b5c();
      return 0;
    }
  }
  return 0;
}



/* ==========================================================
 * ram:0002d814  FUN_ram_0002d814  size=466
 * callers: ram:000350e0,ram:00025a98
 * ========================================================== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_0002d814(undefined1 *param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  if (param_1 == (undefined1 *)0x0) {
    iVar5 = 1;
  }
  else {
    iVar3 = func_0x0000e5a0(param_1[0x1c]);
    iVar4 = func_0x0000e5a0(param_1[(byte)param_1[0x2a] + 0x1b]);
    uVar1 = *param_1;
    uVar2 = param_1[(byte)param_1[0x2a] + 0xd];
    if ((4 < (uint)((int)(*(byte *)(iVar3 + 9) & 0x70) >> 4)) &&
       (4 < (uint)((int)(*(byte *)(iVar4 + 9) & 0x70) >> 4))) {
      FUN_ram_00025814(iVar3,uVar1,iVar4,uVar2,param_2);
    }
    iVar5 = FUN_ram_0002f014(param_1);
    if ((iVar5 == 0) && (iVar5 = FUN_ram_00030290(iVar4,uVar2,1,uVar1,param_1[0x1c]), iVar5 == 0)) {
      iVar5 = FUN_ram_00030290(iVar3,uVar1,1,uVar2,param_1[(byte)param_1[0x2a] + 0x1b]);
      if (iVar5 == 0) {
        if (((_DAT_ram_008016cc & 0x80000) == 0) ||
           (iVar5 = FUN_ram_00025014(iVar3,uVar1,0), iVar5 == 0)) {
          param_1[0x2c] = 1;
          if ((4 < (uint)((int)(*(byte *)(iVar3 + 9) & 0x70) >> 4)) &&
             (4 < (uint)((int)(*(byte *)(iVar4 + 9) & 0x70) >> 4))) {
            uVar6 = func_0x0001156c(iVar3,uVar1,0xd25d);
            if (uVar6 == 0xffffffff) {
              return 1;
            }
            if (0x21 < (uVar6 & 0x7f)) {
              param_1[0x2c] = 2;
            }
          }
          FUN_ram_0002df40(param_1);
        }
      }
      else {
        FUN_ram_00030290(iVar4,uVar2,0,uVar1,param_1[0x1c]);
        FUN_ram_00030290(iVar3,uVar1,0,uVar2,param_1[(byte)param_1[0x2a] + 0x1b]);
      }
    }
  }
  return iVar5;
}



/* ==========================================================
 * ram:0002d9e8  FUN_ram_0002d9e8  size=580
 * callers: ram:0002303c
 * ========================================================== */

void FUN_ram_0002d9e8(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  uint uVar8;
  char cVar9;
  byte bVar10;
  uint uVar11;
  char acStack_48 [8];
  
  uVar11 = 0;
  cVar9 = '\0';
  do {
    acStack_48[uVar11] = '\0';
    uVar11 = uVar11 + 1 & 0xff;
  } while (uVar11 < 8);
  uVar11 = 0;
  do {
    iVar4 = FUN_ram_0002665c(uVar11);
    if ((*(char *)(iVar4 + 0x2a) != '\0') && (uVar8 = 0, *(char *)(iVar4 + 0x2a) != '\0')) {
      do {
        iVar5 = func_0x0000e5a0(*(undefined1 *)(iVar4 + uVar8 + 0x1c));
        if ((*(byte *)(iVar5 + 8) & 1) == 0) {
          acStack_48[uVar11] = '\x01';
          cVar9 = cVar9 + '\x01';
        }
        uVar8 = uVar8 + 1 & 0xff;
      } while (uVar8 < *(byte *)(iVar4 + 0x2a));
    }
    uVar11 = uVar11 + 1 & 0xff;
  } while (uVar11 < 8);
  if (cVar9 != '\0') {
    uVar11 = 0;
    do {
      if (acStack_48[uVar11] != '\0') {
        puVar6 = (undefined1 *)FUN_ram_0002665c(uVar11);
        uVar1 = puVar6[0x1c];
        uVar8 = (uint)(byte)puVar6[(byte)puVar6[0x2a] + 0x1b];
        uVar3 = *puVar6;
        uVar2 = puVar6[(byte)puVar6[0x2a] + 0xd];
        FUN_ram_0002d014(puVar6,uVar11,0,0);
        func_0x0000e5a0(uVar1);
        FUN_ram_000264d8(0,uVar1,uVar3,0);
        iVar4 = func_0x0000e5a0(uVar8);
        FUN_ram_000264d8(1,uVar8,uVar2,0,(*(byte *)(iVar4 + 8) & 1) != 0);
      }
      uVar11 = uVar11 + 1 & 0xff;
    } while (uVar11 < 8);
  }
  bVar10 = 0;
  do {
    iVar4 = FUN_ram_00025e84(bVar10);
    uVar11 = 0;
    if (0 < iVar4) {
      do {
        iVar5 = FUN_ram_00026330(bVar10,uVar11);
        if ((*(char *)(iVar5 + 6) == '\x01') && (*(char *)(iVar5 + 5) == '\0')) {
          iVar7 = func_0x0000e5a0(*(undefined1 *)(iVar5 + 4));
          iVar5 = FUN_ram_000264d8(bVar10,*(undefined1 *)(iVar5 + 4),*(undefined1 *)(iVar5 + 7),0,
                                   (*(byte *)(iVar7 + 8) & 1) != 0);
          if (iVar5 != 0) {
            uVar11 = uVar11 - 1 & 0xff;
            iVar4 = (int)(char)((char)iVar4 + -1);
          }
        }
        uVar11 = uVar11 + 1 & 0xff;
      } while ((int)uVar11 < iVar4);
    }
    bVar10 = bVar10 + 1;
  } while (bVar10 < 2);
  return;
}



/* ==========================================================
 * ram:0002dc2c  FUN_ram_0002dc2c  size=560
 * callers: ram:0002303c
 * ========================================================== */

void FUN_ram_0002dc2c(uint param_1,uint param_2,uint param_3,uint param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  undefined1 *puVar7;
  uint uVar8;
  byte *pbVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  char acStack_48 [8];
  
  uVar12 = 0;
  uVar11 = 0;
  cVar10 = '\0';
  do {
    acStack_48[uVar12] = '\0';
    uVar12 = uVar12 + 1 & 0xff;
  } while (uVar12 < 8);
  uVar12 = 0;
  do {
    iVar6 = FUN_ram_0002665c(uVar12);
    uVar8 = (uint)*(byte *)(iVar6 + 0x2a);
    bVar13 = uVar8 == 1;
    uVar4 = uVar8 - 1;
    if (1 < uVar8) {
      uVar11 = 0;
      bVar13 = uVar8 == 0;
      uVar4 = uVar8;
    }
    if (!bVar13 && (1 >= uVar8 && SBORROW4(uVar8,1)) == (int)uVar4 < 0) {
      do {
        pbVar9 = (byte *)(iVar6 + uVar11);
        if (*(byte *)(iVar6 + uVar11 + 0x1c) == param_1) {
          bVar14 = uVar11 == 0;
          bVar15 = uVar8 - 1 == uVar11;
          bVar13 = false;
          if ((((!bVar14 && !bVar15 || bVar14) && (pbVar9[0x1d] == param_3)) &&
              (param_4 == pbVar9[1])) && (param_2 == pbVar9[0xe])) {
            bVar13 = true;
          }
          bVar5 = false;
          if (((!bVar14 && !bVar15 || bVar15) && (param_3 == pbVar9[0x1b])) &&
             ((param_4 == pbVar9[0xd] && (param_2 == *pbVar9)))) {
            bVar5 = true;
          }
          if (bVar13 || bVar5) {
            acStack_48[uVar12] = '\x01';
            cVar10 = cVar10 + '\x01';
          }
          break;
        }
        uVar11 = uVar11 + 1 & 0xff;
      } while (uVar11 < uVar8);
    }
    uVar12 = uVar12 + 1 & 0xff;
    if (7 < uVar12) {
      if (cVar10 != '\0') {
        uVar11 = 0;
        do {
          if (acStack_48[uVar11] != '\0') {
            puVar7 = (undefined1 *)FUN_ram_0002665c(uVar11);
            uVar12 = (uint)(byte)puVar7[0x1c];
            uVar1 = puVar7[(byte)puVar7[0x2a] + 0x1b];
            uVar2 = *puVar7;
            uVar3 = puVar7[(byte)puVar7[0x2a] + 0xd];
            FUN_ram_0002d014(puVar7,uVar11,0,0);
            FUN_ram_000264d8(0,uVar12,uVar2,0,1);
            FUN_ram_000264d8(1,uVar1,uVar3,0,1);
          }
          uVar11 = uVar11 + 1 & 0xff;
        } while (uVar11 < 8);
      }
      return;
    }
  } while( true );
}



/* ==========================================================
 * ram:0002de7c  FUN_ram_0002de7c  size=194
 * callers: ram:00025118
 * ========================================================== */

int FUN_ram_0002de7c(undefined4 param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  iVar2 = func_0x0000e5a0();
  iVar6 = 1;
  bVar1 = *(byte *)(iVar2 + param_2 * 8 + 0x58);
  uVar3 = (uint)bVar1;
  iVar4 = (int)(uVar3 & 0xe0) >> 5;
  if ((*(byte *)(param_2 * 8 + iVar2 + 0x55) & 0x10) != 0) {
    iVar6 = 0x65;
  }
  uVar5 = uVar3 & 7;
  uVar7 = 0;
  if ((bVar1 & 7) != 0) {
    uVar7 = uVar5;
    if ((int)(uVar3 & 0x10) >> 4 == 0) {
      if ((iVar4 != 2 || uVar5 != 2) && (iVar4 != 1 || uVar5 != 1)) goto LAB_ram_0002df14;
    }
    else if ((iVar4 != 2 || uVar5 != 4) && (iVar4 != 1 || uVar5 != 2)) goto LAB_ram_0002df14;
    if (param_3 == 0) {
      return 0xffff;
    }
  }
LAB_ram_0002df14:
  return uVar7 * 10 + iVar6;
}



/* ==========================================================
 * ram:0002df40  FUN_ram_0002df40  size=128
 * callers: ram:00037b88,ram:0002d814
 * ========================================================== */

int FUN_ram_0002df40(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = 0;
  bVar1 = *(byte *)(param_1 + 0x2a);
  iVar3 = 0;
  if (bVar1 != 0) {
    do {
      iVar3 = func_0x0000e5a0(*(undefined1 *)(param_1 + uVar5 + 0x1c));
      iVar4 = (uint)*(byte *)(param_1 + uVar5 + 0xe) * 8;
      bVar2 = *(byte *)(iVar3 + iVar4 + 0x58);
      *(byte *)(iVar4 + iVar3 + 0x58) = bVar2 & 0xf8 | *(char *)(param_1 + 0x2c) + (bVar2 & 7);
      uVar5 = uVar5 + 1 & 0xff;
    } while (uVar5 < bVar1);
  }
  return iVar3;
}



/* ==========================================================
 * ram:0002e014  FUN_ram_0002e014  size=1386
 * callers: ram:0002407c
 * ========================================================== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_0002e014(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,byte param_5
                ,int param_6,undefined4 param_7,uint param_8,char param_9,char param_10,
                char param_11)

{
  int iVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  undefined4 *puVar5;
  byte bVar6;
  uint uVar7;
  undefined4 uVar8;
  int iStack_5c;
  char cStack_50;
  char acStack_4f [3];
  int iStack_4c;
  byte bStack_48;
  byte abStack_47 [3];
  uint uStack_44;
  
  uVar8 = 0;
  iStack_5c = 0;
  cStack_50 = '\0';
  acStack_4f[0] = '\0';
  abStack_47[0] = 0;
  uStack_44 = 0;
  if (((_DAT_ram_008016cc & 4) != 0) && (cRam00807571 == '\x01')) {
    cRam00807571 = '\0';
    iStack_5c = FUN_ram_00030014(param_2,param_8,param_3,*(undefined1 *)(param_1 + 8));
  }
  FUN_ram_000320d4(param_6,param_4,param_8,param_7,param_2);
  bVar6 = *(byte *)(param_6 + 0xd) & 0xf8;
  *(byte *)(param_6 + 0xd) = param_5 | bVar6;
  *(byte *)(param_6 + 0xd) = param_9 << 3 | (param_5 | bVar6) & 0xf7;
  bVar6 = *(byte *)(param_6 + 0xf);
  *(byte *)(param_6 + 0xf) = bVar6 & 0xfe;
  cVar3 = '\0';
  if ((param_10 != '\0') || (param_11 != '\0')) {
    cVar3 = '\x01';
  }
  *(byte *)(param_6 + 0xf) = cVar3 * '\x02' | bVar6 & 0xfc;
  *(byte *)(param_6 + 0xf) = cVar3 * '\x02' | bVar6 & 0xf8;
  if (5 < (uint)((int)(*(byte *)(param_6 + 9) & 0x70) >> 4)) {
    iVar1 = FUN_ram_0002f5e0(param_2,&iStack_4c);
    if (iVar1 != 0) {
      return uVar8;
    }
    if (iStack_4c == 0) {
      return uVar8;
    }
    iVar1 = func_0x000116e4(param_2,iStack_4c + 0x125,&bStack_48);
    if (iVar1 != 0) {
      return uVar8;
    }
    bVar6 = *(byte *)(param_6 + 0x13);
    *(byte *)(param_6 + 0x13) = bStack_48 & 1 | bVar6 & 0xfe;
    *(byte *)(param_6 + 0x13) =
         bStack_48 & 1 | bVar6 & 0xf0 | (char)((int)(bStack_48 & 0xe) >> 1) * '\x02';
  }
  iVar1 = FUN_ram_0002ebe8(param_3,*(undefined1 *)(param_1 + 8),&cStack_50);
  uVar7 = (uint)*(byte *)(param_3 + (uint)*(byte *)(param_1 + 8) * 2 + 0x16);
  puVar5 = param_3 + (uint)*(byte *)(param_1 + 8) * 2;
  if ((iVar1 != 0) && (cStack_50 == '\x04')) {
    *(byte *)(puVar5 + 0x16) =
         *(byte *)(param_3 + (uint)*(byte *)(param_1 + 8) * 2 + 0x16) & 0x1f | 0x40;
    *(byte *)(param_8 * 8 + param_6 + 0x58) = *(byte *)(param_6 + param_8 * 8 + 0x58) & 0x1f | 0x40;
    uVar7 = (uint)*(byte *)(param_3 + (uint)*(byte *)(param_1 + 8) * 2 + 0x16);
    puVar5 = param_3 + (uint)*(byte *)(param_1 + 8) * 2;
  }
  cStack_50 = (char)((int)(uVar7 & 0xe0) >> 5);
  if ((param_8 & 1) == 0) {
    uVar7 = param_8 - 1;
  }
  else {
    uVar7 = param_8 + 1;
  }
  if (iStack_5c != 0) {
    *(byte *)(puVar5 + 0x18) = *(byte *)(puVar5 + 0x18) & 0xf7 | 8;
    *(byte *)(param_3 + (uint)*(byte *)(param_1 + 8) * 2 + 0x18) =
         *(byte *)(param_3 + (uint)*(byte *)(param_1 + 8) * 2 + 0x18) & 0xef | 0x10;
    *(byte *)(param_3 + (uint)*(byte *)(param_1 + 8) * 2 + 0x16) =
         *(byte *)(param_3 + (uint)*(byte *)(param_1 + 8) * 2 + 0x16) & 0xef | 0x10;
    *(byte *)(param_3 + (uint)*(byte *)(param_1 + 8) * 2 + 0x18) =
         *(byte *)(param_3 + (uint)*(byte *)(param_1 + 8) * 2 + 0x18) & 0x1f | cStack_50 << 5;
    bVar4 = cStack_50 << 5;
    iVar1 = (uVar7 & 0xff) * 8;
    bVar6 = *(byte *)(param_6 + iVar1 + 0x58);
    iVar1 = iVar1 + param_6;
    *(byte *)(iVar1 + 0x58) = bVar4 | bVar6 & 0x1f;
    *(byte *)(iVar1 + 0x58) = bVar4 | bVar6 & 0x17 | 8;
    *(byte *)(iVar1 + 0x58) = bVar4 | bVar6 & 7 | 0x18;
    *(byte *)(param_8 * 8 + param_6 + 0x58) = *(byte *)(param_6 + param_8 * 8 + 0x58) & 0xef | 0x10;
  }
  iVar1 = func_0x000147d8(param_6,acStack_4f);
  if (iVar1 != 0) goto LAB_ram_0002e394;
  *(byte *)(param_6 + 9) = acStack_4f[0] << 7 | *(byte *)(param_6 + 9) & 0x7f;
  iVar1 = FUN_ram_0002e580(param_6);
  if ((iVar1 != 1) || (iVar1 = func_0x00013d30(param_6), iVar1 != 0)) goto LAB_ram_0002e394;
  *(byte *)(param_6 + 8) = *(byte *)(param_6 + 8) & 0xfe | 1;
  iVar1 = func_0x0000e528(*param_2,param_2[1]);
  iVar2 = func_0x0000e528(*param_3,param_3[1]);
  if (iVar1 == 0xff || iVar2 == 0xff) goto LAB_ram_0002e394;
  param_3[*(byte *)(param_1 + 8) + 5] =
       iVar1 << 0x18 | param_3[*(byte *)(param_1 + 8) + 5] & 0xffffff;
  *(uint *)(param_8 * 4 + param_6 + 0x14) =
       iVar2 << 0x18 | *(uint *)(param_6 + param_8 * 4 + 0x14) & 0xffffff;
  if (DAT_ram_008016c6 == '\x01') {
    iVar1 = func_0x000141ac(param_6);
    uVar7 = (uint)*(byte *)(param_1 + 8);
    if (iVar1 == 0) goto LAB_ram_0002e420;
  }
  else {
    uVar7 = (uint)*(byte *)(param_1 + 8);
LAB_ram_0002e420:
    iVar1 = func_0x00018158(param_3,1,uVar7);
    if (iVar1 != 0) {
      if (acStack_4f[0] == '\0') {
        return 1;
      }
      iVar1 = func_0x00018158(param_6,1,param_8);
      if ((((iVar1 != 0) && (iVar1 = func_0x00018158(param_6,3,param_8), iVar1 != 0)) &&
          (iVar1 = func_0x00018158(param_6,6,param_8), iVar1 != 0)) &&
         ((iVar1 = func_0x00018158(param_6,7,param_8), iVar1 != 0 &&
          (iVar1 = FUN_ram_000248c8(param_6,abStack_47), iVar1 != 0)))) {
        bVar6 = 0;
        while ((bVar6 < abStack_47[0] && (uVar7 = func_0x0001b8f8(param_6,bVar6,0x96), uVar7 != 0)))
        {
          iVar1 = func_0x0000f478(param_6,0,2,uVar7 & 0xffff,&uStack_44,1);
          if (iVar1 != 0x1000000) break;
          uStack_44 = uStack_44 | 0x8000000;
          iVar1 = func_0x0000f594(param_6,0,2,uVar7 & 0xffff,&uStack_44,1);
          if (iVar1 != 0x1000000) break;
          bVar6 = bVar6 + 1;
        }
        if (bVar6 == abStack_47[0]) {
          return 1;
        }
      }
      param_3[*(byte *)(param_1 + 8) + 5] = param_3[*(byte *)(param_1 + 8) + 5] | 0xff000000;
      func_0x0000e37c(param_6,0);
      func_0x00018158(param_3,2,*(undefined1 *)(param_1 + 8));
      return uVar8;
    }
    uVar7 = (uint)*(byte *)(param_1 + 8);
  }
  param_3[uVar7 + 5] = param_3[uVar7 + 5] | 0xff000000;
LAB_ram_0002e394:
  func_0x0000e37c(param_6,0);
  return uVar8;
}



/* ==========================================================
 * ram:0002e580  FUN_ram_0002e580  size=238
 * callers: ram:0002e014
 * ========================================================== */

undefined4 FUN_ram_0002e580(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  uint local_28;
  
  local_28 = 0;
  uVar2 = 1;
  if (param_2 == 0) {
    *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) & 0xcf | 0x30;
  }
  else {
    iVar1 = func_0x0001b8f8(param_1,0,0x62);
    if (iVar1 != 0) {
      cVar3 = '\x01';
      iVar1 = func_0x0000f478(param_1,0,2,iVar1,&local_28,1);
      if (iVar1 == 0x1000000) {
        if ((local_28 & 0xff) == 0) {
          *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) & 0xcf;
          return 1;
        }
        if ((local_28 & 0x80) != 0) {
          cVar3 = '\x02';
        }
        *(byte *)(param_1 + 0xd) = cVar3 << 4 | *(byte *)(param_1 + 0xd) & 0xcf;
        return 1;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}



/* ==========================================================
 * ram:0002e670  FUN_ram_0002e670  size=204
 * callers: ram:0002e814,ram:00034014
 * ========================================================== */

uint FUN_ram_0002e670(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uStack_30;
  char acStack_2c [4];
  
  uStack_30 = 0;
  acStack_2c[0] = '\0';
  func_0x000147d8(param_1,acStack_2c);
  if (((acStack_2c[0] == '\0') ||
      (iVar1 = func_0x0001b8f8(param_1,param_2 + -1 >> 1 & 0xff,0x8d), iVar1 == 0)) ||
     (iVar1 = func_0x0000f478(param_1,0,2,iVar1,&uStack_30,1), iVar1 != 0x1000000)) {
    uVar2 = 0;
  }
  else {
    uVar2 = (uStack_30 & 0x1000) >> 0xc;
  }
  return uVar2;
}



/* ==========================================================
 * ram:0002e73c  FUN_ram_0002e73c  size=166
 * callers: ram:00030014
 * ========================================================== */

undefined4 FUN_ram_0002e73c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint uStack_24;
  
  iVar1 = func_0x0000f478();
  if (iVar1 == 0x1000000) {
    uVar2 = uStack_24 & 0xfffffc0f;
    uStack_24 = uVar2 | 0x30;
    if (param_4 == 1) {
      uStack_24 = uVar2 | 0x8030;
    }
    iVar1 = func_0x0000f594(param_1,param_2,1,param_3,&uStack_24,1);
    if (iVar1 == 0x1000000) {
      return 1;
    }
  }
  return 0;
}



/* ==========================================================
 * ram:0002e814  FUN_ram_0002e814  size=652
 * callers: ram:0002c9d8
 * ========================================================== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_0002e814(undefined4 *param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  char cVar7;
  undefined1 *puVar8;
  undefined4 uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  uint uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  
  uStack_44 = 0;
  bVar1 = *(byte *)(param_1 + 2);
  if ((bVar1 & 1) == 0) {
    cVar7 = bVar1 - 1;
  }
  else {
    cVar7 = bVar1 + 1;
  }
  uStack_40 = 0;
  puVar8 = (undefined1 *)0x807571;
  uRam00807571 = 0;
  uStack_54 = *param_1;
  uStack_50 = param_1[1] & 0x7fffffff;
  iVar2 = func_0x0000e264();
  uVar6 = (uint)*(byte *)(iVar2 + (uint)*(byte *)(param_1 + 2) * 8 + 0x58);
  if ((int)(uVar6 & 8) >> 3 == 1) {
    uVar3 = 1;
  }
  else {
    if (((int)(uVar6 & 0x10) >> 4 != 1) && ((_DAT_ram_008016cc & 4) != 0)) {
      uStack_4c = *param_1;
      uStack_48 = param_1[1] & 0x7fffffff;
      func_0x0001395c(param_1,&uStack_4c,&uStack_44);
      iVar4 = FUN_ram_0002e670(&uStack_54,*(undefined1 *)(param_1 + 2));
      if ((iVar4 != 0) &&
         (iVar4 = func_0x0000f478(&uStack_4c,0,2,1,&uStack_40,1), iVar4 == 0x1000000)) {
        uVar3 = func_0x0000f570();
        iVar4 = FUN_ram_0002e670(&uStack_4c,uVar3);
        if ((iVar4 != 0) && (iVar4 = func_0x00017a48(iVar2,cVar7,1,1,0xff), iVar4 != 0)) {
          uVar3 = func_0x00018b48(0x19);
          func_0x000187b0(0,uVar3);
          func_0x000187f4(0);
          do {
            iVar5 = func_0x0000f478(iVar2,cVar7,1,iVar4 + 1U & 0xffff,&uStack_3c,1);
            if (iVar5 != 0x1000000) goto LAB_ram_0002ea64;
          } while (((uStack_3c & 0x3c000000) != 0x8000000) &&
                  (iVar5 = func_0x00018880(0), iVar5 == 0));
          func_0x0001883c(0);
          iVar2 = func_0x00018880(0);
          if (iVar2 == 0) {
            if ((*(byte *)(param_1 + 2) & 1) == 0) {
              *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) - 1;
            }
            *puVar8 = 1;
          }
        }
      }
    }
LAB_ram_0002ea64:
    uVar3 = 0;
  }
  return uVar3;
}



/* ==========================================================
 * ram:0002eaa0  FUN_ram_0002eaa0  size=106
 * callers: ram:00030014
 * ========================================================== */

uint FUN_ram_0002eaa0(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uStack_1c;
  
  iVar1 = func_0x0000f478();
  if (iVar1 == 0x1000000) {
    uVar2 = (uStack_1c & 0x3f00000) >> 0x14 & 2;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* ==========================================================
 * ram:0002eb0c  FUN_ram_0002eb0c  size=218
 * callers: ram:00030014
 * ========================================================== */

bool FUN_ram_0002eb0c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uStack_30;
  
  iVar1 = func_0x0000f478();
  if (iVar1 == 0x1000000) {
    uVar3 = (uStack_30 & 0x3c000000) >> 0x1a;
    uVar4 = (uStack_30 & 0x3f00000) >> 0x14;
    if (uVar3 != 2) {
      iVar1 = func_0x0000f478(param_1,param_2,1,param_3,&uStack_30,1);
      if (iVar1 != 0x1000000) goto LAB_ram_0002eb90;
      uVar3 = (uStack_30 & 0x3c000000) >> 0x1a;
      uVar4 = (uStack_30 & 0x3f00000) >> 0x14;
    }
    bVar2 = uVar3 == 2 && uVar4 == 2;
  }
  else {
LAB_ram_0002eb90:
    bVar2 = false;
  }
  return bVar2;
}



/* ==========================================================
 * ram:0002ebe8  FUN_ram_0002ebe8  size=332
 * callers: ram:00034014,ram:0002e014
 * ========================================================== */

undefined4 FUN_ram_0002ebe8(undefined4 param_1,undefined4 param_2,byte *param_3)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  uint uStack_44;
  
  iVar1 = func_0x00017a48(param_1,param_2,1,1,0xff);
  if (iVar1 != 0) {
    uVar5 = iVar1 + 1U & 0xffff;
    iVar1 = func_0x0000f478(param_1,param_2,1,uVar5,&uStack_44,1);
    if (iVar1 == 0x1000000) {
      uVar3 = (uStack_44 & 0x3c000000) >> 0x1a;
      bVar4 = 0xf;
      bVar2 = (byte)(uStack_44 >> 0x10) & 0xf;
      if (uVar3 != 2) {
        iVar1 = func_0x0000f478(param_1,param_2,1,uVar5,&uStack_44,1);
        if (iVar1 != 0x1000000) {
          return 0;
        }
        uVar3 = (uStack_44 & 0x3c000000) >> 0x1a;
        bVar2 = (byte)(uStack_44 >> 0x10) & bVar4;
      }
      if (uVar3 == 2) {
        *param_3 = bVar2;
        return 1;
      }
    }
  }
  return 0;
}



/* ==========================================================
 * ram:0002ed44  FUN_ram_0002ed44  size=484
 * callers: ram:0002407c
 * ========================================================== */

void FUN_ram_0002ed44(undefined4 *param_1,undefined1 *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uStack_48;
  uint uStack_44;
  undefined1 uStack_40;
  undefined1 uStack_3f;
  undefined1 uStack_3e;
  char cStack_3d;
  
  uStack_48 = 0;
  iVar6 = 0;
  iVar2 = func_0x0000e528(*param_1,param_1[1]);
  if (iVar2 == 0xff) {
    *param_2 = 1;
  }
  else if ((iVar2 == 0) || (iVar6 = func_0x00017a48(param_1,0,2,5,6), iVar6 != 0)) {
    for (uVar4 = 0; (int)uVar4 <= (int)(*(byte *)((int)param_1 + 9) & 0xf);
        uVar4 = (uint)(char)((char)uVar4 + '\x01')) {
      uVar5 = param_1[uVar4 + 5] & 0xffffff;
      bVar1 = false;
      if (uVar5 == 0xe0101) {
        if ((iVar2 != 0) &&
           (iVar3 = func_0x0000f478(param_1,0,2,iVar6,&uStack_48,1), iVar3 != 0x1000000)) {
          *param_2 = 1;
          return;
        }
        if ((uStack_48 != 0x60500) || (iVar2 == 0)) {
          iVar3 = func_0x00019570(param_1,&uStack_48,uVar4 & 0xff);
          if (iVar3 == 0) goto LAB_ram_0002eed4;
          if ((uStack_48 & 0x80) != 0) {
            bVar1 = true;
          }
        }
      }
      if (uVar5 == 0xe0102) {
        iVar3 = func_0x00019674(param_1,&uStack_48,uVar4 & 0xff);
        if (iVar3 == 0) {
LAB_ram_0002eed4:
          *param_2 = 1;
          param_1[uVar4 + 5] = param_1[uVar4 + 5] | 0xffffff;
          return;
        }
        if ((uStack_48 & 0x40) != 0) {
          bVar1 = true;
        }
      }
      if (bVar1) {
        uStack_3f = 0;
        uStack_3e = 1;
        uStack_44 = uVar5;
        uStack_40 = func_0x0000e528(*param_1,param_1[1]);
        cStack_3d = (char)uVar4;
        FUN_ram_00025d00(uVar5 == 0xe0102,&uStack_44);
      }
    }
  }
  return;
}



/* ==========================================================
 * ram:0002ef28  FUN_ram_0002ef28  size=128
 * callers: ram:000380a8,ram:00025814
 * ========================================================== */

undefined4 FUN_ram_0002ef28(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uStack_20;
  
  uStack_20 = 0;
  iVar1 = func_0x00017a48(param_1,param_2,1,4,0xff);
  if (iVar1 != 0) {
    func_0x0000f478(param_1,param_2,1,iVar1 + 4U & 0xffff,&uStack_20,1);
  }
  return uStack_20;
}



/* ==========================================================
 * ram:0002f014  FUN_ram_0002f014  size=1228
 * callers: ram:00037b88,ram:0002d814
 * ========================================================== */

int FUN_ram_0002f014(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  sbyte sVar12;
  sbyte sVar13;
  undefined4 uVar14;
  undefined1 *puVar15;
  undefined4 uVar16;
  uint uVar17;
  undefined4 uVar18;
  int iVar19;
  undefined4 uVar20;
  uint uVar21;
  byte *pbVar22;
  uint uVar23;
  bool bVar24;
  int iStack_7c;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_50;
  uint uStack_4c;
  undefined1 auStack_48 [5];
  undefined1 uStack_43;
  
  uVar17 = (uint)*(byte *)(param_1 + 0x2a);
  cVar1 = *(char *)(param_1 + 0x2b);
  sVar13 = 2;
  if (cVar1 == '\0') {
    sVar13 = 1;
  }
  sVar12 = 2;
  if (cVar1 == '\0') {
    sVar12 = 1;
  }
  uVar10 = 0xd;
  if (cVar1 == '\0') {
    uVar10 = 10;
  }
  uVar18 = 0xc;
  if (cVar1 == '\0') {
    uVar18 = 9;
  }
  uVar14 = 0xe;
  if (cVar1 == '\0') {
    uVar14 = 0xb;
  }
  uStack_50 = 0;
  iStack_7c = 0;
  uStack_4c = 0;
  uVar3 = func_0x00016938(2);
  uVar4 = func_0x00016938(3);
  uVar5 = func_0x00016938(6);
  uVar6 = func_0x00016938(4);
  func_0x00017ba4(auStack_48,uVar6,6);
  uVar6 = func_0x00016938(7);
  puVar7 = (undefined1 *)func_0x00016938(5);
  uVar21 = 0;
  if (uVar17 != 0) {
    do {
      iVar19 = 1 - uVar21;
      if (1 < uVar21) {
        iVar19 = 0;
      }
      bVar24 = uVar21 != uVar17 - 1;
      iVar8 = func_0x0000e5a0(*(undefined1 *)(param_1 + uVar21 + 0x1c));
      pbVar22 = (byte *)(param_1 + uVar21);
      iVar9 = func_0x0000f478(iVar8,*(undefined1 *)(param_1 + uVar21),1,3,&uStack_4c,1);
      if (iVar9 != 0x1000000) {
LAB_ram_0002f22c:
        iStack_7c = 1;
        break;
      }
      uStack_4c = uStack_4c & 0xfffff;
      iVar9 = func_0x0000f478(iVar8,*pbVar22,1,4,&uStack_50,1);
      if (iVar9 != 0x1000000) goto LAB_ram_0002f22c;
      uStack_50 = uStack_50 & 0xfff00000;
      if (iVar19 == 0) {
        iVar9 = func_0x00016938(1);
        uStack_5c = (uint)*(byte *)(iVar9 + 5);
        if ((int)(*(byte *)((uint)*pbVar22 * 8 + iVar8 + 0x58) & 0x10) >> 4 == 1) {
          uStack_5c = uStack_5c * 2 & 0xff;
        }
        iVar9 = func_0x00016938(9);
        uStack_58 = (uint)*(byte *)(iVar9 + 5);
        if ((int)(*(byte *)(iVar8 + 9) & 0x70) >> 4 == 5) {
          uStack_58 = 5;
        }
        uVar23 = (((uStack_4c - 2) - uStack_5c) - uStack_58) + (uint)(byte)puVar7[5] * -2;
      }
      else {
        if (uStack_4c == 7) {
          iVar9 = 2;
        }
        else {
          iVar9 = 4;
        }
        uStack_43 = (undefined1)iVar9;
        uVar23 = uStack_4c - iVar9;
      }
      if ((int)uVar23 < 1) {
        uVar23 = 0;
      }
      uStack_50 = uVar23 | uStack_50;
      iVar9 = func_0x0000f594(iVar8,*pbVar22,1,4,&uStack_50,1);
      if (iVar9 != 0x1000000) goto LAB_ram_0002f22c;
      bVar2 = *(byte *)(iVar8 + (uint)*pbVar22 * 8 + 0x55);
      *(byte *)((uint)*pbVar22 * 8 + iVar8 + 0x55) =
           bVar2 & 0xf | (byte)(1 << sVar13) | bVar2 & 0xf0;
      bVar2 = *(byte *)(iVar8 + (uint)pbVar22[0xe] * 8 + 0x55);
      *(byte *)((uint)pbVar22[0xe] * 8 + iVar8 + 0x55) =
           (byte)(((int)(bVar2 & 0xf0) >> 4 | 1 << sVar12 & 0xffU) << 4) | bVar2 & 0xf;
      uVar20 = 9;
      if (bVar24) {
        uVar20 = uVar10;
      }
      uVar11 = 9;
      if (iVar19 == 0) {
        uVar11 = uVar10;
      }
      uVar16 = uVar4;
      if (iVar19 != 0) {
        uVar16 = uVar3;
      }
      iVar9 = func_0x00013f64(iVar8,*pbVar22,uVar11,pbVar22[0xe],uVar20,uVar16,0);
      if (iVar9 != 0) {
LAB_ram_0002f410:
        iStack_7c = 1;
        break;
      }
      uVar20 = 8;
      if (bVar24) {
        uVar20 = uVar18;
      }
      uVar11 = 8;
      if (iVar19 == 0) {
        uVar11 = uVar18;
      }
      puVar15 = puVar7;
      if (iVar19 != 0) {
        puVar15 = auStack_48;
      }
      iVar9 = func_0x00013f64(iVar8,*pbVar22,uVar11,pbVar22[0xe],uVar20,puVar15,0);
      if (iVar9 != 0) goto LAB_ram_0002f410;
      uVar20 = uVar14;
      if (!bVar24) {
        uVar20 = 8;
      }
      uVar11 = 8;
      if (iVar19 == 0) {
        uVar11 = uVar14;
      }
      uVar16 = uVar6;
      if (uVar21 == *(byte *)(param_1 + 0x2a) - 1) {
        uVar16 = uVar5;
      }
      iVar19 = func_0x00013f64(iVar8,pbVar22[0xe],uVar20,*pbVar22,uVar11,uVar16);
      if (iVar19 != 0) goto LAB_ram_0002f410;
      uVar21 = uVar21 + 1 & 0xff;
    } while (uVar21 < uVar17);
  }
  if (iStack_7c == 1) {
    FUN_ram_0002d2d8(param_1 + 0x1c,param_1,param_1 + 0xe,uVar21,0,*(undefined1 *)(param_1 + 0x2c),
                     *(undefined1 *)(param_1 + 0x2b));
  }
  return iStack_7c;
}



/* ==========================================================
 * ram:0002f4e0  FUN_ram_0002f4e0  size=140
 * callers: ram:0002a014,ram:00029814,ram:0002c014,ram:00030814,ram:00038814
 * ========================================================== */

void FUN_ram_0002f4e0(int param_1,undefined4 param_2,undefined4 param_3,int param_4,
                     undefined4 param_5)

{
  undefined4 uVar1;
  undefined1 auStack_98 [16];
  int iStack_88;
  undefined1 auStack_84 [96];
  
  uVar1 = 6;
  if (param_1 != 0xc && param_1 != 0xf) {
    uVar1 = 7;
  }
  func_0x00015914(auStack_98);
  iStack_88 = param_1;
  if (0 < param_4) {
    func_0x00017ba4(auStack_84,param_3,param_4 << 2);
  }
  func_0x0000f680(uVar1,param_2,auStack_98,param_4 + 5U & 0xff,param_5);
  return;
}



/* ==========================================================
 * ram:0002f56c  FUN_ram_0002f56c  size=116  [ENTRY/ROOT]
 * ========================================================== */

bool FUN_ram_0002f56c(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = iRam00800488;
  uVar3 = iRam008016b4 + param_1;
  iVar2 = func_0x0001259c(uVar3 & 0xfffff000);
  if (iVar2 == 0) {
    func_0x00017ba4(param_2,iVar1 + (uVar3 & 0xfff),4);
  }
  return iVar2 == 0;
}



/* ==========================================================
 * ram:0002f5e0  FUN_ram_0002f5e0  size=118
 * callers: ram:0002f9fc,ram:00033554,ram:00034884,ram:0002e014
 * ========================================================== */

int FUN_ram_0002f5e0(undefined4 param_1,uint *param_2)

{
  int iVar1;
  ushort auStack_1c [2];
  
  auStack_1c[0] = 0;
  iVar1 = func_0x00011804(param_1,0x77,auStack_1c);
  if (iVar1 == 0) {
    *param_2 = (uint)auStack_1c[0];
    *param_2 = (uint)auStack_1c[0] << 0x10;
    iVar1 = func_0x00011804(param_1,0x75,auStack_1c);
    if (iVar1 == 0) {
      *param_2 = *param_2 | (uint)auStack_1c[0];
    }
  }
  return iVar1;
}



/* ==========================================================
 * ram:0002f658  FUN_ram_0002f658  size=420
 * callers: ram:0002a4d0,ram:0002a2cc
 * ========================================================== */

undefined4 FUN_ram_0002f658(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_24 [4];
  
  auStack_24[0] = 0;
  iVar1 = func_0x0000e264(*param_1,param_1[1]);
  if ((*(ushort *)(param_2 + 8) & 2) == 0) {
    *(undefined1 *)(param_3 + 0x14) = 2;
    *(undefined1 *)(param_3 + 0x15) = 1;
    *(undefined1 *)(param_3 + 0x16) = 2;
    *(undefined1 *)(param_3 + 0x17) = 2;
    auStack_24[0] = 0x18;
    if ((uint)((int)(*(byte *)(iVar1 + 9) & 0x70) >> 4) < 6) {
      return 1;
    }
    iVar1 = FUN_ram_00033554(param_3,auStack_24,param_2,param_1);
  }
  else {
    if ((*(byte *)(param_2 + 3) & 0x80) == 0) {
      auStack_24[0] = 0x14;
      iVar2 = FUN_ram_00033450(*(ushort *)(param_2 + 2) & 0x7fff,1,param_3,auStack_24,param_2,
                               param_1);
      if (iVar2 == 0) {
        return 0;
      }
      *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) | 0x80;
    }
    if ((*(byte *)(param_2 + 5) & 0x80) == 0) {
      iVar2 = FUN_ram_00033450(*(ushort *)(param_2 + 4) & 0x7fff,2,param_3,auStack_24,param_2,
                               param_1);
      if (iVar2 == 0) {
        return 0;
      }
      *(byte *)(param_2 + 5) = *(byte *)(param_2 + 5) | 0x80;
    }
    if ((uint)((int)(*(byte *)(iVar1 + 9) & 0x70) >> 4) < 6) {
      return 1;
    }
    if ((*(ushort *)(param_2 + 8) & 1) == 0) {
      iVar1 = FUN_ram_00033554(param_3,auStack_24,param_2,param_1);
      if (iVar1 == 0) {
        return 0;
      }
      *(ushort *)(param_2 + 8) = *(ushort *)(param_2 + 8) | 1;
    }
    if ((*(byte *)(param_2 + 7) & 0x80) != 0) {
      return 1;
    }
    if (*(char *)(param_2 + 6) == '\0') {
      return 1;
    }
    iVar1 = FUN_ram_00033964(param_3,auStack_24,param_2,param_1);
  }
  if (iVar1 != 0) {
    return 1;
  }
  return 0;
}



/* ==========================================================
 * ram:0002f814  FUN_ram_0002f814  size=488
 * callers: ram:00030174
 * ========================================================== */

undefined4 FUN_ram_0002f814(uint param_1,undefined4 *param_2,int param_3)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  bool bVar7;
  byte bVar8;
  uint uVar9;
  undefined4 uVar10;
  bool bVar11;
  
  uVar10 = 0;
  uVar9 = 0;
  bVar2 = false;
  bVar11 = param_3 == 0xe0102;
  iVar3 = FUN_ram_00025e84(bVar11);
  uVar4 = func_0x0000e528(*param_2,param_2[1]);
  if (uVar4 == 0xff) {
LAB_ram_0002f934:
    uVar10 = 1;
  }
  else {
    if (0 < iVar3) {
      do {
        iVar5 = FUN_ram_00026330(bVar11,uVar9);
        if ((((*(char *)(iVar5 + 6) == '\x01') && (*(char *)(iVar5 + 5) == '\x01')) &&
            (uVar4 == *(byte *)(iVar5 + 4))) && (param_1 == *(byte *)(iVar5 + 7))) {
          bVar2 = true;
          break;
        }
        uVar9 = uVar9 + 1 & 0xff;
      } while ((int)uVar9 < iVar3);
    }
    if (bVar2) {
      bVar8 = 0;
      do {
        pbVar6 = (byte *)FUN_ram_0002665c(bVar8);
        uVar9 = (uint)pbVar6[0x2a];
        if ((uVar9 != 0) &&
           ((((bVar11 && (pbVar6[uVar9 + 0x1b] == uVar4)) && (param_1 == pbVar6[uVar9 + 0xd])) ||
            (((!bVar11 && (pbVar6[0x1c] == uVar4)) && (param_1 == *pbVar6)))))) break;
        pbVar6 = (byte *)0x0;
        bVar8 = bVar8 + 1;
      } while (bVar8 < 8);
      if (pbVar6 == (byte *)0x0) goto LAB_ram_0002f934;
      func_0x0000e5a0(pbVar6[0x1c]);
      uVar4 = (uint)pbVar6[0x1c];
      param_1 = (uint)*pbVar6;
      func_0x0000e5a0(pbVar6[pbVar6[0x2a] + 0x1b]);
      bVar1 = pbVar6[pbVar6[0x2a] + 0x1b];
      uVar9 = (uint)pbVar6[pbVar6[0x2a] + 0xd];
      uVar10 = FUN_ram_0002d014(pbVar6,bVar8,0,0);
      FUN_ram_000264d8(1,bVar1,uVar9,0,!bVar11);
      bVar2 = false;
      bVar7 = bVar11;
    }
    else {
      bVar7 = false;
      bVar2 = bVar11;
    }
    FUN_ram_000264d8(bVar2,uVar4,param_1,0,bVar7);
  }
  return uVar10;
}



/* ==========================================================
 * ram:0002f9fc  FUN_ram_0002f9fc  size=380
 * callers: ram:00025814
 * ========================================================== */

undefined4 FUN_ram_0002f9fc(undefined4 *param_1,uint param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uStack_40;
  int iStack_3c;
  
  iVar3 = func_0x0000e528(*param_1,param_1[1]);
  uVar6 = 0;
  uVar7 = 0;
  bVar1 = false;
  bVar2 = false;
  uStack_40 = 0;
  uVar5 = 0;
  iStack_3c = 0;
  do {
    uVar4 = param_1[uVar5 + 5] & 0xffffff;
    if (uVar4 != 0xe0101 && uVar4 != 0xe0103 || bVar1) {
      if ((uVar4 == 0xe0101 || uVar4 == 0xe0103) && !bVar2) {
        uVar7 = uVar5 & 0xff;
        bVar2 = true;
      }
    }
    else {
      uVar6 = uVar5 & 0xff;
      bVar1 = true;
    }
    uVar5 = (uint)(char)((char)uVar5 + '\x01');
  } while ((int)uVar5 <= (int)(*(byte *)((int)param_1 + 9) & 0xf));
  if (param_2 == uVar6 || param_2 == uVar7) {
    if (iVar3 == 0) {
      iVar3 = func_0x00015eb8(0x100,&uStack_40);
      if (iVar3 != 0) {
LAB_ram_0002fb18:
        if (param_2 == uVar6) {
          uStack_40 = uStack_40 & 0xff;
        }
        else {
          uStack_40 = (uStack_40 & 0xff00) >> 8;
        }
        if (uStack_40 == 0) {
          return 0x1200;
        }
        return 0x2100;
      }
    }
    else {
      iVar3 = FUN_ram_0002f5e0(param_1,&iStack_3c);
      if (((iVar3 == 0) && (iStack_3c != 0)) &&
         (iVar3 = func_0x00011804(param_1,iStack_3c + 0x100,&uStack_40), iVar3 == 0))
      goto LAB_ram_0002fb18;
    }
  }
  return 0xffff;
}



/* ==========================================================
 * ram:0002fbec  FUN_ram_0002fbec  size=112
 * callers: ram:0002fc5c
 * ========================================================== */

bool FUN_ram_0002fbec(undefined4 param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  uint uStack_1c;
  
  uStack_1c = 0;
  bVar2 = false;
  iVar1 = FUN_ram_00037690(param_1,param_2,&uStack_1c);
  if (iVar1 == 0) {
    bVar2 = false;
  }
  else if (param_2 == 0x1513) {
    bVar2 = (uStack_1c & 0x10) != 0;
  }
  else if ((uStack_1c & 0x2000) != 0) {
    bVar2 = true;
  }
  return bVar2;
}



/* ==========================================================
 * ram:0002fc5c  FUN_ram_0002fc5c  size=464
 * callers: ram:0002407c
 * ========================================================== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_0002fc5c(int param_1,undefined4 param_2,int param_3,int param_4,uint param_5,char *param_6,
                char *param_7,undefined4 param_8)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  uint uStack_34;
  
  uStack_34 = 0;
  cVar1 = FUN_ram_0002fbec(param_2,param_4);
  *param_6 = cVar1;
  iVar2 = FUN_ram_00037690(param_2,param_4,&uStack_34);
  if (iVar2 != 0) {
    if (param_4 == 0x1513) {
      *param_7 = (uStack_34 & 0x20) != 0;
      bVar3 = (uStack_34 & 0x40) != 0;
      *(bool *)param_8 = bVar3;
    }
    else {
      *param_7 = (uStack_34 & 0x4000) != 0;
      bVar3 = (uStack_34 & 0x8000) != 0;
      *(bool *)param_8 = bVar3;
    }
    if ((cRam00807572 == '\0') || (*param_6 != '\0')) {
      if ((cRam00807573 == '\0') || ((*param_7 == '\0' && !bVar3 || (param_5 < 2)))) {
        if (((_DAT_ram_008016cc & 0x200000) == 0) || (param_4 != 0x1513)) {
          iVar2 = (uint)*(byte *)(param_1 + 8) * 8;
          *(byte *)(iVar2 + param_3 + 0x57) = *(byte *)(param_3 + iVar2 + 0x57) & 0xfc;
          return 1;
        }
        iVar2 = func_0x00014988();
        if (iVar2 == 1) {
          FUN_ram_0002a2cc(param_2,0x1513,3);
        }
      }
      else if ((_DAT_ram_008016cc & 2) != 0 && (_DAT_ram_008016cc & 0x1000000) != 0) {
        iVar2 = func_0x00014988();
        if (iVar2 == 1) {
          FUN_ram_0002a2cc(param_2,param_4,2);
        }
        else if ((_DAT_ram_008016cc & 0x200000) != 0) {
          FUN_ram_0002a244();
        }
      }
    }
    else if (((_DAT_ram_008016cc & 2) != 0 && (_DAT_ram_008016cc & 0x1000000) != 0) &&
            (iVar2 = func_0x00014988(), iVar2 == 1)) {
      FUN_ram_0002a2cc(param_2,param_4,0);
    }
  }
  iVar2 = (uint)*(byte *)(param_1 + 8) * 8;
  *(byte *)(iVar2 + param_3 + 0x57) = *(byte *)(param_3 + iVar2 + 0x57) & 0xfc | 3;
  return 0;
}



/* ==========================================================
 * ram:0002fe2c  FUN_ram_0002fe2c  size=372
 * callers: ram:0002407c
 * ========================================================== */

undefined4 FUN_ram_0002fe2c(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char acStack_34 [4];
  
  uVar4 = 1;
  uVar5 = 0;
  acStack_34[0] = '\x01';
  if (param_2 == 0x1513) {
    uVar5 = 4;
    uVar3 = 1;
  }
  else if (param_2 == 0x151b || param_2 == 0x151a) {
    uVar5 = 2;
    uVar3 = 0;
  }
  else if (param_2 == 0x1549) {
    uVar5 = 1;
    uVar3 = 2;
  }
  else if (param_2 == 0x1547 || param_2 == 0x1548) {
    uVar3 = 3;
  }
  else if (param_2 == 0x1569 || param_2 == 0x1567) {
    uVar3 = 4;
  }
  else if (param_2 == 0x156b || param_2 == 0x156d) {
    uVar3 = 5;
  }
  else if (((param_2 == 0x1575 || param_2 == 0x1576) || param_2 == 0x1577) || param_2 == 0x1578) {
    uVar3 = 6;
  }
  else {
    uVar3 = 7;
  }
  if (uVar3 < 3) {
    uVar1 = func_0x00015d60(param_3,acStack_34);
    if ((acStack_34[0] == '\0') ||
       (uVar1 = FUN_ram_00028814(param_1,uVar5,param_3,uVar1,acStack_34), acStack_34[0] == '\0')) {
      uVar4 = 0;
    }
    else {
      iVar2 = FUN_ram_00030704(param_3,param_1,uVar5,uVar1);
      if (iVar2 != 1) {
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}



/* ==========================================================
 * ram:00030014  FUN_ram_00030014  size=352
 * callers: ram:00034014,ram:0002e014
 * ========================================================== */

undefined4 FUN_ram_00030014(undefined4 param_1,uint param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if ((param_2 & 1) == 0) {
    uVar6 = param_2 - 1;
  }
  else {
    uVar6 = param_2 + 1;
  }
  if ((param_4 & 1) != 0) {
    uVar5 = param_4 + 1 & 0xff;
    iVar1 = func_0x00017a48(param_3,param_4,1,1,0xff);
    if ((((iVar1 != 0) && (iVar2 = func_0x00017a48(param_1,param_2,1,1,0xff), iVar2 != 0)) &&
        (iVar3 = FUN_ram_0002eaa0(param_1,param_2,iVar2), iVar3 != 0)) &&
       (iVar3 = FUN_ram_0002eaa0(param_3,param_4,iVar1), iVar3 != 0)) {
      uVar4 = iVar2 + 1U & 0xffff;
      FUN_ram_0002e73c(param_1,param_2,uVar4,0);
      FUN_ram_0002e73c(param_1,uVar6 & 0xff,uVar4,0);
      uVar6 = iVar1 + 1U & 0xffff;
      FUN_ram_0002e73c(param_3,param_4,uVar6,0);
      FUN_ram_0002e73c(param_3,uVar5,uVar6,1);
      iVar1 = FUN_ram_0002eb0c(param_3,param_4,uVar6);
      if (iVar1 != 0) {
        return 1;
      }
    }
  }
  return 0;
}



/* ==========================================================
 * ram:00030174  FUN_ram_00030174  size=284
 * callers: ram:000232fc
 * ========================================================== */

void FUN_ram_00030174(int param_1,undefined4 *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  uint uStack_34;
  int iStack_30;
  undefined1 uStack_2c;
  undefined1 uStack_2b;
  undefined1 uStack_2a;
  undefined1 uStack_29;
  
  uStack_34 = 0;
  bVar1 = false;
  iVar2 = func_0x0000e528(*param_2,param_2[1]);
  if (iVar2 == 0xff) {
    return;
  }
  if (*(char *)(param_1 + 9) != '\0') {
    func_0x0001a9f0(3);
    FUN_ram_0002f814(*(undefined1 *)(param_1 + 8),param_2,param_3);
    return;
  }
  if (param_3 == 0xe0101) {
    iVar2 = func_0x00019570(param_2,&uStack_34,*(undefined1 *)(param_1 + 8));
    if (iVar2 == 0) {
      param_2[*(byte *)(param_1 + 8) + 5] = param_2[*(byte *)(param_1 + 8) + 5] | 0xffffff;
      return;
    }
    if ((uStack_34 & 0x80) == 0) goto LAB_ram_00030210;
  }
  bVar1 = true;
LAB_ram_00030210:
  if (bVar1) {
    uStack_2b = 0;
    uStack_2a = 1;
    iStack_30 = param_3;
    uStack_2c = func_0x0000e528(*param_2,param_2[1]);
    uStack_29 = *(undefined1 *)(param_1 + 8);
    FUN_ram_00025d00(param_3 == 0xe0102,&iStack_30);
  }
  return;
}



/* ==========================================================
 * ram:00030290  FUN_ram_00030290  size=1140
 * callers: ram:00037b88,ram:0002d814,ram:0002d014
 * ========================================================== */

undefined4 FUN_ram_00030290(int param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  sbyte sStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  undefined4 uStack_44;
  
  uStack_50 = 0;
  iVar4 = (int)(*(byte *)(param_1 + 9) & 0x70) >> 4;
  sStack_54 = 0;
  uStack_44 = 0;
  uVar5 = *(uint *)(param_2 * 4 + param_1 + 0x14) & 0xffffff;
  if ((uVar5 == 0xe0102) && (iVar1 = func_0x00019714(param_1,1,iVar4), iVar1 == 0)) {
    return 1;
  }
  uVar2 = func_0x00017a48(param_1,param_2,1,4,0xff);
  if (uVar2 == 0) goto LAB_ram_00030358;
  if (uVar5 == 0xe0102) {
    if (param_3 == 1) {
      iVar1 = func_0x0000f478(param_1,param_2,1,0x10,&uStack_48,1);
      if (iVar1 != 0x1000000) {
LAB_ram_00030358:
        if (uVar5 != 0xe0102) {
          return 1;
        }
        func_0x00019714(param_1,0,iVar4);
        return 1;
      }
      uStack_48 = uStack_48 & 0xffff0000;
      iVar1 = func_0x0000e5a0(param_5);
      iVar3 = func_0x00019570(iVar1,&uStack_50,param_4);
      if (iVar3 == 0) {
        *(uint *)(param_4 * 4 + iVar1 + 0x14) = *(uint *)(iVar1 + param_4 * 4 + 0x14) | 0xffffff;
        return 1;
      }
      if ((uStack_50 & 0x80) != 0) {
        uStack_48 = uStack_48 | (uStack_50 & 0x7f) * 0x32;
      }
      iVar1 = func_0x0000f594(param_1,param_2,1,0x10,&uStack_48,1);
      if (iVar1 != 0x1000000) goto LAB_ram_00030358;
    }
    iVar4 = func_0x00019714(param_1,0,iVar4);
    if (iVar4 == 0) {
      return 1;
    }
  }
  if (param_3 == 1) {
    uVar5 = uVar2 + 1 & 0xffff;
    iVar4 = func_0x0000f478(param_1,param_2,1,uVar5,&uStack_4c,1);
    if (iVar4 != 0x1000000) {
      return 1;
    }
    uStack_4c = uStack_4c & 0xffc00000 | 0x4008;
    iVar4 = func_0x0000f594(param_1,param_2,1,uVar5,&uStack_4c,1);
    if (iVar4 != 0x1000000) {
      return 1;
    }
    uVar2 = uVar5 - 1 & 0xffff;
    iVar4 = func_0x0000f478(param_1,param_2,1,uVar2,&uStack_4c,1);
    if (iVar4 != 0x1000000) {
      return 1;
    }
    if (((int)(*(byte *)(param_1 + 9) & 0x70) >> 4 == 1) &&
       (iVar4 = func_0x0000f478(param_1,param_2,1,0,&uStack_44,1), iVar4 != 0x1000000)) {
      return 1;
    }
    uStack_4c = uStack_4c & 0xf800ffff | 0x90000;
    iVar4 = func_0x0000f594(param_1,param_2,1,uVar2,&uStack_4c,1);
  }
  else {
    uVar5 = uVar2 + 2 & 0xffff;
    iVar4 = func_0x0000f478(param_1,param_2,1,uVar5,&uStack_4c,1);
    if (iVar4 != 0x1000000) {
      return 1;
    }
    sStack_54 = 3;
    uStack_4c = uStack_4c | 8;
    iVar4 = func_0x0000f594(param_1,param_2,1,uVar5,&uStack_4c,1);
  }
  if (((iVar4 == 0x1000000) &&
      (iVar4 = func_0x0000f478(param_1,param_2,1,uVar2,&uStack_4c,1), iVar4 == 0x1000000)) &&
     (((int)(*(byte *)(param_1 + 9) & 0x70) >> 4 != 1 ||
      (iVar4 = func_0x0000f478(param_1,param_2,1,0,&uStack_44,1), iVar4 == 0x1000000)))) {
    if (param_3 == 0) {
      uStack_4c = uStack_4c & 0x3fffffff;
    }
    else {
      uStack_4c = uStack_4c | 0xc0000000;
    }
    iVar4 = func_0x0000f594(param_1,param_2,1,uVar2,&uStack_4c,1);
    if (iVar4 == 0x1000000) {
      if (param_3 == 0) {
        uVar5 = uVar2 + 2 & 0xffff;
        iVar4 = func_0x0000f478(param_1,param_2,1,uVar5,&uStack_4c,1);
        if (iVar4 != 0x1000000) {
          return 1;
        }
        uStack_4c = uStack_4c & ~(1 << sStack_54);
        iVar4 = func_0x0000f594(param_1,param_2,1,uVar5,&uStack_4c,1);
        if (iVar4 != 0x1000000) {
          return 1;
        }
      }
      iVar4 = func_0x0000f478(param_1,param_2,1,uVar2 + 1 & 0xffff,&uStack_4c,1);
      if (iVar4 == 0x1000000) {
        return 0;
      }
    }
  }
  return 1;
}



/* ==========================================================
 * ram:00030704  FUN_ram_00030704  size=168
 * callers: ram:0002fe2c
 * ========================================================== */

undefined4 FUN_ram_00030704(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 uStack_2c;
  undefined1 auStack_2b [7];
  
  iVar1 = FUN_ram_00029638(param_1,399);
  uVar2 = 0;
  if (iVar1 == 1) {
    uStack_2c = uRam00807abc;
    func_0x00017ba4(auStack_2b,0x807ab8,4);
    if (param_4 == 1) {
      uVar2 = FUN_ram_00029158(param_1,param_3,param_2);
    }
    else {
      uVar2 = FUN_ram_000290f0(param_1,&uStack_2c);
    }
  }
  return uVar2;
}



/* ==========================================================
 * ram:00030814  FUN_ram_00030814  size=132
 * callers: ram:00028744
 * ========================================================== */

undefined4 FUN_ram_00030814(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_20 [4];
  
  auStack_20[0] = 2;
  iVar1 = FUN_ram_00027d04(param_3,auStack_20,0);
  if ((iVar1 == 0) || (iVar1 = FUN_ram_0002f4e0(6,param_1,0,0,param_2), iVar1 != 0x1000000)) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_ram_00027cac(auStack_20[0]);
    uVar2 = 1;
    *(undefined1 *)(iVar1 + 0x16) = 1;
  }
  return uVar2;
}



/* ==========================================================
 * ram:00030898  FUN_ram_00030898  size=98  [ENTRY/ROOT]
 * ========================================================== */

void FUN_ram_00030898(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    func_0x0000e840(0,0x25f98,0,0);
    uVar1 = 0x25f98;
  }
  else {
    func_0x0000e840(0,0x22678,0,0);
    uVar1 = 0x22678;
  }
  func_0x0000e840(1,uVar1,0,0);
  return;
}



/* ==========================================================
 * ram:000308fc  FUN_ram_000308fc  size=292  [ENTRY/ROOT]
 * ========================================================== */

undefined4 FUN_ram_000308fc(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  bVar1 = *(byte *)(param_1 + param_2 * 8 + 0x56);
  iVar2 = param_2 * 8 + param_1;
  uVar4 = bVar1 & 0xf;
  if ((bVar1 & 0xf) != 0) {
    bVar1 = *(byte *)(param_1 + uVar4 * 8 + 0x55);
    iVar3 = uVar4 * 8 + param_1;
    *(byte *)(iVar3 + 0x55) = bVar1 & 0xfe;
    *(byte *)(iVar3 + 0x55) = bVar1 & 0xe | (byte)(((int)(bVar1 & 0xf0) >> 4 & 0xfffffffeU) << 4);
    bVar1 = *(byte *)(iVar2 + 0x55);
    *(byte *)(iVar2 + 0x55) = bVar1 & 0xfe;
    *(byte *)(iVar2 + 0x55) = (byte)(((int)(bVar1 & 0xf0) >> 4 & 0xfffffffeU) << 4) | bVar1 & 0xe;
    *(byte *)(iVar2 + 0x56) = *(byte *)(iVar2 + 0x56) & 0xf0;
    iVar2 = FUN_ram_00030c24(param_1,uVar4,0);
    if (((iVar2 == 0) || (iVar2 = func_0x00014050(param_1,uVar4,8,0,1), iVar2 != 0)) ||
       (iVar2 = func_0x00014050(param_1,param_2,uRam008016c5,0,1), iVar2 != 0)) {
      return 0;
    }
  }
  return 1;
}



/* ==========================================================
 * ram:00030a20  FUN_ram_00030a20  size=516  [ENTRY/ROOT]
 * ========================================================== */

undefined4 FUN_ram_00030a20(int param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  bVar1 = *(byte *)(param_1 + param_2 * 8 + 0x56);
  iVar4 = param_2 * 8 + param_1;
  uVar5 = bVar1 & 0xf;
  iVar6 = (int)(*(byte *)(param_3 + 8) & 0xfe) >> 1;
  if ((bVar1 & 0xf) != 0) {
    iVar2 = func_0x00013f04(param_3);
    bVar1 = *(byte *)(param_1 + uVar5 * 8 + 0x55);
    iVar3 = uVar5 * 8 + param_1;
    *(byte *)(iVar3 + 0x55) = bVar1 & 0xfe;
    *(byte *)(iVar3 + 0x55) = bVar1 & 0xe | (byte)(((int)(bVar1 & 0xf0) >> 4 & 0xfffffffeU) << 4);
    bVar1 = *(byte *)(iVar4 + 0x55);
    *(byte *)(iVar4 + 0x55) = bVar1 & 0xfe;
    *(byte *)(iVar4 + 0x55) = bVar1 & 0xe | (byte)(((int)(bVar1 & 0xf0) >> 4 & 0xfffffffeU) << 4);
    *(byte *)(iVar4 + 0x56) = *(byte *)(iVar4 + 0x56) & 0xf0;
    bVar1 = *(byte *)(param_3 + iVar2 * 8 + 0x55);
    iVar4 = iVar2 * 8 + param_3;
    *(byte *)(iVar4 + 0x55) = bVar1 & 0xfe;
    *(byte *)(iVar4 + 0x55) = bVar1 & 0xe | (byte)(((int)(bVar1 & 0xf0) >> 4 & 0xfffffffeU) << 4);
    iVar4 = iVar6 * 8;
    bVar1 = *(byte *)(param_3 + iVar4 + 0x55);
    iVar4 = iVar4 + param_3;
    *(byte *)(iVar4 + 0x55) = bVar1 & 0xfe;
    *(byte *)(iVar4 + 0x55) = (byte)(((int)(bVar1 & 0xf0) >> 4 & 0xfffffffeU) << 4) | bVar1 & 0xe;
    iVar4 = FUN_ram_00030c24(param_1,uVar5,0);
    if ((((iVar4 == 0) || (iVar4 = FUN_ram_00030c24(param_3,iVar2,0), iVar4 == 0)) ||
        (iVar4 = func_0x00014050(param_1,uVar5,8,0,1), iVar4 != 0)) ||
       (((iVar4 = func_0x00014050(param_1,param_2,uRam008016c5,0,1), iVar4 != 0 ||
         (iVar4 = func_0x00014050(param_3,iVar2,8,0,1), iVar4 != 0)) ||
        (iVar4 = func_0x00014050(param_3,iVar6,uRam008016c5,0,1), iVar4 != 0)))) {
      return 0;
    }
  }
  return 1;
}



/* ==========================================================
 * ram:00030c24  FUN_ram_00030c24  size=376
 * callers: ram:00030a20,ram:00032bc8,ram:00029014,ram:000308fc
 * ========================================================== */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_00030c24(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint auStack_38 [2];
  
  auStack_38[0] = 0;
  auStack_38[1] = 0;
  iVar1 = func_0x00017a48(param_1,param_2,1,4,0xff);
  if (iVar1 != 0) {
    iVar2 = func_0x0000f478(param_1,param_2,1,iVar1,auStack_38,1);
    if ((iVar2 == 0x1000000) && (iVar2 = func_0x0000e264(*param_1,param_1[1]), iVar2 != 0)) {
      iVar3 = (int)(*(byte *)(iVar2 + 9) & 0x70) >> 4;
      if ((param_3 == 0 && (*(uint *)(param_2 * 4 + iVar2 + 0x14) & 0xffffff) == 0x100101) &&
         (((_DAT_ram_008016cc & 0x80) != 0 && (iVar3 == 6)))) {
        FUN_ram_0002c064(iVar2,param_2,0);
        iVar3 = (int)(*(byte *)(iVar2 + 9) & 0x70) >> 4;
      }
      if ((iVar3 != 1) ||
         (iVar2 = func_0x0000f478(param_1,param_2,1,0,auStack_38 + 1,1), iVar2 == 0x1000000)) {
        if (param_3 == 0) {
          auStack_38[0] = auStack_38[0] & 0x7fffffff;
        }
        else {
          auStack_38[0] = auStack_38[0] | 0x80000000;
        }
        iVar1 = func_0x0000f594(param_1,param_2,1,iVar1,auStack_38,1);
        if (iVar1 == 0x1000000) {
          return 1;
        }
      }
    }
  }
  return 0;
}



/* ==========================================================
 * ram:00030d9c  FUN_ram_00030d9c  size=584
 * callers: ram:00031028
 * ========================================================== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00030d9c(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  undefined1 auStack_54 [16];
  byte abStack_44 [4];
  
  iVar7 = 0;
  uVar6 = 0;
  abStack_44[0] = 0xff;
  if (*(char *)(param_1 + 4) != '\x04') {
    return;
  }
  iVar1 = FUN_ram_0002b16c(abStack_44);
  if ((((iVar1 != 0) && (abStack_44[0] < 4)) && (abStack_44[0] != 0 && abStack_44[0] != 3)) &&
     (*(int *)(param_1 + 8) == 5)) {
    iVar7 = param_1 + 0xc;
    uVar2 = *(uint *)(param_1 + 0x1c) & 0xf;
    iVar1 = uVar2 - 0x20;
    bVar8 = uVar2 == 0x20;
    bVar9 = SBORROW4(uVar2,0x20);
    if (uVar2 < 0x21) {
      uVar2 = *(uint *)(param_1 + 0x1c) >> 4 & 0xf;
      iVar1 = uVar2 - 0xf;
      bVar8 = uVar2 == 0xf;
      bVar9 = SBORROW4(uVar2,0xf);
    }
    if ((bVar8 || bVar9 != iVar1 < 0) &&
       (iVar1 = func_0x0000e5a0(), (*(byte *)(iVar1 + 8) & 1) != 0)) {
      uVar5 = *(uint *)(param_1 + 0x1c) >> 4 & 0xf;
      uVar2 = *(uint *)(uVar5 * 4 + iVar1 + 0x14);
      if (((uVar2 & 0xffffff) == 1) &&
         (((*(byte *)(uVar5 * 8 + iVar1 + 0x56) & 0xf) == 0 &&
          (uVar2 = uVar2 >> 0x18, uVar2 != 0xff)))) {
        iVar3 = func_0x0000e5a0(uVar2);
        func_0x00015c80(auStack_54,iVar3,1);
        iVar4 = func_0x00017c14(auStack_54,param_1 + 0xc,0x10);
        if ((((iVar4 == 0) &&
             (uVar2 = func_0x0000e6c0(iVar1,*(uint *)(param_1 + 0x1c) >> 4 & 0xf),
             uVar2 == *(byte *)(param_1 + 0x1d))) && (iVar4 = FUN_ram_00032014(iVar1), iVar4 != 0))
           && (iVar1 = func_0x0001736c(iVar1,*(uint *)(param_1 + 0x1c) >> 4 & 0xf,iVar3,1),
              iVar1 != 0)) {
          uVar2 = (int)(*(byte *)(iVar3 + 9) & 0x70) >> 4;
          if (((5 < uVar2) && ((*(byte *)(iVar3 + 0x13) & 1) != 0)) &&
             ((_DAT_ram_008016cc & 0x10000) == 0)) {
            uVar6 = 2;
          }
          if (((5 < uVar2) && ((*(byte *)(iVar3 + 0x13) & 1) != 0)) &&
             (1 < (*(byte *)(iVar3 + 0xd) & 7))) {
            uVar6 = 2;
          }
        }
        else {
          uVar6 = 1;
        }
        goto LAB_ram_00030f60;
      }
    }
  }
  uVar6 = 1;
LAB_ram_00030f60:
  if (iVar7 == 0) {
    iVar7 = param_1 + 0xc;
  }
  *(undefined2 *)(iVar7 + 0x12) = 0;
  func_0x00019048(0xc,4,uVar6,0,1,iVar7,0x14,0x20);
  func_0x00018ddc();
  func_0x00019c1c(0xfffffff0,0,0x1000);
  return;
}



/* ==========================================================
 * ram:00031028  FUN_ram_00031028  size=1128  [ENTRY/ROOT]
 * ========================================================== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00031028(char *param_1)

{
  undefined1 uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  char cVar9;
  uint uVar10;
  undefined4 uStack_50;
  byte abStack_4c [4];
  char acStack_48 [4];
  uint uStack_44;
  
  abStack_4c[0] = 0xff;
  uVar10 = 1;
  uVar3 = func_0x00014e04();
  uVar4 = func_0x00014e04();
  if ((uVar4 & 2) == 0) {
    uVar10 = 0;
  }
  uVar4 = func_0x00014e68();
  uStack_44 = 0;
  if (*param_1 == '\v') {
    bVar2 = param_1[4];
    if (bVar2 == 1) {
      cVar9 = '\0';
      bVar2 = 0;
      do {
        uVar5 = func_0x0000e5a0(bVar2);
        iVar6 = func_0x00019048(0xc,1,0,cVar9,0xe,uVar5,0xd4,0xe0);
        if (iVar6 == 0) break;
        cVar9 = cVar9 + '\x01';
        bVar2 = bVar2 + 1;
      } while (bVar2 < 0xe);
    }
    else {
      if (bVar2 == 2) {
        FUN_ram_00025960();
        return;
      }
      if (bVar2 == 3) {
        func_0x00018ddc();
        func_0x00019c1c(0xfffffff0,0,0x1000);
        func_0x00017bf4(&uStack_50,0,4);
        uVar5 = uStack_50;
        uStack_50 = CONCAT31(uStack_50._1_3_,0x60);
        if ((_DAT_ram_008016cc & 2) == 0) {
          uStack_50._2_2_ = SUB42(uVar5,2);
          uStack_50 = CONCAT22(uStack_50._2_2_,0xff60);
        }
        else {
          uVar1 = (*(code *)0x10100)(2);
          uStack_50._0_2_ = CONCAT11(uVar1,(undefined1)uStack_50);
        }
        uStack_50 = uStack_50 & 0x7fffff |
                    ((uStack_50 & 0xf0000000 | 0x20000000) >> 0x17 | 0x10) << 0x17;
        iVar6 = FUN_ram_0002b16c(abStack_4c);
        uVar8 = (uint)(iVar6 == 0);
        if (3 < abStack_4c[0]) {
          uVar8 = 1;
        }
        uStack_50._0_3_ = CONCAT12(abStack_4c[0],(undefined2)uStack_50);
        uVar3 = uVar8 | (uVar3 & 1) * 2 | (uVar10 & 0x1f) << 3 | (uVar4 & 0xf) << 4;
        if ((_DAT_ram_008016cc & 0x10000) != 0) {
          uVar3 = uVar3 | 0x20;
        }
        if ((_DAT_ram_008016cc & 0x200000) != 0) {
          iVar6 = func_0x000133dc();
          iVar6 = func_0x00013038(iVar6 + 0xec,&uStack_44,1);
          uVar4 = uVar3 | 0x80;
          if (iVar6 != 0) {
            uVar4 = uVar3 | 0x81;
          }
          uVar3 = uVar4;
          if ((uStack_44 & 8) != 0) {
            uVar3 = uVar3 | 0x40;
          }
        }
        func_0x000149b0(1);
        if (((_DAT_ram_008016cc & 0x200000) != 0) && (iVar6 = func_0x00014b44(), iVar6 == 0)) {
          func_0x00014b68(1);
          bVar2 = func_0x0001542c();
          func_0x00015490(bVar2 | 1);
          if (((_DAT_ram_008016cc & 1) != 0) && (cRam00807bc4 == '\x01')) {
            FUN_ram_00033814();
            cRam00807bc4 = '\0';
          }
          iVar6 = func_0x00023f40();
          FUN_ram_00023f24(0);
          iVar7 = func_0x00014f58();
          func_0x00014f80(0);
          uVar4 = func_0x0001542c();
          func_0x00015490(uVar4 & 0xfd);
          if ((iVar7 != 0) || ((iVar6 != 0 && (abStack_4c[0] == 0)))) {
            func_0x0000e140(2);
          }
          uRam008016e4 = 1;
          func_0x0001736c(0,0,0,6);
        }
        acStack_48[0] = '\0';
        acStack_48[1] = 0;
        acStack_48[2] = 0;
        if ((_DAT_ram_008016cc & 0x20) != 0) {
          (*(code *)((uRam00800442 & 0xfffe) * 2))(2,acStack_48);
        }
        if (acStack_48[0] != '\0') {
          uVar3 = uVar3 | 1;
        }
        func_0x00019048(0xc,3,uVar3,0,1,&uStack_50,4,0x10);
        FUN_ram_000344f4(acStack_48);
        if ((_DAT_ram_008016cc & 2) != 0 && (_DAT_ram_008016cc & 0x1000000) != 0) {
          FUN_ram_00034828(1);
        }
        if ((_DAT_ram_008016cc & 0x800) == 0) {
          return;
        }
        (*(code *)((uRam0080043a & 0xfffe) * 2))();
        return;
      }
      if ((bVar2 < 4) || (9 < bVar2)) {
        if ((bVar2 < 0x10) || (0x17 < bVar2)) {
          if (bVar2 == 10) {
            FUN_ram_00031490(param_1);
          }
          else if (bVar2 == 0xb) {
            FUN_ram_000315f4(param_1);
          }
          else if (bVar2 == 0xc) {
            FUN_ram_00031714(param_1);
          }
          else if (bVar2 == 0xd) {
            FUN_ram_000326b0(param_1);
          }
          else if (bVar2 == 0xe) {
            FUN_ram_00036094(param_1);
          }
          else if (bVar2 == 0x18) {
            FUN_ram_00036ee4(param_1);
          }
        }
        else if ((_DAT_ram_008016cc & 0x20) != 0) {
          FUN_ram_00027ec4(param_1);
          return;
        }
      }
      else if ((_DAT_ram_008016cc & 2) != 0 && (_DAT_ram_008016cc & 0x1000000) != 0) {
        if (bVar2 == 4) {
          FUN_ram_00030d9c(param_1);
          return;
        }
        FUN_ram_00031814(param_1);
        return;
      }
    }
  }
  func_0x00018ddc();
  func_0x00019c1c(0xfffffff0,0,0x1000);
  return;
}



/* ==========================================================
 * ram:00031490  FUN_ram_00031490  size=188
 * callers: ram:00031028
 * ========================================================== */

void FUN_ram_00031490(int param_1)

{
  byte *pbVar1;
  byte bVar2;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  bVar2 = 0;
  uStack_28 = *(undefined4 *)(param_1 + 0xc);
  uStack_24 = 0;
  uStack_20 = 0;
  while (((pbVar1 = (byte *)func_0x0000e5a0(bVar2), (pbVar1[8] & 1) == 0 ||
          ((uStack_28._2_2_ & 7) != (ushort)*pbVar1)) ||
         ((pbVar1[0xd] & 7) != (uStack_28._2_2_ >> 4 & 0xf)))) {
    bVar2 = bVar2 + 1;
    if (0xd < bVar2) {
LAB_ram_00031510:
      func_0x00019048(0xc,10,bVar2 == 0xe,0,1,&uStack_28,0xc,0x18);
      return;
    }
  }
  uStack_24 = *(undefined4 *)(pbVar1 + 4);
  uStack_20 = *(undefined4 *)pbVar1;
  goto LAB_ram_00031510;
}



/* ==========================================================
 * ram:0003154c  FUN_ram_0003154c  size=166
 * callers: ram:00031714,ram:000315f4
 * ========================================================== */

undefined4 FUN_ram_0003154c(uint param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = func_0x0000e5a0(param_1 & 0xf);
    if ((*(byte *)(iVar1 + 8) & 1) == 0) {
      return 0;
    }
    uVar2 = *(uint *)(((param_1 & 0xf0) >> 4) * 4 + iVar1 + 0x14) >> 0x18;
    if (uVar2 == 0xff) {
      return 0;
    }
  }
  iVar1 = func_0x0000e5a0(uVar2);
  *param_2 = iVar1;
  if ((*(byte *)(iVar1 + 8) & 1) == 0) {
    return 0;
  }
  return 1;
}



/* ==========================================================
 * ram:000315f4  FUN_ram_000315f4  size=160
 * callers: ram:00031028
 * ========================================================== */

void FUN_ram_000315f4(int param_1)

{
  int iVar1;
  char *pcStack_3c;
  undefined4 auStack_38 [7];
  
  pcStack_3c = (char *)0x0;
  func_0x00017bf4(auStack_38,0,0x1c);
  auStack_38[0] = *(undefined4 *)(param_1 + 0xc);
  iVar1 = FUN_ram_0003154c(auStack_38[0],&pcStack_3c);
  if (iVar1 != 0) {
    func_0x0000e840(*pcStack_3c != '\x01' && *pcStack_3c != '\x02',0x27474,0,auStack_38);
  }
  func_0x00019048(0xc,0xb,0,0,1,auStack_38,0x1c,0x28);
  return;
}



/* ==========================================================
 * ram:00031694  FUN_ram_00031694  size=126  [ENTRY/ROOT]
 * ========================================================== */

void FUN_ram_00031694(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + param_2 * 4 + 4);
  param_1 = param_2 * 4 + param_1;
  *(uint *)(param_1 + 4) = uVar2 | 1;
  uVar1 = ((int)(*(byte *)(param_3 + param_4 * 8 + 0x58) & 0xe0) >> 5) - 1U & 7;
  uVar2 = uVar2 >> 1;
  *(uint *)(param_1 + 4) = (uVar1 | uVar2 & 0xfffffff8) << 1 | 1;
  *(uint *)(param_1 + 4) =
       uVar1 << 1 | 1 |
       ((uVar2 & 0x7fffffe0) >> 3 | (int)(*(byte *)(param_4 * 8 + param_3 + 0x58) & 0x10) >> 4) << 4
  ;
  return;
}



/* ==========================================================
 * ram:00031714  FUN_ram_00031714  size=212
 * callers: ram:00031028
 * ========================================================== */

void FUN_ram_00031714(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uStack_34;
  
  uStack_34 = 0;
  bVar1 = *(byte *)(param_1 + 0xd);
  uVar5 = *(undefined4 *)(param_1 + 0x10);
  uVar6 = *(undefined4 *)(param_1 + 0x14);
  uVar4 = *(uint *)(param_1 + 0xc);
  iVar2 = FUN_ram_0003154c(*(undefined1 *)(param_1 + 0xe),&uStack_34);
  iVar3 = FUN_ram_00033f78(uStack_34,(bVar1 & 0x3f) + 0x15a,(uVar4 & 0xf) + 1,uVar5,uVar6);
  func_0x00019048(0xc,0xc,iVar3 == 0 || iVar2 == 0,0,1,param_1 + 0xc,0xc,0x18);
  return;
}



/* ==========================================================
 * ram:00031814  FUN_ram_00031814  size=896
 * callers: ram:00031028
 * ========================================================== */

void FUN_ram_00031814(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined1 auStack_98 [16];
  byte abStack_88 [4];
  undefined1 auStack_84 [32];
  undefined1 auStack_64 [32];
  char acStack_44 [4];
  
  iVar6 = 0;
  iVar8 = 0;
  uVar7 = 0;
  abStack_88[0] = 0xff;
  uVar9 = 0;
  acStack_44[0] = '\0';
  uVar10 = 0;
  uVar11 = 0;
  if (*(char *)(param_1 + 4) != '\x06') {
    if (*(char *)(param_1 + 4) != '\x05') {
      return;
    }
    iVar6 = FUN_ram_0002b16c(abStack_88);
    if ((((iVar6 == 0) || (3 < abStack_88[0])) || (abStack_88[0] == 0 || abStack_88[0] == 3)) ||
       (*(int *)(param_1 + 8) != 0xd)) {
LAB_ram_000319f8:
      uVar7 = 1;
    }
    else {
      iVar8 = param_1 + 0xc;
      if (((0x20 < (*(uint *)(param_1 + 0x1c) & 0xf)) ||
          (0xf < (*(uint *)(param_1 + 0x1c) >> 4 & 0xf))) ||
         ((iVar6 = func_0x0000e5a0(), (*(byte *)(iVar6 + 8) & 1) == 0 ||
          ((uVar3 = *(uint *)((*(uint *)(param_1 + 0x1c) >> 4 & 0xf) * 4 + iVar6 + 0x14),
           (uVar3 & 0xffffff) != 1 || (uVar3 = uVar3 >> 0x18, uVar3 == 0xff))))))
      goto LAB_ram_000319f8;
      uVar2 = func_0x0000e5a0(uVar3);
      func_0x00015c80(auStack_98,uVar2,1);
      iVar1 = func_0x00017c14(auStack_98,param_1 + 0xc,0x10);
      if ((iVar1 == 0) &&
         (uVar3 = func_0x0000e6c0(iVar6,*(uint *)(param_1 + 0x1c) >> 4 & 0xf),
         uVar3 == *(byte *)(param_1 + 0x1d))) {
        func_0x00017b54(auStack_84,param_1 + 0x20,8);
        uVar4 = func_0x0000e5a0(0);
        func_0x00015c80(auStack_64,uVar4,1);
        iVar6 = FUN_ram_00037270(3,0xc,8,auStack_84,uVar2,acStack_44);
        if (iVar6 == 0) goto LAB_ram_00031aa4;
      }
      else {
LAB_ram_00031aa4:
        uVar7 = 1;
      }
    }
    iVar6 = iVar8;
    if (iVar8 == 0) {
      iVar6 = param_1 + 0xc;
    }
    *(undefined2 *)(iVar6 + 0x12) = 0;
    func_0x00017b54(iVar6 + 0x34,auStack_84,8);
    if (uVar7 != 0) {
      uVar10 = (uint)(acStack_44[0] == '\x05') * 2 | uVar7;
    }
    uVar7 = uVar10;
    uVar2 = 5;
    uVar4 = 0x54;
    uVar5 = 0x60;
    uVar10 = uVar7;
    goto LAB_ram_00031b38;
  }
  iVar8 = FUN_ram_0002b16c(abStack_88);
  if ((((iVar8 == 0) || (3 < abStack_88[0])) || (abStack_88[0] == 0 || abStack_88[0] == 3)) ||
     (*(int *)(param_1 + 8) != 0xd)) {
LAB_ram_000318b0:
    uVar7 = 1;
  }
  else {
    iVar6 = param_1 + 0xc;
    if (((0x20 < (*(uint *)(param_1 + 0x1c) & 0xf)) ||
        (0xf < (*(uint *)(param_1 + 0x1c) >> 4 & 0xf))) ||
       ((iVar8 = func_0x0000e5a0(), (*(byte *)(iVar8 + 8) & 1) == 0 ||
        ((uVar3 = *(uint *)((*(uint *)(param_1 + 0x1c) >> 4 & 0xf) * 4 + iVar8 + 0x14),
         (uVar3 & 0xffffff) != 1 || (uVar3 = uVar3 >> 0x18, uVar3 == 0xff))))))
    goto LAB_ram_000318b0;
    uVar2 = func_0x0000e5a0(uVar3);
    func_0x00015c80(auStack_98,uVar2,1);
    iVar1 = func_0x00017c14(auStack_98,param_1 + 0xc,0x10);
    if ((iVar1 == 0) &&
       (uVar3 = func_0x0000e6c0(iVar8,*(uint *)(param_1 + 0x1c) >> 4 & 0xf),
       uVar3 == *(byte *)(param_1 + 0x1d))) {
      func_0x00017b54(auStack_84,param_1 + 0x20,8);
      uVar4 = func_0x0000e5a0(0);
      func_0x00015c80(auStack_64,uVar4,1);
      iVar8 = FUN_ram_00037270(5,0xc,0,auStack_84,uVar2,acStack_44);
      if (iVar8 == 0) goto LAB_ram_0003195c;
    }
    else {
LAB_ram_0003195c:
      uVar7 = 1;
    }
  }
  if (iVar6 == 0) {
    iVar6 = param_1 + 0xc;
  }
  *(undefined2 *)(iVar6 + 0x12) = 0;
  uVar2 = 6;
  uVar4 = 0x14;
  uVar5 = 0x20;
LAB_ram_00031b38:
  func_0x00019048(0xc,uVar2,uVar7,0,1,iVar6,uVar4,uVar5,uVar9,uVar10,uVar11);
  func_0x00018ddc();
  func_0x00019c1c(0xfffffff0,0,0x1000);
  return;
}



/* ==========================================================
 * ram:00031b94  FUN_ram_00031b94  size=114
 * callers: ram:0002a4d0
 * ========================================================== */

undefined4 FUN_ram_00031b94(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = func_0x0000e5a0();
  if (param_1 == 0) {
    uVar3 = 0x100101;
  }
  else {
    uVar3 = 0x100102;
  }
  uVar4 = 0;
  uVar2 = *(byte *)(iVar1 + 9) & 0xf;
  if (uVar2 != 0xffffffff) {
    do {
      if (uVar3 == (*(uint *)(uVar4 * 4 + iVar1 + 0x14) & 0xffffff)) {
        return 1;
      }
      uVar4 = uVar4 + 1 & 0xff;
    } while (uVar4 < uVar2 + 1);
  }
  return 0;
}



/* ==========================================================
 * ram:00031c08  FUN_ram_00031c08  size=128
 * callers: ram:00034828
 * ========================================================== */

void FUN_ram_00031c08(void)

{
  int iVar1;
  byte abStack_1c [4];
  
  abStack_1c[0] = 0xff;
  iVar1 = FUN_ram_0002b16c(abStack_1c);
  if ((iVar1 != 0) && (abStack_1c[0] < 4)) {
    func_0x0000e840(0,0x27a24,&UNK_ram_00027a74,abStack_1c);
    func_0x0000e840(1,0x27a24,&UNK_ram_00027a74,abStack_1c);
  }
  return;
}



/* ==========================================================
 * ram:00031e54  FUN_ram_00031e54  size=306
 * callers: ram:0002d630
 * ========================================================== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_00031e54(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  if (((param_1 & 0xfff) == 0) &&
     (((_DAT_ram_008016cc & 0x40000000) == 0 || (iVar1 = func_0x00012a04(), iVar1 == 0)))) {
    iVar1 = func_0x00012d68(0);
    if ((iVar1 == 0) || (iVar1 = func_0x00013400(0), iVar1 == 0)) {
LAB_ram_00031f3c:
      uVar3 = 1;
    }
    else {
      uVar5 = 0;
      do {
        iVar4 = 0;
        iVar1 = 0x1f;
        do {
          iVar2 = uVar5 * 0x10 + iVar4;
          iVar4 = iVar4 + 1;
          iVar2 = func_0x00010150(0,2,iVar1 + 0x400U & 0xffff,*(undefined4 *)(param_2 + iVar2 * 4));
          if (iVar2 == 0) goto LAB_ram_00031f3c;
          iVar1 = iVar1 + -1;
        } while (0xf < iVar1);
        iVar1 = func_0x000128c8(uVar5 * 0x40 + param_1,0x40);
        if (iVar1 != 0) goto LAB_ram_00031f3c;
        uVar5 = uVar5 + 1;
      } while (uVar5 < 0x40);
    }
  }
  else {
    uVar3 = 1;
  }
  func_0x00013400(1);
  func_0x00012e58(0);
  return uVar3;
}



/* ==========================================================
 * ram:00032014  FUN_ram_00032014  size=190
 * callers: ram:00030d9c,ram:0002a08c
 * ========================================================== */

undefined4 FUN_ram_00032014(int param_1)

{
  byte bVar1;
  uint uVar2;
  
  do {
    bVar1 = *(byte *)(param_1 + 0xb);
    if (bVar1 == 0) {
      return 1;
    }
    param_1 = func_0x0000e5a0(*(uint *)(param_1 + ((int)(*(byte *)(param_1 + 8) & 0xfe) >> 1) * 4 +
                                       0x14) >> 0x18);
    uVar2 = 1;
    do {
      if (((*(uint *)(uVar2 * 4 + param_1 + 0x14) >> 0x18 == (uint)bVar1) &&
          ((*(byte *)(param_1 + uVar2 * 8 + 0x57) & 3) == 0)) &&
         ((*(byte *)(uVar2 * 8 + param_1 + 0x56) & 0xf) == 0)) {
        return 0;
      }
      uVar2 = uVar2 + 1 & 0xff;
    } while (uVar2 < 5);
  } while( true );
}



/* ==========================================================
 * ram:000320d4  FUN_ram_000320d4  size=354
 * callers: ram:0002e014
 * ========================================================== */

void FUN_ram_000320d4(undefined4 *param_1,int param_2,char param_3,int param_4,undefined4 *param_5)

{
  byte bVar1;
  undefined4 uVar2;
  char cVar3;
  
  if (param_2 == 0x1513) {
    cVar3 = '\x01';
  }
  else if (param_2 == 0x151b || param_2 == 0x151a) {
    cVar3 = '\0';
  }
  else if (param_2 == 0x1549) {
    cVar3 = '\x02';
  }
  else if (param_2 == 0x1547 || param_2 == 0x1548) {
    cVar3 = '\x03';
  }
  else if (param_2 == 0x1569 || param_2 == 0x1567) {
    cVar3 = '\x04';
  }
  else if (param_2 == 0x156b || param_2 == 0x156d) {
    cVar3 = '\x05';
  }
  else if (((param_2 == 0x1575 || param_2 == 0x1576) || param_2 == 0x1577) || param_2 == 0x1578) {
    cVar3 = '\x06';
  }
  else if ((((((param_2 == 0x15bf || param_2 == 0x15c0) || param_2 == 0x15d2) || param_2 == 0x15d3)
            || param_2 == 0x15d9) || param_2 == 0x15da) ||
          ((((param_2 != 0x15e7 && param_2 != 0x15e8) && param_2 != 0x15ea) && param_2 != 0x15eb) &&
           param_2 != 0x15ef)) {
    cVar3 = '\a';
  }
  else {
    cVar3 = '\a';
    *(byte *)((int)param_1 + 0xf) = *(byte *)((int)param_1 + 0xf) & 0xdf | 0x20;
  }
  bVar1 = *(byte *)((int)param_1 + 9);
  *(byte *)((int)param_1 + 9) = cVar3 << 4 | bVar1 & 0x8f;
  *(byte *)((int)param_1 + 9) =
       (char)param_4 * (0xe >= param_4) + (0xe < param_4) * '\x0f' | cVar3 << 4 | bVar1 & 0x80;
  *(byte *)(param_1 + 2) = param_3 * '\x02' | *(byte *)(param_1 + 2) & 1;
  uVar2 = param_5[1];
  *param_1 = *param_5;
  param_1[1] = uVar2;
  return;
}



/* ==========================================================
 * ram:00032570  FUN_ram_00032570  size=320
 * callers: ram:0002b510
 * ========================================================== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_00032570(void)

{
  char cVar1;
  char cVar2;
  int iVar3;
  
  func_0x00033094();
  uRam00807bca = 1;
  FUN_ram_00023cf8();
  iVar3 = func_0x00012b5c();
  if ((iVar3 == 0) || (iVar3 = func_0x00012c70(iRam00800488), iVar3 == 0)) {
    return 0;
  }
  if ((_DAT_ram_008016cc & 0x10000000) != 0) {
    cVar1 = func_0x00017c14(iRam00800488 + 0x804,0x807c04,0xe4);
    cVar2 = func_0x00017c14(iRam00800488 + 0xa94,0x807bcc,0x38);
    if (cVar1 == '\0' && cVar2 == '\0') {
      return 1;
    }
  }
  func_0x00017ba4(iRam00800488 + 0x804,0x807c04,0xe4);
  if ((_DAT_ram_008016cc & 0x80000000) != 0) {
    func_0x00017ba4(iRam00800488 + 0xa94,0x807bcc,0x38);
  }
  iVar3 = func_0x00012cb8(iRam00800488);
  if (iVar3 != 0) {
    return 1;
  }
  return 0;
}



/* ==========================================================
 * ram:000326b0  FUN_ram_000326b0  size=184
 * callers: ram:00031028
 * ========================================================== */

void FUN_ram_000326b0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  uStack_2c = *(undefined4 *)(param_1 + 0xc);
  uStack_28 = *(undefined4 *)(param_1 + 0x10);
  uStack_24 = uStack_2c;
  uStack_20 = uStack_28;
  func_0x0001585c(&uStack_24,auStack_30,1);
  uVar1 = func_0x0000e264(uStack_24,uStack_20);
  iVar2 = FUN_ram_00034f24(uVar1,auStack_30[0]);
  func_0x00019048(0xc,0xd,iVar2 == 0,0,1,&uStack_2c,8,0x14);
  func_0x00018ddc();
  func_0x00019c1c(0xfffffff0,0,0x1000);
  return;
}



/* ==========================================================
 * ram:00032814  FUN_ram_00032814  size=50  [ENTRY/ROOT]
 * ========================================================== */

void FUN_ram_00032814(void)

{
  func_0x0000e840(0,0x2aca0,0,0);
  func_0x0000e840(1,0x2aca0,0,0);
  return;
}



/* ==========================================================
 * ram:00032848  FUN_ram_00032848  size=316
 * callers: ram:00032bc8
 * ========================================================== */

undefined8 FUN_ram_00032848(undefined4 *param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte abStack_40 [4];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar4 = 0;
  uVar3 = 0;
  uStack_3c = *param_1;
  uStack_38 = param_1[1];
  uStack_28 = 0;
  do {
    abStack_40[uVar4] = 0;
    uVar4 = uVar4 + 1 & 0xff;
  } while (uVar4 < 4);
  uStack_34 = (undefined1)param_2;
  uStack_30 = uStack_3c;
  uStack_2c = uStack_38;
  func_0x0001395c(&uStack_3c,&uStack_30,&uStack_28);
  iVar2 = func_0x0000e264(uStack_30,uStack_2c);
  if (iVar2 != 0) {
    uVar5 = 0;
    bVar1 = *(byte *)((int)param_1 + 9);
    uVar4 = bVar1 & 0xf;
    if (uVar4 != 0xffffffff) {
      do {
        if ((param_1[uVar5 + 5] & 0xffffff) == 0x100101) {
          if (3 < uVar3) break;
          abStack_40[uVar3] = (byte)uVar5;
          uVar3 = uVar3 + 1 & 0xff;
        }
        uVar5 = uVar5 + 1 & 0xff;
      } while (uVar5 < uVar4 + 1);
    }
    if ((uint)((int)(bVar1 & 0x70) >> 4) < 6) {
      uVar3 = ((param_2 & 1) + param_2) - 2;
    }
    else {
      uVar3 = (int)(param_2 - 1) >> 1;
    }
    uVar3 = (uint)abStack_40[uVar3 & 0xff];
    if ((uVar3 != 0) && ((*(byte *)((int)param_1 + uVar3 * 8 + 0x55) & 1) == 0))
    goto LAB_ram_00032960;
  }
  uVar3 = 0;
LAB_ram_00032960:
  return CONCAT44(iVar2,uVar3);
}



/* ==========================================================
 * ram:00032984  FUN_ram_00032984  size=90
 * callers: ram:00032bc8
 * ========================================================== */

uint FUN_ram_00032984(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  uVar1 = *(byte *)(param_1 + 9) & 0xf;
  if (uVar1 != 0xffffffff) {
    do {
      if (((*(uint *)(uVar2 * 4 + param_1 + 0x14) & 0xffffff) == 0x100101) &&
         ((*(byte *)(uVar2 * 8 + param_1 + 0x55) & 1) == 0)) {
        return uVar2;
      }
      uVar2 = uVar2 + 1 & 0xff;
    } while (uVar2 < uVar1 + 1);
  }
  return 0;
}



/* ==========================================================
 * ram:000329e0  FUN_ram_000329e0  size=486
 * callers: ram:00032bc8
 * ========================================================== */

undefined4 FUN_ram_000329e0(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  undefined *puVar5;
  byte bVar6;
  uint uVar7;
  
  uVar4 = (int)(*(byte *)(param_3 + 9) & 0x70) >> 4;
  uVar7 = (int)(*(byte *)((int)param_1 + 9) & 0x70) >> 4;
  puVar5 = &UNK_ram_00030004;
  if (6 < uVar7) {
    uVar7 = uVar4;
  }
  if (6 < uVar7) {
    if (*param_1 == 0 && param_1[1] == 0) {
      iVar2 = 2;
    }
    else {
      if ((int)(*(byte *)((int)param_1 + 0x12) & 0x20) >> 5 == 0) {
        return 1;
      }
      iVar2 = (*(byte *)((int)param_1 + 0x12) & 0x1f) + 1;
    }
    iVar1 = func_0x0001b7ec(param_1,0x144,iVar2,0x3800);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = func_0x0001b7ec(param_1,0x157,iVar2,0xd050808);
    if (iVar1 == 0) {
      return 0;
    }
    iVar2 = func_0x0001b7ec(param_1,0x158,iVar2,0x81fe0011);
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = func_0x0001b7ec(param_3,0x144,0,0x40003800);
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = func_0x0001b7ec(param_3,0x157,0,0x5050808);
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = func_0x0001b7ec(param_3,0x158,0,0x81fe0011);
    if (iVar2 == 0) {
      return 0;
    }
  }
  if ((6 < uVar4) && ((int)(*(byte *)(param_3 + 0x12) & 0x40) >> 6 != 0)) {
    bVar6 = 0;
    do {
      iVar2 = FUN_ram_00033ca0(param_3,bVar6);
      bVar3 = bVar6 + 1;
      if (iVar2 == 1) {
        iVar2 = FUN_ram_0002be7c(param_3,bVar6);
        puVar5 = (undefined *)((uint)puVar5 | iVar2 << 0x14);
        iVar2 = func_0x0001b7ec(param_3,0x159,bVar3,puVar5);
        if (iVar2 == 0) break;
      }
      bVar6 = bVar3;
    } while (bVar3 < 4);
    if (bVar6 != 4) {
      return 0;
    }
  }
  return 1;
}



/* ==========================================================
 * ram:00032bc8  FUN_ram_00032bc8  size=992  [ENTRY/ROOT]
 * ========================================================== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_00032bc8(int *param_1,int param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  int iVar10;
  int *piVar11;
  undefined4 uStack_64;
  undefined1 auStack_54 [8];
  uint uStack_4c;
  undefined1 auStack_48 [5];
  char cStack_43;
  
  uStack_64 = 0;
  uVar3 = func_0x00016938(0);
  puVar4 = (undefined1 *)func_0x00016938(1);
  func_0x00017ba4(auStack_48,puVar4,6);
  cStack_43 = cStack_43 * '\x02';
  puVar9 = auStack_54;
  func_0x00017bf4(puVar9,0,0xc);
  if ((*param_1 != 0 || param_1[1] != 0) || (iVar5 = FUN_ram_00032848(param_1,param_2), iVar5 == 0))
  {
    iVar5 = FUN_ram_00032984(param_1);
  }
  if (iVar5 != 0) {
    iVar10 = (int)(*(byte *)(param_3 + 8) & 0xfe) >> 1;
    iVar6 = func_0x00013f04(param_3);
    if (((iVar6 != 0) &&
        (((_DAT_ram_008016cc & 1) == 0 ||
         ((((((uint)((int)(*(byte *)(param_3 + 9) & 0x70) >> 4) < 7 ||
             ((int)(*(byte *)(param_3 + 0x12) & 0x20) >> 5 != 0)) ||
            (iVar7 = FUN_ram_00035cf4(param_3,puVar9,1), iVar7 != 0)) &&
           (((_DAT_ram_008016cc & 0x400000) == 0 || (iVar7 = FUN_ram_00034690(param_3), iVar7 != 0))
           )) && (iVar7 = FUN_ram_0003556c(param_1,iVar5), iVar7 != 0)))))) &&
       (iVar7 = func_0x00013f64(param_1,iVar5,8,param_2,uRam008016c5,uVar3,1), iVar7 == 0)) {
      iVar7 = iVar10 * 8 + param_3;
      puVar9 = puVar4;
      if ((int)(*(byte *)(param_3 + iVar10 * 8 + 0x58) & 0x10) >> 4 == 1) {
        puVar9 = auStack_48;
      }
      iVar8 = func_0x00013f64(param_3,iVar10,uRam008016c5,iVar6,8,puVar9,1);
      if ((iVar8 == 0) &&
         (iVar10 = func_0x00013f64(param_3,iVar6,8,iVar10,uRam008016c5,uVar3,1), iVar10 == 0)) {
        piVar11 = param_1 + param_2 * 2;
        if ((int)(*(byte *)(param_1 + param_2 * 2 + 0x16) & 0x10) >> 4 == 1) {
          puVar4 = auStack_48;
        }
        iVar10 = func_0x00013f64(param_1,param_2,uRam008016c5,iVar5,8,puVar4,1);
        if (((((iVar10 == 0) && (iVar10 = FUN_ram_00030c24(param_3,iVar6,1), iVar10 != 0)) &&
             (iVar10 = FUN_ram_00030c24(param_1,iVar5,1), iVar10 != 0)) &&
            (((_DAT_ram_008016cc & 1) == 0 ||
             (((func_0x00019c68(0x28), (_DAT_ram_008016cc & 0x400000) == 0 ||
               (iVar10 = FUN_ram_00034690(param_3), iVar10 != 0)) &&
              ((((uStack_4c & 2) == 0 && ((int)(*(byte *)(param_3 + 0x12) & 0x20) >> 5 == 0)) ||
               (iVar10 = FUN_ram_000329e0(param_1,iVar5,param_3), iVar10 != 0)))))))) &&
           (((_DAT_ram_008016cc & 0x40000) == 0 || (iVar10 = FUN_ram_00036814(param_3), iVar10 != 0)
            ))) {
          iVar10 = iVar5 * 8;
          bVar1 = *(byte *)((int)param_1 + iVar10 + 0x55);
          bVar2 = bVar1 & 0xf | 1;
          *(byte *)((int)param_1 + iVar10 + 0x55) = bVar1 & 0xf0 | bVar2;
          *(byte *)((int)param_1 + iVar10 + 0x55) =
               bVar2 | (byte)(((int)(bVar1 & 0xf0) >> 4 | 1U) << 4);
          bVar1 = *(byte *)((int)piVar11 + 0x55);
          bVar2 = bVar1 & 0xf | 1;
          *(byte *)((int)piVar11 + 0x55) = bVar1 & 0xf0 | bVar2;
          *(byte *)((int)piVar11 + 0x55) = bVar2 | (byte)(((int)(bVar1 & 0xf0) >> 4 | 1U) << 4);
          *(byte *)((int)piVar11 + 0x56) = *(byte *)((int)piVar11 + 0x56) & 0xf0 | (byte)iVar5;
          bVar1 = *(byte *)(param_3 + iVar6 * 8 + 0x55);
          param_3 = iVar6 * 8 + param_3;
          bVar2 = bVar1 & 0xf | 1;
          *(byte *)(param_3 + 0x55) = bVar2 | bVar1 & 0xf0;
          *(byte *)(param_3 + 0x55) = bVar2 | (byte)(((int)(bVar1 & 0xf0) >> 4 | 1U) << 4);
          bVar1 = *(byte *)(iVar7 + 0x55);
          bVar2 = bVar1 & 0xf | 1;
          *(byte *)(iVar7 + 0x55) = bVar1 & 0xf0 | bVar2;
          *(byte *)(iVar7 + 0x55) = (byte)(((int)(bVar1 & 0xf0) >> 4 | 1U) << 4) | bVar2;
          uStack_64 = 1;
        }
      }
    }
  }
  return uStack_64;
}



/* ==========================================================
 * ram:00033014  FUN_ram_00033014  size=126
 * callers: ram:00036e0c
 * ========================================================== */

undefined4 FUN_ram_00033014(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    iVar1 = uVar3 * 8;
    iVar2 = *(int *)(iRam00807ce8 + iVar1 + 4);
    if (*(int *)(iRam00807ce8 + iVar1) == 0 && iVar2 == 0) {
      return 0;
    }
    if (*(int *)(iRam00807ce8 + iVar1) == -1 && iVar2 == 0) {
      return 0;
    }
    iVar1 = func_0x00017c14(param_1,iVar1 + iRam00807ce8,8);
    if (iVar1 == 0) {
      return 1;
    }
    uVar3 = uVar3 + 1 & 0xff;
  } while (uVar3 < 0x10);
  return 0;
}



/* ==========================================================
 * ram:000330a4  FUN_ram_000330a4  size=938  [ENTRY/ROOT]
 * ========================================================== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_000330a4(int *param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  undefined4 uVar6;
  char cStack_38;
  char cStack_37;
  char cStack_36;
  char cStack_35;
  undefined2 uStack_34;
  undefined2 uStack_32;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  
  cStack_38 = '\0';
  cStack_37 = '\0';
  cStack_36 = '\0';
  cStack_35 = '\0';
  if (param_2 == 0) {
    uVar6 = 0x7fffffff;
  }
  else {
    uVar6 = 0x80000000;
  }
  bVar1 = false;
  uStack_34 = 0;
  uStack_32 = 0;
  uStack_30 = 0;
  uStack_2e = 0;
  if ((uint)((int)(*(byte *)((int)param_1 + 9) & 0x70) >> 4) < 6) {
    return 1;
  }
  iVar2 = FUN_ram_0002accc(param_1,0,&uStack_34,&uStack_30);
  if (iVar2 == 0) {
    return 1;
  }
  iVar2 = FUN_ram_0002accc(param_1,1,&uStack_32,&uStack_2e);
  if (iVar2 == 0) {
    return 1;
  }
  iVar2 = FUN_ram_0002b014(param_1,uStack_34,uStack_30,&cStack_38,&cStack_36);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = FUN_ram_0002b014(param_1,uStack_32,uStack_2e,&cStack_37,&cStack_35);
  if (iVar2 == 0) {
    return 0;
  }
  if (param_2 == 1) {
    if ((cStack_38 != '\0') && (cStack_36 == '\0')) {
      iVar2 = func_0x00010234(param_1,0,2,uStack_30,uVar6,0x80000000);
      if (iVar2 == 0) {
        return 0;
      }
      bVar1 = true;
    }
    if ((cStack_37 != '\0') && (cStack_35 == '\0')) {
      iVar2 = func_0x00010234(param_1,0,2,uStack_2e,uVar6,0x80000000);
      if (iVar2 == 0) {
        return 0;
      }
      bVar1 = true;
    }
    if (bVar1) {
      if ((*param_1 != 0 || param_1[1] != 0) &&
         (iVar3 = func_0x00013f04(param_1), (*(byte *)((int)param_1 + iVar3 * 8 + 0x55) & 1) == 0))
      {
        return iVar2;
      }
      iVar3 = FUN_ram_0002ad3c(param_1);
      if (iVar3 != 0) {
        func_0x00010234(param_1,0,2,uStack_30,0x7fffffff,0x80000000);
        func_0x00010234(param_1,0,2,uStack_2e,0x7fffffff,0x80000000);
        bVar1 = false;
        iVar2 = 0;
      }
    }
  }
  else {
    if (((cStack_38 == '\0') || (param_3 != 0)) && (cStack_36 != '\0')) {
      iVar2 = func_0x00010234(param_1,0,2,uStack_30,uVar6,0x80000000);
      if (iVar2 == 0) {
        return 0;
      }
      iVar3 = func_0x0001b8f8(param_1,0,0x9e);
      if (iVar3 == 0) {
        return iVar2;
      }
      iVar2 = func_0x00010234(param_1,0,2,iVar3,0,1);
      if (iVar2 == 0) {
        return 0;
      }
      bVar1 = true;
    }
    if (((cStack_37 == '\0') || (param_3 != 0)) && (cStack_35 != '\0')) {
      iVar2 = func_0x00010234(param_1,0,2,uStack_2e,uVar6,0x80000000);
      if (iVar2 == 0) {
        return 0;
      }
      iVar3 = func_0x0001b8f8(param_1,1,0x9e);
      if (iVar3 == 0) {
        return iVar2;
      }
      iVar2 = func_0x00010234(param_1,0,2,iVar3,0,1);
      if (iVar2 == 0) {
        return 0;
      }
      bVar1 = true;
    }
    uVar4 = (int)(*(byte *)((int)param_1 + 9) & 0x70) >> 4;
    if (((_DAT_ram_008016cc & 0x80) == 0) || (uVar4 != 6)) goto LAB_ram_00033358;
    FUN_ram_0002c064(param_1,0,1);
  }
  uVar4 = (int)(*(byte *)((int)param_1 + 9) & 0x70) >> 4;
LAB_ram_00033358:
  if (bVar1) {
    if (((6 < uVar4) && ((_DAT_ram_008016cc & 1) != 0)) && (*param_1 != 0 || param_1[1] != 0)) {
      if (param_2 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = 0x130004;
      }
      iVar2 = FUN_ram_000348f0(param_1,uVar6);
    }
    *(byte *)((int)param_1 + 0xf) = (byte)(param_2 << 4) | *(byte *)((int)param_1 + 0xf) & 0xef;
  }
  else {
    iVar2 = 0;
    if ((((6 < uVar4) && ((_DAT_ram_008016cc & 1) != 0)) &&
        ((cStack_36 != '\0' || (cStack_35 != '\0')))) && (*param_1 != 0 || param_1[1] != 0)) {
      FUN_ram_000348f0(param_1,0x130004);
    }
    cVar5 = '\0';
    if ((cStack_36 != '\0') || (cStack_35 != '\0')) {
      cVar5 = '\x01';
    }
    *(byte *)((int)param_1 + 0xf) = *(byte *)((int)param_1 + 0xf) & 0xef | cVar5 << 4;
  }
  return iVar2;
}



/* ==========================================================
 * ram:00033450  FUN_ram_00033450  size=260
 * callers: ram:0002f658
 * ========================================================== */

undefined4
FUN_ram_00033450(int param_1,undefined1 param_2,int param_3,byte *param_4,ushort *param_5,
                undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  byte abStack_38 [4];
  
  abStack_38[0] = 0;
  iVar1 = func_0x000116e4(param_6,(uint)*param_5 + param_1,abStack_38);
  if (iVar1 == 0) {
    uVar5 = (uint)abStack_38[0];
    bVar3 = *param_4;
    *(byte *)(param_3 + (uint)bVar3) = abStack_38[0];
    uVar4 = bVar3 + 1;
    bVar3 = (byte)uVar4;
    *param_4 = bVar3;
    *(undefined1 *)(param_3 + (uVar4 & 0xff)) = param_2;
    *param_4 = bVar3 + 1;
    uVar4 = 2;
    if (2 < uVar5) {
      do {
        iVar1 = func_0x000116e4(param_6,(uint)*param_5 + param_1 + uVar4,abStack_38);
        if (iVar1 != 0) goto LAB_ram_0003351c;
        bVar3 = *param_4;
        *(byte *)(param_3 + (uint)bVar3) = abStack_38[0];
        *param_4 = bVar3 + 1;
        uVar4 = uVar4 + 1 & 0xff;
      } while (uVar4 < uVar5);
    }
    uVar2 = 1;
  }
  else {
LAB_ram_0003351c:
    uVar2 = 0;
  }
  return uVar2;
}



/* ==========================================================
 * ram:00033554  FUN_ram_00033554  size=664
 * callers: ram:0002f658
 * ========================================================== */

undefined4 FUN_ram_00033554(int param_1,byte *param_2,ushort *param_3,undefined4 *param_4)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined2 uStack_40;
  undefined1 auStack_3e [2];
  int iStack_3c;
  uint uStack_38;
  
  uStack_40 = 0;
  auStack_3e[0] = 0;
  iStack_3c = 0;
  uStack_38 = 0;
  bVar2 = *param_2;
  *(undefined1 *)(param_1 + (uint)bVar2) = 8;
  uVar3 = bVar2 + 1;
  uVar4 = uVar3 & 0xff;
  *param_2 = (byte)uVar3;
  *(undefined1 *)(param_1 + uVar4) = 0x10;
  uVar4 = uVar4 + 1;
  uVar3 = uVar4 & 0xff;
  *param_2 = (byte)uVar4;
  if ((param_3[4] & 2) == 0) {
    *(undefined1 *)(param_1 + uVar3) = 0;
    uVar3 = uVar3 + 1;
    uVar4 = uVar3 & 0xff;
    *param_2 = (byte)uVar3;
    *(undefined1 *)(param_1 + uVar4) = 0;
    uVar4 = uVar4 + 1;
    uVar3 = uVar4 & 0xff;
    *param_2 = (byte)uVar4;
    *(undefined1 *)(param_1 + uVar3) = 0;
    uVar3 = uVar3 + 1;
    uVar4 = uVar3 & 0xff;
    *param_2 = (byte)uVar3;
    *(undefined1 *)(param_1 + uVar4) = 0;
  }
  else {
    iVar1 = func_0x00011804(param_4,*param_3 + 0x10,&uStack_40);
    if (iVar1 != 0) {
      return 0;
    }
    bVar2 = *param_2;
    *(char *)(param_1 + (uint)bVar2) = (char)uStack_40;
    uVar3 = bVar2 + 1;
    bVar2 = (byte)uVar3;
    *param_2 = bVar2;
    *(char *)(param_1 + (uVar3 & 0xff)) = (char)((ushort)uStack_40 >> 8);
    *param_2 = bVar2 + 1;
    iVar1 = func_0x00011804(param_4,*param_3 + 0x12,&uStack_40);
    if (iVar1 != 0) {
      return 0;
    }
    bVar2 = *param_2;
    *(char *)(param_1 + (uint)bVar2) = (char)uStack_40;
    uVar3 = bVar2 + 1;
    uVar4 = uVar3 & 0xff;
    *param_2 = (byte)uVar3;
    *(char *)(param_1 + uVar4) = (char)((ushort)uStack_40 >> 8);
  }
  *param_2 = (char)uVar4 + 1;
  iVar1 = FUN_ram_0002f5e0(param_4,&iStack_3c);
  if (((iVar1 == 0) && (iStack_3c != 0)) &&
     (iVar1 = func_0x000116e4(param_4,iStack_3c + 0x124,auStack_3e), iVar1 == 0)) {
    bVar2 = *param_2;
    *(undefined1 *)(param_1 + (uint)bVar2) = auStack_3e[0];
    uVar3 = bVar2 + 1;
    *param_2 = (byte)uVar3;
    *(undefined1 *)(param_1 + (uVar3 & 0xff)) = 0;
    iVar1 = func_0x0000f478(param_4,0,2,0x1a0,&uStack_38,1);
    if (iVar1 == 0x1000000) {
      if ((uStack_38 & 0x1000000) != 0) {
        *(byte *)(param_1 + (uint)*param_2) = *(byte *)(param_1 + (uint)*param_2) | 1;
      }
      iVar1 = func_0x0000e528(*param_4,param_4[1]);
      if ((iVar1 != 0xff) && (iVar1 = func_0x0000e5a0(), iVar1 != 0)) {
        bVar2 = *param_2;
        if ((5 < (uint)((int)(*(byte *)(iVar1 + 9) & 0x70) >> 4)) &&
           ((*(byte *)(iVar1 + 0x13) & 1) != 0)) {
          *(byte *)(param_1 + (uint)bVar2) = *(byte *)(param_1 + (uint)bVar2) | 2;
          bVar2 = *param_2;
        }
        *param_2 = bVar2 + 1;
        return 1;
      }
    }
  }
  return 0;
}



/* ==========================================================
 * ram:00033814  FUN_ram_00033814  size=92
 * callers: ram:00031028
 * ========================================================== */

void FUN_ram_00033814(void)

{
  undefined1 auStack_18 [4];
  
  auStack_18[0] = 0;
  func_0x0000e840(0,0x226e8,0x22768,auStack_18);
  auStack_18[0] = 1;
  func_0x0000e840(1,0x226e8,0x22768,auStack_18);
  return;
}



/* ==========================================================
 * ram:00033870  FUN_ram_00033870  size=242
 * callers: ram:00024afc
 * ========================================================== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_00033870(int param_1,undefined1 *param_2)

{
  int iVar1;
  undefined4 uStack_20;
  
  *param_2 = 0;
  if ((((_DAT_ram_008016cc & 0x10000) != 0) && ((*(byte *)(param_1 + 0x13) & 1) != 0)) &&
     ((*(byte *)(param_1 + 0xd) & 7) < 2)) {
    iVar1 = func_0x0000f478(param_1,0,2,0,&uStack_20,1);
    if ((iVar1 == 0x1000000) &&
       (iVar1 = func_0x0001b7ec(param_1,0,(int)(*(byte *)(param_1 + 0x13) & 0xe) >> 1,uStack_20),
       iVar1 != 0)) {
      *param_2 = 1;
      FUN_ram_00026754(*(undefined1 *)(param_1 + 0xb),1);
      return 1;
    }
    return 0;
  }
  return 1;
}



/* ==========================================================
 * ram:00033964  FUN_ram_00033964  size=428
 * callers: ram:0002f658
 * ========================================================== */

undefined4 FUN_ram_00033964(int param_1,byte *param_2,ushort *param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte abStack_3c [4];
  
  abStack_3c[0] = 0;
  uVar6 = *(byte *)((int)param_3 + 7) & 0x7f;
  iVar1 = func_0x000116e4(param_4,(uint)(byte)param_3[3] + (uint)*param_3,abStack_3c);
  if (iVar1 == 0) {
    uVar7 = (uint)abStack_3c[0];
    if ((*(byte *)((int)param_3 + 7) & 0x7f) == 0) {
      bVar3 = *param_2;
      *(byte *)(param_1 + (uint)bVar3) = abStack_3c[0] * '\r' + -0x25;
      uVar4 = bVar3 + 1;
      bVar3 = (byte)uVar4;
      *param_2 = bVar3;
      *(undefined1 *)(param_1 + (uVar4 & 0xff)) = 0x12;
      *param_2 = bVar3 + 1;
    }
    uVar4 = 3;
    for (; 0xc < uVar6; uVar6 = uVar6 - 0xd & 0xff) {
      uVar4 = uVar4 + 1 & 0xff;
    }
    uVar5 = 0xd;
    for (; uVar4 < uVar7; uVar4 = uVar4 + 1 & 0xff) {
      if (0xf0 < *param_2 + 0xd) {
        uVar5 = 0xf0 - *param_2 & 0xff;
      }
      iVar1 = func_0x000116e4(param_4,(uint)(byte)param_3[3] + (uint)*param_3 + uVar4,abStack_3c);
      if (iVar1 != 0) goto LAB_ram_00033ad4;
      FUN_ram_00033b10((uint)abStack_3c[0] + *param_3 + 0xd + uVar6,(uint)*param_2 + param_1,param_4
                       ,uVar5 - uVar6 & 0xff);
      *param_2 = *param_2 + 0xd;
      *(byte *)((int)param_3 + 7) =
           (*(byte *)((int)param_3 + 7) & 0x7f) + (char)uVar5 & 0x7f |
           *(byte *)((int)param_3 + 7) & 0x80;
      if (uVar5 != 0xd) break;
    }
    if (uVar4 == uVar7) {
      *(byte *)((int)param_3 + 7) = *(byte *)((int)param_3 + 7) | 0x80;
    }
    uVar2 = 1;
  }
  else {
LAB_ram_00033ad4:
    uVar2 = 0;
  }
  return uVar2;
}



/* ==========================================================
 * ram:00033b10  FUN_ram_00033b10  size=136
 * callers: ram:00033964
 * ========================================================== */

undefined4 FUN_ram_00033b10(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_24 [4];
  
  uVar2 = 0;
  auStack_24[0] = 0;
  if (0 < param_4) {
    do {
      iVar1 = func_0x000116e4(param_3,uVar2 + param_1,auStack_24);
      if (iVar1 != 0) {
        return 0;
      }
      *(undefined1 *)(param_2 + uVar2) = auStack_24[0];
      uVar2 = uVar2 + 1 & 0xff;
    } while ((int)uVar2 < param_4);
  }
  return 1;
}



/* ==========================================================
 * ram:00033b98  FUN_ram_00033b98  size=264
 * callers: ram:00035cf4
 * ========================================================== */

undefined4 FUN_ram_00033b98(int param_1,undefined4 *param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  byte abStack_2c [4];
  
  uVar2 = func_0x0000e264(*param_2,param_2[1]);
  abStack_2c[0] = 0;
  iVar3 = func_0x000116e4(param_2,param_1 + 2,abStack_2c);
  if (iVar3 == 0) {
    uVar4 = abStack_2c[0] & 0x18 | (int)(abStack_2c[0] & 0xe0) >> 5;
    cVar1 = *(char *)(param_3 + uVar4);
    *(char *)(param_3 + uVar4) = cVar1 + '\x01';
    if ((byte)(cVar1 + 1U) < 2) {
      iVar3 = func_0x000116e4(param_2,param_1 + 6,abStack_2c);
      if (iVar3 != 0) goto LAB_ram_00033c38;
      if ((int)(abStack_2c[0] & 0x60) >> 5 == 1) {
        FUN_ram_0002b740(uVar2,uVar4,1);
        iVar3 = func_0x000116e4(param_2,param_1 + 8,abStack_2c);
        if (iVar3 != 0) goto LAB_ram_00033c38;
        FUN_ram_0002beec(uVar2,uVar4,(int)(abStack_2c[0] & 0xe0) >> 5);
      }
    }
    else {
      FUN_ram_0002b740(uVar2,uVar4,0);
    }
    uVar2 = 1;
  }
  else {
LAB_ram_00033c38:
    uVar2 = 0;
  }
  return uVar2;
}



/* ==========================================================
 * ram:00033ca0  FUN_ram_00033ca0  size=116
 * callers: ram:000329e0
 * ========================================================== */

ulonglong FUN_ram_00033ca0(int param_1,int param_2)

{
  if (param_2 == 0) {
    return (ulonglong)(uint)((int)(*(byte *)(param_1 + 0x10) & 8) >> 3);
  }
  if (param_2 == 1) {
    return CONCAT44(1,(int)(*(byte *)(param_1 + 0x10) & 0x80) >> 7);
  }
  if (param_2 == 2) {
    return CONCAT44(2,(int)(*(byte *)(param_1 + 0x11) & 8) >> 3);
  }
  if (param_2 != 3) {
    return CONCAT44(param_2,2);
  }
  return CONCAT44(3,(int)(*(byte *)(param_1 + 0x11) & 0x80) >> 7);
}



/* ==========================================================
 * ram:00033d14  FUN_ram_00033d14  size=68
 * callers: ram:00035cf4
 * ========================================================== */

void FUN_ram_00033d14(undefined4 *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = func_0x0000e264(*param_1,param_1[1]);
  *(byte *)(iVar1 + 0x12) =
       *(byte *)(iVar1 + 0x12) & 0xe0 | (byte)param_2 & 0x18 | (byte)((int)(param_2 & 0xe0) >> 5);
  return;
}



/* ==========================================================
 * ram:00033e4c  FUN_ram_00033e4c  size=300
 * callers: ram:00033f78,ram:0002a244,ram:0002c064
 * ========================================================== */

undefined4 FUN_ram_00033e4c(undefined4 param_1,uint param_2,char param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint local_30;
  
  local_30 = param_2 | 1 << (param_3 + 10U & 0x1f) | 0x40800000;
  iVar1 = func_0x0000f594(param_1,0,2,0x44,&local_30,1);
  if (iVar1 == 0x1000000) {
    uVar2 = func_0x00018b48(0x14);
    func_0x000187b0(0,uVar2);
    func_0x000187f4(0);
    do {
      iVar1 = func_0x0000f478(param_1,0,2,0x44,&local_30,1);
      if (iVar1 != 0x1000000) {
        return 0;
      }
    } while ((((local_30 & 0x40000000) != 0) && ((local_30 & 0x80000000) == 0)) &&
            (iVar1 = func_0x00018880(0), iVar1 == 0));
    func_0x0001883c(0);
    iVar1 = func_0x00018880(0);
    if (((iVar1 != 1) && ((local_30 & 0x80000000) == 0)) &&
       (iVar1 = func_0x0000f478(param_1,0,2,0x45,param_4,1), iVar1 == 0x1000000)) {
      return 1;
    }
  }
  return 0;
}



/* ==========================================================
 * ram:00033f78  FUN_ram_00033f78  size=140
 * callers: ram:0002a244,ram:00031714,ram:00036814,ram:0002c064
 * ========================================================== */

undefined8
FUN_ram_00033f78(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint local_24;
  
  local_24 = 0;
  iVar1 = FUN_ram_00033e4c(param_1,param_2,param_3,&local_24);
  iVar2 = 0;
  if ((iVar1 == 0) ||
     (iVar2 = func_0x0001b7ec(param_1,param_2,param_3,param_5 & param_4 | local_24 & ~param_5),
     iVar2 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return CONCAT44(iVar2,uVar3);
}



/* ==========================================================
 * ram:00034014  FUN_ram_00034014  size=1248  [ENTRY/ROOT]
 * ========================================================== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00034014(undefined4 *param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 auStack_74 [16];
  undefined1 auStack_64 [16];
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint uStack_48;
  char acStack_44 [4];
  
  uVar13 = 0;
  acStack_44[0] = '\0';
  func_0x00015698(auStack_64);
  iVar6 = func_0x00017c14((int)param_1 + 9,auStack_64,0x10);
  if (iVar6 == 0) {
    cVar1 = *(char *)((int)param_1 + 0x19);
    func_0x000156f0(auStack_74);
    iVar6 = func_0x00017c14((int)param_1 + 0x1d,auStack_74,0x10);
    if ((iVar6 == 0) && (cVar1 == '\x01')) {
      uStack_50 = *(uint *)((int)param_1 + 0x2d);
      uStack_54 = *(undefined4 *)((int)param_1 + 0x31);
      bVar2 = *(byte *)((int)param_1 + 0x35);
      uVar10 = (uint)bVar2;
      uStack_48 = param_1[1];
      uStack_4c = *param_1;
      for (; (uVar13 < 7 && (*(char *)((int)&uStack_4c + uVar13) != '\0'));
          uVar13 = uVar13 + 1 & 0xff) {
      }
      bVar3 = *(byte *)((int)&uStack_50 + uVar13 + 3);
      uVar11 = (uint)bVar3;
      *(undefined1 *)((int)&uStack_50 + uVar13 + 3) = 0;
      uVar5 = uStack_4c;
      uStack_50 = uStack_50 & 0x7fffffff;
      uVar13 = uStack_48 & 0x7fffffff;
      uStack_48 = uVar13;
      puVar7 = (undefined4 *)func_0x0000e264(uStack_54);
      if ((puVar7 != (undefined4 *)0x0) && (uVar10 <= (*(byte *)((int)puVar7 + 9) & 0xf))) {
        iVar6 = func_0x0000e528(*puVar7,puVar7[1]);
        if ((iVar6 != 0xff) &&
           ((iVar8 = func_0x0000e528(uVar5,uVar13), iVar8 != 0xff &&
            (iVar9 = func_0x0000e5a0(), uVar11 <= (*(byte *)(iVar9 + 9) & 0xf))))) {
          iVar14 = uVar10 * 8;
          bVar4 = *(byte *)((int)puVar7 + iVar14 + 0x57);
          if ((bVar4 & 3) == 2) {
            puVar7[uVar10 + 5] = iVar8 << 0x18 | puVar7[uVar10 + 5] & 0xffffff;
            *(byte *)((int)puVar7 + iVar14 + 0x57) = bVar4 & 0xfc | 1;
            iVar8 = uVar11 * 4;
            *(byte *)((int)puVar7 + iVar14 + 0x57) = bVar4 & 0x80 | 1 | (byte)iVar8;
            func_0x00018158(puVar7,1,uVar10);
            *(uint *)(iVar8 + iVar9 + 0x14) =
                 iVar6 << 0x18 | *(uint *)(iVar9 + iVar8 + 0x14) & 0xffffff;
            bVar4 = *(byte *)(iVar9 + uVar11 * 8 + 0x57);
            iVar8 = uVar11 * 8 + iVar9;
            *(byte *)(iVar8 + 0x57) = bVar4 & 0xfc | 1;
            *(byte *)(iVar8 + 0x57) = bVar2 * '\x04' | bVar4 & 0x80 | 1;
            func_0x00018158(iVar9,1,uVar11);
            func_0x00018158(puVar7,5,uVar10);
            func_0x00018158(iVar9,5,uVar11);
            iVar6 = FUN_ram_0002ebe8(puVar7,uVar10,acStack_44);
            if ((iVar6 != 0) && (acStack_44[0] == '\x04')) {
              *(byte *)(puVar7 + uVar10 * 2 + 0x16) =
                   *(byte *)(puVar7 + uVar10 * 2 + 0x16) & 0x1f | 0x40;
              *(byte *)(iVar8 + 0x58) = *(byte *)(iVar8 + 0x58) & 0x1f | 0x40;
            }
            func_0x00019510(1);
            if ((_DAT_ram_008016cc & 4) != 0) {
              if ((bVar2 & 1) == 0) {
                uVar13 = uVar10 - 1;
              }
              else {
                uVar13 = uVar10 + 1;
              }
              uVar13 = uVar13 & 0xff;
              if ((bVar3 & 1) == 0) {
                uVar12 = uVar11 - 1;
              }
              else {
                uVar12 = uVar11 + 1;
              }
              uVar12 = uVar12 & 0xff;
              if (((*(byte *)((int)puVar7 + uVar13 * 8 + 0x57) & 3) == 1) &&
                 ((*(byte *)(uVar12 * 8 + iVar9 + 0x57) & 3) == 1)) {
                if (uVar13 < uVar10) {
                  uVar13 = uVar13 + 1 & 0xff;
                  uVar10 = uVar10 - 1 & 0xff;
                }
                if (uVar12 < uVar11) {
                  uVar12 = uVar12 + 1 & 0xff;
                  uVar11 = uVar11 - 1 & 0xff;
                }
                iVar6 = FUN_ram_0002e670(puVar7,uVar10);
                if ((iVar6 != 0) && (iVar6 = FUN_ram_0002e670(iVar9,uVar11), iVar6 != 0)) {
                  iVar6 = FUN_ram_00030014(iVar9,uVar11,puVar7,uVar10);
                  iVar8 = iVar9 + uVar12 * 8;
                  if (iVar6 == 1) {
                    bVar2 = *(byte *)(puVar7 + uVar13 * 2 + 0x16);
                    *(byte *)(puVar7 + uVar13 * 2 + 0x16) = bVar2 & 0xf7 | 8;
                    *(byte *)(puVar7 + uVar13 * 2 + 0x16) = bVar2 & 0xe7 | 0x18;
                    *(byte *)(puVar7 + uVar10 * 2 + 0x16) =
                         *(byte *)(puVar7 + uVar10 * 2 + 0x16) & 0xef | 0x10;
                    bVar2 = *(byte *)(iVar8 + 0x58);
                    *(byte *)(iVar8 + 0x58) = bVar2 & 0xf7 | 8;
                    *(byte *)(iVar8 + 0x58) = bVar2 & 0xe7 | 0x18;
                    *(byte *)(uVar11 * 8 + iVar9 + 0x58) =
                         *(byte *)(iVar9 + uVar11 * 8 + 0x58) & 0xef | 0x10;
                  }
                  func_0x00018158(iVar9,2,uVar12);
                  func_0x00018158(puVar7,2,uVar13);
                  puVar7[uVar13 + 5] = puVar7[uVar13 + 5] | 0xff000000;
                  bVar2 = *(byte *)((int)puVar7 + uVar13 * 8 + 0x57);
                  *(byte *)((int)puVar7 + uVar13 * 8 + 0x57) = bVar2 & 0xfc;
                  *(byte *)((int)puVar7 + uVar13 * 8 + 0x57) = bVar2 & 0x80 | 0x40;
                  *(uint *)(uVar12 * 4 + iVar9 + 0x14) =
                       *(uint *)(iVar9 + uVar12 * 4 + 0x14) | 0xff000000;
                  bVar2 = *(byte *)(iVar8 + 0x57);
                  *(byte *)(iVar8 + 0x57) = bVar2 & 0xfc;
                  *(byte *)(iVar8 + 0x57) = bVar2 & 0x80 | 0x40;
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}



/* ==========================================================
 * ram:000344f4  FUN_ram_000344f4  size=244
 * callers: ram:00031028
 * ========================================================== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_000344f4(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 1) != '\0') {
    iVar1 = FUN_ram_00027cac(0);
    iVar2 = func_0x00014988();
    if (iVar2 == 0) {
      if ((_DAT_ram_008016cc & 0x200000) != 0) {
        FUN_ram_0002a244();
      }
    }
    else {
      FUN_ram_00025628(6,0,0,*(char *)(iVar1 + 0xb) == '\x02');
    }
  }
  if (*(char *)(param_1 + 2) != '\0') {
    FUN_ram_00027cac(1);
    iVar1 = func_0x00014988();
    if (iVar1 != 0) {
      FUN_ram_00025628(6,1,0);
      return;
    }
    if ((_DAT_ram_008016cc & 0x200000) != 0) {
      FUN_ram_0002a244();
      return;
    }
  }
  return;
}



/* ==========================================================
 * ram:00034690  FUN_ram_00034690  size=152
 * callers: ram:00032bc8
 * ========================================================== */

undefined4 FUN_ram_00034690(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uStack_18;
  
  uVar3 = 0;
  uStack_18 = 0;
  uVar1 = func_0x00018b48(0x1e);
  func_0x000187b0(9,uVar1);
  func_0x000187f4(9);
  while ((int)(*(byte *)(param_1 + 9) & 0x70) >> 4 == 6) {
    func_0x0000f478(param_1,0,2,0x2c5,&uStack_18,1);
    if (((uStack_18 & 1) != 0) || (iVar2 = func_0x00018880(9), iVar2 != 0)) goto LAB_ram_00034704;
  }
  uVar3 = 1;
LAB_ram_00034704:
  iVar2 = func_0x00018880(9);
  if (iVar2 == 0) {
    uVar3 = 1;
  }
  return uVar3;
}



/* ==========================================================
 * ram:00034728  FUN_ram_00034728  size=182
 * callers: ram:00036ee4
 * ========================================================== */

undefined4 FUN_ram_00034728(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = func_0x00012b5c();
  if ((iVar1 != 0) && (iVar1 = func_0x00012c70(iRam00800488), iVar1 != 0)) {
    func_0x00017ba4(iRam00800488 + 0x904,param_1,0x80);
    iVar1 = func_0x00012cb8(iRam00800488);
    if (iVar1 != 0) {
      if (iRam00807ce8 == 0) {
        iRam00807ce8 = iRam00800488 + 0x904;
        return 1;
      }
      return 1;
    }
  }
  return 0;
}



/* ==========================================================
 * ram:00034828  FUN_ram_00034828  size=90
 * callers: ram:00031028
 * ========================================================== */

void FUN_ram_00034828(int param_1)

{
  int iVar1;
  byte abStack_14 [4];
  
  abStack_14[0] = 0xff;
  if (((param_1 == 1) && (iVar1 = FUN_ram_0002b16c(abStack_14), iVar1 != 0)) && (abStack_14[0] < 4))
  {
    FUN_ram_00031c08();
  }
  return;
}



/* ==========================================================
 * ram:00034884  FUN_ram_00034884  size=108
 * callers: ram:000348f0
 * ========================================================== */

byte FUN_ram_00034884(undefined4 param_1)

{
  int iVar1;
  int iStack_1c;
  byte abStack_18 [4];
  
  iStack_1c = 0;
  abStack_18[0] = 0;
  iVar1 = FUN_ram_0002f5e0(param_1,&iStack_1c);
  if (((iVar1 == 0) && (iStack_1c != 0)) &&
     (iVar1 = func_0x000116e4(param_1,iStack_1c + 0x126,abStack_18), iVar1 == 0)) {
    abStack_18[0] = abStack_18[0] & 7;
  }
  else {
    abStack_18[0] = 0xff;
  }
  return abStack_18[0];
}



/* ==========================================================
 * ram:000348f0  FUN_ram_000348f0  size=116
 * callers: ram:000330a4
 * ========================================================== */

undefined4 FUN_ram_000348f0(int *param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*param_1 == 0 && param_1[1] == 0) {
    uVar2 = 1;
  }
  else {
    cVar1 = FUN_ram_00034884(param_1);
    if ((char)(cVar1 + '\x01') != -1) {
      FUN_ram_0003556c(param_1,0);
      uVar2 = func_0x0001b7ec(param_1,0x159,cVar1 + '\x01',param_2);
    }
  }
  return uVar2;
}



/* ==========================================================
 * ram:00034964  FUN_ram_00034964  size=460  [ENTRY/ROOT]
 * ========================================================== */

undefined4 FUN_ram_00034964(undefined4 param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uVar7 = 0;
  iVar2 = func_0x00017a48(param_1,0,2,5,6);
  if (iVar2 != 0) {
    iVar3 = func_0x0000f478(param_1,0,2,iVar2,&uStack_44,1);
    if (((iVar3 != 0x1000000) || (uStack_44 != 0x60500)) ||
       (iVar3 = func_0x0000f478(param_1,0,2,iVar2 + 2U & 0xffff,&uStack_44,1), iVar3 != 0x1000000))
    {
      return 0;
    }
    uVar6 = uStack_44 & 0xf;
    uVar8 = uStack_44 & 0xff00;
    uVar4 = uStack_44 & 0xfff0000;
    if (uVar6 != 0) {
      do {
        iVar10 = 0x20;
        iVar3 = 0;
        uAuxregs0008 = 0x34a7c;
        uAuxregs000c = 0x34a8c;
        uVar5 = uVar4 >> 0x10;
        uVar9 = uVar7;
        do {
          uVar1 = uVar5 & 1;
          uVar5 = uVar5 >> 1;
          bVar11 = uVar5 == 0;
          if (uVar1 != 0) {
            iVar3 = iVar3 + uVar9;
          }
          if (!bVar11) {
            uVar9 = uVar9 * 2;
            bVar11 = uVar9 == 0;
          }
          if (bVar11) {
            iVar10 = 1;
          }
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
        uVar9 = iVar2 + (uVar8 >> 8) + iVar3 + 0x96 & 0xffff;
        iVar3 = func_0x0000f478(param_1,0,2,uVar9,&uStack_48,1);
        if (iVar3 != 0x1000000) {
          return 0;
        }
        uStack_4c = uStack_48 & ~param_3 | param_3 & param_2;
        iVar3 = func_0x0000f594(param_1,0,2,uVar9,&uStack_4c,1);
        if (iVar3 != 0x1000000) {
          return 0;
        }
        uVar7 = uVar7 + 1 & 0xff;
      } while (uVar7 < uVar6);
    }
  }
  return 1;
}



/* ==========================================================
 * ram:00034b84  FUN_ram_00034b84  size=340  [ENTRY/ROOT]
 * ========================================================== */

void FUN_ram_00034b84(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  uint uStack_24;
  
  if ((cRam00807cfb != '\0') && (iVar1 = func_0x00018880(10), iVar1 != 0)) {
    if (cRam00801330 != '\0') {
      FUN_ram_00034cd8();
      func_0x00034b68();
    }
    func_0x000187f4(10);
    bVar4 = 0;
    do {
      iVar1 = func_0x0000e5a0(bVar4);
      if ((((*(byte *)(iVar1 + 8) & 1) != 0) &&
          (5 < (uint)((int)(*(byte *)(iVar1 + 9) & 0x70) >> 4))) &&
         (iVar2 = func_0x00017a48(iVar1,0,2,5,6), iVar2 != 0)) {
        iVar3 = func_0x0000f478(iVar1,0,2,iVar2,&uStack_24,1);
        if (((iVar3 == 0x1000000) && (uStack_24 == 0x60500)) &&
           ((iVar3 = func_0x0000f478(iVar1,0,2,iVar2 + 2U & 0xffff,&uStack_24,1), iVar3 == 0x1000000
            && ((iVar1 = func_0x0000f478(iVar1,0,2,
                                         ((uStack_24 & 0xff00) >> 8) + iVar2 + 0xb6 & 0xffff,
                                         &uStack_24,1), iVar1 == 0x1000000 && ((uStack_24 & 1) != 0)
                ))))) {
          FUN_ram_00034cd8();
          func_0x00034b68();
        }
      }
      bVar4 = bVar4 + 1;
    } while (bVar4 < 0xe);
  }
  return;
}



/* ==========================================================
 * ram:00034cd8  FUN_ram_00034cd8  size=260
 * callers: ram:00038370,ram:000350e0,ram:00034b84
 * ========================================================== */

void FUN_ram_00034cd8(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uStack_24;
  
  uVar1 = func_0x0000e5a0(0);
  iVar2 = func_0x00017a48(uVar1,0,2,5,6);
  if (iVar2 != 0) {
    iVar3 = func_0x0000f478(uVar1,0,2,iVar2,&uStack_24,1);
    if (((iVar3 == 0x1000000) && (uStack_24 == 0x60500)) &&
       (iVar3 = func_0x0000f478(uVar1,0,2,iVar2 + 2U & 0xffff,&uStack_24,1), iVar3 == 0x1000000)) {
      uVar4 = ((uStack_24 & 0xff00) >> 8) + iVar2 + 0xb7 & 0xffff;
      iVar2 = func_0x0000f478(uVar1,0,2,uVar4,&uStack_24,1);
      if (iVar2 == 0x1000000) {
        uStack_24 = uStack_24 | 1;
        func_0x0000f594(uVar1,0,2,uVar4,&uStack_24,1);
      }
    }
  }
  return;
}



/* ==========================================================
 * ram:00034f24  FUN_ram_00034f24  size=156
 * callers: ram:000326b0
 * ========================================================== */

undefined4 FUN_ram_00034f24(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  func_0x0001b8f8(param_1,param_2,0x26);
  iVar1 = func_0x00010234(param_1,0,2,0,0x40,0x40);
  if (iVar1 == 0x1000000) {
    func_0x00019c68(5);
    iVar1 = func_0x00010234(param_1,0,2,0,0,0x40);
    if (iVar1 == 0x1000000) {
      return 1;
    }
  }
  return 0;
}



/* ==========================================================
 * ram:00035014  FUN_ram_00035014  size=202
 * callers: ram:000350e0,ram:00037aa8
 * ========================================================== */

undefined4 FUN_ram_00035014(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar1 = FUN_ram_00025e84(0);
  uVar2 = func_0x0000e5a0(*(undefined1 *)(param_1 + 4));
  while( true ) {
    iVar3 = iVar1 + -1;
    if (iVar1 + -1 < 0) {
      iVar3 = 0;
    }
    if (iVar3 < iVar4) break;
    iVar3 = FUN_ram_00026330(0,iVar4);
    if ((((*(char *)(iVar3 + 6) != '\0') && (*(char *)(iVar3 + 4) != '\0')) &&
        (iVar3 = func_0x0000e5a0(), iVar3 != 0)) &&
       (iVar3 = func_0x0000e5e8(uVar2,iVar3), iVar3 != 0)) {
      return 1;
    }
    iVar4 = (int)(char)((char)iVar4 + '\x01');
  }
  return 0;
}



/* ==========================================================
 * ram:000350e0  FUN_ram_000350e0  size=964
 * callers: ram:00037014
 * ========================================================== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_000350e0(uint param_1,undefined4 *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iStack_90;
  int iStack_88;
  int iStack_84;
  undefined1 auStack_74 [48];
  undefined1 auStack_44 [4];
  
  uVar10 = 0;
  iVar14 = 0;
  bVar1 = false;
  iVar13 = 0;
  iVar12 = 0;
  bVar3 = false;
  bVar2 = false;
  iStack_90 = 0;
  auStack_44[0] = 2;
  iVar4 = func_0x00014e68();
  iStack_88 = 0;
  iStack_84 = 0;
  uVar5 = func_0x0000e528(*param_2,param_2[1]);
  if (uVar5 == 0xff) {
    return 1;
  }
  uVar6 = FUN_ram_00025e84(1);
  if (0 < (int)uVar6) {
    do {
      iVar13 = FUN_ram_00026330(1,uVar10);
      if (((*(char *)(iVar13 + 6) == '\x01') && (uVar5 == *(byte *)(iVar13 + 4))) &&
         (*(byte *)(iVar13 + 7) == param_1)) break;
      uVar10 = uVar10 + 1 & 0xff;
    } while ((int)uVar10 < (int)uVar6);
  }
  if (uVar10 != uVar6) {
    if ((_DAT_ram_008016cc & 0x10) != 0) {
      iStack_84 = FUN_ram_00035014(iVar13);
    }
    iVar7 = FUN_ram_00025e84(0);
    iVar11 = 0;
joined_r0x0003521c:
    iVar8 = iVar7 + -1;
    if (iVar7 + -1 < 0) {
      iVar8 = 0;
    }
    if (iVar8 < iVar11) goto LAB_ram_00035368;
    iVar12 = FUN_ram_00026330(0,iVar11);
    if ((*(char *)(iVar12 + 6) == '\0') || (*(char *)(iVar12 + 5) == '\x01')) goto LAB_ram_00035350;
    uVar10 = (uint)*(byte *)(iVar12 + 4);
    uVar6 = (uint)*(byte *)(iVar12 + 7);
    if ((_DAT_ram_008016cc & 0x10) != 0) {
      if (uVar10 == 0) {
        if (iStack_84 == 0) goto LAB_ram_00035284;
      }
      else {
        iVar8 = FUN_ram_000267a8(uVar10);
        if ((iVar8 != 0) && (iStack_84 != 0)) goto LAB_ram_00035284;
      }
LAB_ram_00035350:
      iVar11 = (int)(char)((char)iVar11 + '\x01');
      goto joined_r0x0003521c;
    }
LAB_ram_00035284:
    if (((_DAT_ram_008016cc & 0x20000) != 0) && (uVar5 == uVar10)) goto LAB_ram_00035350;
    iVar14 = func_0x0002667c();
    if (iVar14 == 0xff) goto LAB_ram_00035368;
    iVar8 = FUN_ram_00025118(uVar10,uVar6,uVar5,param_1,iVar14,0,auStack_44,0);
    if (iVar8 == 0) {
      if (((_DAT_ram_008016cc & 0x800) != 0) && (iVar4 == 0)) {
        iStack_88 = FUN_ram_00025118(uVar10,uVar6,uVar5,param_1,iVar14,1,auStack_44,1);
      }
      goto LAB_ram_00035350;
    }
    iVar8 = FUN_ram_00026350(iVar14,uVar10);
    if (iVar8 == 1) {
      uVar9 = FUN_ram_0002665c(iVar14);
      func_0x00017ba4(auStack_74,uVar9,0x30);
      FUN_ram_00026624(iVar14,0);
      iVar8 = FUN_ram_00026134(uVar10,uVar6);
      iStack_90 = iVar12;
      if (iVar8 != 0) {
        bVar2 = true;
      }
      goto LAB_ram_00035350;
    }
    iVar8 = FUN_ram_00026134(uVar10,uVar6);
    if (iVar8 == 0) {
      FUN_ram_00026624(iVar14,0);
      goto LAB_ram_00035350;
    }
    bVar1 = true;
LAB_ram_00035368:
    if ((bVar1) && (bVar2)) {
      FUN_ram_0002623c(*(undefined1 *)(iStack_90 + 4),*(undefined1 *)(iStack_90 + 7));
    }
    if ((!bVar1) && (bVar2)) {
      iVar14 = func_0x0002667c();
      uVar9 = FUN_ram_0002665c();
      func_0x00017ba4(uVar9,auStack_74,0x30);
      bVar1 = true;
      iVar12 = iStack_90;
    }
    if (bVar1) {
      uVar9 = FUN_ram_0002665c(iVar14);
      iVar4 = FUN_ram_0002d814(uVar9,auStack_44[0]);
      if (iVar4 == 0) {
        if (cRam00807cfb != '\0') {
          FUN_ram_00034cd8();
          cRam00807cfb = '\0';
        }
        *(undefined1 *)(iVar13 + 5) = 1;
        *(undefined1 *)(iVar12 + 5) = 1;
        iVar12 = func_0x00014988();
        if (iVar12 == 1) {
          FUN_ram_00025a80();
        }
        else if ((_DAT_ram_008016cc & 0x200000) != 0) {
          FUN_ram_0002a244();
        }
      }
      else {
        bVar3 = true;
      }
      goto LAB_ram_0003544c;
    }
    if (iStack_88 != 0) {
      iVar12 = func_0x00014988();
      if (iVar12 == 0) {
        if ((_DAT_ram_008016cc & 0x200000) != 0) {
          FUN_ram_0002a244();
        }
      }
      else {
        func_0x00025a68();
      }
    }
  }
  iVar4 = 0;
LAB_ram_0003544c:
  if (bVar3) {
    FUN_ram_00026624(iVar14,0);
  }
  return iVar4;
}



/* ==========================================================
 * ram:0003556c  FUN_ram_0003556c  size=266
 * callers: ram:00032bc8,ram:000348f0
 * ========================================================== */

undefined4 FUN_ram_0003556c(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (6 < (uint)((int)(*(byte *)((int)param_1 + 9) & 0x70) >> 4)) {
    if (*param_1 == 0 && param_1[1] == 0) {
      iVar2 = 2;
    }
    else {
      if ((int)(*(byte *)((int)param_1 + 0x12) & 0x20) >> 5 == 0) {
        return 1;
      }
      iVar2 = (*(byte *)((int)param_1 + 0x12) & 0x1f) + 1;
    }
    iVar1 = func_0x0001b7ec(param_1,0x159,iVar2,0);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = func_0x0001b7ec(param_1,0x144,iVar2,0x10003800);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = func_0x0001b7ec(param_1,0x158,iVar2,0x1fe0000);
    if (iVar1 == 0) {
      return 0;
    }
    iVar2 = func_0x0001b7ec(param_1,0x157,iVar2,0x6f050808);
    if (iVar2 == 0) {
      return 0;
    }
  }
  return 1;
}



/* ==========================================================
 * ram:00035cf4  FUN_ram_00035cf4  size=712
 * callers: ram:00032bc8,ram:0002a4d0,ram:0002a2cc
 * ========================================================== */

undefined4 FUN_ram_00035cf4(undefined4 *param_1,ushort *param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  undefined4 *puVar8;
  char cStack_48;
  byte bStack_47;
  ushort uStack_46;
  ushort auStack_44 [2];
  undefined4 uStack_40;
  
  cStack_48 = '\x01';
  uVar7 = 0x16;
  bStack_47 = 0;
  uStack_46 = 0;
  auStack_44[0] = 0;
  uStack_40 = 0;
  puVar8 = &uStack_40;
  uVar1 = func_0x00015d60(param_1,&cStack_48);
  *param_2 = uVar1;
  if (cStack_48 != '\0') {
    if (uVar1 == 0) {
      return 1;
    }
    param_2[4] = param_2[4] | 2;
    iVar2 = func_0x0000e264(*param_1,param_1[1]);
    iVar3 = func_0x00011804(param_1,*param_2 + 0xe,auStack_44);
    if (iVar3 == 0) {
      auStack_44[0] = auStack_44[0] + 0xd;
      if (0x16 < auStack_44[0]) {
        do {
          iVar3 = func_0x00011804(param_1,*param_2 + uVar7,&uStack_46);
          if (iVar3 != 0) {
            return 0;
          }
          uVar4 = uStack_46 & 0xff00;
          uVar5 = (int)uVar4 >> 8;
          bStack_47 = (byte)(uVar4 >> 8);
          uVar4 = uStack_46 & 0xff;
          if ((int)(uVar5 & 0x80) >> 7 == 0) {
            if (uVar5 == 1) {
              param_2[1] = (ushort)uVar7 & 0x7fff | param_2[1] & 0x8000;
            }
            if (uVar5 == 2) {
              param_2[2] = param_2[2] & 0x8000 | (ushort)uVar7 & 0x7fff;
            }
            param_2[5] = param_2[5] + (short)uVar4;
          }
          else if ((*(uint *)((uVar5 & 0x3f) * 4 + iVar2 + 0x14) & 0xffffff) == 0x100101) {
            *(char *)(param_2 + 3) = (char)uVar7;
            param_2[5] = (short)uVar4 * 0xd + -0x25 + param_2[5];
            if (param_3 != 0) {
              iVar3 = func_0x000116e4(param_1,(uint)*param_2 + (uVar7 & 0xff) + 2,&bStack_47);
              if (iVar3 != 0) {
                return 0;
              }
              FUN_ram_00033d14(param_1,bStack_47);
              uVar5 = 3;
              if (3 < uVar4) {
                do {
                  iVar3 = func_0x000116e4(param_1,*param_2 + uVar7 + uVar5,&bStack_47);
                  if (iVar3 != 0) {
                    return 0;
                  }
                  iVar3 = FUN_ram_00033b98(*param_2 + 0xd + (ushort)bStack_47,param_1,puVar8);
                  if (iVar3 == 0) {
                    return 0;
                  }
                  uVar5 = uVar5 + 1 & 0xff;
                } while (uVar5 < uVar4);
              }
              bVar6 = *(byte *)(iVar2 + 0x12);
              if ((uVar4 != 3) && (uVar4 == uVar5)) {
                bVar6 = bVar6 & 0xbf | 0x40;
                *(byte *)(iVar2 + 0x12) = bVar6;
              }
              *(byte *)(iVar2 + 0x12) = bVar6 & 0xdf | (byte)((param_2[4] >> 1 & 1) << 5);
              return 1;
            }
          }
          uVar7 = uVar7 + uVar4;
        } while ((uVar7 < auStack_44[0]) && (uVar7 < 0x1000));
      }
      if (5 < (uint)((int)(*(byte *)(iVar2 + 9) & 0x70) >> 4)) {
        param_2[5] = param_2[5] + 8;
      }
      if (((param_2[1] & 0x7fff) != 0) && ((param_2[2] & 0x7fff) != 0)) {
        return 1;
      }
    }
  }
  return 0;
}



/* ==========================================================
 * ram:00036014  FUN_ram_00036014  size=128
 * callers: ram:00028630
 * ========================================================== */

undefined4 FUN_ram_00036014(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  uVar3 = 2;
  pcVar2 = (char *)FUN_ram_00027cac(0);
  if ((pcVar2[8] != '\0') &&
     ((cVar1 = *pcVar2, (cVar1 == '\x01' || cVar1 == '\x02') && param_1 == 0x10 ||
      ((cVar1 == '\x03' || cVar1 == '\x04') && param_1 == 0x11)))) {
    uVar3 = 0;
  }
  pcVar2 = (char *)FUN_ram_00027cac(1);
  if ((pcVar2[8] != '\0') &&
     ((cVar1 = *pcVar2, (cVar1 == '\x01' || cVar1 == '\x02') && param_1 == 0x10 ||
      ((cVar1 == '\x03' || cVar1 == '\x04') && param_1 == 0x11)))) {
    uVar3 = 1;
  }
  return uVar3;
}



/* ==========================================================
 * ram:00036094  FUN_ram_00036094  size=1788
 * callers: ram:00031028
 * ========================================================== */

void FUN_ram_00036094(int param_1)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  byte bVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  int iVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uStack_44;
  
  puVar8 = (uint *)0x0;
  uVar13 = 0;
  uStack_44 = 0;
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  uVar17 = 0;
  bVar7 = 0;
  uVar18 = 0;
  uVar19 = 0;
  iVar12 = param_1;
  if (*(int *)(param_1 + 8) == 0x11) {
    puVar8 = (uint *)(param_1 + 0xc);
    do {
      pbVar1 = (byte *)func_0x0000e5a0(bVar7);
      if ((((pbVar1[8] & 1) != 0) && ((*puVar8 & 7) == (uint)*pbVar1)) &&
         ((pbVar1[0xd] & 7) == (*puVar8 & 0xf0) >> 4)) break;
      bVar7 = bVar7 + 1;
    } while (bVar7 < 0xe);
    if (((bVar7 != 0xe) && (5 < (uint)((int)(pbVar1[9] & 0x70) >> 4))) &&
       (uVar2 = func_0x00017a48(pbVar1,0,2,5,6), uVar2 != 0)) {
      iVar3 = func_0x0000f478(pbVar1,0,2,uVar2 & 0xffff,&uStack_44,1);
      if (((iVar3 == 0x1000000) && (uStack_44 == 0x60500)) &&
         (iVar3 = func_0x0000f478(pbVar1,0,2,uVar2 + 2 & 0xffff,&uStack_44,1), iVar3 == 0x1000000))
      {
        uVar14 = uStack_44 & 0xf;
        uVar15 = (uStack_44 & 0xff00) >> 8;
        uVar16 = (uStack_44 & 0xfff0000) >> 0x10;
        uVar4 = *puVar8;
        uVar5 = (uVar4 & 0x700) >> 8;
        if ((uVar5 <= uVar14) && (uVar5 != 0)) {
          uVar17 = uVar5 - 1 & 0xff;
          if ((uVar4 & 0x800) == 0) {
            uStack_44 = 0x52535050;
            iVar10 = 0x20;
            iVar3 = 0;
            uAuxregs0008 = 0x3628c;
            uAuxregs000c = 0x3629c;
            uVar4 = uVar17;
            uVar5 = uVar16;
            do {
              uVar9 = uVar5 & 1;
              uVar5 = uVar5 >> 1;
              bVar11 = uVar5 == 0;
              if (uVar9 != 0) {
                iVar3 = iVar3 + uVar4;
              }
              if (!bVar11) {
                uVar4 = uVar4 * 2;
                bVar11 = uVar4 == 0;
              }
              if (bVar11) {
                iVar10 = 1;
              }
              iVar10 = iVar10 + -1;
            } while (iVar10 != 0);
            iVar3 = iVar3 + uVar15 + uVar2;
            uVar2 = iVar3 + 0x84;
            iVar10 = func_0x0000f594(pbVar1,0,2,uVar2 & 0xffff,&uStack_44,1);
            if (iVar10 == 0x1000000) {
              uVar4 = (*puVar8 & 0xfc0000) >> 0x12;
              if (uVar4 == 0) {
                uVar4 = 0x40;
              }
              uStack_44 = uVar4 << 8 | (*puVar8 >> 0x18) << 0x10;
              iVar10 = func_0x0000f594(pbVar1,0,2,iVar3 + 0x85U & 0xffff,&uStack_44,1);
              if (iVar10 == 0x1000000) {
                uStack_44 = 1;
                uVar5 = iVar3 + 0x26U & 0xffff;
                iVar10 = func_0x0000f594(pbVar1,0,2,uVar5,&uStack_44,1);
                if (iVar10 == 0x1000000) {
                  func_0x000187b0(0,200);
                  func_0x000187f4(0);
                  do {
                    iVar10 = func_0x0000f478(pbVar1,0,2,uVar5,&uStack_44,1);
                    if (iVar10 != 0x1000000) goto LAB_ram_00036714;
                  } while (((uStack_44 & 1) != 0) && (iVar10 = func_0x00018880(0), iVar10 == 0));
                  func_0x0001883c(0);
                  iVar10 = func_0x00018880(0);
                  if (iVar10 != 1) {
                    func_0x000187b0(0,200);
                    func_0x000187f4(0);
                    do {
                      iVar10 = func_0x0000f478(pbVar1,0,2,uVar2 & 0xffff,&uStack_44,1);
                      if (iVar10 != 0x1000000) goto LAB_ram_00036714;
                    } while ((uStack_44 != 0) && (iVar10 = func_0x00018880(0), iVar10 == 0));
                    func_0x0001883c(0);
                    iVar10 = func_0x00018880(0);
                    if ((iVar10 != 1) &&
                       ((iVar10 = func_0x0000f478(pbVar1,0,2,iVar3 + 0x88U & 0xffff,&uStack_44,1),
                        iVar10 == 0x1000000 && ((uStack_44 & 0xff) == 2)))) {
                      uVar19 = (uStack_44 & 0xff00) >> 8;
                      uVar18 = *puVar8;
                      uVar2 = (uVar19 & 0x3f) << 0xc;
                      *puVar8 = uVar18 & 0xfffc0fff | uVar2;
                      uVar2 = uVar18 & 0xfffc0ff7 | uVar2;
                      if (uVar19 < 0x41) {
                        *puVar8 = uVar2;
                      }
                      else {
                        *puVar8 = uVar2 | 8;
                      }
                      uVar18 = uVar19;
                      if (uVar4 < uVar19) {
                        uVar18 = uVar4;
                      }
                      uVar9 = (int)uVar18 >> 2;
                      uVar2 = uVar18 & 3;
                      uVar4 = iVar3 + 0x74;
                      uVar5 = 0;
                      if (uVar9 != 0) {
                        do {
                          iVar3 = func_0x0000f478(pbVar1,0,2,uVar4 & 0xffff,&uStack_44,1);
                          if (iVar3 != 0x1000000) goto LAB_ram_00036714;
                          puVar8[uVar5 + 1] = uStack_44;
                          uVar4 = uVar4 + 1;
                          uVar5 = uVar5 + 1 & 0xff;
                        } while (uVar5 < uVar9);
                      }
                      if (uVar2 == 0) goto LAB_ram_0003671c;
                      iVar3 = func_0x0000f478(pbVar1,0,2,uVar4 & 0xffff,&uStack_44,1);
                      if (iVar3 == 0x1000000) {
                        puVar8[uVar5 + 1] = 0xffffffff;
                        puVar6 = (undefined1 *)(uVar5 * 4 + param_1 + 0x10);
                        for (; uVar2 != 0; uVar2 = uVar2 - 1 & 0xff) {
                          *puVar6 = (char)uStack_44;
                          puVar6 = puVar6 + 1;
                          uStack_44 = uStack_44 >> 8;
                        }
                        goto LAB_ram_0003671c;
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            uVar4 = (uVar4 & 0xfc0000) >> 0x12;
            if (uVar4 == 0) {
              uVar4 = 0x40;
            }
            iVar10 = 0x20;
            iVar3 = 0;
            uAuxregs0008 = 0x36580;
            uAuxregs000c = 0x36590;
            uVar18 = uVar17;
            uVar5 = uVar16;
            do {
              uVar9 = uVar5 & 1;
              uVar5 = uVar5 >> 1;
              bVar11 = uVar5 == 0;
              if (uVar9 != 0) {
                iVar3 = iVar3 + uVar18;
              }
              if (!bVar11) {
                uVar18 = uVar18 * 2;
                bVar11 = uVar18 == 0;
              }
              if (bVar11) {
                iVar10 = 1;
              }
              iVar10 = iVar10 + -1;
            } while (iVar10 != 0);
            iVar3 = iVar3 + uVar15 + uVar2;
            uVar2 = iVar3 + 0x74;
            uVar5 = 0;
            uVar18 = uVar4;
            if ((int)uVar4 >> 2 != 0) {
              do {
                iVar10 = func_0x0000f594(pbVar1,0,2,uVar2 & 0xffff,param_1 + 0x10 + uVar5 * 4,1);
                if (iVar10 != 0x1000000) goto LAB_ram_00036714;
                uVar2 = uVar2 + 1;
                uVar5 = uVar5 + 1 & 0xff;
              } while (uVar5 < (uint)((int)uVar4 >> 2));
            }
            if (((uVar4 & 3) == 0) ||
               (iVar10 = func_0x0000f594(pbVar1,0,2,uVar2 & 0xffff,param_1 + 0x10 + uVar5 * 4,1),
               iVar10 == 0x1000000)) {
              uStack_44 = 0x57535050;
              uVar2 = iVar3 + 0x84;
              iVar10 = func_0x0000f594(pbVar1,0,2,uVar2 & 0xffff,&uStack_44,1);
              if (iVar10 == 0x1000000) {
                uStack_44 = (*puVar8 >> 0x18) << 0x10 | uVar4 << 8;
                iVar10 = func_0x0000f594(pbVar1,0,2,iVar3 + 0x85U & 0xffff,&uStack_44,1);
                if (iVar10 == 0x1000000) {
                  uStack_44 = 1;
                  uVar4 = iVar3 + 0x26U & 0xffff;
                  iVar10 = func_0x0000f594(pbVar1,0,2,uVar4,&uStack_44,1);
                  if (iVar10 == 0x1000000) {
                    do {
                      iVar10 = func_0x0000f478(pbVar1,0,2,uVar4,&uStack_44,1);
                      if (iVar10 != 0x1000000) goto LAB_ram_00036714;
                    } while ((uStack_44 & 1) != 0);
                    do {
                      iVar10 = func_0x0000f478(pbVar1,0,2,uVar2 & 0xffff,&uStack_44,1);
                      if (iVar10 != 0x1000000) goto LAB_ram_00036714;
                    } while (uStack_44 != 0);
                    iVar3 = func_0x0000f478(pbVar1,0,2,iVar3 + 0x88U & 0xffff,&uStack_44,1);
                    if ((iVar3 == 0x1000000) && ((char)uStack_44 == '\x02')) goto LAB_ram_0003671c;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_ram_00036714:
  uVar13 = 1;
LAB_ram_0003671c:
  func_0x00019048(0xc,0xe,uVar13,0,1,puVar8,0x44,0x50,iVar12,uVar13,uVar14,uVar15,uVar16,uVar17,
                  uVar18,uVar19);
  func_0x00018ddc();
  func_0x00019c1c(0xfffffff0,0,0x1000);
  return;
}



/* ==========================================================
 * ram:00036790  FUN_ram_00036790  size=72
 * callers: ram:00038c5c
 * ========================================================== */

void FUN_ram_00036790(undefined2 param_1)

{
  uRam00807cf0 = param_1;
  func_0x00019c1c(0xffffffe9,param_1,0xffff);
  func_0x00019c1c(0xffffffe9,1,0xffff0000);
  return;
}



/* ==========================================================
 * ram:00036814  FUN_ram_00036814  size=342
 * callers: ram:00032bc8
 * ========================================================== */

undefined4 FUN_ram_00036814(int param_1)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  byte bStack_30;
  byte abStack_2f [3];
  
  bStack_30 = 0;
  abStack_2f[0] = 0;
  uVar3 = 0;
  if ((int)(*(byte *)(param_1 + 9) & 0x70) >> 4 != 6) {
    return 1;
  }
  iVar1 = func_0x000116e4(param_1,10,&bStack_30);
  if (iVar1 == 0) {
    if (0x24 < bStack_30) {
      return 1;
    }
    iVar1 = func_0x000116e4(param_1,0x10,&bStack_30);
    if ((iVar1 == 0) && (iVar1 = func_0x000116e4(param_1,0x1c,abStack_2f), iVar1 == 0)) {
      if ((bStack_30 & 8) == 0) {
        if ((abStack_2f[0] & 0x10) == 0 && (abStack_2f[0] & 0x20) == 0) {
          uVar3 = 0xf;
        }
        if (((abStack_2f[0] & 0x10) != 0) && ((abStack_2f[0] & 0x20) == 0)) {
          uVar3 = 0xe;
        }
        if (((abStack_2f[0] & 0x10) == 0) && ((abStack_2f[0] & 0x20) != 0)) {
          uVar3 = 7;
        }
        if ((abStack_2f[0] & 0x10) != 0 && (abStack_2f[0] & 0x20) != 0) {
          uVar3 = 6;
        }
      }
      else {
        uVar3 = 2;
      }
      bVar2 = 0;
      while ((bVar4 = bVar2 + 1, (uVar3 & 1 << (bVar2 & 0x1f)) == 0 ||
             ((iVar1 = FUN_ram_00033f78(param_1,0x147,bVar4,0x100,0x100), iVar1 != 0 &&
              (iVar1 = FUN_ram_00033f78(param_1,0x16c,bVar4,0x1000,0x1000), iVar1 != 0))))) {
        bVar2 = bVar4;
        if (3 < bVar4) {
          return 1;
        }
      }
      return 0;
    }
  }
  return 0;
}



/* ==========================================================
 * ram:0003696c  FUN_ram_0003696c  size=106
 * callers: ram:00036ee4
 * ========================================================== */

undefined4 FUN_ram_0003696c(void)

{
  int iVar1;
  
  iVar1 = func_0x00012b5c();
  if ((iVar1 != 0) && (iVar1 = func_0x00012c70(iRam00800488), iVar1 != 0)) {
    if (iRam00807ce8 == 0) {
      iRam00807ce8 = iRam00800488 + 0x904;
      return 1;
    }
    return 1;
  }
  return 0;
}



/* ==========================================================
 * ram:00036e0c  FUN_ram_00036e0c  size=216  [ENTRY/ROOT]
 * ========================================================== */

undefined4 FUN_ram_00036e0c(int param_1,undefined4 *param_2,int param_3)

{
  ushort uVar1;
  byte bVar2;
  int iVar3;
  undefined1 auStack_38 [16];
  
  if ((*(byte *)(param_1 + param_3 * 8 + 0x56) & 0xf) == 0) {
    func_0x00015c80(auStack_38,param_2,1);
    iVar3 = FUN_ram_00033014(auStack_38);
    if ((iVar3 != 1) || (iVar3 = func_0x0001736c(param_1,param_3,param_2,1), iVar3 == 0)) {
      return 1;
    }
    *(byte *)((int)param_2 + 0xf) = *(byte *)((int)param_2 + 0xf) & 0xf7 | 8;
    bVar2 = func_0x0000e528(*param_2,param_2[1]);
    uVar1 = uRam00807bc8 & ~(ushort)(1 << (bVar2 & 0x1f));
    bVar2 = func_0x0000e528(*param_2,param_2[1]);
    uRam00807bc8 = uVar1 | (ushort)(1 << (bVar2 & 0x1f));
  }
  return 0;
}



/* ==========================================================
 * ram:00036ee4  FUN_ram_00036ee4  size=168
 * callers: ram:00031028
 * ========================================================== */

void FUN_ram_00036ee4(int param_1)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  
  bVar2 = *(byte *)(param_1 + 5);
  param_1 = param_1 + 0xc;
  bVar3 = bVar2;
  if ((bVar2 & 0x80) == 0) {
    iVar1 = FUN_ram_0003696c();
    param_1 = iRam00807ce8;
    if (iVar1 == 0) {
      bVar3 = bVar2 | 1;
      bVar2 = bVar3;
    }
  }
  else if ((bVar2 & 0x80) == 0x80) {
    iVar1 = FUN_ram_00034728(param_1);
    if (iVar1 == 0) {
      bVar3 = bVar2 | 1;
      bVar2 = bVar3;
    }
    func_0x00017bf4(param_1,0,0x80);
  }
  else {
    bVar3 = bVar2 | 1;
    bVar2 = bVar3;
  }
  func_0x00019048(0xc,0x18,bVar2,0,1,param_1,0x80,0x8c,bVar3);
  return;
}



/* ==========================================================
 * ram:00036f8c  FUN_ram_00036f8c  size=118  [ENTRY/ROOT]
 * ========================================================== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_00036f8c(uint param_1)

{
  int iVar1;
  
  if ((_DAT_ram_008016cc & 0x20000000) != 0) {
    if ((bRam00807cfa != param_1) || (iVar1 = func_0x00010150(0,2,0x422,0x80010102), iVar1 == 0)) {
      return 0;
    }
    bRam00807cfa = 0;
  }
  return 1;
}



/* ==========================================================
 * ram:00037014  FUN_ram_00037014  size=326
 * callers: ram:00025ae8
 * ========================================================== */

void FUN_ram_00037014(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = 0;
  iVar1 = func_0x00037814();
  if (iVar1 != 1) {
    while( true ) {
      iVar1 = FUN_ram_00025e84(1);
      iVar2 = 0;
      if (-1 < iVar1 + -1) {
        iVar2 = FUN_ram_00025e84(1);
        iVar2 = iVar2 + -1;
      }
      if (iVar2 < iVar7) break;
      puVar3 = (undefined4 *)FUN_ram_00026330(1,iVar7);
      if ((*(char *)((int)puVar3 + 6) != '\0') && (*(char *)((int)puVar3 + 5) != '\x01')) {
        iVar1 = func_0x0000e5a0(*(undefined1 *)(puVar3 + 1));
        if ((int)(*(byte *)(iVar1 + 0xf) & 0x20) >> 5 != 0) {
          iVar2 = 0;
          while( true ) {
            iVar4 = FUN_ram_00025e84(0);
            iVar5 = 0;
            if (-1 < iVar4 + -1) {
              iVar5 = FUN_ram_00025e84(0);
              iVar5 = iVar5 + -1;
            }
            if (iVar5 < iVar2) break;
            iVar4 = FUN_ram_00026330(0,iVar2);
            if ((((*(char *)(iVar4 + 6) != '\0') && (*(char *)(iVar4 + 5) != '\x01')) &&
                (iVar5 = func_0x0000e5a0(*(undefined1 *)(iVar4 + 4)),
                (int)(*(byte *)(iVar5 + 0xf) & 0x20) >> 5 != 0)) &&
               ((iVar6 = FUN_ram_00037aa8(iVar1,iVar5,puVar3,iVar4), iVar6 != 0 &&
                (iVar4 = FUN_ram_00038370(iVar1,iVar5,puVar3,iVar4), iVar4 == 0)))) {
              return;
            }
            iVar2 = (int)(char)((char)iVar2 + '\x01');
          }
        }
        FUN_ram_000350e0(*(undefined1 *)((int)puVar3 + 7),iVar1,*puVar3);
      }
      iVar7 = (int)(char)((char)iVar7 + '\x01');
    }
  }
  return;
}



/* ==========================================================
 * ram:0003715c  FUN_ram_0003715c  size=34
 * callers: ram:00025118
 * ========================================================== */

void FUN_ram_0003715c(int param_1,int param_2,undefined1 param_3,undefined1 param_4)

{
  param_1 = param_2 * 8 + param_1;
  *(undefined1 *)(param_1 + 1) = param_3;
  *(undefined1 *)(param_1 + 2) = param_4;
  return;
}



/* ==========================================================
 * ram:00037180  FUN_ram_00037180  size=58
 * callers: ram:00025118
 * ========================================================== */

void FUN_ram_00037180(undefined1 *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = param_1 + 0x70;
  for (; param_1 != puVar1; param_1 = param_1 + 8) {
    *param_1 = 0;
    param_1[6] = 4;
    *(undefined2 *)(param_1 + 4) = 0xffff;
  }
  return;
}



/* ==========================================================
 * ram:00037270  FUN_ram_00037270  size=866
 * callers: ram:00031814
 * ========================================================== */

bool FUN_ram_00037270(uint param_1,uint param_2,uint param_3,int param_4,int param_5,byte *param_6)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  bool bVar8;
  uint uStack_48;
  uint uStack_44;
  
  uVar5 = 0;
  uStack_44 = 0;
  uStack_48 = 0;
  do {
    uVar6 = uVar5;
    if ((*(uint *)(uVar5 * 4 + param_5 + 0x14) & 0xffffff) == 2) break;
    uVar5 = uVar5 + 1 & 0xff;
    uVar6 = uStack_48;
  } while (uVar5 < 0x10);
  uStack_48 = uVar6;
  if ((uStack_48 != 0xffffff) && (iVar1 = func_0x00017a48(param_5,uStack_48,1,5,1), iVar1 != 0)) {
    uVar2 = func_0x00018b48(0x15);
    func_0x000187b0(0,uVar2);
    func_0x000187f4(0);
    puVar7 = &uStack_44;
    uVar5 = iVar1 + 0x11U & 0xffff;
    do {
      iVar3 = func_0x0000f478(param_5,uStack_48,1,uVar5,puVar7,1);
      if (((uStack_44 & 1) == 0) || (iVar3 != 0x1000000)) break;
      iVar4 = func_0x00018880(0);
    } while (iVar4 == 0);
    func_0x0001883c(0);
    if ((iVar3 == 0x1000000) && (iVar3 = func_0x00018880(0), iVar3 != 1)) {
      uVar6 = 0;
      if (0 < (int)param_2) {
        do {
          iVar3 = func_0x0000f594(param_5,uStack_48,1,iVar1 + 1 + uVar6 & 0xffff,uVar6 * 4 + param_4
                                  ,1);
          if (iVar3 != 0x1000000) break;
          uVar6 = uVar6 + 1 & 0xff;
        } while ((int)uVar6 < (int)param_2);
      }
      if (uVar6 == param_2) {
        uStack_44 = param_1 << 0x1c | uStack_44 & 0xffffff | 1 | (param_2 & 0xf) << 0x18;
        iVar3 = func_0x0000f594(param_5,uStack_48,1,uVar5,puVar7,1);
        if (iVar3 == 0x1000000) {
          uVar2 = func_0x00018b48(0x15);
          func_0x000187b0(0,uVar2);
          func_0x000187f4(0);
          do {
            iVar3 = func_0x0000f478(param_5,uStack_48,1,uVar5,puVar7,1);
            if (((uStack_44 & 1) == 0) || (iVar3 != 0x1000000)) break;
            iVar4 = func_0x00018880(0);
          } while (iVar4 == 0);
          func_0x0001883c(0);
          if ((iVar3 == 0x1000000) && (iVar3 = func_0x00018880(0), iVar3 != 1)) {
            uVar5 = iVar1 + 0x12U & 0xffff;
            iVar3 = func_0x0000f478(param_5,uStack_48,1,uVar5,puVar7,1);
            bVar8 = iVar3 == 0x1000000;
            if (!bVar8) {
              return bVar8;
            }
            *param_6 = (byte)uStack_44 & 0xf;
            if (((((uStack_44 & 0xf) == 0) && (param_1 == (uStack_44 & 0xf0) >> 4)) &&
                ((uStack_44 & 0x20000000) == 0x20000000)) &&
               (((uStack_44 & 0x40000000) == 0 && (-1 < (int)uStack_44)))) {
              if (param_3 != 0) {
                uVar6 = 0;
                if (0 < (int)param_3) {
                  do {
                    iVar3 = func_0x0000f478(param_5,uStack_48,1,iVar1 + 1 + uVar6 & 0xffff,
                                            uVar6 * 4 + param_4,1);
                    if (iVar3 != 0x1000000) break;
                    uVar6 = uVar6 + 1 & 0xff;
                  } while ((int)uVar6 < (int)param_3);
                }
                if (uVar6 != param_3) {
                  return false;
                }
              }
              uStack_44 = uStack_44 | 0x20000000;
              iVar1 = func_0x0000f594(param_5,uStack_48,1,uVar5,puVar7,1);
              if (iVar1 == 0x1000000) {
                return bVar8;
              }
            }
          }
        }
      }
    }
  }
  return false;
}



/* ==========================================================
 * ram:000375d4  FUN_ram_000375d4  size=188
 * callers: ram:0002a4d0
 * ========================================================== */

undefined4 FUN_ram_000375d4(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  char acStack_1c [2];
  undefined2 uStack_1a;
  
  acStack_1c[0] = '\0';
  uStack_1a = 0;
  if ((uint)((int)(*(byte *)(param_1 + 9) & 0x70) >> 4) < 4) {
LAB_ram_00037648:
    *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) & 0x3f;
LAB_ram_00037674:
    uVar3 = 1;
  }
  else {
    iVar2 = func_0x00011804(param_1,0x77,&uStack_1a);
    uVar1 = uStack_1a;
    if (iVar2 == 0) {
      iVar2 = func_0x00011804(param_1,0x75,&uStack_1a);
      if (iVar2 == 0) {
        if (CONCAT22(uVar1,uStack_1a) == 0) goto LAB_ram_00037648;
        iVar2 = func_0x000116e4(param_1,CONCAT22(uVar1,uStack_1a) + 200,acStack_1c);
        if (iVar2 == 0) {
          *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) & 0x3f | acStack_1c[0] << 6;
          goto LAB_ram_00037674;
        }
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}



/* ==========================================================
 * ram:00037690  FUN_ram_00037690  size=196
 * callers: ram:0002fc5c,ram:0002fbec
 * ========================================================== */

undefined4 FUN_ram_00037690(undefined4 param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  
  *param_3 = 0;
  if (param_2 == 0x1513) {
    iVar1 = func_0x000116e4(param_1,0xc);
    if (iVar1 == 0) {
      return 1;
    }
  }
  else {
    iVar1 = func_0x00017a48(param_1,0,2,5,1);
    if ((iVar1 != 0) &&
       (iVar1 = func_0x0000f478(param_1,0,2,iVar1 + 4U & 0xffff,param_3,1), iVar1 == 0x1000000)) {
      return 1;
    }
  }
  return 0;
}



/* ==========================================================
 * ram:00037820  FUN_ram_00037820  size=62
 * callers: ram:00037b88
 * ========================================================== */

int FUN_ram_00037820(int param_1)

{
  if ((cRam00807575 != '\0') && (param_1 == 0)) {
    func_0x00019510(1);
  }
  cRam00807575 = (char)param_1;
  return param_1;
}



/* ==========================================================
 * ram:0003786c  FUN_ram_0003786c  size=26
 * callers: ram:00038370
 * ========================================================== */

void FUN_ram_0003786c(undefined1 param_1)

{
  uRam00807576 = param_1;
  return;
}



/* ==========================================================
 * ram:00037888  FUN_ram_00037888  size=110
 * callers: ram:000379d8
 * ========================================================== */

void FUN_ram_00037888(char *param_1,int param_2)

{
  char cVar1;
  
  if (param_2 == 1) {
    cVar1 = *param_1;
    if (cVar1 == '\x13') {
      *param_1 = '\x12';
      return;
    }
    if (cVar1 == '\"' || cVar1 == '#') {
      *param_1 = '!';
      return;
    }
  }
  else if ((param_2 == 2) && (*param_1 == '#')) {
    *param_1 = '\"';
    return;
  }
  return;
}



/* ==========================================================
 * ram:000378f8  FUN_ram_000378f8  size=38
 * callers: ram:00037b88,ram:000379d8
 * ========================================================== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

undefined4 FUN_ram_000378f8(undefined4 param_1)

{
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(param_1) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  default:
    return 0;
  }
}



/* ==========================================================
 * ram:000379d8  FUN_ram_000379d8  size=206
 * callers: ram:000380a8
 * ========================================================== */

uint FUN_ram_000379d8(uint *param_1,uint *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte abStack_24 [4];
  
  abStack_24[0] = 0;
  iVar2 = FUN_ram_000378f8((*param_1 & 0x7f00) >> 8);
  iVar3 = FUN_ram_000378f8((*param_2 & 0x7f00) >> 8);
  uVar4 = FUN_ram_00038014((*param_1 & 0x7f00) >> 8,(*param_2 & 0x7f00) >> 8);
  abStack_24[0] = (byte)uVar4;
  iVar1 = iVar2 - param_3;
  if (param_3 < iVar2) {
    iVar1 = iVar3 - param_3;
    iVar2 = iVar3;
  }
  if (iVar2 != param_3 && SBORROW4(iVar2,param_3) == iVar1 < 0) {
    FUN_ram_00037888(abStack_24,param_3);
    *param_1 = *param_1 & 0xffff80ff | (abStack_24[0] & 0x7f) << 8;
    *param_2 = (abStack_24[0] & 0x7f) << 8 | *param_2 & 0xffff80ff;
    uVar4 = (uint)abStack_24[0];
  }
  return uVar4;
}



/* ==========================================================
 * ram:00037aa8  FUN_ram_00037aa8  size=222
 * callers: ram:00037014
 * ========================================================== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_00037aa8(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (((_DAT_ram_008016cc & 0x20000) != 0) && (*(char *)(param_1 + 0xb) == *(char *)(param_2 + 0xb))
     ) {
    return 0;
  }
  uVar2 = 0;
  if ((_DAT_ram_008016cc & 0x10) != 0) {
    iVar3 = FUN_ram_00035014(param_3);
    uVar2 = _DAT_ram_008016cc & 0x10;
  }
  if (uVar2 != 0) {
    if (*(char *)(param_2 + 0xb) == '\0') {
      if (iVar3 != 0) {
        return 0;
      }
    }
    else {
      iVar1 = FUN_ram_000267a8();
      if (iVar1 == 0 || iVar3 == 0) {
        return 0;
      }
    }
  }
  return 1;
}



/* ==========================================================
 * ram:00037b88  FUN_ram_00037b88  size=734
 * callers: ram:00038370
 * ========================================================== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_00037b88(undefined1 *param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  uint *puVar9;
  undefined4 uVar10;
  uint uStack_44;
  
  uStack_44 = 0;
  uVar10 = 0;
  iVar4 = func_0x0000e5a0(param_1[0x1c]);
  iVar5 = func_0x0000e5a0(param_1[(byte)param_1[0x2a] + 0x1b]);
  uVar2 = *param_1;
  uVar1 = param_1[(byte)param_1[0x2a] + 0xd];
  iVar6 = func_0x00017a48(iVar5,uVar1,1,4,0xff);
  if (iVar6 != 0) {
    uVar8 = iVar6 + 6U & 0xffff;
    iVar6 = func_0x00010234(iVar5,uVar1,1,uVar8,0x4000000,0x4000000);
    if ((iVar6 != 0) &&
       (iVar6 = func_0x00010234(iVar5,uVar1,1,uVar8,0x2000000,0x2000000), iVar6 != 0)) {
      func_0x000187b0(0,0x32);
      func_0x000187f4(0);
      puVar9 = &uStack_44;
      do {
        iVar6 = func_0x0000f478(iVar5,uVar1,1,uVar8,puVar9,1);
        if (iVar6 != 0x1000000) {
          return 1;
        }
      } while (((uStack_44 & 0x2000000) != 0) && (iVar6 = func_0x00018880(0), iVar6 == 0));
      func_0x0001883c(0);
      iVar6 = func_0x00018880(0);
      if (iVar6 != 1) {
        if ((4 < (uint)((int)(*(byte *)(iVar4 + 9) & 0x70) >> 4)) &&
           (4 < (uint)((int)(*(byte *)(iVar5 + 9) & 0x70) >> 4))) {
          uVar10 = FUN_ram_000380a8(iVar4,uVar2,iVar5,uVar1,param_2);
        }
        iVar6 = FUN_ram_0002f014(param_1);
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = FUN_ram_00030290(iVar5,uVar1,1,uVar2,param_1[0x1c]);
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = FUN_ram_00030290(iVar4,uVar2,1,uVar1,param_1[(byte)param_1[0x2a] + 0x1b]);
        if (iVar6 != 0) {
          FUN_ram_00030290(iVar5,uVar1,0,uVar2,param_1[0x1c]);
          FUN_ram_00030290(iVar4,uVar2,0,uVar1,param_1[(byte)param_1[0x2a] + 0x1b]);
          return iVar6;
        }
        if (((_DAT_ram_008016cc & 0x80000) != 0) &&
           (iVar5 = FUN_ram_00025014(iVar4,uVar2,0), iVar5 != 0)) {
          return iVar5;
        }
        func_0x000187b0(4,5000);
        func_0x000187f4(4);
        uVar1 = FUN_ram_000378f8(uVar10);
        param_1[0x2c] = uVar1;
        param_1[0x2f] = (char)uVar10;
        sVar3 = func_0x00017a48(iVar4,uVar2,1,4,0xff);
        iVar4 = func_0x0000f478(iVar4,uVar2,1,sVar3 + 7,puVar9,1);
        if (iVar4 == 0x1000000) {
          if ((uStack_44 & 0x80000000) == 1) {
            bVar7 = 0x7f;
            uVar2 = FUN_ram_000378f8((uStack_44 & 0x7f00) >> 8);
            param_1[0x2c] = uVar2;
            param_1[0x2f] = (byte)(uStack_44 >> 8) & bVar7;
          }
          else {
            FUN_ram_00037820(1);
          }
          iVar4 = func_0x00037814();
          if (iVar4 == 0) {
            FUN_ram_0002df40(param_1);
            return 0;
          }
          return 0;
        }
      }
    }
  }
  return 1;
}



/* ==========================================================
 * ram:00037e68  FUN_ram_00037e68  size=50
 * callers: ram:00022814
 * ========================================================== */

void FUN_ram_00037e68(void)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)0x807804;
  DAT_ram_00807a14 = 0;
  DAT_ram_00807a15 = 0;
  DAT_ram_00807a16 = 0x42;
  do {
    puVar1[0x41] = 0;
    puVar1 = puVar1 + 0x42;
  } while (puVar1 != &DAT_ram_00807a14);
  return;
}



/* ==========================================================
 * ram:00037e9c  FUN_ram_00037e9c  size=358  [ENTRY/ROOT]
 * ========================================================== */

undefined4 FUN_ram_00037e9c(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iStack_34;
  
  uVar7 = 0;
  iStack_34 = 0;
  uVar6 = 0;
  iVar2 = func_0x00013038(iRam00808e80 + 0x75,&iStack_34,1);
  iVar1 = iStack_34;
  if (iVar2 == 0) {
    uVar8 = iStack_34 + 0x120;
    while( true ) {
      uVar5 = 0;
      if (uRam00808e14 != 0) {
        do {
          uVar3 = *(uint *)(uVar5 * 4 + 0x808e18);
          uVar4 = uVar3 & 0xffffff;
          if ((uVar4 < iVar1 + 0x124U) && (uVar8 <= ((uVar3 >> 0x18) - 1) + uVar4)) {
            Auxregsffb8 = 0xfeed;
            return 0;
          }
          uVar5 = uVar5 + 1 & 0xff;
        } while (uVar5 < uRam00808e14);
      }
      if ((uRam00808f88 <= uVar6) || (uRam00808f88 == 0)) break;
      uVar5 = uRam00808f88 - uVar6;
      if (0x10 < uVar5) {
        uVar5 = 0x10;
      }
      iVar2 = func_0x00013038(uVar6 * 4 + iRam00808f84,0x808e18,uVar5 & 0xff);
      if (iVar2 != 0) {
        return 0;
      }
      uVar6 = uVar6 + uVar5;
      uRam00808e14 = uVar5;
    }
    func_0x00013328(uRam00808f8c,0x6e14,0x44);
    uVar7 = 1;
  }
  return uVar7;
}



/* ==========================================================
 * ram:00038014  FUN_ram_00038014  size=62
 * callers: ram:000379d8
 * ========================================================== */

uint FUN_ram_00038014(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = param_1 & 0xf;
  uVar3 = param_2 & 0xf;
  uVar2 = (int)(param_1 & 0x70) >> 4;
  uVar1 = (int)(param_2 & 0x70) >> 4;
  return (uVar1 * (uVar2 > uVar1) + uVar2 * (uVar2 <= uVar1)) * 0x10 |
         uVar3 * (uVar4 > uVar3) + uVar4 * (uVar4 <= uVar3);
}



/* ==========================================================
 * ram:00038054  FUN_ram_00038054  size=84
 * callers: ram:000380a8
 * ========================================================== */

void FUN_ram_00038054(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1 & 0x7f00;
  uVar2 = uVar1 >> 8 & 0xf;
  uVar1 = uVar1 >> 0xc;
  *param_1 = ((uVar1 * (1 >= uVar1) + (uint)(1 < uVar1) * 2) * 0x10 & 0x7f |
             uVar2 * (2 >= uVar2) + (uint)(2 < uVar2) * 3) << 8 | *param_1 & 0xffff80ff;
  return;
}



/* ==========================================================
 * ram:000380a8  FUN_ram_000380a8  size=174
 * callers: ram:00037b88
 * ========================================================== */

undefined4
FUN_ram_000380a8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_2c = FUN_ram_0002ef28();
  uStack_28 = FUN_ram_0002ef28(param_3,param_4);
  puVar3 = &uStack_2c;
  FUN_ram_00038054(puVar3);
  puVar2 = &uStack_28;
  FUN_ram_00038054(puVar2);
  uVar1 = FUN_ram_000379d8(puVar3,puVar2,param_5);
  func_0x0002fb78(param_1,param_2,uStack_28);
  func_0x0002fb78(param_3,param_4,uStack_2c);
  return uVar1;
}



/* ==========================================================
 * ram:00038370  FUN_ram_00038370  size=386
 * callers: ram:00037014
 * ========================================================== */

int FUN_ram_00038370(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  bool bVar5;
  
  iVar4 = 1;
  puVar3 = (undefined1 *)0x0;
  bVar5 = false;
  iVar1 = func_0x0002667c();
  if (iVar1 != 0xff) {
    puVar3 = (undefined1 *)FUN_ram_0002665c();
    puVar3[0x2a] = 0;
    puVar3[0x1c] = *(undefined1 *)(param_2 + 0xb);
    *puVar3 = *(undefined1 *)(param_4 + 7);
    FUN_ram_000385f8(param_2,param_1,0x2deb4,puVar3);
    if (*(char *)(iVar1 * 0x30 + 0x807626) != '\0') {
      puVar3[(byte)puVar3[0x2a] + 0xd] = *(undefined1 *)(param_3 + 7);
      iVar2 = FUN_ram_00026134(*(undefined1 *)(param_2 + 0xb),*(undefined1 *)(param_4 + 7));
      if (iVar2 != 0) {
        puVar3 = (undefined1 *)FUN_ram_0002665c(iVar1);
        iVar4 = FUN_ram_00037b88(puVar3,puVar3[0x2c]);
        bVar5 = iVar4 != 0;
        if (!bVar5) {
          *(undefined1 *)(param_3 + 5) = 1;
          *(undefined1 *)(param_4 + 5) = 1;
          iVar2 = func_0x00037814();
          if (iVar2 == 1) {
            FUN_ram_0003786c(iVar1);
          }
          if (cRam00807cfb != '\0') {
            FUN_ram_00034cd8();
            cRam00807cfb = '\0';
          }
          iVar2 = func_0x00014988();
          if ((iVar2 == 1) && (iVar2 = func_0x00037814(), iVar2 == 0)) {
            FUN_ram_00025a80();
          }
        }
        goto LAB_ram_00038488;
      }
    }
    bVar5 = true;
  }
LAB_ram_00038488:
  if (bVar5) {
    FUN_ram_0002623c(*(undefined1 *)(param_2 + 0xb),*(undefined1 *)(param_4 + 7));
    FUN_ram_00026624(iVar1,0);
    if ((*(char *)(param_3 + 5) != '\0') && (*(char *)(param_4 + 5) != '\0')) {
      FUN_ram_0002d014(puVar3,iVar1,0,0);
    }
  }
  return iVar4;
}



/* ==========================================================
 * ram:000384f4  FUN_ram_000384f4  size=114
 * callers: ram:000385f8
 * ========================================================== */

void FUN_ram_000384f4(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_c = 0;
  uStack_8 = 0;
  uStack_1c = *param_1;
  uStack_18 = param_1[1];
  uStack_14 = *param_2;
  uStack_10 = param_2[1];
  for (uVar1 = 0; *(char *)((int)&uStack_1c + uVar1) == *(char *)((int)&uStack_14 + uVar1);
      uVar1 = uVar1 + 1 & 0xff) {
    *(char *)((int)&uStack_c + uVar1) = *(char *)((int)&uStack_1c + uVar1);
  }
  *param_3 = uStack_c;
  param_3[1] = uStack_8;
  return;
}



/* ==========================================================
 * ram:00038568  FUN_ram_00038568  size=144
 * callers: ram:000385f8
 * ========================================================== */

uint FUN_ram_00038568(int *param_1,int param_2,int *param_3,byte *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  iVar1 = *param_3;
  iVar4 = param_3[1];
  if (*param_1 == iVar1 && param_1[1] == iVar4) {
    iVar1 = -1;
    *param_3 = -1;
    param_3[1] = 0;
    iVar4 = 0;
  }
  if (iVar1 == -1 && iVar4 == 0) {
    while( true ) {
      uVar2 = (uint)*(byte *)(param_2 + uVar3);
      if (*(byte *)((int)param_1 + uVar3) != uVar2) break;
      uVar3 = uVar3 + 1 & 0xff;
    }
    *param_4 = *(byte *)(param_2 + uVar3);
  }
  else {
    uVar2 = (int)(*(byte *)(param_1 + 2) & 0xfe) >> 1;
    *param_4 = (byte)uVar2;
  }
  return (uint)param_1[uVar2 + 5] >> 0x18;
}



/* ==========================================================
 * ram:000385f8  FUN_ram_000385f8  size=208
 * callers: ram:00038370
 * ========================================================== */

void FUN_ram_000385f8(int param_1,int param_2,code *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 auStack_34 [4];
  
  auStack_34[0] = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  FUN_ram_000384f4(param_1,param_2,&uStack_3c);
  if (param_2 != param_1) {
    do {
      FUN_ram_00038568(param_1,param_2,&uStack_3c,auStack_34);
      iVar1 = func_0x0000e5a0();
      iVar2 = (*param_3)(param_1,param_2,auStack_34[0],param_4);
      if (iVar2 == 0) {
        return;
      }
      param_1 = iVar1;
    } while (param_2 != iVar1);
    (*param_3)(iVar1,param_2,auStack_34[0],param_4);
  }
  return;
}



/* ==========================================================
 * ram:00038814  FUN_ram_00038814  size=216
 * callers: ram:00028744
 * ========================================================== */

undefined4 FUN_ram_00038814(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_28 [4];
  
  auStack_28[0] = 2;
  func_0x000156f0(0x807a18);
  func_0x00017ba4(0x807a28,param_3 + 0x1d,0x10);
  uRam00807a38 = 0xe0000;
  uRam00807a3c = 0;
  uRam00807a40 = 0x55584401;
  uRam00807a44 = 0xc;
  FUN_ram_00027b78(0x807a48);
  iVar1 = FUN_ram_00027d04(param_3,auStack_28,0);
  if ((iVar1 == 0) ||
     (iVar1 = FUN_ram_0002f4e0(4,param_1,0x807a18,0x18,param_2), iVar1 != 0x1000000)) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_ram_00027cac(auStack_28[0]);
    uVar2 = 1;
    *(undefined1 *)(iVar1 + 0x15) = 1;
  }
  return uVar2;
}



/* ==========================================================
 * ram:000388ec  FUN_ram_000388ec  size=188  [ENTRY/ROOT]
 * ========================================================== */

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_ram_000388ec(int param_1)

{
  int iVar1;
  uint uVar2;
  int aiStack_2c [4];
  ushort auStack_1c [2];
  
  aiStack_2c[0] = 0;
  aiStack_2c[3] = 0x1000000;
  auStack_1c[0] = 0;
  aiStack_2c[1] = 0;
  aiStack_2c[2] = 0;
  iVar1 = func_0x00015dfc(uRam008016b4,0x134,aiStack_2c);
  if (iVar1 != 0) {
    aiStack_2c[0] = aiStack_2c[0] + -4;
    if (param_1 == 0) {
      uVar2 = 0xffffffff;
    }
    else {
      iVar1 = func_0x000139b4(aiStack_2c + 1,auStack_1c,aiStack_2c + 3);
      if (iVar1 != 0) {
        return 0;
      }
      uVar2 = (uint)auStack_1c[0] << 0x10 | 0x8086;
    }
    iVar1 = func_0x00026f30(aiStack_2c[0],uVar2);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



/* ==========================================================
 * ram:00038c5c  FUN_ram_00038c5c  size=78  [ENTRY/ROOT]
 * ========================================================== */

void FUN_ram_00038c5c(void)

{
  int iVar1;
  uint uStack_c;
  
  uRam00807cf4 = 0;
  uStack_c = 0;
  iVar1 = func_0x00013038(iRam008016b8 + 0x10,&uStack_c,1);
  if ((iVar1 == 0) && (uStack_c < 0x200)) {
    FUN_ram_00036790();
  }
  return;
}



/* ==========================================================
 * ram:00038cac  FUN_ram_00038cac  size=76  [ENTRY/ROOT]
 * ========================================================== */

bool FUN_ram_00038cac(void)

{
  bool bVar1;
  
  bVar1 = sRam00807cf0 != 0;
  if (bVar1) {
    sRam00807cf0 = sRam00807cf0 + -1;
  }
  func_0x00019c1c(0xffffffe9,sRam00807cf0,0xffff);
  func_0x00019c1c(0xffffffe9,2,0xffff0000);
  return bVar1;
}



/* reachable functions=253 decompiled=253 */
