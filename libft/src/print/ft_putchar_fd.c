/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 16:03:13 by apeposhi          #+#    #+#             */
/*   Updated: 2023/01/09 14:51:05 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*
** @brief Write a byte to the given file descripter.
**
** @param c:  the byte
** @param fd: the file descripter
*/
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
