CC=gcc
CFLAGS= -Wall -Werror -Wextra
NAME=libft.a
SRC=
OBJ=(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

%.o: %.c
	$(CC) -o $@ -c $^ $(CFLAGS)

clean:
	rm -rf $(OBJ)

fclean:
	rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean
