/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:34:58 by jopires-          #+#    #+#             */
/*   Updated: 2024/11/09 20:05:16 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	else if (start + len >= ft_strlen(s))
		len = ft_strlen(s) - start;
	str = malloc ((len + 1) * sizeof(char ));
	if (!str)
		return (NULL);
	while (i < len && len != 0)
	{
		str[i] = (char)s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
int main()
{
	char *test;

	test = ft_substr("test string", 5, 10);
	printf("%s\n", test);
	free(test);
	return (0);
} */