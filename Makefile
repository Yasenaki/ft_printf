CC = cc	
CFLAGS = -Wall -Wextra -Werror -g

SRCS = ft_printf_aux.c ft_printf.c

OBJS = $(SRCS:.c=.o)
NAME = libftprintf.a

LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a

all: $(NAME)

.c.o:
		$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(LIBFT) $(OBJS)
		cp $(LIBFT) $(NAME)
		ar rcs $(NAME) $(OBJS)

$(LIBFT):
	make -C $(LIBFT_DIR)

clean:
	rm -f  $(OBJS)
	make clean -C $(LIBFT_DIR)

fclean: clean
	rm -f $(NAME) 
	make fclean -C $(LIBFT_DIR)

re: fclean all

test: $(NAME)
		cc $(CFLAGS) main.c $(NAME) -o ft_printf2.out
		./ft_printf2.out