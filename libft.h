/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldubuche <laura.dubuche@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 10:37:02 by ldubuche          #+#    #+#             */
/*   Updated: 2022/01/17 14:43:28 by ldubuche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include "list.h"

# ifndef FD_MAX
#  define FD_MAX 256
# endif

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 100
# endif

void	ft_putnbr_fd(int n, int fd);
void	ft_bzero(void *s, size_t n);
void	ft_putstr_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	*ft_calloc(size_t count, size_t size);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	fill_retour(char **buffer, int len, char *retour);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_atoi(const char *str);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_strncmp(const char *s1, const char *s2, size_t n);

char	*ft_itoa(int n);
char	*free_str(char *str);
char	*get_next_line(int fd);
char	*ft_strdup(const char *s1);
char	**ft_split(char *s, char c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strjoin(char const *s1, char const*s2);
char	*r_value(char **buffer, char *current_value);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_buffjoin(char *buffer, char *str, char *to_free);
char	*fill_buffer(char *current_read, char *buffer, int fd);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

size_t	ft_strlen(const char *s);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

#endif
