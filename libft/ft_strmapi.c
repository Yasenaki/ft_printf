/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 23:06:49 by jopires-          #+#    #+#             */
/*   Updated: 2024/11/08 23:34:55 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*out;
	size_t	i;

	out = malloc(ft_strlen(s)+ 1);
	if (!out)
		return (NULL);
	i = 0;
	while (s[i])
	{
		out[i] = f(i, s[i]);
		i++;
	}
	out[i] = '\0';
	return (out);
}
/*
int main()
{
	char	*str1 = "Outra Vez Arroz";
	char	*result1 = ft_strmapi(str1,ft_toupper);
	printf("teste 1: %s\nexpected: OUTRA VEZ ARROZ",str1);
	printf("teste 1: %s\nexpected: OUTRA VEZ ARROZ",result1);
	
	char	*str2 = "Outra Vez Arroz";
	char	*result2 = ft_strmapi(str2,ft_tolower);
	printf("teste 2: %s\nexpected: outra vez arroz",result2);
}*/