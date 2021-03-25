NAME =	libasm.a

test:
	nasm -f macho64 ft_strlen.s
	nasm -f macho64 ft_write.s
	nasm -f macho64 ft_read.s
	nasm -f macho64 ft_strcmp.s
	nasm -f macho64 ft_strcpy.s
	gcc main.c *.o
	make clean

clean:
	rm -f *.o

fclean: clean
	rm -f a.out
