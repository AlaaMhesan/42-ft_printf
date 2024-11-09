
SRCS = ft_putchar.c ft_type.c
OBJS= $(SRCS:.c=.o)


CC = cc
CFLAGS = -Wall -Werror -Wextra
NAME = libftprintf.a

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