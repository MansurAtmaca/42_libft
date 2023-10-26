/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmaca <matmaca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:37:30 by matmaca           #+#    #+#             */
/*   Updated: 2023/10/26 13:39:51 by matmaca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static	int	find_digit(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		i++;
	if (n < 0)
		n *= -1;
	while (n != 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int			digit;
	char		*string;
	long		num;

	num = (long)n;
	digit = find_digit(num);
	if (num < 0)
	{
		num *= -1;
		digit += 1;
	}
	string = (char *)malloc(sizeof(char) * digit + 1);
	if (!string)
		return (NULL);
	string[digit] = '\0';
	while (digit > 0)
	{
		string[--digit] = (num % 10) + 48;
		num /= 10;
	}
	if (n < 0)
		string[0] = '-';
	return (string);
}
