/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 16:29:37 by jopires-          #+#    #+#             */
/*   Updated: 2024/11/09 20:21:00 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int				i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	i = 0;
	while (i < (int)n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h> // for comparison
void test_ft_memcmp() {
    // Test Case 1: Equal memory blocks
    char str1[] = "Hello";
    char str2[] = "Hello";
    int result1 = ft_memcmp(str1, str2, 5);
    printf("Test 1 - Expected: %d, Got: %d\n", memcmp(str1, str2, 5),result1);

    // Test Case 2: Different memory blocks
    char str3[] = "Hello";
    char str4[] = "Hella";
    int result2 = ft_memcmp(str3, str4, 5);
    printf("Test 2 - Expected: %d, Got: %d\n",memcmp(str3, str4, 5), result2);

    // Test Case 3: Compare first differing byte
    char str5[] = "abcdef";
    char str6[] = "abcXef";
    int result3 = ft_memcmp(str5, str6, 6);
    printf("Test 3 - Expected: %d, Got: %d\n", memcmp(str5, str6, 6),result3);

    // Test Case 4: Compare different lengths
    char str7[] = "abc";
    char str8[] = "abcd";
    int result4 = ft_memcmp(str7, str8, 3);
    printf("Test 4 - Expected:  %d, Got: %d\n", memcmp(str7, str8, 3),result4);

    // Test Case 5: Empty blocks
    char str9[] = "";
    char str10[] = "";
    int result5 = ft_memcmp(str9, str10, 0);
    printf("Test 5 - Expected:  %d, Got: %d\n", memcmp(str9, str10, 0),result5);

    // Test Case 6: Different byte sizes
    char str11[] = "abc";
    char str12[] = "abX";
    int result6 = ft_memcmp(str11, str12, 3);
    printf("Test 6 - Expected: %d, Got: %d\n", memcmp(str11, str12, 3),result6);

    // Test Case 7: All bytes are equal but with null terminators
    char str13[] = "abc\0def";
    char str14[] = "abc\0xyz";
    int result7 = ft_memcmp(str13, str14, 7);
    printf("Test 7 - Expected: %d, Got: %d\n", memcmp(str13, str14, 7),result7);

    // Test Case 8: Larger buffers
    char str15[] = "Hello, World!";
    char str16[] = "Hello, Universe!";
    int result8 = ft_memcmp(str15, str16, 13);
    printf("Test 8 - Expected: %d, Got: %d\n", memcmp(str15, str16, 13),result8);
}

int main() {
    test_ft_memcmp();
    return 0;
}
*/
