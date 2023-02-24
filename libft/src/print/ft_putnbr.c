/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:46:42 by apeposhi          #+#    #+#             */
/*   Updated: 2023/01/13 16:41:49 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

static int	ft_val(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}

int	ft_putnbr(int n)
{
	char	str[13];
	int		is_neg;
	int		length;
	int		count;

	is_neg = (n < 0);
	if (n == 0)
		return (ft_putchar('0'));
	length = 0;
	while (n != 0)
	{
		str[length++] = '0' + ft_val(n % 10);
		n = (n / 10);
	}
	count = length;
	if (is_neg)
	{
		str[length] = '-';
		count++;
	}
	else if (length > 0)
		length--;
	while (length >= 0)
		write(1, &str[length--], 1);
	return (count);
}
