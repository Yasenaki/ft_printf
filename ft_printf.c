/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 16:51:46 by jopires-          #+#    #+#             */
/*   Updated: 2024/12/05 10:03:32 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	aux_ptr(unsigned long int str)
{
	int	out;

	out = 0;
	if (!str)
		out += (write(1, NULL, 4));
	else
	{
		out += write (1, "0x", 2);
		out += aux_plun_bs(str, HEX_LOW_BASE, 0);
	}
	return (out);
}

int	aux_str(char *str)
{
	if (!str)
		return (write(1, NULL, 5));
	else
		return (write(1, str, ft_strlen(str)));
}

int	aux_flag_type(int c, va_list *args)
{
	int	out;

	out = 0;
	if (c == 'c')
		out += ft_putchar(va_arg(*args, int));
	if (c == 's')
		out += aux_str(va_arg (*args, char *));
	if (c == 'p')
		out += aux_ptr(va_arg (*args, long int));
	if (c == 'd' || c == 'i')
		out += aux_putnbr(va_arg (*args, int), 0);
	if (c == 'u')
		out += aux_putunbr(va_arg (*args, unsigned int), 0);
	if (c == 'x')
		out += aux_plun_bs(va_arg (*args, long int), HEX_LOW_BASE, 0);
	if (c == 'X')
		out += aux_plun_bs(va_arg (*args, long int), HEX_UP_BASE, 0);
	if (c == '%')
		out += write (1, "%", 1);
	return (out);
}

int	check_f(const char *haystack, const char needle)
{
	int	cnt;

	cnt = 0;
	while (haystack[cnt])
	{
		if (haystack[cnt] == needle)
			return (1);
		cnt ++;
	}
	return (0);
}

char	ft_printf(const	char *format, ...)
{
	int		cnt;
	int		out;
	va_list	args;

	if (!format)
		return (-1);
	va_start(args, format);
	cnt = 0;
	out = 0;
	while (format[cnt])
	{
		if (format[cnt] == '%' && check_f(FORMAT_SPECIFIERS, format[cnt +1]))
		{
			cnt ++;
			out += aux_flag_type(format[cnt], &args);
		}
		else
			out += write(1, &format[cnt], 1);
		cnt ++;
	}
	va_end(args);
	return (out);
}

//printf("%format",var)