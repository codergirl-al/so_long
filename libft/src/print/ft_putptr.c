/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 14:35:15 by apeposhi          #+#    #+#             */
/*   Updated: 2023/01/13 14:45:56 by apeposhi         ###   ########.fr       */
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

int	ft_putptr(unsigned long long int n)
{
	unsigned int				len;

	if (n == 0)
		return (ft_putstr("0x0"));
	len = 0;
	write(1, "0x", 2);
	len++;
	len += ft_decimal_to_hexa(n, 48, len);
	return (len);
}
