global _ft_strcmp

section .text
_ft_strcmp:
	mov		rax, 0

.loop:
	cmp		byte [rdi], 0
	je		.return
	cmp		byte [rsi], 0
	je		.return
	mov		rax, [rdi]
	sub		rax, [rsi]
	cmp		rax, 0
	jne		.return
	inc		rdi
	inc		rsi
	jmp		.loop

.return:
	ret
