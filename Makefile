NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC_DIR = src
UTILS_DIR = utils
INCLUDE_DIR = include

SRCS = $(SRC_DIR)/ft_printf.c \
       $(SRC_DIR)/parse_format.c \
       $(SRC_DIR)/handle_char.c \
       $(SRC_DIR)/handle_string.c \
       $(SRC_DIR)/handle_pointer.c \
       $(SRC_DIR)/handle_decimal.c \
       $(SRC_DIR)/handle_unsigned.c \
       $(SRC_DIR)/handle_hex_lower.c \
       $(SRC_DIR)/handle_hex_upper.c \
       $(SRC_DIR)/handle_percent.c \
       $(UTILS_DIR)/ft_putchar_fd.c \
       $(UTILS_DIR)/ft_putstr_fd.c \
       $(UTILS_DIR)/ft_putnbr_fd.c \
       $(UTILS_DIR)/ft_putnbr_unsigned.c \
       $(UTILS_DIR)/ft_puthex_lower.c \
       $(UTILS_DIR)/ft_puthex_upper.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -I$(INCLUDE_DIR) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

debug: CFLAGS += -g
debug: re

.PHONY: all clean fclean re debug
