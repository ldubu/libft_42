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

#include "../libft.h"

int main(void)
{
	t_list *elem1;
	t_list *elem2;
	t_list *elem3;

	elem1 = NULL;
	elem2 = NULL;
	elem3 = NULL;

	elem1 = ft_lstnew((void *) 0);
	elem1->next = elem2;
	elem2 = ft_lstnew((void *)'d');
	elem2->next = elem3;
	elem3 = ft_lstnew((void *)-5);
	printf("elem1 : %d", (int) elem1->content);
	printf("\nelem2 : %c", (char) elem2->content);
	printf("\nelem3 : %d", (int) elem3->content);
	return (0);
}