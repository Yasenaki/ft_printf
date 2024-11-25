/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 20:40:36 by jopires-          #+#    #+#             */
/*   Updated: 2024/11/09 20:57:32 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (n > i && (src || dest))
	{
		*(char *)(dest + i) = *(char *)(src + i);
		i++;
	}
	return (dest);
}

/*
int main() {
 char src1[] = "Hello, World!";
    char dest1[20];

    // Test 1: Basic copy
    ft_memcpy(dest1, src1, strlen(src1) + 1);
    assert(strcmp(dest1, src1) == 0);
    printf("Test 1 passed: Basic copy.\n");

    // Test 5: Same source and destination
    char same[] = "Same source and dest";
    ft_memcpy(same, same, strlen(same));
    assert(strcmp(same, "Same source and dest") == 0);
    printf("Test 5 passed: Same source and destination.\n");

    // Test 6: Null pointers
    char *null_dest = NULL;
    char *null_src = NULL;
    assert(ft_memcpy(null_dest, null_src, 0) == NULL);
    printf("Test 6 passed: Null pointers with zero bytes.\n");

    // Test 7: Null destination
    assert(memcpy(null_dest, src1, 5) == NULL);
    assert(ft_memcpy(null_dest, src1, 5) == NULL);
    printf("Test 7 passed: Null destination.\n");

    printf("All tests passed!\n");
}
*/
// 123456789
// 12121