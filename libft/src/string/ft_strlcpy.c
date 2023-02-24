/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:49:58 by apeposhi          #+#    #+#             */
/*   Updated: 2023/01/09 14:50:57 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*
** @brief Safe copy of the source string to the destination 
** string. It only copies up to a maximum amount of char.
**
** @param dest: the destination memory address to copy to.
** @param src:  a NULL-terminated string to be copied from.
** @param max_len: the maximum length of char to be copied.
** @return the length of the destination string after copying.
*/
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	n;

	n = 0;
	if (size > 0)
	{
		while (src[n] && n < (size - 1))
		{
			dst[n] = src[n];
			n++;
		}
		dst[n] = 0;
	}
	while (src[n])
		n++;
	return (n);
}
