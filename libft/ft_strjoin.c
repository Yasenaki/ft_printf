/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 16:53:36 by jopires-          #+#    #+#             */
/*   Updated: 2024/11/09 20:12:17 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*out;
	size_t	i;
	size_t	x;

	i = 0;
	x = 0;
	out = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!out)
		return (NULL);
	while (s1[i])
	{
		out[x] = s1[i];
		i++;
		x++;
	}
	i = 0;
	while (s2[i])
	{
		out[x] = s2[i];
		i++;
		x++;
	}
	out[x] = '\0';
	return (out);
}
/*
int	main(void)
{
	char *test;

	test = ft_strjoin("test ", "string");
	printf("%s\n", test);

	free(test);
}*/