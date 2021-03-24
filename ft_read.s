global _ft_read
extern ___error

section .text
_ft_read:
	mov eax, 0x2000003
	syscall
	jc ___error
	ret
