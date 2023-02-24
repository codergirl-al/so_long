/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:49:01 by apeposhi          #+#    #+#             */
/*   Updated: 2023/01/09 14:50:31 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*
** @brief Compare the first different byte found between two byte strings.
** Both byte strings are assumed to have the size of the third argument.
**
** @param m1: 1st byte string, interpreted as unsigned char during comparison.
** @param m2: 2nd byte string, interpreted as unsigned char during comparison.
** @param size: the size of both byte string
** @return 0 if both byte strings are identical in value,
** otherwise return the difference of the different byte, m1 - m2.
*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*str1;
	char	*str2;

	str1 = (char *)s1;
	str2 = (char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (str1[i] == str2[i] && i < n - 1)
		i++;
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
