NAME = push_swap

CC = gcc
FLAGS = -Wall -Wextra -Werror -g
SEGFAULT_FLAG = -fsanitize=address
RM = rm -rf

SRC_PATH = src/
SRC = main.c

OBJ_PATH = objs/
OBJ = $(addprefix $(OBJ_PATH), $(SRC:.c=.o))

INC = -I includes/lib
LIBFT = includes/lib/libft.a

#//= Colors =//#
BOLD	:= \033[1m
BLACK	:= \033[30;1m
RED		:= \033[31;1m
GREEN	:= \033[32;1m
YELLOW	:= \033[33;1m
BLUE	:= \033[34;1m
MAGENTA	:= \033[35;1m
CYAN	:= \033[36;1m
WHITE	:= \033[37;1m
RESET	:= \033[0m

all: libft $(NAME)

bonus: libft $(NAME_BONUS)

$(NAME): $(OBJ)
	@ gcc $(FLAGS) $(SEGFAULT_FLAG) $(OBJ) $(LIBFT) $(NAME)
	@ echo "\n\t\t$(GREEN)$(BOLD)----Push swap compiled----\n"

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@ mkdir -p  $(OBJ_PATH)
	@ $(CC) $(FLAGS) $(INC) -c $< -o $@

libft:
	@ make -C includes/lib/

re: fclean all

clean:
	@ $(RM) -r $(OBJ_PATH)
	@ make -C includes/lib/ clean
	@ echo "\n\t\t\t$(RED)$(BOLD)Cleaning...\n"

fclean: clean
	@ $(RM) $(NAME) $(NAME_BONUS)
	@ make -C includes/lib/ fclean

.PHONY: all bonus libft re re_bonus clean fclean