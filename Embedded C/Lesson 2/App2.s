
App.o:     file format elf32-littlearm


Disassembly of section .text:

00000000 <main>:
   0:	e92d4800 	push	{fp, lr}
   4:	e28db004 	add	fp, sp, #4
   8:	e24dd008 	sub	sp, sp, #8
   c:	e59f3018 	ldr	r3, [pc, #24]	@ 2c <main+0x2c>
  10:	e50b3008 	str	r3, [fp, #-8]
  14:	e51b0008 	ldr	r0, [fp, #-8]
  18:	ebfffffe 	bl	0 <UartSendMessage>  ########### bl 0 ??? why is 0 ? this a virtual address , physical will be after linking 
  1c:	e1a00000 	nop			@ (mov r0, r0)
  20:	e24bd004 	sub	sp, fp, #4
  24:	e8bd4800 	pop	{fp, lr}
  28:	e12fff1e 	bx	lr
  2c:	00000000 	andeq	r0, r0, r0

Disassembly of section .rodata:

00000000 <.rodata>:
   0:	6c6c6548 	cfstr64vs	mvdx6, [ip], #-288	@ 0xfffffee0
   4:	6241206f 	subvs	r2, r1, #111	@ 0x6f
   8:	Address 0x8 is out of bounds.


Disassembly of section .comment:

00000000 <.comment>:
   0:	43434700 	movtmi	r4, #14080	@ 0x3700
   4:	4128203a 			@ <UNDEFINED> instruction: 0x4128203a
   8:	47206d72 			@ <UNDEFINED> instruction: 0x47206d72
   c:	5420554e 	strtpl	r5, [r0], #-1358	@ 0xfffffab2
  10:	636c6f6f 	cmnvs	ip, #444	@ 0x1bc
  14:	6e696168 	powvsez	f6, f1, #0.0
  18:	2e323120 	rsfcssp	f3, f2, f0
  1c:	504d2e32 	subpl	r2, sp, r2, lsr lr
  20:	54424341 	strbpl	r4, [r2], #-833	@ 0xfffffcbf
  24:	65522d49 	ldrbvs	r2, [r2, #-3401]	@ 0xfffff2b7
  28:	2820316c 	stmdacs	r0!, {r2, r3, r5, r6, r8, ip, sp}
  2c:	6c697542 	cfstr64vs	mvdx7, [r9], #-264	@ 0xfffffef8
  30:	72612064 	rsbvc	r2, r1, #100	@ 0x64
  34:	32312d6d 	eorscc	r2, r1, #6976	@ 0x1b40
  38:	61706d2d 	cmnvs	r0, sp, lsr #26
  3c:	69746263 	ldmdbvs	r4!, {r0, r1, r5, r6, r9, sp, lr}^
  40:	2934332e 	ldmdbcs	r4!, {r1, r2, r3, r5, r8, r9, ip, sp}
  44:	32312029 	eorscc	r2, r1, #41	@ 0x29
  48:	312e322e 			@ <UNDEFINED> instruction: 0x312e322e
  4c:	32303220 	eorscc	r3, r0, #32, 4
  50:	31323033 	teqcc	r2, r3, lsr r0
  54:	Address 0x54 is out of bounds.


Disassembly of section .ARM.attributes:

00000000 <.ARM.attributes>:
   0:	00002941 	andeq	r2, r0, r1, asr #18
   4:	61656100 	cmnvs	r5, r0, lsl #2
   8:	01006962 	tsteq	r0, r2, ror #18
   c:	0000001f 	andeq	r0, r0, pc, lsl r0
  10:	00543405 	subseq	r3, r4, r5, lsl #8
  14:	01080206 	tsteq	r8, r6, lsl #4
  18:	04120109 	ldreq	r0, [r2], #-265	@ 0xfffffef7
  1c:	01150114 	tsteq	r5, r4, lsl r1
  20:	01180317 	tsteq	r8, r7, lsl r3
  24:	011a0119 	tsteq	sl, r9, lsl r1
  28:	Address 0x28 is out of bounds.

