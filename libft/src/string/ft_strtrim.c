/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 14:46:28 by apeposhi          #+#    #+#             */
/*   Updated: 2023/01/09 14:50:55 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*
** @brief Trim the start and end of a string by removing chars that
** is in the given set. The trimmed string is stored in a new memory
** address. The original string is not touched at all.
**
** @param str: a NULL-terminated string to be trimmed.
** @param set: a char array represents a set of chars that needs
** to be trimmed.
** @return the new trimmed string
*/
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!set || !s1)
		return (NULL);
	while (ft_strchr(set, s1[i]) && s1[i])
		i++;
	j = ft_strlen(s1);
	while (ft_strchr(set, s1[j]) && j > i)
		j--;
	return (ft_substr(s1, i, j + 1 - i));
}
