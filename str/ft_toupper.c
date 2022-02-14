/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   __toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldubuche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:43:37 by ldubuche          #+#    #+#             */
/*   Updated: 2021/11/23 17:49:26 by ldubuche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	__toupper(int c)
{
	if (c >= 97 && c <= 122)
		c = c - 32;
	return (c);
}
