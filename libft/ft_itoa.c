/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 22:57:55 by jopiout-          #+#    #+#             */
/*   Updated: 2024/11/08 23:05:39 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	to_digit(int b)
{
	size_t	i;
	size_t	buf;

	buf = b;
	i = 1;
	if (b < 0)
	{
		buf = -buf;
		i++;
	}
	while (buf / 10 > 0)
	{
		buf /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*out;
	size_t	i;
	long	holder_number;

	holder_number = n;
	i = to_digit(n);
	out = (char *)malloc(i + 1);
	if (!out)
		return (NULL);
	if (holder_number < 0)
	{
		out[0] = '-';
		holder_number = -holder_number;
	}
	if (holder_number == 0)
		out[0] = '0';
	out[i] = '\0';
	i--;
	while (i >= 0 && holder_number > 0)
	{
		out[i] = (holder_number % 10) + '0';
		holder_number /= 10;
		i--;
	}
	return (out);
}
