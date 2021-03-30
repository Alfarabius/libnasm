NAME	= libasm.a
HEAD	= libasm.h
OBJS_PATH	= ./objs
SRCS	= ft_strlen.s \
		ft_write.s \
		ft_read.s \
		ft_strcmp.s \
		ft_strcpy.s \
		ft_strdup.s
OBJS	= $(addprefix $(OBJS_PATH)/, $(SRCS:.s=.o))
ARCH	= ar rcs
CCOMP	= gcc
NASM	= nasm -f macho64
RM		= rm -f

.PHONY: all clean fclean re test

all:	$(OBJS_PATH) $(NAME)

$(OBJS_PATH):
	mkdir -p $@

$(OBJS_PATH)/%.o: ./%.s $(HEAD)
	@ echo "compile $@"
	@ $(NASM) $< -o $@

$(NAME):	$(OBJS)
	@ echo "add $? to $@"
	@ $(ARCH) $@ $?

test: re
	@ $(CCOMP) -I ./ main.c $(OBJS)
	@ make clean

clean:
	@ $(RM) $(OBJS)
	@ rm -rf $(OBJS_PATH)

fclean: clean
	@ $(RM) $(NAME)
	@ $(RM) a.out

re: fclean all
