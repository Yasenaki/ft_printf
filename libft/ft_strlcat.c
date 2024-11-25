/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 17:58:48 by jopires-          #+#    #+#             */
/*   Updated: 2024/11/09 20:07:30 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dtl;
	size_t	srcl;

	i = 0;
	srcl = ft_strlen (src);
	dtl = ft_strlen (dest);
	if (dtl >= size)
		return (srcl + size);
	while (src[i] && dtl + i < size - 1)
	{
		dest[dtl + i] = src[i];
		i++;
	}
	dest[dtl + i] = 0;
	return (dtl + srcl);
}
/*
 int main()
{
	char a[] = "testing";
	char b[50] = "hello ";
	char b2[50] = "hello ";
	int aux = ft_strlcat(b,a,29);
    int aux2 = strlcat(b2,a,29);
	printf("!return: %d\n %s\n",aux , b);
	printf("@return: %d\n %s\n",aux2 , b2);
	return(0);
}*/