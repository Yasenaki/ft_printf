/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 14:43:07 by jopires-          #+#    #+#             */
/*   Updated: 2024/11/09 20:13:18 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, char *src)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest [i] = '\0';
	return (dest);
}

char	*ft_strdup(const char *s)
{
	char	*dup;
	int		x;

	x = ft_strlen(s);
	dup = malloc((x + 1) * sizeof(char));
	if (! dup)
		return (0);
	ft_strcpy(dup, (char *)s);
	return (dup);
}
/*
int main()
{
	char *a = abcdefghil;
	write(1,ft_strdup(&a),10);
	free(a);
}*/
