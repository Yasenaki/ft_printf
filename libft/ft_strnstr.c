/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 14:53:51 by jopires-          #+#    #+#             */
/*   Updated: 2024/11/06 20:53:49 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	x;
	size_t	i;

	i = 0;
	x = 0;
	if (!little[0])
		return ((char *)big);
	while (big[x] != '\0' && x < len)
	{
		i = 0;
		while (little[i] && big[x + i]
			&& big[x + i] == little[i] && x + i < len)
			++i;
		if (little[i] == '\0')
		{
			return ((char *)&big[x]);
		}
		++x;
	}
	return (NULL);
}

/*
int	main(void)
{
	char a[] = "testing my string";
	char b[] = "my";

	printf("%s", ft_strnstr(a, b, 15));
	return(0);
} */