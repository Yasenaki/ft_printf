# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/29 13:39:37 by jopires-          #+#    #+#              #
#    Updated: 2024/12/05 10:05:36 by jopires-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc	
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_printf_aux.c ft_printf.c

OBJS = $(SRCS:.c=.o)
NAME = libftprintf.a

LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)libft.a

all: $(NAME)

$(NAME): $(OBJS) $(libft)
	ar rcs $(NAME) $(OBJS) $(LIBFT)

clean:
	rm -f  $(OBJS)
	make clean -c $(LIBFT_DIR)

fclean: clean
	rm -f $(NAME) 
	make fclean -c $(LIBFT_DIR)

re: fclean all

libft:
	$(libft) (make) -c $(LIBFT_DIR)