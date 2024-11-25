/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 16:10:48 by jopires-          #+#    #+#             */
/*   Updated: 2024/11/09 20:04:34 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/*
int main() {
    // Test case 1: Fill an array with 'A's
    char buffer1[50];
    ft_bzero(buffer1, sizeof(buffer1)); // Fill with 'A's

    printf("Test 1 - Expected: %s\n", "AAAAAA");
    printf("Test 1 - Result:   %s\n", buffer1);

    // Test case 2: Fill an array with zeros
    char buffer2[10];
    ft_bzero(buffer2, sizeof(buffer2)); // Fill with zeros

    printf("Test 2 - Expected: (empty string)\n");
    printf("Test 2 - Result:   '%s'\n", buffer2); // Should be an empty string

    // Test case 3: Fill part of an array
    char buffer3[20];
    ft_bzero(buffer3, 5); // Fill first 5 bytes with 'B'

    printf("Test 3 - Expected: BBBBB\n");
    printf("Test 3 - Result:   %s\n", buffer3);

    // Test case 4: Fill with a character and check boundary
    char buffer4[20];
    ft_bzero(buffer4, sizeof(buffer4)); // Fill with 'C's

    printf("Test 4 - Expected: CCCCCCCCCCCCCCCCCCCC\n");
    printf("Test 4 - Result:   %s\n", buffer4);

    return 0;
}*/