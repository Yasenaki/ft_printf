/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 21:03:28 by jopires-          #+#    #+#             */
/*   Updated: 2024/11/07 16:22:27 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	char_conf(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*out;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	out = (char *)s1;
	while (char_conf(*out, set))
		out++;
	end = (ft_strlen(out) - 1);
	while (char_conf(out[end], set))
		end--;
	return (ft_substr (out, 0, ++end));
}
/*int	main (void)
{
	char	*tester;

	tester = ft_strtrim("1234567890", "123");
	printf("\n%s\n", tester);
	free(tester);
}*/	