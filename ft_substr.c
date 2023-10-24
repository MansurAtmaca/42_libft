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
static size_t check(size_t a, size_t b)
{
	if(a > b)
		return (b);
	return (a);
}

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *sub_str;
	size_t i;
	size_t s_len;

	i = 0;
	s_len = ft_strlen(s);
	len = check(s_len, len);
	if (start >= s_len)
	{
		return (ft_strdup(""));
	}
	sub_str = (char *)malloc((len + 1) * sizeof(char));
	if (!sub_str)
		return (NULL);
	while (i < len && s[i])
		sub_str[i++] = s[start++];
	sub_str[i] = '\0';
	return (sub_str);
}
