/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmaca <matmaca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:23:36 by matmaca           #+#    #+#             */
/*   Updated: 2023/10/26 13:43:13 by matmaca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*last_pos;

	i = 0;
	last_pos = 0;
	while (s[i])
	{
		if (s[i] == (char) c)
			last_pos = (char *)(s + i);
		i++;
	}
	if (s[i] == (char) c)
		return ((char *)(s + i));
	return (last_pos);
}
