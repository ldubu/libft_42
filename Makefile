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
			ft_strdup.c\
			ft_substr.c\
			ft_strjoin.c\
			ft_strtrim.c\
			ft_split.c\
			ft_itoa.c\
			ft_strmapi.c\
			ft_striteri.c\
			ft_putchar_fd.c\
			ft_putstr_fd.c\
			ft_putendl_fd.c\
			ft_putnbr_fd.c\
			ft_memcmp.c \
			get_next_line.c		

LIST =		list/ft_lstadd_back.c\
			list/ft_lstadd_front.c\
			list/ft_lstclear.c\
			list/ft_lstdelone.c\
			list/ft_lstiter.c\
			list/ft_lstlast.c\
			list/ft_lstmap.c\
			list/ft_lstnew.c\
			list/ft_lstsize.c\

OBJ =		$(SRC:.c=.o)

OBJL =		$(LIST:.c=.o)

.c.o:	libft.h list/list.h
	@${CC} ${CFLAGS} -c $< -o ${<:.c=.o}
			
$(NAME): 	$(OBJ)
	@ar rc $(NAME) $(OBJ)

list:		$(OBJ) $(OBJL)
	@ar rc $(NAME) $(OBJ) $(OBJL)

all: $(NAME) list printf

printf:
		make -C ft_printf/

clean:
	@$(RM) $(OBJ) $(OBJB)
	@make clean -C ft_printf/

fclean:		clean
	@$(RM) $(NAME)
	@make fclean -C ft_printf/ 

re: 	fclean all

.PHONY: 	clean fclean re list all