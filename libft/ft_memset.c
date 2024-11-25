/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:38:06 by jopires-          #+#    #+#             */
/*   Updated: 2024/11/09 20:03:18 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	int				i;
	unsigned char	*temp;

	i = 0;
	temp = (unsigned char *)s;
	while (n > (unsigned long)i)
	{
		temp[i] = (char)c;
		i++;
	}
	return (s);
}
//ver cast e fazer libft.h
/*int main() {
    // Test case 1: Fill an array with 'A's
    char buffer1[50];
    ft_memset(buffer1, 'A', sizeof(buffer1)); // Fill with 'A's

    printf("Test 1 - Expected: %s\n", "aaaaaaaa");
    printf("Test 1 - Result:   %s\n", buffer1);

    // Test case 2: Fill an array with zeros
    char buffer2[10];
    ft_memset(buffer2, 0, sizeof(buffer2)); // Fill with zeros

    printf("Test 2 - Expected: (empty string)\n");
    printf("Test 2 - Result:   '%s'\n", buffer2); // Should be an empty string

    // Test case 3: Fill part of an array
    char buffer3[20];
    ft_memset(buffer3, 'B', 5); // Fill first 5 bytes with 'B'

    printf("Test 3 - Expected: BBBBB\n");
    printf("Test 3 - Result:   %s\n", buffer3);

    // Test case 4: Fill with a character and check boundary
    char buffer4[20];
    ft_memset(buffer4, 'C', sizeof(buffer4)); // Fill with 'C's

    printf("Test 4 - Expected: CCCCCCCCCCCCCCCCCCCC\n");
    printf("Test 4 - Result:   %s\n", buffer4);

    return 0;
}*/