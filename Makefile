NAME =	libasm.a

test:
	nasm -f elf64 ft_strlen.s
	gcc main.c -c
	gcc main.o ft_strlen.o
