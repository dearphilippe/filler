# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: passef <passef@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/23 22:58:59 by passef            #+#    #+#              #
#    Updated: 2018/01/05 13:50:21 by passef           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	libftfiller.a
EXEC =	passef.filler

SRC =	filler.c \
		sources/reader.c \
		libft/ft_putstr.c \
		libft/ft_putstr_fd.c \
		libft/ft_putchar_fd.c \
		libft/ft_strcpy.c \

DEB = passef.filler.dSYM
OBJ = $(SRC:.c=.o)
CC = gcc
FLAGS = -Wall -Wextra -Werror
RM = rm -rf
LFT = -C libft/
GREEN = \033[92m
PURPLE = \033[95m
NORM = \033[0m
ERASE = \033[K
CURSORUP = \033[1A

all: $(NAME)
$(NAME): $(OBJ)
	@echo "$(ERASE)$(PURPLE)FILLER - $(NORM)$(GREEN)Creating Library$(NORM) $(CURSORUP)";
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@$(CC) $(FLAGS) -g filler.c $(NAME) -o $(EXEC)
	@echo "$(ERASE)$(PURPLE)FILLER - $(NORM)$(GREEN)Compiled!$(NORM)";
%.o: %.c
	@$(CC) $(FLAGS) -c $< -o $@
	@echo "$(ERASE)$(PURPLE)FILLER - $(NORM)$(GREEN)Compiling... $<$(NORM) $(CURSORUP)";
norm:
	@echo "$(PURPLE)FILLER - $(NORM)$(GREEN)Norminette filler C files...$(NORM)"
	@norminette *.c
	@echo "$(PURPLE)FILLER - $(NORM)$(GREEN)Norminette libft files...$(NORM)"
	@norminette libft/*.c
clean:
	@$(RM) $(OBJ)
	@make $(LFT) clean
	@echo "$(ERASE)$(PURPLE)FILLER - $(NORM)$(GREEN)Cleaning Object files $(NORM)";
fclean: clean
	@$(RM) $(NAME) $(DEB) $(EXEC)
	@make $(LFT) fclean
	@echo "$(ERASE)$(PURPLE)FILLER - $(NORM)$(GREEN)Cleaning FILLER $(NORM)";
re: fclean all