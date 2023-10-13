/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmaca <matmaca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:12:36 by matmaca           #+#    #+#             */
/*   Updated: 2023/10/11 15:41:10 by matmaca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*d;

	i = 0;
	d = b;
	while (i < len)
	{
		*(d + i) = (unsigned char)c;
		i++;
	}
	return (b);
}
