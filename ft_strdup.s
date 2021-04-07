global _ft_strdup
extern _malloc
extern _ft_strlen
extern _ft_strcpy

section .text
_ft_strdup:
	push rdi
	call _ft_strlen
	mov rdi, rax
	add rdi, 1
	call _malloc
	cmp rax, 0
	je .error
	pop rsi
	mov rdi, rax
	call _ft_strcpy
	ret

.error:
	pop rdi
	mov rax, 0
	ret
