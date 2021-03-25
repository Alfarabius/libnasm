global _ft_strcpy

section .text
_ft_strcpy:
	mov		rax, rdi
	push	rax

.loop:
	cmp		byte [rsi], 0
	je		.return
	mov		al, byte [rsi]
	mov		[rdi], al
	inc		rsi
	inc		rdi
	jmp		.loop

.return:
	mov		[rdi], byte 0
	pop		rax
	ret
