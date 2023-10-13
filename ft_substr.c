/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmaca <matmaca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 17:21:10 by matmaca           #+#    #+#             */
/*   Updated: 2023/10/13 17:49:42 by matmaca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sbstr;
	size_t	i;

	i = 0;
	sbstr = (char *)malloc((len * sizeof(char)) + 1);
	while (i < len)
	{
		sbstr[i] = s[start];
		i ++;
		start ++;
	}
	sbstr[i] = '\0';
	return (sbstr);
}
