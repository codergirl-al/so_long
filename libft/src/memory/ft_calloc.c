/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:29:07 by apeposhi          #+#    #+#             */
/*   Updated: 2023/01/09 14:50:27 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*
** @brief Allocate memory for a given amount of byte
** with a certain size. The memory is initialized with
** all bytes filled with 0.
** 
** @details SIZE_MAX / size < count ensures multiplication
** won't cause overflow in the malloc. Size is also
** checked because it will cause the division to fail
** when size is 0.
**
** @param count: amount of memory chunk
** @param size:  size of the memory chunk
** @return the memory address with the corresponding size,
** null when malloc fails.
*/
void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	amount;

	amount = count * size;
	if (count && (amount) / count != size)
		return (NULL);
	ptr = malloc(amount);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, amount);
	return (ptr);
}
