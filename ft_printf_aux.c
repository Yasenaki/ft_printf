/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_aux.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:47:31 by jopires-          #+#    #+#             */
/*   Updated: 2024/11/25 16:28:07 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	aux_putunb_base(unsigned int nb, char *base, int out)
{
	int		bs;

	bs = ft_strlen(base);
	if ((nb / bs) > 0)
	{
		out = aux_putunb_base(nb / bs, base, out);
		out = aux_putunb_base(nb % bs, base, out);
	}
	else
		out += write(1, &base[nb], 1);
	return (out);
}

unsigned int	aux_plun_bs(unsigned long int nb, char *base, unsigned int out)
{
	int		bs;
	char	c;

	bs = ft_strlen(base);
	if ((nb / bs) > 0)
	{
		out = aux_plun_bs(nb / bs, base, out);
		out = aux_plun_bs(nb % bs, base, out);
	}
	else
		out += write(1, &base[nb], 1);
	return (out);
}

int	aux_putnbr(int nb, int out)
{
	char	c;

	if (nb == -2147483648)
	{
		out += write(1, "-2147483648", 11);
	}
	if (nb < 0)
	{
		out += write(1, '-', 1);
		nb *= -1;
	}
	if (nb > 9)
	{
		out = aux_putnbr(nb / 10, out);
		out = aux_putnbr(nb % 10, out);
	}
	else
	{
		c = nb + '0';
		out += write(1, &c, 1);
	}
	return (out);
}
