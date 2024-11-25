/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:45:50 by jopires-          #+#    #+#             */
/*   Updated: 2024/11/09 19:43:58 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	int	x;

	x = 0;
	if ((c >= 97 && c <= 122)
		|| (c >= 65 && c <= 90)
		|| (c >= 48 && c <= 57))
	{
		x = 1;
	}
	else
		return (0);
	return (x);
}
/*
void test_isalnum(int c)
{
    int result = ft_isalnum(c);

    if (result)
    {
        printf("Input: '%c' (ASCII: %d) - isalnum: True\n", c, c);
    }
    else
    {
        printf("Input: '%c' (ASCII: %d) - isalnum: False\n", c, c);
    }
}

int main()
{
    // Alphanumeric characters
    test_isalnum('A'); // Expected: True
    test_isalnum('z'); // Expected: True
    test_isalnum('0'); // Expected: True
    test_isalnum('5'); // Expected: True

    // Non-alphanumeric characters
    test_isalnum('!');  // Expected: False
    test_isalnum('@');  // Expected: False
    test_isalnum('#');  // Expected: False
    test_isalnum(' ');  // Expected: False
    test_isalnum('\n'); // Expected: False (newline)

    // Control characters
    test_isalnum(0); // Expected: False (NUL)
    test_isalnum(1); // Expected: False (SOH)

    // Special characters
    test_isalnum('$'); // Expected: False
    test_isalnum('&'); // Expected: False

    // Test upper and lower bounds of ASCII
    test_isalnum(127); // Expected: False (DEL)

    return 0;
}*/