global _ft_strcmp

section .text
.negative:
	mov		eax, -1
	jmp		.return

.positive:
	mov		eax, 1
	jmp		.return

.value:
	cmp		eax, 0
	jg		.positive
	cmp		eax, 0
	jl		.negative
	jmp		.return

_ft_strcmp:
	xor		rax, rax
	xor		rdx, rdx

.loop:
	mov		al, byte [rdi]
	mov		dl, byte [rsi]
	sub		rax, rdx
	cmp		al, 0
	jne		.value
	cmp		byte [rdi], 0
	je		.value
	cmp		byte [rsi], 0
	je		.value
	inc		rsi
	inc		rdi
	jmp		.loop

.return:
	ret
