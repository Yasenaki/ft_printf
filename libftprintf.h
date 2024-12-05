/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:42:38 by jopires-          #+#    #+#             */
/*   Updated: 2024/12/05 09:52:14 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# define HEX_LOW_BASE "0123456789abcdef"
# define HEX_UP_BASE "0123456789ABCDEF"
# define FORMAT_SPECIFIERS "cspdiuxX%"

# include <stdarg.h>
# include "libft/libft.h"

char			ft_printf(const	char *format, ...);
unsigned int	aux_plun_bs(unsigned long int nb, char *base, unsigned int out);
int				aux_putnbr(int nb, int out);
int				aux_putunbr(unsigned int nb, int out);

#endif