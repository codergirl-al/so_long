/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:29:00 by apeposhi          #+#    #+#             */
/*   Updated: 2023/01/09 14:50:25 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*
** @brief set a given amount of 0 to a memory address.
**
** @param mem:  the memory address
** @param size: the amount
*/
void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*thestr;

	thestr = s;
	i = 0;
	while (i < n)
	{
		thestr[i] = 0;
		i++;
	}
}
