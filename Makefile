# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jopires- <jopires-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/29 13:39:37 by jopires-          #+#    #+#              #
#    Updated: 2024/11/19 17:05:11 by jopires-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc	
CFLAGS = -Wall -Wextra -Werror

SRCS = 

OBJS = $(SRCS:.c=.o)
NAME = libftprintf.a

LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)libft.a

all: $(NAME)

$(NAME): $(OBJS) $(libft)
	ar rcs $(NAME) $(OBJS) libft/*.o

clean:
	rm -f  $(OBJS)
	make -c $(LIBFT_DIR)

fclean: clean
	rm -f $(NAME) 
	make -c $(LIBFT_DIR)

re: fclean all

libft:
$(libft) (make) -c $(LIBFT_DIR)