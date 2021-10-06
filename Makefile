NAME = converter

CFLAGS = gcc -Wall -Wextra -Werror

SRCS = main.c

LIBFT_DIR = libft/

INCLUDES = -I libft/includes/ -I libft/ft_printf/includes/

LIBARIES = libft/libft.a libft/libftprintf.a

all: $(NAME)

$(NAME): $(LIBARIES)
	$(CFLAGS) $(INCLUDES) $(SRCS) $(LIBARIES) -o $(NAME)

$(LIBARIES):
	$(MAKE) -C $(LIBFT_DIR)

clean:
	$(MAKE) -C $(LIBFT_DIR) fclean	
	rm -rf $(NAME)

re: clean all
