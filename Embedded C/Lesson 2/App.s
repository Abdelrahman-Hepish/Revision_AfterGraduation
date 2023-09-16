
App.o:     file format elf32-littlearm


Disassembly of section .text:

00000000 <main>:
   0:	e92d4800 	push	{fp, lr}
   4:	e28db004 	add	fp, sp, #4
   8:	e24dd008 	sub	sp, sp, #8
   c:	e59f3018 	ldr	r3, [pc, #24]	@ 2c <main+0x2c>
  10:	e50b3008 	str	r3, [fp, #-8]
  14:	e51b0008 	ldr	r0, [fp, #-8]
  18:	ebfffffe 	bl	0 <UartSendMessage>
  1c:	e1a00000 	nop			@ (mov r0, r0)
  20:	e24bd004 	sub	sp, fp, #4
  24:	e8bd4800 	pop	{fp, lr}
  28:	e12fff1e 	bx	lr
  2c:	00000000 	.word	0x00000000
