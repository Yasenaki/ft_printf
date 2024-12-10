/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 17:37:27 by jopires-          #+#    #+#             */
/*   Updated: 2024/12/09 18:53:45 by jopires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr_fd(char *s, int fd)
{
	int	cnt;

	cnt = 0;
	while (s[cnt])
	{
		write(fd, &s[cnt], 1);
		cnt++;
	}
	return (cnt);
}
/*
#include <fcntl.h>
void test_ft_putstr_fd()
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
	ft_putstr_fd("bom dia meus grandes piciners\nWoo!", fd);

	// Reset file offset to the beginning
	close(fd);
}

int main()
{
	test_ft_putstr_fd();
	return 0;
}*/