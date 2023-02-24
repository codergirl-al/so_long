/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:50:06 by apeposhi          #+#    #+#             */
/*   Updated: 2023/01/09 14:50:55 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*
** @brief Locate the first occurance of a string(needle) in
** a longer string(haystack).
**
** @param haystack: a NULL-terminated string to be searched in
** @param needle:   a NULL-terminated string to find in haystack
** @param max_len:  the maximum length to search in the haystack
** @return the pointer to the needle location
*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	while (i < len && haystack[i] != '\0')
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			k = i;
			while (j < ft_strlen(needle) && haystack[i] == needle[j] && i < len)
			{
				i++;
				j++;
			}
			if (j == ft_strlen(needle))
				return ((char *)(haystack + k));
			i = k;
		}
		i++;
	}
	return (NULL);
}
