/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmaca <matmaca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 14:27:44 by matmaca           #+#    #+#             */
/*   Updated: 2023/10/13 15:37:40 by matmaca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*array;
	char	*d;
	size_t	i;

	i = 0;
	if (count == 0 || size == 0)
		return (NULL);
	array = malloc(count * size);
	if (!array)
		return (NULL);
	d = array;
	while (i < size * count)
	{
		*(char *)(d + i) = 0;
		i ++;
	}
	return (array);
}
