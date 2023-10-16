/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmaca <matmaca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 18:35:39 by matmaca           #+#    #+#             */
/*   Updated: 2023/10/16 11:55:12 by matmaca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		a;
	size_t		i;
	size_t		s1_len;
	char		*str;

	i = 0;
	a = 0;
	s1_len = ft_strlen(s1);
	if (!s1 || !set)
		return (NULL);
	while (s1[i] && check (set, s1[i]))
		i ++;
	while (i < s1_len && check (set, s1[s1_len - 1]))
		s1_len --;
	str = (char *)malloc(sizeof(char) * (s1_len - i + 1));
	while (i < s1_len)
	{
		str[a] = s1[i];
		a ++;
		i ++;
	}
	if (!str)
		return (NULL);
	str[a] = '\0';
	return (str);
}
