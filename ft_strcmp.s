global _ft_strcmp

section .text
_ft_strcmp:
	mov		rax, 0

.loop:
	mov		rax, [rdi]
	sub		rax, [rsi]
	cmp		rax, 0
	jne		.return
	inc		rdi
	inc		rsi
	cmp		byte [rdi], 0
	je		.return
	cmp		byte [rsi], 0
	je		.return
	jmp		.loop

.return:
	ret
