/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 16:36:19 by jopires-          #+#    #+#             */
/*   Updated: 2024/12/09 18:52:11 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
#include <fcntl.h>
void test_ft_putchar_fd()
{
	int fd;
	char buffer[2];
	ssize_t bytes_read;

	// Create and open a temporary file for writing
	fd = open("test_output.txt",O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd == -1)
	{
		perror("Failed to open file");
		return;
	}

	// Test writing a character to the file
	ft_putchar_fd('J', fd);

	// Reset file offset to the beginning
	close(fd);
}

#include <fcntl.h>
int main()
{
	test_ft_putchar_fd();
	return 0;
}*/