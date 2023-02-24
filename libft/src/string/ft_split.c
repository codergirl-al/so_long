/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 03:43:56 by apeposhi          #+#    #+#             */
/*   Updated: 2023/01/09 14:51:07 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

static char	*dup_until_c(char *str, char c)
{
	size_t	len;
	char	*dst;

	len = 0;
	while (str[len] != c && str[len] != '\0')
		len++;
	dst = (char *)ft_calloc(sizeof(char), (len + 1));
	if (!dst)
	{
		free(dst);
		return (NULL);
	}
	ft_strlcpy(dst, str, (len + 1));
	return (dst);
}

static int	count_words(const char *str, char c)
{
	int	i;
	int	trigger;

	i = 0;
	trigger = 0;
	while (*str)
	{
		if (*str != c && trigger == 0)
		{
			trigger = 1;
			i++;
		}
		else if (*str == c)
			trigger = 0;
		str++;
	}
	return (i);
}

static char	*word_in_string(char *str, char c, int n)
{
	char	*dst;	
	int		num;
	int		i;

	num = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			i++;
		else
		{
			if (num == n)
			{
				dst = dup_until_c((str + i), c);
				if (dst == NULL)
					return (NULL);
			}
			while (str[i] != '\0' && str[i] != c)
				i++;
			num++;
		}
	}
	return (dst);
}

static	char	**free_array(char **ptr, int allocated)
{
	int	i;

	i = 0;
	while (ptr[i] != NULL && i < allocated)
	{
		free(ptr[i]);
		i++;
	}
	free(ptr);
	return (NULL);
}

/* 
** @brief Allocate memory for an array of string that are
** splitted from a string str by delimiter c.
** 
** @param str: the string to be splitted
** @param c: delimiter
** @return the splitted string in an array
*/
char	**ft_split(char const *s, char c)
{
	char	**split_arr;
	size_t	i;
	size_t	len;

	if (!s)
		return (NULL);
	i = 0;
	len = count_words(s, c);
	split_arr = (char **)ft_calloc(sizeof(split_arr), (len + 1));
	if (split_arr == NULL)
		return (NULL);
	while (i < len)
	{
		split_arr[i] = word_in_string((char *)s, c, i);
		if (split_arr[i] == NULL)
		{
			free_array(split_arr, len);
			return (NULL);
		}
		i++;
	}
	split_arr[i] = NULL;
	return (split_arr);
}
