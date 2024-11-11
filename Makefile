NAME = libftprintf.a

SRCS = ft_putchar.c ft_type.c ft_putstr.c ft_putnum_un.c ft_putnum.c ft_strlen.c ft_puthex.c ft_printf.c
OBJS= $(SRCS:.c=.o)

CC = cc
CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(OBJS): $(SRCS)
	${CC} $(CFLAGS) -c $(SRCS)

clean:
	rm -f $(OBJS)
	
fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: clean fclean all re