/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 10:48:28 by jopires-          #+#    #+#             */
/*   Updated: 2024/11/09 20:15:53 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (!size)
		return (ft_strlen ((char *)src));
	if (dest != 0)
	{
		while (size -1 > i && src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest [i] = '\0';
	}
	return (ft_strlen ((char *)src));
}
/*int main()
{
	char copiar[]= "aeiou";
	char destino[5];
	ft_strlcpy(destino,copiar, 6);
	printf("%s",destino);
	
}*/
/*
           strncpy(char *dest, const char *src, size_t n)
           {
               size_t i;

               for (i = 0; i < n && src[i] != '\0'; i++)
                   dest[i] = src[i];
               for ( ; i < n; i++)
                   dest[i] = '\0';

               return dest;
           }
*/
