/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmaca <matmaca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 18:38:43 by matmaca           #+#    #+#             */
/*   Updated: 2023/10/12 20:09:47 by matmaca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)

{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;
	size_t	j;

	i = 0;
	dst_len = ft_strlen(dst);
	j = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dst_len >= dstsize || dstsize == 0)
	{
		return (dstsize + src_len);
	}
	while (j < dstsize - 1 && src[i] != '\0')
	{
		dst[j ++] = src[i++];
	}
	dst[j] = '\0';
	return (dst_len + src_len);
}
