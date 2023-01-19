# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dinoguei <dinoguei@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/18 13:12:33 by dinoguei          #+#    #+#              #
#    Updated: 2023/01/19 18:44:13 by dinoguei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = mlx

SRC = pixels_image.c \
		filling.c

MINILIBX = ./mlx_linux
MLXFLAGS = -L ./mlx_linux -lmlx -Ilmlx -lXext -lX11

CC = cc
CFLAGS = -Wall -Wextra -Werror -g
RM = rm -rf

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(MAKE) --no-print-directory -C $(MINILIBX)
	$(CC) $(CFLAGS) -lm $(SRC) $(MLXFLAGS) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean:

re: clean all

