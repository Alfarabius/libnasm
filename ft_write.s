global _ft_write
extern ___error

section .text
_ft_write:
	mov eax, 0x2000004
	syscall
	jc ___error
	ret
