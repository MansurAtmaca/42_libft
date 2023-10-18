/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmaca <matmaca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 18:35:22 by matmaca           #+#    #+#             */
/*   Updated: 2023/10/18 21:06:59 by matmaca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	a;

	i = 0;
	a = ft_strlen(src);
	if (!src)
		return (0);
	while (src[i] != '\0' && i < size)
	{
		dest[i] = src[i];
		i++;
	}
	if (size < a)
	{
		dest[size - 1] = '\0';
	}
	else if (size != 0)
	{
		dest[i] = '\0';
	}
	return (a);
}
