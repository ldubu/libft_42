/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldubuche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 10:37:02 by ldubuche          #+#    #+#             */
/*   Updated: 2021/11/23 10:37:21 by ldubuche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strdup(const char *s1)
{
	int		len;
	int		i;
	char	*cpy;

	len = strlen(s1);
	cpy = NULL;
	cpy = (char *) malloc(sizeof(char) * len);
	if (cpy == NULL)
		return (NULL);
	i = 0;
	while (len-- > 0)
		cpy[i++] = *s1++;
	return (cpy);
}
