/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 11:24:01 by apeposhi          #+#    #+#             */
/*   Updated: 2023/01/09 14:51:02 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*
** @brief Creates a new node with the given content.
**
** @param content: The pointer to be stored in the content
** of the newly created node.
** @return a new node/a size-1 linked list, where lst.next is
** pointing to NULL.
*/
t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = NULL;
	new_node = (t_list *)malloc(sizeof(t_list));
	if (new_node)
	{
		new_node -> content = content;
		new_node -> next = NULL;
	}
	return (new_node);
}
