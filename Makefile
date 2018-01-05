# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: passef <passef@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/23 22:58:59 by passef            #+#    #+#              #
#    Updated: 2018/01/04 16:55:54 by passef           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	libftfiller.a

SRC =	filler.c \
		sources/myfunc.c \
		libft/ft_putstr.c \
		libft/ft_putstr_fd.c \
		libft/ft_putchar_fd.c \
		libft/ft_strcpy.c \

OBJ = $(SRC:.c=.o)
CC = gcc
FLAGS = -Wall -Wextra -Werror -g
RM = rm -rf
LFT = -C libft/
GREEN = \033[92m
PURPLE = \033[95m
NORM = \033[0m
ERASE = \033[K
CURSORUP = \033[1A

norm:
	@echo "$(PURPLE)FILLER - $(NORM)$(GREEN)Norminette filler C files...$(NORM)"
	@norminette *.c
	@echo "$(PURPLE)FILLER - $(NORM)$(GREEN)Norminette libft files...$(NORM)"
all: $(NAME)
$(NAME): $(OBJ)
	@echo "$(ERASE)$(PURPLE)FILLER - $(NORM)$(GREEN)Creating Library$(NORM) $(CURSORUP)";
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "$(ERASE)$(PURPLE)FILLER - $(NORM)$(GREEN)Compiled!$(NORM)";
%.o: %.c
	@$(CC) $(FLAGS) -c $< -o $@
	@echo "$(ERASE)$(PURPLE)FILLER - $(NORM)$(GREEN)Compiling... $<$(NORM) $(CURSORUP)";
clean:
	@$(RM) $(OBJ)
	@make $(LFT) clean
	@echo "$(ERASE)$(PURPLE)FILLER - $(NORM)$(GREEN)Cleaning Object files $(NORM)";
fclean: clean
	@$(RM) $(NAME)
	@make $(LFT) fclean
	@echo "$(ERASE)$(PURPLE)FILLER - $(NORM)$(GREEN)Cleaning FILLER $(NORM)";
re: fclean all