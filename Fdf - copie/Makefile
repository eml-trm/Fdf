# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: etermeau <etermeau@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/12/03 13:52:30 by etermeau          #+#    #+#              #
#    Updated: 2014/12/26 17:39:03 by etermeau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf

LIB = libft/

HEADER = includes/

DIRSRC = srcs/

FLAGS = -Wall -Wextra -Werror -g

SRC = main.c \
	  ft_erreur.c \
	  ft_info.c

OBJ = $(SRC:.c=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	@make -s -C $(LIB)
	@gcc $(FLAGS) -o $(NAME) $^ -L$(LIB) -lft

%.o: $(DIRSRC)%.c
	@gcc $(FLAGS)  -o $@ -c $< -I$(LIB)$(HEADER) -I$(HEADER)

clean:
	@rm -f $(OBJ)
	@make clean -s -C $(LIB)

fclean: clean
	@rm -f $(NAME)
	@make fclean -s -C $(LIB)

re: fclean all
