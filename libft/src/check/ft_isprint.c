/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:30:00 by apeposhi          #+#    #+#             */
/*   Updated: 2022/11/29 14:39:09 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** @brief Check if the character is between 32 and 126.
** Printable characters include the space (32).
*/
int	ft_isprint(int c)
{
	return (c >= 32 && c < 127);
}
