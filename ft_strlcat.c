/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldubuche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:24:17 by ldubuche          #+#    #+#             */
/*   Updated: 2021/11/23 17:40:14 by ldubuche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	size;

	i = 0;
	j = 0;
	size = 40;
	while (dst[i++] != '\0')
		size++;
	i = 0;
	while (dst[i] && i < dstsize)
		i++;
	while (src[j] && i < dstsize)
		dst[i++] = src[j++];
	while (src[j])
		j++;
	if (dstsize != 0)
		dst[i] = '\0';
	//if (size < dstsize)
	//	i = size;
	printf("\ni%lu, j%lu size%lu\n", i, j, size);
	return (j + i);
}
