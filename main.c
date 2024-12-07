/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 15:17:25 by jopires-          #+#    #+#             */
/*   Updated: 2024/12/07 18:58:02 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	main(void)
{
 char *ptr = "Pdt";
 char *ptr1 = NULL;
 ft_printf("OWN\n\n");
 int own = ft_printf("INT: %i\nUNS: %u\nDEC: %d\nhex: %x\nHEX: %X\nSTR: %s\nCHR: %c\nPTR: %p\n %p\n %% % % % % % %",
  1, 1, 1, 3000, 3000, "asas", 'a', ptr, ptr1);
 ft_printf("\nCounter: %d\n\n\n", own);
 printf("ORIGINAL\n\n");
 int og = printf("INT: %i\nUNS: %u\nDEC: %d\nhex: %x\nHEX: %X\nSTR: %s\nCHR: %c\nPTR: %p\n %p\n %% % % % % % %",
  1, 1, 1, 3000, 3000, "asas", 'a', ptr, ptr1);
 printf("\nCounter: %d\n\n\n", og);
 char *a = NULL;
 ft_printf(" NULL %s NULL ", a);
 char *b = NULL;
 printf(" NULL %s NULL ", b);
}