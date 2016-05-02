# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: etermeau <etermeau@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/12/27 18:18:00 by etermeau          #+#    #+#              #
#    Updated: 2015/01/03 12:25:24 by etermeau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf

PATH_SRC = ./

PATH_OBJ = ./

PATH_INC = ./libft/Includes/

CC = gcc

CFLAGS = -Wall -Wextra -Werror

HEAD = includes/fdf.h

SRC = srcs/main.c \
	  srcs/ft_erreur.c \
	  srcs/ft_info.c \
	  srcs/ft_fdf.c \
	  srcs/ft_draw.c 

OBJ = $(patsubst %.c,%.o,$(addprefix $(PATH_SRC), $(SRC)))


all: $(NAME)

$(NAME): $(OBJ) $(HEAD)
	make -C libft/
	$(CC) $(CFLAGS) -I $(PATH_INC) -c $(SRC)
	$(CC) -o $(NAME) $(OBJ) -lm -L libft/ -lft -lmlx 

.PHONY: clean fclean

clean:
	make -C libft/ clean
	/bin/rm -f $(OBJ)

fclean: clean
	make -C libft/ fclean
	/bin/rm -f $(NAME)

re: fclean all
