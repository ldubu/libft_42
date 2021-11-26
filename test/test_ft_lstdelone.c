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

void del(void *elem)
{
	printf("efface %d", (int) elem);
}

int main(void)
{
	t_list	*elem1;
	t_list	*elem2;
	t_list	*elem3;
	t_list	*elem4;
	t_list	**prems;

	elem1 = NULL;
	elem2 = NULL;
	elem3 = NULL;
	elem4 = NULL;

	elem1 = (t_list*) malloc(sizeof(t_list));
	elem2 = (t_list*) malloc(sizeof(t_list));
	elem3 = (t_list*) malloc(sizeof(t_list));
	elem4 = (t_list*) malloc(sizeof(t_list));

	if (elem1 == NULL || elem2 == NULL|| elem3 == NULL || elem4 == NULL)
	{
		printf("error");
		exit(0);
	}
	prems = &elem1;
	elem1->content = (void *) 5;
	elem2->content = (void *) 6;
	elem3->content = (void *) 7;
	elem4->content = (void *) 8;

	elem1->next = elem2;
	elem2->next = elem3;
	elem3->next = elem4;
	elem4->next = NULL;

	ft_lstdelone(elem1, del);

	while ((*prems)->next != NULL)
	{
		printf("\n %d", (int) (*prems)->content);
		*prems = (*prems)->next;
	}
	printf("\n %d", (int) (*prems)->content);
	return(0);
}