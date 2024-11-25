/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 19:27:42 by jopires-          #+#    #+#             */
/*   Updated: 2024/11/09 19:26:53 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t				x;
	unsigned char		*dup;
	size_t				checker;

	x = 0;
	checker = nmemb * size;
	dup = malloc(nmemb * size);
	if (!dup)
		return (NULL);
	if (nmemb == 0 || size == 0)
		return (dup);
	if (size && (checker / size) != nmemb)
		return (NULL);
	while (x < nmemb * size)
	{
		dup[x] = 0;
		x++;
	}
	return (dup);
}
/*int main()
{
	char *str = (char *)ft_calloc(30, 1);
    if (!str)
        write(1, "NULL", 4);
    else
	{
        write(1, str, 30);
		write(1,"a",1);
	}
}*/