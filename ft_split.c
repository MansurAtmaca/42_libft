/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmaca <matmaca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:16:06 by matmaca           #+#    #+#             */
/*   Updated: 2023/10/16 14:53:46 by matmaca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	word_counter(char const *s, char c)
{
	int	i;
	int	counter;
	int	j;

	i = 0;
	counter = 0;
	while (s[i])
	{
		if (s[i] != c && j == 0)
		{
			counter ++;
			j = 1;
		}
		else if (s[i] == c)
			j = 0;
		i ++;
	}
	return (counter);
}

char	*find_words(char const *s, char c)
{
	int		i;
	char	*new;

	i = 0;

	while (s[i] != c)
	{
		i ++;
	}
	new = (char *)malloc(sizeof(char) * i + 1);
	i = 0;
	while (s[i] != c && s[i] != '\0')
	{
		new[i] = s[i];
		i ++;
	}
	new [i] = '\0';
	return (new);


}

char	**ft_split(char const *s, char c)
{
	char	**new_list;
	int		len;
	int		i;

	if (!s)
		return (NULL);


	while (*s && *s == c)
		s++;
	len = word_counter(s, c);
	new_list = (char **)malloc(sizeof(char *) * len);
	if (!s || !new_list)
		return (NULL);
	i = 0;
	while (i < len)
	{
		new_list[i] = find_words(s, c);
		i ++;
	}
	return (new_list);
}
