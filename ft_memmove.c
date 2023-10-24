/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmaca <matmaca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:43:46 by matmaca           #+#    #+#             */
/*   Updated: 2023/10/24 16:01:59 by matmaca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*source;
	unsigned char	*destination;

	destination = (unsigned char *)dst;
	source = (unsigned char *)src;
	if (source == destination)
		return (destination);
	else if (destination > source)
	{
		while (len --)
			*(destination + len) = *(source + len);
	}
	else
		ft_memcpy(destination, source, len);
	return (destination);
}
