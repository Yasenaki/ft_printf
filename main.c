/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 15:17:25 by jopires-          #+#    #+#             */
/*   Updated: 2024/11/27 15:22:17 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	main(void)
{
	char	c;

	c = 'a';
	ft_printf("%c", &c);
	ft_printf("%s", &c);
	ft_printf("%p", &c);
	ft_printf("%d", &c);
	ft_printf("%i", &c);
	ft_printf("%u", &c);
	ft_printf("%x", &c);
	ft_printf("%X", &c);
	ft_printf("%%", &c);

	printf("%c", &c);
	printf("%s", &c);
	printf("%p", &c);
	printf("%d", &c);
	printf("%i", &c);
	printf("%u", &c);
	printf("%x", &c);
	printf("%X", &c);
	printf("%%", &c);

	ft_printf("skask", &c);
	printf("skask", &c);

	ft_printf("", &c);
	printf("", &c);

	ft_printf("skask");
	printf("skask");

	ft_printf("%", &c);
	printf("%", &c);

	ft_printf("%");
	printf("%");
}
