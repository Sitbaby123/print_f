
CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

SRCS = ft_func1 ft_func2 ft_printf
SRC = $(addsuffix .c, $(SRCS))

OBJS = $(SRC:.c=.o)

INC = -I.

GREEN = \033[0;32m
RED = \033[0;31m
BLUE = \033[0;34m
RESET = \033[0m

all: $(NAME)

$(NAME): $(OBJS)
	@ar rc $(NAME) $(OBJS)
	@echo "$(GREEN)compiled and created library$(BLUE) $(NAME)$(RESET) $(GREEN) successfully!$(RESET)"

%.o: %.c
	@$(CC) $(CFLAGS) $(INC) -c $< -o $@
clean:
	@rm -f $(OBJS)
	@echo "$(RED)objects removed.$(RESET)"
fclean: clean
	@find . -type f \( ! -name '*.c' -a ! -name '*.h' -a ! -name 'Makefile' \) -exec rm -f {} \;
	@rm -f $(NAME)
	@echo "$(RED)$(NAME) removed.$(RESET)"
re: fclean all
