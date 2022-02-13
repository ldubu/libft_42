CC = 		gcc

CFLAGS =	-Wall -Werror -Wextra

NAME = 		libft.a

RM =		rm -rf

SRC =		mem/ft_bzero.c\
			str/ft_isalnum.c\
			str/ft_isalpha.c\
			str/ft_isascii.c\
			str/ft_isdigit.c\
			str/ft_isprint.c\
			mem/ft_memset.c\
			str/ft_strlen.c\
			mem/ft_memcpy.c\
			mem/ft_memmove.c\
			str/ft_strlcpy.c\
			str/ft_strlcat.c\
			str/ft_toupper.c\
			str/ft_tolower.c\
			str/ft_strchr.c\
			str/ft_strrchr.c\
			str/ft_strncmp.c\
			mem/ft_memchr.c\
			str/ft_strnstr.c\
			str/ft_atoi.c\
			mem/ft_calloc.c\
			str/ft_strdup.c\
			str/ft_substr.c\
			str/ft_strjoin.c\
			str/ft_strtrim.c\
			str/ft_split.c\
			str/ft_itoa.c\
			str/ft_strmapi.c\
			str/ft_striteri.c\
			print/ft_putchar_fd.c\
			print/ft_putstr_fd.c\
			print/ft_putendl_fd.c\
			print/ft_putnbr_fd.c\
			mem/ft_memcmp.c \
			gnl/get_next_line.c \
			gnl/free_str.c

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
			
$(NAME): 	$(OBJ) $(OBJL)
	@make -C ft_printf/
	@cp ft_printf/libftprintf.a ./
	@ar rc $(NAME) $(OBJ) $(OBJL) libftprintf.a
	
all: $(NAME) list printf

clean:
	@$(RM) $(OBJ) $(OBJL)
	@make clean -C ft_printf/

fclean:		clean
	@$(RM) $(NAME) libftprintf.a
	@make fclean -C ft_printf/

re: 	fclean all

.PHONY: 	clean fclean re list all