/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 14:40:44 by apeposhi          #+#    #+#             */
/*   Updated: 2023/01/09 14:51:02 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*
** @brief Iterate on a linked list, apply a function to
** change the content of each node of the linked list. Since
** this function will not make a new linked list, the function
** can also be used to invoke side effects that depends purely
** on the content on each node.
**
** @param lst: the start of the linked list
** @param f:   the function to be applied during iteration
*/
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!f)
		return ;
	while (lst)
	{
		(*f)(lst -> content);
		lst = lst -> next;
	}
}
