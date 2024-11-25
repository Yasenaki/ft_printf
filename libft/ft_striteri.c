/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 23:34:35 by jopires-          #+#    #+#             */
/*   Updated: 2024/11/08 23:58:33 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
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