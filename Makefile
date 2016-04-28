#*****************************************************************************#
#*                                                                            *#
#*                                                        :::      ::::::::   *#
#*   Makefile                                           :+:      :+:    :+:   *#
#*                                                    +:+ +:+         +:+     *#
#*   By: rthidet <rthidet@student.42.fr>            +#+  +:+       +#+        *#
#*                                                +#+#+#+#+#+   +#+           *#
#*   Created: 2015/12/06 13:02:35 by rthidet           #+#    #+#             *#
#*   Updated: 2016/02/06 12:46:25 by rthidet          ###   ########.fr       *#
#*                                                                            *#
#******************************************************************************#

NAME = fillit
LFT = libft/libft.a
LIBS =-L./libft/ -lft
TEST =

HPATH = -I ./includes/

SRC = check.c get_tetri.c main.c output.c solve.c

#STANDARD VARIABLES
CC = gcc -Wall -Wextra -Werror
AR = ar -cvq libft.a
RM = rm -rf
SRCDIR = $(addprefix ./src/, $(SRC))
OBJDIR = object
OBJ = $(addprefix ./$(OBJDIR)/, $(SRC:.c=.o))

# COLORS
RESET=\033[0m
DARK=\033[132m
RED=\033[31m
GREEN=\033[32m
YELLOW=\033[33m
BLUE=\033[34m
MAGENTA=\033[35m
CYAN=\033[36m
WHITE=\033[37m
BOLDBLACK=\033[1m\033[30m
BOLDRED=\033[1m\033[31m
BOLDWHITE=\033[1m\033[37m

# START RULES
$(NAME):
	@make -C ./libft
	@echo "$(RESET)$(YELLOW)Compiling $(SRC) in Object$(WHITE)$(RESET)"
	@$(CC) -c $(SRCDIR)
	@mkdir -p $(OBJDIR) && mv $(SRC:.c=.o) ./$(OBJDIR)/
	@echo "$(RESET)$(RED)Building fillit...$(WHITE)$(RESET)"
	@$(CC) -o $(NAME) $(OBJ) $(LIBS) $(HPATH)
	@echo "$(GREEN)OK!$(RESET)"

all: $(NAME)

clean:
	@make clean -C ./libft
	@echo "$(CYAN)Removal Object folder of $(NAME)$(RESET)"
	@$(RM) $(OBJDIR)

fclean: clean
	@make fclean -C ./libft
	@echo "$(CYAN)Removal $(NAME)$(RESET)"
	@$(RM) $(NAME)

re: fclean
	@make all
	@make clean

.PHONY: all clean fclean go
