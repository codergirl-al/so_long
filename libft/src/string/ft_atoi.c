/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:28:46 by apeposhi          #+#    #+#             */
/*   Updated: 2023/01/09 14:51:06 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*
** @brief converts a string into an int.
**
** @details When the number overflow at the long long
** level, the number will became negative, it returns 
** 0 or -1 depending on the size. Overflow on the int
** level is handled by the casting at the end.
** 
** @param str: the string that represents a number,
** multiple spaces, follow by one '-' or '+', is allowed.
** @return the int after convertion
*/
int	ft_atoi(const char *str)
{
	long long int	val;
	int				i;
	int				isneg;

	i = 0;
	isneg = 1;
	val = 0;
	while (*str == ' ' || *str == '\n' || *str == '\t' || *str == '\v' || \
			*str == '\r' || *str == '\f')
		str++;
	if (*str == '-' || *str == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		val = (str[i] - '0') + (10 * val);
		i++;
		if ((isneg * val) > 4294967295)
			return (-1);
		if ((isneg * val) < -4294967295)
			return (0);
	}
	if (*str == '-')
		val = val * -1;
	return (val);
}
