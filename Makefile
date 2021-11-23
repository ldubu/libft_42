CC=gcc
CFLAGS= -Wall -Werror -Wextra
NAME=a.out
SRC=ft_bzero.c, ft_isalnum.c, ft_isalpha.c, ft_isascii.c, ft_digit.c\
	ft_isprint, ft_memset.c, ft_putchar.c, ft_strlen.c
OBJ=(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	#ar rc $(NAME) $(OBJ)
	#ranlib $(NAME)
	$(CC) -o $@ $^ $(CFLAGS)
%.o: %.c
	$(CC) -o $@ -c $^ $(CFLAGS)

clean:
	rm -rf $(OBJ)

fclean:
	rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean
