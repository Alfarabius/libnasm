global _ft_strlen

section .text
_ft_strlen:
	mov		rax, 0			;len = 0

.loop:
	cmp		byte [rdi], 0	;if (*s == 0)
	je		.return			;return (i)
	inc		rax				;len++
	inc		rdi				;s++
	jmp		.loop			;goto loop

.return:
	ret
