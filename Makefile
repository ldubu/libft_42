CC=gcc
CFLAGS= -Wall -Werror -Wextra
NAME=a.out
SRC=ft_bzero.c, ft_isalnum.c, ft_isalpha.c, ft_isascii.c, ft_digit.c\
	ft_isprint, ft_memset.c, ft_putchar.c, ft_strlen.c, ft_memcpy.c\
	ft_memmove.c, ft_strlcpy.c, ft_strlcat.c, ft_toupper.c, ft_tolower.c\
	ft_strchr.c, ft_strrchr.c, ft_strncmp.c, ft_memchr.c, ft_ strnstr.c\
	ft_atoi.c, ft_calloc.c, ft_strdup.c
OBJ=(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

$(OBJ): $(SRC)
	$(CC) -o $@ -c $^ $(CFLAGS)

clean:
	rm -rf $(OBJ)

fclean:
	rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean
