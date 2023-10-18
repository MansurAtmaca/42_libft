/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmaca <matmaca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 17:21:10 by matmaca           #+#    #+#             */
/*   Updated: 2023/10/18 21:03:27 by matmaca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub_str;
	size_t			i;
	unsigned int	s_len;

	i = 0;
	s_len = ft_strlen(s);
	sub_str = (char *)malloc((len * sizeof(char)) + 1);
	if (!sub_str)
		return (NULL);
	if (start >= s_len)
		return (sub_str);
	while (i < len)
	{
		sub_str[i] = s[start];
		i ++;
		start ++;
	}
	sub_str[i] = '\0';
	return (sub_str);
}
