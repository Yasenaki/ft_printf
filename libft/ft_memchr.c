/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 16:15:33 by jopires-          #+#    #+#             */
/*   Updated: 2024/11/09 20:11:31 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int				x;
	unsigned char	*str;

	x = 0;
	str = (unsigned char *)s;
	while (x < (int)n)
	{
		if ((unsigned char)c == str[x])
			return ((void *)&str[x]);
		x++;
	}
	return (NULL);
}
/*
void test_ft_memchr() {
    // Test Case 1: Normal case
    const char *str1 = "Hello, World!";
    int c1 = 'o';
    void *result1 = ft_memchr(str1, c1, strlen(str1));
    printf("Test 1 - Expected: %s, Got: %s\n",
	 (char *)result1, result1 ? (char *)result1 : "NULL");

    // Test Case 2: Character not in string
    int c2 = 'z';
    void *result2 = ft_memchr(str1, c2, strlen(str1));
    printf("Test 2 - Expected: NULL, Got: %s\n",
	 result2 ? (char *)result2 : "NULL");

    // Test Case 3: Find the first character
    int c3 = 'H';
    void *result3 = ft_memchr(str1, c3, strlen(str1));
    printf("Test 3 - Expected: %s, Got: %s\n", 
	(char *)result3, result3 ? (char *)result3 : "NULL");

    // Test Case 4: Find a character at the end
    int c4 = '!';
    void *result4 = ft_memchr(str1, c4, strlen(str1));
    printf("Test 4 - Expected: %s, Got: %s\n", 
	(char *)result4, result4 ? (char *)result4 : "NULL");

    // Test Case 5: Find a character in the middle
    int c5 = 'W';
    void *result5 = ft_memchr(str1, c5, strlen(str1));
    printf("Test 5 - Expected: %s, Got: %s\n", 
	(char *)result5, result5 ? (char *)result5 : "NULL");

    // Test Case 6: Empty string
    const char *str2 = "";
    int c6 = 'a';
    void *result6 = ft_memchr(str2, c6, 0);
    printf("Test 6 - Expected: NULL, Got: %s\n", 
	result6 ? (char *)result6 : "NULL");

    // Test Case 7: Searching with a limited size
    const char *str3 = "Short string";
    int c7 = 's';
    void *result7 = ft_memchr(str3, c7, 5); // Should not find 's' in "Short"
    printf("Test 7 - Expected: NULL, Got: %s\n", 
	result7 ? (char *)result7 : "NULL");

    // Test Case 8: Find null character
    const char *str4 = "String with null\0 character";
    int c8 = '\0';
    void *result8 = ft_memchr(str4, c8, strlen(str4) + 1);
	 // Include null terminator
    printf("Test 8 - Expected: (start of string), Got: %s\n", (char *)result8);
}

int main() {
    test_ft_memchr();
    return 0;
}*/