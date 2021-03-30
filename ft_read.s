global _ft_read
extern ___error

section .text
_ft_read:
	mov		eax, 0x2000003
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
