/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmaca <matmaca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 21:02:35 by matmaca           #+#    #+#             */
/*   Updated: 2023/10/12 22:42:23 by matmaca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h_len;
	size_t	n_len;
	size_t	i;
	size_t	j;

	h_len = ft_strlen(haystack);
	n_len = ft_strlen(needle);
	i = 0;
	if (n_len == 0 || haystack == needle)
		return ((char *)haystack);
	while (i < len && haystack[i] != '\0')
	{
		j = 0;
		while (j + i < len && haystack[i + j] != '\0' && needle[j] != '\0'
			&& haystack[i] == needle[j])
		{
			j++;
			if (j == n_len)
			{
				return ((char *)haystack + i);
			}
		}
		i ++;
	}
	return (NULL);
}