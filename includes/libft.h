/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldubuche <laura.dubuche@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 10:37:02 by ldubuche          #+#    #+#             */
/*   Updated: 2022/02/14 11:08:21 by ldubuche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB__H
# define LIB__H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include "list.h"
# include "../ft_printf_42/includes/ft_printf.h"

# ifndef FD_MAX
#  define FD_MAX 256
# endif

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 100
# endif

void	__putnbr_fd(int n, int fd);
void	__bzero(void *s, size_t n);
void	__putstr_fd(char *s, int fd);
void	__putchar_fd(char c, int fd);
void	__putendl_fd(char *s, int fd);
void	*__calloc(size_t count, size_t size);
void	*__memset(void *b, int c, size_t len);
void	*__memchr(const void *s, int c, size_t n);
void	*__memcpy(void *dst, const void *src, size_t n);
void	__fill_retour(char **buffer, int len, char *retour);
void	*__memmove(void *dst, const void *src, size_t len);
void	__striteri(char *s, void (*f)(unsigned int, char*));

int		__isalnum(int c);
int		__isalpha(int c);
int		__isdigit(int c);
int		__isascii(int c);
int		__isprint(int c);
int		__tolower(int c);
int		__toupper(int c);
int		__atoi(const char *str);
int		__memcmp(const void *s1, const void *s2, size_t n);
int		__strncmp(const char *s1, const char *s2, size_t n);

char	*__itoa(int n);
char	*__free_str(char *str);
char	*__get_next_line(int fd);
char	*__strdup(const char *s1);
char	**__split(char *s, char c);
char	*__strchr(const char *s, int c);
char	*__strrchr(const char *s, int c);
char	*__strjoin(char const *s1, char const*s2);
char	*__r_value(char **buffer, char *current_value);
char	*__strtrim(char const *s1, char const *set);
char	*__buffjoin(char *buffer, char *str, char *to_free);
char	*__fill_buffer(char *current_read, char *buffer, int fd);
char	*__strmapi(char const *s, char (*f)(unsigned int, char));
char	*__substr(char const *s, unsigned int start, size_t len);
char	*__strnstr(const char *haystack, const char *needle, size_t len);

size_t	__strlen(const char *s);
size_t	__strlcat(char *dst, const char *src, size_t dstsize);
size_t	__strlcpy(char *dst, const char *src, size_t dstsize);

#endif
