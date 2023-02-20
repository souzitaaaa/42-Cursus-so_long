/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinoguei <dinoguei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 17:17:11 by dinoguei          #+#    #+#             */
/*   Updated: 2023/02/20 17:34:11 by dinoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "mlx_linux/mlx.h"
# include <stdio.h>
# include "libft/include/libft.h"
# include <fcntl.h>
# include <stdbool.h>

# define WALL "./textures/wall.xpm"
# define MIKU_RIGHT "./textures/miku_right.xpm"
# define MIKU_LEFT "./textures/miku_left.xpm"
# define MIC "./textures/mic.xpm"
# define FLOOR "./textures/floor.xpm"
# define EXIT "./textures/exit.xpm"
# define EXIT_MIKU "./textures/exit_with_miku.xpm"

# define TILE_SIZE 64

typedef enum keycodes
{
	ESC = 65307,
	W = 119,
	A = 97,
	S = 115,
	D = 100,
}				t_keys;

typedef struct s_game
{
	char	**map_area;
	char	**map_area_floodfill;
	char	*map;
	int		map_fd;
	int		map_y;
	int		map_x;
	int		map_exit;
	int		map_collectable;
	int		map_player;
	int		map_player_y;
	int		map_player_x;
	int		n_movs;
	void	*mlx;
	void	*win;
	void	*exit;
	void	*collectable;
	void	*player_right;
	void	*player_left;
	void	*wall;
	void	*floor;
	void	*exit_miku;
	bool	images;
	bool	window;
	bool	mlx_init;
	bool	array_flood;
	bool	array_map;
}				t_game;

/*
main
*/
void	init_game(t_game *game);
void	check_args(int argc, char **argv);
void	map_treatment(t_game *game);
void	start_game(t_game *game);
/*
map_treatment
*/
void	check_ber(t_game *game);
void	check_error(t_game *game);
void	check_elements(t_game *game);
void	check_walls(t_game *game);
bool	fill(t_game *game, char begin, int row, int col);
int		floodfill(t_game *game);
void	check_path(t_game *game);
void	check_rect(t_game *game);
void	get_y(t_game *game);
void	open_map(t_game *game);
void	close_map(t_game *game);
void	map_malloc_path(t_game	*game);
void	map_malloc(t_game	*game);
void	get_x(t_game *game);
/*
render_map
*/
int		check_ent(t_game *game, int y, int x);
int		key_handler(int keycode, t_game *game);
void	put_player(t_game *game, int keycode);
void	check_colls(t_game *game);
void	put_behind(t_game *game);
void	move_player(t_game *game, char dir, int pos, int keycode);
void	get_xpm(t_game *game);
void	put_xpm(t_game *game, int element, int y, int x);
void	render_images(t_game *game);
/*
errors
*/
int		close_window(t_game *game);
void	destroy_xpms(t_game *game);
void	destroy(t_game *game);
void	free_map(t_game *game);
void	free_map_flood(t_game *game);
void	send_error(char *error_msg, t_game *game);
void	win(t_game *game);

#endif
