/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_aux.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:47:31 by jopires-          #+#    #+#             */
/*   Updated: 2024/12/02 20:15:38 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

unsigned int	aux_plun_bs(unsigned long int nb, char *base, unsigned int out)
{
	int		bs;
	char	holder;

	bs = ft_strlen(base);
	if ((nb / bs) > 0)
	{
		out = ft_putnbr_base(nb / bs, base, out);
		out = ft_putnbr_base(nb % bs, base, out);
	}
	else
	{
		holder = base[nb];
		out += write(1, &holder, 1);
	}
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

int	aux_putunbr(unsigned int nb, int out)
{
	char	c;

	if ((nb / 10) > 0)
	{
		out = aux_putunbr(nb / 10, out);
		out = aux_putunbr(nb % 10, out);
	}
	else
	{
		c = nb + '0';
		out += write(1, &c, 1);
	}
	return (out);
}