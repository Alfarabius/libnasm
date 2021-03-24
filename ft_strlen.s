global _ft_strlen

section .text
_ft_strlen:
	mov		eax, 0

.loop:
	cmp		byte [rdi], 0
	je		.return
	inc		eax
	inc		rdi
	jmp		.loop

.return:
	ret
