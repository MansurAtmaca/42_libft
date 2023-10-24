/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmaca <matmaca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:37:49 by matmaca           #+#    #+#             */
/*   Updated: 2023/10/24 18:34:10 by matmaca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_free(char **strs, int j)
{
	while (j-- > 0)
		free(strs[j]);
	free(strs);
	return (NULL);
}

int	word_counter(char const *s, char c)
{
	int	i;
	int	counter;
	int	j;

	i = 0;
	j = 0;
	counter = 0;
	while (s[i])
	{
		if (s[i] != c && j == 0)
		{
			counter++;
			j = 1;
		}
		else if (s[i] == c)
			j = 0;
		i++;
	}
	return (counter);
}

static	int	ft_size_word(char const *s, char c, int i)
{
	int	size;

	size = 0;
	while (s[i] != c && s[i])
	{
		size++;
		i++;
	}
	return (size);
}

char	**ft_split(char const *s, char c)
{
	char	**new_list;
	int		len;
	int		i;
	int		j;

	j = 0;
	i = 0;
	len = word_counter(s, c);
	new_list = (char **)malloc(sizeof(char *) * (len + 1));
	if (!new_list)
		return (NULL);
	while (j < len)
	{
		while (s[i] == c)
			i++;
		new_list[j] = ft_substr(s, i, ft_size_word(s, c, i));
		if (!(new_list[j]))
			return (ft_free(new_list, j));
		i += ft_size_word(s, c, i);
		j++;
	}
	new_list[j] = NULL;
	return (new_list);
}
