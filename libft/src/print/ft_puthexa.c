/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 10:28:41 by apeposhi          #+#    #+#             */
/*   Updated: 2023/01/13 16:40:34 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

static int	ft_decimal_to_hexa(unsigned long long int n, int base, int len)
{
	unsigned long long int	temp;
	unsigned long long int	remainders[16];
	int						i;

	i = 0;
	while (n != 0)
	{
		temp = n;
		n /= 16;
		remainders[i] = temp % 16 + '0';
		i++;
	}
	i--;
	while (i >= 0)
	{
		if (remainders[i] > 57)
			ft_putchar(remainders[i] - 9 + base);
		else
			ft_putchar(remainders[i]);
		len++;
		i--;
	}
	return (len);
}

int	ft_puthexa(unsigned long long int n, char format)
{
	unsigned int				len;

	len = 0;
	if (n == 0)
		return (ft_putchar('0'));
	if (format == 'X')
		len = ft_decimal_to_hexa(n, 16, len);
	else
		len = ft_decimal_to_hexa(n, 48, len);
	return (len);
}
