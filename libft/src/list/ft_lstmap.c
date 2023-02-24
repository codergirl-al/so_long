/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 14:44:53 by apeposhi          #+#    #+#             */
/*   Updated: 2023/01/09 14:51:02 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*
** @brief Map the content of a linked list to the content
** of a new linked list. A new linked list is created based on
** applying a function to every element of the given linked list.
**
** @param lst: the start of a linked list.
** @param f:   the function to be applied on every iteration to create
** new node on the new linked list.
** @param del: the function to clear teh new linked list if any malloc
** fails during the construction of the new linked list.
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first;
	t_list	*new;

	if (!f || !del)
		return (NULL);
	first = NULL;
	while (lst)
	{
		new = ft_lstnew((*f)(lst -> content));
		if (new == NULL)
		{
			while (first)
			{
				new = first -> next;
				(*del)(first -> content);
				free(first);
				first = new;
			}
		}
		ft_lstadd_back(&first, new);
		lst = lst->next;
	}
	return (first);
}
