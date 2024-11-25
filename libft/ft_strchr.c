/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 19:22:11 by jopires-          #+#    #+#             */
/*   Updated: 2024/11/09 20:08:19 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	x;
	size_t	max;

	x = 0;
	max = ft_strlen(s);
	if ((char)c == '\0')
		return ((char *)&s[max]);
	while (x < max)
	{
		if ((char)c == (char)s[x])
			return ((char *)&s[x]);
		x++;
	}
	return (NULL);
}
/*
void test_ft_strchr() {
    // Test Case 1: Normal case
    char *str1 = "Hello, World!";
    char c1 = 'W';
    char *result1 = ft_strchr(str1, c1);
    printf("Test 1 - Expected: %s, Got: %s\n", result1, 
	result1 ? result1 : "NULL");

    // Test Case 2: Character not in string
    char c2 = 'z';
    char *result2 = ft_strchr(str1, c2);
    printf("Test 2 - Expected: NULL, Got: %s\n", result2 ? result2 : "NULL");

    // Test Case 3: Find the first character
    char c3 = 'H';
    char *result3 = ft_strchr(str1, c3);
    printf("Test 3 - Expected: %s, Got: %s\n",\
	 result3, result3 ? result3 : "NULL");

    // Test Case 4: Find the last character
    char c4 = '!';
    char *result4 = ft_strchr(str1, c4);
    printf("Test 4 - Expected: %s, Got: %s\n", 
	result4, result4 ? result4 : "NULL");

    // Test Case 5: Find the null terminator
    char c5 = '\0';
    char *result5 = ft_strchr(str1, c5);
    printf("Test 5 - Expected: (end of string), 
	Got: %s\n", result5 ? result5 : "NULL");

    // Test Case 6: Empty string
    char *str2 = "";
    char c6 = 'a';
    char *result6 = ft_strchr(str2, c6);
    printf("Test 6 - Expected: NULL, Got: %s\n", result6 ? result6 : "NULL");

    // Test Case 7: Finding a character in a string with special characters
    char *str3 = "Special char: @, #, $";
    char c7 = '#';
    char *result7 = ft_strchr(str3, c7);
    printf("Test 7 - Expected: %s, Got: %s\n", result7, 
	result7 ? result7 : "NULL");
}

int main() {
    test_ft_strchr();
    return 0;
}
*/
