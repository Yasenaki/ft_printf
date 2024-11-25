/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 11:59:22 by jopires-          #+#    #+#             */
/*   Updated: 2024/11/08 20:56:02 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		res;
	int		i;
	int		cnt;

	i = 0;
	res = 0;
	cnt = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			cnt *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * cnt);
}
/*int main()
{
	printf("%d\n",ft_atoi("---+--+1234ab567"));
	printf("%d\n",ft_atoi("\t-+2a147483647"));
	printf("%d\n",ft_atoi("\r+214a7483647"));
	printf("%d\n",ft_atoi("\v+214748a3647"));
	printf("%d\n",ft_atoi("       -2147483647"));
	printf("%d\n",ft_atoi("+----   --- 2147483647"));
	printf("%d\n",ft_atoi("sq;-----2147483647"));
	printf("%d\n",ft_atoi("  --- --2147483647"));
	printf("%d\n",ft_atoi("--b---2147483647"));
	
}*/
