/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 14:48:13 by apeposhi          #+#    #+#             */
/*   Updated: 2023/02/16 09:23:43 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf.h"

static int	ft_case(va_list v_list, const char c)
{
	if (c == 'c')
		return (ft_putchar(va_arg(v_list, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(v_list, char *)));
	else if (c == 'p')
		return (ft_putptr(va_arg(v_list, unsigned long)));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(v_list, int)));
	else if (c == 'u')
		return (ft_putunsigned(va_arg(v_list, unsigned int)));
	else if (c == 'x' || c == 'X')
		return (ft_puthexa(va_arg(v_list, unsigned int), c));
	else if (c == '%')
		return (ft_putchar('%'));
	else
		return (-1);
}

int	ft_printf(const char *str, ...)
{
	va_list	v_list;
	int		count;
	int		i;

	i = 0;
	count = 0;
	va_start(v_list, str);
	while (str[i])
	{
		if (str[i] == '%' && ft_strchr("cspdiuxX%", str[i + 1]) != 0)
		{
			count += ft_case(v_list, str[i + 1]);
			i++;
		}
		else
			count += ft_putchar(str[i]);
		i++;
	}
	va_end(v_list);
	return (count);
}
