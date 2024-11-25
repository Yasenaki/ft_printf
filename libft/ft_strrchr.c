/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 14:46:29 by jopires-          #+#    #+#             */
/*   Updated: 2024/11/09 20:10:23 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		x;
	int		max;
	char	*last;

	last = NULL;
	x = 0;
	max = ft_strlen(s);
	if ((char)c == '\0')
		return ((char *)&s[max]);
	while (x < max)
	{
		if ((char)c == (char) s[x])
			last = ((char *)&s[x]);
		x++;
	}
	return (last);
}
/*
void test_ft_strrchr() {
    // Test Case 1: Normal case
    char *str1 = "Hello, World!";
    char c1 = 'o';
    char *result1 = ft_strrchr(str1, c1);
    printf("Test 1 - Expected: %s, Got: %s\n", result1,
	 result1 ? result1 : "NULL");

    // Test Case 2: Character not in string
    char c2 = 'z';
    char *result2 = ft_strrchr(str1, c2);
    printf("Test 2 - Expected: NULL, Got: %s\n", result2 ? result2 : "NULL");

    // Test Case 3: Find the last character
    char c3 = '!';
    char *result3 = ft_strrchr(str1, c3);
    printf("Test 3 - Expected: %s, Got: %s\n", result3,
	 result3 ? result3 : "NULL");

    // Test Case 4: Find the first character
    char c4 = 'H';
    char *result4 = ft_strrchr(str1, c4);
    printf("Test 4 - Expected: %s, Got: %s\n", result4, 
	result4 ? result4 : "NULL");

    // Test Case 5: Find the null terminator
    char c5 = '\0';
    char *result5 = ft_strrchr(str1, c5);
    printf("Test 5 - Expected: (end of string), Got: %s\n", 
	result5 ? result5 : "NULL");

    // Test Case 6: Empty string
    char *str2 = "";
    char c6 = 'a';
    char *result6 = ft_strrchr(str2, c6);
    printf("Test 6 - Expected: NULL, Got: %s\n", result6 ? result6 : "NULL");

    // Test Case 7: Finding a character in a string with duplicates
    char *str3 = "Look at that tree!";
    char c7 = 't';
    char *result7 = ft_strrchr(str3, c7);
    printf("Test 7 - Expected: %s, Got: %s\n", result7, result7 
	? result7 : "NULL");

    // Test Case 8: Finding a character that is at the start
    char *str4 = "banana";
    char c8 = 'b';
    char *result8 = ft_strrchr(str4, c8);
    printf("Test 8 - Expected: %s, Got: %s\n", result8, result8 
	? result8 : "NULL");
}

int main() {
    test_ft_strrchr();
    return 0;
}*/