/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:49:36 by apeposhi          #+#    #+#             */
/*   Updated: 2022/11/29 14:42:27 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** @brief Locate the first given char in a given string.
**
** @param str: a NULL-terminated string
** @param c:   the value to find in the string, it is interpreted
** as char during search.
** @return the memory address of the value in the string
*/
char	*ft_strchr(const char *s, int c)
{
	int				i;
	char			*ptr;
	unsigned char	f;

	ptr = (char *)s;
	i = 0;
	f = (unsigned char) c;
	while (s[i] != '\0')
	{
		if (s[i] == f)
			return (&(ptr[i]));
		i++;
	}
	if (f == '\0')
		return (&(ptr[i]));
	return (0);
}
