/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:48:53 by apeposhi          #+#    #+#             */
/*   Updated: 2023/01/09 14:50:30 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*
** @brief Locate the first occurance of a value in a byte string.
**
** @param mem:  the memory address
** @param val:  the value to look for, it is interpreted as an
** unsigned char during comparasion.
** @param max_size: the maximum size of byte to look for the value.
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(s + i) == (unsigned char)(c))
			return ((void *)(s + i));
		i++;
	}
	return (0);
}
