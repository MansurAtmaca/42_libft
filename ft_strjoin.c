/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmaca <matmaca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 17:51:16 by matmaca           #+#    #+#             */
/*   Updated: 2023/10/27 22:25:48 by matmaca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	int		s1_len;
	int		s2_len;
	int		i;
	int		j;

	i = 0;
	j = 0;
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	newstr = (char *)malloc((sizeof(char) * (s1_len + s2_len)) + 1);
	if (!newstr)
		return (NULL);
	while (i < s1_len)
	{
		newstr[i] = s1[i];
		i ++;
	}
	while (j < s2_len)
		newstr[i++] = s2[j++];
	newstr[i] = '\0';
	return (newstr);
}
