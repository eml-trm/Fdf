# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: etermeau <etermeau@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/12/03 13:52:30 by etermeau          #+#    #+#              #
#    Updated: 2014/12/12 23:09:47 by etermeau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf

INCLUDE = fdf.h

SRC = main.c ft_info.c ft_draw.c ft_puttab.c

FLAGS = -Wall -Werror -Wextra

CC = gcc

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	make -C libft/ fclean
	make -C libft/
	$(CC) -c $(FLAGS) $(SRC) $(INCLUDE) -I libft/Includes -L/usr/X11/lib -lmlx -lXext -lX11
	$(CC) -o $(NAME) $(OBJ) -L/usr/X11/lib -lmlx -lXext -lX11 -L libft/ -lft

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all
