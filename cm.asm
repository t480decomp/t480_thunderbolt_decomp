@ Cortex-M code at NVM 0x3BC90-0x40000 (17,264 bytes), Thumb-2, linked at 0.
@ Reassembled from the vendor image and verified byte-for-byte with arm-none-eabi-as;
@ the listing uses labels for in-image branches, .word for literal pools and .inst
@ for the few encodings GNU as cannot express identically.  See scripts/gen_cm_listing.py.
.syntax unified
.thumb
.cpu cortex-m3
.text
.balign 4
L00000:
  push	{r3, r4, r5, r6, r7, lr}
L00002:
  mov	r4, r0
L00004:
  ldr	r0, [pc, #636]
L00006:
  ldrb	r0, [r0, r4]
L00008:
  cmp	r0, #42
L0000a:
  .inst.n 0xd009
L0000c:
  ldr	r0, [pc, #632]
L0000e:
  ldrb	r1, [r0, r4]
L00010:
  cmp	r1, #0
L00012:
  .inst.n 0xd003
L00014:
  ldrb	r1, [r0, r4]
L00016:
  cmp	r1, #2
L00018:
  .inst.n 0xd006
L0001a:
  .inst.n 0xe001
L0001c:
  movs	r1, #1
L0001e:
  strb	r1, [r0, r4]
L00020:
  mov	r0, r4
L00022:
  .inst.w 0xf000f94f
L00026:
  pop	{r3, r4, r5, r6, r7, pc}
L00028:
  movs	r6, #0
L0002a:
  strb	r6, [r0, r4]
L0002c:
  ldr	r0, [pc, #604]
L0002e:
  ldr	r1, [pc, #608]
L00030:
  muls	r0, r4
L00032:
  adds	r7, r0, r1
L00034:
  ldr	r0, [pc, #604]
L00036:
  adds	r5, r7, r0
L00038:
  mov	r0, r4
L0003a:
  .inst.w 0xf000f949
L0003e:
  mov	r1, r5
L00040:
  mov	r0, r4
L00042:
  .inst.w 0xf7fbffd6
L00046:
  movs	r1, #113
L00048:
  lsls	r1, r1, #5
L0004a:
  adds	r1, r7, r1
L0004c:
  movs	r0, #1
L0004e:
  adds	r5, #255
L00050:
  strb	r0, [r1, #2]
L00052:
  adds	r5, #1
L00054:
  strb	r6, [r5, #10]
L00056:
  ldrb	r0, [r5, #18]
L00058:
  movs	r1, #253
L0005a:
  ands	r0, r1
L0005c:
  strb	r0, [r5, #18]
L0005e:
  pop	{r3, r4, r5, r6, r7, pc}
L00060:
  ldr	r1, [pc, #552]
L00062:
  ldr	r2, [pc, #556]
L00064:
  muls	r1, r0
L00066:
  adds	r3, r1, r2
L00068:
  movs	r1, #23
L0006a:
  push	{r4, lr}
L0006c:
  lsls	r1, r1, #7
L0006e:
  adds	r1, r3, r1
L00070:
  ldrb	r4, [r1, #2]
L00072:
  movs	r1, #7
L00074:
  lsls	r1, r1, #9
L00076:
  adds	r2, r3, r1
L00078:
  ldrb	r1, [r2, #21]
L0007a:
  cmp	r4, #2
L0007c:
  .inst.n 0xd101
L0007e:
  cmp	r1, #2
L00080:
  .inst.n 0xd002
L00082:
  cmp	r1, #3
L00084:
  .inst.n 0xd002
L00086:
  .inst.n 0xe006
L00088:
  movs	r1, #3
L0008a:
  strb	r1, [r2, #21]
L0008c:
  movs	r2, #3
L0008e:
  lsls	r2, r2, #10
L00090:
  movs	r1, #0
L00092:
  adds	r2, r3, r2
L00094:
  strb	r1, [r2, #20]
L00096:
  .inst.w 0xf000f921
L0009a:
  pop	{r4, pc}
L0009c:
  push	{r4, r5, r6, lr}
L0009e:
  sub	sp, #32
L000a0:
  mov	r5, r1
L000a2:
  mov	r6, r0
L000a4:
  .inst.w 0xf000f920
L000a8:
  cmp	r0, #0
L000aa:
  .inst.n 0xd01c
L000ac:
  ldr	r0, [pc, #488]
L000ae:
  lsls	r1, r6, #5
L000b0:
  adds	r4, r1, r0
L000b2:
  movs	r2, #32
L000b4:
  mov	r1, r4
L000b6:
  mov	r0, sp
L000b8:
  .inst.w 0xf7fefe46
L000bc:
  cmp	r5, #255
L000be:
  .inst.n 0xd00e
L000c0:
  adds	r0, r4, #2
L000c2:
  .inst.w 0xf000f917
L000c6:
  movs	r1, #1
L000c8:
  lsls	r1, r5
L000ca:
  tst	r0, r1
L000cc:
  .inst.n 0xd007
L000ce:
  mov	r0, sp
L000d0:
  ldrb	r0, [r0, #1]
L000d2:
  lsls	r0, r0, #31
L000d4:
  .inst.n 0xd003
L000d6:
  movs	r1, #0
L000d8:
  mov	r0, r6
L000da:
  .inst.w 0xf000f911
L000de:
  mov	r1, r5
L000e0:
  mov	r0, r6
L000e2:
  .inst.w 0xf000f90d
L000e6:
  add	sp, #32
L000e8:
  pop	{r4, r5, r6, pc}
L000ea:
  push	{r4, r5, r6, lr}
L000ec:
  mov	r6, r1
L000ee:
  mov	r5, r0
L000f0:
  .inst.w 0xf000f90c
L000f4:
  ldr	r0, [pc, #404]
L000f6:
  ldr	r1, [pc, #408]
L000f8:
  muls	r0, r5
L000fa:
  adds	r4, r0, r1
L000fc:
  movs	r0, #251
L000fe:
  lsls	r0, r0, #2
L00100:
  adds	r0, r4, r0
L00102:
  movs	r1, #84
L00104:
  .inst.w 0xf7fefefe
L00108:
  movs	r1, #99
L0010a:
  lsls	r1, r1, #5
L0010c:
  movs	r0, #0
L0010e:
  adds	r1, r4, r1
L00110:
  strb	r0, [r1, #25]
L00112:
  mov	r1, r6
L00114:
  mov	r0, r5
L00116:
  .inst.w 0xf000f8ff
L0011a:
  pop	{r4, r5, r6, pc}
L0011c:
  push	{r3, r4, r5, r6, lr}
L0011e:
  ldr	r2, [pc, #380]
L00120:
  ldrb	r2, [r2, #16]
L00122:
  mov	r3, sp
L00124:
  strb	r2, [r3, #0]
L00126:
  cmp	r0, #255
L00128:
  .inst.n 0xd047
L0012a:
  ldr	r2, [pc, #372]
L0012c:
  lsls	r3, r0, #2
L0012e:
  adds	r2, r3, r2
L00130:
  ldrb	r3, [r2, #3]
L00132:
  cmp	r3, #0
L00134:
  .inst.n 0xd141
L00136:
  ldrb	r3, [r2, #2]
L00138:
  ldr	r4, [pc, #364]
L0013a:
  ldr	r2, [pc, #360]
L0013c:
  str	r2, [r4, #12]
L0013e:
  ldr	r2, [pc, #364]
L00140:
  movs	r5, #31
L00142:
  lsls	r6, r0, #12
L00144:
  lsls	r5, r5, #13
L00146:
  adds	r2, r6, r2
L00148:
  cmp	r1, #0
L0014a:
  .inst.n 0xd02b
L0014c:
  cmp	r1, #1
L0014e:
  .inst.n 0xd132
L00150:
  ldr	r0, [pc, #312]
L00152:
  ldr	r1, [pc, #316]
L00154:
  muls	r0, r3
L00156:
  adds	r0, r0, r1
L00158:
  movs	r1, #15
L0015a:
  lsls	r1, r1, #6
L0015c:
  adds	r1, r0, r1
L0015e:
  ldr	r1, [r1, #56]
L00160:
  mov	r6, sp
L00162:
  ldrb	r6, [r6, #0]
L00164:
  lsrs	r1, r1, #16
L00166:
  lsls	r6, r6, #26
L00168:
  .inst.n 0xd525
L0016a:
  ldr	r6, [pc, #324]
L0016c:
  cmp	r1, r6
L0016e:
  .inst.n 0xd122
L00170:
  movs	r1, #91
L00172:
  lsls	r1, r1, #5
L00174:
  adds	r1, r0, r1
L00176:
  ldrb	r1, [r1, #13]
L00178:
  cmp	r1, #1
L0017a:
  .inst.n 0xd11c
L0017c:
  lsls	r1, r3, #2
L0017e:
  ldr	r3, [pc, #308]
L00180:
  ldr	r1, [r3, r1]
L00182:
  cmp	r1, #0
L00184:
  .inst.n 0xd017
L00186:
  movs	r1, #3
L00188:
  lsls	r1, r1, #10
L0018a:
  adds	r0, r0, r1
L0018c:
  ldr	r0, [r0, #40]
L0018e:
  lsls	r0, r0, #12
L00190:
  lsrs	r0, r0, #22
L00192:
  cmp	r0, #100
L00194:
  .inst.n 0xd80f
L00196:
  ldr	r0, [r2, #8]
L00198:
  movs	r1, #15
L0019a:
  bics	r0, r5
L0019c:
  lsls	r1, r1, #13
L0019e:
  adds	r0, r0, r1
L001a0:
  str	r0, [r2, #8]
L001a2:
  .inst.n 0xe008
L001a4:
  ldr	r1, [r2, #8]
L001a6:
  ldr	r3, [pc, #272]
L001a8:
  bics	r1, r5
L001aa:
  adds	r0, r3, r0
L001ac:
  ldrb	r0, [r0, #16]
L001ae:
  lsls	r0, r0, #27
L001b0:
  lsrs	r0, r0, #14
L001b2:
  orrs	r1, r0
L001b4:
  str	r1, [r2, #8]
L001b6:
  movs	r0, #0
L001b8:
  str	r0, [r4, #12]
L001ba:
  pop	{r3, r4, r5, r6, pc}
L001bc:
  push	{r4, r5, r6, lr}
L001be:
  mov	r4, r0
L001c0:
  .inst.w 0xf000f8b0
L001c4:
  mov	r5, r0
L001c6:
  ldr	r0, [pc, #196]
L001c8:
  movs	r1, #91
L001ca:
  muls	r4, r0
L001cc:
  ldr	r0, [pc, #192]
L001ce:
  lsls	r1, r1, #5
L001d0:
  adds	r0, r4, r0
L001d2:
  adds	r0, r0, r1
L001d4:
  ldrb	r0, [r0, #8]
L001d6:
  movs	r1, #1
L001d8:
  .inst.w 0xf7ffffa0
L001dc:
  mov	r0, r5
L001de:
  pop	{r4, r5, r6, pc}
L001e0:
  push	{r4, r5, r6, lr}
L001e2:
  mov	r4, r2
L001e4:
  mov	r5, r0
L001e6:
  .inst.w 0xf000f8a3
L001ea:
  cmp	r4, #0
L001ec:
  .inst.n 0xd103
L001ee:
  movs	r1, #0
L001f0:
  mov	r0, r5
L001f2:
  .inst.w 0xf7ffff93
L001f6:
  pop	{r4, r5, r6, pc}
L001f8:
  push	{r4, r5, r6, r7, lr}
L001fa:
  sub	sp, #20
L001fc:
  movs	r1, #0
L001fe:
  mov	r5, r0
L00200:
  str	r1, [sp, #0]
L00202:
  str	r1, [sp, #4]
L00204:
  str	r1, [sp, #8]
L00206:
  mov	r7, sp
L00208:
  add	r6, sp, #8
L0020a:
  str	r1, [sp, #12]
L0020c:
  adds	r6, #2
L0020e:
  movs	r2, #255
L00210:
  movs	r1, #11
L00212:
  mov	r0, r7
L00214:
  .inst.w 0xf000f892
L00218:
  ldr	r0, [pc, #112]
L0021a:
  ldr	r1, [pc, #116]
L0021c:
  muls	r0, r5
L0021e:
  adds	r1, r0, r1
L00220:
  movs	r0, #51
L00222:
  lsls	r0, r0, #6
L00224:
  adds	r4, r1, r0
L00226:
  ldr	r0, [r4, #52]
L00228:
  lsls	r1, r0, #29
L0022a:
  .inst.n 0xd50f
L0022c:
  ldr	r1, [pc, #108]
L0022e:
  subs	r1, #34
L00230:
  ldrh	r1, [r1, #32]
L00232:
  lsls	r1, r1, #31
L00234:
  .inst.n 0xd001
L00236:
  movs	r1, #0
L00238:
  .inst.n 0xe000
L0023a:
  movs	r1, #1
L0023c:
  movs	r2, #4
L0023e:
  bics	r0, r2
L00240:
  str	r0, [r4, #52]
L00242:
  mov	r3, r7
L00244:
  mov	r2, r6
L00246:
  mov	r0, r5
L00248:
  .inst.w 0xf000f87e
L0024c:
  ldrh	r0, [r4, #52]
L0024e:
  lsls	r0, r0, #30
L00250:
  .inst.n 0xd507
L00252:
  dsb	sy
L00256:
  ldr	r1, [pc, #104]
L00258:
  ldr	r0, [pc, #96]
L0025a:
  str	r0, [r1, #12]
L0025c:
  dsb	sy
L00260:
  b.n	0x260
L00262:
  add	sp, #20
L00264:
  pop	{r4, r5, r6, r7, pc}
L00266:
  .inst.n 0x1e49
L00268:
  cmp	r1, #7
L0026a:
  .inst.n 0xd206
L0026c:
  ldr	r0, [r0, #0]
L0026e:
  lsrs	r1, r0, #30
L00270:
  .inst.n 0xd103
L00272:
  lsls	r0, r0, #12
L00274:
  lsrs	r0, r0, #22
L00276:
  cmp	r0, #100
L00278:
  .inst.n 0xd001
L0027a:
  movs	r0, #0
L0027c:
  bx	lr
L0027e:
  movs	r0, #1
L00280:
  bx	lr
L00282:
  movs	r0, r0
L00284:
  .word 0x20023336
L00288:
  .word 0x20026f78
L0028c:
  .word 0x00000ec4
L00290:
  .word 0x200214c4
L00294:
  .word 0x000008d4
L00298:
  .word 0x2002373f
L0029c:
  .word 0x2002326e
L002a0:
  .word 0x200204d4
L002a4:
  .word 0xdead1ace
L002a8:
  .word 0x400902c0
L002ac:
  .word 0x40092100
L002b0:
  .word 0x00006860
L002b4:
  .word 0x2002331c
L002b8:
  .word 0x20027c08
L002bc:
  .word 0x05fa0004
L002c0:
  .word 0xe000ed00
L002c4:
  push	{r0, r1}
L002c6:
  ldr	r0, [pc, #4]
L002c8:
  str	r0, [sp, #4]
L002ca:
  pop	{r0, pc}
L002cc:
  .word 0x0000df95
L002d0:
  push	{r0, r1}
L002d2:
  ldr	r0, [pc, #4]
L002d4:
  str	r0, [sp, #4]
L002d6:
  pop	{r0, pc}
L002d8:
  .word 0x000184a3
L002dc:
  push	{r0, r1}
L002de:
  ldr	r0, [pc, #4]
L002e0:
  str	r0, [sp, #4]
L002e2:
  pop	{r0, pc}
L002e4:
  .word 0x0000e5c9
L002e8:
  push	{r0, r1}
L002ea:
  ldr	r0, [pc, #4]
L002ec:
  str	r0, [sp, #4]
L002ee:
  pop	{r0, pc}
L002f0:
  .word 0x00018655
L002f4:
  push	{r0, r1}
L002f6:
  ldr	r0, [pc, #4]
L002f8:
  str	r0, [sp, #4]
L002fa:
  pop	{r0, pc}
L002fc:
  .word 0x00019179
L00300:
  push	{r0, r1}
L00302:
  ldr	r0, [pc, #4]
L00304:
  str	r0, [sp, #4]
L00306:
  pop	{r0, pc}
L00308:
  .word 0x0001865f
L0030c:
  push	{r0, r1}
L0030e:
  ldr	r0, [pc, #4]
L00310:
  str	r0, [sp, #4]
L00312:
  pop	{r0, pc}
L00314:
  .word 0x000188d3
L00318:
  push	{r0, r1}
L0031a:
  ldr	r0, [pc, #4]
L0031c:
  str	r0, [sp, #4]
L0031e:
  pop	{r0, pc}
L00320:
  .word 0x0000e3c3
L00324:
  push	{r0, r1}
L00326:
  ldr	r0, [pc, #4]
L00328:
  str	r0, [sp, #4]
L0032a:
  pop	{r0, pc}
L0032c:
  .word 0x0000b693
L00330:
  push	{r0, r1}
L00332:
  ldr	r0, [pc, #4]
L00334:
  str	r0, [sp, #4]
L00336:
  pop	{r0, pc}
L00338:
  .word 0x0000d515
L0033c:
  push	{r0, r1}
L0033e:
  ldr	r0, [pc, #4]
L00340:
  str	r0, [sp, #4]
L00342:
  pop	{r0, pc}
L00344:
  .word 0x00019155
L00348:
  push	{r0, r1}
L0034a:
  ldr	r0, [pc, #4]
L0034c:
  str	r0, [sp, #4]
L0034e:
  pop	{r0, pc}
L00350:
  .word 0x00017237
L00354:
  .inst.w 0xffffffff
L00358:
  .inst.w 0xffffffff
L0035c:
  .inst.w 0xffffffff
L00360:
  .inst.w 0xffffffff
L00364:
  .inst.w 0xffffffff
L00368:
  .inst.w 0xffffffff
L0036c:
  .inst.w 0xffffffff
L00370:
  .inst.w 0xffffffff
L00374:
  .inst.w 0xffffffff
L00378:
  .inst.w 0xffffffff
L0037c:
  .inst.w 0xffffffff
L00380:
  adds	r3, #122
L00382:
  movs	r2, r0
L00384:
  movs	r0, r0
L00386:
  movs	r0, r0
L00388:
  ldrb	r4, [r4, #17]
L0038a:
  movs	r0, #2
L0038c:
  ldr	r0, [r7, #116]
L0038e:
  movs	r0, #2
L00390:
  ldrb	r0, [r1, #16]
L00392:
  movs	r0, #2
L00394:
  str	r7, [r7, #48]
L00396:
  movs	r0, #2
L00398:
  .inst.n 0xb105
L0039a:
  movs	r3, r6
L0039c:
  lsls	r0, r0, #24
L0039e:
  .inst.w 0xf407c504
L003a2:
  movs	r4, r1
L003a4:
  lsls	r5, r5, #26
L003a6:
  lsls	r4, r6, #8
L003a8:
  movs	r0, r0
L003aa:
  adds	r3, #192
L003ac:
  subs	r4, #0
L003ae:
  movs	r0, #2
L003b0:
  .zero 12
L003bc:
  movs	r0, r0
L003be:
  ldrb	r6, [r4, #1]
L003c0:
  lsls	r3, r0, #30
L003c2:
  movs	r2, #255
L003c4:
  lsrs	r3, r3, #27
L003c6:
  lsls	r2, r3
L003c8:
  lsls	r1, r1, #30
L003ca:
  lsrs	r1, r1, #24
L003cc:
  lsls	r1, r3
L003ce:
  cmp	r0, #0
L003d0:
  .inst.n 0xda0b
L003d2:
  lsls	r0, r0, #28
L003d4:
  lsrs	r0, r0, #28
L003d6:
  subs	r0, #8
L003d8:
  lsrs	r3, r0, #2
L003da:
  ldr	r0, [pc, #996]
L003dc:
  lsls	r3, r3, #2
L003de:
  adds	r0, r3, r0
L003e0:
  ldr	r3, [r0, #28]
L003e2:
  bics	r3, r2
L003e4:
  orrs	r3, r1
L003e6:
  str	r3, [r0, #28]
L003e8:
  bx	lr
L003ea:
  lsrs	r3, r0, #2
L003ec:
  ldr	r0, [pc, #980]
L003ee:
  lsls	r3, r3, #2
L003f0:
  adds	r0, r3, r0
L003f2:
  ldr	r3, [r0, #0]
L003f4:
  bics	r3, r2
L003f6:
  orrs	r3, r1
L003f8:
  str	r3, [r0, #0]
L003fa:
  bx	lr
L003fc:
  push	{r4, r5, r6, lr}
L003fe:
  mov	r4, r0
L00400:
  bl	L02fec
L00404:
  mov	r5, r0
L00406:
  ldr	r0, [pc, #960]
L00408:
  lsls	r1, r4, #2
L0040a:
  ldr	r0, [r0, r1]
L0040c:
  lsls	r1, r0, #12
L0040e:
  lsrs	r1, r1, #22
L00410:
  .inst.n 0xd105
L00412:
  lsls	r0, r0, #5
L00414:
  .inst.n 0xd503
L00416:
  movs	r1, #43
L00418:
  mov	r0, r4
L0041a:
  bl	L02ff8
L0041e:
  mov	r0, r5
L00420:
  pop	{r4, r5, r6, pc}
L00422:
  push	{r4, r5, r6, r7, lr}
L00424:
  lsls	r7, r0, #8
L00426:
  ldr	r0, [pc, #932]
L00428:
  movs	r5, #0
L0042a:
  mov	ip, r0
L0042c:
  ldr	r0, [pc, #928]
L0042e:
  adds	r0, r7, r0
L00430:
  ldr	r2, [r0, #0]
L00432:
  lsrs	r2, r2, #3
L00434:
  lsls	r2, r2, #3
L00436:
  str	r2, [r0, #0]
L00438:
  adds	r4, r1, #7
L0043a:
  adds	r4, #249
L0043c:
  ldrb	r6, [r4, #17]
L0043e:
  cmp	r6, #1
L00440:
  .inst.n 0xd008
L00442:
  cmp	r6, #4
L00444:
  .inst.n 0xd00c
L00446:
  cmp	r6, #5
L00448:
  .inst.n 0xd00a
L0044a:
  movs	r3, #32
L0044c:
  movs	r2, #0
L0044e:
  cmp	r6, #2
L00450:
  .inst.n 0xd011
L00452:
  .inst.n 0xe012
L00454:
  str	r1, [r0, #12]
L00456:
  ldrh	r1, [r4, #12]
L00458:
  movs	r3, #16
L0045a:
  lsls	r1, r1, #23
L0045c:
  lsrs	r2, r1, #4
L0045e:
  .inst.n 0xe00c
L00460:
  movs	r1, #1
L00462:
  movs	r3, #96
L00464:
  movs	r2, #0
L00466:
  lsls	r1, r1, #30
L00468:
  adds	r1, r7, r1
L0046a:
  ldr	r6, [r1, #20]
L0046c:
  movs	r7, #5
L0046e:
  lsls	r7, r7, #17
L00470:
  bics	r6, r7
L00472:
  str	r6, [r1, #20]
L00474:
  .inst.n 0xe001
L00476:
  movs	r5, #1
L00478:
  lsls	r5, r5, #11
L0047a:
  ldrb	r1, [r4, #8]
L0047c:
  orrs	r2, r3
L0047e:
  orrs	r2, r5
L00480:
  lsls	r1, r1, #8
L00482:
  orrs	r2, r1
L00484:
  movs	r1, #7
L00486:
  orrs	r2, r1
L00488:
  ldr	r1, [r0, #4]
L0048a:
  mov	r3, ip
L0048c:
  bics	r1, r3
L0048e:
  str	r1, [r0, #4]
L00490:
  ldr	r1, [r0, #4]
L00492:
  orrs	r1, r2
L00494:
  str	r1, [r0, #4]
L00496:
  movs	r1, #1
L00498:
  str	r1, [r0, #0]
L0049a:
  pop	{r4, r5, r6, r7, pc}
L0049c:
  push	{r4, lr}
L0049e:
  cmp	r1, #9
L004a0:
  .inst.n 0xd001
L004a2:
  bl	L03004
L004a6:
  pop	{r4, pc}
L004a8:
  push	{r4, r5, r6, lr}
L004aa:
  mov	r4, r1
L004ac:
  mov	r5, r0
L004ae:
  bl	L03010
L004b2:
  cmp	r4, #3
L004b4:
  .inst.n 0xd107
L004b6:
  ldr	r0, [pc, #796]
L004b8:
  lsls	r1, r5, #8
L004ba:
  adds	r0, r1, r0
L004bc:
  ldr	r1, [r0, #36]
L004be:
  movs	r2, #1
L004c0:
  lsls	r2, r2, #20
L004c2:
  orrs	r1, r2
L004c4:
  str	r1, [r0, #36]
L004c6:
  pop	{r4, r5, r6, pc}
L004c8:
  push	{r3, r4, r5, r6, r7, lr}
L004ca:
  mov	r6, r0
L004cc:
  lsls	r7, r0, #8
L004ce:
  ldr	r0, [pc, #772]
L004d0:
  subs	r0, #64
L004d2:
  adds	r0, r7, r0
L004d4:
  ldr	r5, [r0, #56]
L004d6:
  ldr	r2, [pc, #768]
L004d8:
  mov	r0, r6
L004da:
  muls	r0, r2
L004dc:
  ldr	r2, [pc, #764]
L004de:
  lsls	r1, r5, #13
L004e0:
  adds	r4, r0, r2
L004e2:
  cmp	r1, #0
L004e4:
  .inst.n 0xda04
L004e6:
  movs	r1, #97
L004e8:
  movs	r0, #1
L004ea:
  lsls	r1, r1, #5
L004ec:
  adds	r1, r4, r1
L004ee:
  strb	r0, [r1, #22]
L004f0:
  mov	r0, r6
L004f2:
  bl	L0301c
L004f6:
  lsls	r0, r5, #13
L004f8:
  .inst.n 0xd51c
L004fa:
  movs	r0, #91
L004fc:
  lsls	r0, r0, #5
L004fe:
  adds	r0, r4, r0
L00500:
  ldrb	r0, [r0, #13]
L00502:
  cmp	r0, #0
L00504:
  .inst.n 0xd108
L00506:
  movs	r0, #3
L00508:
  lsls	r0, r0, #10
L0050a:
  adds	r0, r4, r0
L0050c:
  ldrb	r1, [r0, #15]
L0050e:
  cmp	r1, #1
L00510:
  .inst.n 0xd102
L00512:
  ldrb	r0, [r0, #14]
L00514:
  cmp	r0, #1
L00516:
  .inst.n 0xd003
L00518:
  movs	r1, #0
L0051a:
  mov	r0, r6
L0051c:
  bl	L03028
L00520:
  ldr	r0, [pc, #688]
L00522:
  adds	r0, r7, r0
L00524:
  ldr	r2, [r0, #36]
L00526:
  movs	r1, #1
L00528:
  lsls	r1, r1, #20
L0052a:
  bics	r2, r1
L0052c:
  str	r2, [r0, #36]
L0052e:
  ldr	r2, [r0, #36]
L00530:
  orrs	r2, r1
L00532:
  str	r2, [r0, #36]
L00534:
  pop	{r3, r4, r5, r6, r7, pc}
L00536:
  push	{r4, lr}
L00538:
  mov	r4, r0
L0053a:
  movs	r1, #0
L0053c:
  bl	L03028
L00540:
  mov	r0, r4
L00542:
  bl	L03034
L00546:
  pop	{r4, pc}
L00548:
  push	{r4, r5, r6, lr}
L0054a:
  lsls	r4, r0, #1
L0054c:
  mov	r0, r4
L0054e:
  adds	r0, #15
L00550:
  uxtb	r0, r0
L00552:
  bl	L03040
L00556:
  mov	r5, r0
L00558:
  adds	r4, #16
L0055a:
  uxtb	r0, r4
L0055c:
  bl	L03040
L00560:
  movs	r1, #255
L00562:
  adds	r1, #172
L00564:
  cmp	r5, r1
L00566:
  .inst.n 0xd801
L00568:
  cmp	r0, r1
L0056a:
  .inst.n 0xd901
L0056c:
  movs	r0, #1
L0056e:
  pop	{r4, r5, r6, pc}
L00570:
  movs	r0, #0
L00572:
  pop	{r4, r5, r6, pc}
L00574:
  ldr	r1, [pc, #604]
L00576:
  lsls	r0, r0, #8
L00578:
  subs	r1, #64
L0057a:
  adds	r0, r0, r1
L0057c:
  ldr	r0, [r0, #4]
L0057e:
  lsls	r0, r0, #24
L00580:
  lsrs	r0, r0, #31
L00582:
  bx	lr
L00584:
  push	{r4, lr}
L00586:
  mov	r4, r0
L00588:
  ldr	r0, [pc, #596]
L0058a:
  ldrb	r0, [r0, r4]
L0058c:
  cmp	r0, #7
L0058e:
  .inst.n 0xd001
L00590:
  cmp	r0, #8
L00592:
  .inst.n 0xd124
L00594:
  mov	r0, r4
L00596:
  bl	L0304c
L0059a:
  cmp	r0, #0
L0059c:
  .inst.n 0xd11f
L0059e:
  ldr	r0, [pc, #568]
L005a0:
  ldr	r1, [pc, #568]
L005a2:
  muls	r0, r4
L005a4:
  adds	r0, r0, r1
L005a6:
  movs	r1, #91
L005a8:
  lsls	r1, r1, #5
L005aa:
  adds	r1, r0, r1
L005ac:
  movs	r2, #15
L005ae:
  ldrb	r1, [r1, #14]
L005b0:
  lsls	r2, r2, #6
L005b2:
  adds	r0, r0, r2
L005b4:
  cmp	r1, #0
L005b6:
  .inst.n 0xd002
L005b8:
  cmp	r1, #1
L005ba:
  .inst.n 0xd006
L005bc:
  .inst.n 0xe00f
L005be:
  ldrh	r0, [r0, #20]
L005c0:
  lsls	r0, r0, #19
L005c2:
  lsrs	r0, r0, #30
L005c4:
  cmp	r0, #3
L005c6:
  .inst.n 0xd005
L005c8:
  .inst.n 0xe009
L005ca:
  ldrh	r0, [r0, #20]
L005cc:
  lsls	r0, r0, #19
L005ce:
  lsrs	r0, r0, #30
L005d0:
  cmp	r0, #2
L005d2:
  .inst.n 0xd304
L005d4:
  mov	r0, r4
L005d6:
  .inst.w 0xf7ffffcd
L005da:
  cmp	r0, #0
L005dc:
  .inst.n 0xd005
L005de:
  mov	r0, r4
L005e0:
  bl	L03058
L005e4:
  mov	r1, r0
L005e6:
  mov	r0, r1
L005e8:
  pop	{r4, pc}
L005ea:
  ldr	r0, [pc, #488]
L005ec:
  movs	r1, #255
L005ee:
  lsls	r2, r4, #8
L005f0:
  subs	r0, #64
L005f2:
  adds	r0, r2, r0
L005f4:
  ldr	r3, [r0, #8]
L005f6:
  movs	r2, #64
L005f8:
  orrs	r3, r2
L005fa:
  str	r3, [r0, #8]
L005fc:
  ldr	r3, [r0, #0]
L005fe:
  orrs	r3, r2
L00600:
  str	r3, [r0, #0]
L00602:
  .inst.n 0xe7f0
L00604:
  push	{r4, lr}
L00606:
  ldr	r1, [pc, #460]
L00608:
  mov	r4, r0
L0060a:
  lsls	r0, r0, #8
L0060c:
  subs	r1, #64
L0060e:
  adds	r0, r0, r1
L00610:
  ldr	r0, [r0, #4]
L00612:
  lsls	r0, r0, #25
L00614:
  .inst.n 0xd50d
L00616:
  ldr	r0, [pc, #456]
L00618:
  ldrb	r1, [r0, r4]
L0061a:
  cmp	r1, #7
L0061c:
  .inst.n 0xd001
L0061e:
  cmp	r1, #8
L00620:
  .inst.n 0xd107
L00622:
  mov	r0, r4
L00624:
  bl	L03064
L00628:
  cmp	r0, #0
L0062a:
  .inst.n 0xd002
L0062c:
  mov	r0, r4
L0062e:
  bl	L03070
L00632:
  mov	r0, r4
L00634:
  bl	L0307c
L00638:
  pop	{r4, pc}
L0063a:
  ldr	r1, [pc, #424]
L0063c:
  ldrb	r0, [r1, r0]
L0063e:
  cmp	r0, #60
L00640:
  .inst.n 0xd011
L00642:
  .inst.n 0xdc08
L00644:
  cmp	r0, #28
L00646:
  .inst.n 0xd00e
L00648:
  cmp	r0, #30
L0064a:
  .inst.n 0xd00c
L0064c:
  cmp	r0, #40
L0064e:
  .inst.n 0xd00a
L00650:
  cmp	r0, #59
L00652:
  .inst.n 0xd106
L00654:
  .inst.n 0xe007
L00656:
  cmp	r0, #243
L00658:
  .inst.n 0xd005
L0065a:
  cmp	r0, #248
L0065c:
  .inst.n 0xd003
L0065e:
  cmp	r0, #250
L00660:
  .inst.n 0xd001
L00662:
  movs	r0, #0
L00664:
  bx	lr
L00666:
  movs	r0, #1
L00668:
  bx	lr
L0066a:
  push	{r4, r5, r6, lr}
L0066c:
  mov	r5, r1
L0066e:
  mov	r4, r0
L00670:
  movs	r0, #36
L00672:
  ldr	r1, [pc, #372]
L00674:
  muls	r0, r4
L00676:
  adds	r0, r0, r1
L00678:
  ldrb	r0, [r0, #10]
L0067a:
  cmp	r0, #1
L0067c:
  .inst.n 0xd007
L0067e:
  mov	r0, r4
L00680:
  bl	L03088
L00684:
  ldr	r0, [pc, #348]
L00686:
  ldr	r1, [pc, #356]
L00688:
  strb	r5, [r0, r4]
L0068a:
  movs	r0, #255
L0068c:
  strb	r0, [r1, r4]
L0068e:
  pop	{r4, r5, r6, pc}
L00690:
  push	{r4, r5, r6, lr}
L00692:
  mov	r5, r1
L00694:
  mov	r4, r0
L00696:
  bl	L03094
L0069a:
  mov	r1, r0
L0069c:
  ldr	r2, [pc, #312]
L0069e:
  mov	r0, r4
L006a0:
  muls	r0, r2
L006a2:
  ldr	r2, [pc, #312]
L006a4:
  adds	r2, r0, r2
L006a6:
  movs	r0, #23
L006a8:
  lsls	r0, r0, #7
L006aa:
  adds	r3, r2, r0
L006ac:
  cmp	r1, #0
L006ae:
  .inst.n 0xd009
L006b0:
  ldrb	r1, [r3, #2]
L006b2:
  cmp	r1, #1
L006b4:
  .inst.n 0xd019
L006b6:
  cmp	r1, #2
L006b8:
  .inst.n 0xd103
L006ba:
  movs	r1, #17
L006bc:
  mov	r0, r4
L006be:
  .inst.w 0xf7ffffd4
L006c2:
  pop	{r4, r5, r6, pc}
L006c4:
  ldrb	r0, [r3, #2]
L006c6:
  cmp	r0, #0
L006c8:
  .inst.n 0xd009
L006ca:
  mov	r0, r4
L006cc:
  .inst.w 0xf7ffffb5
L006d0:
  cmp	r0, #0
L006d2:
  .inst.n 0xd004
L006d4:
  movs	r1, #17
L006d6:
  mov	r0, r4
L006d8:
  bl	L030a0
L006dc:
  pop	{r4, r5, r6, pc}
L006de:
  movs	r0, #113
L006e0:
  lsls	r0, r0, #5
L006e2:
  adds	r0, r2, r0
L006e4:
  strb	r5, [r0, #10]
L006e6:
  movs	r1, #4
L006e8:
  .inst.n 0xe7e8
L006ea:
  movs	r1, #45
L006ec:
  .inst.n 0xe7e6
L006ee:
  push	{r4, r5, r6, lr}
L006f0:
  mov	r4, r0
L006f2:
  bl	L030ac
L006f6:
  mov	r5, r0
L006f8:
  cmp	r0, #255
L006fa:
  .inst.n 0xd12a
L006fc:
  ldr	r0, [pc, #216]
L006fe:
  ldr	r1, [pc, #220]
L00700:
  muls	r0, r4
L00702:
  adds	r0, r0, r1
L00704:
  movs	r1, #91
L00706:
  lsls	r1, r1, #5
L00708:
  adds	r1, r0, r1
L0070a:
  ldrb	r1, [r1, #14]
L0070c:
  cmp	r1, #0
L0070e:
  .inst.n 0xd120
L00710:
  movs	r1, #99
L00712:
  lsls	r1, r1, #5
L00714:
  adds	r2, r0, r1
L00716:
  ldrb	r3, [r2, #12]
L00718:
  movs	r1, #247
L0071a:
  ands	r3, r1
L0071c:
  ldr	r1, [pc, #192]
L0071e:
  strb	r3, [r2, #12]
L00720:
  ldrb	r1, [r1, r4]
L00722:
  cmp	r1, #17
L00724:
  .inst.n 0xd006
L00726:
  cmp	r1, #14
L00728:
  .inst.n 0xd004
L0072a:
  cmp	r1, #15
L0072c:
  .inst.n 0xd002
L0072e:
  cmp	r1, #16
L00730:
  .inst.n 0xd00b
L00732:
  .inst.n 0xe00e
L00734:
  movs	r1, #8
L00736:
  orrs	r3, r1
L00738:
  movs	r1, #7
L0073a:
  lsls	r1, r1, #9
L0073c:
  strb	r3, [r2, #12]
L0073e:
  adds	r0, r0, r1
L00740:
  ldrb	r0, [r0, #0]
L00742:
  cmp	r0, #22
L00744:
  .inst.n 0xd105
L00746:
  movs	r1, #0
L00748:
  .inst.n 0xe000
L0074a:
  movs	r1, #3
L0074c:
  mov	r0, r4
L0074e:
  bl	L030b8
L00752:
  mov	r0, r5
L00754:
  pop	{r4, r5, r6, pc}
L00756:
  ldr	r1, [pc, #128]
L00758:
  muls	r0, r1
L0075a:
  ldr	r1, [pc, #128]
L0075c:
  adds	r0, r0, r1
L0075e:
  movs	r1, #99
L00760:
  lsls	r1, r1, #5
L00762:
  adds	r1, r0, r1
L00764:
  ldrb	r1, [r1, #25]
L00766:
  cmp	r1, #5
L00768:
  .inst.n 0xd213
L0076a:
  movs	r1, #15
L0076c:
  lsls	r1, r1, #6
L0076e:
  adds	r1, r0, r1
L00770:
  ldrb	r1, [r1, #20]
L00772:
  lsls	r1, r1, #26
L00774:
  lsrs	r1, r1, #29
L00776:
  cmp	r1, #1
L00778:
  .inst.n 0xd80b
L0077a:
  movs	r1, #91
L0077c:
  lsls	r1, r1, #5
L0077e:
  adds	r1, r0, r1
L00780:
  ldrb	r1, [r1, #11]
L00782:
  cmp	r1, #2
L00784:
  .inst.n 0xd007
L00786:
  movs	r1, #23
L00788:
  lsls	r1, r1, #7
L0078a:
  adds	r0, r0, r1
L0078c:
  ldrb	r0, [r0, #2]
L0078e:
  cmp	r0, #1
L00790:
  .inst.n 0xd001
L00792:
  movs	r0, #0
L00794:
  bx	lr
L00796:
  movs	r0, #1
L00798:
  bx	lr
L0079a:
  push	{r4, lr}
L0079c:
  cmp	r0, #7
L0079e:
  .inst.n 0xd001
L007a0:
  cmp	r0, #8
L007a2:
  .inst.n 0xd106
L007a4:
  ldr	r3, [pc, #72]
L007a6:
  ldrh	r3, [r3, #34]
L007a8:
  lsls	r3, r3, #17
L007aa:
  lsrs	r3, r3, #29
L007ac:
  cmp	r3, #7
L007ae:
  .inst.n 0xd100
L007b0:
  ldr	r1, [pc, #64]
L007b2:
  mov	r3, r2
L007b4:
  mov	r2, r1
L007b6:
  mov	r1, r0
L007b8:
  movs	r0, #2
L007ba:
  bl	L030c4
L007be:
  pop	{r4, pc}
L007c0:
  .word 0xe000ed00
L007c4:
  .word 0xe000e400
L007c8:
  .word 0x2002331c
L007cc:
  .word 0x0fff0ff7
L007d0:
  .word 0x40000900
L007d4:
  .word 0x40090940
L007d8:
  .word 0x00000ec4
L007dc:
  .word 0x200214c4
L007e0:
  .word 0x2002331a
L007e4:
  .word 0x20023336
L007e8:
  .word 0x20027c1c
L007ec:
  .word 0x200200d4
L007f0:
  .word 0x2002324c
L007f4:
  .word 0x00004e20
L007f8:
  push	{r0, r1, r2, r3, r4, r5, r6, r7, lr}
L007fa:
  sub	sp, #12
L007fc:
  ldr	r0, [sp, #12]
L007fe:
  ldr	r1, [pc, #996]
L00800:
  lsls	r0, r0, #8
L00802:
  adds	r0, r0, r1
L00804:
  str	r0, [sp, #4]
L00806:
  ldr	r4, [r0, #4]
L00808:
  ldr	r0, [pc, #988]
L0080a:
  ldr	r1, [sp, #12]
L0080c:
  ldr	r0, [r0, #124]
L0080e:
  cmp	r1, #0
L00810:
  .inst.n 0xd011
L00812:
  lsls	r0, r0, #28
L00814:
  lsrs	r0, r0, #30
L00816:
  str	r0, [sp, #0]
L00818:
  ldr	r0, [sp, #16]
L0081a:
  cmp	r0, #0
L0081c:
  .inst.n 0xd057
L0081e:
  cmp	r3, #1
L00820:
  .inst.n 0xd00c
L00822:
  cmp	r3, #2
L00824:
  .inst.n 0xd00d
L00826:
  movs	r6, #0
L00828:
  mov	r5, r6
L0082a:
  ldr	r0, [pc, #956]
L0082c:
  adds	r0, #128
L0082e:
  ldrb	r0, [r0, #20]
L00830:
  cmp	r0, #0
L00832:
  .inst.n 0xd009
L00834:
  .inst.n 0xe022
L00836:
  lsls	r0, r0, #30
L00838:
  lsrs	r0, r0, #30
L0083a:
  .inst.n 0xe7ec
L0083c:
  movs	r6, #1
L0083e:
  mov	r5, r6
L00840:
  .inst.n 0xe7f3
L00842:
  movs	r6, #3
L00844:
  movs	r5, #2
L00846:
  .inst.n 0xe7f0
L00848:
  ldr	r0, [pc, #928]
L0084a:
  muls	r1, r0
L0084c:
  ldr	r0, [pc, #928]
L0084e:
  adds	r1, r1, r0
L00850:
  movs	r0, #15
L00852:
  lsls	r0, r0, #6
L00854:
  adds	r7, r1, r0
L00856:
  ldr	r0, [r7, #40]
L00858:
  movs	r1, #12
L0085a:
  bics	r0, r1
L0085c:
  str	r0, [r7, #40]
L0085e:
  movs	r1, #27
L00860:
  ldr	r0, [sp, #12]
L00862:
  bl	L02ff8
L00866:
  ldr	r0, [sp, #20]
L00868:
  cmp	r0, #1
L0086a:
  .inst.n 0xd107
L0086c:
  ldr	r0, [r7, #28]
L0086e:
  movs	r1, #32
L00870:
  orrs	r0, r1
L00872:
  str	r0, [r7, #28]
L00874:
  movs	r1, #26
L00876:
  ldr	r0, [sp, #12]
L00878:
  .word 0xfbbef002
L0087c:
  ldr	r0, [sp, #16]
L0087e:
  lsls	r0, r0, #31
L00880:
  .inst.n 0xd010
L00882:
  ldr	r0, [pc, #880]
L00884:
  ands	r4, r0
L00886:
  ldr	r0, [sp, #20]
L00888:
  cmp	r0, #1
L0088a:
  .inst.n 0xd10b
L0088c:
  ldr	r0, [sp, #0]
L0088e:
  cmp	r0, #2
L00890:
  .inst.n 0xd008
L00892:
  lsls	r0, r6, #10
L00894:
  lsls	r1, r5, #6
L00896:
  orrs	r0, r1
L00898:
  lsls	r1, r5, #2
L0089a:
  orrs	r0, r1
L0089c:
  ldr	r1, [pc, #856]
L0089e:
  orrs	r0, r4
L008a0:
  orrs	r0, r1
L008a2:
  mov	r4, r0
L008a4:
  ldr	r0, [sp, #16]
L008a6:
  lsls	r0, r0, #30
L008a8:
  .inst.n 0xd50f
L008aa:
  ldr	r0, [pc, #848]
L008ac:
  ands	r4, r0
L008ae:
  ldr	r0, [sp, #20]
L008b0:
  cmp	r0, #1
L008b2:
  .inst.n 0xd10a
L008b4:
  ldr	r0, [sp, #0]
L008b6:
  cmp	r0, #3
L008b8:
  .inst.n 0xd007
L008ba:
  lsls	r0, r6, #8
L008bc:
  lsls	r1, r5, #4
L008be:
  orrs	r0, r1
L008c0:
  orrs	r0, r5
L008c2:
  ldr	r1, [pc, #828]
L008c4:
  orrs	r0, r4
L008c6:
  orrs	r0, r1
L008c8:
  mov	r4, r0
L008ca:
  ldr	r0, [sp, #4]
L008cc:
  str	r4, [r0, #4]
L008ce:
  add	sp, #28
L008d0:
  pop	{r4, r5, r6, r7, pc}
L008d2:
  push	{r4, r5, r6, lr}
L008d4:
  lsls	r6, r0, #8
L008d6:
  mov	r4, r2
L008d8:
  mov	r5, r1
L008da:
  cmp	r1, #0
L008dc:
  .inst.n 0xd030
L008de:
  ldr	r1, [pc, #776]
L008e0:
  adds	r1, #128
L008e2:
  ldrb	r1, [r1, #20]
L008e4:
  cmp	r1, #0
L008e6:
  .inst.n 0xd114
L008e8:
  ldr	r1, [pc, #768]
L008ea:
  mov	r2, r0
L008ec:
  muls	r2, r1
L008ee:
  ldr	r1, [pc, #768]
L008f0:
  adds	r2, r2, r1
L008f2:
  movs	r1, #15
L008f4:
  lsls	r1, r1, #6
L008f6:
  adds	r3, r2, r1
L008f8:
  ldr	r1, [r3, #40]
L008fa:
  movs	r2, #12
L008fc:
  bics	r1, r2
L008fe:
  str	r1, [r3, #40]
L00900:
  cmp	r4, #1
L00902:
  .inst.n 0xd106
L00904:
  ldr	r1, [r3, #28]
L00906:
  movs	r2, #32
L00908:
  bics	r1, r2
L0090a:
  str	r1, [r3, #28]
L0090c:
  movs	r1, #26
L0090e:
  bl	L02ff8
L00912:
  ldr	r0, [pc, #720]
L00914:
  adds	r1, r6, r0
L00916:
  ldr	r0, [r1, #4]
L00918:
  movs	r2, #3
L0091a:
  lsls	r2, r2, #12
L0091c:
  orrs	r0, r2
L0091e:
  lsls	r2, r5, #31
L00920:
  .inst.n 0xd005
L00922:
  ldr	r2, [pc, #720]
L00924:
  ands	r0, r2
L00926:
  cmp	r4, #1
L00928:
  .inst.n 0xd101
L0092a:
  ldr	r2, [pc, #728]
L0092c:
  orrs	r0, r2
L0092e:
  lsls	r2, r5, #30
L00930:
  .inst.n 0xd505
L00932:
  ldr	r2, [pc, #712]
L00934:
  ands	r0, r2
L00936:
  cmp	r4, #1
L00938:
  .inst.n 0xd101
L0093a:
  ldr	r2, [pc, #716]
L0093c:
  orrs	r0, r2
L0093e:
  str	r0, [r1, #4]
L00940:
  pop	{r4, r5, r6, pc}
L00942:
  push	{r4, lr}
L00944:
  mov	r4, r0
L00946:
  movs	r1, #1
L00948:
  bl	L030d0
L0094c:
  mov	r0, r4
L0094e:
  bl	L030dc
L00952:
  .inst.n 0xe734
L00954:
  push	{r4, r5, r6, lr}
L00956:
  ldr	r0, [pc, #692]
L00958:
  ldrb	r1, [r0, #0]
L0095a:
  ldrb	r0, [r0, #1]
L0095c:
  orrs	r1, r0
L0095e:
  .inst.n 0xd001
L00960:
  movs	r4, #1
L00962:
  .inst.n 0xe000
L00964:
  movs	r4, #0
L00966:
  ldr	r0, [pc, #640]
L00968:
  adds	r0, #32
L0096a:
  ldrb	r0, [r0, #24]
L0096c:
  lsls	r0, r0, #31
L0096e:
  .inst.n 0xd034
L00970:
  ldr	r0, [pc, #668]
L00972:
  ldrb	r0, [r0, #28]
L00974:
  cmp	r0, #0
L00976:
  .inst.n 0xd130
L00978:
  ldr	r0, [pc, #664]
L0097a:
  ldrb	r0, [r0, #0]
L0097c:
  cmp	r0, #0
L0097e:
  .inst.n 0xd12c
L00980:
  ldr	r5, [pc, #612]
L00982:
  adds	r5, #128
L00984:
  ldrb	r0, [r5, #22]
L00986:
  lsls	r0, r0, #29
L00988:
  .inst.n 0xd40b
L0098a:
  movs	r0, #4
L0098c:
  bl	L030e8
L00990:
  movs	r0, #64
L00992:
  bl	L030f4
L00996:
  movs	r1, #255
L00998:
  ldr	r2, [pc, #636]
L0099a:
  adds	r1, #145
L0099c:
  movs	r0, #4
L0099e:
  bl	L03100
L009a2:
  mrs	r0, PRIMASK
L009a6:
  lsls	r6, r0, #31
L009a8:
  lsrs	r6, r6, #31
L009aa:
  cpsid	i
L009ac:
  ldrh	r0, [r5, #22]
L009ae:
  ldr	r2, [pc, #620]
L009b0:
  lsls	r1, r0, #23
L009b2:
  cmp	r1, r2
L009b4:
  .inst.n 0xd101
L009b6:
  cmp	r4, #0
L009b8:
  .inst.n 0xd007
L009ba:
  movs	r1, #255
L009bc:
  adds	r1, #253
L009be:
  ands	r0, r1
L009c0:
  cmp	r0, r1
L009c2:
  .inst.n 0xd307
L009c4:
  cmp	r4, #0
L009c6:
  .inst.n 0xd002
L009c8:
  .inst.n 0xe004
L009ca:
  movs	r0, #5
L009cc:
  .inst.n 0xe000
L009ce:
  movs	r0, #4
L009d0:
  bl	L0310c
L009d4:
  cmp	r6, #0
L009d6:
  .inst.n 0xd100
L009d8:
  cpsie	i
L009da:
  pop	{r4, r5, r6, pc}
L009dc:
  push	{r3, r4, r5, r6, r7, lr}
L009de:
  ldr	r2, [pc, #576]
L009e0:
  mov	r4, r0
L009e2:
  movs	r0, #1
L009e4:
  adds	r2, r1, r2
L009e6:
  movs	r6, #3
L009e8:
  ldr	r5, [sp, #28]
L009ea:
  cmp	r2, #0
L009ec:
  .inst.n 0xd013
L009ee:
  ldr	r7, [pc, #564]
L009f0:
  adds	r2, r2, r7
L009f2:
  .inst.n 0xd122
L009f4:
  ldr	r0, [pc, #500]
L009f6:
  ldr	r2, [pc, #504]
L009f8:
  muls	r0, r4
L009fa:
  adds	r0, r0, r2
L009fc:
  movs	r2, #91
L009fe:
  lsls	r2, r2, #5
L00a00:
  adds	r2, r0, r2
L00a02:
  ldrb	r2, [r2, #14]
L00a04:
  cmp	r2, #1
L00a06:
  .inst.n 0xd012
L00a08:
  movs	r2, #23
L00a0a:
  lsls	r2, r2, #7
L00a0c:
  adds	r0, r0, r2
L00a0e:
  ldrb	r0, [r0, #2]
L00a10:
  cmp	r0, #2
L00a12:
  .inst.n 0xd00c
L00a14:
  .inst.n 0xe00f
L00a16:
  ldr	r0, [pc, #528]
L00a18:
  ldr	r0, [r0, #0]
L00a1a:
  str	r0, [sp, #0]
L00a1c:
  ldr	r0, [pc, #524]
L00a1e:
  strb	r6, [r0, #0]
L00a20:
  mov	r0, sp
L00a22:
  bl	L03118
L00a26:
  ldr	r1, [pc, #524]
L00a28:
  ldr	r0, [pc, #516]
L00a2a:
  str	r0, [r1, #0]
L00a2c:
  .inst.n 0xe004
L00a2e:
  ldr	r0, [pc, #520]
L00a30:
  ldrb	r0, [r0, r4]
L00a32:
  cmp	r0, #0
L00a34:
  .inst.n 0xd002
L00a36:
  str	r6, [r5, #0]
L00a38:
  movs	r0, #0
L00a3a:
  pop	{r3, r4, r5, r6, r7, pc}
L00a3c:
  mov	r2, r1
L00a3e:
  movs	r1, #22
L00a40:
  mov	r0, r4
L00a42:
  bl	L03124
L00a46:
  str	r0, [r5, #0]
L00a48:
  .inst.n 0xe7f6
L00a4a:
  push	{r4, r5, r6, lr}
L00a4c:
  mov	r6, r0
L00a4e:
  ldr	r0, [pc, #412]
L00a50:
  mov	r1, r6
L00a52:
  muls	r1, r0
L00a54:
  ldr	r0, [pc, #408]
L00a56:
  movs	r5, #1
L00a58:
  adds	r4, r1, r0
L00a5a:
  movs	r0, #17
L00a5c:
  lsls	r0, r0, #6
L00a5e:
  adds	r0, r4, r0
L00a60:
  strb	r5, [r0, #3]
L00a62:
  strb	r5, [r0, #2]
L00a64:
  movs	r1, #0
L00a66:
  mov	r0, r6
L00a68:
  bl	L03130
L00a6c:
  movs	r0, #113
L00a6e:
  lsls	r0, r0, #5
L00a70:
  adds	r0, r4, r0
L00a72:
  strb	r5, [r0, #6]
L00a74:
  movs	r0, #91
L00a76:
  lsls	r0, r0, #5
L00a78:
  adds	r0, r4, r0
L00a7a:
  ldrb	r0, [r0, #13]
L00a7c:
  cmp	r0, #1
L00a7e:
  .inst.n 0xd004
L00a80:
  movs	r1, #10
L00a82:
  mov	r0, r6
L00a84:
  bl	L0313c
L00a88:
  pop	{r4, r5, r6, pc}
L00a8a:
  movs	r0, #23
L00a8c:
  lsls	r0, r0, #7
L00a8e:
  adds	r0, r4, r0
L00a90:
  ldrb	r0, [r0, #2]
L00a92:
  cmp	r0, #2
L00a94:
  .inst.n 0xd102
L00a96:
  mov	r0, r6
L00a98:
  bl	L03148
L00a9c:
  movs	r2, #10
L00a9e:
  ldr	r1, [pc, #412]
L00aa0:
  mov	r0, r6
L00aa2:
  bl	L03154
L00aa6:
  movs	r0, #36
L00aa8:
  muls	r6, r0
L00aaa:
  ldr	r0, [pc, #404]
L00aac:
  adds	r0, r6, r0
L00aae:
  strb	r5, [r0, #10]
L00ab0:
  pop	{r4, r5, r6, pc}
L00ab2:
  push	{r4, lr}
L00ab4:
  movs	r3, #36
L00ab6:
  ldr	r4, [pc, #392]
L00ab8:
  muls	r3, r0
L00aba:
  adds	r3, r3, r4
L00abc:
  ldrb	r3, [r3, #10]
L00abe:
  cmp	r3, #0
L00ac0:
  .inst.n 0xd103
L00ac2:
  cmp	r2, #114
L00ac4:
  .inst.n 0xd001
L00ac6:
  bl	L03160
L00aca:
  .inst.n 0xe678
L00acc:
  push	{r4, lr}
L00ace:
  mov	r4, r0
L00ad0:
  bl	L0316c
L00ad4:
  ldr	r1, [pc, #352]
L00ad6:
  ldrb	r1, [r1, r4]
L00ad8:
  cmp	r1, #2
L00ada:
  .inst.n 0xd100
L00adc:
  movs	r0, #114
L00ade:
  .inst.n 0xe66e
L00ae0:
  movs	r1, #0
L00ae2:
  ldr	r3, [pc, #348]
L00ae4:
  mov	r2, r1
L00ae6:
  movs	r0, #36
L00ae8:
  muls	r0, r1
L00aea:
  adds	r0, r0, r3
L00aec:
  str	r2, [r0, #28]
L00aee:
  str	r2, [r0, #32]
L00af0:
  str	r2, [r0, #12]
L00af2:
  str	r2, [r0, #20]
L00af4:
  .inst.n 0x1c49
L00af6:
  strh	r2, [r0, #24]
L00af8:
  uxtb	r1, r1
L00afa:
  str	r2, [r0, #16]
L00afc:
  cmp	r1, #2
L00afe:
  .inst.n 0xd3f2
L00b00:
  bx	lr
L00b02:
  push	{r4, r5, r6, r7, lr}
L00b04:
  movs	r3, #1
L00b06:
  strb	r3, [r2, #0]
L00b08:
  movs	r3, #36
L00b0a:
  muls	r3, r0
L00b0c:
  ldr	r4, [pc, #304]
L00b0e:
  ldr	r7, [pc, #220]
L00b10:
  adds	r3, r3, r4
L00b12:
  ldrb	r4, [r3, #28]
L00b14:
  ldr	r6, [pc, #216]
L00b16:
  lsls	r5, r4, #31
L00b18:
  movs	r4, #15
L00b1a:
  muls	r0, r7
L00b1c:
  lsls	r4, r4, #6
L00b1e:
  adds	r0, r0, r6
L00b20:
  lsrs	r5, r5, #31
L00b22:
  adds	r4, r0, r4
L00b24:
  cmp	r1, #26
L00b26:
  .inst.n 0xd00b
L00b28:
  cmp	r1, #27
L00b2a:
  .inst.n 0xd022
L00b2c:
  cmp	r1, #64
L00b2e:
  .inst.n 0xd128
L00b30:
  movs	r6, #45
L00b32:
  lsls	r6, r6, #6
L00b34:
  adds	r0, r0, r6
L00b36:
  ldr	r1, [r3, #16]
L00b38:
  ldr	r0, [r0, #52]
L00b3a:
  cmp	r1, r0
L00b3c:
  .inst.n 0xd01f
L00b3e:
  .inst.n 0xe021
L00b40:
  mov	r1, r3
L00b42:
  movs	r4, #247
L00b44:
  adds	r1, #28
L00b46:
  lsls	r4, r4, #2
L00b48:
  adds	r0, r0, r4
L00b4a:
  movs	r4, #0
L00b4c:
  mov	lr, r0
L00b4e:
  mov	ip, r4
L00b50:
  ldrb	r6, [r1, #0]
L00b52:
  ldrb	r7, [r0, #0]
L00b54:
  .inst.n 0x1c49
L00b56:
  .inst.n 0x1c40
L00b58:
  cmp	r6, r7
L00b5a:
  .inst.n 0xd105
L00b5c:
  .inst.n 0x1c64
L00b5e:
  cmp	r4, #8
L00b60:
  .inst.n 0xd3f6
L00b62:
  mov	r0, ip
L00b64:
  cmp	r0, #0
L00b66:
  .inst.n 0xd00a
L00b68:
  mov	r1, lr
L00b6a:
  ldmia	r1, {r0, r1}
L00b6c:
  str	r1, [r3, #32]
L00b6e:
  str	r0, [r3, #28]
L00b70:
  .inst.n 0xe00a
L00b72:
  ldr	r1, [r3, #12]
L00b74:
  ldr	r0, [r4, #40]
L00b76:
  cmp	r1, r0
L00b78:
  .inst.n 0xd001
L00b7a:
  str	r0, [r3, #12]
L00b7c:
  .inst.n 0xe003
L00b7e:
  movs	r0, #0
L00b80:
  strb	r0, [r2, #0]
L00b82:
  pop	{r4, r5, r6, r7, pc}
L00b84:
  str	r0, [r3, #16]
L00b86:
  ldrb	r0, [r4, #28]
L00b88:
  lsls	r0, r0, #31
L00b8a:
  lsrs	r0, r0, #31
L00b8c:
  orrs	r0, r5
L00b8e:
  .inst.n 0xd0f6
L00b90:
  pop	{r4, r5, r6, r7, pc}
L00b92:
  push	{r3, r4, r5, r6, lr}
L00b94:
  ldr	r3, [pc, #84]
L00b96:
  ldr	r6, [pc, #88]
L00b98:
  muls	r3, r0
L00b9a:
  adds	r3, r3, r6
L00b9c:
  ldr	r5, [pc, #160]
L00b9e:
  movs	r6, #36
L00ba0:
  muls	r0, r6
L00ba2:
  movs	r4, #0
L00ba4:
  adds	r0, r0, r5
L00ba6:
  cmp	r1, #24
L00ba8:
  .inst.n 0xd009
L00baa:
  cmp	r1, #25
L00bac:
  .inst.n 0xd10f
L00bae:
  movs	r1, #15
L00bb0:
  lsls	r1, r1, #6
L00bb2:
  adds	r1, r3, r1
L00bb4:
  ldr	r5, [r0, #20]
L00bb6:
  ldr	r1, [r1, #36]
L00bb8:
  cmp	r5, r1
L00bba:
  .inst.n 0xd007
L00bbc:
  .inst.n 0xe042
L00bbe:
  movs	r1, #111
L00bc0:
  lsls	r1, r1, #5
L00bc2:
  adds	r1, r3, r1
L00bc4:
  ldrh	r5, [r0, #24]
L00bc6:
  ldrh	r1, [r1, #28]
L00bc8:
  cmp	r5, r1
L00bca:
  .inst.n 0xd101
L00bcc:
  strb	r4, [r2, #0]
L00bce:
  pop	{r3, r4, r5, r6, pc}
L00bd0:
  ldr	r3, [r0, #24]
L00bd2:
  str	r3, [sp, #0]
L00bd4:
  strh	r1, [r0, #24]
L00bd6:
  lsls	r0, r1, #31
L00bd8:
  .inst.n 0xd1f9
L00bda:
  mov	r0, sp
L00bdc:
  ldrh	r0, [r0, #0]
L00bde:
  lsls	r0, r0, #31
L00be0:
  .inst.n 0xe034
L00be2:
  movs	r0, r0
L00be4:
  .word 0x40090980
L00be8:
  .word 0x2002324c
L00bec:
  .word 0x00000ec4
L00bf0:
  .word 0x200214c4
L00bf4:
  .word 0xff5ff333
L00bf8:
  .word 0x00202000
L00bfc:
  .word 0xffaffccc
L00c00:
  .word 0x00101000
L00c04:
  .word 0x008000cc
L00c08:
  .word 0x00400033
L00c0c:
  .word 0x2002126c
L00c10:
  .word 0x20022364
L00c14:
  .word 0x20023244
L00c18:
  .word 0x0001855f
L00c1c:
  movs	r0, r0
L00c1e:
  .inst.w 0xff80beb9
L00c22:
  .inst.n 0xbbb6
L00c24:
  .word 0xd104f406
L00c28:
  .word 0x20026f58
L00c2c:
  .word 0x20023bac
L00c30:
  .word 0xdecedead
L00c34:
  .word 0x40050000
L00c38:
  .word 0x2002331a
L00c3c:
  .word 0x00007530
L00c40:
  .word 0x20027c1c
L00c44:
  str	r1, [r0, #20]
L00c46:
  lsls	r0, r1, #31
L00c48:
  .inst.n 0xd1c1
L00c4a:
  lsls	r0, r5, #31
L00c4c:
  cmp	r0, #0
L00c4e:
  .inst.n 0xd0bd
L00c50:
  pop	{r3, r4, r5, r6, pc}
L00c52:
  push	{r4, lr}
L00c54:
  ldr	r0, [pc, #980]
L00c56:
  ldr	r0, [r0, #12]
L00c58:
  ldr	r2, [pc, #980]
L00c5a:
  str	r0, [r2, #16]
L00c5c:
  ldr	r3, [pc, #980]
L00c5e:
  movs	r0, #0
L00c60:
  ldr	r1, [pc, #980]
L00c62:
  ldr	r4, [r2, #16]
L00c64:
  muls	r1, r0
L00c66:
  adds	r1, r1, r3
L00c68:
  str	r4, [r1, #72]
L00c6a:
  ldr	r4, [r2, #16]
L00c6c:
  .inst.n 0x1c40
L00c6e:
  uxtb	r0, r0
L00c70:
  str	r4, [r1, #96]
L00c72:
  cmp	r0, #2
L00c74:
  .inst.n 0xd3f4
L00c76:
  ldr	r1, [pc, #952]
L00c78:
  ldr	r4, [pc, #960]
L00c7a:
  movs	r2, #14
L00c7c:
  adds	r1, #22
L00c7e:
  adds	r0, r4, #2
L00c80:
  bl	L03178
L00c84:
  ldr	r1, [pc, #952]
L00c86:
  movs	r0, #1
L00c88:
  strb	r0, [r1, #4]
L00c8a:
  strb	r0, [r4, #0]
L00c8c:
  .inst.n 0xe597
L00c8e:
  push	{r3, r4, r5, r6, r7, lr}
L00c90:
  mov	r4, r0
L00c92:
  lsls	r1, r0, #2
L00c94:
  ldr	r0, [pc, #940]
L00c96:
  ldr	r0, [r0, r1]
L00c98:
  ldr	r1, [r0, #0]
L00c9a:
  cmp	r1, #0
L00c9c:
  .inst.n 0xd03e
L00c9e:
  movs	r1, #0
L00ca0:
  str	r1, [r0, #0]
L00ca2:
  ldr	r1, [pc, #920]
L00ca4:
  movs	r0, #36
L00ca6:
  muls	r0, r4
L00ca8:
  adds	r1, #20
L00caa:
  adds	r6, r0, r1
L00cac:
  ldrb	r0, [r6, #10]
L00cae:
  ldr	r7, [pc, #920]
L00cb0:
  cmp	r0, #1
L00cb2:
  .inst.n 0xd01a
L00cb4:
  ldr	r2, [pc, #916]
L00cb6:
  ldr	r1, [pc, #896]
L00cb8:
  ldr	r3, [pc, #888]
L00cba:
  ldrb	r0, [r2, r4]
L00cbc:
  muls	r1, r4
L00cbe:
  adds	r5, r1, r3
L00cc0:
  cmp	r0, #21
L00cc2:
  .inst.n 0xd015
L00cc4:
  cmp	r0, #47
L00cc6:
  .inst.n 0xd02c
L00cc8:
  ldr	r2, [pc, #876]
L00cca:
  mov	r1, r4
L00ccc:
  muls	r1, r2
L00cce:
  ldr	r2, [pc, #868]
L00cd0:
  movs	r3, #7
L00cd2:
  lsls	r3, r3, #9
L00cd4:
  adds	r1, r1, r2
L00cd6:
  adds	r1, r1, r3
L00cd8:
  cmp	r0, #74
L00cda:
  .inst.n 0xd02d
L00cdc:
  cmp	r0, #54
L00cde:
  .inst.n 0xd02f
L00ce0:
  cmp	r0, #86
L00ce2:
  .inst.n 0xd033
L00ce4:
  cmp	r0, #132
L00ce6:
  .inst.n 0xd037
L00ce8:
  .inst.n 0xe03d
L00cea:
  movs	r0, #0
L00cec:
  strb	r0, [r6, #10]
L00cee:
  .inst.n 0xe053
L00cf0:
  mov	r0, r4
L00cf2:
  bl	L0304c
L00cf6:
  cmp	r0, #0
L00cf8:
  .inst.n 0xd006
L00cfa:
  mov	r0, r4
L00cfc:
  bl	L03184
L00d00:
  cmp	r0, #0
L00d02:
  .inst.n 0xd001
L00d04:
  movs	r1, #150
L00d06:
  .inst.n 0xe006
L00d08:
  movs	r0, #91
L00d0a:
  lsls	r0, r0, #5
L00d0c:
  adds	r0, r5, r0
L00d0e:
  ldrb	r0, [r0, #10]
L00d10:
  cmp	r0, #50
L00d12:
  .inst.n 0xd204
L00d14:
  movs	r1, #22
L00d16:
  mov	r0, r4
L00d18:
  bl	L0313c
L00d1c:
  pop	{r3, r4, r5, r6, r7, pc}
L00d1e:
  movs	r1, #190
L00d20:
  .inst.n 0xe7f9
L00d22:
  ldrb	r0, [r7, r4]
L00d24:
  cmp	r0, #190
L00d26:
  .inst.n 0xd125
L00d28:
  movs	r1, #190
L00d2a:
  mov	r0, r4
L00d2c:
  bl	L0313c
L00d30:
  mov	r0, r4
L00d32:
  bl	L03190
L00d36:
  pop	{r3, r4, r5, r6, r7, pc}
L00d38:
  ldrb	r0, [r1, #0]
L00d3a:
  cmp	r0, #12
L00d3c:
  .inst.n 0xd00f
L00d3e:
  .inst.n 0xe019
L00d40:
  ldrb	r0, [r1, #0]
L00d42:
  cmp	r0, #4
L00d44:
  .inst.n 0xd00b
L00d46:
  cmp	r0, #5
L00d48:
  .inst.n 0xd009
L00d4a:
  .inst.n 0xe013
L00d4c:
  ldrb	r0, [r1, #0]
L00d4e:
  cmp	r0, #8
L00d50:
  .inst.n 0xd005
L00d52:
  cmp	r0, #9
L00d54:
  .inst.n 0xd003
L00d56:
  .inst.n 0xe00d
L00d58:
  ldrb	r0, [r1, #0]
L00d5a:
  cmp	r0, #23
L00d5c:
  .inst.n 0xd10a
L00d5e:
  movs	r1, #1
L00d60:
  mov	r0, r4
L00d62:
  bl	L030b8
L00d66:
  ldr	r0, [pc, #740]
L00d68:
  ldrb	r0, [r0, r4]
L00d6a:
  cmp	r0, #153
L00d6c:
  .inst.n 0xd102
L00d6e:
  ldrb	r0, [r7, r4]
L00d70:
  cmp	r0, #154
L00d72:
  .inst.n 0xd003
L00d74:
  ldrb	r0, [r7, r4]
L00d76:
  cmp	r0, #191
L00d78:
  .inst.n 0xd006
L00d7a:
  .inst.n 0xe00a
L00d7c:
  movs	r1, #3
L00d7e:
  movs	r0, #0
L00d80:
  lsls	r1, r1, #10
L00d82:
  adds	r1, r5, r1
L00d84:
  strb	r0, [r1, #20]
L00d86:
  .inst.n 0xe004
L00d88:
  movs	r0, #113
L00d8a:
  lsls	r0, r0, #5
L00d8c:
  adds	r0, r5, r0
L00d8e:
  ldrb	r1, [r0, #8]
L00d90:
  strb	r1, [r0, #7]
L00d92:
  ldrb	r0, [r6, #10]
L00d94:
  cmp	r0, #1
L00d96:
  .inst.n 0xd0a8
L00d98:
  ldrb	r1, [r7, r4]
L00d9a:
  .inst.n 0xe7bc
L00d9c:
  mov	r2, r0
L00d9e:
  movs	r0, #18
L00da0:
  ldr	r3, [pc, #680]
L00da2:
  cmp	r1, #0
L00da4:
  .inst.n 0xd00c
L00da6:
  cmp	r1, #1
L00da8:
  .inst.n 0xd001
L00daa:
  cmp	r1, #2
L00dac:
  .inst.n 0xd107
L00dae:
  ldrb	r1, [r3, r2]
L00db0:
  cmp	r1, #150
L00db2:
  .inst.n 0xd019
L00db4:
  cmp	r1, #157
L00db6:
  .inst.n 0xd019
L00db8:
  cmp	r1, #160
L00dba:
  .inst.n 0xd100
L00dbc:
  movs	r0, #162
L00dbe:
  bx	lr
L00dc0:
  ldrb	r1, [r3, r2]
L00dc2:
  cmp	r1, #114
L00dc4:
  .inst.n 0xd003
L00dc6:
  cmp	r1, #117
L00dc8:
  .inst.n 0xd1f9
L00dca:
  movs	r0, #119
L00dcc:
  bx	lr
L00dce:
  ldr	r0, [pc, #616]
L00dd0:
  muls	r2, r0
L00dd2:
  ldr	r0, [pc, #608]
L00dd4:
  adds	r1, r2, r0
L00dd6:
  movs	r0, #31
L00dd8:
  lsls	r0, r0, #5
L00dda:
  adds	r0, r1, r0
L00ddc:
  ldrb	r1, [r0, #15]
L00dde:
  movs	r2, #128
L00de0:
  orrs	r1, r2
L00de2:
  strb	r1, [r0, #15]
L00de4:
  movs	r0, #116
L00de6:
  bx	lr
L00de8:
  movs	r0, #152
L00dea:
  bx	lr
L00dec:
  movs	r0, #159
L00dee:
  bx	lr
L00df0:
  push	{r0, r1, r2, r4, r5, r6, r7, lr}
L00df2:
  mov	r7, r0
L00df4:
  sub	sp, #32
L00df6:
  movs	r0, #1
L00df8:
  str	r0, [sp, #16]
L00dfa:
  ldr	r1, [pc, #596]
L00dfc:
  movs	r0, #0
L00dfe:
  mov	r6, r2
L00e00:
  strb	r0, [r1, r7]
L00e02:
  ldr	r1, [sp, #36]
L00e04:
  str	r1, [sp, #28]
L00e06:
  ldrh	r0, [r1, #0]
L00e08:
  adds	r1, #255
L00e0a:
  adds	r1, #1
L00e0c:
  ldrb	r1, [r1, #8]
L00e0e:
  str	r1, [sp, #24]
L00e10:
  lsls	r1, r0, #17
L00e12:
  lsrs	r1, r1, #29
L00e14:
  str	r1, [sp, #8]
L00e16:
  lsls	r4, r0, #27
L00e18:
  lsrs	r2, r0, #15
L00e1a:
  ldr	r1, [sp, #28]
L00e1c:
  str	r2, [sp, #12]
L00e1e:
  ldr	r0, [r1, #4]
L00e20:
  str	r2, [sp, #4]
L00e22:
  lsrs	r4, r4, #27
L00e24:
  str	r0, [sp, #0]
L00e26:
  mov	r2, r4
L00e28:
  mov	r0, r7
L00e2a:
  ldr	r3, [sp, #8]
L00e2c:
  ldr	r1, [sp, #24]
L00e2e:
  bl	L0319c
L00e32:
  ldr	r0, [pc, #516]
L00e34:
  ldr	r3, [pc, #508]
L00e36:
  ldr	r2, [sp, #12]
L00e38:
  ldr	r1, [sp, #8]
L00e3a:
  muls	r0, r7
L00e3c:
  adds	r0, r0, r3
L00e3e:
  orrs	r1, r2
L00e40:
  movs	r2, #23
L00e42:
  lsls	r2, r2, #7
L00e44:
  str	r0, [sp, #20]
L00e46:
  adds	r0, r0, r2
L00e48:
  str	r0, [sp, #4]
L00e4a:
  movs	r3, #3
L00e4c:
  ldr	r0, [sp, #20]
L00e4e:
  movs	r2, #15
L00e50:
  lsls	r3, r3, #10
L00e52:
  lsls	r2, r2, #6
L00e54:
  adds	r5, r0, r3
L00e56:
  adds	r0, r0, r2
L00e58:
  str	r0, [sp, #0]
L00e5a:
  cmp	r1, #0
L00e5c:
  .inst.n 0xd009
L00e5e:
  ldr	r0, [sp, #8]
L00e60:
  cmp	r0, #0
L00e62:
  .inst.n 0xd002
L00e64:
  ldr	r0, [sp, #12]
L00e66:
  cmp	r0, #0
L00e68:
  .inst.n 0xd02b
L00e6a:
  ldr	r0, [sp, #12]
L00e6c:
  cmp	r0, #1
L00e6e:
  .inst.n 0xd032
L00e70:
  .inst.n 0xe043
L00e72:
  cmp	r4, #0
L00e74:
  .inst.n 0xd020
L00e76:
  mov	r0, r4
L00e78:
  subs	r0, #14
L00e7a:
  cmp	r0, #1
L00e7c:
  .inst.n 0xd91c
L00e7e:
  subs	r0, #8
L00e80:
  cmp	r0, #9
L00e82:
  .inst.n 0xd919
L00e84:
  cmp	r4, #18
L00e86:
  .inst.n 0xd017
L00e88:
  cmp	r4, #17
L00e8a:
  .inst.n 0xd015
L00e8c:
  ldr	r1, [pc, #424]
L00e8e:
  ldr	r2, [pc, #420]
L00e90:
  movs	r0, #91
L00e92:
  muls	r1, r7
L00e94:
  lsls	r0, r0, #5
L00e96:
  adds	r1, r1, r2
L00e98:
  adds	r0, r1, r0
L00e9a:
  ldr	r3, [pc, #432]
L00e9c:
  str	r0, [sp, #8]
L00e9e:
  cmp	r4, #10
L00ea0:
  .inst.n 0xd070
L00ea2:
  .inst.n 0xdc48
L00ea4:
  cmp	r4, #1
L00ea6:
  .inst.n 0xd06e
L00ea8:
  ldr	r1, [pc, #424]
L00eaa:
  cmp	r4, #7
L00eac:
  .inst.n 0xd04c
L00eae:
  cmp	r4, #8
L00eb0:
  .inst.n 0xd06b
L00eb2:
  cmp	r4, #9
L00eb4:
  .inst.n 0xd127
L00eb6:
  .inst.n 0xe07e
L00eb8:
  movs	r1, #19
L00eba:
  mov	r0, r7
L00ebc:
  .inst.w 0xf7fffbe8
L00ec0:
  .inst.n 0xe034
L00ec2:
  cmp	r4, #0
L00ec4:
  .inst.n 0xd0f8
L00ec6:
  mov	r0, r4
L00ec8:
  subs	r0, #8
L00eca:
  cmp	r0, #6
L00ecc:
  .inst.n 0xd9f4
L00ece:
  subs	r0, #8
L00ed0:
  cmp	r0, #15
L00ed2:
  .inst.n 0xd9f1
L00ed4:
  b.n	L01186
L00ed6:
  cmp	r4, #0
L00ed8:
  .inst.n 0xd016
L00eda:
  mov	r0, r4
L00edc:
  subs	r0, #15
L00ede:
  cmp	r0, #16
L00ee0:
  .inst.n 0xd912
L00ee2:
  cmp	r4, #1
L00ee4:
  .inst.n 0xd010
L00ee6:
  cmp	r4, #8
L00ee8:
  .inst.n 0xd00e
L00eea:
  cmp	r4, #10
L00eec:
  .inst.n 0xd00c
L00eee:
  cmp	r4, #12
L00ef0:
  .inst.n 0xd00a
L00ef2:
  cmp	r4, #13
L00ef4:
  .inst.n 0xd008
L00ef6:
  cmp	r4, #14
L00ef8:
  .inst.n 0xd006
L00efa:
  ldr	r0, [sp, #8]
L00efc:
  cmp	r0, #0
L00efe:
  .inst.n 0xd002
L00f00:
  ldr	r0, [sp, #12]
L00f02:
  cmp	r0, #0
L00f04:
  .inst.n 0xd0e6
L00f06:
  b.n	L01212
L00f08:
  ldr	r0, [pc, #292]
L00f0a:
  adds	r0, #128
L00f0c:
  ldrb	r0, [r0, #24]
L00f0e:
  lsls	r0, r0, #27
L00f10:
  .inst.n 0xd5d2
L00f12:
  ldr	r0, [sp, #28]
L00f14:
  ldrh	r0, [r0, #2]
L00f16:
  lsrs	r0, r0, #15
L00f18:
  .inst.n 0xd0ce
L00f1a:
  ldr	r0, [sp, #4]
L00f1c:
  ldrb	r0, [r0, #2]
L00f1e:
  cmp	r0, #2
L00f20:
  .inst.n 0xd1ca
L00f22:
  movs	r2, #17
L00f24:
  ldr	r1, [pc, #304]
L00f26:
  mov	r0, r7
L00f28:
  bl	L03154
L00f2c:
  movs	r0, #1
L00f2e:
  strb	r0, [r6, #0]
L00f30:
  movs	r0, #0
L00f32:
  add	sp, #44
L00f34:
  pop	{r4, r5, r6, r7, pc}
L00f36:
  cmp	r4, #11
L00f38:
  beq.n	L01012
L00f3a:
  cmp	r4, #16
L00f3c:
  beq.n	L01028
L00f3e:
  cmp	r4, #20
L00f40:
  .inst.n 0xd001
L00f42:
  cmp	r4, #21
L00f44:
  .inst.n 0xd1df
L00f46:
  b.n	L0117c
L00f48:
  ldr	r2, [pc, #272]
L00f4a:
  ldrb	r0, [r3, r7]
L00f4c:
  ldrb	r2, [r2, r7]
L00f4e:
  cmp	r0, r2
L00f50:
  .inst.n 0xd116
L00f52:
  movs	r0, #1
L00f54:
  strb	r0, [r5, #20]
L00f56:
  ldr	r0, [sp, #8]
L00f58:
  ldrb	r0, [r0, #13]
L00f5a:
  cmp	r0, #1
L00f5c:
  .inst.n 0xd003
L00f5e:
  ldrb	r0, [r1, r7]
L00f60:
  cmp	r0, #1
L00f62:
  .inst.n 0xd002
L00f64:
  .inst.n 0xe003
L00f66:
  movs	r1, #22
L00f68:
  .inst.n 0xe006
L00f6a:
  movs	r1, #12
L00f6c:
  .inst.n 0xe004
L00f6e:
  ldr	r0, [sp, #4]
L00f70:
  ldrb	r0, [r0, #2]
L00f72:
  cmp	r0, #2
L00f74:
  beq.n	L01060
L00f76:
  movs	r1, #45
L00f78:
  mov	r0, r7
L00f7a:
  .inst.w 0xf7fffb76
L00f7e:
  b.n	L0120a
L00f80:
  movs	r1, #9
L00f82:
  .inst.n 0xe00d
L00f84:
  .inst.n 0xe02e
L00f86:
  b.n	L0116e
L00f88:
  .inst.n 0xe7ff
L00f8a:
  ldrb	r0, [r3, r7]
L00f8c:
  cmp	r0, #42
L00f8e:
  .inst.n 0xd00b
L00f90:
  cmp	r0, #23
L00f92:
  .inst.n 0xd104
L00f94:
  ldrb	r0, [r1, r7]
L00f96:
  cmp	r0, #1
L00f98:
  .inst.n 0xd006
L00f9a:
  cmp	r0, #0
L00f9c:
  .inst.n 0xd008
L00f9e:
  movs	r1, #8
L00fa0:
  mov	r0, r7
L00fa2:
  bl	L031a8
L00fa6:
  b.n	L0120a
L00fa8:
  movs	r0, #1
L00faa:
  strb	r0, [r5, #20]
L00fac:
  movs	r1, #13
L00fae:
  .inst.n 0xe7e3
L00fb0:
  movs	r0, #1
L00fb2:
  strb	r0, [r5, #20]
L00fb4:
  .inst.n 0xe7db
L00fb6:
  mov	r0, r7
L00fb8:
  bl	L03094
L00fbc:
  cmp	r0, #0
L00fbe:
  beq.n	L01064
L00fc0:
  ldr	r0, [sp, #8]
L00fc2:
  ldrb	r0, [r0, #14]
L00fc4:
  cmp	r0, #0
L00fc6:
  .inst.n 0xd002
L00fc8:
  cmp	r0, #1
L00fca:
  .inst.n 0xd004
L00fcc:
  .inst.n 0xe008
L00fce:
  ldr	r0, [sp, #0]
L00fd0:
  ldrh	r0, [r0, #8]
L00fd2:
  lsls	r0, r0, #17
L00fd4:
  .inst.n 0xe002
L00fd6:
  ldr	r0, [sp, #0]
L00fd8:
  ldrh	r0, [r0, #8]
L00fda:
  lsls	r0, r0, #19
L00fdc:
  cmp	r0, #0
L00fde:
  .inst.n 0xdac6
L00fe0:
  movs	r1, #83
L00fe2:
  .inst.n 0xe7c9
L00fe4:
  mov	r0, r7
L00fe6:
  bl	L03094
L00fea:
  cmp	r0, #0
L00fec:
  beq.n	L01064
L00fee:
  ldr	r0, [sp, #8]
L00ff0:
  ldrb	r0, [r0, #13]
L00ff2:
  cmp	r0, #1
L00ff4:
  .inst.n 0xd002
L00ff6:
  cmp	r0, #0
L00ff8:
  beq.n	L01004
L00ffa:
  b.n	L0100e
L00ffc:
  ldr	r0, [sp, #0]
L00ffe:
  ldrb	r0, [r0, #8]
L01000:
  lsls	r0, r0, #27
L01002:
  b.n	L0100a
L01004:
  ldr	r0, [sp, #0]
L01006:
  ldrb	r0, [r0, #8]
L01008:
  lsls	r0, r0, #25
L0100a:
  cmp	r0, #0
L0100c:
  .inst.n 0xdaaf
L0100e:
  movs	r1, #53
L01010:
  .inst.n 0xe7b2
L01012:
  mov	r0, r7
L01014:
  bl	L03094
L01018:
  cmp	r0, #0
L0101a:
  beq.n	L01064
L0101c:
  ldr	r0, [sp, #0]
L0101e:
  ldrh	r0, [r0, #8]
L01020:
  lsls	r0, r0, #21
L01022:
  .inst.n 0xd5a4
L01024:
  movs	r1, #79
L01026:
  .inst.n 0xe7a7
L01028:
  b.n	L01068
L0102a:
  b.n	L01060
L0102c:
  .word 0x20027000
L01030:
  .word 0x2002324c
L01034:
  .word 0x200214c4
L01038:
  .word 0x00000ec4
L0103c:
  .word 0x20027c08
L01040:
  .word 0x20020060
L01044:
  .word 0x200204f4
L01048:
  .word 0x20023334
L0104c:
  .word 0x20023336
L01050:
  .word 0x20026f78
L01054:
  .word 0x20023318
L01058:
  .word 0x0000afc8
L0105c:
  .word 0x20023338
L01060:
  movs	r1, #17
L01062:
  .inst.n 0xe789
L01064:
  movs	r1, #17
L01066:
  .inst.n 0xe79b
L01068:
  movs	r0, #18
L0106a:
  str	r0, [sp, #12]
L0106c:
  ldr	r0, [sp, #4]
L0106e:
  ldrb	r0, [r0, #2]
L01070:
  cmp	r0, #2
L01072:
  beq.n	L01078
L01074:
  movs	r1, #19
L01076:
  .inst.n 0xe793
L01078:
  ldrb	r0, [r3, r7]
L0107a:
  mov	r4, r3
L0107c:
  cmp	r0, #243
L0107e:
  beq.n	L010c8
L01080:
  movs	r1, #45
L01082:
  ldr	r0, [sp, #20]
L01084:
  lsls	r1, r1, #6
L01086:
  adds	r0, r0, r1
L01088:
  ldr	r1, [r0, #52]
L0108a:
  movs	r2, #1
L0108c:
  orrs	r1, r2
L0108e:
  str	r1, [r0, #52]
L01090:
  movs	r1, #64
L01092:
  mov	r0, r7
L01094:
  bl	L02ff8
L01098:
  ldr	r2, [pc, #1000]
L0109a:
  ldr	r3, [pc, #1004]
L0109c:
  movs	r1, #7
L0109e:
  muls	r2, r7
L010a0:
  ldrb	r0, [r4, r7]
L010a2:
  lsls	r1, r1, #9
L010a4:
  adds	r2, r2, r3
L010a6:
  adds	r4, r2, r1
L010a8:
  cmp	r0, #14
L010aa:
  beq.n	L010ce
L010ac:
  cmp	r0, #26
L010ae:
  beq.n	L010f0
L010b0:
  cmp	r0, #54
L010b2:
  beq.n	L010f6
L010b4:
  cmp	r0, #86
L010b6:
  beq.n	L010fc
L010b8:
  cmp	r0, #74
L010ba:
  beq.n	L01102
L010bc:
  ldrb	r0, [r5, #20]
L010be:
  cmp	r0, #2
L010c0:
  beq.n	L01160
L010c2:
  cmp	r0, #5
L010c4:
  beq.n	L01160
L010c6:
  b.n	L0116a
L010c8:
  movs	r0, #0
L010ca:
  strb	r0, [r6, #0]
L010cc:
  .inst.n 0xe731
L010ce:
  ldrb	r0, [r4, #16]
L010d0:
  cmp	r0, #7
L010d2:
  beq.n	L010de
L010d4:
  cmp	r0, #8
L010d6:
  beq.n	L010e4
L010d8:
  cmp	r0, #17
L010da:
  beq.n	L010ea
L010dc:
  b.n	L0116a
L010de:
  movs	r0, #0
L010e0:
  strb	r0, [r5, #21]
L010e2:
  b.n	L0116a
L010e4:
  movs	r0, #0
L010e6:
  strb	r0, [r5, #22]
L010e8:
  b.n	L0116a
L010ea:
  movs	r0, #0
L010ec:
  strb	r0, [r5, #26]
L010ee:
  b.n	L0116a
L010f0:
  movs	r0, #0
L010f2:
  strb	r0, [r5, #27]
L010f4:
  b.n	L0116a
L010f6:
  movs	r0, #0
L010f8:
  strb	r0, [r5, #24]
L010fa:
  b.n	L0116a
L010fc:
  movs	r0, #0
L010fe:
  strb	r0, [r5, #23]
L01100:
  b.n	L0116a
L01102:
  movs	r0, #0
L01104:
  strb	r0, [r5, #25]
L01106:
  ldr	r0, [sp, #8]
L01108:
  ldrb	r0, [r0, #11]
L0110a:
  cmp	r0, #2
L0110c:
  beq.n	L0113e
L0110e:
  ldr	r0, [sp, #0]
L01110:
  ldrh	r0, [r0, #20]
L01112:
  lsls	r0, r0, #19
L01114:
  lsrs	r0, r0, #30
L01116:
  cmp	r0, #2
L01118:
  bcc.n	L0113e
L0111a:
  mov	r0, r7
L0111c:
  bl	L031b4
L01120:
  cmp	r0, #0
L01122:
  beq.n	L0113e
L01124:
  movs	r1, #1
L01126:
  mov	r0, r7
L01128:
  bl	L031c0
L0112c:
  cmp	r0, #0
L0112e:
  beq.n	L01146
L01130:
  ldr	r1, [sp, #8]
L01132:
  movs	r0, #2
L01134:
  strb	r0, [r1, #11]
L01136:
  movs	r1, #28
L01138:
  mov	r0, r7
L0113a:
  bl	L02ff8
L0113e:
  ldrb	r0, [r4, #0]
L01140:
  cmp	r0, #12
L01142:
  beq.n	L01156
L01144:
  b.n	L0116a
L01146:
  movs	r2, #255
L01148:
  ldr	r3, [pc, #832]
L0114a:
  adds	r2, #145
L0114c:
  movs	r1, #26
L0114e:
  mov	r0, r7
L01150:
  bl	L031cc
L01154:
  b.n	L01136
L01156:
  movs	r1, #0
L01158:
  mov	r0, r7
L0115a:
  bl	L030b8
L0115e:
  b.n	L0116a
L01160:
  mov	r0, r7
L01162:
  ldr	r1, [sp, #24]
L01164:
  .inst.w 0xf7fffe1a
L01168:
  str	r0, [sp, #12]
L0116a:
  ldr	r1, [sp, #12]
L0116c:
  .inst.n 0xe704
L0116e:
  movs	r2, #117
L01170:
  ldr	r1, [sp, #20]
L01172:
  movs	r0, #2
L01174:
  lsls	r2, r2, #5
L01176:
  adds	r1, r1, r2
L01178:
  strb	r0, [r1, #4]
L0117a:
  b.n	L0120a
L0117c:
  movs	r1, #19
L0117e:
  mov	r0, r7
L01180:
  .inst.w 0xf7fffa86
L01184:
  b.n	L0120a
L01186:
  cmp	r4, #3
L01188:
  bne.n	L01212
L0118a:
  ldr	r0, [sp, #36]
L0118c:
  movs	r2, #113
L0118e:
  ldr	r1, [r0, #4]
L01190:
  ldr	r0, [sp, #20]
L01192:
  lsls	r2, r2, #5
L01194:
  adds	r0, r0, r2
L01196:
  ldrb	r2, [r0, #12]
L01198:
  movs	r3, #239
L0119a:
  ands	r2, r3
L0119c:
  strb	r2, [r0, #12]
L0119e:
  lsrs	r1, r1, #28
L011a0:
  mov	r4, r1
L011a2:
  mov	r0, r7
L011a4:
  bl	L031d8
L011a8:
  cmp	r0, #0
L011aa:
  beq.n	L01202
L011ac:
  ldr	r0, [sp, #4]
L011ae:
  ldrb	r0, [r0, #2]
L011b0:
  cmp	r0, #2
L011b2:
  bne.n	L011be
L011b4:
  ldr	r0, [sp, #24]
L011b6:
  cmp	r0, #0
L011b8:
  beq.n	L011f6
L011ba:
  movs	r0, #4
L011bc:
  strb	r0, [r5, #20]
L011be:
  movs	r2, #17
L011c0:
  ldr	r1, [sp, #20]
L011c2:
  lsls	r2, r2, #6
L011c4:
  movs	r0, #1
L011c6:
  adds	r1, r1, r2
L011c8:
  strb	r0, [r1, #3]
L011ca:
  ldr	r0, [sp, #0]
L011cc:
  movs	r1, #1
L011ce:
  ldr	r0, [r0, #28]
L011d0:
  lsls	r1, r1, #27
L011d2:
  orrs	r0, r1
L011d4:
  ldr	r1, [sp, #0]
L011d6:
  str	r0, [r1, #28]
L011d8:
  bl	L031e4
L011dc:
  movs	r1, #8
L011de:
  mov	r0, r7
L011e0:
  bl	L02ff8
L011e4:
  movs	r1, #26
L011e6:
  mov	r0, r7
L011e8:
  bl	L02ff8
L011ec:
  cmp	r4, #5
L011ee:
  beq.n	L011fa
L011f0:
  cmp	r4, #8
L011f2:
  bne.n	L0120a
L011f4:
  b.n	L011fe
L011f6:
  movs	r0, #1
L011f8:
  b.n	L011bc
L011fa:
  movs	r1, #69
L011fc:
  .inst.n 0xe6bc
L011fe:
  movs	r1, #70
L01200:
  .inst.n 0xe6ba
L01202:
  movs	r1, #47
L01204:
  mov	r0, r7
L01206:
  bl	L02ff8
L0120a:
  movs	r0, #1
L0120c:
  strb	r0, [r6, #0]
L0120e:
  movs	r0, #0
L01210:
  str	r0, [sp, #16]
L01212:
  ldr	r0, [sp, #16]
L01214:
  .inst.n 0xe68d
L01216:
  push	{r4, lr}
L01218:
  ldr	r1, [pc, #628]
L0121a:
  ldrb	r1, [r1, #7]
L0121c:
  cmp	r1, #0
L0121e:
  beq.n	L01240
L01220:
  cmp	r0, #255
L01222:
  beq.n	L01240
L01224:
  ldr	r2, [pc, #620]
L01226:
  lsls	r1, r0, #2
L01228:
  adds	r1, r1, r2
L0122a:
  ldrb	r1, [r1, #3]
L0122c:
  cmp	r1, #0
L0122e:
  bne.n	L01240
L01230:
  ldr	r1, [pc, #612]
L01232:
  lsls	r0, r0, #8
L01234:
  adds	r0, r0, r1
L01236:
  movs	r3, #1
L01238:
  movs	r2, #15
L0123a:
  lsls	r1, r3, #15
L0123c:
  bl	L031f0
L01240:
  .inst.n 0xe443
L01242:
  push	{r4, lr}
L01244:
  mov	r4, r0
L01246:
  movs	r1, #4
L01248:
  bl	L031fc
L0124c:
  ldr	r1, [pc, #564]
L0124e:
  mov	r0, r4
L01250:
  muls	r0, r1
L01252:
  ldr	r1, [pc, #564]
L01254:
  adds	r1, r0, r1
L01256:
  movs	r0, #15
L01258:
  lsls	r0, r0, #6
L0125a:
  adds	r0, r1, r0
L0125c:
  ldrb	r0, [r0, #20]
L0125e:
  lsls	r0, r0, #30
L01260:
  beq.n	L0126c
L01262:
  movs	r1, #0
L01264:
  mov	r0, r4
L01266:
  bl	L03208
L0126a:
  .inst.n 0xe42e
L0126c:
  movs	r1, #0
L0126e:
  mov	r0, r4
L01270:
  bl	L03214
L01274:
  .inst.n 0xe429
L01276:
  push	{r4, lr}
L01278:
  mov	r4, r0
L0127a:
  bl	L03220
L0127e:
  mov	r3, r4
L01280:
  movs	r2, #1
L01282:
  movs	r1, #0
L01284:
  movs	r0, #85
L01286:
  bl	L0322c
L0128a:
  .inst.n 0xe41e
L0128c:
  push	{r4, lr}
L0128e:
  mov	r4, r0
L01290:
  bl	L03238
L01294:
  cmp	r4, #0
L01296:
  beq.n	L012a4
L01298:
  movs	r0, #2
L0129a:
  lsls	r1, r0, #7
L0129c:
  orrs	r0, r1
L0129e:
  bl	L030e8
L012a2:
  .inst.n 0xe412
L012a4:
  movs	r0, #1
L012a6:
  movs	r1, #128
L012a8:
  b.n	L0129c
L012aa:
  ldr	r2, [pc, #472]
L012ac:
  muls	r0, r2
L012ae:
  ldr	r2, [pc, #472]
L012b0:
  adds	r2, r0, r2
L012b2:
  movs	r0, #117
L012b4:
  lsls	r0, r0, #5
L012b6:
  adds	r0, r2, r0
L012b8:
  ldrb	r2, [r0, #10]
L012ba:
  cmp	r2, #1
L012bc:
  beq.n	L012c4
L012be:
  cmp	r2, #2
L012c0:
  beq.n	L012c8
L012c2:
  b.n	L012d2
L012c4:
  ldrb	r0, [r0, #11]
L012c6:
  b.n	L012ca
L012c8:
  ldrb	r0, [r0, #12]
L012ca:
  cmp	r0, r1
L012cc:
  bne.n	L012d2
L012ce:
  movs	r0, #1
L012d0:
  bx	lr
L012d2:
  movs	r0, #0
L012d4:
  bx	lr
L012d6:
  push	{r3, r4, r5, r6, r7, lr}
L012d8:
  mov	r4, r0
L012da:
  ldr	r1, [pc, #424]
L012dc:
  ldr	r2, [pc, #424]
L012de:
  muls	r1, r4
L012e0:
  adds	r6, r1, r2
L012e2:
  movs	r1, #117
L012e4:
  lsls	r1, r1, #5
L012e6:
  adds	r5, r6, r1
L012e8:
  movs	r0, #1
L012ea:
  ldrb	r1, [r5, #14]
L012ec:
  lsls	r7, r0, #8
L012ee:
  cmp	r1, #97
L012f0:
  beq.n	L01342
L012f2:
  cmp	r1, #98
L012f4:
  beq.n	L013e0
L012f6:
  ldr	r3, [pc, #396]
L012f8:
  ldr	r6, [pc, #396]
L012fa:
  movs	r2, #15
L012fc:
  muls	r3, r4
L012fe:
  lsls	r2, r2, #6
L01300:
  adds	r3, r3, r6
L01302:
  adds	r6, r3, r2
L01304:
  cmp	r1, #101
L01306:
  beq.n	L013e2
L01308:
  cmp	r1, #103
L0130a:
  bne.n	L013e4
L0130c:
  ldrb	r1, [r5, #11]
L0130e:
  cmp	r1, #2
L01310:
  beq.n	L013e6
L01312:
  ldrb	r0, [r5, #12]
L01314:
  cmp	r0, #2
L01316:
  beq.n	L01310
L01318:
  movs	r2, #14
L0131a:
  cmp	r1, #1
L0131c:
  beq.n	L0141c
L0131e:
  cmp	r0, #1
L01320:
  beq.n	L0141e
L01322:
  ldr	r0, [r6, #28]
L01324:
  bics	r0, r2
L01326:
  lsrs	r0, r0, #1
L01328:
  lsls	r0, r0, #1
L0132a:
  str	r0, [r6, #28]
L0132c:
  mov	r0, r4
L0132e:
  bl	L03244
L01332:
  movs	r1, #26
L01334:
  mov	r0, r4
L01336:
  bl	L02ff8
L0133a:
  cmp	r4, #0
L0133c:
  beq.n	L01420
L0133e:
  movs	r0, #2
L01340:
  b.n	L014ca
L01342:
  cmp	r4, #0
L01344:
  beq.n	L01364
L01346:
  movs	r0, #2
L01348:
  bl	L030f4
L0134c:
  mov	r0, r4
L0134e:
  bl	L03250
L01352:
  cmp	r0, #0
L01354:
  beq.n	L0138c
L01356:
  movs	r0, #111
L01358:
  lsls	r0, r0, #5
L0135a:
  adds	r5, r6, r0
L0135c:
  ldrb	r0, [r5, #31]
L0135e:
  cmp	r0, #0
L01360:
  bne.n	L01374
L01362:
  b.n	L01368
L01364:
  movs	r0, #1
L01366:
  b.n	L01348
L01368:
  movs	r0, #101
L0136a:
  lsls	r0, r0, #5
L0136c:
  adds	r0, r6, r0
L0136e:
  ldrb	r0, [r0, #17]
L01370:
  lsls	r0, r0, #27
L01372:
  bpl.n	L0137e
L01374:
  mov	r0, r4
L01376:
  bl	L0325c
L0137a:
  cmp	r0, #0
L0137c:
  beq.n	L0138c
L0137e:
  movs	r0, #17
L01380:
  lsls	r0, r0, #6
L01382:
  adds	r0, r6, r0
L01384:
  ldrb	r0, [r0, #3]
L01386:
  cmp	r0, #0
L01388:
  beq.n	L013a6
L0138a:
  b.n	L013c8
L0138c:
  mov	r0, r4
L0138e:
  bl	L03238
L01392:
  cmp	r4, #0
L01394:
  beq.n	L013a0
L01396:
  movs	r0, #2
L01398:
  orrs	r0, r7
L0139a:
  bl	L030e8
L0139e:
  b.n	L013c8
L013a0:
  movs	r0, #1
L013a2:
  movs	r7, #128
L013a4:
  b.n	L01398
L013a6:
  ldrb	r0, [r5, #31]
L013a8:
  cmp	r0, #0
L013aa:
  bne.n	L013c8
L013ac:
  mov	r0, r4
L013ae:
  bl	L0325c
L013b2:
  cmp	r0, #0
L013b4:
  beq.n	L013e8
L013b6:
  mov	r0, r4
L013b8:
  bl	L0325c
L013bc:
  cmp	r0, #0
L013be:
  beq.n	L013c8
L013c0:
  movs	r1, #7
L013c2:
  mov	r0, r4
L013c4:
  bl	L031fc
L013c8:
  ldr	r1, [pc, #208]
L013ca:
  lsls	r0, r4, #2
L013cc:
  ldr	r0, [r1, r0]
L013ce:
  cmp	r0, #0
L013d0:
  beq.n	L01412
L013d2:
  movs	r0, #3
L013d4:
  lsls	r0, r0, #10
L013d6:
  adds	r0, r6, r0
L013d8:
  ldrb	r0, [r0, #16]
L013da:
  cmp	r0, #0
L013dc:
  beq.n	L013f6
L013de:
  b.n	L01412
L013e0:
  b.n	L01562
L013e2:
  b.n	L014d8
L013e4:
  b.n	L0159c
L013e6:
  b.n	L014b0
L013e8:
  ldr	r3, [pc, #180]
L013ea:
  movs	r2, #40
L013ec:
  movs	r1, #7
L013ee:
  mov	r0, r4
L013f0:
  bl	L031cc
L013f4:
  b.n	L013c8
L013f6:
  movs	r0, #11
L013f8:
  lsls	r0, r0, #8
L013fa:
  adds	r0, r6, r0
L013fc:
  ldr	r0, [r0, #0]
L013fe:
  cmp	r0, #0
L01400:
  beq.n	L01412
L01402:
  mov	r0, r4
L01404:
  bl	L0325c
L01408:
  cmp	r0, #3
L0140a:
  bls.n	L01412
L0140c:
  mov	r0, r4
L0140e:
  bl	L03268
L01412:
  movs	r0, #45
L01414:
  lsls	r0, r0, #6
L01416:
  adds	r0, r6, r0
L01418:
  ldr	r0, [r0, #52]
L0141a:
  b.n	L01422
L0141c:
  b.n	L01472
L0141e:
  b.n	L01476
L01420:
  b.n	L014d2
L01422:
  lsls	r0, r0, #3
L01424:
  lsrs	r0, r0, #30
L01426:
  cmp	r0, #2
L01428:
  bne.n	L01450
L0142a:
  movs	r1, #5
L0142c:
  mov	r0, r4
L0142e:
  bl	L012aa
L01432:
  cmp	r0, #0
L01434:
  beq.n	L01450
L01436:
  ldr	r0, [pc, #108]
L01438:
  ldrb	r2, [r0, r4]
L0143a:
  ldr	r1, [pc, #108]
L0143c:
  cmp	r2, #1
L0143e:
  beq.n	L01458
L01440:
  ldrb	r1, [r1, r4]
L01442:
  cmp	r1, #42
L01444:
  beq.n	L01450
L01446:
  ldrb	r1, [r0, r4]
L01448:
  cmp	r1, #3
L0144a:
  beq.n	L01450
L0144c:
  movs	r1, #2
L0144e:
  strb	r1, [r0, r4]
L01450:
  mov	r0, r4
L01452:
  bl	L03274
L01456:
  b.n	L0159a
L01458:
  movs	r0, #42
L0145a:
  strb	r0, [r1, r4]
L0145c:
  ldr	r1, [pc, #76]
L0145e:
  strb	r0, [r1, r4]
L01460:
  mov	r0, r4
L01462:
  bl	L03064
L01466:
  cmp	r0, #0
L01468:
  beq.n	L01450
L0146a:
  mov	r0, r4
L0146c:
  bl	L03070
L01470:
  b.n	L01450
L01472:
  cmp	r0, #1
L01474:
  beq.n	L014b0
L01476:
  ldr	r0, [r6, #28]
L01478:
  movs	r1, #1
L0147a:
  bics	r0, r2
L0147c:
  adds	r0, #8
L0147e:
  orrs	r0, r1
L01480:
  str	r0, [r6, #28]
L01482:
  b.n	L01332
L01484:
  .word 0x00000ec4
L01488:
  .word 0x200214c4
L0148c:
  .word 0x0001750d
L01490:
  .word 0x2002326c
L01494:
  .word 0x200204d4
L01498:
  .word 0x40090970
L0149c:
  .word 0x2002331c
L014a0:
  .word 0x20024acd
L014a4:
  .word 0x20026f78
L014a8:
  .word 0x20023336
L014ac:
  .word 0x200200d4
L014b0:
  movs	r1, #1
L014b2:
  mov	r0, r4
L014b4:
  bl	L031fc
L014b8:
  movs	r1, #100
L014ba:
  mov	r0, r4
L014bc:
  bl	L03280
L014c0:
  movs	r2, #255
L014c2:
  adds	r2, #225
L014c4:
  ldr	r3, [pc, #980]
L014c6:
  movs	r1, #4
L014c8:
  b.n	L01550
L014ca:
  orrs	r0, r7
L014cc:
  bl	L030e8
L014d0:
  b.n	L0159a
L014d2:
  movs	r0, #1
L014d4:
  movs	r7, #128
L014d6:
  b.n	L014ca
L014d8:
  ldrb	r0, [r5, #11]
L014da:
  cmp	r0, #3
L014dc:
  bcs.n	L014ec
L014de:
  ldrb	r0, [r5, #12]
L014e0:
  cmp	r0, #3
L014e2:
  bcs.n	L014ec
L014e4:
  movs	r2, #40
L014e6:
  ldr	r3, [pc, #952]
L014e8:
  movs	r1, #7
L014ea:
  b.n	L01550
L014ec:
  movs	r1, #7
L014ee:
  mov	r0, r4
L014f0:
  bl	L031fc
L014f4:
  ldr	r0, [pc, #940]
L014f6:
  ldrb	r0, [r0, r4]
L014f8:
  cmp	r0, #0
L014fa:
  beq.n	L0159a
L014fc:
  mov	r0, r4
L014fe:
  bl	L03250
L01502:
  cmp	r0, #1
L01504:
  beq.n	L01520
L01506:
  mov	r0, r4
L01508:
  .inst.w 0xf7fff81e
L0150c:
  cmp	r0, #0
L0150e:
  beq.n	L0159a
L01510:
  ldrb	r0, [r6, #20]
L01512:
  lsls	r0, r0, #30
L01514:
  beq.n	L01558
L01516:
  movs	r1, #0
L01518:
  mov	r0, r4
L0151a:
  bl	L03208
L0151e:
  b.n	L0159a
L01520:
  ldrh	r0, [r6, #20]
L01522:
  lsls	r1, r0, #22
L01524:
  lsrs	r1, r1, #30
L01526:
  cmp	r1, #1
L01528:
  bne.n	L01532
L0152a:
  lsls	r0, r0, #30
L0152c:
  lsrs	r0, r0, #30
L0152e:
  cmp	r0, #2
L01530:
  beq.n	L0153c
L01532:
  movs	r1, #1
L01534:
  mov	r0, r4
L01536:
  bl	L0328c
L0153a:
  b.n	L0159a
L0153c:
  mov	r0, r4
L0153e:
  bl	L03298
L01542:
  movs	r1, #69
L01544:
  mov	r0, r4
L01546:
  bl	L03280
L0154a:
  ldr	r3, [pc, #860]
L0154c:
  movs	r2, #16
L0154e:
  movs	r1, #0
L01550:
  mov	r0, r4
L01552:
  bl	L031cc
L01556:
  b.n	L0159a
L01558:
  movs	r1, #0
L0155a:
  mov	r0, r4
L0155c:
  bl	L03214
L01560:
  b.n	L0159a
L01562:
  ldrb	r0, [r5, #11]
L01564:
  cmp	r0, #1
L01566:
  bne.n	L0156e
L01568:
  ldrb	r0, [r5, #12]
L0156a:
  cmp	r0, #1
L0156c:
  beq.n	L01588
L0156e:
  movs	r2, #255
L01570:
  ldr	r3, [pc, #824]
L01572:
  adds	r2, #225
L01574:
  movs	r1, #4
L01576:
  mov	r0, r4
L01578:
  bl	L031cc
L0157c:
  ldrb	r0, [r5, #11]
L0157e:
  cmp	r0, #1
L01580:
  bne.n	L0159a
L01582:
  ldrb	r0, [r5, #12]
L01584:
  cmp	r0, #1
L01586:
  bne.n	L0159a
L01588:
  cmp	r4, #0
L0158a:
  beq.n	L0159e
L0158c:
  movs	r0, #2
L0158e:
  bl	L030f4
L01592:
  movs	r1, #7
L01594:
  mov	r0, r4
L01596:
  bl	L031fc
L0159a:
  movs	r0, #0
L0159c:
  pop	{r3, r4, r5, r6, r7, pc}
L0159e:
  movs	r0, #1
L015a0:
  b.n	L0158e
L015a2:
  push	{r4, r5, r6, lr}
L015a4:
  ldr	r3, [pc, #776]
L015a6:
  lsls	r2, r0, #8
L015a8:
  movs	r1, #0
L015aa:
  adds	r4, r2, r3
L015ac:
  ldr	r3, [r4, #8]
L015ae:
  ldr	r2, [r4, #20]
L015b0:
  lsls	r5, r3, #31
L015b2:
  beq.n	L015bc
L015b4:
  bl	L032a4
L015b8:
  movs	r1, #1
L015ba:
  b.n	L015de
L015bc:
  lsls	r5, r3, #29
L015be:
  bpl.n	L015ca
L015c0:
  movs	r1, #0
L015c2:
  bl	L032b0
L015c6:
  movs	r1, #4
L015c8:
  b.n	L015de
L015ca:
  lsls	r3, r3, #30
L015cc:
  bpl.n	L015de
L015ce:
  ldr	r1, [r4, #0]
L015d0:
  lsrs	r1, r1, #3
L015d2:
  lsls	r1, r1, #3
L015d4:
  str	r1, [r4, #0]
L015d6:
  movs	r1, #5
L015d8:
  bl	L032b0
L015dc:
  movs	r1, #2
L015de:
  str	r1, [r4, #8]
L015e0:
  pop	{r4, r5, r6, pc}
L015e2:
  push	{r4, r5, r6, lr}
L015e4:
  movs	r5, r0
L015e6:
  beq.n	L01608
L015e8:
  movs	r0, #255
L015ea:
  adds	r0, #1
L015ec:
  movs	r1, #32
L015ee:
  orrs	r0, r1
L015f0:
  bl	L030f4
L015f4:
  mov	r0, r5
L015f6:
  bl	L032bc
L015fa:
  mov	r0, r5
L015fc:
  bl	L032c8
L01600:
  mov	r4, r0
L01602:
  cmp	r0, #255
L01604:
  beq.n	L0160c
L01606:
  b.n	L01688
L01608:
  movs	r0, #128
L0160a:
  b.n	L015ec
L0160c:
  mov	r0, r5
L0160e:
  bl	L032d4
L01612:
  cmp	r0, #0
L01614:
  beq.n	L0161a
L01616:
  movs	r4, #54
L01618:
  b.n	L01688
L0161a:
  mov	r0, r5
L0161c:
  bl	L032e0
L01620:
  cmp	r0, #0
L01622:
  beq.n	L01628
L01624:
  movs	r4, #86
L01626:
  b.n	L01688
L01628:
  mov	r0, r5
L0162a:
  bl	L032ec
L0162e:
  mov	r1, r0
L01630:
  ldr	r2, [pc, #644]
L01632:
  ldr	r0, [pc, #640]
L01634:
  muls	r2, r5
L01636:
  adds	r0, r2, r0
L01638:
  cmp	r1, #0
L0163a:
  beq.n	L0166e
L0163c:
  movs	r1, #97
L0163e:
  lsls	r1, r1, #5
L01640:
  adds	r1, r0, r1
L01642:
  ldrb	r2, [r1, #4]
L01644:
  cmp	r2, #0
L01646:
  bne.n	L0166e
L01648:
  ldrb	r1, [r1, #5]
L0164a:
  cmp	r1, #1
L0164c:
  beq.n	L01686
L0164e:
  movs	r1, #91
L01650:
  lsls	r1, r1, #5
L01652:
  adds	r1, r0, r1
L01654:
  ldrb	r2, [r1, #14]
L01656:
  cmp	r2, #1
L01658:
  bne.n	L0166e
L0165a:
  ldrb	r1, [r1, #11]
L0165c:
  cmp	r1, #2
L0165e:
  beq.n	L0166e
L01660:
  movs	r1, #36
L01662:
  ldr	r2, [pc, #600]
L01664:
  muls	r1, r5
L01666:
  adds	r1, r1, r2
L01668:
  ldrb	r1, [r1, #9]
L0166a:
  cmp	r1, #0
L0166c:
  beq.n	L01686
L0166e:
  movs	r1, #15
L01670:
  lsls	r1, r1, #6
L01672:
  adds	r0, r0, r1
L01674:
  movs	r2, #1
L01676:
  ldr	r1, [r0, #8]
L01678:
  lsls	r2, r2, #11
L0167a:
  bics	r1, r2
L0167c:
  str	r1, [r0, #8]
L0167e:
  mov	r0, r5
L01680:
  bl	L032f8
L01684:
  pop	{r4, r5, r6, pc}
L01686:
  movs	r4, #74
L01688:
  mov	r0, r5
L0168a:
  bl	L03064
L0168e:
  cmp	r0, #0
L01690:
  beq.n	L01684
L01692:
  mov	r1, r4
L01694:
  mov	r0, r5
L01696:
  bl	L03304
L0169a:
  pop	{r4, r5, r6, pc}
L0169c:
  push	{r3, r4, r5, lr}
L0169e:
  mov	r4, r0
L016a0:
  bl	L03310
L016a4:
  movs	r1, #0
L016a6:
  cmp	r0, #0
L016a8:
  beq.n	L016ba
L016aa:
  movs	r3, #0
L016ac:
  str	r1, [sp, #0]
L016ae:
  movs	r2, #11
L016b0:
  mov	r1, r3
L016b2:
  mov	r0, r4
L016b4:
  bl	L0331c
L016b8:
  b.n	L016ec
L016ba:
  ldr	r0, [pc, #508]
L016bc:
  ldr	r2, [pc, #500]
L016be:
  muls	r0, r4
L016c0:
  adds	r0, r0, r2
L016c2:
  movs	r2, #97
L016c4:
  lsls	r2, r2, #5
L016c6:
  adds	r2, r0, r2
L016c8:
  strb	r1, [r2, #5]
L016ca:
  movs	r1, #36
L016cc:
  ldr	r3, [pc, #492]
L016ce:
  muls	r1, r4
L016d0:
  movs	r2, #1
L016d2:
  adds	r1, r1, r3
L016d4:
  strb	r2, [r1, #9]
L016d6:
  movs	r1, #91
L016d8:
  lsls	r1, r1, #5
L016da:
  adds	r0, r0, r1
L016dc:
  ldrb	r0, [r0, #13]
L016de:
  ldr	r1, [pc, #480]
L016e0:
  cmp	r0, #0
L016e2:
  beq.n	L016f2
L016e4:
  movs	r2, #23
L016e6:
  mov	r0, r4
L016e8:
  bl	L03154
L016ec:
  ldr	r0, [pc, #468]
L016ee:
  ldrb	r0, [r0, r4]
L016f0:
  pop	{r3, r4, r5, pc}
L016f2:
  movs	r2, #42
L016f4:
  b.n	L016e6
L016f6:
  push	{r3, r4, r5, r6, r7, lr}
L016f8:
  mov	r5, r0
L016fa:
  ldr	r0, [pc, #444]
L016fc:
  ldr	r1, [pc, #436]
L016fe:
  muls	r0, r5
L01700:
  adds	r6, r0, r1
L01702:
  ldr	r0, [pc, #452]
L01704:
  movs	r1, #81
L01706:
  adds	r0, r6, r0
L01708:
  bl	L03328
L0170c:
  movs	r0, #36
L0170e:
  ldr	r1, [pc, #428]
L01710:
  muls	r0, r5
L01712:
  movs	r4, #0
L01714:
  adds	r0, r0, r1
L01716:
  strb	r4, [r0, #9]
L01718:
  ldr	r0, [pc, #432]
L0171a:
  movs	r1, #14
L0171c:
  strb	r4, [r0, r5]
L0171e:
  mov	r0, r5
L01720:
  bl	L031fc
L01724:
  movs	r1, #28
L01726:
  mov	r0, r5
L01728:
  bl	L031fc
L0172c:
  ldr	r0, [pc, #416]
L0172e:
  ldr	r2, [pc, #420]
L01730:
  movs	r1, #0
L01732:
  str	r4, [r0, #44]
L01734:
  lsls	r0, r1, #4
L01736:
  adds	r0, r0, r2
L01738:
  .inst.n 0x1c49
L0173a:
  strb	r4, [r0, #6]
L0173c:
  uxtb	r1, r1
L0173e:
  strb	r4, [r0, #7]
L01740:
  cmp	r1, #5
L01742:
  bcc.n	L01734
L01744:
  ldr	r7, [pc, #384]
L01746:
  movs	r4, #0
L01748:
  adds	r7, #206
L0174a:
  movs	r0, #20
L0174c:
  muls	r0, r4
L0174e:
  adds	r0, r6, r0
L01750:
  adds	r0, r0, r7
L01752:
  movs	r1, #10
L01754:
  bl	L03334
L01758:
  .inst.n 0x1c64
L0175a:
  uxtb	r4, r4
L0175c:
  cmp	r4, #12
L0175e:
  bcc.n	L0174a
L01760:
  mov	r0, r5
L01762:
  bl	L03340
L01766:
  pop	{r3, r4, r5, r6, r7, pc}
L01768:
  push	{r0, r1, r2, r3, r4, r5, r6, r7, lr}
L0176a:
  mov	r7, r3
L0176c:
  mov	r4, r0
L0176e:
  ldr	r3, [pc, #360]
L01770:
  lsls	r1, r4, #2
L01772:
  adds	r1, r1, r3
L01774:
  ldrb	r6, [r1, #2]
L01776:
  sub	sp, #4
L01778:
  adds	r1, r4, #5
L0177a:
  ldr	r0, [sp, #40]
L0177c:
  sxtb	r5, r1
L0177e:
  str	r0, [sp, #0]
L01780:
  mov	r3, r7
L01782:
  mov	r0, r4
L01784:
  ldr	r1, [sp, #8]
L01786:
  bl	L0334c
L0178a:
  cmp	r7, #1
L0178c:
  bne.n	L017d2
L0178e:
  ldr	r0, [sp, #8]
L01790:
  cmp	r0, #0
L01792:
  bne.n	L017d2
L01794:
  ldr	r0, [pc, #324]
L01796:
  ldrb	r0, [r0, #7]
L01798:
  cmp	r0, #0
L0179a:
  beq.n	L017d2
L0179c:
  ldr	r0, [pc, #280]
L0179e:
  movs	r1, #91
L017a0:
  muls	r6, r0
L017a2:
  ldr	r0, [pc, #272]
L017a4:
  lsls	r1, r1, #5
L017a6:
  adds	r0, r6, r0
L017a8:
  adds	r0, r0, r1
L017aa:
  ldrb	r0, [r0, #4]
L017ac:
  cmp	r0, #0
L017ae:
  bne.n	L017d2
L017b0:
  lsls	r0, r5, #27
L017b2:
  lsrs	r0, r0, #27
L017b4:
  movs	r5, #1
L017b6:
  lsls	r5, r0
L017b8:
  ldr	r0, [pc, #292]
L017ba:
  str	r5, [r0, #0]
L017bc:
  ldr	r1, [pc, #292]
L017be:
  lsls	r0, r4, #8
L017c0:
  adds	r0, r0, r1
L017c2:
  movs	r3, #1
L017c4:
  movs	r2, #15
L017c6:
  lsls	r1, r3, #15
L017c8:
  bl	L031f0
L017cc:
  ldr	r0, [pc, #272]
L017ce:
  subs	r0, #128
L017d0:
  str	r5, [r0, #0]
L017d2:
  add	sp, #20
L017d4:
  pop	{r4, r5, r6, r7, pc}
L017d6:
  push	{r3, r4, r5, r6, r7, lr}
L017d8:
  .word 0x49434605
L017dc:
  lsls	r0, r0, #2
L017de:
  ldr	r0, [r1, r0]
L017e0:
  lsls	r0, r0, #1
L017e2:
  lsrs	r1, r0, #29
L017e4:
  mov	r0, r5
L017e6:
  bl	L03358
L017ea:
  mov	r4, r0
L017ec:
  ldr	r0, [pc, #200]
L017ee:
  ldr	r1, [pc, #196]
L017f0:
  muls	r0, r5
L017f2:
  adds	r1, r0, r1
L017f4:
  movs	r0, #91
L017f6:
  lsls	r0, r0, #5
L017f8:
  adds	r6, r1, r0
L017fa:
  ldrb	r7, [r6, #8]
L017fc:
  mov	r0, r5
L017fe:
  bl	L03364
L01802:
  movs	r1, #1
L01804:
  mov	r0, r4
L01806:
  bl	L03370
L0180a:
  cmp	r0, #0
L0180c:
  beq.n	L0183e
L0180e:
  cmp	r4, r7
L01810:
  bne.n	L0183e
L01812:
  ldr	r1, [pc, #196]
L01814:
  lsls	r0, r4, #2
L01816:
  adds	r0, r0, r1
L01818:
  ldrb	r0, [r0, #3]
L0181a:
  cmp	r0, #0
L0181c:
  bne.n	L0183e
L0181e:
  ldr	r0, [pc, #188]
L01820:
  ldrb	r0, [r0, #7]
L01822:
  cmp	r0, #0
L01824:
  beq.n	L0183e
L01826:
  ldrb	r0, [r6, #4]
L01828:
  cmp	r0, #1
L0182a:
  bne.n	L0183e
L0182c:
  ldr	r1, [pc, #180]
L0182e:
  lsls	r0, r4, #8
L01830:
  adds	r0, r0, r1
L01832:
  movs	r1, #1
L01834:
  movs	r3, #0
L01836:
  movs	r2, #15
L01838:
  lsls	r1, r1, #15
L0183a:
  bl	L031f0
L0183e:
  pop	{r3, r4, r5, r6, r7, pc}
L01840:
  push	{r4, r5, r6, lr}
L01842:
  mov	r5, r1
L01844:
  mov	r4, r0
L01846:
  bl	L0337c
L0184a:
  cmp	r5, #0
L0184c:
  beq.n	L01882
L0184e:
  ldr	r0, [pc, #104]
L01850:
  ldr	r1, [pc, #96]
L01852:
  muls	r0, r4
L01854:
  adds	r1, r0, r1
L01856:
  movs	r0, #117
L01858:
  lsls	r0, r0, #5
L0185a:
  adds	r0, r1, r0
L0185c:
  ldrb	r1, [r0, #14]
L0185e:
  cmp	r1, #96
L01860:
  beq.n	L01866
L01862:
  cmp	r1, #37
L01864:
  bne.n	L0187a
L01866:
  ldrb	r0, [r0, #16]
L01868:
  cmp	r0, #0
L0186a:
  bne.n	L0187a
L0186c:
  cmp	r4, #0
L0186e:
  beq.n	L01884
L01870:
  movs	r0, #2
L01872:
  lsls	r1, r0, #7
L01874:
  orrs	r0, r1
L01876:
  bl	L030f4
L0187a:
  movs	r1, #70
L0187c:
  mov	r0, r4
L0187e:
  bl	L02ff8
L01882:
  pop	{r4, r5, r6, pc}
L01884:
  movs	r0, #1
L01886:
  movs	r1, #128
L01888:
  b.n	L01874
L0188a:
  push	{r4, lr}
L0188c:
  mov	r4, r0
L0188e:
  movs	r1, #70
L01890:
  bl	L02ff8
L01894:
  mov	r0, r4
L01896:
  bl	L03388
L0189a:
  b.n	L01240
L0189c:
  .word 0x00018ae1
L018a0:
  .word 0x20024a83
L018a4:
  .word 0x20023ac2
L018a8:
  .word 0x0001899b
L018ac:
  .word 0x20024ab7
L018b0:
  .word 0x40000900
L018b4:
  .word 0x200214c4
L018b8:
  .word 0x00000ec4
L018bc:
  .word 0x20027c1c
L018c0:
  .word 0x00006978
L018c4:
  .word 0x20023336
L018c8:
  .word 0x00000c3a
L018cc:
  .word 0x2002331a
L018d0:
  .word 0x20022144
L018d4:
  .word 0x20020040
L018d8:
  .word 0x200204d4
L018dc:
  .word 0x2002326c
L018e0:
  .word 0xe000e180
L018e4:
  .word 0x40090970
L018e8:
  .word 0x2002331c
L018ec:
  push	{r4, r5, r6, r7, lr}
L018ee:
  ldr	r3, [pc, #1020]
L018f0:
  mov	r4, r0
L018f2:
  .inst.n 0x1d1b
L018f4:
  ldmia	r3, {r0, r1, r2, r3}
L018f6:
  sub	sp, #20
L018f8:
  add	r5, sp, #4
L018fa:
  stmia	r5!, {r0, r1, r2, r3}
L018fc:
  ldr	r0, [pc, #1008]
L018fe:
  ldrb	r0, [r0, #16]
L01900:
  mov	r1, sp
L01902:
  strb	r0, [r1, #0]
L01904:
  ldr	r0, [pc, #1004]
L01906:
  lsls	r1, r4, #2
L01908:
  ldr	r0, [r0, r1]
L0190a:
  ldr	r0, [r0, #0]
L0190c:
  lsls	r0, r0, #1
L0190e:
  lsrs	r0, r0, #27
L01910:
  subs	r2, r0, #1
L01912:
  cmp	r2, #3
L01914:
  bhi.n	L019fc
L01916:
  ldr	r2, [pc, #992]
L01918:
  lsls	r0, r0, #2
L0191a:
  adds	r0, r0, r2
L0191c:
  subs	r0, #64
L0191e:
  ldr	r0, [r0, #60]
L01920:
  ldr	r0, [r0, #0]
L01922:
  ldr	r3, [pc, #984]
L01924:
  uxth	r6, r0
L01926:
  ldr	r2, [r3, #8]
L01928:
  ldr	r0, [pc, #980]
L0192a:
  ldr	r0, [r0, r1]
L0192c:
  str	r0, [r3, #8]
L0192e:
  tst	r0, r2
L01930:
  beq.n	L01a1e
L01932:
  mrs	r0, PRIMASK
L01936:
  lsls	r5, r0, #31
L01938:
  lsrs	r5, r5, #31
L0193a:
  cpsid	i
L0193c:
  movs	r1, #0
L0193e:
  mov	r0, r4
L01940:
  bl	L03394
L01944:
  cmp	r5, #0
L01946:
  bne.n	L0194a
L01948:
  cpsie	i
L0194a:
  ldr	r0, [pc, #952]
L0194c:
  ldr	r1, [pc, #952]
L0194e:
  muls	r0, r4
L01950:
  adds	r0, r0, r1
L01952:
  movs	r1, #45
L01954:
  lsls	r1, r1, #6
L01956:
  adds	r1, r0, r1
L01958:
  ldrh	r1, [r1, #22]
L0195a:
  cmp	r1, r6
L0195c:
  bls.n	L019c2
L0195e:
  movs	r1, #91
L01960:
  lsls	r1, r1, #5
L01962:
  adds	r5, r0, r1
L01964:
  ldrb	r1, [r5, #5]
L01966:
  cmp	r1, #0
L01968:
  beq.n	L0198c
L0196a:
  movs	r0, #0
L0196c:
  strb	r0, [r5, #5]
L0196e:
  movs	r1, #13
L01970:
  mov	r0, r4
L01972:
  bl	L031fc
L01976:
  movs	r1, #0
L01978:
  mov	r0, r4
L0197a:
  bl	L033a0
L0197e:
  movs	r1, #0
L01980:
  mov	r0, r4
L01982:
  bl	L033ac
L01986:
  movs	r2, #30
L01988:
  ldr	r1, [pc, #896]
L0198a:
  b.n	L01a16
L0198c:
  movs	r1, #117
L0198e:
  lsls	r1, r1, #5
L01990:
  adds	r7, r0, r1
L01992:
  ldrb	r1, [r7, #21]
L01994:
  cmp	r1, #1
L01996:
  beq.n	L019c4
L01998:
  ldr	r7, [pc, #884]
L0199a:
  ldrb	r1, [r7, r4]
L0199c:
  cmp	r1, #10
L0199e:
  beq.n	L019fe
L019a0:
  cmp	r1, #60
L019a2:
  beq.n	L01a02
L019a4:
  cmp	r1, #46
L019a6:
  beq.n	L01a24
L019a8:
  movs	r1, #3
L019aa:
  lsls	r1, r1, #10
L019ac:
  adds	r0, r0, r1
L019ae:
  ldrb	r1, [r0, #15]
L019b0:
  cmp	r1, #0
L019b2:
  beq.n	L01a4c
L019b4:
  movs	r1, #1
L019b6:
  strb	r1, [r0, #17]
L019b8:
  ldrb	r0, [r5, #13]
L019ba:
  cmp	r0, #0
L019bc:
  beq.n	L01a6c
L019be:
  cmp	r0, #1
L019c0:
  beq.n	L01a28
L019c2:
  b.n	L01a6c
L019c4:
  movs	r1, #0
L019c6:
  mov	r0, r4
L019c8:
  bl	L033a0
L019cc:
  movs	r1, #0
L019ce:
  mov	r0, r4
L019d0:
  bl	L033ac
L019d4:
  movs	r0, #0
L019d6:
  strb	r0, [r7, #21]
L019d8:
  ldr	r0, [pc, #824]
L019da:
  lsls	r1, r4, #8
L019dc:
  adds	r0, r1, r0
L019de:
  ldr	r1, [r0, #44]
L019e0:
  lsls	r1, r1, #1
L019e2:
  lsrs	r1, r1, #1
L019e4:
  str	r1, [r0, #44]
L019e6:
  ldr	r0, [pc, #776]
L019e8:
  adds	r0, #94
L019ea:
  ldrh	r0, [r0, #8]
L019ec:
  lsls	r0, r0, #16
L019ee:
  bpl.n	L01a6c
L019f0:
  ldr	r0, [pc, #804]
L019f2:
  ldr	r1, [r0, #44]
L019f4:
  lsls	r1, r1, #1
L019f6:
  lsrs	r1, r1, #1
L019f8:
  str	r1, [r0, #44]
L019fa:
  b.n	L01a6c
L019fc:
  b.n	L01a7e
L019fe:
  movs	r1, #11
L01a00:
  b.n	L01a44
L01a02:
  mov	r0, sp
L01a04:
  ldrb	r0, [r0, #0]
L01a06:
  lsls	r0, r0, #27
L01a08:
  lsrs	r1, r0, #30
L01a0a:
  beq.n	L01a20
L01a0c:
  lsrs	r0, r0, #30
L01a0e:
  lsls	r0, r0, #2
L01a10:
  add	r1, sp, #4
L01a12:
  ldr	r1, [r1, r0]
L01a14:
  movs	r2, #57
L01a16:
  mov	r0, r4
L01a18:
  bl	L03154
L01a1c:
  b.n	L01a6c
L01a1e:
  b.n	L01a78
L01a20:
  movs	r1, #57
L01a22:
  b.n	L01a44
L01a24:
  movs	r1, #47
L01a26:
  b.n	L01a44
L01a28:
  ldrb	r1, [r5, #8]
L01a2a:
  mov	r0, r4
L01a2c:
  bl	L033b8
L01a30:
  movs	r0, #255
L01a32:
  strb	r0, [r5, #8]
L01a34:
  movs	r1, #1
L01a36:
  mov	r0, r4
L01a38:
  bl	L033c4
L01a3c:
  ldrb	r0, [r7, r4]
L01a3e:
  cmp	r0, #250
L01a40:
  bne.n	L01a6c
L01a42:
  movs	r1, #246
L01a44:
  mov	r0, r4
L01a46:
  bl	L0313c
L01a4a:
  b.n	L01a6c
L01a4c:
  movs	r2, #1
L01a4e:
  movs	r1, #2
L01a50:
  mov	r0, r4
L01a52:
  bl	L033d0
L01a56:
  movs	r1, #35
L01a58:
  mov	r0, r4
L01a5a:
  bl	L02ff8
L01a5e:
  movs	r2, #125
L01a60:
  ldr	r3, [pc, #696]
L01a62:
  lsls	r2, r2, #4
L01a64:
  movs	r1, #19
L01a66:
  mov	r0, r4
L01a68:
  bl	L031cc
L01a6c:
  cmp	r6, #28
L01a6e:
  bcs.n	L01a78
L01a70:
  movs	r1, #0
L01a72:
  mov	r0, r4
L01a74:
  bl	L033ac
L01a78:
  mov	r0, r4
L01a7a:
  bl	L033dc
L01a7e:
  b.n	L017d2
L01a80:
  push	{r4, r5, r6, lr}
L01a82:
  mov	r4, r0
L01a84:
  ldr	r0, [pc, #664]
L01a86:
  ldr	r5, [pc, #668]
L01a88:
  ldrb	r0, [r0, #0]
L01a8a:
  lsls	r0, r0, #29
L01a8c:
  bpl.n	L01a9e
L01a8e:
  ldrh	r0, [r5, #34]
L01a90:
  lsls	r0, r0, #30
L01a92:
  lsrs	r0, r0, #30
L01a94:
  cmp	r0, #2
L01a96:
  beq.n	L01a9e
L01a98:
  mov	r0, r4
L01a9a:
  bl	L033e8
L01a9e:
  ldrh	r0, [r5, #34]
L01aa0:
  lsls	r0, r0, #30
L01aa2:
  beq.n	L01aac
L01aa4:
  movs	r1, #1
L01aa6:
  mov	r0, r4
L01aa8:
  bl	L033f4
L01aac:
  ldr	r0, [pc, #596]
L01aae:
  ldr	r1, [pc, #600]
L01ab0:
  .word 0x18414360
L01ab4:
  movs	r0, #11
L01ab6:
  lsls	r0, r0, #8
L01ab8:
  adds	r0, r1, r0
L01aba:
  ldr	r2, [r0, #0]
L01abc:
  cmp	r2, #0
L01abe:
  beq.n	L01ae4
L01ac0:
  movs	r2, #23
L01ac2:
  lsls	r2, r2, #7
L01ac4:
  adds	r1, r1, r2
L01ac6:
  ldrb	r1, [r1, #2]
L01ac8:
  cmp	r1, #2
L01aca:
  bne.n	L01ae4
L01acc:
  ldr	r1, [pc, #544]
L01ace:
  adds	r1, #94
L01ad0:
  ldrb	r1, [r1, #24]
L01ad2:
  lsls	r1, r1, #26
L01ad4:
  bpl.n	L01ae4
L01ad6:
  ldr	r0, [r0, #0]
L01ad8:
  lsls	r0, r0, #7
L01ada:
  lsrs	r0, r0, #30
L01adc:
  beq.n	L01ae4
L01ade:
  mov	r0, r4
L01ae0:
  bl	L03400
L01ae4:
  mov	r0, r4
L01ae6:
  bl	L0340c
L01aea:
  mov	r0, r4
L01aec:
  bl	L03418
L01af0:
  cmp	r4, #0
L01af2:
  beq.n	L01b02
L01af4:
  movs	r0, #255
L01af6:
  adds	r0, #1
L01af8:
  bl	L030e8
L01afc:
  ldr	r0, [pc, #528]
L01afe:
  ldrb	r0, [r0, r4]
L01b00:
  pop	{r4, r5, r6, pc}
L01b02:
  movs	r0, #128
L01b04:
  b.n	L01af8
L01b06:
  push	{r1, r2, r3, r4, r5, r6, r7, lr}
L01b08:
  ldr	r5, [sp, #36]
L01b0a:
  ldr	r4, [sp, #32]
L01b0c:
  cmp	r1, #0
L01b0e:
  bne.n	L01b3a
L01b10:
  cmp	r3, #0
L01b12:
  beq.n	L01b18
L01b14:
  cmp	r2, #15
L01b16:
  beq.n	L01b3a
L01b18:
  cmp	r2, #16
L01b1a:
  bne.n	L01b3a
L01b1c:
  cmp	r3, #0
L01b1e:
  bne.n	L01b3a
L01b20:
  cmp	r5, #0
L01b22:
  bne.n	L01b3a
L01b24:
  ldr	r6, [pc, #476]
L01b26:
  ldr	r7, [pc, #480]
L01b28:
  muls	r6, r0
L01b2a:
  adds	r7, r6, r7
L01b2c:
  movs	r6, #3
L01b2e:
  lsls	r6, r6, #10
L01b30:
  adds	r6, r7, r6
L01b32:
  ldrb	r6, [r6, #20]
L01b34:
  .inst.n 0x1eb6
L01b36:
  cmp	r6, #1
L01b38:
  bls.n	L01b42
L01b3a:
  str	r5, [sp, #4]
L01b3c:
  str	r4, [sp, #0]
L01b3e:
  bl	L03424
L01b42:
  pop	{r1, r2, r3, r4, r5, r6, r7, pc}
L01b44:
  push	{r3, r4, r5, r6, r7, lr}
L01b46:
  ldr	r4, [pc, #444]
L01b48:
  ldr	r5, [pc, #444]
L01b4a:
  muls	r4, r0
L01b4c:
  adds	r6, r4, r5
L01b4e:
  ldr	r4, [pc, #472]
L01b50:
  movs	r7, #23
L01b52:
  adds	r4, r6, r4
L01b54:
  movs	r5, #1
L01b56:
  lsls	r7, r7, #7
L01b58:
  lsls	r5, r5, #15
L01b5a:
  adds	r6, r6, r7
L01b5c:
  cmp	r1, #0
L01b5e:
  beq.n	L01ba0
L01b60:
  ldrb	r6, [r6, #5]
L01b62:
  lsls	r6, r6, #13
L01b64:
  orrs	r6, r5
L01b66:
  mov	r5, r6
L01b68:
  str	r6, [r4, #0]
L01b6a:
  lsrs	r5, r5, #5
L01b6c:
  lsls	r2, r2, #27
L01b6e:
  lsls	r5, r5, #5
L01b70:
  lsrs	r2, r2, #27
L01b72:
  orrs	r5, r2
L01b74:
  movs	r2, #192
L01b76:
  bics	r5, r2
L01b78:
  lsls	r2, r3, #30
L01b7a:
  lsrs	r2, r2, #24
L01b7c:
  orrs	r5, r2
L01b7e:
  movs	r2, #7
L01b80:
  lsls	r2, r2, #8
L01b82:
  bics	r5, r2
L01b84:
  ldr	r2, [sp, #28]
L01b86:
  movs	r3, #1
L01b88:
  lsls	r2, r2, #29
L01b8a:
  lsrs	r2, r2, #21
L01b8c:
  .word 0x60254315
L01b90:
  ldr	r2, [sp, #24]
L01b92:
  strh	r2, [r4, #2]
L01b94:
  movs	r2, #0
L01b96:
  str	r2, [sp, #0]
L01b98:
  movs	r2, #15
L01b9a:
  bl	L0331c
L01b9e:
  pop	{r3, r4, r5, r6, r7, pc}
L01ba0:
  ldrb	r7, [r6, #2]
L01ba2:
  cmp	r7, #2
L01ba4:
  beq.n	L01baa
L01ba6:
  cmp	r2, #1
L01ba8:
  beq.n	L01bae
L01baa:
  ldrb	r6, [r6, #4]
L01bac:
  b.n	L01b62
L01bae:
  str	r5, [r4, #0]
L01bb0:
  b.n	L01b6a
L01bb2:
  push	{r4, lr}
L01bb4:
  mov	r4, r0
L01bb6:
  bl	L03430
L01bba:
  ldr	r0, [pc, #328]
L01bbc:
  ldr	r1, [pc, #328]
L01bbe:
  muls	r0, r4
L01bc0:
  adds	r2, r0, r1
L01bc2:
  movs	r0, #117
L01bc4:
  lsls	r0, r0, #5
L01bc6:
  adds	r1, r2, r0
L01bc8:
  ldrb	r0, [r1, #11]
L01bca:
  cmp	r0, #1
L01bcc:
  bne.n	L01bec
L01bce:
  ldrb	r0, [r1, #12]
L01bd0:
  cmp	r0, #1
L01bd2:
  bne.n	L01bec
L01bd4:
  movs	r0, #15
L01bd6:
  lsls	r0, r0, #6
L01bd8:
  adds	r0, r2, r0
L01bda:
  ldrb	r0, [r0, #20]
L01bdc:
  lsls	r0, r0, #25
L01bde:
  bpl.n	L01bec
L01be0:
  movs	r2, #1
L01be2:
  mov	r3, r4
L01be4:
  mov	r1, r2
L01be6:
  movs	r0, #85
L01be8:
  bl	L0322c
L01bec:
  b.n	L0189a
L01bee:
  push	{r0, r1, r4, r5, r6, r7, lr}
L01bf0:
  mov	r7, r0
L01bf2:
  ldr	r0, [pc, #272]
L01bf4:
  mov	r1, r7
L01bf6:
  muls	r1, r0
L01bf8:
  ldr	r0, [pc, #268]
L01bfa:
  sub	sp, #12
L01bfc:
  adds	r0, r1, r0
L01bfe:
  movs	r1, #91
L01c00:
  lsls	r1, r1, #5
L01c02:
  adds	r6, r0, r1
L01c04:
  str	r0, [sp, #0]
L01c06:
  movs	r5, #0
L01c08:
  ldrb	r0, [r6, #8]
L01c0a:
  str	r0, [sp, #4]
L01c0c:
  movs	r0, #255
L01c0e:
  strb	r0, [r6, #8]
L01c10:
  mov	r4, r5
L01c12:
  ldr	r0, [pc, #280]
L01c14:
  lsls	r1, r4, #2
L01c16:
  adds	r0, r1, r0
L01c18:
  ldrb	r0, [r0, #2]
L01c1a:
  cmp	r0, r7
L01c1c:
  bne.n	L01c5c
L01c1e:
  ldr	r0, [pc, #256]
L01c20:
  ldrb	r0, [r0, #0]
L01c22:
  lsls	r0, r0, #29
L01c24:
  lsrs	r1, r0, #31
L01c26:
  ldr	r0, [sp, #16]
L01c28:
  bics	r1, r0
L01c2a:
  beq.n	L01c3c
L01c2c:
  movs	r1, #117
L01c2e:
  ldr	r0, [sp, #0]
L01c30:
  lsls	r1, r1, #5
L01c32:
  adds	r0, r0, r1
L01c34:
  ldrb	r0, [r0, #22]
L01c36:
  cmp	r0, #1
L01c38:
  beq.n	L01c40
L01c3a:
  b.n	L01c4c
L01c3c:
  movs	r5, #0
L01c3e:
  b.n	L01c50
L01c40:
  ldr	r0, [sp, #4]
L01c42:
  cmp	r0, r4
L01c44:
  bne.n	L01c4c
L01c46:
  movs	r5, #1
L01c48:
  strb	r4, [r6, #8]
L01c4a:
  b.n	L01c5c
L01c4c:
  cmp	r5, #0
L01c4e:
  bne.n	L01c5c
L01c50:
  movs	r3, #0
L01c52:
  mov	r2, r3
L01c54:
  mov	r1, r4
L01c56:
  mov	r0, r7
L01c58:
  bl	L0343c
L01c5c:
  .inst.n 0x1c64
L01c5e:
  uxtb	r4, r4
L01c60:
  cmp	r4, #4
L01c62:
  bcc.n	L01c12
L01c64:
  b.n	L017d2
L01c66:
  ldr	r2, [pc, #200]
L01c68:
  movs	r0, #255
L01c6a:
  ldr	r1, [pc, #200]
L01c6c:
  strb	r0, [r2, #8]
L01c6e:
  strb	r0, [r1, #12]
L01c70:
  ldr	r0, [pc, #172]
L01c72:
  ldr	r0, [r0, #0]
L01c74:
  lsls	r3, r0, #29
L01c76:
  bpl.n	L01c98
L01c78:
  lsls	r3, r0, #14
L01c7a:
  bpl.n	L01c80
L01c7c:
  movs	r3, #0
L01c7e:
  b.n	L01c86
L01c80:
  lsls	r3, r0, #12
L01c82:
  bpl.n	L01c88
L01c84:
  movs	r3, #2
L01c86:
  strb	r3, [r2, #8]
L01c88:
  lsls	r2, r0, #13
L01c8a:
  bpl.n	L01c90
L01c8c:
  movs	r0, #1
L01c8e:
  b.n	L01c96
L01c90:
  lsls	r0, r0, #11
L01c92:
  bpl.n	L01c98
L01c94:
  movs	r0, #3
L01c96:
  strb	r0, [r1, #12]
L01c98:
  bx	lr
L01c9a:
  push	{r3, r4, r5, r6, r7, lr}
L01c9c:
  mov	r5, r0
L01c9e:
  ldr	r0, [pc, #100]
L01ca0:
  mov	r1, r5
L01ca2:
  muls	r1, r0
L01ca4:
  ldr	r0, [pc, #96]
L01ca6:
  movs	r2, #2
L01ca8:
  adds	r4, r1, r0
L01caa:
  movs	r0, #111
L01cac:
  lsls	r0, r0, #5
L01cae:
  adds	r0, r4, r0
L01cb0:
  ldrh	r1, [r0, #28]
L01cb2:
  bics	r1, r2
L01cb4:
  strh	r1, [r0, #28]
L01cb6:
  movs	r1, #0
L01cb8:
  mov	r0, r5
L01cba:
  bl	L03448
L01cbe:
  movs	r1, #1
L01cc0:
  mov	r0, r5
L01cc2:
  bl	L03454
L01cc6:
  movs	r0, #91
L01cc8:
  lsls	r0, r0, #5
L01cca:
  adds	r6, r4, r0
L01ccc:
  ldr	r0, [pc, #104]
L01cce:
  ldr	r1, [pc, #88]
L01cd0:
  ldrb	r7, [r6, #8]
L01cd2:
  adds	r0, r4, r0
L01cd4:
  subs	r1, #249
L01cd6:
  bl	L03328
L01cda:
  strb	r7, [r6, #8]
L01cdc:
  mov	r0, r5
L01cde:
  bl	L03460
L01ce2:
  ldr	r0, [pc, #24]
L01ce4:
  ldr	r1, [r0, #8]
L01ce6:
  str	r1, [r0, #8]
L01ce8:
  ldr	r0, [pc, #52]
L01cea:
  b.n	L01d3c
L01cec:
  .word 0x20026f58
L01cf0:
  .word 0x2002326e
L01cf4:
  .word 0x20020004
L01cf8:
  .word 0x2002002c
L01cfc:
  .word 0x40090840
L01d00:
  .word 0x2002000c
L01d04:
  .word 0x00000ec4
L01d08:
  .word 0x200214c4
L01d0c:
  .word 0x0000396c
L01d10:
  .word 0x20023336
L01d14:
  .word 0x40090940
L01d18:
  .word 0x40090a40
L01d1c:
  .word 0x00018d3b
L01d20:
  .word 0x20023bf4
L01d24:
  .word 0x2002324c
L01d28:
  .word 0x000008d8
L01d2c:
  .word 0x200204d4
L01d30:
  .word 0x20022024
L01d34:
  .word 0x20022ee4
L01d38:
  .word 0x00000441
L01d3c:
  ldrb	r0, [r0, #0]
L01d3e:
  lsls	r0, r0, #29
L01d40:
  bmi.n	L01d58
L01d42:
  mov	r0, r5
L01d44:
  bl	L0346c
L01d48:
  movs	r1, #0
L01d4a:
  mov	r0, r5
L01d4c:
  bl	L03478
L01d50:
  movs	r1, #2
L01d52:
  mov	r0, r5
L01d54:
  bl	L03478
L01d58:
  movs	r0, #97
L01d5a:
  movs	r6, #0
L01d5c:
  lsls	r0, r0, #5
L01d5e:
  adds	r0, r4, r0
L01d60:
  strb	r6, [r0, #22]
L01d62:
  mov	r1, r6
L01d64:
  mov	r0, r5
L01d66:
  bl	L03484
L01d6a:
  movs	r1, #0
L01d6c:
  mov	r0, r5
L01d6e:
  bl	L03394
L01d72:
  mov	r0, r5
L01d74:
  bl	L03490
L01d78:
  mov	r0, r5
L01d7a:
  bl	L0349c
L01d7e:
  movs	r1, #0
L01d80:
  mov	r0, r5
L01d82:
  bl	L03028
L01d86:
  movs	r1, #1
L01d88:
  mov	r0, r5
L01d8a:
  bl	L034a8
L01d8e:
  movs	r1, #5
L01d90:
  mov	r0, r5
L01d92:
  bl	L034b4
L01d96:
  movs	r2, #117
L01d98:
  lsls	r2, r2, #5
L01d9a:
  movs	r1, #255
L01d9c:
  adds	r2, r4, r2
L01d9e:
  ldr	r0, [pc, #1008]
L01da0:
  strb	r1, [r2, #3]
L01da2:
  movs	r1, #1
L01da4:
  strb	r1, [r0, r5]
L01da6:
  ldr	r0, [pc, #1004]
L01da8:
  lsls	r1, r5, #8
L01daa:
  adds	r0, r1, r0
L01dac:
  ldr	r1, [r0, #56]
L01dae:
  movs	r2, #3
L01db0:
  lsls	r2, r2, #23
L01db2:
  orrs	r1, r2
L01db4:
  str	r1, [r0, #56]
L01db6:
  ldr	r0, [pc, #992]
L01db8:
  strb	r6, [r0, #0]
L01dba:
  strb	r6, [r0, #1]
L01dbc:
  pop	{r3, r4, r5, r6, r7, pc}
L01dbe:
  push	{r4, lr}
L01dc0:
  mov	r4, r0
L01dc2:
  ldr	r0, [pc, #984]
L01dc4:
  ldr	r1, [pc, #984]
L01dc6:
  muls	r0, r4
L01dc8:
  adds	r1, r0, r1
L01dca:
  movs	r0, #99
L01dcc:
  lsls	r0, r0, #5
L01dce:
  adds	r0, r1, r0
L01dd0:
  ldrb	r2, [r0, #26]
L01dd2:
  ldr	r1, [pc, #976]
L01dd4:
  cmp	r2, #0
L01dd6:
  beq.n	L01de0
L01dd8:
  movs	r2, #0
L01dda:
  strb	r2, [r0, #26]
L01ddc:
  movs	r0, #11
L01dde:
  b.n	L01de2
L01de0:
  movs	r0, #14
L01de2:
  strb	r0, [r1, r4]
L01de4:
  ldr	r0, [pc, #960]
L01de6:
  ldrb	r1, [r0, r4]
L01de8:
  mov	r0, r4
L01dea:
  bl	L03304
L01dee:
  ldr	r0, [pc, #928]
L01df0:
  ldrb	r0, [r0, r4]
L01df2:
  b.n	L0189a
L01df4:
  push	{r4, r5, r6, lr}
L01df6:
  lsls	r5, r0, #8
L01df8:
  mrs	r1, PRIMASK
L01dfc:
  lsls	r4, r1, #31
L01dfe:
  lsrs	r4, r4, #31
L01e00:
  cpsid	i
L01e02:
  bl	L034c0
L01e06:
  ldr	r0, [pc, #932]
L01e08:
  adds	r0, r5, r0
L01e0a:
  ldr	r1, [r0, #28]
L01e0c:
  movs	r2, #6
L01e0e:
  bics	r1, r2
L01e10:
  .inst.n 0x1c89
L01e12:
  str	r1, [r0, #28]
L01e14:
  cmp	r4, #0
L01e16:
  bne.n	L01e1a
L01e18:
  cpsie	i
L01e1a:
  pop	{r4, r5, r6, pc}
L01e1c:
  push	{r4, lr}
L01e1e:
  cmp	r1, #0
L01e20:
  beq.n	L01e3a
L01e22:
  cmp	r2, #1
L01e24:
  beq.n	L01e46
L01e26:
  cmp	r2, #4
L01e28:
  beq.n	L01e46
L01e2a:
  cmp	r2, #16
L01e2c:
  beq.n	L01e46
L01e2e:
  movs	r1, #8
L01e30:
  adds	r1, r1, r3
L01e32:
  uxtb	r1, r1
L01e34:
  bl	L034cc
L01e38:
  b.n	L0189a
L01e3a:
  cmp	r3, #0
L01e3c:
  beq.n	L01e42
L01e3e:
  movs	r1, #7
L01e40:
  b.n	L01e34
L01e42:
  movs	r1, #6
L01e44:
  b.n	L01e34
L01e46:
  movs	r1, #10
L01e48:
  b.n	L01e30
L01e4a:
  ldr	r1, [pc, #848]
L01e4c:
  ldr	r2, [pc, #848]
L01e4e:
  muls	r1, r0
L01e50:
  push	{r4, r5, r6, lr}
L01e52:
  adds	r1, r1, r2
L01e54:
  movs	r2, #17
L01e56:
  movs	r3, #1
L01e58:
  lsls	r2, r2, #6
L01e5a:
  adds	r2, r1, r2
L01e5c:
  ldr	r4, [r2, #12]
L01e5e:
  cmp	r4, #0
L01e60:
  beq.n	L01e68
L01e62:
  ldr	r4, [r2, #12]
L01e64:
  lsls	r4, r4, #6
L01e66:
  bpl.n	L01e9a
L01e68:
  ldr	r4, [r2, #12]
L01e6a:
  cmp	r4, #0
L01e6c:
  beq.n	L01e88
L01e6e:
  movs	r4, #101
L01e70:
  lsls	r4, r4, #5
L01e72:
  adds	r4, r1, r4
L01e74:
  ldrb	r4, [r4, #20]
L01e76:
  cmp	r4, #0
L01e78:
  beq.n	L01e88
L01e7a:
  ldr	r4, [pc, #820]
L01e7c:
  ldrb	r4, [r4, #18]
L01e7e:
  lsls	r4, r4, #30
L01e80:
  bpl.n	L01e88
L01e82:
  ldr	r2, [r2, #12]
L01e84:
  lsls	r2, r2, #5
L01e86:
  bpl.n	L01e9a
L01e88:
  movs	r2, #11
L01e8a:
  lsls	r2, r2, #8
L01e8c:
  adds	r2, r1, r2
L01e8e:
  ldr	r4, [r2, #0]
L01e90:
  cmp	r4, #0
L01e92:
  beq.n	L01e9c
L01e94:
  ldr	r2, [r2, #0]
L01e96:
  lsls	r2, r2, #6
L01e98:
  bmi.n	L01e9c
L01e9a:
  movs	r3, #0
L01e9c:
  movs	r2, #97
L01e9e:
  lsls	r2, r2, #5
L01ea0:
  adds	r2, r1, r2
L01ea2:
  ldr	r5, [pc, #760]
L01ea4:
  ldrb	r4, [r2, #2]
L01ea6:
  ldr	r6, [pc, #760]
L01ea8:
  movs	r2, #7
L01eaa:
  muls	r5, r0
L01eac:
  lsls	r2, r2, #9
L01eae:
  adds	r5, r5, r6
L01eb0:
  adds	r2, r5, r2
L01eb2:
  ldrb	r2, [r2, #0]
L01eb4:
  cmp	r4, #0
L01eb6:
  bne.n	L01f2a
L01eb8:
  cmp	r3, #0
L01eba:
  beq.n	L01f2a
L01ebc:
  movs	r3, #3
L01ebe:
  lsls	r3, r3, #10
L01ec0:
  adds	r3, r1, r3
L01ec2:
  ldrb	r3, [r3, #23]
L01ec4:
  cmp	r3, #1
L01ec6:
  bne.n	L01f2a
L01ec8:
  movs	r3, #91
L01eca:
  lsls	r3, r3, #5
L01ecc:
  adds	r3, r1, r3
L01ece:
  ldrb	r5, [r3, #14]
L01ed0:
  ldr	r3, [pc, #712]
L01ed2:
  movs	r4, #99
L01ed4:
  muls	r3, r0
L01ed6:
  adds	r3, r3, r6
L01ed8:
  lsls	r4, r4, #5
L01eda:
  movs	r6, #15
L01edc:
  adds	r4, r3, r4
L01ede:
  lsls	r6, r6, #6
L01ee0:
  adds	r3, r3, r6
L01ee2:
  cmp	r5, #1
L01ee4:
  beq.n	L01eec
L01ee6:
  cmp	r5, #0
L01ee8:
  beq.n	L01f04
L01eea:
  b.n	L01f2a
L01eec:
  ldr	r1, [r3, #8]
L01eee:
  lsls	r3, r1, #19
L01ef0:
  bpl.n	L01f2a
L01ef2:
  cmp	r2, #9
L01ef4:
  beq.n	L01efa
L01ef6:
  lsls	r1, r1, #18
L01ef8:
  bpl.n	L01f2a
L01efa:
  ldrb	r1, [r4, #12]
L01efc:
  lsls	r3, r1, #30
L01efe:
  bmi.n	L01f2a
L01f00:
  lsls	r1, r1, #26
L01f02:
  b.n	L01f22
L01f04:
  ldr	r3, [r3, #8]
L01f06:
  lsls	r5, r3, #17
L01f08:
  bpl.n	L01f2a
L01f0a:
  cmp	r2, #8
L01f0c:
  beq.n	L01f1e
L01f0e:
  lsls	r3, r3, #16
L01f10:
  bmi.n	L01f1e
L01f12:
  movs	r3, #51
L01f14:
  lsls	r3, r3, #6
L01f16:
  adds	r1, r1, r3
L01f18:
  ldrh	r1, [r1, #52]
L01f1a:
  lsls	r1, r1, #31
L01f1c:
  beq.n	L01f2e
L01f1e:
  ldrb	r1, [r4, #12]
L01f20:
  lsls	r1, r1, #25
L01f22:
  cmp	r1, #0
L01f24:
  blt.n	L01f2a
L01f26:
  movs	r0, #1
L01f28:
  pop	{r4, r5, r6, pc}
L01f2a:
  cmp	r2, #8
L01f2c:
  beq.n	L01f32
L01f2e:
  cmp	r2, #9
L01f30:
  bne.n	L01f38
L01f32:
  movs	r1, #3
L01f34:
  bl	L030b8
L01f38:
  movs	r0, #0
L01f3a:
  pop	{r4, r5, r6, pc}
L01f3c:
  push	{r4, r5, r6, lr}
L01f3e:
  mov	r4, r0
L01f40:
  ldr	r0, [pc, #600]
L01f42:
  mov	r1, r4
L01f44:
  muls	r1, r0
L01f46:
  ldr	r0, [pc, #600]
L01f48:
  adds	r5, r1, r0
L01f4a:
  ldr	r0, [pc, #616]
L01f4c:
  adds	r6, r5, r0
L01f4e:
  mov	r0, r4
L01f50:
  bl	L034d8
L01f54:
  movs	r0, #113
L01f56:
  lsls	r0, r0, #5
L01f58:
  adds	r5, r5, r0
L01f5a:
  ldrb	r0, [r5, #3]
L01f5c:
  cmp	r0, #1
L01f5e:
  bne.n	L01f82
L01f60:
  ldr	r1, [pc, #596]
L01f62:
  lsls	r0, r4, #2
L01f64:
  ldr	r0, [r1, r0]
L01f66:
  ldr	r0, [r0, #0]
L01f68:
  ldr	r1, [pc, #592]
L01f6a:
  cmp	r0, r1
L01f6c:
  bne.n	L01f82
L01f6e:
  ldr	r0, [pc, #544]
L01f70:
  ldrb	r0, [r0, r4]
L01f72:
  cmp	r0, #4
L01f74:
  bne.n	L01f82
L01f76:
  mov	r0, r4
L01f78:
  bl	L034e4
L01f7c:
  mov	r0, r4
L01f7e:
  bl	L034d8
L01f82:
  adds	r6, #255
L01f84:
  adds	r6, #1
L01f86:
  ldrb	r1, [r6, #10]
L01f88:
  ldr	r0, [pc, #524]
L01f8a:
  cmp	r1, #1
L01f8c:
  bne.n	L01f92
L01f8e:
  movs	r1, #3
L01f90:
  strb	r1, [r0, r4]
L01f92:
  ldrb	r1, [r5, #2]
L01f94:
  cmp	r1, #1
L01f96:
  bne.n	L01f9c
L01f98:
  movs	r1, #0
L01f9a:
  strb	r1, [r0, r4]
L01f9c:
  pop	{r4, r5, r6, pc}
L01f9e:
  push	{r4, lr}
L01fa0:
  mov	r4, r0
L01fa2:
  bl	L034f0
L01fa6:
  ldr	r1, [pc, #500]
L01fa8:
  movs	r2, #15
L01faa:
  muls	r4, r1
L01fac:
  ldr	r1, [pc, #496]
L01fae:
  lsls	r2, r2, #6
L01fb0:
  adds	r1, r4, r1
L01fb2:
  adds	r2, r1, r2
L01fb4:
  ldrb	r2, [r2, #20]
L01fb6:
  lsls	r2, r2, #26
L01fb8:
  lsrs	r2, r2, #29
L01fba:
  cmp	r2, #2
L01fbc:
  bcs.n	L01fcc
L01fbe:
  movs	r2, #23
L01fc0:
  lsls	r2, r2, #7
L01fc2:
  movs	r3, #1
L01fc4:
  adds	r1, r1, r2
L01fc6:
  strb	r3, [r1, #3]
L01fc8:
  movs	r2, #0
L01fca:
  strb	r2, [r1, #5]
L01fcc:
  b.n	L0189a
L01fce:
  push	{r4, r5, r6, lr}
L01fd0:
  mov	r4, r0
L01fd2:
  bl	L03310
L01fd6:
  ldr	r5, [pc, #440]
L01fd8:
  cmp	r0, #0
L01fda:
  beq.n	L02000
L01fdc:
  ldrb	r0, [r5, r4]
L01fde:
  cmp	r0, #152
L01fe0:
  bne.n	L01ff8
L01fe2:
  ldr	r0, [pc, #440]
L01fe4:
  ldr	r1, [pc, #440]
L01fe6:
  muls	r0, r4
L01fe8:
  adds	r1, r0, r1
L01fea:
  movs	r0, #23
L01fec:
  lsls	r0, r0, #7
L01fee:
  movs	r2, #1
L01ff0:
  adds	r0, r1, r0
L01ff2:
  strb	r2, [r0, #3]
L01ff4:
  movs	r1, #0
L01ff6:
  strb	r1, [r0, #5]
L01ff8:
  movs	r1, #20
L01ffa:
  mov	r0, r4
L01ffc:
  bl	L03304
L02000:
  ldrb	r0, [r5, r4]
L02002:
  pop	{r4, r5, r6, pc}
L02004:
  push	{r4, lr}
L02006:
  ldr	r1, [pc, #440]
L02008:
  ldrb	r1, [r1, r0]
L0200a:
  ldr	r2, [pc, #388]
L0200c:
  ldrb	r2, [r2, r0]
L0200e:
  cmp	r1, r2
L02010:
  beq.n	L0202e
L02012:
  ldr	r1, [pc, #392]
L02014:
  mov	r2, r0
L02016:
  muls	r2, r1
L02018:
  ldr	r1, [pc, #388]
L0201a:
  adds	r2, r2, r1
L0201c:
  movs	r1, #23
L0201e:
  lsls	r1, r1, #7
L02020:
  adds	r1, r2, r1
L02022:
  ldrb	r2, [r1, #2]
L02024:
  strb	r2, [r1, #3]
L02026:
  cmp	r2, #2
L02028:
  beq.n	L02034
L0202a:
  movs	r2, #0
L0202c:
  strb	r2, [r1, #5]
L0202e:
  bl	L034fc
L02032:
  b.n	L0189a
L02034:
  movs	r2, #1
L02036:
  b.n	L0202c
L02038:
  push	{r4, lr}
L0203a:
  mov	r4, r0
L0203c:
  ldr	r1, [pc, #356]
L0203e:
  movs	r0, #14
L02040:
  strb	r0, [r1, r4]
L02042:
  ldr	r0, [pc, #344]
L02044:
  ldr	r1, [pc, #344]
L02046:
  muls	r0, r4
L02048:
  adds	r1, r0, r1
L0204a:
  movs	r0, #23
L0204c:
  lsls	r0, r0, #7
L0204e:
  adds	r0, r1, r0
L02050:
  movs	r2, #1
L02052:
  strb	r2, [r0, #3]
L02054:
  movs	r1, #0
L02056:
  strb	r1, [r0, #5]
L02058:
  ldr	r0, [pc, #332]
L0205a:
  ldrb	r1, [r0, r4]
L0205c:
  mov	r0, r4
L0205e:
  bl	L03304
L02062:
  ldr	r0, [pc, #300]
L02064:
  ldrb	r0, [r0, r4]
L02066:
  b.n	L0189a
L02068:
  push	{r3, r4, r5, lr}
L0206a:
  mov	r5, r0
L0206c:
  bl	L03508
L02070:
  movs	r1, #24
L02072:
  mov	r0, r5
L02074:
  bl	L02ff8
L02078:
  mrs	r0, PRIMASK
L0207c:
  lsls	r4, r0, #31
L0207e:
  lsrs	r4, r4, #31
L02080:
  cpsid	i
L02082:
  movs	r1, #0
L02084:
  ldr	r0, [pc, #316]
L02086:
  strb	r1, [r0, r5]
L02088:
  ldrb	r2, [r0, #0]
L0208a:
  cmp	r2, #0
L0208c:
  bne.n	L02094
L0208e:
  ldrb	r0, [r0, #1]
L02090:
  cmp	r0, #0
L02092:
  beq.n	L020aa
L02094:
  ldr	r2, [pc, #304]
L02096:
  movs	r0, #1
L02098:
  ldrb	r3, [r2, #0]
L0209a:
  cmp	r3, #0
L0209c:
  beq.n	L020a6
L0209e:
  strb	r1, [r2, #0]
L020a0:
  ldr	r1, [pc, #268]
L020a2:
  strb	r0, [r1, #8]
L020a4:
  b.n	L020d0
L020a6:
  strb	r0, [r2, #0]
L020a8:
  b.n	L020a0
L020aa:
  ldr	r0, [pc, #288]
L020ac:
  ldr	r0, [r0, #8]
L020ae:
  lsrs	r0, r0, #30
L020b0:
  cmp	r0, #2
L020b2:
  beq.n	L020d0
L020b4:
  ldr	r0, [pc, #280]
L020b6:
  ldr	r0, [r0, #12]
L020b8:
  lsrs	r0, r0, #30
L020ba:
  cmp	r0, #2
L020bc:
  beq.n	L020d0
L020be:
  movs	r3, #4
L020c0:
  str	r1, [sp, #0]
L020c2:
  mov	r2, r3
L020c4:
  mov	r1, r3
L020c6:
  mov	r0, r3
L020c8:
  bl	L03514
L020cc:
  bl	L03520
L020d0:
  cmp	r4, #0
L020d2:
  bne.n	L020d6
L020d4:
  cpsie	i
L020d6:
  movs	r1, #0
L020d8:
  mov	r0, r5
L020da:
  bl	L0352c
L020de:
  pop	{r3, r4, r5, pc}
L020e0:
  push	{r3, r4, r5, r6, r7, lr}
L020e2:
  mov	r7, r0
L020e4:
  ldr	r0, [pc, #180]
L020e6:
  ldr	r1, [pc, #184]
L020e8:
  muls	r0, r7
L020ea:
  adds	r4, r0, r1
L020ec:
  movs	r0, #91
L020ee:
  lsls	r0, r0, #5
L020f0:
  adds	r5, r4, r0
L020f2:
  ldrb	r0, [r5, #11]
L020f4:
  cmp	r0, #2
L020f6:
  beq.n	L02138
L020f8:
  movs	r0, #15
L020fa:
  lsls	r0, r0, #6
L020fc:
  adds	r6, r4, r0
L020fe:
  ldrh	r0, [r6, #20]
L02100:
  lsls	r0, r0, #19
L02102:
  lsrs	r0, r0, #30
L02104:
  cmp	r0, #2
L02106:
  bcc.n	L0213c
L02108:
  mov	r0, r7
L0210a:
  bl	L031b4
L0210e:
  cmp	r0, #0
L02110:
  beq.n	L0213c
L02112:
  ldrb	r0, [r5, #14]
L02114:
  cmp	r0, #0
L02116:
  bne.n	L02122
L02118:
  ldrh	r0, [r6, #20]
L0211a:
  lsls	r0, r0, #19
L0211c:
  lsrs	r0, r0, #30
L0211e:
  cmp	r0, #3
L02120:
  bne.n	L0213c
L02122:
  movs	r0, #3
L02124:
  lsls	r0, r0, #10
L02126:
  adds	r0, r4, r0
L02128:
  ldrb	r0, [r0, #25]
L0212a:
  cmp	r0, #0
L0212c:
  beq.n	L0213c
L0212e:
  mov	r0, r7
L02130:
  .inst.w 0xf7fefa20
L02134:
  cmp	r0, #0
L02136:
  beq.n	L0213c
L02138:
  movs	r0, #1
L0213a:
  pop	{r3, r4, r5, r6, r7, pc}
L0213c:
  movs	r0, #7
L0213e:
  lsls	r0, r0, #9
L02140:
  adds	r0, r4, r0
L02142:
  ldrb	r0, [r0, #0]
L02144:
  cmp	r0, #12
L02146:
  bne.n	L02150
L02148:
  movs	r1, #3
L0214a:
  mov	r0, r7
L0214c:
  bl	L030b8
L02150:
  movs	r0, #0
L02152:
  pop	{r3, r4, r5, r6, r7, pc}
L02154:
  push	{r4, r5, r6, lr}
L02156:
  ldr	r1, [pc, #68]
L02158:
  ldr	r2, [pc, #68]
L0215a:
  muls	r1, r0
L0215c:
  adds	r5, r1, r2
L0215e:
  movs	r1, #15
L02160:
  lsls	r1, r1, #6
L02162:
  adds	r4, r5, r1
L02164:
  ldrh	r1, [r4, #20]
L02166:
  lsls	r1, r1, #19
L02168:
  lsrs	r6, r1, #30
L0216a:
  bl	L03538
L0216e:
  ldr	r0, [pc, #100]
L02170:
  ldrb	r0, [r0, #0]
L02172:
  lsls	r0, r0, #29
L02174:
  bpl.n	L021da
L02176:
  movs	r0, #117
L02178:
  lsls	r0, r0, #5
L0217a:
  adds	r0, r5, r0
L0217c:
  ldrb	r0, [r0, #22]
L0217e:
  cmp	r0, #0
L02180:
  beq.n	L021da
L02182:
  ldrh	r0, [r4, #20]
L02184:
  movs	r1, #3
L02186:
  lsls	r1, r1, #11
L02188:
  bics	r0, r1
L0218a:
  lsls	r1, r6, #11
L0218c:
  orrs	r0, r1
L0218e:
  b.n	L021d8
L02190:
  .word 0x20023336
L02194:
  .word 0x40090900
L02198:
  .word 0x20026f78
L0219c:
  .word 0x00000ec4
L021a0:
  .word 0x200214c4
L021a4:
  .word 0x2002331a
L021a8:
  .word 0x20023338
L021ac:
  .word 0x40000900
L021b0:
  .word 0x2002326c
L021b4:
  .word 0x000008d4
L021b8:
  .word 0x20020514
L021bc:
  .word 0x000396c0
L021c0:
  .word 0x200200d4
L021c4:
  .word 0x2002126c
L021c8:
  .word 0x20021264
L021cc:
  .word 0x20021884
L021d0:
  .word 0x20022744
L021d4:
  .word 0x20023bf4
L021d8:
  strh	r0, [r4, #20]
L021da:
  pop	{r4, r5, r6, pc}
L021dc:
  ldr	r1, [pc, #992]
L021de:
  push	{r4, lr}
L021e0:
  lsls	r2, r0, #8
L021e2:
  adds	r1, r2, r1
L021e4:
  ldr	r2, [r1, #36]
L021e6:
  movs	r3, #63
L021e8:
  lsls	r3, r3, #25
L021ea:
  bics	r2, r3
L021ec:
  movs	r3, #3
L021ee:
  lsls	r3, r3, #27
L021f0:
  adds	r2, r2, r3
L021f2:
  str	r2, [r1, #36]
L021f4:
  movs	r1, #3
L021f6:
  bl	L03478
L021fa:
  b.n	L01bec
L021fc:
  push	{r4, r5, r6, lr}
L021fe:
  movs	r2, #36
L02200:
  muls	r2, r0
L02202:
  ldr	r5, [pc, #960]
L02204:
  movs	r3, #1
L02206:
  mov	r4, r2
L02208:
  strb	r3, [r5, r4]
L0220a:
  bl	L03544
L0220e:
  movs	r0, #0
L02210:
  strb	r0, [r5, r4]
L02212:
  pop	{r4, r5, r6, pc}
L02214:
  push	{r0, r1, r2, r3, r4, r5, r6, r7, lr}
L02216:
  sub	sp, #4
L02218:
  mov	r6, r0
L0221a:
  ldr	r0, [sp, #40]
L0221c:
  cmp	r0, #0
L0221e:
  bne.n	L022be
L02220:
  ldr	r2, [pc, #936]
L02222:
  ldr	r3, [pc, #940]
L02224:
  ldr	r1, [pc, #928]
L02226:
  muls	r2, r6
L02228:
  adds	r4, r2, r3
L0222a:
  ldr	r0, [sp, #12]
L0222c:
  adds	r5, r4, r1
L0222e:
  cmp	r0, #4
L02230:
  beq.n	L02270
L02232:
  cmp	r0, #15
L02234:
  bne.n	L022be
L02236:
  movs	r0, #36
L02238:
  ldr	r1, [pc, #904]
L0223a:
  muls	r0, r6
L0223c:
  ldrb	r0, [r1, r0]
L0223e:
  cmp	r0, #1
L02240:
  bne.n	L022be
L02242:
  ldr	r0, [r5, #0]
L02244:
  lsls	r1, r0, #27
L02246:
  lsrs	r1, r1, #27
L02248:
  cmp	r1, #1
L0224a:
  bne.n	L022be
L0224c:
  lsls	r0, r0, #24
L0224e:
  lsrs	r0, r0, #30
L02250:
  cmp	r0, #1
L02252:
  bne.n	L022be
L02254:
  ldr	r0, [sp, #8]
L02256:
  cmp	r0, #0
L02258:
  beq.n	L0226a
L0225a:
  mov	r0, r4
L0225c:
  adds	r0, #100
L0225e:
  movs	r1, #71
L02260:
  lsls	r1, r1, #5
L02262:
  adds	r1, r4, r1
L02264:
  ldr	r0, [r0, #0]
L02266:
  str	r0, [r1, #4]
L02268:
  b.n	L022be
L0226a:
  mov	r0, r4
L0226c:
  adds	r0, #76
L0226e:
  b.n	L0225e
L02270:
  ldr	r0, [pc, #864]
L02272:
  ldr	r7, [pc, #868]
L02274:
  ldrb	r0, [r0, #0]
L02276:
  lsls	r0, r0, #29
L02278:
  bpl.n	L02280
L0227a:
  ldr	r0, [r5, #0]
L0227c:
  bics	r0, r7
L0227e:
  b.n	L02298
L02280:
  mov	r0, r6
L02282:
  bl	L03550
L02286:
  cmp	r0, #0
L02288:
  bne.n	L02294
L0228a:
  mov	r0, r6
L0228c:
  bl	L0355c
L02290:
  cmp	r0, #0
L02292:
  beq.n	L0227a
L02294:
  ldr	r0, [r5, #0]
L02296:
  orrs	r0, r7
L02298:
  movs	r3, #35
L0229a:
  movs	r1, #1
L0229c:
  lsls	r3, r3, #6
L0229e:
  mov	r2, r4
L022a0:
  adds	r2, #160
L022a2:
  str	r0, [r5, #0]
L022a4:
  b.n	L022b8
L022a6:
  lsls	r0, r1, #2
L022a8:
  adds	r0, r4, r0
L022aa:
  movs	r5, #168
L022ac:
  ldr	r5, [r5, r0]
L022ae:
  str	r5, [sp, #0]
L022b0:
  ldr	r5, [sp, #0]
L022b2:
  adds	r0, r0, r3
L022b4:
  .inst.n 0x1c49
L022b6:
  str	r5, [r0, #24]
L022b8:
  ldrb	r0, [r2, #4]
L022ba:
  cmp	r0, r1
L022bc:
  bhi.n	L022a6
L022be:
  ldr	r0, [sp, #40]
L022c0:
  str	r0, [sp, #0]
L022c2:
  add	r1, sp, #8
L022c4:
  ldmia	r1, {r1, r2, r3}
L022c6:
  mov	r0, r6
L022c8:
  bl	L03568
L022cc:
  b.n	L01c64
L022ce:
  push	{r4, lr}
L022d0:
  mov	r4, r0
L022d2:
  bl	L03574
L022d6:
  mov	r0, r4
L022d8:
  bl	L03580
L022dc:
  ldr	r0, [pc, #756]
L022de:
  ldrb	r0, [r0, #0]
L022e0:
  lsls	r0, r0, #29
L022e2:
  bpl.n	L022f8
L022e4:
  ldr	r1, [pc, #732]
L022e6:
  subs	r1, #20
L022e8:
  ldrb	r0, [r1, #0]
L022ea:
  cmp	r0, #0
L022ec:
  beq.n	L022f8
L022ee:
  movs	r2, #0
L022f0:
  strb	r2, [r1, #0]
L022f2:
  movs	r2, #9
L022f4:
  ldr	r1, [pc, #740]
L022f6:
  b.n	L022fc
L022f8:
  ldr	r1, [pc, #740]
L022fa:
  movs	r2, #9
L022fc:
  mov	r0, r4
L022fe:
  bl	L0358c
L02302:
  ldr	r0, [pc, #736]
L02304:
  ldrb	r0, [r0, r4]
L02306:
  b.n	L01bec
L02308:
  push	{r4, lr}
L0230a:
  mov	r4, r0
L0230c:
  bl	L03598
L02310:
  ldr	r2, [pc, #696]
L02312:
  movs	r3, #3
L02314:
  muls	r4, r2
L02316:
  ldr	r2, [pc, #696]
L02318:
  movs	r1, #0
L0231a:
  adds	r2, r4, r2
L0231c:
  lsls	r3, r3, #10
L0231e:
  adds	r2, r2, r3
L02320:
  strb	r1, [r2, #20]
L02322:
  b.n	L01bec
L02324:
  push	{r4, r5, r6, lr}
L02326:
  ldr	r4, [pc, #664]
L02328:
  movs	r2, #0
L0232a:
  adds	r4, #64
L0232c:
  lsls	r3, r2, #8
L0232e:
  adds	r3, r3, r4
L02330:
  ldr	r5, [r3, #8]
L02332:
  lsls	r5, r5, #1
L02334:
  lsrs	r5, r5, #1
L02336:
  str	r5, [r3, #8]
L02338:
  .inst.n 0x1c52
L0233a:
  uxtb	r2, r2
L0233c:
  cmp	r2, #2
L0233e:
  bcc.n	L0232c
L02340:
  bl	L035a4
L02344:
  pop	{r4, r5, r6, pc}
L02346:
  ldr	r2, [pc, #632]
L02348:
  push	{r4, lr}
L0234a:
  movs	r0, #0
L0234c:
  adds	r2, #64
L0234e:
  lsls	r4, r2, #24
L02350:
  lsls	r1, r0, #8
L02352:
  adds	r1, r1, r2
L02354:
  ldr	r3, [r1, #8]
L02356:
  orrs	r3, r4
L02358:
  str	r3, [r1, #8]
L0235a:
  .inst.n 0x1c40
L0235c:
  uxtb	r0, r0
L0235e:
  cmp	r0, #2
L02360:
  bcc.n	L02350
L02362:
  bl	L035b0
L02366:
  b.n	L01bec
L02368:
  push	{r4, r5, r6, lr}
L0236a:
  mov	r5, r0
L0236c:
  movs	r1, #0
L0236e:
  bl	L03448
L02372:
  mov	r0, r5
L02374:
  bl	L035bc
L02378:
  mov	r6, r0
L0237a:
  ldr	r0, [pc, #600]
L0237c:
  ldr	r4, [pc, #616]
L0237e:
  ldrb	r0, [r0, #0]
L02380:
  lsls	r0, r0, #29
L02382:
  bpl.n	L02394
L02384:
  ldrh	r0, [r4, #34]
L02386:
  lsls	r0, r0, #30
L02388:
  lsrs	r0, r0, #30
L0238a:
  cmp	r0, #2
L0238c:
  beq.n	L02394
L0238e:
  mov	r0, r5
L02390:
  bl	L033e8
L02394:
  ldrh	r0, [r4, #34]
L02396:
  lsls	r0, r0, #30
L02398:
  beq.n	L023a2
L0239a:
  movs	r1, #1
L0239c:
  mov	r0, r5
L0239e:
  bl	L033f4
L023a2:
  mov	r0, r6
L023a4:
  pop	{r4, r5, r6, pc}
L023a6:
  push	{r4, lr}
L023a8:
  mov	r4, r0
L023aa:
  bl	L035c8
L023ae:
  ldr	r1, [pc, #540]
L023b0:
  mov	r0, r4
L023b2:
  muls	r0, r1
L023b4:
  ldr	r1, [pc, #536]
L023b6:
  adds	r0, r0, r1
L023b8:
  movs	r1, #7
L023ba:
  lsls	r1, r1, #9
L023bc:
  adds	r0, r0, r1
L023be:
  ldrb	r1, [r0, #0]
L023c0:
  subs	r1, #29
L023c2:
  cmp	r1, #9
L023c4:
  bhi.n	L023ce
L023c6:
  movs	r1, #1
L023c8:
  mov	r0, r4
L023ca:
  bl	L030b8
L023ce:
  b.n	L01bec
L023d0:
  push	{r3, r4, r5, r6, r7, lr}
L023d2:
  movs	r4, #1
L023d4:
  subs	r5, r4, r0
L023d6:
  ldr	r6, [pc, #500]
L023d8:
  uxtb	r5, r5
L023da:
  ldr	r7, [pc, #500]
L023dc:
  muls	r5, r6
L023de:
  adds	r6, r5, r7
L023e0:
  movs	r2, #15
L023e2:
  mov	r3, r1
L023e4:
  lsls	r2, r2, #6
L023e6:
  movs	r5, #91
L023e8:
  subs	r1, r4, r0
L023ea:
  adds	r2, r6, r2
L023ec:
  lsls	r5, r5, #5
L023ee:
  adds	r6, r6, r5
L023f0:
  uxtb	r1, r1
L023f2:
  cmp	r3, #0
L023f4:
  beq.n	L0240c
L023f6:
  cmp	r3, #1
L023f8:
  bne.n	L02440
L023fa:
  ldrb	r3, [r6, #13]
L023fc:
  cmp	r3, #0
L023fe:
  bne.n	L02440
L02400:
  ldr	r6, [pc, #488]
L02402:
  lsls	r3, r1, #2
L02404:
  ldr	r3, [r6, r3]
L02406:
  cmp	r3, #0
L02408:
  bne.n	L02454
L0240a:
  b.n	L0244a
L0240c:
  ldrb	r1, [r6, #13]
L0240e:
  cmp	r1, #1
L02410:
  beq.n	L02442
L02412:
  ldrb	r2, [r2, #28]
L02414:
  lsls	r2, r2, #31
L02416:
  beq.n	L02442
L02418:
  cmp	r1, #0
L0241a:
  bne.n	L02422
L0241c:
  ldrb	r1, [r6, #8]
L0241e:
  cmp	r1, #255
L02420:
  beq.n	L02442
L02422:
  movs	r1, #0
L02424:
  ldr	r2, [pc, #420]
L02426:
  ldr	r3, [pc, #424]
L02428:
  muls	r2, r0
L0242a:
  adds	r2, r2, r3
L0242c:
  movs	r3, #117
L0242e:
  lsls	r3, r3, #5
L02430:
  adds	r5, r2, r3
L02432:
  cmp	r1, #0
L02434:
  beq.n	L02446
L02436:
  movs	r1, #0
L02438:
  bl	L033c4
L0243c:
  movs	r0, #0
L0243e:
  strb	r0, [r5, #26]
L02440:
  pop	{r3, r4, r5, r6, r7, pc}
L02442:
  movs	r1, #1
L02444:
  b.n	L02424
L02446:
  strb	r4, [r5, #26]
L02448:
  pop	{r3, r4, r5, r6, r7, pc}
L0244a:
  ldr	r2, [r2, #28]
L0244c:
  lsls	r2, r2, #6
L0244e:
  lsrs	r2, r2, #30
L02450:
  cmp	r2, #1
L02452:
  bne.n	L02448
L02454:
  ldr	r2, [pc, #400]
L02456:
  ldrh	r2, [r2, #34]
L02458:
  lsls	r2, r2, #30
L0245a:
  lsrs	r2, r2, #30
L0245c:
  cmp	r2, #1
L0245e:
  bne.n	L02448
L02460:
  movs	r2, #0
L02462:
  bl	L035d4
L02466:
  mov	r6, r0
L02468:
  subs	r0, r4, r6
L0246a:
  ldr	r1, [pc, #352]
L0246c:
  uxtb	r0, r0
L0246e:
  muls	r1, r0
L02470:
  adds	r7, r1, r7
L02472:
  adds	r5, r7, r5
L02474:
  ldrb	r1, [r5, #8]
L02476:
  bl	L033b8
L0247a:
  movs	r0, #255
L0247c:
  strb	r0, [r5, #8]
L0247e:
  movs	r0, #117
L02480:
  lsls	r0, r0, #5
L02482:
  adds	r0, r7, r0
L02484:
  strb	r4, [r0, #26]
L02486:
  mov	r0, r6
L02488:
  bl	L035e0
L0248c:
  pop	{r3, r4, r5, r6, r7, pc}
L0248e:
  push	{r4, r5, r6, r7, lr}
L02490:
  ldr	r3, [pc, #348]
L02492:
  mov	r4, r1
L02494:
  mov	r5, r0
L02496:
  adds	r3, #20
L02498:
  ldmia	r3, {r0, r1, r3}
L0249a:
  sub	sp, #20
L0249c:
  mov	r6, sp
L0249e:
  stmia	r6!, {r0, r1, r3}
L024a0:
  ldr	r0, [pc, #296]
L024a2:
  ldr	r1, [pc, #300]
L024a4:
  muls	r0, r5
L024a6:
  adds	r0, r0, r1
L024a8:
  movs	r1, #15
L024aa:
  ldr	r3, [pc, #288]
L024ac:
  lsls	r1, r1, #6
L024ae:
  ldr	r7, [pc, #288]
L024b0:
  adds	r1, r0, r1
L024b2:
  muls	r3, r4
L024b4:
  str	r1, [sp, #16]
L024b6:
  adds	r3, r3, r7
L024b8:
  ldr	r1, [r1, #28]
L024ba:
  movs	r7, #15
L024bc:
  lsls	r1, r1, #6
L024be:
  lsls	r7, r7, #6
L024c0:
  lsrs	r6, r1, #30
L024c2:
  adds	r7, r3, r7
L024c4:
  str	r3, [sp, #12]
L024c6:
  cmp	r6, #0
L024c8:
  bne.n	L024d2
L024ca:
  ldr	r3, [r7, #28]
L024cc:
  lsls	r3, r3, #6
L024ce:
  lsrs	r3, r3, #30
L024d0:
  beq.n	L02564
L024d2:
  lsrs	r1, r1, #30
L024d4:
  beq.n	L0251c
L024d6:
  movs	r1, #111
L024d8:
  lsls	r1, r1, #5
L024da:
  adds	r0, r0, r1
L024dc:
  ldrb	r0, [r0, #28]
L024de:
  lsls	r0, r0, #28
L024e0:
  lsrs	r0, r0, #30
L024e2:
  lsls	r1, r0, #2
L024e4:
  mov	r0, sp
L024e6:
  ldr	r6, [r0, r1]
L024e8:
  ldr	r0, [r7, #28]
L024ea:
  lsls	r0, r0, #6
L024ec:
  lsrs	r0, r0, #30
L024ee:
  ldr	r0, [sp, #12]
L024f0:
  beq.n	L0253a
L024f2:
  movs	r1, #111
L024f4:
  lsls	r1, r1, #5
L024f6:
  adds	r0, r0, r1
L024f8:
  ldrb	r0, [r0, #28]
L024fa:
  lsls	r0, r0, #28
L024fc:
  lsrs	r0, r0, #30
L024fe:
  lsls	r1, r0, #2
L02500:
  mov	r0, sp
L02502:
  ldr	r0, [r0, r1]
L02504:
  cmp	r6, r0
L02506:
  bne.n	L0255e
L02508:
  ldr	r0, [r7, #28]
L0250a:
  lsls	r0, r0, #6
L0250c:
  lsrs	r0, r0, #30
L0250e:
  beq.n	L0255a
L02510:
  ldr	r0, [sp, #16]
L02512:
  ldr	r0, [r0, #28]
L02514:
  lsls	r0, r0, #6
L02516:
  lsrs	r0, r0, #30
L02518:
  beq.n	L02556
L0251a:
  b.n	L0255a
L0251c:
  ldr	r1, [pc, #204]
L0251e:
  lsls	r2, r5, #2
L02520:
  ldr	r1, [r1, r2]
L02522:
  lsls	r1, r1, #1
L02524:
  lsrs	r1, r1, #29
L02526:
  lsls	r1, r1, #2
L02528:
  adds	r1, r0, r1
L0252a:
  movs	r0, #17
L0252c:
  lsls	r0, r0, #6
L0252e:
  adds	r0, r1, r0
L02530:
  ldr	r0, [r0, #8]
L02532:
  bl	L035ec
L02536:
  mov	r6, r0
L02538:
  b.n	L024e8
L0253a:
  ldr	r1, [pc, #176]
L0253c:
  lsls	r2, r4, #2
L0253e:
  ldr	r1, [r1, r2]
L02540:
  lsls	r1, r1, #1
L02542:
  lsrs	r1, r1, #29
L02544:
  lsls	r1, r1, #2
L02546:
  adds	r1, r0, r1
L02548:
  movs	r0, #17
L0254a:
  lsls	r0, r0, #6
L0254c:
  adds	r0, r1, r0
L0254e:
  ldr	r0, [r0, #8]
L02550:
  bl	L035ec
L02554:
  b.n	L02504
L02556:
  mov	r0, r5
L02558:
  b.n	L022cc
L0255a:
  mov	r0, r4
L0255c:
  b.n	L022cc
L0255e:
  cmp	r6, r0
L02560:
  bls.n	L0255a
L02562:
  b.n	L02556
L02564:
  mov	r1, r4
L02566:
  mov	r0, r5
L02568:
  bl	L035f8
L0256c:
  b.n	L022cc
L0256e:
  push	{r4, r5, r6, lr}
L02570:
  mov	r5, r0
L02572:
  movs	r0, #1
L02574:
  subs	r0, r0, r5
L02576:
  uxtb	r4, r0
L02578:
  mov	r0, r5
L0257a:
  bl	L03604
L0257e:
  mov	r6, r0
L02580:
  ldr	r0, [pc, #72]
L02582:
  movs	r2, #117
L02584:
  muls	r5, r0
L02586:
  ldr	r0, [pc, #72]
L02588:
  lsls	r2, r2, #5
L0258a:
  adds	r3, r5, r0
L0258c:
  movs	r1, #0
L0258e:
  adds	r3, r3, r2
L02590:
  strb	r1, [r3, #26]
L02592:
  ldr	r1, [pc, #84]
L02594:
  ldrh	r1, [r1, #34]
L02596:
  lsls	r1, r1, #30
L02598:
  beq.n	L025ba
L0259a:
  ldr	r1, [pc, #48]
L0259c:
  muls	r1, r4
L0259e:
  adds	r1, r1, r0
L025a0:
  movs	r0, #91
L025a2:
  lsls	r0, r0, #5
L025a4:
  adds	r0, r1, r0
L025a6:
  ldrb	r0, [r0, #13]
L025a8:
  cmp	r0, #0
L025aa:
  bne.n	L025ba
L025ac:
  adds	r0, r1, r2
L025ae:
  ldrb	r0, [r0, #26]
L025b0:
  cmp	r0, #1
L025b2:
  bne.n	L025ba
L025b4:
  mov	r0, r4
L025b6:
  bl	L035e0
L025ba:
  mov	r0, r6
L025bc:
  pop	{r4, r5, r6, pc}
L025be:
  movs	r0, r0
L025c0:
  .word 0x40090940
L025c4:
  .word 0x20027c1c
L025c8:
  .word 0x000008d8
L025cc:
  .word 0x00000ec4
L025d0:
  .word 0x200214c4
L025d4:
  .word 0x20023bf4
L025d8:
  .word 0x20000000
L025dc:
  .word 0x0004d328
L025e0:
  .word 0x00094570
L025e4:
  .word 0x20023336
L025e8:
  .word 0x2002324c
L025ec:
  .word 0x2002331c
L025f0:
  .word 0x20026f58
L025f4:
  push	{r4, lr}
L025f6:
  mov	r4, r0
L025f8:
  ldr	r1, [pc, #988]
L025fa:
  ldr	r2, [pc, #992]
L025fc:
  muls	r1, r4
L025fe:
  adds	r1, r1, r2
L02600:
  movs	r2, #117
L02602:
  lsls	r2, r2, #5
L02604:
  adds	r1, r1, r2
L02606:
  movs	r0, #0
L02608:
  strb	r0, [r1, #26]
L0260a:
  movs	r1, #36
L0260c:
  ldr	r2, [pc, #976]
L0260e:
  muls	r1, r4
L02610:
  adds	r1, r1, r2
L02612:
  strb	r0, [r1, #10]
L02614:
  mov	r0, r4
L02616:
  bl	L03610
L0261a:
  cmp	r4, #0
L0261c:
  beq.n	L0262a
L0261e:
  movs	r0, #21
L02620:
  movs	r1, #1
L02622:
  lsls	r1, r0
L02624:
  ldr	r0, [pc, #956]
L02626:
  str	r1, [r0, #0]
L02628:
  b.n	L01e38
L0262a:
  movs	r0, #20
L0262c:
  b.n	L02620
L0262e:
  push	{r4, r5, r6, r7, lr}
L02630:
  mov	r4, r0
L02632:
  ldr	r1, [pc, #948]
L02634:
  lsls	r0, r0, #8
L02636:
  sub	sp, #20
L02638:
  adds	r0, r0, r1
L0263a:
  str	r0, [sp, #12]
L0263c:
  ldr	r0, [r0, #8]
L0263e:
  movs	r1, #2
L02640:
  movs	r7, #0
L02642:
  str	r1, [sp, #16]
L02644:
  str	r7, [sp, #0]
L02646:
  mov	r1, sp
L02648:
  strb	r7, [r1, #4]
L0264a:
  lsls	r1, r0, #14
L0264c:
  mov	r0, r4
L0264e:
  movs	r2, #36
L02650:
  muls	r0, r2
L02652:
  ldr	r2, [pc, #908]
L02654:
  adds	r6, r0, r2
L02656:
  ldr	r0, [pc, #916]
L02658:
  lsls	r2, r4, #8
L0265a:
  adds	r5, r2, r0
L0265c:
  cmp	r1, #0
L0265e:
  bge.n	L02676
L02660:
  mov	r0, r4
L02662:
  bl	L0361c
L02666:
  str	r7, [r6, #4]
L02668:
  bl	L03628
L0266c:
  bl	L03634
L02670:
  movs	r0, #1
L02672:
  lsls	r0, r0, #17
L02674:
  b.n	L02726
L02676:
  ldr	r0, [r5, #20]
L02678:
  str	r0, [sp, #0]
L0267a:
  lsls	r0, r0, #30
L0267c:
  bmi.n	L02686
L0267e:
  ldr	r0, [pc, #880]
L02680:
  ldrb	r0, [r0, r4]
L02682:
  cmp	r0, #70
L02684:
  bne.n	L0268a
L02686:
  movs	r0, #1
L02688:
  str	r0, [r6, #4]
L0268a:
  bl	L03628
L0268e:
  bl	L03634
L02692:
  ldr	r0, [sp, #0]
L02694:
  lsls	r0, r0, #31
L02696:
  beq.n	L02710
L02698:
  ldr	r0, [sp, #0]
L0269a:
  lsls	r0, r0, #24
L0269c:
  bmi.n	L026b6
L0269e:
  movs	r1, #4
L026a0:
  mov	r0, r4
L026a2:
  ldr	r2, [sp, #0]
L026a4:
  bl	L032b0
L026a8:
  movs	r0, #1
L026aa:
  mov	r1, sp
L026ac:
  strb	r0, [r1, #4]
L026ae:
  ldr	r1, [sp, #16]
L026b0:
  orrs	r1, r0
L026b2:
  str	r1, [sp, #16]
L026b4:
  b.n	L0271e
L026b6:
  ldr	r0, [sp, #0]
L026b8:
  lsls	r0, r0, #25
L026ba:
  bpl.n	L026fc
L026bc:
  ldr	r0, [pc, #792]
L026be:
  ldr	r1, [pc, #796]
L026c0:
  muls	r0, r4
L026c2:
  adds	r0, r0, r1
L026c4:
  movs	r1, #39
L026c6:
  lsls	r1, r1, #6
L026c8:
  adds	r1, r0, r1
L026ca:
  ldrb	r2, [r1, #30]
L026cc:
  cmp	r2, #1
L026ce:
  bne.n	L026e4
L026d0:
  movs	r2, #79
L026d2:
  lsls	r2, r2, #5
L026d4:
  adds	r0, r0, r2
L026d6:
  ldrb	r0, [r0, #5]
L026d8:
  cmp	r0, #3
L026da:
  beq.n	L026f2
L026dc:
  ldr	r1, [pc, #788]
L026de:
  mov	r0, r4
L026e0:
  bl	L03640
L026e4:
  movs	r0, #1
L026e6:
  mov	r1, sp
L026e8:
  strb	r0, [r1, #4]
L026ea:
  mov	r0, r4
L026ec:
  bl	L0364c
L026f0:
  b.n	L0271e
L026f2:
  strb	r7, [r1, #30]
L026f4:
  mov	r0, r4
L026f6:
  bl	L03658
L026fa:
  b.n	L026e4
L026fc:
  mov	r0, sp
L026fe:
  strb	r7, [r0, #4]
L02700:
  mov	r0, r4
L02702:
  bl	L0364c
L02706:
  ldr	r0, [sp, #16]
L02708:
  movs	r1, #1
L0270a:
  orrs	r0, r1
L0270c:
  str	r0, [sp, #16]
L0270e:
  b.n	L0271e
L02710:
  ldr	r0, [r6, #4]
L02712:
  cmp	r0, #0
L02714:
  bne.n	L0271e
L02716:
  ldr	r0, [r5, #0]
L02718:
  lsrs	r1, r0, #3
L0271a:
  lsls	r1, r1, #3
L0271c:
  str	r1, [r5, #0]
L0271e:
  ldr	r1, [sp, #16]
L02720:
  str	r1, [r5, #20]
L02722:
  movs	r0, #1
L02724:
  lsls	r0, r0, #18
L02726:
  str	r0, [sp, #0]
L02728:
  mov	r0, sp
L0272a:
  ldrb	r0, [r0, #4]
L0272c:
  cmp	r0, #0
L0272e:
  beq.n	L02742
L02730:
  ldr	r0, [r5, #0]
L02732:
  lsls	r0, r0, #29
L02734:
  lsrs	r0, r0, #29
L02736:
  cmp	r0, #1
L02738:
  beq.n	L02742
L0273a:
  ldr	r0, [r5, #0]
L0273c:
  lsrs	r0, r0, #3
L0273e:
  lsls	r0, r0, #3
L02740:
  str	r0, [r5, #0]
L02742:
  ldr	r0, [sp, #12]
L02744:
  ldr	r1, [sp, #0]
L02746:
  str	r1, [r0, #8]
L02748:
  b.n	L022cc
L0274a:
  push	{r3, r4, r5, lr}
L0274c:
  mov	r5, r0
L0274e:
  ldr	r1, [pc, #668]
L02750:
  lsls	r0, r0, #8
L02752:
  adds	r4, r0, r1
L02754:
  ldr	r0, [r4, #20]
L02756:
  str	r0, [sp, #0]
L02758:
  lsls	r0, r0, #31
L0275a:
  beq.n	L02770
L0275c:
  ldr	r0, [sp, #0]
L0275e:
  lsls	r0, r0, #25
L02760:
  bpl.n	L02770
L02762:
  movs	r1, #3
L02764:
  mov	r0, r5
L02766:
  ldr	r2, [sp, #0]
L02768:
  bl	L032b0
L0276c:
  movs	r1, #65
L0276e:
  str	r1, [r4, #20]
L02770:
  mov	r0, r5
L02772:
  bl	L03664
L02776:
  pop	{r3, r4, r5, pc}
L02778:
  push	{r4, lr}
L0277a:
  bl	L03670
L0277e:
  movs	r1, #3
L02780:
  movs	r0, #14
L02782:
  .inst.w 0xf7fdfe1d
L02786:
  movs	r1, #3
L02788:
  movs	r0, #15
L0278a:
  .inst.w 0xf7fdfe19
L0278e:
  b.n	L01fcc
L02790:
  push	{r0, r1, r2, r3, r4, r5, r6, r7, lr}
L02792:
  sub	sp, #4
L02794:
  ldr	r1, [pc, #576]
L02796:
  ldr	r0, [sp, #4]
L02798:
  mov	r4, r3
L0279a:
  muls	r0, r1
L0279c:
  ldr	r1, [pc, #572]
L0279e:
  adds	r5, r0, r1
L027a0:
  ldr	r0, [pc, #596]
L027a2:
  movs	r1, #255
L027a4:
  adds	r7, r5, r0
L027a6:
  adds	r1, #5
L027a8:
  mov	r0, r7
L027aa:
  bl	L03334
L027ae:
  ldr	r0, [sp, #8]
L027b0:
  cmp	r0, #1
L027b2:
  beq.n	L027d2
L027b4:
  cmp	r0, #2
L027b6:
  beq.n	L027d2
L027b8:
  cmp	r4, #0
L027ba:
  beq.n	L027d2
L027bc:
  movs	r6, #0
L027be:
  ldr	r0, [sp, #12]
L027c0:
  cmp	r0, #7
L027c2:
  beq.n	L027d6
L027c4:
  mov	r2, r0
L027c6:
  mov	r3, r4
L027c8:
  ldr	r1, [sp, #8]
L027ca:
  ldr	r0, [sp, #4]
L027cc:
  bl	L0367c
L027d0:
  b.n	L022cc
L027d2:
  movs	r6, #1
L027d4:
  b.n	L027be
L027d6:
  ldr	r0, [pc, #544]
L027d8:
  subs	r0, #22
L027da:
  adds	r1, r5, r0
L027dc:
  movs	r0, #0
L027de:
  strh	r0, [r1, #20]
L027e0:
  cmp	r6, #0
L027e2:
  beq.n	L027e8
L027e4:
  movs	r3, #7
L027e6:
  b.n	L027ea
L027e8:
  movs	r3, #0
L027ea:
  movs	r1, #35
L027ec:
  lsls	r1, r1, #6
L027ee:
  adds	r4, r5, r1
L027f0:
  lsls	r0, r6, #15
L027f2:
  strh	r0, [r4, #22]
L027f4:
  ldrh	r2, [r4, #20]
L027f6:
  movs	r1, #7
L027f8:
  lsls	r1, r1, #12
L027fa:
  bics	r2, r1
L027fc:
  lsls	r3, r3, #12
L027fe:
  orrs	r2, r3
L02800:
  movs	r3, #43
L02802:
  lsls	r3, r3, #6
L02804:
  strh	r2, [r4, #20]
L02806:
  adds	r3, r5, r3
L02808:
  ldr	r3, [r3, #60]
L0280a:
  ldr	r3, [r3, #4]
L0280c:
  str	r3, [sp, #0]
L0280e:
  mov	r3, sp
L02810:
  ldrb	r3, [r3, #0]
L02812:
  cmp	r3, #1
L02814:
  bhi.n	L0285a
L02816:
  mov	r3, sp
L02818:
  ldrb	r3, [r3, #1]
L0281a:
  cmp	r3, #7
L0281c:
  bhi.n	L0285a
L0281e:
  adds	r0, #26
L02820:
  bics	r2, r1
L02822:
  strh	r0, [r4, #22]
L02824:
  cmp	r6, #0
L02826:
  beq.n	L0282c
L02828:
  movs	r0, #7
L0282a:
  b.n	L0282e
L0282c:
  movs	r0, #0
L0282e:
  lsls	r0, r0, #12
L02830:
  orrs	r2, r0
L02832:
  strh	r2, [r4, #20]
L02834:
  ldr	r0, [sp, #8]
L02836:
  cmp	r0, #0
L02838:
  beq.n	L0284a
L0283a:
  mov	r1, r5
L0283c:
  adds	r1, #255
L0283e:
  adds	r1, #159
L02840:
  mov	r0, r7
L02842:
  movs	r2, #26
L02844:
  bl	L03178
L02848:
  b.n	L02874
L0284a:
  mov	r1, r5
L0284c:
  adds	r1, #255
L0284e:
  adds	r1, #133
L02850:
  mov	r0, r7
L02852:
  movs	r2, #26
L02854:
  bl	L03688
L02858:
  b.n	L02874
L0285a:
  .inst.n 0x1d00
L0285c:
  bics	r2, r1
L0285e:
  strh	r0, [r4, #22]
L02860:
  cmp	r6, #0
L02862:
  beq.n	L02868
L02864:
  movs	r0, #2
L02866:
  b.n	L0286a
L02868:
  movs	r0, #0
L0286a:
  lsls	r0, r0, #12
L0286c:
  orrs	r2, r0
L0286e:
  strh	r2, [r4, #20]
L02870:
  movs	r0, #0
L02872:
  str	r0, [r4, #24]
L02874:
  cmp	r6, #0
L02876:
  beq.n	L02880
L02878:
  ldrh	r0, [r4, #20]
L0287a:
  lsls	r0, r0, #17
L0287c:
  lsrs	r3, r0, #29
L0287e:
  b.n	L02886
L02880:
  ldrh	r0, [r4, #22]
L02882:
  lsls	r3, r0, #23
L02884:
  lsrs	r3, r3, #23
L02886:
  movs	r0, #1
L02888:
  str	r0, [sp, #0]
L0288a:
  add	r0, sp, #4
L0288c:
  ldmia	r0, {r0, r1, r2}
L0288e:
  bl	L0331c
L02892:
  b.n	L022cc
L02894:
  push	{r3, r4, r5, lr}
L02896:
  mov	r4, r0
L02898:
  bl	L03310
L0289c:
  cmp	r0, #0
L0289e:
  beq.n	L028ec
L028a0:
  ldr	r0, [pc, #308]
L028a2:
  ldr	r1, [pc, #312]
L028a4:
  muls	r0, r4
L028a6:
  adds	r2, r0, r1
L028a8:
  movs	r0, #43
L028aa:
  lsls	r0, r0, #6
L028ac:
  adds	r0, r2, r0
L028ae:
  ldr	r0, [r0, #60]
L028b0:
  movs	r3, #0
L028b2:
  ldrb	r1, [r0, #4]
L028b4:
  movs	r0, #35
L028b6:
  lsls	r0, r0, #6
L028b8:
  adds	r0, r2, r0
L028ba:
  cmp	r1, #8
L028bc:
  bcs.n	L028ca
L028be:
  lsls	r1, r1, #2
L028c0:
  adds	r1, r2, r1
L028c2:
  adds	r1, #255
L028c4:
  adds	r1, #33
L028c6:
  ldr	r1, [r1, #4]
L028c8:
  b.n	L028da
L028ca:
  movs	r1, #0
L028cc:
  mvns	r1, r1
L028ce:
  mov	r2, sp
L028d0:
  str	r3, [sp, #0]
L028d2:
  strh	r1, [r2, #2]
L028d4:
  movs	r1, #1
L028d6:
  strb	r1, [r2, #1]
L028d8:
  ldr	r1, [sp, #0]
L028da:
  str	r1, [r0, #24]
L028dc:
  str	r3, [sp, #0]
L028de:
  movs	r3, #1
L028e0:
  movs	r2, #5
L028e2:
  movs	r1, #0
L028e4:
  mov	r0, r4
L028e6:
  bl	L0331c
L028ea:
  b.n	L028f6
L028ec:
  ldr	r0, [pc, #268]
L028ee:
  ldrb	r1, [r0, r4]
L028f0:
  mov	r0, r4
L028f2:
  bl	L03304
L028f6:
  ldr	r0, [pc, #248]
L028f8:
  ldrb	r0, [r0, r4]
L028fa:
  pop	{r3, r4, r5, pc}
L028fc:
  push	{r4, r5, r6, lr}
L028fe:
  mov	r5, r2
L02900:
  mov	r4, r0
L02902:
  cmp	r1, #39
L02904:
  beq.n	L0290c
L02906:
  bl	L03694
L0290a:
  b.n	L025bc
L0290c:
  bl	L036a0
L02910:
  mov	r1, r0
L02912:
  movs	r2, #1
L02914:
  mov	r0, r5
L02916:
  bl	L036ac
L0291a:
  ldr	r1, [pc, #188]
L0291c:
  mov	r0, r4
L0291e:
  muls	r0, r1
L02920:
  ldr	r1, [pc, #184]
L02922:
  adds	r0, r0, r1
L02924:
  mov	r1, r0
L02926:
  adds	r1, #192
L02928:
  ldr	r2, [r1, #4]
L0292a:
  lsls	r3, r2, #14
L0292c:
  bpl.n	L02946
L0292e:
  movs	r3, #1
L02930:
  lsls	r3, r3, #16
L02932:
  bics	r2, r3
L02934:
  movs	r3, #15
L02936:
  lsls	r3, r3, #6
L02938:
  adds	r3, r0, r3
L0293a:
  ldr	r3, [r3, #8]
L0293c:
  lsls	r3, r3, #12
L0293e:
  lsrs	r3, r3, #31
L02940:
  lsls	r3, r3, #16
L02942:
  orrs	r2, r3
L02944:
  str	r2, [r1, #4]
L02946:
  ldr	r5, [pc, #152]
L02948:
  subs	r5, #20
L0294a:
  ldrb	r1, [r5, #14]
L0294c:
  lsls	r1, r1, #30
L0294e:
  lsrs	r1, r1, #30
L02950:
  cmp	r1, #2
L02952:
  bne.n	L0296c
L02954:
  ldr	r1, [pc, #168]
L02956:
  ldrh	r1, [r1, #34]
L02958:
  lsls	r1, r1, #30
L0295a:
  lsrs	r1, r1, #30
L0295c:
  cmp	r1, #1
L0295e:
  bne.n	L0296c
L02960:
  movs	r1, #91
L02962:
  lsls	r1, r1, #5
L02964:
  adds	r0, r0, r1
L02966:
  ldrb	r0, [r0, #13]
L02968:
  cmp	r0, #0
L0296a:
  beq.n	L02988
L0296c:
  movs	r0, #0
L0296e:
  bl	L036b8
L02972:
  movs	r0, #1
L02974:
  bl	L036b8
L02978:
  ldr	r1, [pc, #132]
L0297a:
  movs	r2, #14
L0297c:
  adds	r1, #22
L0297e:
  adds	r0, r5, #2
L02980:
  bl	L03178
L02984:
  movs	r0, #0
L02986:
  b.n	L025bc
L02988:
  mov	r0, r4
L0298a:
  bl	L03070
L0298e:
  b.n	L02978
L02990:
  ldr	r0, [pc, #112]
L02992:
  ldr	r0, [r0, #8]
L02994:
  lsls	r0, r0, #14
L02996:
  lsrs	r1, r0, #27
L02998:
  ldr	r0, [pc, #68]
L0299a:
  subs	r0, #20
L0299c:
  strb	r1, [r0, #16]
L0299e:
  ldr	r1, [pc, #104]
L029a0:
  ldr	r1, [r1, #8]
L029a2:
  lsls	r1, r1, #14
L029a4:
  lsrs	r1, r1, #27
L029a6:
  strb	r1, [r0, #17]
L029a8:
  bx	lr
L029aa:
  push	{r4, lr}
L029ac:
  movs	r2, #36
L029ae:
  ldr	r4, [pc, #48]
L029b0:
  muls	r2, r0
L029b2:
  movs	r3, #1
L029b4:
  adds	r2, r2, r4
L029b6:
  strb	r3, [r2, #8]
L029b8:
  bl	L036c4
L029bc:
  b.n	L021fa
L029be:
  push	{r4, lr}
L029c0:
  ldr	r2, [pc, #72]
L029c2:
  movs	r1, #255
L029c4:
  strb	r1, [r2, r0]
L029c6:
  movs	r2, #36
L029c8:
  ldr	r3, [pc, #20]
L029ca:
  muls	r2, r0
L029cc:
  adds	r2, r2, r3
L029ce:
  strb	r1, [r2, #8]
L029d0:
  bl	L036d0
L029d4:
  b.n	L021fa
L029d6:
  movs	r0, r0
L029d8:
  .word 0x00000ec4
L029dc:
  .word 0x200214c4
L029e0:
  .word 0x20027c1c
L029e4:
  .word 0xe000e280
L029e8:
  .word 0x40090940
L029ec:
  .word 0x40000900
L029f0:
  .word 0x20023336
L029f4:
  .word 0x00000396
L029f8:
  .word 0x000008d8
L029fc:
  .word 0x20023338
L02a00:
  .word 0x2002324c
L02a04:
  .word 0x40092100
L02a08:
  .word 0x40093100
L02a0c:
  .word 0x200200cf
L02a10:
  push	{r3, r4, r5, r6, r7, lr}
L02a12:
  ldr	r5, [pc, #1000]
L02a14:
  lsls	r4, r0, #8
L02a16:
  ldrb	r5, [r5, r0]
L02a18:
  movs	r3, #1
L02a1a:
  cmp	r5, #1
L02a1c:
  beq.n	L02a24
L02a1e:
  bl	L036dc
L02a22:
  pop	{r3, r4, r5, r6, r7, pc}
L02a24:
  mrs	r1, PRIMASK
L02a28:
  lsls	r1, r1, #31
L02a2a:
  lsrs	r1, r1, #31
L02a2c:
  cpsid	i
L02a2e:
  mov	ip, r1
L02a30:
  ldr	r1, [pc, #972]
L02a32:
  adds	r2, r4, r1
L02a34:
  ldr	r1, [r2, #12]
L02a36:
  ldr	r5, [pc, #972]
L02a38:
  lsls	r4, r1, #29
L02a3a:
  movs	r1, #36
L02a3c:
  muls	r1, r0
L02a3e:
  adds	r1, r1, r5
L02a40:
  ldrb	r5, [r1, #8]
L02a42:
  lsrs	r4, r4, #29
L02a44:
  cmp	r5, r4
L02a46:
  bne.n	L02aae
L02a48:
  ldr	r6, [pc, #956]
L02a4a:
  ldr	r7, [pc, #960]
L02a4c:
  ldrb	r5, [r6, r0]
L02a4e:
  cmp	r5, r4
L02a50:
  beq.n	L02aa0
L02a52:
  strb	r4, [r6, r0]
L02a54:
  b.n	L02aa0
L02a56:
  ldr	r6, [pc, #952]
L02a58:
  lsls	r5, r5, #1
L02a5a:
  adds	r5, r5, r6
L02a5c:
  ldrb	r5, [r5, r0]
L02a5e:
  cmp	r4, #1
L02a60:
  beq.n	L02a68
L02a62:
  cmp	r4, #2
L02a64:
  bne.n	L02a8e
L02a66:
  b.n	L02a70
L02a68:
  cmp	r5, #2
L02a6a:
  bne.n	L02a8e
L02a6c:
  ldr	r3, [pc, #932]
L02a6e:
  b.n	L02a7c
L02a70:
  cmp	r5, #4
L02a72:
  beq.n	L02a7a
L02a74:
  cmp	r5, #3
L02a76:
  beq.n	L02a82
L02a78:
  b.n	L02a8e
L02a7a:
  ldr	r3, [pc, #924]
L02a7c:
  str	r3, [r2, #16]
L02a7e:
  movs	r3, #2
L02a80:
  b.n	L02a8a
L02a82:
  movs	r3, #1
L02a84:
  lsls	r3, r3, #31
L02a86:
  str	r3, [r2, #16]
L02a88:
  movs	r3, #1
L02a8a:
  strb	r3, [r1, #8]
L02a8c:
  movs	r3, #0
L02a8e:
  ldr	r6, [pc, #908]
L02a90:
  ldrb	r5, [r7, r0]
L02a92:
  ldrb	r6, [r6, r0]
L02a94:
  cmp	r5, r6
L02a96:
  beq.n	L02aa0
L02a98:
  .inst.n 0x1c6d
L02a9a:
  lsls	r5, r5, #29
L02a9c:
  lsrs	r5, r5, #29
L02a9e:
  strb	r5, [r7, r0]
L02aa0:
  ldr	r5, [pc, #888]
L02aa2:
  ldrb	r6, [r5, r0]
L02aa4:
  ldrb	r5, [r7, r0]
L02aa6:
  cmp	r6, r5
L02aa8:
  beq.n	L02aae
L02aaa:
  cmp	r3, #0
L02aac:
  bne.n	L02a56
L02aae:
  mov	r0, ip
L02ab0:
  cmp	r0, #0
L02ab2:
  bne.n	L02a22
L02ab4:
  cpsie	i
L02ab6:
  pop	{r3, r4, r5, r6, r7, pc}
L02ab8:
  push	{r4, r5, r6, lr}
L02aba:
  mov	r4, r0
L02abc:
  lsls	r5, r0, #8
L02abe:
  bl	L03628
L02ac2:
  ldr	r0, [pc, #828]
L02ac4:
  adds	r1, r5, r0
L02ac6:
  ldr	r2, [r1, #12]
L02ac8:
  str	r2, [r1, #12]
L02aca:
  movs	r0, #56
L02acc:
  ands	r2, r0
L02ace:
  movs	r1, #0
L02ad0:
  mov	r0, r4
L02ad2:
  bl	L036e8
L02ad6:
  b.n	L025bc
L02ad8:
  push	{r4, lr}
L02ada:
  mov	r4, r0
L02adc:
  bl	L036f4
L02ae0:
  ldr	r0, [pc, #828]
L02ae2:
  movs	r1, #91
L02ae4:
  muls	r4, r0
L02ae6:
  ldr	r0, [pc, #828]
L02ae8:
  lsls	r1, r1, #5
L02aea:
  adds	r0, r4, r0
L02aec:
  adds	r1, r0, r1
L02aee:
  ldrb	r1, [r1, #13]
L02af0:
  cmp	r1, #0
L02af2:
  bne.n	L02afc
L02af4:
  movs	r2, #111
L02af6:
  lsls	r2, r2, #5
L02af8:
  adds	r0, r0, r2
L02afa:
  strb	r1, [r0, #31]
L02afc:
  b.n	L02306
L02afe:
  push	{r4, r5, r6, r7, lr}
L02b00:
  ldr	r2, [pc, #804]
L02b02:
  ldr	r1, [pc, #808]
L02b04:
  movs	r0, #0
L02b06:
  movs	r3, #7
L02b08:
  sub	sp, #44
L02b0a:
  lsls	r3, r3, #7
L02b0c:
  ldrb	r4, [r1, r0]
L02b0e:
  strb	r4, [r2, r0]
L02b10:
  .inst.n 0x1c40
L02b12:
  uxth	r0, r0
L02b14:
  cmp	r0, r3
L02b16:
  bcc.n	L02b0c
L02b18:
  ldr	r4, [pc, #788]
L02b1a:
  movs	r5, #3
L02b1c:
  ldr	r0, [r4, #8]
L02b1e:
  lsls	r5, r5, #12
L02b20:
  lsls	r1, r0, #15
L02b22:
  lsrs	r6, r1, #31
L02b24:
  ldr	r1, [pc, #780]
L02b26:
  ldr	r2, [pc, #784]
L02b28:
  movs	r3, #64
L02b2a:
  cmp	r6, #0
L02b2c:
  beq.n	L02c2c
L02b2e:
  lsls	r6, r3, #10
L02b30:
  bics	r0, r6
L02b32:
  str	r0, [r4, #8]
L02b34:
  ldr	r0, [r1, #0]
L02b36:
  bics	r0, r5
L02b38:
  str	r0, [r1, #0]
L02b3a:
  ldr	r0, [r2, #36]
L02b3c:
  bics	r0, r3
L02b3e:
  str	r0, [r2, #36]
L02b40:
  ldrb	r0, [r4, #8]
L02b42:
  lsls	r0, r0, #29
L02b44:
  bmi.n	L02b5c
L02b46:
  ldr	r0, [pc, #756]
L02b48:
  bl	L03700
L02b4c:
  bl	L0370c
L02b50:
  ldr	r0, [pc, #732]
L02b52:
  movs	r2, #1
L02b54:
  adds	r0, #64
L02b56:
  ldrb	r1, [r0, #0]
L02b58:
  orrs	r1, r2
L02b5a:
  strb	r1, [r0, #0]
L02b5c:
  ldr	r2, [pc, #676]
L02b5e:
  movs	r0, #0
L02b60:
  str	r0, [r2, #4]
L02b62:
  str	r0, [r2, #40]
L02b64:
  mov	r1, r2
L02b66:
  strb	r0, [r2, #9]
L02b68:
  adds	r1, #32
L02b6a:
  str	r1, [sp, #16]
L02b6c:
  strb	r0, [r1, #13]
L02b6e:
  strb	r0, [r2, #10]
L02b70:
  ldr	r1, [sp, #16]
L02b72:
  ldr	r2, [pc, #740]
L02b74:
  strb	r0, [r1, #14]
L02b76:
  ldr	r0, [pc, #716]
L02b78:
  ldr	r1, [pc, #708]
L02b7a:
  str	r0, [sp, #12]
L02b7c:
  str	r1, [r0, #8]
L02b7e:
  ldr	r1, [pc, #708]
L02b80:
  ldr	r0, [pc, #708]
L02b82:
  adds	r1, #128
L02b84:
  str	r0, [r1, #4]
L02b86:
  ldr	r0, [pc, #708]
L02b88:
  subs	r1, #64
L02b8a:
  str	r0, [r1, #44]
L02b8c:
  ldr	r0, [pc, #708]
L02b8e:
  ldr	r1, [pc, #704]
L02b90:
  str	r0, [sp, #20]
L02b92:
  str	r1, [r0, #44]
L02b94:
  ldr	r0, [pc, #708]
L02b96:
  ldr	r1, [pc, #712]
L02b98:
  str	r2, [r0, #48]
L02b9a:
  subs	r0, #64
L02b9c:
  str	r0, [sp, #4]
L02b9e:
  ldr	r7, [pc, #700]
L02ba0:
  str	r1, [r0, #28]
L02ba2:
  ldr	r0, [pc, #704]
L02ba4:
  subs	r7, #128
L02ba6:
  str	r0, [r7, #44]
L02ba8:
  ldr	r0, [pc, #704]
L02baa:
  ldr	r1, [pc, #700]
L02bac:
  str	r1, [r0, #16]
L02bae:
  ldr	r1, [pc, #704]
L02bb0:
  str	r1, [r0, #28]
L02bb2:
  ldr	r1, [pc, #704]
L02bb4:
  mov	ip, r0
L02bb6:
  str	r1, [r0, #24]
L02bb8:
  ldr	r0, [sp, #4]
L02bba:
  ldr	r1, [pc, #700]
L02bbc:
  ldr	r6, [pc, #660]
L02bbe:
  str	r1, [r0, #32]
L02bc0:
  ldr	r0, [pc, #696]
L02bc2:
  subs	r6, #192
L02bc4:
  str	r0, [r6, #32]
L02bc6:
  ldr	r0, [pc, #636]
L02bc8:
  ldr	r1, [pc, #692]
L02bca:
  subs	r0, #64
L02bcc:
  str	r0, [sp, #32]
L02bce:
  str	r1, [r0, #16]
L02bd0:
  mov	r1, r6
L02bd2:
  subs	r1, #64
L02bd4:
  ldr	r0, [pc, #684]
L02bd6:
  str	r0, [r1, #0]
L02bd8:
  mov	r5, r1
L02bda:
  ldr	r0, [pc, #684]
L02bdc:
  subs	r5, #192
L02bde:
  str	r0, [r5, #16]
L02be0:
  mov	r0, r7
L02be2:
  subs	r0, #128
L02be4:
  ldr	r1, [pc, #676]
L02be6:
  str	r0, [sp, #8]
L02be8:
  str	r1, [r0, #24]
L02bea:
  ldr	r0, [sp, #4]
L02bec:
  ldr	r1, [pc, #672]
L02bee:
  str	r1, [r0, #44]
L02bf0:
  ldr	r0, [pc, #672]
L02bf2:
  str	r0, [r5, #44]
L02bf4:
  ldr	r0, [sp, #20]
L02bf6:
  ldr	r1, [pc, #672]
L02bf8:
  str	r1, [r0, #52]
L02bfa:
  ldr	r0, [pc, #676]
L02bfc:
  ldr	r1, [pc, #668]
L02bfe:
  str	r0, [sp, #36]
L02c00:
  str	r1, [r0, #0]
L02c02:
  ldr	r0, [pc, #672]
L02c04:
  str	r0, [r6, #48]
L02c06:
  mov	r0, r7
L02c08:
  subs	r0, #192
L02c0a:
  ldr	r1, [pc, #668]
L02c0c:
  str	r0, [sp, #28]
L02c0e:
  str	r1, [r0, #52]
L02c10:
  ldr	r0, [sp, #8]
L02c12:
  ldr	r1, [pc, #664]
L02c14:
  str	r1, [r0, #60]
L02c16:
  ldr	r0, [pc, #556]
L02c18:
  ldr	r1, [pc, #660]
L02c1a:
  adds	r0, #192
L02c1c:
  str	r0, [sp, #24]
L02c1e:
  str	r1, [r0, #48]
L02c20:
  ldr	r0, [pc, #636]
L02c22:
  ldr	r1, [pc, #656]
L02c24:
  subs	r0, #64
L02c26:
  str	r0, [sp, #0]
L02c28:
  str	r1, [r0, #12]
L02c2a:
  b.n	L02c2e
L02c2c:
  b.n	L02fe0
L02c2e:
  ldr	r0, [pc, #648]
L02c30:
  str	r0, [r6, #4]
L02c32:
  ldr	r0, [r4, #8]
L02c34:
  ldr	r3, [pc, #644]
L02c36:
  lsls	r1, r0, #16
L02c38:
  bpl.n	L02c42
L02c3a:
  ldrb	r1, [r3, #28]
L02c3c:
  movs	r2, #128
L02c3e:
  orrs	r1, r2
L02c40:
  strb	r1, [r3, #28]
L02c42:
  ldrb	r1, [r3, #28]
L02c44:
  lsrs	r1, r1, #7
L02c46:
  beq.n	L02c74
L02c48:
  movs	r1, #1
L02c4a:
  lsls	r1, r1, #15
L02c4c:
  orrs	r0, r1
L02c4e:
  str	r0, [r4, #8]
L02c50:
  ldr	r0, [pc, #620]
L02c52:
  movs	r2, #3
L02c54:
  ldrh	r1, [r0, #24]
L02c56:
  orrs	r1, r2
L02c58:
  strh	r1, [r0, #24]
L02c5a:
  ldr	r0, [pc, #616]
L02c5c:
  ldr	r1, [r0, #44]
L02c5e:
  lsls	r1, r1, #1
L02c60:
  lsrs	r1, r1, #1
L02c62:
  str	r1, [r0, #44]
L02c64:
  ldr	r1, [pc, #612]
L02c66:
  ldr	r0, [pc, #608]
L02c68:
  str	r0, [r1, #0]
L02c6a:
  ldr	r1, [pc, #612]
L02c6c:
  movs	r0, #0
L02c6e:
  str	r0, [r1, #28]
L02c70:
  ldr	r1, [pc, #608]
L02c72:
  str	r0, [r1, #28]
L02c74:
  ldr	r1, [pc, #612]
L02c76:
  ldr	r0, [pc, #608]
L02c78:
  str	r0, [r1, #36]
L02c7a:
  ldr	r0, [sp, #8]
L02c7c:
  ldr	r1, [pc, #608]
L02c7e:
  str	r1, [r0, #32]
L02c80:
  ldr	r0, [sp, #12]
L02c82:
  ldr	r1, [pc, #608]
L02c84:
  str	r1, [r0, #60]
L02c86:
  bl	L01c66
L02c8a:
  ldr	r0, [sp, #20]
L02c8c:
  ldr	r1, [pc, #600]
L02c8e:
  str	r1, [r0, #40]
L02c90:
  ldr	r0, [pc, #524]
L02c92:
  ldr	r1, [pc, #600]
L02c94:
  adds	r0, #192
L02c96:
  str	r1, [r0, #60]
L02c98:
  ldr	r1, [pc, #596]
L02c9a:
  str	r1, [r5, #20]
L02c9c:
  ldr	r1, [pc, #596]
L02c9e:
  ldr	r2, [pc, #436]
L02ca0:
  str	r1, [r6, #60]
L02ca2:
  ldr	r1, [pc, #596]
L02ca4:
  adds	r2, #64
L02ca6:
  str	r1, [r2, #28]
L02ca8:
  ldr	r3, [pc, #408]
L02caa:
  ldr	r1, [pc, #592]
L02cac:
  str	r1, [r7, #32]
L02cae:
  subs	r3, #128
L02cb0:
  ldr	r1, [pc, #588]
L02cb2:
  str	r1, [r3, #4]
L02cb4:
  ldr	r4, [pc, #592]
L02cb6:
  ldr	r1, [pc, #588]
L02cb8:
  ldr	r2, [pc, #544]
L02cba:
  str	r1, [r4, #120]
L02cbc:
  ldr	r1, [pc, #588]
L02cbe:
  adds	r2, #64
L02cc0:
  str	r1, [r2, #24]
L02cc2:
  ldr	r2, [pc, #400]
L02cc4:
  mov	lr, r3
L02cc6:
  subs	r2, #128
L02cc8:
  ldr	r1, [pc, #580]
L02cca:
  str	r1, [r2, #8]
L02ccc:
  mov	r3, r2
L02cce:
  adds	r3, #64
L02cd0:
  ldr	r1, [pc, #576]
L02cd2:
  str	r3, [sp, #20]
L02cd4:
  str	r1, [r3, #44]
L02cd6:
  ldr	r1, [pc, #576]
L02cd8:
  str	r1, [r0, #36]
L02cda:
  ldr	r1, [pc, #576]
L02cdc:
  str	r1, [r0, #40]
L02cde:
  ldr	r1, [pc, #576]
L02ce0:
  str	r1, [r0, #48]
L02ce2:
  adds	r3, #255
L02ce4:
  ldr	r0, [pc, #572]
L02ce6:
  adds	r3, #1
L02ce8:
  ldr	r1, [pc, #496]
L02cea:
  str	r0, [r3, #48]
L02cec:
  ldr	r0, [pc, #568]
L02cee:
  adds	r1, #192
L02cf0:
  str	r0, [r1, #56]
L02cf2:
  ldr	r0, [pc, #568]
L02cf4:
  str	r0, [r6, #8]
L02cf6:
  ldr	r0, [pc, #568]
L02cf8:
  str	r0, [r7, #36]
L02cfa:
  ldr	r0, [pc, #568]
L02cfc:
  str	r0, [r3, #56]
L02cfe:
  ldr	r0, [sp, #36]
L02d00:
  ldr	r2, [pc, #564]
L02d02:
  str	r2, [r0, #48]
L02d04:
  ldr	r2, [pc, #568]
L02d06:
  ldr	r0, [pc, #564]
L02d08:
  str	r0, [r2, #16]
L02d0a:
  ldr	r2, [pc, #352]
L02d0c:
  ldr	r0, [pc, #564]
L02d0e:
  subs	r2, #128
L02d10:
  str	r0, [r2, #0]
L02d12:
  ldr	r0, [pc, #564]
L02d14:
  str	r0, [r4, #24]
L02d16:
  ldr	r0, [pc, #564]
L02d18:
  str	r0, [r4, #28]
L02d1a:
  ldr	r3, [pc, #564]
L02d1c:
  mov	r0, r2
L02d1e:
  adds	r0, #192
L02d20:
  str	r0, [sp, #8]
L02d22:
  str	r3, [r0, #36]
L02d24:
  ldr	r0, [sp, #8]
L02d26:
  ldr	r3, [pc, #556]
L02d28:
  str	r3, [r0, #24]
L02d2a:
  ldr	r0, [sp, #0]
L02d2c:
  ldr	r3, [pc, #552]
L02d2e:
  str	r3, [r0, #32]
L02d30:
  ldr	r0, [sp, #24]
L02d32:
  ldr	r3, [pc, #552]
L02d34:
  ldr	r6, [pc, #292]
L02d36:
  str	r3, [r0, #36]
L02d38:
  ldr	r0, [pc, #548]
L02d3a:
  adds	r6, #64
L02d3c:
  str	r0, [r6, #36]
L02d3e:
  ldr	r0, [pc, #548]
L02d40:
  str	r0, [r5, #40]
L02d42:
  ldr	r0, [sp, #4]
L02d44:
  ldr	r3, [pc, #544]
L02d46:
  str	r3, [r0, #0]
L02d48:
  mov	r3, r1
L02d4a:
  ldr	r0, [pc, #544]
L02d4c:
  subs	r3, #64
L02d4e:
  str	r0, [r3, #24]
L02d50:
  ldr	r0, [pc, #540]
L02d52:
  str	r0, [r5, #0]
L02d54:
  ldr	r3, [sp, #20]
L02d56:
  ldr	r0, [pc, #540]
L02d58:
  str	r0, [r3, #32]
L02d5a:
  ldr	r0, [pc, #540]
L02d5c:
  mov	r3, lr
L02d5e:
  str	r0, [r3, #28]
L02d60:
  ldr	r0, [pc, #536]
L02d62:
  ldr	r3, [pc, #476]
L02d64:
  str	r0, [r6, #60]
L02d66:
  ldr	r0, [pc, #536]
L02d68:
  adds	r3, #128
L02d6a:
  str	r0, [r3, #4]
L02d6c:
  ldr	r0, [pc, #532]
L02d6e:
  str	r0, [r7, #20]
L02d70:
  ldr	r0, [pc, #532]
L02d72:
  subs	r3, #64
L02d74:
  str	r0, [r3, #16]
L02d76:
  ldr	r0, [pc, #532]
L02d78:
  str	r0, [r1, #0]
L02d7a:
  ldr	r0, [pc, #532]
L02d7c:
  str	r0, [r1, #24]
L02d7e:
  ldr	r3, [pc, #536]
L02d80:
  ldr	r0, [pc, #528]
L02d82:
  str	r0, [r3, #60]
L02d84:
  mov	r0, r2
L02d86:
  ldr	r1, [pc, #532]
L02d88:
  subs	r0, #64
L02d8a:
  str	r1, [r0, #52]
L02d8c:
  ldr	r0, [sp, #0]
L02d8e:
  ldr	r1, [pc, #528]
L02d90:
  str	r1, [r0, #4]
L02d92:
  ldr	r1, [pc, #528]
L02d94:
  movs	r0, #0
L02d96:
  strb	r0, [r1, #0]
L02d98:
  strb	r0, [r1, #1]
L02d9a:
  ldr	r0, [sp, #12]
L02d9c:
  ldr	r1, [pc, #520]
L02d9e:
  str	r1, [r0, #4]
L02da0:
  ldr	r0, [pc, #520]
L02da2:
  str	r0, [r7, #52]
L02da4:
  bl	L02990
L02da8:
  ldr	r1, [pc, #244]
L02daa:
  ldr	r0, [pc, #516]
L02dac:
  adds	r1, #128
L02dae:
  str	r0, [r1, #8]
L02db0:
  ldr	r0, [sp, #28]
L02db2:
  ldr	r1, [pc, #512]
L02db4:
  str	r1, [r0, #60]
L02db6:
  ldr	r0, [sp, #0]
L02db8:
  ldr	r1, [pc, #508]
L02dba:
  str	r1, [r0, #48]
L02dbc:
  ldr	r0, [sp, #32]
L02dbe:
  ldr	r1, [pc, #508]
L02dc0:
  str	r1, [r0, #0]
L02dc2:
  ldr	r1, [pc, #64]
L02dc4:
  movs	r0, #255
L02dc6:
  strb	r0, [r1, #8]
L02dc8:
  ldr	r1, [sp, #16]
L02dca:
  strb	r0, [r1, #12]
L02dcc:
  ldr	r0, [pc, #496]
L02dce:
  str	r0, [r2, #8]
L02dd0:
  ldr	r0, [pc, #496]
L02dd2:
  str	r0, [r2, #4]
L02dd4:
  ldr	r0, [pc, #496]
L02dd6:
  ldr	r1, [pc, #448]
L02dd8:
  str	r0, [r2, #24]
L02dda:
  ldr	r0, [pc, #496]
L02ddc:
  subs	r1, #128
L02dde:
  str	r0, [r1, #12]
L02de0:
  ldr	r1, [pc, #492]
L02de2:
  mov	r0, ip
L02de4:
  str	r1, [r0, #36]
L02de6:
  ldr	r0, [pc, #492]
L02de8:
  str	r0, [r3, #48]
L02dea:
  ldr	r3, [sp, #20]
L02dec:
  ldr	r0, [pc, #488]
L02dee:
  str	r0, [r3, #28]
L02df0:
  ldr	r0, [sp, #8]
L02df2:
  ldr	r1, [pc, #488]
L02df4:
  str	r1, [r0, #52]
L02df6:
  add	sp, #44
L02df8:
  pop	{r4, r5, r6, r7, pc}
L02dfa:
  movs	r0, r0
L02dfc:
  .word 0x20023700
L02e00:
  .word 0x40094900
L02e04:
  .word 0x20027c1c
L02e08:
  .word 0x200200cf
L02e0c:
  .word 0x20023704
L02e10:
  .word 0x20023706
L02e14:
  .word 0x80060000
L02e18:
  .word 0x80030000
L02e1c:
  .word 0x20023702
L02e20:
  .word 0x00000ec4
L02e24:
  .word 0x200214c4
L02e28:
  .word 0x20027c70
L02e2c:
  .word 0x20027480
L02e30:
  .word 0x200232cc
L02e34:
  .word 0x40060500
L02e38:
  .word 0x40094100
L02e3c:
  .word 0x000493e0
L02e40:
  .word 0x20023fdb
L02e44:
  .word 0x20020e50
L02e48:
  .word 0x20024039
L02e4c:
  .word 0x20024113
L02e50:
  .word 0x20024183
L02e54:
  .word 0x200208d0
L02e58:
  .word 0x20024195
L02e5c:
  .word 0x20020d50
L02e60:
  .word 0x2002421d
L02e64:
  .word 0x2002428b
L02e68:
  .word 0x20024321
L02e6c:
  .word 0x20020750
L02e70:
  .word 0x200243d3
L02e74:
  .word 0x20024343
L02e78:
  .word 0x20024493
L02e7c:
  .word 0x20024631
L02e80:
  .word 0x200244cf
L02e84:
  .word 0x20023eab
L02e88:
  .word 0x20023c63
L02e8c:
  .word 0x20024a57
L02e90:
  .word 0x20024b17
L02e94:
  .word 0x20024de3
L02e98:
  .word 0x20024e23
L02e9c:
  .word 0x20024edd
L02ea0:
  .word 0x20020a10
L02ea4:
  .word 0x20024f37
L02ea8:
  .word 0x20024fa9
L02eac:
  .word 0x20025017
L02eb0:
  .word 0x20025081
L02eb4:
  .word 0x200252c1
L02eb8:
  .word 0x20025385
L02ebc:
  .word 0x2002324c
L02ec0:
  .word 0x20022744
L02ec4:
  .word 0x40090a40
L02ec8:
  .word 0x90202912
L02ecc:
  .word 0xe000e180
L02ed0:
  .word 0x40030800
L02ed4:
  .word 0x400b0800
L02ed8:
  .word 0x200253f3
L02edc:
  .word 0x20020f50
L02ee0:
  .word 0x2002542f
L02ee4:
  .word 0x200254db
L02ee8:
  .word 0x20025347
L02eec:
  .word 0x200255ff
L02ef0:
  .word 0x20025635
L02ef4:
  .word 0x2002568b
L02ef8:
  .word 0x20023f97
L02efc:
  .word 0x2002577d
L02f00:
  .word 0x2002565d
L02f04:
  .word 0x200258a9
L02f08:
  .word 0x20020550
L02f0c:
  .word 0x20025995
L02f10:
  .word 0x20025921
L02f14:
  .word 0x20023f2f
L02f18:
  .word 0x2002580f
L02f1c:
  .word 0x20025845
L02f20:
  .word 0x20025879
L02f24:
  .word 0x200257df
L02f28:
  .word 0x20025a1d
L02f2c:
  .word 0x20025a3d
L02f30:
  .word 0x20025a55
L02f34:
  .word 0x20025b0f
L02f38:
  .word 0x20025b49
L02f3c:
  .word 0x20025ba9
L02f40:
  .word 0x20020b50
L02f44:
  .word 0x20025be7
L02f48:
  .word 0x20025b65
L02f4c:
  .word 0x20025b87
L02f50:
  .word 0x20025c11
L02f54:
  .word 0x20025ccf
L02f58:
  .word 0x20025daf
L02f5c:
  .word 0x20025e35
L02f60:
  .word 0x20025e6f
L02f64:
  .word 0x20025f8b
L02f68:
  .word 0x20027cd1
L02f6c:
  .word 0x2002512d
L02f70:
  .word 0x20025fb9
L02f74:
  .word 0x20023dc5
L02f78:
  .word 0x20023e45
L02f7c:
  .word 0x20027d0d
L02f80:
  .word 0x20025fd1
L02f84:
  .word 0x20027d5b
L02f88:
  .word 0x200260d5
L02f8c:
  .word 0x20023ce9
L02f90:
  .word 0x20023d09
L02f94:
  .word 0x20023d77
L02f98:
  .word 0x20021150
L02f9c:
  .word 0x2002613d
L02fa0:
  .word 0x20023c3d
L02fa4:
  .word 0x20026f78
L02fa8:
  .word 0x20023cdd
L02fac:
  .word 0x20027c71
L02fb0:
  .word 0x20027e2d
L02fb4:
  .word 0x20027e51
L02fb8:
  .word 0x200250cb
L02fbc:
  .word 0x200242f3
L02fc0:
  .word 0x20026251
L02fc4:
  .word 0x200261eb
L02fc8:
  .word 0x200262f9
L02fcc:
  .word 0x200261ff
L02fd0:
  .word 0x20027e69
L02fd4:
  .word 0x20026319
L02fd8:
  .word 0x2002430d
L02fdc:
  .word 0x20027ed7
L02fe0:
  ldr	r0, [r1, #0]
L02fe2:
  orrs	r0, r5
L02fe4:
  str	r0, [r1, #0]
L02fe6:
  ldr	r0, [r2, #36]
L02fe8:
  orrs	r0, r3
L02fea:
  b.n	L02b3e
L02fec:
  .word 0x4801b403
L02ff0:
  str	r0, [sp, #4]
L02ff2:
  pop	{r0, pc}
L02ff4:
  .word 0x0000a56f
L02ff8:
  push	{r0, r1}
L02ffa:
  ldr	r0, [pc, #4]
L02ffc:
  str	r0, [sp, #4]
L02ffe:
  pop	{r0, pc}
L03000:
  .word 0x00017439
L03004:
  push	{r0, r1}
L03006:
  ldr	r0, [pc, #4]
L03008:
  str	r0, [sp, #4]
L0300a:
  pop	{r0, pc}
L0300c:
  .word 0x0000fd8d
L03010:
  push	{r0, r1}
L03012:
  ldr	r0, [pc, #4]
L03014:
  str	r0, [sp, #4]
L03016:
  pop	{r0, pc}
L03018:
  .word 0x00012b17
L0301c:
  push	{r0, r1}
L0301e:
  ldr	r0, [pc, #4]
L03020:
  str	r0, [sp, #4]
L03022:
  pop	{r0, pc}
L03024:
  .word 0x00012fdf
L03028:
  push	{r0, r1}
L0302a:
  ldr	r0, [pc, #4]
L0302c:
  str	r0, [sp, #4]
L0302e:
  pop	{r0, pc}
L03030:
  .word 0x000182ab
L03034:
  push	{r0, r1}
L03036:
  ldr	r0, [pc, #4]
L03038:
  str	r0, [sp, #4]
L0303a:
  pop	{r0, pc}
L0303c:
  .word 0x00014fff
L03040:
  push	{r0, r1}
L03042:
  ldr	r0, [pc, #4]
L03044:
  str	r0, [sp, #4]
L03046:
  pop	{r0, pc}
L03048:
  .word 0x00016f47
L0304c:
  push	{r0, r1}
L0304e:
  ldr	r0, [pc, #4]
L03050:
  str	r0, [sp, #4]
L03052:
  pop	{r0, pc}
L03054:
  .word 0x00017973
L03058:
  push	{r0, r1}
L0305a:
  ldr	r0, [pc, #4]
L0305c:
  str	r0, [sp, #4]
L0305e:
  pop	{r0, pc}
L03060:
  .word 0x0000841b
L03064:
  push	{r0, r1}
L03066:
  ldr	r0, [pc, #4]
L03068:
  str	r0, [sp, #4]
L0306a:
  pop	{r0, pc}
L0306c:
  .word 0x00017937
L03070:
  push	{r0, r1}
L03072:
  ldr	r0, [pc, #4]
L03074:
  str	r0, [sp, #4]
L03076:
  pop	{r0, pc}
L03078:
  .word 0x0001755f
L0307c:
  push	{r0, r1}
L0307e:
  ldr	r0, [pc, #4]
L03080:
  str	r0, [sp, #4]
L03082:
  pop	{r0, pc}
L03084:
  .word 0x0000f77b
L03088:
  push	{r0, r1}
L0308a:
  ldr	r0, [pc, #4]
L0308c:
  str	r0, [sp, #4]
L0308e:
  pop	{r0, pc}
L03090:
  .word 0x00018725
L03094:
  push	{r0, r1}
L03096:
  ldr	r0, [pc, #4]
L03098:
  str	r0, [sp, #4]
L0309a:
  pop	{r0, pc}
L0309c:
  .word 0x00017895
L030a0:
  push	{r0, r1}
L030a2:
  ldr	r0, [pc, #4]
L030a4:
  str	r0, [sp, #4]
L030a6:
  pop	{r0, pc}
L030a8:
  .word 0x00017583
L030ac:
  push	{r0, r1}
L030ae:
  ldr	r0, [pc, #4]
L030b0:
  str	r0, [sp, #4]
L030b2:
  pop	{r0, pc}
L030b4:
  .word 0x00008ab5
L030b8:
  push	{r0, r1}
L030ba:
  ldr	r0, [pc, #4]
L030bc:
  str	r0, [sp, #4]
L030be:
  pop	{r0, pc}
L030c0:
  .word 0x000171fb
L030c4:
  push	{r0, r1}
L030c6:
  ldr	r0, [pc, #4]
L030c8:
  str	r0, [sp, #4]
L030ca:
  pop	{r0, pc}
L030cc:
  .word 0x000187d9
L030d0:
  push	{r0, r1}
L030d2:
  ldr	r0, [pc, #4]
L030d4:
  str	r0, [sp, #4]
L030d6:
  pop	{r0, pc}
L030d8:
  .word 0x00017391
L030dc:
  push	{r0, r1}
L030de:
  ldr	r0, [pc, #4]
L030e0:
  str	r0, [sp, #4]
L030e2:
  pop	{r0, pc}
L030e4:
  .word 0x00008d35
L030e8:
  push	{r0, r1}
L030ea:
  ldr	r0, [pc, #4]
L030ec:
  str	r0, [sp, #4]
L030ee:
  pop	{r0, pc}
L030f0:
  .word 0x0001856b
L030f4:
  push	{r0, r1}
L030f6:
  ldr	r0, [pc, #4]
L030f8:
  str	r0, [sp, #4]
L030fa:
  pop	{r0, pc}
L030fc:
  .word 0x0001858f
L03100:
  push	{r0, r1}
L03102:
  ldr	r0, [pc, #4]
L03104:
  str	r0, [sp, #4]
L03106:
  pop	{r0, pc}
L03108:
  .word 0x000187f1
L0310c:
  push	{r0, r1}
L0310e:
  ldr	r0, [pc, #4]
L03110:
  str	r0, [sp, #4]
L03112:
  pop	{r0, pc}
L03114:
  .word 0x000185a7
L03118:
  push	{r0, r1}
L0311a:
  ldr	r0, [pc, #4]
L0311c:
  str	r0, [sp, #4]
L0311e:
  pop	{r0, pc}
L03120:
  .word 0x00015379
L03124:
  push	{r0, r1}
L03126:
  ldr	r0, [pc, #4]
L03128:
  str	r0, [sp, #4]
L0312a:
  pop	{r0, pc}
L0312c:
  .word 0x000171e3
L03130:
  push	{r0, r1}
L03132:
  ldr	r0, [pc, #4]
L03134:
  str	r0, [sp, #4]
L03136:
  pop	{r0, pc}
L03138:
  .word 0x00018407
L0313c:
  push	{r0, r1}
L0313e:
  ldr	r0, [pc, #4]
L03140:
  str	r0, [sp, #4]
L03142:
  pop	{r0, pc}
L03144:
  .word 0x0001759b
L03148:
  push	{r0, r1}
L0314a:
  ldr	r0, [pc, #4]
L0314c:
  str	r0, [sp, #4]
L0314e:
  pop	{r0, pc}
L03150:
  .word 0x00018919
L03154:
  push	{r0, r1}
L03156:
  ldr	r0, [pc, #4]
L03158:
  str	r0, [sp, #4]
L0315a:
  pop	{r0, pc}
L0315c:
  .word 0x00018719
L03160:
  push	{r0, r1}
L03162:
  ldr	r0, [pc, #4]
L03164:
  str	r0, [sp, #4]
L03166:
  pop	{r0, pc}
L03168:
  .word 0x0000f955
L0316c:
  push	{r0, r1}
L0316e:
  ldr	r0, [pc, #4]
L03170:
  str	r0, [sp, #4]
L03172:
  pop	{r0, pc}
L03174:
  .word 0x00008325
L03178:
  push	{r0, r1}
L0317a:
  ldr	r0, [pc, #4]
L0317c:
  str	r0, [sp, #4]
L0317e:
  pop	{r0, pc}
L03180:
  .word 0x0001912d
L03184:
  push	{r0, r1}
L03186:
  ldr	r0, [pc, #4]
L03188:
  str	r0, [sp, #4]
L0318a:
  pop	{r0, pc}
L0318c:
  .word 0x0001797d
L03190:
  push	{r0, r1}
L03192:
  ldr	r0, [pc, #4]
L03194:
  str	r0, [sp, #4]
L03196:
  pop	{r0, pc}
L03198:
  .word 0x000183a7
L0319c:
  push	{r0, r1}
L0319e:
  ldr	r0, [pc, #4]
L031a0:
  str	r0, [sp, #4]
L031a2:
  pop	{r0, pc}
L031a4:
  .word 0x000178c5
L031a8:
  push	{r0, r1}
L031aa:
  ldr	r0, [pc, #4]
L031ac:
  str	r0, [sp, #4]
L031ae:
  pop	{r0, pc}
L031b0:
  .word 0x0001795f
L031b4:
  push	{r0, r1}
L031b6:
  ldr	r0, [pc, #4]
L031b8:
  str	r0, [sp, #4]
L031ba:
  pop	{r0, pc}
L031bc:
  .word 0x000176d9
L031c0:
  push	{r0, r1}
L031c2:
  ldr	r0, [pc, #4]
L031c4:
  str	r0, [sp, #4]
L031c6:
  pop	{r0, pc}
L031c8:
  .word 0x000188bf
L031cc:
  push	{r0, r1}
L031ce:
  ldr	r0, [pc, #4]
L031d0:
  str	r0, [sp, #4]
L031d2:
  pop	{r0, pc}
L031d4:
  .word 0x000187e5
L031d8:
  push	{r0, r1}
L031da:
  ldr	r0, [pc, #4]
L031dc:
  str	r0, [sp, #4]
L031de:
  pop	{r0, pc}
L031e0:
  .word 0x0001787d
L031e4:
  push	{r0, r1}
L031e6:
  ldr	r0, [pc, #4]
L031e8:
  str	r0, [sp, #4]
L031ea:
  pop	{r0, pc}
L031ec:
  .word 0x00017283
L031f0:
  push	{r0, r1}
L031f2:
  ldr	r0, [pc, #4]
L031f4:
  str	r0, [sp, #4]
L031f6:
  pop	{r0, pc}
L031f8:
  .word 0x000186f5
L031fc:
  push	{r0, r1}
L031fe:
  ldr	r0, [pc, #4]
L03200:
  str	r0, [sp, #4]
L03202:
  pop	{r0, pc}
L03204:
  .word 0x000187c1
L03208:
  push	{r0, r1}
L0320a:
  ldr	r0, [pc, #4]
L0320c:
  str	r0, [sp, #4]
L0320e:
  pop	{r0, pc}
L03210:
  .word 0x00018a51
L03214:
  .word 0x4801b403
L03218:
  str	r0, [sp, #4]
L0321a:
  pop	{r0, pc}
L0321c:
  .word 0x0001898f
L03220:
  push	{r0, r1}
L03222:
  ldr	r0, [pc, #4]
L03224:
  .word 0xbd019001
L03228:
  .word 0x00018aed
L0322c:
  push	{r0, r1}
L0322e:
  ldr	r0, [pc, #4]
L03230:
  str	r0, [sp, #4]
L03232:
  pop	{r0, pc}
L03234:
  .word 0x0001748d
L03238:
  push	{r0, r1}
L0323a:
  ldr	r0, [pc, #4]
L0323c:
  str	r0, [sp, #4]
L0323e:
  pop	{r0, pc}
L03240:
  .word 0x00018a01
L03244:
  push	{r0, r1}
L03246:
  ldr	r0, [pc, #4]
L03248:
  str	r0, [sp, #4]
L0324a:
  pop	{r0, pc}
L0324c:
  .word 0x000174c7
L03250:
  push	{r0, r1}
L03252:
  ldr	r0, [pc, #4]
L03254:
  str	r0, [sp, #4]
L03256:
  pop	{r0, pc}
L03258:
  .word 0x00018ab1
L0325c:
  push	{r0, r1}
L0325e:
  ldr	r0, [pc, #4]
L03260:
  str	r0, [sp, #4]
L03262:
  pop	{r0, pc}
L03264:
  .word 0x00018c25
L03268:
  push	{r0, r1}
L0326a:
  ldr	r0, [pc, #4]
L0326c:
  str	r0, [sp, #4]
L0326e:
  pop	{r0, pc}
L03270:
  .word 0x000181f9
L03274:
  push	{r0, r1}
L03276:
  ldr	r0, [pc, #4]
L03278:
  str	r0, [sp, #4]
L0327a:
  pop	{r0, pc}
L0327c:
  .word 0x00018a6f
L03280:
  push	{r0, r1}
L03282:
  ldr	r0, [pc, #4]
L03284:
  str	r0, [sp, #4]
L03286:
  pop	{r0, pc}
L03288:
  .word 0x00018b05
L0328c:
  push	{r0, r1}
L0328e:
  ldr	r0, [pc, #4]
L03290:
  str	r0, [sp, #4]
L03292:
  pop	{r0, pc}
L03294:
  .word 0x00018b29
L03298:
  push	{r0, r1}
L0329a:
  ldr	r0, [pc, #4]
L0329c:
  str	r0, [sp, #4]
L0329e:
  pop	{r0, pc}
L032a0:
  .word 0x00018953
L032a4:
  push	{r0, r1}
L032a6:
  ldr	r0, [pc, #4]
L032a8:
  str	r0, [sp, #4]
L032aa:
  pop	{r0, pc}
L032ac:
  .word 0x00018483
L032b0:
  push	{r0, r1}
L032b2:
  ldr	r0, [pc, #4]
L032b4:
  str	r0, [sp, #4]
L032b6:
  pop	{r0, pc}
L032b8:
  .word 0x0001845f
L032bc:
  push	{r0, r1}
L032be:
  ldr	r0, [pc, #4]
L032c0:
  str	r0, [sp, #4]
L032c2:
  pop	{r0, pc}
L032c4:
  .word 0x000178f1
L032c8:
  push	{r0, r1}
L032ca:
  ldr	r0, [pc, #4]
L032cc:
  str	r0, [sp, #4]
L032ce:
  pop	{r0, pc}
L032d0:
  .word 0x000178fd
L032d4:
  push	{r0, r1}
L032d6:
  ldr	r0, [pc, #4]
L032d8:
  str	r0, [sp, #4]
L032da:
  pop	{r0, pc}
L032dc:
  .word 0x000176cd
L032e0:
  push	{r0, r1}
L032e2:
  ldr	r0, [pc, #4]
L032e4:
  str	r0, [sp, #4]
L032e6:
  pop	{r0, pc}
L032e8:
  .word 0x000176c3
L032ec:
  push	{r0, r1}
L032ee:
  ldr	r0, [pc, #4]
L032f0:
  str	r0, [sp, #4]
L032f2:
  pop	{r0, pc}
L032f4:
  .word 0x000176e5
L032f8:
  push	{r0, r1}
L032fa:
  ldr	r0, [pc, #4]
L032fc:
  str	r0, [sp, #4]
L032fe:
  pop	{r0, pc}
L03300:
  .word 0x00008ebd
L03304:
  push	{r0, r1}
L03306:
  ldr	r0, [pc, #4]
L03308:
  str	r0, [sp, #4]
L0330a:
  pop	{r0, pc}
L0330c:
  .word 0x00017577
L03310:
  push	{r0, r1}
L03312:
  ldr	r0, [pc, #4]
L03314:
  str	r0, [sp, #4]
L03316:
  pop	{r0, pc}
L03318:
  .word 0x00017549
L0331c:
  push	{r0, r1}
L0331e:
  ldr	r0, [pc, #4]
L03320:
  str	r0, [sp, #4]
L03322:
  pop	{r0, pc}
L03324:
  .word 0x00018437
L03328:
  push	{r0, r1}
L0332a:
  ldr	r0, [pc, #4]
L0332c:
  str	r0, [sp, #4]
L0332e:
  pop	{r0, pc}
L03330:
  .word 0x00019163
L03334:
  push	{r0, r1}
L03336:
  ldr	r0, [pc, #4]
L03338:
  str	r0, [sp, #4]
L0333a:
  pop	{r0, pc}
L0333c:
  .word 0x00019163
L03340:
  push	{r0, r1}
L03342:
  ldr	r0, [pc, #4]
L03344:
  str	r0, [sp, #4]
L03346:
  pop	{r0, pc}
L03348:
  .word 0x00017691
L0334c:
  push	{r0, r1}
L0334e:
  ldr	r0, [pc, #4]
L03350:
  str	r0, [sp, #4]
L03352:
  pop	{r0, pc}
L03354:
  .word 0x0000d293
L03358:
  push	{r0, r1}
L0335a:
  ldr	r0, [pc, #4]
L0335c:
  str	r0, [sp, #4]
L0335e:
  pop	{r0, pc}
L03360:
  .word 0x000182e7
L03364:
  push	{r0, r1}
L03366:
  ldr	r0, [pc, #4]
L03368:
  str	r0, [sp, #4]
L0336a:
  pop	{r0, pc}
L0336c:
  .word 0x0000d999
L03370:
  push	{r0, r1}
L03372:
  ldr	r0, [pc, #4]
L03374:
  str	r0, [sp, #4]
L03376:
  pop	{r0, pc}
L03378:
  .word 0x0001839b
L0337c:
  push	{r0, r1}
L0337e:
  ldr	r0, [pc, #4]
L03380:
  str	r0, [sp, #4]
L03382:
  pop	{r0, pc}
L03384:
  .word 0x00011285
L03388:
  push	{r0, r1}
L0338a:
  ldr	r0, [pc, #4]
L0338c:
  str	r0, [sp, #4]
L0338e:
  pop	{r0, pc}
L03390:
  .word 0x0000aa13
L03394:
  push	{r0, r1}
L03396:
  ldr	r0, [pc, #4]
L03398:
  str	r0, [sp, #4]
L0339a:
  pop	{r0, pc}
L0339c:
  .word 0x00016ea9
L033a0:
  push	{r0, r1}
L033a2:
  ldr	r0, [pc, #4]
L033a4:
  str	r0, [sp, #4]
L033a6:
  pop	{r0, pc}
L033a8:
  .word 0x00018d1d
L033ac:
  push	{r0, r1}
L033ae:
  ldr	r0, [pc, #4]
L033b0:
  str	r0, [sp, #4]
L033b2:
  pop	{r0, pc}
L033b4:
  .word 0x00018d27
L033b8:
  push	{r0, r1}
L033ba:
  ldr	r0, [pc, #4]
L033bc:
  str	r0, [sp, #4]
L033be:
  pop	{r0, pc}
L033c0:
  .word 0x000182c3
L033c4:
  push	{r0, r1}
L033c6:
  ldr	r0, [pc, #4]
L033c8:
  str	r0, [sp, #4]
L033ca:
  pop	{r0, pc}
L033cc:
  .word 0x0001832f
L033d0:
  push	{r0, r1}
L033d2:
  ldr	r0, [pc, #4]
L033d4:
  str	r0, [sp, #4]
L033d6:
  pop	{r0, pc}
L033d8:
  .word 0x00018c31
L033dc:
  push	{r0, r1}
L033de:
  ldr	r0, [pc, #4]
L033e0:
  str	r0, [sp, #4]
L033e2:
  pop	{r0, pc}
L033e4:
  .word 0x0001269b
L033e8:
  push	{r0, r1}
L033ea:
  ldr	r0, [pc, #4]
L033ec:
  str	r0, [sp, #4]
L033ee:
  pop	{r0, pc}
L033f0:
  .word 0x00017521
L033f4:
  push	{r0, r1}
L033f6:
  ldr	r0, [pc, #4]
L033f8:
  str	r0, [sp, #4]
L033fa:
  pop	{r0, pc}
L033fc:
  .word 0x00017517
L03400:
  push	{r0, r1}
L03402:
  ldr	r0, [pc, #4]
L03404:
  str	r0, [sp, #4]
L03406:
  pop	{r0, pc}
L03408:
  .word 0x000190b9
L0340c:
  push	{r0, r1}
L0340e:
  ldr	r0, [pc, #4]
L03410:
  str	r0, [sp, #4]
L03412:
  pop	{r0, pc}
L03414:
  .word 0x000188fb
L03418:
  push	{r0, r1}
L0341a:
  ldr	r0, [pc, #4]
L0341c:
  str	r0, [sp, #4]
L0341e:
  pop	{r0, pc}
L03420:
  .word 0x00017909
L03424:
  push	{r0, r1}
L03426:
  ldr	r0, [pc, #4]
L03428:
  str	r0, [sp, #4]
L0342a:
  pop	{r0, pc}
L0342c:
  .word 0x00006dd9
L03430:
  push	{r0, r1}
L03432:
  ldr	r0, [pc, #4]
L03434:
  str	r0, [sp, #4]
L03436:
  pop	{r0, pc}
L03438:
  .word 0x00010ab9
L0343c:
  .word 0x4801b403
L03440:
  str	r0, [sp, #4]
L03442:
  pop	{r0, pc}
L03444:
  .word 0x0001826f
L03448:
  push	{r0, r1}
L0344a:
  ldr	r0, [pc, #4]
L0344c:
  str	r0, [sp, #4]
L0344e:
  pop	{r0, pc}
L03450:
  .word 0x0001728d
L03454:
  push	{r0, r1}
L03456:
  ldr	r0, [pc, #4]
L03458:
  str	r0, [sp, #4]
L0345a:
  pop	{r0, pc}
L0345c:
  .word 0x000172b1
L03460:
  push	{r0, r1}
L03462:
  ldr	r0, [pc, #4]
L03464:
  str	r0, [sp, #4]
L03466:
  pop	{r0, pc}
L03468:
  .word 0x0001888d
L0346c:
  push	{r0, r1}
L0346e:
  ldr	r0, [pc, #4]
L03470:
  str	r0, [sp, #4]
L03472:
  pop	{r0, pc}
L03474:
  .word 0x00018cd7
L03478:
  push	{r0, r1}
L0347a:
  ldr	r0, [pc, #4]
L0347c:
  str	r0, [sp, #4]
L0347e:
  pop	{r0, pc}
L03480:
  .word 0x00018cb9
L03484:
  push	{r0, r1}
L03486:
  ldr	r0, [pc, #4]
L03488:
  str	r0, [sp, #4]
L0348a:
  pop	{r0, pc}
L0348c:
  .word 0x00016e9f
L03490:
  push	{r0, r1}
L03492:
  ldr	r0, [pc, #4]
L03494:
  str	r0, [sp, #4]
L03496:
  pop	{r0, pc}
L03498:
  .word 0x000176af
L0349c:
  push	{r0, r1}
L0349e:
  ldr	r0, [pc, #4]
L034a0:
  str	r0, [sp, #4]
L034a2:
  pop	{r0, pc}
L034a4:
  .word 0x00018c49
L034a8:
  push	{r0, r1}
L034aa:
  ldr	r0, [pc, #4]
L034ac:
  str	r0, [sp, #4]
L034ae:
  pop	{r0, pc}
L034b0:
  .word 0x000188c9
L034b4:
  push	{r0, r1}
L034b6:
  ldr	r0, [pc, #4]
L034b8:
  str	r0, [sp, #4]
L034ba:
  pop	{r0, pc}
L034bc:
  .word 0x000183d7
L034c0:
  push	{r0, r1}
L034c2:
  ldr	r0, [pc, #4]
L034c4:
  str	r0, [sp, #4]
L034c6:
  pop	{r0, pc}
L034c8:
  .word 0x00003e6d
L034cc:
  push	{r0, r1}
L034ce:
  ldr	r0, [pc, #4]
L034d0:
  str	r0, [sp, #4]
L034d2:
  pop	{r0, pc}
L034d4:
  .word 0x00018673
L034d8:
  push	{r0, r1}
L034da:
  ldr	r0, [pc, #4]
L034dc:
  str	r0, [sp, #4]
L034de:
  pop	{r0, pc}
L034e0:
  .word 0x0000dfd3
L034e4:
  push	{r0, r1}
L034e6:
  ldr	r0, [pc, #4]
L034e8:
  str	r0, [sp, #4]
L034ea:
  pop	{r0, pc}
L034ec:
  .word 0x0001876d
L034f0:
  push	{r0, r1}
L034f2:
  ldr	r0, [pc, #4]
L034f4:
  str	r0, [sp, #4]
L034f6:
  pop	{r0, pc}
L034f8:
  .word 0x0000a3b1
L034fc:
  push	{r0, r1}
L034fe:
  ldr	r0, [pc, #4]
L03500:
  str	r0, [sp, #4]
L03502:
  pop	{r0, pc}
L03504:
  .word 0x0000bc77
L03508:
  push	{r0, r1}
L0350a:
  ldr	r0, [pc, #4]
L0350c:
  str	r0, [sp, #4]
L0350e:
  pop	{r0, pc}
L03510:
  .word 0x00016f65
L03514:
  push	{r0, r1}
L03516:
  ldr	r0, [pc, #4]
L03518:
  str	r0, [sp, #4]
L0351a:
  pop	{r0, pc}
L0351c:
  .word 0x0001701f
L03520:
  push	{r0, r1}
L03522:
  ldr	r0, [pc, #4]
L03524:
  str	r0, [sp, #4]
L03526:
  pop	{r0, pc}
L03528:
  .word 0x0001702f
L0352c:
  push	{r0, r1}
L0352e:
  ldr	r0, [pc, #4]
L03530:
  str	r0, [sp, #4]
L03532:
  pop	{r0, pc}
L03534:
  .word 0x00017013
L03538:
  push	{r0, r1}
L0353a:
  ldr	r0, [pc, #4]
L0353c:
  str	r0, [sp, #4]
L0353e:
  pop	{r0, pc}
L03540:
  .word 0x0001112f
L03544:
  push	{r0, r1}
L03546:
  ldr	r0, [pc, #4]
L03548:
  str	r0, [sp, #4]
L0354a:
  pop	{r0, pc}
L0354c:
  .word 0x00005a51
L03550:
  push	{r0, r1}
L03552:
  ldr	r0, [pc, #4]
L03554:
  str	r0, [sp, #4]
L03556:
  pop	{r0, pc}
L03558:
  .word 0x000175cb
L0355c:
  push	{r0, r1}
L0355e:
  ldr	r0, [pc, #4]
L03560:
  str	r0, [sp, #4]
L03562:
  pop	{r0, pc}
L03564:
  .word 0x000175d7
L03568:
  push	{r0, r1}
L0356a:
  ldr	r0, [pc, #4]
L0356c:
  str	r0, [sp, #4]
L0356e:
  pop	{r0, pc}
L03570:
  .word 0x0000e15d
L03574:
  push	{r0, r1}
L03576:
  ldr	r0, [pc, #4]
L03578:
  str	r0, [sp, #4]
L0357a:
  pop	{r0, pc}
L0357c:
  .word 0x00017673
L03580:
  push	{r0, r1}
L03582:
  ldr	r0, [pc, #4]
L03584:
  str	r0, [sp, #4]
L03586:
  pop	{r0, pc}
L03588:
  .word 0x00018897
L0358c:
  push	{r0, r1}
L0358e:
  ldr	r0, [pc, #4]
L03590:
  str	r0, [sp, #4]
L03592:
  pop	{r0, pc}
L03594:
  .word 0x0001758f
L03598:
  push	{r0, r1}
L0359a:
  ldr	r0, [pc, #4]
L0359c:
  str	r0, [sp, #4]
L0359e:
  pop	{r0, pc}
L035a0:
  .word 0x0000afd1
L035a4:
  push	{r0, r1}
L035a6:
  ldr	r0, [pc, #4]
L035a8:
  str	r0, [sp, #4]
L035aa:
  pop	{r0, pc}
L035ac:
  .word 0x00000331
L035b0:
  push	{r0, r1}
L035b2:
  ldr	r0, [pc, #4]
L035b4:
  str	r0, [sp, #4]
L035b6:
  pop	{r0, pc}
L035b8:
  .word 0x00000355
L035bc:
  push	{r0, r1}
L035be:
  ldr	r0, [pc, #4]
L035c0:
  str	r0, [sp, #4]
L035c2:
  pop	{r0, pc}
L035c4:
  .word 0x0000c431
L035c8:
  push	{r0, r1}
L035ca:
  ldr	r0, [pc, #4]
L035cc:
  str	r0, [sp, #4]
L035ce:
  pop	{r0, pc}
L035d0:
  .word 0x0000357f
L035d4:
  push	{r0, r1}
L035d6:
  ldr	r0, [pc, #4]
L035d8:
  str	r0, [sp, #4]
L035da:
  pop	{r0, pc}
L035dc:
  .word 0x000174f9
L035e0:
  push	{r0, r1}
L035e2:
  ldr	r0, [pc, #4]
L035e4:
  str	r0, [sp, #4]
L035e6:
  pop	{r0, pc}
L035e8:
  .word 0x000181bd
L035ec:
  push	{r0, r1}
L035ee:
  ldr	r0, [pc, #4]
L035f0:
  str	r0, [sp, #4]
L035f2:
  pop	{r0, pc}
L035f4:
  .word 0x000174ef
L035f8:
  push	{r0, r1}
L035fa:
  ldr	r0, [pc, #4]
L035fc:
  str	r0, [sp, #4]
L035fe:
  pop	{r0, pc}
L03600:
  .word 0x0000494f
L03604:
  push	{r0, r1}
L03606:
  ldr	r0, [pc, #4]
L03608:
  str	r0, [sp, #4]
L0360a:
  pop	{r0, pc}
L0360c:
  .word 0x0000a913
L03610:
  push	{r0, r1}
L03612:
  ldr	r0, [pc, #4]
L03614:
  str	r0, [sp, #4]
L03616:
  pop	{r0, pc}
L03618:
  .word 0x000104c5
L0361c:
  push	{r0, r1}
L0361e:
  ldr	r0, [pc, #4]
L03620:
  str	r0, [sp, #4]
L03622:
  pop	{r0, pc}
L03624:
  .word 0x000173a9
L03628:
  push	{r0, r1}
L0362a:
  ldr	r0, [pc, #4]
L0362c:
  str	r0, [sp, #4]
L0362e:
  pop	{r0, pc}
L03630:
  .word 0x0001859b
L03634:
  push	{r0, r1}
L03636:
  ldr	r0, [pc, #4]
L03638:
  str	r0, [sp, #4]
L0363a:
  pop	{r0, pc}
L0363c:
  .word 0x00018577
L03640:
  push	{r0, r1}
L03642:
  ldr	r0, [pc, #4]
L03644:
  str	r0, [sp, #4]
L03646:
  pop	{r0, pc}
L03648:
  .word 0x00018779
L0364c:
  push	{r0, r1}
L0364e:
  ldr	r0, [pc, #4]
L03650:
  str	r0, [sp, #4]
L03652:
  pop	{r0, pc}
L03654:
  .word 0x00018413
L03658:
  push	{r0, r1}
L0365a:
  ldr	r0, [pc, #4]
L0365c:
  str	r0, [sp, #4]
L0365e:
  pop	{r0, pc}
L03660:
  .word 0x0001842b
L03664:
  push	{r0, r1}
L03666:
  ldr	r0, [pc, #4]
L03668:
  str	r0, [sp, #4]
L0366a:
  pop	{r0, pc}
L0366c:
  .word 0x000040e1
L03670:
  push	{r0, r1}
L03672:
  ldr	r0, [pc, #4]
L03674:
  str	r0, [sp, #4]
L03676:
  pop	{r0, pc}
L03678:
  .word 0x00003b0b
L0367c:
  push	{r0, r1}
L0367e:
  ldr	r0, [pc, #4]
L03680:
  str	r0, [sp, #4]
L03682:
  pop	{r0, pc}
L03684:
  .word 0x000098d3
L03688:
  push	{r0, r1}
L0368a:
  ldr	r0, [pc, #4]
L0368c:
  str	r0, [sp, #4]
L0368e:
  pop	{r0, pc}
L03690:
  .word 0x0001912d
L03694:
  push	{r0, r1}
L03696:
  ldr	r0, [pc, #4]
L03698:
  str	r0, [sp, #4]
L0369a:
  pop	{r0, pc}
L0369c:
  .word 0x000019d7
L036a0:
  push	{r0, r1}
L036a2:
  ldr	r0, [pc, #4]
L036a4:
  str	r0, [sp, #4]
L036a6:
  pop	{r0, pc}
L036a8:
  .word 0x000171c1
L036ac:
  push	{r0, r1}
L036ae:
  ldr	r0, [pc, #4]
L036b0:
  str	r0, [sp, #4]
L036b2:
  pop	{r0, pc}
L036b4:
  .word 0x00017265
L036b8:
  push	{r0, r1}
L036ba:
  ldr	r0, [pc, #4]
L036bc:
  str	r0, [sp, #4]
L036be:
  pop	{r0, pc}
L036c0:
  .word 0x000189f7
L036c4:
  push	{r0, r1}
L036c6:
  ldr	r0, [pc, #4]
L036c8:
  str	r0, [sp, #4]
L036ca:
  pop	{r0, pc}
L036cc:
  .word 0x000035dd
L036d0:
  push	{r0, r1}
L036d2:
  ldr	r0, [pc, #4]
L036d4:
  str	r0, [sp, #4]
L036d6:
  pop	{r0, pc}
L036d8:
  .word 0x00013aa3
L036dc:
  push	{r0, r1}
L036de:
  ldr	r0, [pc, #4]
L036e0:
  str	r0, [sp, #4]
L036e2:
  pop	{r0, pc}
L036e4:
  .word 0x00003695
L036e8:
  push	{r0, r1}
L036ea:
  ldr	r0, [pc, #4]
L036ec:
  str	r0, [sp, #4]
L036ee:
  pop	{r0, pc}
L036f0:
  .word 0x000172a5
L036f4:
  push	{r0, r1}
L036f6:
  ldr	r0, [pc, #4]
L036f8:
  str	r0, [sp, #4]
L036fa:
  pop	{r0, pc}
L036fc:
  .word 0x00014ed7
L03700:
  push	{r0, r1}
L03702:
  ldr	r0, [pc, #4]
L03704:
  str	r0, [sp, #4]
L03706:
  pop	{r0, pc}
L03708:
  .word 0x00014d79
L0370c:
  push	{r0, r1}
L0370e:
  ldr	r0, [pc, #4]
L03710:
  str	r0, [sp, #4]
L03712:
  pop	{r0, pc}
L03714:
  .word 0x00014d93
L03718:
  movs	r3, r0
L0371a:
  .inst.w 0xefbe0000
L0371e:
  movs	r0, r0
L03720:
  subs	r2, #152
L03722:
  movs	r0, r0
L03724:
  str	r3, [sp, #896]
L03726:
  movs	r4, r0
L03728:
  add	r1, pc, #128
L0372a:
  movs	r7, r0
L0372c:
  add	r2, sp, #128
L0372e:
  lsls	r4, r0, #1
L03730:
  strb	r0, [r4, #3]
L03732:
  lsls	r2, r6, #1
L03734:
  .inst.n 0xe1c0
L03736:
  lsls	r4, r4, #3
L03738:
  .zero 3064
L04330:
  .inst.w 0xffffffff
L04334:
  .inst.w 0xffffffff
L04338:
  .inst.w 0xffffffff
L0433c:
  .inst.w 0xffffffff
L04340:
  .inst.w 0xffffffff
L04344:
  .inst.w 0xffffffff
L04348:
  .inst.w 0xffffffff
L0434c:
  .inst.w 0xffffffff
L04350:
  .inst.w 0xffffffff
L04354:
  .inst.w 0xffffffff
L04358:
  .inst.w 0xffffffff
L0435c:
  .inst.w 0xffffffff
L04360:
  .inst.w 0xffffffff
L04364:
  .inst.w 0xffffffff
L04368:
  .inst.w 0xffffffff
L0436c:
  .inst.w 0xffffffff
