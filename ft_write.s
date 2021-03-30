global _ft_write
extern ___error

section .text
_ft_write:
	mov		eax, 0x2000004
	syscall
	jc		.err
	ret

.err:
	push	rax
	call	___error
	pop		rdx
	mov		[rax], edx
	mov		rax, -1
	ret
