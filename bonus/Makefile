# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dinoguei <dinoguei@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/18 13:12:33 by dinoguei          #+#    #+#              #
#    Updated: 2023/02/23 18:14:37 by dinoguei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long

SRC = main.c \
		map_treatment/check_ber.c \
		map_treatment/get_sizes.c \
		map_treatment/check_rect.c \
		map_treatment/map_malloc.c \
		map_treatment/map_fd.c \
		map_treatment/check_map.c \
		map_treatment/check_elements.c \
		map_treatment/check_path.c \
		map_treatment/map_malloc_path.c \
		render_map/check_ent.c \
		render_map/put_xpm.c \
		render_map/move_player.c \
		render_map/render_images.c \
		render_map/key_handler.c \
		render_map/put_movs.c \
		errors/send_error.c \
		errors/destroy.c \
		errors/free.c \
		errors/win.c \
		errors/close_window.c \
		animate/animation.c \

MINILIBX = ./mlx_linux
MLXFLAGS = -L ./mlx_linux -lmlx -Ilmlx -lXext -lX11
LIBFTDIR = ./libft
LIBFT = ./libft/libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror -g
RM = rm -rf

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(MAKE) --no-print-directory -C $(MINILIBX)
	$(MAKE) -C $(LIBFTDIR)
	$(CC) $(CFLAGS) -lm $(SRC) $(MLXFLAGS) $(LIBFT) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean

	$(RM) $(NAME)

re: clean all

