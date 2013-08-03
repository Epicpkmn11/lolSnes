
@ --- Register aliases --------------------------------------------------------

spcA 			.req r11
spcX			.req r10
spcY			.req r9
spcSP			.req r8
spcPC			.req r7		@ high hword: PC
spcPSW			.req r7		@ low hword: PSW
spcCycles		.req r6		@ SPC700 cycle count
opTable			.req r5		@ pointer to the opcode table in use
memoryMap		.req r4		@ pointer to the memory map table

@ --- Variables and whatever --------------------------------------------------

.equ flagC, 0x01
.equ flagZ, 0x02
.equ flagI, 0x04	@ interrupt enable (unused)
.equ flagH, 0x08	@ half carry
.equ flagB, 0x10	@ break (unused)
.equ flagP, 0x20	@ direct page
.equ flagV, 0x40
.equ flagN, 0x80

.equ flagNVZC, 0xC3
.equ flagNZ,   0x82
.equ flagNZC,  0x83
.equ flagNVZ,  0xC2