/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:49:28 by apeposhi          #+#    #+#             */
/*   Updated: 2023/01/09 14:51:04 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*
** @brief Copy a given size of memory from one byte string to
** another, assuming that memory overlapping IS possible.
** 
** @details Comparing the dest and src pointer to determine
** whether to copy bytes from the beginning or the end.
**
** @param dest: destination memory address to be copied to
** @param src:  source memory address to be copied from
** @param size: size of bytes to copy
** @return the destination memory address
*/
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int		i;

	if (!dest && !src && n)
		return (NULL);
	if (dest > src)
	{
		i = (int)n - 1;
		while (i >= 0)
		{
			*(unsigned char *)(dest + i) = *(unsigned char *)(src + i);
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < (int)n && src != NULL)
		{
			*(unsigned char *)(dest + i) = *(unsigned char *)(src + i);
			i++;
		}	
	}
	return (dest);
}
