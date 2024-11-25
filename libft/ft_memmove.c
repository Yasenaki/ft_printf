/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 15:44:14 by jopires-          #+#    #+#             */
/*   Updated: 2024/11/09 20:06:16 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dt;
	unsigned char	*sr;

	dt = (unsigned char *)dest;
	sr = (unsigned char *)src;
	if (dt < sr)
		return (ft_memcpy(dest, src, n));
	while (n--)
	{
		dt[n] = sr[n];
	}
	return (dest);
}
