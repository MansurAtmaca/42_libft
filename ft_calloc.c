/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmaca <matmaca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 14:27:44 by matmaca           #+#    #+#             */
/*   Updated: 2023/10/24 17:21:19 by matmaca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*array;
	size_t	i;

	i = 0;
	array = (void *)malloc(count * size);
	if (!array)
		return (NULL);
	while (i < size * count)
	{
		*(char *)(array + i) = 0;
		i ++;
	}
	return (array);
}
