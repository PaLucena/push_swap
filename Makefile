NAME = push_swap
BONUS_NAME = checker

CC = gcc
FLAGS = -Wall -Wextra -Werror -g
SEGFAULT_FLAG = -fsanitize=address
RM = rm -rf

SRC_PATH = src/
SRC_BONUS_PATH = src/checker/
SRC = actions.c algorithm.c check.c init.c main.c steps.c utils.c
SRC_BONUS_A = checker.c bonus_utils.c
SRC_BONUS_B = actions.c check.c init.c utils.c

OBJ_PATH = objs/
OBJ = $(addprefix $(OBJ_PATH), $(SRC:.c=.o))
OBJ_BONUS_A = $(addprefix $(OBJ_PATH), $(SRC_BONUS_A:.c=.o))
OBJ_BONUS_B = $(addprefix $(OBJ_PATH), $(SRC_BONUS_B:.c=.o))

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

$(NAME): $(OBJ)
	@ gcc $(FLAGS) $(OBJ) $(LIBFT) -o $(NAME)
	@ echo "\n\t\t$(GREEN)$(BOLD)----Push swap compiled----\n$(RESET)"

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@ mkdir -p  $(OBJ_PATH)
	@ $(CC) $(FLAGS) $(INC) -c $< -o $@

bonus: libft $(BONUS_NAME)
$(BONUS_NAME): $(OBJ_BONUS_A) $(OBJ_BONUS_B)
	@ gcc $(FLAGS) $(OBJ_BONUS_A) $(OBJ_BONUS_B) $(LIBFT) -o $(BONUS_NAME)
	@ echo "\n\t\t$(GREEN)$(BOLD) ----Checker compiled----\n$(RESET)"

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@ mkdir -p  $(OBJ_PATH)
	@ $(CC) $(FLAGS) $(INC) -c $< -o $@

$(OBJ_PATH)%.o: $(SRC_BONUS_PATH)%.c
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
	@ $(RM) $(NAME) $(BONUS_NAME)
	@ make -C includes/lib/ fclean

.PHONY: all libft re clean fclean bonus