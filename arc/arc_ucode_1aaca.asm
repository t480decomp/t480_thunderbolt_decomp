
build/arc_ucode.elf:     file format elf32-littlearc


Disassembly of section .text:

00000000 <.text>:
       0:	0003 8000           	b	1048578	;0x100002
       4:	3285 8000           	.word	0x32858000
       8:	09f5 8000           	breq	r1,r0,-12	;0xfffffffc
       c:	1a65 8000           	st	r0,[r2,-155]
      10:	2c5f 8000           	.word	0x2c5f8000
      14:	0d96 8000           	bl	1050004	;0x1005a8
	...
      80:	2020 0f80 0001 0050 	j	0x10050
      88:	2020 0f80 0001 006c 	j	0x1006c
      90:	2020 0f80 0001 007c 	j	0x1007c
      98:	2020 0f80 0001 0098 	j	0x10098
      a0:	2020 0f80 0001 00ac 	j	0x100ac
      a8:	2020 0f80 0001 00d4 	j	0x100d4
	...
      d0:	244a 0000           	mov	r4,0
      d4:	254a 0000           	mov	r5,0
      d8:	264a 0000           	mov	r6,0
      dc:	d900                	mov_s	r1,0
      de:	1e00 7042 0080 16e6 	stb	r1,[0x8016e6]
      e6:	2060 0600           	j	0x18
      ea:	7ee0                	j_s	[blink]
      ec:	09da 0080           	bl	4568	;0x12c4
      f0:	78e0                	nop_s
      f2:	2020 0f80 0000 ca4a 	j	0xca4a
      fa:	7ee0                	j_s	[blink]
      fc:	c0f1                	push_s	blink
      fe:	0f6e f98f           	bl	-51348	;0xffff3868
     102:	084a fe8f           	bl	-12216	;0xffffd148
     106:	204c 8000           	cmp	r0,0
     10a:	0f40 fe42           	blne	-12480	;0xffffd048
     10e:	2020 0f80 0000 27da 	j	0x27da
     116:	7ee0                	j_s	[blink]
     118:	d803                	mov_s	r0,0x3
     11a:	1600 7001 0000 6974 	ld	r1,[0x6974]
     122:	2020 0f80 0000 6998 	j	0x6998
     12a:	7ee0                	j_s	[blink]
     12c:	d902                	mov_s	r1,0x2
     12e:	228a 0484           	mov	r2,274
     132:	0836 facf           	bl	-42956	;0xffff5964
     136:	e80b                	breq_s	r0,0,22	;0x14a
     138:	13f8 b000           	ld	r0,[fp,-8]
     13c:	2004 0f80 0000 ff00 	and	r0,r0,0xff00
     144:	2841 020e           	lsr	r14,r0,0x8
     148:	70c9                	mov_s	r0,r14
     14a:	2020 0f80 0000 b1bc 	j	0xb1bc
     152:	7ee0                	j_s	[blink]
     154:	7228                	mov_s	r2,r1
     156:	0b36 ff8f           	bl	-3276	;0xfffff488
     15a:	d801                	mov_s	r0,0x1
     15c:	2020 0f80 0000 3664 	j	0x3664
     164:	7ee0                	j_s	[blink]
	...
     17e:	0000 1cf4           	b.d	235520	;0x3997c
     182:	b6c8                	stw_s	r14,[r14,0x10]
     184:	1c04 37c0           	st	blink,[sp,4]
     188:	c542                	st_s	r13,[sp,0x8]
     18a:	230a 3700           	mov	fp,sp
     18e:	250a 9000           	mov.f	r13,r0
     192:	f40e                	bne_s	28	;0x1ac
     194:	0cbe 0000           	bl	1212	;0x650
     198:	d801                	mov_s	r0,0x1
     19a:	240a 36c0           	mov	sp,fp
     19e:	1404 301f           	ld	blink,[sp,4]
     1a2:	c502                	ld_s	r13,[sp,0x8]
     1a4:	140c 341b           	ld.ab	fp,[sp,12]
     1a8:	2020 07c0           	j	[blink]
     1ac:	0d1d 1051           	brne	r13,0x1,28	;0x1c8
     1b0:	70cf 0080 9000      	mov_s	r0,0x809000
     1b6:	240a 36c0           	mov	sp,fp
     1ba:	1404 301f           	ld	blink,[sp,4]
     1be:	c502                	ld_s	r13,[sp,0x8]
     1c0:	140c 341b           	ld.ab	fp,[sp,12]
     1c4:	2020 07c0           	j	[blink]
     1c8:	0d19 1091           	brne	r13,0x2,24	;0x1e0
     1cc:	d80b                	mov_s	r0,0xb
     1ce:	240a 36c0           	mov	sp,fp
     1d2:	1404 301f           	ld	blink,[sp,4]
     1d6:	c502                	ld_s	r13,[sp,0x8]
     1d8:	140c 341b           	ld.ab	fp,[sp,12]
     1dc:	2020 07c0           	j	[blink]
     1e0:	0d1d 10d1           	brne	r13,0x3,28	;0x1fc
     1e4:	70cf 0001 027c      	mov_s	r0,0x1027c
     1ea:	240a 36c0           	mov	sp,fp
     1ee:	1404 301f           	ld	blink,[sp,4]
     1f2:	c502                	ld_s	r13,[sp,0x8]
     1f4:	140c 341b           	ld.ab	fp,[sp,12]
     1f8:	2020 07c0           	j	[blink]
     1fc:	0d19 1111           	brne	r13,0x4,24	;0x214
     200:	0876 0000           	bl	116	;0x274
     204:	240a 36c0           	mov	sp,fp
     208:	1404 301f           	ld	blink,[sp,4]
     20c:	c502                	ld_s	r13,[sp,0x8]
     20e:	140c 341b           	ld.ab	fp,[sp,12]
     212:	7ee0                	j_s	[blink]
     214:	d800                	mov_s	r0,0
     216:	240a 36c0           	mov	sp,fp
     21a:	1404 301f           	ld	blink,[sp,4]
     21e:	c502                	ld_s	r13,[sp,0x8]
     220:	140c 341b           	ld.ab	fp,[sp,12]
     224:	7ee0                	j_s	[blink]
     226:	0000 1cec           	ble.d	235520	;0x39a24
     22a:	b6c8                	stw_s	r14,[r14,0x10]
     22c:	1c04 37c0           	st	blink,[sp,4]
     230:	c542                	st_s	r13,[sp,0x8]
     232:	c643                	st_s	r14,[sp,0xc]
     234:	c744                	st_s	r15,[sp,0x10]
     236:	230a 3700           	mov	fp,sp
     23a:	7508                	mov_s	r13,r0
     23c:	7728                	mov_s	r15,r1
     23e:	268a 1fff           	mov	r14,-1
     242:	7028                	mov_s	r0,r1
     244:	2022 0340           	jl	[r13]
     248:	240a 36c0           	mov	sp,fp
     24c:	1404 301f           	ld	blink,[sp,4]
     250:	c502                	ld_s	r13,[sp,0x8]
     252:	c603                	ld_s	r14,[sp,0xc]
     254:	c704                	ld_s	r15,[sp,0x10]
     256:	1414 341b           	ld.ab	fp,[sp,20]
     25a:	7ee0                	j_s	[blink]
     25c:	1cfc b6c8           	st.aw	fp,[sp,-4]
     260:	230a 3700           	mov	fp,sp
     264:	7108                	mov_s	r1,r0
     266:	d800                	mov_s	r0,0
     268:	240a 36c0           	mov	sp,fp
     26c:	1404 341b           	ld.ab	fp,[sp,4]
     270:	7ee0                	j_s	[blink]
     272:	78e0                	nop_s
     274:	1cec b6c8           	st.aw	fp,[sp,-20]
     278:	1c04 37c0           	st	blink,[sp,4]
     27c:	c542                	st_s	r13,[sp,0x8]
     27e:	c643                	st_s	r14,[sp,0xc]
     280:	c744                	st_s	r15,[sp,0x10]
     282:	230a 3700           	mov	fp,sp
     286:	c1a2                	sub_s	sp,sp,0x8
     288:	dd01                	mov_s	r13,0x1
     28a:	d800                	mov_s	r0,0
     28c:	1bfc b000           	st	r0,[fp,-4]
     290:	76cf 0080 7540      	mov_s	r14,0x807540
     296:	a602                	st_s	r0,[r14,0x8]
     298:	a6a3                	st_s	r13,[r14,0xc]
     29a:	2342 3203           	sub	r3,fp,0x8
     29e:	d902                	mov_s	r1,0x2
     2a0:	228a 0090           	mov	r2,1026
     2a4:	0ec2 fa8f           	bl	-43328	;0xffff5964
     2a8:	270a 9000           	mov.f	r15,r0
     2ac:	f20e                	beq_s	28	;0x2c8
     2ae:	13f8 b001           	ld	r1,[fp,-8]
     2b2:	b9d7                	bmsk_s	r1,r1,0x17
     2b4:	1bf8 b040           	st	r1,[fp,-8]
     2b8:	2342 3101           	sub	r1,fp,0x4
     2bc:	208a 0b03           	mov	r0,236
     2c0:	0c66 fd8f           	bl	-19356	;0xffffb724
     2c4:	0809 0011           	brne	r0,0,8	;0x2cc
     2c8:	dd00                	mov_s	r13,0
     2ca:	f00e                	b_s	28	;0x2e4
     2cc:	13fc b002           	ld	r2,[fp,-4]
     2d0:	bad7                	bmsk_s	r2,r2,0x17
     2d2:	1bfc b080           	st	r2,[fp,-4]
     2d6:	e204                	add_s	r2,r2,0x4
     2d8:	1bfc b080           	st	r2,[fp,-4]
     2dc:	13f8 b001           	ld	r1,[fp,-8]
     2e0:	6159                	add_s	r1,r1,r2
     2e2:	a620                	st_s	r1,[r14,0]
     2e4:	70a9                	mov_s	r0,r13
     2e6:	240a 36c0           	mov	sp,fp
     2ea:	1404 301f           	ld	blink,[sp,4]
     2ee:	c502                	ld_s	r13,[sp,0x8]
     2f0:	c603                	ld_s	r14,[sp,0xc]
     2f2:	c704                	ld_s	r15,[sp,0x10]
     2f4:	1414 341b           	ld.ab	fp,[sp,20]
     2f8:	7ee0                	j_s	[blink]
     2fa:	78e0                	nop_s
     2fc:	1c90 b008           	st.aw	r0,[sp,-112]
     300:	1c04 37c0           	st	blink,[sp,4]
     304:	c142                	st_s	r1,[sp,0x8]
     306:	c243                	st_s	r2,[sp,0xc]
     308:	c344                	st_s	r3,[sp,0x10]
     30a:	1c14 3100           	st	r4,[sp,20]
     30e:	1c18 3140           	st	r5,[sp,24]
     312:	1c1c 3180           	st	r6,[sp,28]
     316:	1c20 31c0           	st	r7,[sp,32]
     31a:	1c24 3200           	st	r8,[sp,36]
     31e:	1c28 3240           	st	r9,[sp,40]
     322:	1c2c 3280           	st	r10,[sp,44]
     326:	1c30 32c0           	st	r11,[sp,48]
     32a:	c44d                	st_s	r12,[sp,0x34]
     32c:	c54e                	st_s	r13,[sp,0x38]
     32e:	c64f                	st_s	r14,[sp,0x3c]
     330:	c750                	st_s	r15,[sp,0x40]
     332:	1c44 3400           	st	r16,[sp,68]
     336:	1c48 3440           	st	r17,[sp,72]
     33a:	1c4c 3480           	st	r18,[sp,76]
     33e:	1c50 34c0           	st	r19,[sp,80]
     342:	1c54 3500           	st	r20,[sp,84]
     346:	1c58 3540           	st	r21,[sp,88]
     34a:	1c5c 3580           	st	r22,[sp,92]
     34e:	1c60 35c0           	st	r23,[sp,96]
     352:	1c64 3f00           	st	lp_count,[sp,100]
     356:	246a 1080           	lr	r12,[lp_start]
     35a:	c45a                	st_s	r12,[sp,0x68]
     35c:	246a 10c0           	lr	r12,[lp_end]
     360:	c45b                	st_s	r12,[sp,0x6c]
     362:	264a 2000           	mov	r22,0
     366:	24aa 23ff           	lr	r20,[-49]
     36a:	210a 2580           	mov	r17,r22
     36e:	220a 2580           	mov	r18,r22
     372:	230a 2580           	mov	r19,r22
     376:	2453 26d4           	bmsk	r20,r20,0x1b
     37a:	27aa 13ff           	lr	r15,[-49]
     37e:	2704 1f8f 7000 0000 	and	r15,r15,0x70000000
     386:	bf3c                	lsr_s	r15,r15,0x1c
     388:	2404 2f8d ffff f800 	and	r13,r20,0xfffff800
     390:	bd22                	lsr_s	r13,r13,0x2
     392:	dc00                	mov_s	r12,0
     394:	244c 9200           	cmp	r12,0x8
     398:	212f 0580           	asl	r1,r22
     39c:	210e 0f80 ffff ffdf 	rsub	r0,r1,0xffffffdf
     3a4:	262a 1000           	lr	r14,[r0]
     3a8:	7ed0                	extw_s	r14,r14
     3aa:	0d81 1380           	breq	r13,r14,128	;0x428
     3ae:	2640 2056           	add	r22,r22,0x1
     3b2:	264c a200           	cmp	r22,0x8
     3b6:	f7b2                	blo_s	-28	;0x398
     3b8:	2400 23d4           	add	r20,r20,r15
     3bc:	270a 2f80 0080 7540 	mov	r23,0x807540
     3c4:	170c 2000           	ld	r0,[r23,12]
     3c8:	e080                	cmp_s	r0,0
     3ca:	f436                	bne_s	108	;0x434
     3cc:	238a 07ff           	mov	r3,-33
     3d0:	d900                	mov_s	r1,0
     3d2:	b990                	bset_s	r1,r1,0x10
     3d4:	0025 0000           	b	36	;0x3f8
     3d8:	2050 2410           	bclr	r16,r16,0x10
     3dc:	1708 2000           	ld	r0,[r23,8]
     3e0:	781b                	asl_s	r0,r0
     3e2:	2302 0002           	sub	r2,r3,r0
     3e6:	202b 2080           	sr	r16,[r2]
     3ea:	1708 2000           	ld	r0,[r23,8]
     3ee:	e001                	add_s	r0,r0,0x1
     3f0:	2053 0080           	bmsk	r0,r0,0x2
     3f4:	1f08 2000           	st	r0,[r23,8]
     3f8:	1708 2000           	ld	r0,[r23,8]
     3fc:	781b                	asl_s	r0,r0
     3fe:	2302 0002           	sub	r2,r3,r0
     402:	202a 2080           	lr	r16,[r2]
     406:	2004 2040           	and	r0,r16,r1
     40a:	e080                	cmp_s	r0,0
     40c:	f5e6                	bne_s	-52	;0x3d8
     40e:	708a                	mov_s	r0,r20
     410:	1708 2001           	ld	r1,[r23,8]
     414:	0906 0000           	bl	260	;0x518
     418:	70ba                	mov_s	r21,r0
     41a:	1708 2000           	ld	r0,[r23,8]
     41e:	e001                	add_s	r0,r0,0x1
     420:	b8c2                	bmsk_s	r0,r0,0x2
     422:	1f08 2000           	st	r0,[r23,8]
     426:	f032                	b_s	100	;0x488
     428:	26ab 73ff 0000 0000 	sr	0,[-49]
     430:	006d 0000           	b	108	;0x49c
     434:	200a 0500           	mov	r0,r20
     438:	1708 2001           	ld	r1,[r23,8]
     43c:	08de 0000           	bl	220	;0x518
     440:	70ba                	mov_s	r21,r0
     442:	1708 2000           	ld	r0,[r23,8]
     446:	e001                	add_s	r0,r0,0x1
     448:	b8c2                	bmsk_s	r0,r0,0x2
     44a:	1f08 2000           	st	r0,[r23,8]
     44e:	1708 2000           	ld	r0,[r23,8]
     452:	2042 8000           	sub.f	r0,r0,0
     456:	20ca 0062           	mov.ne	r0,0x1
     45a:	1f0c 2000           	st	r0,[r23,12]
     45e:	264a 2000           	mov	r22,0
     462:	dc00                	mov_s	r12,0
     464:	244c 9200           	cmp	r12,0x8
     468:	212f 0580           	asl	r1,r22
     46c:	210e 0f80 ffff ffdf 	rsub	r0,r1,0xffffffdf
     474:	212a 0000           	lr	r1,[r0]
     478:	b9b0                	bclr_s	r1,r1,0x10
     47a:	212b 0000           	sr	r1,[r0]
     47e:	2640 2056           	add	r22,r22,0x1
     482:	264c a200           	cmp	r22,0x8
     486:	f7b2                	blo_s	-28	;0x468
     488:	2402 23d4           	sub	r20,r20,r15
     48c:	250a 3500           	mov	ilink,r20
     490:	26ab 73ff 0000 0000 	sr	0,[-49]
     498:	0d71 2010           	breq	r21,0,112	;0x508
     49c:	1404 301f           	ld	blink,[sp,4]
     4a0:	c419                	ld_s	r12,[sp,0x64]
     4a2:	749f                	mov_s	lp_count,r12
     4a4:	c41a                	ld_s	r12,[sp,0x68]
     4a6:	246b 1080           	sr	r12,[lp_start]
     4aa:	c41b                	ld_s	r12,[sp,0x6c]
     4ac:	246b 10c0           	sr	r12,[lp_end]
     4b0:	c102                	ld_s	r1,[sp,0x8]
     4b2:	c203                	ld_s	r2,[sp,0xc]
     4b4:	c304                	ld_s	r3,[sp,0x10]
     4b6:	1414 3004           	ld	r4,[sp,20]
     4ba:	1418 3005           	ld	r5,[sp,24]
     4be:	141c 3006           	ld	r6,[sp,28]
     4c2:	1420 3007           	ld	r7,[sp,32]
     4c6:	1424 3008           	ld	r8,[sp,36]
     4ca:	1428 3009           	ld	r9,[sp,40]
     4ce:	142c 300a           	ld	r10,[sp,44]
     4d2:	1430 300b           	ld	r11,[sp,48]
     4d6:	c50e                	ld_s	r13,[sp,0x38]
     4d8:	c60f                	ld_s	r14,[sp,0x3c]
     4da:	c710                	ld_s	r15,[sp,0x40]
     4dc:	1444 3010           	ld	r16,[sp,68]
     4e0:	1448 3011           	ld	r17,[sp,72]
     4e4:	144c 3012           	ld	r18,[sp,76]
     4e8:	1450 3013           	ld	r19,[sp,80]
     4ec:	1454 3014           	ld	r20,[sp,84]
     4f0:	1458 3015           	ld	r21,[sp,88]
     4f4:	145c 3016           	ld	r22,[sp,92]
     4f8:	1460 3017           	ld	r23,[sp,96]
     4fc:	1434 300c           	ld	r12,[sp,52]
     500:	1470 3400           	ld.ab	r0,[sp,112]
     504:	2020 8740           	j.f	[ilink]
     508:	d830                	mov_s	r0,0x30
     50a:	71cf 01b6 0514      	mov_s	r1,0x1b60514
     510:	0bfa fb8f           	bl	-35848	;0xffff7908
     514:	f1c4                	b_s	-120	;0x49c
     516:	78e0                	nop_s
     518:	1ce0 b6c8           	st.aw	fp,[sp,-32]
     51c:	1c04 37c0           	st	blink,[sp,4]
     520:	c542                	st_s	r13,[sp,0x8]
     522:	c643                	st_s	r14,[sp,0xc]
     524:	c744                	st_s	r15,[sp,0x10]
     526:	1c14 3400           	st	r16,[sp,20]
     52a:	1c18 3440           	st	r17,[sp,24]
     52e:	1c1c 3480           	st	r18,[sp,28]
     532:	230a 3700           	mov	fp,sp
     536:	7708                	mov_s	r15,r0
     538:	7628                	mov_s	r14,r1
     53a:	224a 2000           	mov	r18,0
     53e:	1600 7001 0080 7540 	ld	r1,[0x807540]
     546:	0981 0010           	breq	r1,0,128	;0x5c4
     54a:	2704 1f8d ffff f800 	and	r13,r15,0xfffff800
     552:	260a 0f80 0001 8000 	mov	r6,0x18000
     55a:	2502 1180           	sub	r0,r13,r6
     55e:	6038                	add_s	r0,r0,r1
     560:	200a 2f80 0001 1540 	mov	r16,0x11540
     568:	250a 0f80 0001 0000 	mov	r5,0x10000
     570:	2002 2141           	sub	r1,r16,r5
     574:	2e40 12d1           	asl	r17,r14,0xb
     578:	7122                	add_s	r1,r1,r17
     57a:	da00                	mov_s	r2,0
     57c:	224f 02c2           	bset	r2,r2,0xb
     580:	0e16 fc0f           	bl	-31212	;0xffff8b94
     584:	0841 0050           	breq	r0,0x1,64	;0x5c4
     588:	242f 0380           	asl	r4,r14
     58c:	240e 0f82 ffff ffdf 	rsub	r2,r4,0xffffffdf
     594:	262b 7080 0000 0000 	sr	0,[r2]
     59c:	2000 2450           	add	r16,r16,r17
     5a0:	2841 2090           	lsr	r16,r16,0x2
     5a4:	204f 2652           	bset	r18,r16,0x19
     5a8:	240e 0f83 ffff ffde 	rsub	r3,r4,0xffffffde
     5b0:	222b 20c0           	sr	r18,[r3]
     5b4:	2d41 1080           	lsr	r0,r13,0x2
     5b8:	b89f                	bset_s	r0,r0,0x1f
     5ba:	202b 0080           	sr	r0,[r2]
     5be:	d801                	mov_s	r0,0x1
     5c0:	0009 0000           	b	8	;0x5c8
     5c4:	204a 0000           	mov	r0,0
     5c8:	240a 36c0           	mov	sp,fp
     5cc:	1404 301f           	ld	blink,[sp,4]
     5d0:	c502                	ld_s	r13,[sp,0x8]
     5d2:	c603                	ld_s	r14,[sp,0xc]
     5d4:	c704                	ld_s	r15,[sp,0x10]
     5d6:	1414 3010           	ld	r16,[sp,20]
     5da:	1418 3011           	ld	r17,[sp,24]
     5de:	141c 3012           	ld	r18,[sp,28]
     5e2:	1420 341b           	ld.ab	fp,[sp,32]
     5e6:	7ee0                	j_s	[blink]
     5e8:	d8ff                	mov_s	r0,0xff
     5ea:	1e00 7000 0080 7544 	st	r0,[0x807544]
     5f2:	da00                	mov_s	r2,0
     5f4:	1e00 7080 0080 7540 	st	r2,[0x807540]
     5fc:	d901                	mov_s	r1,0x1
     5fe:	1e00 7042 0080 7570 	stb	r1,[0x807570]
     606:	1e00 7082 0080 7cf9 	stb	r2,[0x807cf9]
     60e:	1e00 7002 0080 7cec 	stb	r0,[0x807cec]
     616:	1e00 7082 0080 7cfc 	stb	r2,[0x807cfc]
     61e:	1e00 7082 0080 7cfb 	stb	r2,[0x807cfb]
     626:	1e00 7082 0080 1330 	stb	r2,[0x801330]
     62e:	1e00 7082 0080 7cfa 	stb	r2,[0x807cfa]
     636:	1e00 7082 0080 7bc4 	stb	r2,[0x807bc4]
     63e:	1e00 7080 0080 7ce8 	st	r2,[0x807ce8]
     646:	1e00 7084 0080 7bc8 	sth	r2,[0x807bc8]
     64e:	7ee0                	j_s	[blink]
     650:	1cf4 b348           	st.aw	r13,[sp,-12]
     654:	1c04 37c0           	st	blink,[sp,4]
     658:	c642                	st_s	r14,[sp,0x8]
     65a:	76cf 0001 8318      	mov_s	r14,0x18318
     660:	7edd                	lsr_s	r14,r14
     662:	7ed0                	extw_s	r14,r14
     664:	be80                	bset_s	r14,r14,0
     666:	75cf 0080 04fc      	mov_s	r13,0x8004fc
     66c:	1524 9102           	ldh	r2,[r13,-220]
     670:	260c 9080           	cmp	r14,r2
     674:	0f74 ffc2           	blne	-140	;0x5e8
     678:	1d24 9384           	sth	r14,[r13,-220]
     67c:	71cf 0001 826c      	mov_s	r1,0x1826c
     682:	793d                	lsr_s	r1,r1
     684:	7830                	extw_s	r0,r1
     686:	b880                	bset_s	r0,r0,0
     688:	1d26 9004           	sth	r0,[r13,-218]
     68c:	71cf 0001 8394      	mov_s	r1,0x18394
     692:	793d                	lsr_s	r1,r1
     694:	7930                	extw_s	r1,r1
     696:	b980                	bset_s	r1,r1,0
     698:	1d28 9044           	sth	r1,[r13,-216]
     69c:	72cf 0001 83e8      	mov_s	r2,0x183e8
     6a2:	7a5d                	lsr_s	r2,r2
     6a4:	7a50                	extw_s	r2,r2
     6a6:	ba80                	bset_s	r2,r2,0
     6a8:	1d2a 9084           	sth	r2,[r13,-214]
     6ac:	73cf 0001 8fa4      	mov_s	r3,0x18fa4
     6b2:	7b7d                	lsr_s	r3,r3
     6b4:	7b70                	extw_s	r3,r3
     6b6:	bb80                	bset_s	r3,r3,0
     6b8:	1d36 90c4           	sth	r3,[r13,-202]
     6bc:	240a 0f80 0001 8210 	mov	r4,0x18210
     6c4:	242f 0102           	lsr	r4,r4
     6c8:	242f 0108           	extw	r4,r4
     6cc:	244f 0004           	bset	r4,r4,0
     6d0:	1d38 9104           	sth	r4,[r13,-200]
     6d4:	250a 0f80 0001 8214 	mov	r5,0x18214
     6dc:	252f 0142           	lsr	r5,r5
     6e0:	252f 0148           	extw	r5,r5
     6e4:	254f 0005           	bset	r5,r5,0
     6e8:	1d3a 9144           	sth	r5,[r13,-198]
     6ec:	260a 0f80 0001 8338 	mov	r6,0x18338
     6f4:	262f 0182           	lsr	r6,r6
     6f8:	262f 0188           	extw	r6,r6
     6fc:	264f 0006           	bset	r6,r6,0
     700:	1d3c 9184           	sth	r6,[r13,-196]
     704:	270a 0f80 0001 8384 	mov	r7,0x18384
     70c:	272f 01c2           	lsr	r7,r7
     710:	272f 01c8           	extw	r7,r7
     714:	274f 0007           	bset	r7,r7,0
     718:	1d3e 91c4           	sth	r7,[r13,-194]
     71c:	200a 1f80 0001 8460 	mov	r8,0x18460
     724:	202f 1202           	lsr	r8,r8
     728:	202f 1208           	extw	r8,r8
     72c:	204f 1008           	bset	r8,r8,0
     730:	1d40 9204           	sth	r8,[r13,-192]
     734:	210a 1f80 0001 8270 	mov	r9,0x18270
     73c:	212f 1242           	lsr	r9,r9
     740:	212f 1248           	extw	r9,r9
     744:	214f 1009           	bset	r9,r9,0
     748:	1d42 9244           	sth	r9,[r13,-190]
     74c:	220a 1f80 0001 85f8 	mov	r10,0x185f8
     754:	222f 1282           	lsr	r10,r10
     758:	222f 1288           	extw	r10,r10
     75c:	224f 100a           	bset	r10,r10,0
     760:	1d44 9284           	sth	r10,[r13,-188]
     764:	230a 1f80 0001 8628 	mov	r11,0x18628
     76c:	232f 12c2           	lsr	r11,r11
     770:	232f 12c8           	extw	r11,r11
     774:	234f 100b           	bset	r11,r11,0
     778:	1d46 92c4           	sth	r11,[r13,-186]
     77c:	70cf 0001 1220      	mov_s	r0,0x11220
     782:	781d                	lsr_s	r0,r0
     784:	7810                	extw_s	r0,r0
     786:	b880                	bset_s	r0,r0,0
     788:	1d48 9004           	sth	r0,[r13,-184]
     78c:	71cf 0001 8274      	mov_s	r1,0x18274
     792:	793d                	lsr_s	r1,r1
     794:	7930                	extw_s	r1,r1
     796:	b980                	bset_s	r1,r1,0
     798:	1d4a 9044           	sth	r1,[r13,-182]
     79c:	72cf 0001 8298      	mov_s	r2,0x18298
     7a2:	7a5d                	lsr_s	r2,r2
     7a4:	7a50                	extw_s	r2,r2
     7a6:	ba80                	bset_s	r2,r2,0
     7a8:	1d4c 9084           	sth	r2,[r13,-180]
     7ac:	73cf 0001 8660      	mov_s	r3,0x18660
     7b2:	7b7d                	lsr_s	r3,r3
     7b4:	7b70                	extw_s	r3,r3
     7b6:	bb80                	bset_s	r3,r3,0
     7b8:	1d4e 90c4           	sth	r3,[r13,-178]
     7bc:	240a 0f80 0001 8690 	mov	r4,0x18690
     7c4:	242f 0102           	lsr	r4,r4
     7c8:	242f 0108           	extw	r4,r4
     7cc:	244f 0004           	bset	r4,r4,0
     7d0:	1d50 9104           	sth	r4,[r13,-176]
     7d4:	250a 0f80 0001 8548 	mov	r5,0x18548
     7dc:	252f 0142           	lsr	r5,r5
     7e0:	252f 0148           	extw	r5,r5
     7e4:	254f 0005           	bset	r5,r5,0
     7e8:	1d54 9144           	sth	r5,[r13,-172]
     7ec:	260a 0f80 0001 8588 	mov	r6,0x18588
     7f4:	262f 0182           	lsr	r6,r6
     7f8:	262f 0188           	extw	r6,r6
     7fc:	264f 0006           	bset	r6,r6,0
     800:	1d56 9184           	sth	r6,[r13,-170]
     804:	270a 0f80 0001 85c0 	mov	r7,0x185c0
     80c:	272f 01c2           	lsr	r7,r7
     810:	272f 01c8           	extw	r7,r7
     814:	274f 0007           	bset	r7,r7,0
     818:	1d58 91c4           	sth	r7,[r13,-168]
     81c:	200a 1f80 0001 86a0 	mov	r8,0x186a0
     824:	202f 1202           	lsr	r8,r8
     828:	202f 1208           	extw	r8,r8
     82c:	204f 1008           	bset	r8,r8,0
     830:	1d5a 9204           	sth	r8,[r13,-166]
     834:	210a 1f80 0001 86e0 	mov	r9,0x186e0
     83c:	212f 1242           	lsr	r9,r9
     840:	212f 1248           	extw	r9,r9
     844:	214f 1009           	bset	r9,r9,0
     848:	1d5c 9244           	sth	r9,[r13,-164]
     84c:	220a 1f80 0001 8334 	mov	r10,0x18334
     854:	222f 1282           	lsr	r10,r10
     858:	222f 1288           	extw	r10,r10
     85c:	224f 100a           	bset	r10,r10,0
     860:	1d5e 9284           	sth	r10,[r13,-162]
     864:	230a 1f80 0001 8314 	mov	r11,0x18314
     86c:	232f 12c2           	lsr	r11,r11
     870:	232f 12c8           	extw	r11,r11
     874:	234f 100b           	bset	r11,r11,0
     878:	1d60 92c4           	sth	r11,[r13,-160]
     87c:	70cf 0001 8464      	mov_s	r0,0x18464
     882:	781d                	lsr_s	r0,r0
     884:	7810                	extw_s	r0,r0
     886:	b880                	bset_s	r0,r0,0
     888:	1d62 9004           	sth	r0,[r13,-158]
     88c:	71cf 0001 829c      	mov_s	r1,0x1829c
     892:	793d                	lsr_s	r1,r1
     894:	7930                	extw_s	r1,r1
     896:	b980                	bset_s	r1,r1,0
     898:	1d66 9044           	sth	r1,[r13,-154]
     89c:	72cf 0001 82c0      	mov_s	r2,0x182c0
     8a2:	7a5d                	lsr_s	r2,r2
     8a4:	7a50                	extw_s	r2,r2
     8a6:	ba80                	bset_s	r2,r2,0
     8a8:	1d68 9084           	sth	r2,[r13,-152]
     8ac:	73cf 0001 82e4      	mov_s	r3,0x182e4
     8b2:	7b7d                	lsr_s	r3,r3
     8b4:	7b70                	extw_s	r3,r3
     8b6:	bb80                	bset_s	r3,r3,0
     8b8:	1d6a 90c4           	sth	r3,[r13,-150]
     8bc:	240a 0f80 0001 87c0 	mov	r4,0x187c0
     8c4:	242f 0102           	lsr	r4,r4
     8c8:	242f 0108           	extw	r4,r4
     8cc:	244f 0004           	bset	r4,r4,0
     8d0:	1d7a 9104           	sth	r4,[r13,-134]
     8d4:	250a 0f80 0001 879c 	mov	r5,0x1879c
     8dc:	252f 0142           	lsr	r5,r5
     8e0:	252f 0148           	extw	r5,r5
     8e4:	254f 0005           	bset	r5,r5,0
     8e8:	1d7c 9144           	sth	r5,[r13,-132]
     8ec:	260a 0f80 0001 82e8 	mov	r6,0x182e8
     8f4:	262f 0182           	lsr	r6,r6
     8f8:	262f 0188           	extw	r6,r6
     8fc:	264f 0006           	bset	r6,r6,0
     900:	1d7e 9184           	sth	r6,[r13,-130]
     904:	270a 0f80 0001 8718 	mov	r7,0x18718
     90c:	272f 01c2           	lsr	r7,r7
     910:	272f 01c8           	extw	r7,r7
     914:	274f 0007           	bset	r7,r7,0
     918:	1d80 91c4           	sth	r7,[r13,-128]
     91c:	200a 1f80 0001 84b8 	mov	r8,0x184b8
     924:	202f 1202           	lsr	r8,r8
     928:	202f 1208           	extw	r8,r8
     92c:	204f 1008           	bset	r8,r8,0
     930:	1d82 9204           	sth	r8,[r13,-126]
     934:	210a 1f80 0001 8758 	mov	r9,0x18758
     93c:	212f 1242           	lsr	r9,r9
     940:	212f 1248           	extw	r9,r9
     944:	214f 1009           	bset	r9,r9,0
     948:	1d84 9244           	sth	r9,[r13,-124]
     94c:	220a 1f80 0001 8488 	mov	r10,0x18488
     954:	222f 1282           	lsr	r10,r10
     958:	222f 1288           	extw	r10,r10
     95c:	224f 100a           	bset	r10,r10,0
     960:	1d22 9284           	sth	r10,[r13,-222]
     964:	230a 1f80 0001 8798 	mov	r11,0x18798
     96c:	232f 12c2           	lsr	r11,r11
     970:	232f 12c8           	extw	r11,r11
     974:	234f 100b           	bset	r11,r11,0
     978:	1d1c 92c4           	sth	r11,[r13,-228]
     97c:	70cf 0001 cf9c      	mov_s	r0,0x1cf9c
     982:	781d                	lsr_s	r0,r0
     984:	7810                	extw_s	r0,r0
     986:	b880                	bset_s	r0,r0,0
     988:	260a 0f80 0080 0100 	mov	r6,0x800100
     990:	1ecc 0004           	sth	r0,[r6,204]
     994:	71cf 0001 cf84      	mov_s	r1,0x1cf84
     99a:	793d                	lsr_s	r1,r1
     99c:	7930                	extw_s	r1,r1
     99e:	b980                	bset_s	r1,r1,0
     9a0:	1d71 905c           	sth.as	r1,[r13,-143]
     9a4:	72cf 0001 a170      	mov_s	r2,0x1a170
     9aa:	7a5d                	lsr_s	r2,r2
     9ac:	7a50                	extw_s	r2,r2
     9ae:	ba80                	bset_s	r2,r2,0
     9b0:	1d0a 9084           	sth	r2,[r13,-246]
     9b4:	73cf 0001 9c2c      	mov_s	r3,0x19c2c
     9ba:	7b7d                	lsr_s	r3,r3
     9bc:	7b70                	extw_s	r3,r3
     9be:	bb80                	bset_s	r3,r3,0
     9c0:	1d1b 90dc           	sth.as	r3,[r13,-229]
     9c4:	240a 0f80 0001 a2e8 	mov	r4,0x1a2e8
     9cc:	242f 0102           	lsr	r4,r4
     9d0:	242f 0108           	extw	r4,r4
     9d4:	244f 0004           	bset	r4,r4,0
     9d8:	1efc 011c           	sth.as	r4,[r6,252]
     9dc:	250a 0f80 0001 13ec 	mov	r5,0x113ec
     9e4:	252f 0142           	lsr	r5,r5
     9e8:	252f 0148           	extw	r5,r5
     9ec:	254f 0005           	bset	r5,r5,0
     9f0:	1ee8 0144           	sth	r5,[r6,232]
     9f4:	270a 0f80 0001 0b7c 	mov	r7,0x10b7c
     9fc:	272f 01c2           	lsr	r7,r7
     a00:	272f 01c8           	extw	r7,r7
     a04:	274f 0007           	bset	r7,r7,0
     a08:	1ebe 01dc           	sth.as	r7,[r6,190]
     a0c:	200a 1f80 0001 0ba0 	mov	r8,0x10ba0
     a14:	202f 1202           	lsr	r8,r8
     a18:	202f 1208           	extw	r8,r8
     a1c:	204f 1008           	bset	r8,r8,0
     a20:	1ec1 021c           	sth.as	r8,[r6,193]
     a24:	210a 1f80 0001 8f74 	mov	r9,0x18f74
     a2c:	212f 1242           	lsr	r9,r9
     a30:	212f 1248           	extw	r9,r9
     a34:	214f 1009           	bset	r9,r9,0
     a38:	1d7d 925c           	sth.as	r9,[r13,-131]
     a3c:	220a 1f80 0001 0cd0 	mov	r10,0x10cd0
     a44:	222f 1282           	lsr	r10,r10
     a48:	222f 1288           	extw	r10,r10
     a4c:	224f 100a           	bset	r10,r10,0
     a50:	1d7b 929c           	sth.as	r10,[r13,-133]
     a54:	230a 1f80 0001 0d40 	mov	r11,0x10d40
     a5c:	232f 12c2           	lsr	r11,r11
     a60:	232f 12c8           	extw	r11,r11
     a64:	234f 100b           	bset	r11,r11,0
     a68:	1e24 02c4           	sth	r11,[r6,36]
     a6c:	70cf 0001 12d8      	mov_s	r0,0x112d8
     a72:	781d                	lsr_s	r0,r0
     a74:	7810                	extw_s	r0,r0
     a76:	b880                	bset_s	r0,r0,0
     a78:	1d06 901c           	sth.as	r0,[r13,-250]
     a7c:	71cf 0001 a5d4      	mov_s	r1,0x1a5d4
     a82:	793d                	lsr_s	r1,r1
     a84:	7930                	extw_s	r1,r1
     a86:	b980                	bset_s	r1,r1,0
     a88:	1d02 905c           	sth.as	r1,[r13,-254]
     a8c:	72cf 0001 a62c      	mov_s	r2,0x1a62c
     a92:	7a5d                	lsr_s	r2,r2
     a94:	7a50                	extw_s	r2,r2
     a96:	ba80                	bset_s	r2,r2,0
     a98:	1d0f 909c           	sth.as	r2,[r13,-241]
     a9c:	73cf 0001 0edc      	mov_s	r3,0x10edc
     aa2:	7b7d                	lsr_s	r3,r3
     aa4:	7b70                	extw_s	r3,r3
     aa6:	bb80                	bset_s	r3,r3,0
     aa8:	1d53 90dc           	sth.as	r3,[r13,-173]
     aac:	240a 0f80 0001 0dd8 	mov	r4,0x10dd8
     ab4:	242f 0102           	lsr	r4,r4
     ab8:	242f 0108           	extw	r4,r4
     abc:	244f 0004           	bset	r4,r4,0
     ac0:	1e88 011c           	sth.as	r4,[r6,136]
     ac4:	250a 0f80 0001 f770 	mov	r5,0x1f770
     acc:	252f 0142           	lsr	r5,r5
     ad0:	252f 0148           	extw	r5,r5
     ad4:	254f 0005           	bset	r5,r5,0
     ad8:	1eef 015c           	sth.as	r5,[r6,239]
     adc:	270a 0f80 0001 80f0 	mov	r7,0x180f0
     ae4:	272f 01c2           	lsr	r7,r7
     ae8:	272f 01c8           	extw	r7,r7
     aec:	274f 0007           	bset	r7,r7,0
     af0:	1e08 01c4           	sth	r7,[r6,8]
     af4:	200a 1f80 0001 9738 	mov	r8,0x19738
     afc:	202f 1202           	lsr	r8,r8
     b00:	202f 1208           	extw	r8,r8
     b04:	204f 1008           	bset	r8,r8,0
     b08:	1d03 921c           	sth.as	r8,[r13,-253]
     b0c:	210a 1f80 0001 8fd0 	mov	r9,0x18fd0
     b14:	212f 1242           	lsr	r9,r9
     b18:	212f 1248           	extw	r9,r9
     b1c:	214f 1009           	bset	r9,r9,0
     b20:	1ef2 025c           	sth.as	r9,[r6,242]
     b24:	220a 1f80 0001 e31c 	mov	r10,0x1e31c
     b2c:	222f 1282           	lsr	r10,r10
     b30:	222f 1288           	extw	r10,r10
     b34:	224f 100a           	bset	r10,r10,0
     b38:	1e8e 0284           	sth	r10,[r6,142]
     b3c:	230a 1f80 0001 e174 	mov	r11,0x1e174
     b44:	232f 12c2           	lsr	r11,r11
     b48:	232f 12c8           	extw	r11,r11
     b4c:	234f 100b           	bset	r11,r11,0
     b50:	1ea0 02c4           	sth	r11,[r6,160]
     b54:	70cf 0001 a000      	mov_s	r0,0x1a000
     b5a:	781d                	lsr_s	r0,r0
     b5c:	7810                	extw_s	r0,r0
     b5e:	b880                	bset_s	r0,r0,0
     b60:	1e92 0004           	sth	r0,[r6,146]
     b64:	71cf 0001 e5c4      	mov_s	r1,0x1e5c4
     b6a:	793d                	lsr_s	r1,r1
     b6c:	7930                	extw_s	r1,r1
     b6e:	b980                	bset_s	r1,r1,0
     b70:	1e8c 0044           	sth	r1,[r6,140]
     b74:	1404 301f           	ld	blink,[sp,4]
     b78:	c602                	ld_s	r14,[sp,0x8]
     b7a:	140c 340d           	ld.ab	r13,[sp,12]
     b7e:	7ee0                	j_s	[blink]
     b80:	1ce4 b6c8           	st.aw	fp,[sp,-28]
     b84:	1c04 37c0           	st	blink,[sp,4]
     b88:	c542                	st_s	r13,[sp,0x8]
     b8a:	c643                	st_s	r14,[sp,0xc]
     b8c:	c744                	st_s	r15,[sp,0x10]
     b8e:	1c14 3400           	st	r16,[sp,20]
     b92:	1c18 3440           	st	r17,[sp,24]
     b96:	230a 3700           	mov	fp,sp
     b9a:	7708                	mov_s	r15,r0
     b9c:	200a 2f80 0080 7a00 	mov	r16,0x807a00
     ba4:	1015 208e           	ldb	r14,[r16,21]
     ba8:	e601                	add_s	r14,r14,0x1
     baa:	bec2                	bmsk_s	r14,r14,0x2
     bac:	763a                	mov_s	r17,r14
     bae:	dd00                	mov_s	r13,0
     bb0:	1014 2083           	ldb	r3,[r16,20]
     bb4:	0e2d 10c0           	breq	r14,r3,44	;0xbe0
     bb8:	1015 2081           	ldb	r1,[r16,21]
     bbc:	6915                	asl_s	r0,r1,0x5
     bbe:	6038                	add_s	r0,r0,r1
     bc0:	75cf 0080 7804      	mov_s	r13,0x807804
     bc6:	7d14                	add1_s	r13,r13,r0
     bc8:	70a9                	mov_s	r0,r13
     bca:	71e9                	mov_s	r1,r15
     bcc:	228a 0041           	mov	r2,65
     bd0:	0842 fe4f           	bl	-14272	;0xffffd410
     bd4:	224a 0040           	mov	r2,0x1
     bd8:	1d41 1082           	stb	r2,[r13,65]
     bdc:	1815 2382           	stb	r14,[r16,21]
     be0:	240a 36c0           	mov	sp,fp
     be4:	1404 301f           	ld	blink,[sp,4]
     be8:	c502                	ld_s	r13,[sp,0x8]
     bea:	c603                	ld_s	r14,[sp,0xc]
     bec:	c704                	ld_s	r15,[sp,0x10]
     bee:	1414 3010           	ld	r16,[sp,20]
     bf2:	1418 3011           	ld	r17,[sp,24]
     bf6:	141c 341b           	ld.ab	fp,[sp,28]
     bfa:	7ee0                	j_s	[blink]
     bfc:	1cf4 b6c8           	st.aw	fp,[sp,-12]
     c00:	1c04 37c0           	st	blink,[sp,4]
     c04:	c542                	st_s	r13,[sp,0x8]
     c06:	230a 3700           	mov	fp,sp
     c0a:	7508                	mov_s	r13,r0
     c0c:	0d1a 0d00           	bl	107800	;0x1b124
     c10:	240a 36c0           	mov	sp,fp
     c14:	1404 301f           	ld	blink,[sp,4]
     c18:	c502                	ld_s	r13,[sp,0x8]
     c1a:	140c 341b           	ld.ab	fp,[sp,12]
     c1e:	7ee0                	j_s	[blink]
     c20:	1cf0 b348           	st.aw	r13,[sp,-16]
     c24:	1c04 37c0           	st	blink,[sp,4]
     c28:	c642                	st_s	r14,[sp,0x8]
     c2a:	c743                	st_s	r15,[sp,0xc]
     c2c:	76cf 0080 16cc      	mov_s	r14,0x8016cc
     c32:	8640                	ld_s	r2,[r14,0]
     c34:	258a 1004           	mov	r13,256
     c38:	220b 8340           	tst	r2,r13
     c3c:	f206                	beq_s	12	;0xc48
     c3e:	d800                	mov_s	r0,0
     c40:	0ffa fb4f           	bl	-36872	;0xffff7c38
     c44:	e080                	cmp_s	r0,0
     c46:	f27e                	beq_s	252	;0xd40
     c48:	083a fb8f           	bl	-36808	;0xffff7c80
     c4c:	8640                	ld_s	r2,[r14,0]
     c4e:	7aa4                	and_s	r2,r2,r13
     c50:	082d 0051           	brne	r0,0x1,44	;0xc7c
     c54:	ea0a                	breq_s	r2,0,20	;0xc68
     c56:	254a 0040           	mov	r5,0x1
     c5a:	1e00 7142 0080 1032 	stb	r5,[0x801032]
     c62:	d805                	mov_s	r0,0x5
     c64:	0bfe fe8f           	bl	-11268	;0xffffe060
     c68:	083e fb8f           	bl	-36804	;0xffff7ca4
     c6c:	082e fd0f           	bl	-24532	;0xffffac98
     c70:	b883                	bset_s	r0,r0,0x3
     c72:	780f                	extb_s	r0,r0
     c74:	088a fd0f           	bl	-24440	;0xffffacfc
     c78:	8640                	ld_s	r2,[r14,0]
     c7a:	7aa4                	and_s	r2,r2,r13
     c7c:	0a91 0010           	breq	r2,0,144	;0xd0c
     c80:	75cf 0080 1032      	mov_s	r13,0x801032
     c86:	8d60                	ldb_s	r3,[r13,0]
     c88:	0b11 0011           	brne	r3,0,16	;0xc98
     c8c:	086a ff0f           	bl	-8088	;0xffffecf4
     c90:	0819 0050           	breq	r0,0x1,24	;0xca8
     c94:	1500 1083           	ldb	r3,[r13]
     c98:	0ba9 0051           	brne	r3,0x1,168	;0xd40
     c9c:	204a 0140           	mov	r0,0x5
     ca0:	0c4e fe8f           	bl	-11188	;0xffffe0ec
     ca4:	089d 0051           	brne	r0,0x1,156	;0xd40
     ca8:	274a 1000           	mov	r15,0
     cac:	086e ff0f           	bl	-8084	;0xffffed18
     cb0:	244a 0200           	mov	r4,0x8
     cb4:	260a 1f80 0080 0484 	mov	r14,0x800484
     cbc:	1e00 1100           	st	r4,[r14]
     cc0:	08fa ff0f           	bl	-7944	;0xffffedb8
     cc4:	0821 0051           	brne	r0,0x1,32	;0xce4
     cc8:	200a 03c0           	mov	r0,r15
     ccc:	08b2 ff0f           	bl	-8016	;0xffffed7c
     cd0:	1600 7101 0080 043a 	ldh	r1,[0x80043a]
     cd8:	2104 0f81 0000 fffe 	and	r1,r1,0xfffe
     ce0:	793b                	asl_s	r1,r1
     ce2:	7940                	jl_s	[r1]
     ce4:	0c46 0480           	bl	37956	;0xa128
     ce8:	0811 0052           	brlt	r0,0x1,16	;0xcf8
     cec:	0fae fccf           	bl	-24660	;0xffffac98
     cf0:	b8a3                	bclr_s	r0,r0,0x3
     cf2:	780f                	extb_s	r0,r0
     cf4:	080a fd0f           	bl	-24568	;0xffffacfc
     cf8:	a6e0                	st_s	r15,[r14,0]
     cfa:	ade0                	stb_s	r15,[r13,0]
     cfc:	1404 301f           	ld	blink,[sp,4]
     d00:	c602                	ld_s	r14,[sp,0x8]
     d02:	c703                	ld_s	r15,[sp,0xc]
     d04:	1410 340d           	ld.ab	r13,[sp,16]
     d08:	2020 07c0           	j	[blink]
     d0c:	08ae ff0f           	bl	-8020	;0xffffedb8
     d10:	0831 0051           	brne	r0,0x1,48	;0xd40
     d14:	204a 0000           	mov	r0,0
     d18:	0866 ff0f           	bl	-8092	;0xffffed7c
     d1c:	1600 7101 0080 043a 	ldh	r1,[0x80043a]
     d24:	2104 0f81 0000 fffe 	and	r1,r1,0xfffe
     d2c:	793b                	asl_s	r1,r1
     d2e:	7940                	jl_s	[r1]
     d30:	1404 301f           	ld	blink,[sp,4]
     d34:	c602                	ld_s	r14,[sp,0x8]
     d36:	c703                	ld_s	r15,[sp,0xc]
     d38:	1410 340d           	ld.ab	r13,[sp,16]
     d3c:	2020 07c0           	j	[blink]
     d40:	1404 301f           	ld	blink,[sp,4]
     d44:	c602                	ld_s	r14,[sp,0x8]
     d46:	c703                	ld_s	r15,[sp,0xc]
     d48:	1410 340d           	ld.ab	r13,[sp,16]
     d4c:	7ee0                	j_s	[blink]
     d4e:	78e0                	nop_s
     d50:	1cf0 b6c8           	st.aw	fp,[sp,-16]
     d54:	1c04 37c0           	st	blink,[sp,4]
     d58:	c542                	st_s	r13,[sp,0x8]
     d5a:	c643                	st_s	r14,[sp,0xc]
     d5c:	230a 3700           	mov	fp,sp
     d60:	260a 1000           	mov	r14,r0
     d64:	083d 0051           	brne	r0,0x1,60	;0xda0
     d68:	0d36 f94f           	bl	-53964	;0xffff3a9c
     d6c:	e80a                	breq_s	r0,0,20	;0xd80
     d6e:	d909                	mov_s	r1,0x9
     d70:	75cf 0080 0484      	mov_s	r13,0x800484
     d76:	a520                	st_s	r1,[r13,0]
     d78:	0c76 f94f           	bl	-54156	;0xffff39ec
     d7c:	d800                	mov_s	r0,0
     d7e:	a500                	st_s	r0,[r13,0]
     d80:	0b82 fe0f           	bl	-15488	;0xffffd100
     d84:	204c 8000           	cmp	r0,0
     d88:	0ac0 fe02           	blne	-15680	;0xffffd048
     d8c:	204a 00c0           	mov	r0,0x3
     d90:	0b5e fe8f           	bl	-11428	;0xffffe0ec
     d94:	0819 0051           	brne	r0,0x1,24	;0xdac
     d98:	0ed2 0e80           	bl	120528	;0x1e468
     d9c:	0009 0000           	b	8	;0xda4
     da0:	0e0d 1011           	brne	r14,0,12	;0xdac
     da4:	204a 00c0           	mov	r0,0x3
     da8:	0aba fe8f           	bl	-11592	;0xffffe060
     dac:	240a 36c0           	mov	sp,fp
     db0:	1404 301f           	ld	blink,[sp,4]
     db4:	c502                	ld_s	r13,[sp,0x8]
     db6:	c603                	ld_s	r14,[sp,0xc]
     db8:	1410 341b           	ld.ab	fp,[sp,16]
     dbc:	7ee0                	j_s	[blink]
     dbe:	78e0                	nop_s
     dc0:	1cf4 b6c8           	st.aw	fp,[sp,-12]
     dc4:	c541                	st_s	r13,[sp,0x4]
     dc6:	c642                	st_s	r14,[sp,0x8]
     dc8:	230a 3700           	mov	fp,sp
     dcc:	76eb                	mov_s	r14,blink
     dce:	250a 9000           	mov.f	r13,r0
     dd2:	f416                	bne_s	44	;0xdfc
     dd4:	0bf2 fe0f           	bl	-15376	;0xffffd1c4
     dd8:	22aa 087f           	lr	r2,[-31]
     ddc:	0a69 021e           	bbit0	r2,0x8,104	;0xe44
     de0:	204a 0040           	mov	r0,0x1
     de4:	099e 0000           	bl	412	;0xf80
     de8:	d800                	mov_s	r0,0
     dea:	76fb                	mov_s	blink,r14
     dec:	240a 36c0           	mov	sp,fp
     df0:	c501                	ld_s	r13,[sp,0x4]
     df2:	c602                	ld_s	r14,[sp,0x8]
     df4:	140c 341b           	ld.ab	fp,[sp,12]
     df8:	2020 07c0           	j	[blink]
     dfc:	0d49 1051           	brne	r13,0x1,72	;0xe44
     e00:	087e 0440           	bl	34940	;0x967c
     e04:	1600 7000 0080 16cc 	ld	r0,[0x8016cc]
     e0c:	0815 069e           	bbit0	r0,0x1a,20	;0xe20
     e10:	0f66 fbcf           	bl	-32924	;0xffff8d74
     e14:	204c 8000           	cmp	r0,0
     e18:	20ca 0061           	mov.eq	r0,0x1
     e1c:	0e50 fbc1           	bleq	-33200	;0xffff8c6c
     e20:	214a 0000           	mov	r1,0
     e24:	1e00 7042 0080 16e4 	stb	r1,[0x8016e4]
     e2c:	0846 0440           	bl	34884	;0x9670
     e30:	d800                	mov_s	r0,0
     e32:	76fb                	mov_s	blink,r14
     e34:	240a 36c0           	mov	sp,fp
     e38:	c501                	ld_s	r13,[sp,0x4]
     e3a:	c602                	ld_s	r14,[sp,0x8]
     e3c:	140c 341b           	ld.ab	fp,[sp,12]
     e40:	2020 07c0           	j	[blink]
     e44:	d800                	mov_s	r0,0
     e46:	76fb                	mov_s	blink,r14
     e48:	240a 36c0           	mov	sp,fp
     e4c:	c501                	ld_s	r13,[sp,0x4]
     e4e:	c602                	ld_s	r14,[sp,0x8]
     e50:	140c 341b           	ld.ab	fp,[sp,12]
     e54:	7ee0                	j_s	[blink]
     e56:	78e0                	nop_s
     e58:	1cd4 b6c8           	st.aw	fp,[sp,-44]
     e5c:	1c04 37c0           	st	blink,[sp,4]
     e60:	c542                	st_s	r13,[sp,0x8]
     e62:	c643                	st_s	r14,[sp,0xc]
     e64:	c744                	st_s	r15,[sp,0x10]
     e66:	1c14 3400           	st	r16,[sp,20]
     e6a:	1c18 3440           	st	r17,[sp,24]
     e6e:	1c1c 3480           	st	r18,[sp,28]
     e72:	1c20 34c0           	st	r19,[sp,32]
     e76:	1c24 3500           	st	r20,[sp,36]
     e7a:	1c28 3540           	st	r21,[sp,40]
     e7e:	230a 3700           	mov	fp,sp
     e82:	c1a1                	sub_s	sp,sp,0x4
     e84:	709a                	mov_s	r20,r0
     e86:	717a                	mov_s	r19,r1
     e88:	224a 2000           	mov	r18,0
     e8c:	214a 2040           	mov	r17,0x1
     e90:	7708                	mov_s	r15,r0
     e92:	200a 2480           	mov	r16,r18
     e96:	714a                	mov_s	r1,r18
     e98:	da02                	mov_s	r2,0x2
     e9a:	db05                	mov_s	r3,0x5
     e9c:	240a 0440           	mov	r4,r17
     ea0:	0c16 fe0f           	bl	-15340	;0xffffd2b4
     ea4:	220a a000           	mov.f	r18,r0
     ea8:	f242                	beq_s	132	;0xf2c
     eaa:	2240 204d           	add	r13,r18,0x1
     eae:	7db0                	extw_s	r13,r13
     eb0:	2342 310e           	sub	r14,fp,0x4
     eb4:	70e9                	mov_s	r0,r15
     eb6:	d900                	mov_s	r1,0
     eb8:	da02                	mov_s	r2,0x2
     eba:	73a9                	mov_s	r3,r13
     ebc:	240a 0380           	mov	r4,r14
     ec0:	250a 0440           	mov	r5,r17
     ec4:	0e22 f9cf           	bl	-49632	;0xffff4ce4
     ec8:	0865 0f81 0100 0000 	brne	r0,0x1000000,100	;0xf2c
     ed0:	1409 2080           	ldb	r0,[r20,9]
     ed4:	2086 03fe           	bic	r0,r0,-113
     ed8:	b844                	asr_s	r0,r0,0x4
     eda:	e081                	cmp_s	r0,0x1
     edc:	25ca 2f21           	mov.eq	r21,0x3c
     ee0:	f208                	beq_s	16	;0xef0
     ee2:	e086                	cmp_s	r0,0x6
     ee4:	258a 2f01           	mov	r21,124
     ee8:	25ca 2f8b 0000 0078 	mov.lt	r21,0x78
     ef0:	13fc b001           	ld	r1,[fp,-4]
     ef4:	210b 8540           	tst	r1,r21
     ef8:	f218                	beq_s	48	;0xf28
     efa:	da01                	mov_s	r2,0x1
     efc:	1b00 2082           	stb	r2,[r19]
     f00:	13fc b001           	ld	r1,[fp,-4]
     f04:	2106 0541           	bic	r1,r1,r21
     f08:	1bfc b040           	st	r1,[fp,-4]
     f0c:	70e9                	mov_s	r0,r15
     f0e:	710a                	mov_s	r1,r16
     f10:	da02                	mov_s	r2,0x2
     f12:	73a9                	mov_s	r3,r13
     f14:	240a 0380           	mov	r4,r14
     f18:	254a 0040           	mov	r5,0x1
     f1c:	0ee6 f9cf           	bl	-49436	;0xffff4e00
     f20:	080d 0f81 0100 0000 	brne	r0,0x1000000,12	;0xf2c
     f28:	214a 2000           	mov	r17,0
     f2c:	702a                	mov_s	r0,r17
     f2e:	240a 36c0           	mov	sp,fp
     f32:	1404 301f           	ld	blink,[sp,4]
     f36:	c502                	ld_s	r13,[sp,0x8]
     f38:	c603                	ld_s	r14,[sp,0xc]
     f3a:	c704                	ld_s	r15,[sp,0x10]
     f3c:	1414 3010           	ld	r16,[sp,20]
     f40:	1418 3011           	ld	r17,[sp,24]
     f44:	141c 3012           	ld	r18,[sp,28]
     f48:	1420 3013           	ld	r19,[sp,32]
     f4c:	1424 3014           	ld	r20,[sp,36]
     f50:	1428 3015           	ld	r21,[sp,40]
     f54:	142c 341b           	ld.ab	fp,[sp,44]
     f58:	7ee0                	j_s	[blink]
     f5a:	78e0                	nop_s
     f5c:	1cf4 b6c8           	st.aw	fp,[sp,-12]
     f60:	1c04 37c0           	st	blink,[sp,4]
     f64:	c542                	st_s	r13,[sp,0x8]
     f66:	230a 3700           	mov	fp,sp
     f6a:	7508                	mov_s	r13,r0
     f6c:	0f7a 0cc0           	bl	106360	;0x1aee4
     f70:	240a 36c0           	mov	sp,fp
     f74:	1404 301f           	ld	blink,[sp,4]
     f78:	c502                	ld_s	r13,[sp,0x8]
     f7a:	140c 341b           	ld.ab	fp,[sp,12]
     f7e:	7ee0                	j_s	[blink]
     f80:	1cec b6c8           	st.aw	fp,[sp,-20]
     f84:	1c04 37c0           	st	blink,[sp,4]
     f88:	c542                	st_s	r13,[sp,0x8]
     f8a:	c643                	st_s	r14,[sp,0xc]
     f8c:	c744                	st_s	r15,[sp,0x10]
     f8e:	230a 3700           	mov	fp,sp
     f92:	c1a1                	sub_s	sp,sp,0x4
     f94:	7708                	mov_s	r15,r0
     f96:	de00                	mov_s	r14,0
     f98:	1bfc b380           	st	r14,[fp,-4]
     f9c:	71c9                	mov_s	r1,r14
     f9e:	f00a                	b_s	20	;0xfb0
     fa0:	2104 0f81 0002 0000 	and	r1,r1,0x20000
     fa8:	2941 0441           	lsr	r1,r1,0x11
     fac:	1bfc b040           	st	r1,[fp,-4]
     fb0:	e990                	brne_s	r1,0,32	;0xfd0
     fb2:	2342 3103           	sub	r3,fp,0x4
     fb6:	d800                	mov_s	r0,0
     fb8:	214a 0080           	mov	r1,0x2
     fbc:	228a 0484           	mov	r2,274
     fc0:	09a6 fa4f           	bl	-46684	;0xffff5964
     fc4:	13fc b001           	ld	r1,[fp,-4]
     fc8:	08e9 8010           	breq	r0,0,-24	;0xfb0
     fcc:	07d5 ffcf           	b	-44	;0xfa0
     fd0:	d800                	mov_s	r0,0
     fd2:	d902                	mov_s	r1,0x2
     fd4:	228a 0484           	mov	r2,274
     fd8:	230a 03c0           	mov	r3,r15
     fdc:	248a 0fc3           	mov	r4,255
     fe0:	0a3a fa4f           	bl	-46536	;0xffff5a18
     fe4:	250a 9000           	mov.f	r13,r0
     fe8:	f20e                	beq_s	28	;0x1004
     fea:	d800                	mov_s	r0,0
     fec:	d902                	mov_s	r1,0x2
     fee:	228a 0484           	mov	r2,274
     ff2:	db00                	mov_s	r3,0
     ff4:	bb90                	bset_s	r3,r3,0x10
     ff6:	7398                	mov_s	r4,r3
     ff8:	0a22 fa4f           	bl	-46560	;0xffff5a18
     ffc:	250a 9000           	mov.f	r13,r0
    1000:	0008 0002           	bne	8	;0x1008
    1004:	d800                	mov_s	r0,0
    1006:	f020                	b_s	64	;0x1044
    1008:	1bfc b380           	st	r14,[fp,-4]
    100c:	d900                	mov_s	r1,0
    100e:	f00a                	b_s	20	;0x1020
    1010:	2104 0f81 0002 0000 	and	r1,r1,0x20000
    1018:	2941 0441           	lsr	r1,r1,0x11
    101c:	1bfc b040           	st	r1,[fp,-4]
    1020:	e990                	brne_s	r1,0,32	;0x1040
    1022:	2342 3103           	sub	r3,fp,0x4
    1026:	d800                	mov_s	r0,0
    1028:	214a 0080           	mov	r1,0x2
    102c:	228a 0484           	mov	r2,274
    1030:	0936 fa4f           	bl	-46796	;0xffff5964
    1034:	13fc b001           	ld	r1,[fp,-4]
    1038:	08e9 8010           	breq	r0,0,-24	;0x1020
    103c:	07d5 ffcf           	b	-44	;0x1010
    1040:	204a 0040           	mov	r0,0x1
    1044:	240a 36c0           	mov	sp,fp
    1048:	1404 301f           	ld	blink,[sp,4]
    104c:	c502                	ld_s	r13,[sp,0x8]
    104e:	c603                	ld_s	r14,[sp,0xc]
    1050:	c704                	ld_s	r15,[sp,0x10]
    1052:	1414 341b           	ld.ab	fp,[sp,20]
    1056:	7ee0                	j_s	[blink]
    1058:	c1a1                	sub_s	sp,sp,0x4
    105a:	1ce4 b6c8           	st.aw	fp,[sp,-28]
    105e:	1c04 37c0           	st	blink,[sp,4]
    1062:	c542                	st_s	r13,[sp,0x8]
    1064:	c643                	st_s	r14,[sp,0xc]
    1066:	c744                	st_s	r15,[sp,0x10]
    1068:	1c14 3400           	st	r16,[sp,20]
    106c:	1c18 3440           	st	r17,[sp,24]
    1070:	230a 3700           	mov	fp,sp
    1074:	c1a1                	sub_s	sp,sp,0x4
    1076:	1b1c 30c0           	st	r3,[fp,28]
    107a:	701a                	mov_s	r16,r0
    107c:	7728                	mov_s	r15,r1
    107e:	7648                	mov_s	r14,r2
    1080:	214a 2000           	mov	r17,0
    1084:	1bfc b440           	st	r17,[fp,-4]
    1088:	2340 3704           	add	r4,fp,0x1c
    108c:	712a                	mov_s	r1,r17
    108e:	da02                	mov_s	r2,0x2
    1090:	238a 00c1           	mov	r3,67
    1094:	254a 0040           	mov	r5,0x1
    1098:	0d6a f9cf           	bl	-49816	;0xffff4e00
    109c:	08a5 0f81 0100 0000 	brne	r0,0x1000000,164	;0x1140
    10a4:	2640 1286           	add	r6,r14,0xa
    10a8:	270f 1185           	bset	r5,r15,r6
    10ac:	2505 0f85 40a0 0000 	or	r5,r5,0x40a00000
    10b4:	1bfc b140           	st	r5,[fp,-4]
    10b8:	2342 310d           	sub	r13,fp,0x4
    10bc:	700a                	mov_s	r0,r16
    10be:	712a                	mov_s	r1,r17
    10c0:	da02                	mov_s	r2,0x2
    10c2:	db44                	mov_s	r3,0x44
    10c4:	240a 0340           	mov	r4,r13
    10c8:	254a 0040           	mov	r5,0x1
    10cc:	0d36 f9cf           	bl	-49868	;0xffff4e00
    10d0:	0871 0f81 0100 0000 	brne	r0,0x1000000,112	;0x1140
    10d8:	204a 0500           	mov	r0,0x14
    10dc:	0ada fe8f           	bl	-11560	;0xffffe3b4
    10e0:	7108                	mov_s	r1,r0
    10e2:	702a                	mov_s	r0,r17
    10e4:	0f3a fe4f           	bl	-12488	;0xffffe01c
    10e8:	200a 0440           	mov	r0,r17
    10ec:	0f76 fe4f           	bl	-12428	;0xffffe060
    10f0:	700a                	mov_s	r0,r16
    10f2:	d900                	mov_s	r1,0
    10f4:	da02                	mov_s	r2,0x2
    10f6:	db44                	mov_s	r3,0x44
    10f8:	240a 0340           	mov	r4,r13
    10fc:	254a 0040           	mov	r5,0x1
    1100:	0be6 f9cf           	bl	-50204	;0xffff4ce4
    1104:	083d 0f81 0100 0000 	brne	r0,0x1000000,60	;0x1140
    110c:	13fc b007           	ld	r7,[fp,-4]
    1110:	0f15 079e           	bbit0	r7,0x1e,20	;0x1124
    1114:	0f11 07df           	bbit1	r7,0x1f,16	;0x1124
    1118:	204a 0000           	mov	r0,0
    111c:	0fd2 fe4f           	bl	-12336	;0xffffe0ec
    1120:	08d1 8010           	breq	r0,0,-48	;0x10f0
    1124:	204a 0000           	mov	r0,0
    1128:	0f82 fe4f           	bl	-12416	;0xffffe0a8
    112c:	204a 0000           	mov	r0,0
    1130:	0fbe fe4f           	bl	-12356	;0xffffe0ec
    1134:	080d 0050           	breq	r0,0x1,12	;0x1140
    1138:	13fc b007           	ld	r7,[fp,-4]
    113c:	0f09 07de           	bbit0	r7,0x1f,8	;0x1144
    1140:	d800                	mov_s	r0,0
    1142:	f004                	b_s	8	;0x1148
    1144:	204a 0040           	mov	r0,0x1
    1148:	240a 36c0           	mov	sp,fp
    114c:	1404 301f           	ld	blink,[sp,4]
    1150:	c502                	ld_s	r13,[sp,0x8]
    1152:	c603                	ld_s	r14,[sp,0xc]
    1154:	c704                	ld_s	r15,[sp,0x10]
    1156:	1414 3010           	ld	r16,[sp,20]
    115a:	1418 3011           	ld	r17,[sp,24]
    115e:	1420 341b           	ld.ab	fp,[sp,32]
    1162:	7ee0                	j_s	[blink]
    1164:	1cdc b6c8           	st.aw	fp,[sp,-36]
    1168:	1c04 37c0           	st	blink,[sp,4]
    116c:	c542                	st_s	r13,[sp,0x8]
    116e:	c643                	st_s	r14,[sp,0xc]
    1170:	c744                	st_s	r15,[sp,0x10]
    1172:	1c14 3400           	st	r16,[sp,20]
    1176:	1c18 3440           	st	r17,[sp,24]
    117a:	1c1c 3480           	st	r18,[sp,28]
    117e:	1c20 34c0           	st	r19,[sp,32]
    1182:	230a 3700           	mov	fp,sp
    1186:	c1a1                	sub_s	sp,sp,0x4
    1188:	701a                	mov_s	r16,r0
    118a:	7728                	mov_s	r15,r1
    118c:	7648                	mov_s	r14,r2
    118e:	dd00                	mov_s	r13,0
    1190:	757a                	mov_s	r19,r13
    1192:	753a                	mov_s	r17,r13
    1194:	755a                	mov_s	r18,r13
    1196:	1bfc b340           	st	r13,[fp,-4]
    119a:	71a9                	mov_s	r1,r13
    119c:	da02                	mov_s	r2,0x2
    119e:	db05                	mov_s	r3,0x5
    11a0:	244a 0180           	mov	r4,0x6
    11a4:	0912 fe0f           	bl	-16112	;0xffffd2b4
    11a8:	250a 9000           	mov.f	r13,r0
    11ac:	f266                	beq_s	204	;0x1278
    11ae:	278c 9fc3           	cmp	r15,255
    11b2:	f41a                	bne_s	52	;0x11e4
    11b4:	2500 1393           	add	r19,r13,r14
    11b8:	232f 24c8           	extw	r19,r19
    11bc:	706a                	mov_s	r0,r19
    11be:	240a 36c0           	mov	sp,fp
    11c2:	1404 301f           	ld	blink,[sp,4]
    11c6:	c502                	ld_s	r13,[sp,0x8]
    11c8:	c603                	ld_s	r14,[sp,0xc]
    11ca:	c704                	ld_s	r15,[sp,0x10]
    11cc:	1414 3010           	ld	r16,[sp,20]
    11d0:	1418 3011           	ld	r17,[sp,24]
    11d4:	141c 3012           	ld	r18,[sp,28]
    11d8:	1420 3013           	ld	r19,[sp,32]
    11dc:	1424 341b           	ld.ab	fp,[sp,36]
    11e0:	2020 07c0           	j	[blink]
    11e4:	6d62                	add_s	r3,r13,0x2
    11e6:	7b70                	extw_s	r3,r3
    11e8:	2342 3104           	sub	r4,fp,0x4
    11ec:	700a                	mov_s	r0,r16
    11ee:	d900                	mov_s	r1,0
    11f0:	224a 0080           	mov	r2,0x2
    11f4:	254a 0040           	mov	r5,0x1
    11f8:	0aee f9cf           	bl	-50452	;0xffff4ce4
    11fc:	087d 0f81 0100 0000 	brne	r0,0x1000000,124	;0x1278
    1204:	13fc b004           	ld	r4,[fp,-4]
    1208:	2404 0f91 0000 ff00 	and	r17,r4,0xff00
    1210:	2941 2211           	lsr	r17,r17,0x8
    1214:	2404 0f84 0fff 0000 	and	r4,r4,0xfff0000
    121c:	2c41 0412           	lsr	r18,r4,0x10
    1220:	2100 2345           	add	r5,r17,r13
    1224:	744a                	mov_s	r12,r18
    1226:	7759                	mov_s	r10,r15
    1228:	244a 7800           	mov	lp_count,0x20
    122c:	264a 0000           	mov	r6,0
    1230:	20a8 0280           	lp	20	;0x1244
    1234:	222f 9282           	lsr.f	r10,r10
    1238:	26c0 0305           	add.c	r6,r6,r12
    123c:	24c0 9302           	add.f.ne	r12,r12,r12
    1240:	24ca 7061           	mov.eq	lp_count,0x1
    1244:	2500 0185           	add	r5,r5,r6
    1248:	2500 0385           	add	r5,r5,r14
    124c:	232f 2148           	extw	r19,r5
    1250:	706a                	mov_s	r0,r19
    1252:	240a 36c0           	mov	sp,fp
    1256:	1404 301f           	ld	blink,[sp,4]
    125a:	c502                	ld_s	r13,[sp,0x8]
    125c:	c603                	ld_s	r14,[sp,0xc]
    125e:	c704                	ld_s	r15,[sp,0x10]
    1260:	1414 3010           	ld	r16,[sp,20]
    1264:	1418 3011           	ld	r17,[sp,24]
    1268:	141c 3012           	ld	r18,[sp,28]
    126c:	1420 3013           	ld	r19,[sp,32]
    1270:	1424 341b           	ld.ab	fp,[sp,36]
    1274:	2020 07c0           	j	[blink]
    1278:	706a                	mov_s	r0,r19
    127a:	240a 36c0           	mov	sp,fp
    127e:	1404 301f           	ld	blink,[sp,4]
    1282:	c502                	ld_s	r13,[sp,0x8]
    1284:	c603                	ld_s	r14,[sp,0xc]
    1286:	c704                	ld_s	r15,[sp,0x10]
    1288:	1414 3010           	ld	r16,[sp,20]
    128c:	1418 3011           	ld	r17,[sp,24]
    1290:	141c 3012           	ld	r18,[sp,28]
    1294:	1420 3013           	ld	r19,[sp,32]
    1298:	1424 341b           	ld.ab	fp,[sp,36]
    129c:	7ee0                	j_s	[blink]
    129e:	78e0                	nop_s
    12a0:	1cf4 b6c8           	st.aw	fp,[sp,-12]
    12a4:	1c04 37c0           	st	blink,[sp,4]
    12a8:	c542                	st_s	r13,[sp,0x8]
    12aa:	230a 3700           	mov	fp,sp
    12ae:	7508                	mov_s	r13,r0
    12b0:	08d2 ffcf           	bl	-1840	;0xb80
    12b4:	240a 36c0           	mov	sp,fp
    12b8:	1404 301f           	ld	blink,[sp,4]
    12bc:	c502                	ld_s	r13,[sp,0x8]
    12be:	140c 341b           	ld.ab	fp,[sp,12]
    12c2:	7ee0                	j_s	[blink]
    12c4:	1cf4 b6c8           	st.aw	fp,[sp,-12]
    12c8:	c541                	st_s	r13,[sp,0x4]
    12ca:	c642                	st_s	r14,[sp,0x8]
    12cc:	230a 3700           	mov	fp,sp
    12d0:	c1a2                	sub_s	sp,sp,0x8
    12d2:	76eb                	mov_s	r14,blink
    12d4:	1600 7005 0080 16cc 	ld	r5,[0x8016cc]
    12dc:	244a 0040           	mov	r4,0x1
    12e0:	0d19 051e           	bbit0	r5,0x14,24	;0x12f8
    12e4:	7088                	mov_s	r0,r4
    12e6:	76fb                	mov_s	blink,r14
    12e8:	240a 36c0           	mov	sp,fp
    12ec:	c501                	ld_s	r13,[sp,0x4]
    12ee:	c602                	ld_s	r14,[sp,0x8]
    12f0:	140c 341b           	ld.ab	fp,[sp,12]
    12f4:	2020 07c0           	j	[blink]
    12f8:	db00                	mov_s	r3,0
    12fa:	1bf8 b0c0           	st	r3,[fp,-8]
    12fe:	1bfc b0c0           	st	r3,[fp,-4]
    1302:	2342 3200           	sub	r0,fp,0x8
    1306:	218a 0445           	mov	r1,337
    130a:	7268                	mov_s	r2,r3
    130c:	230a 0100           	mov	r3,r4
    1310:	0d4a ffcf           	bl	-696	;0x1058
    1314:	e80e                	breq_s	r0,0,28	;0x1330
    1316:	d800                	mov_s	r0,0
    1318:	d902                	mov_s	r1,0x2
    131a:	1600 7102 0080 1764 	ldh	r2,[0x801764]
    1322:	236f 0043           	ror	r3,0x1
    1326:	7398                	mov_s	r4,r3
    1328:	0ef2 fa0f           	bl	-47376	;0xffff5a18
    132c:	0819 0011           	brne	r0,0,24	;0x1344
    1330:	d800                	mov_s	r0,0
    1332:	76fb                	mov_s	blink,r14
    1334:	240a 36c0           	mov	sp,fp
    1338:	c501                	ld_s	r13,[sp,0x4]
    133a:	c602                	ld_s	r14,[sp,0x8]
    133c:	140c 341b           	ld.ab	fp,[sp,12]
    1340:	2020 07c0           	j	[blink]
    1344:	70a9                	mov_s	r0,r13
    1346:	76fb                	mov_s	blink,r14
    1348:	240a 36c0           	mov	sp,fp
    134c:	c501                	ld_s	r13,[sp,0x4]
    134e:	c602                	ld_s	r14,[sp,0x8]
    1350:	140c 341b           	ld.ab	fp,[sp,12]
    1354:	7ee0                	j_s	[blink]
    1356:	78e0                	nop_s
    1358:	1cd4 b6c8           	st.aw	fp,[sp,-44]
    135c:	1c04 37c0           	st	blink,[sp,4]
    1360:	c542                	st_s	r13,[sp,0x8]
    1362:	c643                	st_s	r14,[sp,0xc]
    1364:	c744                	st_s	r15,[sp,0x10]
    1366:	1c14 3400           	st	r16,[sp,20]
    136a:	1c18 3440           	st	r17,[sp,24]
    136e:	1c1c 3480           	st	r18,[sp,28]
    1372:	1c20 34c0           	st	r19,[sp,32]
    1376:	1c24 3500           	st	r20,[sp,36]
    137a:	1c28 3540           	st	r21,[sp,40]
    137e:	230a 3700           	mov	fp,sp
    1382:	c1a1                	sub_s	sp,sp,0x4
    1384:	709a                	mov_s	r20,r0
    1386:	717a                	mov_s	r19,r1
    1388:	725a                	mov_s	r18,r2
    138a:	733a                	mov_s	r17,r3
    138c:	7688                	mov_s	r14,r4
    138e:	dd00                	mov_s	r13,0
    1390:	77a9                	mov_s	r15,r13
    1392:	2342 3110           	sub	r16,fp,0x4
    1396:	db01                	mov_s	r3,0x1
    1398:	240a 0400           	mov	r4,r16
    139c:	250a 00c0           	mov	r5,r3
    13a0:	0946 f9cf           	bl	-50876	;0xffff4ce4
    13a4:	0871 0f81 0100 0000 	brne	r0,0x1000000,112	;0x1414
    13ac:	13fc b08d           	ldb	r13,[fp,-4]
    13b0:	0d0d 1011           	brne	r13,0,12	;0x13bc
    13b4:	0061 0000           	b	96	;0x1414
    13b8:	0d5d 1010           	breq	r13,0,92	;0x1414
    13bc:	708a                	mov_s	r0,r20
    13be:	716a                	mov_s	r1,r19
    13c0:	724a                	mov_s	r2,r18
    13c2:	73a9                	mov_s	r3,r13
    13c4:	240a 0400           	mov	r4,r16
    13c8:	254a 0040           	mov	r5,0x1
    13cc:	091a f9cf           	bl	-50920	;0xffff4ce4
    13d0:	0845 0f81 0100 0000 	brne	r0,0x1000000,68	;0x1414
    13d8:	13fc b002           	ld	r2,[fp,-4]
    13dc:	2204 0f81 0000 ff00 	and	r1,r2,0xff00
    13e4:	b928                	lsr_s	r1,r1,0x8
    13e6:	0919 0441           	brne	r1,r17,24	;0x13fc
    13ea:	0929 2151           	brne	r17,0x5,40	;0x1410
    13ee:	2204 0f80 00ff 0000 	and	r0,r2,0xff0000
    13f6:	b830                	lsr_s	r0,r0,0x10
    13f8:	0e19 1000           	breq	r14,r0,24	;0x1410
    13fc:	252f 9087           	extb.f	r13,r2
    1400:	22cc 8f82 00be efed 	cmp.ne	r2,0xbeefed
    1408:	f5d8                	bne_s	-80	;0x13b8
    140a:	df00                	mov_s	r15,0
    140c:	0009 0000           	b	8	;0x1414
    1410:	270a 1340           	mov	r15,r13
    1414:	0a29 2051           	brne	r18,0x1,40	;0x143c
    1418:	708a                	mov_s	r0,r20
    141a:	716a                	mov_s	r1,r19
    141c:	724a                	mov_s	r2,r18
    141e:	254a 2000           	mov	r21,0
    1422:	73aa                	mov_s	r3,r21
    1424:	240a 0400           	mov	r4,r16
    1428:	254a 0040           	mov	r5,0x1
    142c:	08ba f9cf           	bl	-51016	;0xffff4ce4
    1430:	70d7 0100 0000      	cmp_s	r0,0x1000000
    1436:	20ca 0542           	mov.ne	r0,r21
    143a:	f404                	bne_s	8	;0x1440
    143c:	200a 03c0           	mov	r0,r15
    1440:	240a 36c0           	mov	sp,fp
    1444:	1404 301f           	ld	blink,[sp,4]
    1448:	c502                	ld_s	r13,[sp,0x8]
    144a:	c603                	ld_s	r14,[sp,0xc]
    144c:	c704                	ld_s	r15,[sp,0x10]
    144e:	1414 3010           	ld	r16,[sp,20]
    1452:	1418 3011           	ld	r17,[sp,24]
    1456:	141c 3012           	ld	r18,[sp,28]
    145a:	1420 3013           	ld	r19,[sp,32]
    145e:	1424 3014           	ld	r20,[sp,36]
    1462:	1428 3015           	ld	r21,[sp,40]
    1466:	142c 341b           	ld.ab	fp,[sp,44]
    146a:	7ee0                	j_s	[blink]
    146c:	1ce8 b6c8           	st.aw	fp,[sp,-24]
    1470:	1c04 37c0           	st	blink,[sp,4]
    1474:	c542                	st_s	r13,[sp,0x8]
    1476:	c643                	st_s	r14,[sp,0xc]
    1478:	c744                	st_s	r15,[sp,0x10]
    147a:	1c14 3400           	st	r16,[sp,20]
    147e:	230a 3700           	mov	fp,sp
    1482:	c1a2                	sub_s	sp,sp,0x8
    1484:	208a 1ac2           	mov	r8,171
    1488:	1bf8 b204           	sth	r8,[fp,-8]
    148c:	264a 1000           	mov	r14,0
    1490:	1bfc b380           	st	r14,[fp,-4]
    1494:	2342 3200           	sub	r0,fp,0x8
    1498:	0eb2 fecf           	bl	-8528	;0xfffff348
    149c:	e080                	cmp_s	r0,0
    149e:	f284                	beq_s	264	;0x15a4
    14a0:	0e0e fc4f           	bl	-29172	;0xffffa2ac
    14a4:	080d 0010           	breq	r0,0,12	;0x14b0
    14a8:	0e06 fc4f           	bl	-29180	;0xffffa2ac
    14ac:	08b5 0051           	brne	r0,0x1,180	;0x1560
    14b0:	200a 2f80 0080 1880 	mov	r16,0x801880
    14b8:	1000 2087           	ldb	r7,[r16]
    14bc:	0f35 0051           	brne	r7,0x1,52	;0x14f0
    14c0:	250a 0f80 0080 1884 	mov	r5,0x801884
    14c8:	1500 0004           	ld	r4,[r5]
    14cc:	2440 0044           	add	r4,r4,0x1
    14d0:	1d00 0100           	st	r4,[r5]
    14d4:	0ef2 fecf           	bl	-8464	;0xfffff3c4
    14d8:	240a 36c0           	mov	sp,fp
    14dc:	1404 301f           	ld	blink,[sp,4]
    14e0:	c502                	ld_s	r13,[sp,0x8]
    14e2:	c603                	ld_s	r14,[sp,0xc]
    14e4:	c704                	ld_s	r15,[sp,0x10]
    14e6:	1414 3010           	ld	r16,[sp,20]
    14ea:	1418 341b           	ld.ab	fp,[sp,24]
    14ee:	7ee0                	j_s	[blink]
    14f0:	0dc6 fecf           	bl	-8764	;0xfffff2b4
    14f4:	7608                	mov_s	r14,r0
    14f6:	72cf 0080 17f4      	mov_s	r2,0x8017f4
    14fc:	13f8 b101           	ldh	r1,[fp,-8]
    1500:	08a6 fd4f           	bl	-22364	;0xffffbda4
    1504:	e88e                	brne_s	r0,0,28	;0x1520
    1506:	264a 0040           	mov	r6,0x1
    150a:	1800 2182           	stb	r6,[r16]
    150e:	208a 0c3f           	mov	r0,-16
    1512:	d900                	mov_s	r1,0
    1514:	b98c                	bset_s	r1,r1,0xc
    1516:	7228                	mov_s	r2,r1
    1518:	0f72 fecf           	bl	-8336	;0xfffff488
    151c:	006d 0000           	b	108	;0x1588
    1520:	0e92 fa0f           	bl	-47472	;0xffff5bb0
    1524:	0865 0011           	brne	r0,0,100	;0x1588
    1528:	8ee0                	ldb_s	r15,[r14,0]
    152a:	2704 1f8d f000 0000 	and	r13,r15,0xf0000000
    1532:	bd3c                	lsr_s	r13,r13,0x1c
    1534:	e581                	cmp_s	r13,0x1
    1536:	25cc 90a2           	cmp.ne	r13,0x2
    153a:	25cc 91a2           	cmp.ne	r13,0x6
    153e:	25cc 91e2           	cmp.ne	r13,0x7
    1542:	f424                	bne_s	72	;0x1588
    1544:	200a 0380           	mov	r0,r14
    1548:	13f8 b081           	ldb	r1,[fp,-8]
    154c:	0f12 fa0f           	bl	-47344	;0xffff5c5c
    1550:	204c 8040           	cmp	r0,0x1
    1554:	20ca 0061           	mov.eq	r0,0x1
    1558:	0e80 fa01           	bleq	-47488	;0xffff5bd8
    155c:	002d 0000           	b	44	;0x1588
    1560:	0d56 fecf           	bl	-8876	;0xfffff2b4
    1564:	260a 1000           	mov	r14,r0
    1568:	2342 3100           	sub	r0,fp,0x4
    156c:	0a6a f9cf           	bl	-50584	;0xffff4fd4
    1570:	13fc b000           	ld	r0,[fp,-4]
    1574:	e80a                	breq_s	r0,0,20	;0x1588
    1576:	71c9                	mov_s	r1,r14
    1578:	13f8 b102           	ldh	r2,[fp,-8]
    157c:	0e46 fdcf           	bl	-16828	;0xffffd3c0
    1580:	13f8 b080           	ldb	r0,[fp,-8]
    1584:	0ac6 f9cf           	bl	-50492	;0xffff5048
    1588:	0e3e fecf           	bl	-8644	;0xfffff3c4
    158c:	240a 36c0           	mov	sp,fp
    1590:	1404 301f           	ld	blink,[sp,4]
    1594:	c502                	ld_s	r13,[sp,0x8]
    1596:	c603                	ld_s	r14,[sp,0xc]
    1598:	c704                	ld_s	r15,[sp,0x10]
    159a:	1414 3010           	ld	r16,[sp,20]
    159e:	1418 341b           	ld.ab	fp,[sp,24]
    15a2:	7ee0                	j_s	[blink]
    15a4:	240a 36c0           	mov	sp,fp
    15a8:	1404 301f           	ld	blink,[sp,4]
    15ac:	c502                	ld_s	r13,[sp,0x8]
    15ae:	c603                	ld_s	r14,[sp,0xc]
    15b0:	c704                	ld_s	r15,[sp,0x10]
    15b2:	1414 3010           	ld	r16,[sp,20]
    15b6:	1418 341b           	ld.ab	fp,[sp,24]
    15ba:	7ee0                	j_s	[blink]
