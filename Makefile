CC = cc	
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_printf_aux.c ft_printf.c

OBJS = $(SRCS:.c=.o)
NAME = libftprintf.a

LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)libft.a

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	ar rcs $(NAME) $(OBJS) $(LIBFT_DIR)/.o

clean:
	rm -f  $(OBJS)
	make clean -C $(LIBFT_DIR)

fclean: clean
	rm -f $(NAME) 
	make fclean -C $(LIBFT_DIR)

libft:
	$(MAKE) -C $(LIBFT_DIR)

re: fclean all
