NAME =	libasm.a

test:
	nasm -f macho64 ft_strlen.s
	gcc main.c ft_strlen.o

clean:
	rm -f a.out
	rm -f *.o
