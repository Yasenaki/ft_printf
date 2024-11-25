/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 18:01:00 by marvin            #+#    #+#             */
/*   Updated: 2024/11/09 19:31:50 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (!(c >= 32 && c <= 126))
		return (0);
	return (1);
}
/*int main()
{
	printf("%d",ft_str_is_printable("\r"));
	printf("%d",ft_str_is_printable("\t"));
	printf("%d",ft_str_is_printable("imjrgergerg"));
	printf("%d",ft_str_is_printable("ekewJoifjeWoifewoif121212"));
	printf("%d",ft_str_is_printable("kkefnow!&@^!@#$*()skndwnd94342"));
	printf("%d",ft_str_is_printable("dwd dowqdp dwq dqdwq "));
	printf("%d",ft_str_is_printable("d4! @#$ %^&* ()_ = =+{}[]'"));
	printf("%d",ft_str_is_printable("d4! @#$ %^&'\\;;./,<<>>?/<>>*-+/'"));
	printf("%d",ft_str_is_printable(""));
}*/
