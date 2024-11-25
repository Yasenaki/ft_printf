/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 16:51:46 by jopires-          #+#    #+#             */
/*   Updated: 2024/11/25 16:37:23 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

//format specifiers
int	aux_flag(int c, va_list *args)
{
	int	i;

	i = 0;
	if (c == 'c')
		
	if (c == 's')
	
	if (c == 'p')
	
	if (c == 'd' || c == 'i')
	
	if (c == 'u')
	
	if (c == 'x')
	
	if (c == 'X')
	
	if (c == '%')
	
	return (i);
}

char	ft_printf(const	char *format, ...)
{
	va_list	args;

	if (!format)
		return (-1);
	va_start(args, format);
	va_end(args);
}

//printf("%format",var)