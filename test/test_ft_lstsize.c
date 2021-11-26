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
	t_list	*elem1;
	t_list	*elem2;
	t_list	*elem3;
	t_list	**prems;
	int		size;

	elem1 = NULL;
	elem2 = NULL;
	elem3 = NULL;

	elem1 = (t_list*) malloc(sizeof(t_list));
	elem2 = (t_list*) malloc(sizeof(t_list));
	elem3 = (t_list*) malloc(sizeof(t_list));

	if (elem1 == NULL || elem2 == NULL|| elem3 == NULL)
	{
		printf("error");
		exit(0);
	}
	prems = &elem1;
	elem1->content = (void *) 5;
	elem2->content = (void *) 6;
	elem3->content = (void *) 7;
	
	elem1->next = elem2;
	elem2->next = elem3;
	elem3->next = NULL;
	
	size = ft_lstsize(*prems);

	while ((*prems)->next != NULL)
	{
		printf("\n %d", (int) (*prems)->content);
		*prems = (*prems)->next;
	}
	printf("\n %d", (int) (*prems)->content);
	printf("\n size = %d", size);
	return(0);
}
