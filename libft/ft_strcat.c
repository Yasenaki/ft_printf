/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 18:13:37 by jopires-          #+#    #+#             */
/*   Updated: 2024/10/29 14:13:15 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	while (src[i] != '\0')
	{
		dest[x + i] = src[i];
		i++;
	}
	dest[x + i] = '\0';
	return (dest);
}
/*int main()
{
	char a[20]="odqwqnodiwndoi";
	char b[100] = "! ";
	printf("%s",ft_strcat(b,a));
}*/
