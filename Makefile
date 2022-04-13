# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nide-mel <nide-mel@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/06 16:03:32 by nide-mel          #+#    #+#              #
#    Updated: 2022/04/13 18:26:37 by nide-mel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = minishell
NAME_BONUS =

CC = gcc
CFLAGS = -Wall -Wextra -Werror -g -fsanitize=address
LFLAGS = -lreadline

RM = rm -f

HEADER = ./includes/$(wildcard*.h)
HEADER_BONUS = ./inc_bonus/$(wildcard*.h)

LIBFT = ./libft/libft.a
LIBFT_PATH = ./libft

INCLUDES = -I libft/includes -I ./includes
INC_BONUS = -I libft/includes -I ./inc_bonus

SRC_PATH = ./src
SRC_PATH_BONUS = ./bonus

OBJ_PATH = ./obj
OBJ_PATH_BONUS = ./obj_bonus

SRC_NAME =	main.c\
			utils/utils.c\
			utils/utils_env.c\
			utils/free_program.c\
			lexer/string_token.c\
			lexer/utils_lexer.c\

SRC_NAME_BONUS =

OBJ = $(addprefix $(OBJ_PATH)/, $(SRC_NAME:.c=.o))
OBJ_BONUS = $(addprefix $(OBJ_PATH_BONUS)/, $(SRC_NAME_BONUS:.c=.o))

SRC = $(addprefix $(SRC_PATH)/, $(SRC_NAME))
SRC_BONUS = $(addprefix $(SRC_PATH_BONUS)/, $(SRC_NAME_BONUS))

all : $(NAME)

$(NAME): $(OBJ)
	@echo "\x1b[32m"
	@cat ./art/ok
	@echo "\n"
	@make -C $(LIBFT_PATH)
	@$(CC) $(CFLAGS) $(OBJ) $(INCLUDES) $(LIBFT) -o $(NAME) $(LFLAGS)
	@echo "\x1b[32m"
	@echo "[$(NAME) compiled]"
	@echo "\x1b[0m"

$(OBJ_PATH)/%.o : $(SRC_PATH)/%.c
	@mkdir -p obj
	@mkdir -p obj/utils
	@mkdir -p obj/env
	@mkdir -p obj/lexer
	@mkdir -p obj/parser
	@mkdir -p obj/debug
	@$(CC) -c $(CFLAGS) $(INCLUDES) $< -o $@

bonus : $(NAME_BONUS)

$(NAME_BONUS): $(OBJ_BONUS)
	@echo "\x1b[32m"
	@cat ./art/ok
	@echo "\n"# include "ft_enums.h"
	@make -C $(LIBFT_PATH)
	@$(CC) $(CFLAGS) $(OBJ_BONUS) $(INC_BONUS) $(LIBFT) -o $(NAME_BONUS)
	@echo "\x1b[32m"
	@echo "[$(NAME) compiled]"
	@echo "\x1b[0m"

$(OBJ_PATH_BONUS)/%.o : $(SRC_PATH_BONUS)/%.c
	@mkdir -p obj_bonus
	@$(CC) -c $(CFLAGS) $(INC_BONUS) $< -o $@

clean:
	@make clean -C $(LIBFT_PATH)
	@rm -rf $(OBJ)
	@rm -rf $(OBJB)
	@echo "\033[33m"
	@cat ./art/clean
	@echo "\n"
	@echo "all $(NAME) and $(NAME_BONUS) .o files are removed"
	@echo "\033[0m"

fclean: clean
	@make fclean -C $(LIBFT_PATH)
	@rm -f $(NAME) $(NAME_BONUS)
	@echo "\033[31m"
	@cat ./art/fclean
	@echo "\n"
	@echo "$(NAME) and $(NAME_BONUS) is deleted"
	@echo "\033[0m"

re: fclean all

debug: CFLAGS = -Wall -Wextra -Werror -g -fsanitize=address
debug: all

norme:
	@norminette $(SRC) includes/*.h | grep "Error"

.PHONY: all, bonus, clean, fclean, re, norme

