.section .init
.global _start
_start:
	addi x0, x0, 0
	lui x2, 0x1
	addi x0, x0, 0
	addi x0, x0, 0
	jal main
	addi x0, x0, 0
	addi x0, x0, 0
	addi x0, x0, 0

