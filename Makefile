CC = 		gcc

CFLAGS =	-Wall -Werror -Wextra

NAME = 		libft.a

RM =		rm -rf

SRC =		ft_bzero.c\
			ft_isalnum.c\
			ft_isalpha.c\
			ft_isascii.c\
			ft_isdigit.c\
			ft_isprint.c\
			ft_memset.c\
			ft_putchar.c\
			ft_strlen.c\
			ft_memcpy.c\
			ft_memmove.c\
			ft_strlcpy.c\
			ft_strlcat.c\
			ft_toupper.c\
			ft_tolower.c\
			ft_strchr.c\
			ft_strrchr.c\
			ft_strncmp.c\
			ft_memchr.c\
			ft_strnstr.c\
			ft_atoi.c\
			ft_calloc.c\
			ft_strdup.c

OBJ =		$(SRC:.c=.o)

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}
			
$(NAME): 	$(OBJ)
			ar rc $(NAME) $(OBJ)

all: 		$(NAME)

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re: 		fclean all

.PHONY: 	clean fclean
