/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:49:52 by apeposhi          #+#    #+#             */
/*   Updated: 2023/01/09 14:51:08 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/* 
** @brief Safe concatenate of the source string after the
** destination string. Length of the string after concatenation
** (including the NULL-terminator) must be specified to ensure
** safe concatenation. Concatenation WILL NOT happen if the
** destination memory address does not have enough space to store
** the entire string after concatenation.
**
** @param dest: a string to concatenated after.
** @param src:  a NULL-terminated string to be copied to dest.
** @param max_len: the maximum length of the destination string after
** concatenation (including the NULL-terminator).
** @return the length of the result array, the expected length of 
** the result array is returned if there is not enough space to
** concatenate.
*/
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	if (!dst && !dstsize)
		return (ft_strlen(src));
	i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (!dstsize)
		return (src_len);
	while (src[i] && dst_len + i < dstsize - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	if (dst_len + i < dstsize)
		dst[dst_len + i] = '\0';
	if (dst_len > dstsize)
		return (src_len + dstsize);
	return (src_len + dst_len);
}
