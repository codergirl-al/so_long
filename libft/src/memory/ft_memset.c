/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:49:32 by apeposhi          #+#    #+#             */
/*   Updated: 2023/01/09 14:51:04 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*
** @brief Set a given amount of the same value
** to the given memory address.
**
** @param mem:  the memory address
** @param val:  the int value
** @param size: the amount of byte to write
** @return the original memory address
*/
void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;
	char	*thestring;

	thestring = str;
	i = 0;
	while (i < n)
	{
		thestring[i] = c;
		i++;
	}
	return (str);
}
