/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmaca <matmaca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:51:21 by matmaca           #+#    #+#             */
/*   Updated: 2023/10/13 12:29:23 by matmaca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*source;
	char	*destination;

	i = 0;
	source = (char *)src;
	destination = (char *)dst;
	if (!destination && !source)
		return (0);
	while (i < n)
	{
		*(destination + i) = *(char *)(src + i);
		i++;
	}
	return (dst);
}
