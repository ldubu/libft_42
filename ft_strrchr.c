/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldubuche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:20:54 by ldubuche          #+#    #+#             */
/*   Updated: 2021/11/23 18:31:22 by ldubuche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	a;
	int		b;

	a = (char)c;
	b = 0;
	while (s[b])
		b++;
	if (a == '\0')
		return ((char *)s + b);
	while (--b >= 0)
		if (s[b] == a)
			return ((char *)s + b);
	return (NULL);
}
