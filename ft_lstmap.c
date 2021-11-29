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

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_l;
	t_list	*first;

	new_l = ft_lstnew(f(lst->content));
	if (new_l == NULL)
		return (NULL);
	first = new_l;
	lst = lst->next;
	while (lst)
	{
		new_l->next = ft_lstnew(f(lst->content));
		if (new_l == NULL)
		{
			ft_lstclear(&first, del);
			return (NULL);
		}
		new_l = new_l->next;
		lst = lst->next;
	}
	return (first);
}
