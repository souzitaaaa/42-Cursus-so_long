/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinoguei <dinoguei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 17:17:11 by dinoguei          #+#    #+#             */
/*   Updated: 2023/02/25 05:52:26 by dinoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "mlx_linux/mlx.h"
# include <stdio.h>
# include "libft/include/libft.h"
# include <fcntl.h>
# include <stdbool.h>
# include <time.h>
# include <stdlib.h>

# define WALL "./textures/wall.xpm"
# define MIKU_RIGHT "./textures/miku_right.xpm"
# define MIKU_LEFT "./textures/miku_left.xpm"
# define MIC "./textures/mic.xpm"
# define FLOOR "./textures/floor.xpm"
# define EXIT "./textures/exit.xpm"
# define EXIT_MIKU "./textures/exit_with_miku.xpm"
# define RIN "./textures/rin.xpm"
# define LUKA "./textures/luka.xpm"
# define TETO "./textures/teto.xpm"
# define BLACK "./textures/black.xpm"

/*
Miku sprite animations
*/
# define MIKU_1 "./textures/miku_sprites/miku_1.xpm"
# define MIKU_2 "./textures/miku_sprites/miku_2.xpm"
# define MIKU_3 "./textures/miku_sprites/miku_3.xpm"
# define MIKU_4 "./textures/miku_sprites/miku_4.xpm"
# define MIKU_5 "./textures/miku_sprites/miku_5.xpm"
# define MIKU_6 "./textures/miku_sprites/miku_6.xpm"
# define MIKU_7 "./textures/miku_sprites/miku_7.xpm"
# define MIKU_8 "./textures/miku_sprites/miku_8.xpm"
# define MIKU_9 "./textures/miku_sprites/miku_9.xpm"
# define MIKU_10 "./textures/miku_sprites/miku_10.xpm"
# define MIKU_11 "./textures/miku_sprites/miku_11.xpm"
# define MIKU_12 "./textures/miku_sprites/miku_12.xpm"
/*
Rin sprite animations
*/
# define RIN_1 "./textures/rin_sprites/rin_1.xpm"
# define RIN_2 "./textures/rin_sprites/rin_2.xpm"
# define RIN_3 "./textures/rin_sprites/rin_3.xpm"
# define RIN_4 "./textures/rin_sprites/rin_4.xpm"
# define RIN_5 "./textures/rin_sprites/rin_5.xpm"
# define RIN_6 "./textures/rin_sprites/rin_6.xpm"
# define RIN_7 "./textures/rin_sprites/rin_7.xpm"
# define RIN_8 "./textures/rin_sprites/rin_8.xpm"
# define RIN_9 "./textures/rin_sprites/rin_9.xpm"
/*
Mic sprite animations
*/
# define MIC_1 "./textures/mic_sprites/mic_1.xpm"
# define MIC_2 "./textures/mic_sprites/mic_2.xpm"
# define MIC_3 "./textures/mic_sprites/mic_3.xpm"
# define MIC_4 "./textures/mic_sprites/mic_4.xpm"
/*
Teto sprite animations
*/
# define TETO_1 "./textures/teto_sprites/teto_1.xpm"
# define TETO_2 "./textures/teto_sprites/teto_2.xpm"
# define TETO_3 "./textures/teto_sprites/teto_3.xpm"
# define TETO_4 "./textures/teto_sprites/teto_4.xpm"
# define TETO_5 "./textures/teto_sprites/teto_5.xpm"
# define TETO_6 "./textures/teto_sprites/teto_6.xpm"
# define TETO_7 "./textures/teto_sprites/teto_7.xpm"
# define TETO_8 "./textures/teto_sprites/teto_8.xpm"
# define TETO_9 "./textures/teto_sprites/teto_9.xpm"
# define TETO_10 "./textures/teto_sprites/teto_10.xpm"
# define TETO_11 "./textures/teto_sprites/teto_11.xpm"
# define TETO_12 "./textures/teto_sprites/teto_12.xpm"
# define TETO_13 "./textures/teto_sprites/teto_13.xpm"
# define TETO_14 "./textures/teto_sprites/teto_14.xpm"
# define TETO_15 "./textures/teto_sprites/teto_15.xpm"
# define TETO_16 "./textures/teto_sprites/teto_16.xpm"
# define TETO_17 "./textures/teto_sprites/teto_17.xpm"
# define TETO_18 "./textures/teto_sprites/teto_18.xpm"
# define TETO_19 "./textures/teto_sprites/teto_19.xpm"
# define TETO_20 "./textures/teto_sprites/teto_20.xpm"
# define TETO_21 "./textures/teto_sprites/teto_21.xpm"
# define TETO_22 "./textures/teto_sprites/teto_22.xpm"
# define TETO_23 "./textures/teto_sprites/teto_23.xpm"
# define TETO_24 "./textures/teto_sprites/teto_24.xpm"

# define TILE_SIZE 64
# define MIKU_FRAMES 12
# define RIN_FRAMES 9
# define MIC_FRAMES 4
# define TETO_FRAMES 24

typedef enum keycodes
{
	ESC = 65307,
	W = 119,
	A = 97,
	S = 115,
	D = 100,
}				t_keys;

typedef struct s_miku
{
	bool	sprites;
	void	**sprite;
	int		frame;
}				t_miku;

typedef struct s_rin
{
	bool	sprites;
	void	**sprite;
	int		frame;
}				t_rin;

typedef struct s_mic
{
	bool	sprites;
	void	**sprite;
	int		frame;
}				t_mic;

typedef struct s_teto
{
	bool	sprites;
	void	**sprite;
	int		frame;
}				t_teto;

typedef struct s_enemies
{
	int		rin;
	int		map_rin_y;
	int		map_rin_x;
	int		luka;
	int		map_luka_y;
	int		map_luka_x;
	int		teto;
	int		map_teto_y;
	int		map_teto_x;
}				t_enemies;

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
	void	*rin_img;
	void	*player_right;
	void	*player_left;
	void	*wall;
	void	*floor;
	void	*exit_miku;
	void	*luka;
	void	*teto_img;
	void	*black_rect;
	bool	images;
	bool	window;
	bool	mlx_init;
	bool	array_flood;
	bool	array_map;
	t_enemies	enemies;
	t_miku	miku;
	t_rin	rin;
	t_mic	mic;
	t_teto	teto;
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
void	put_movs(t_game *game);
void	put_black(t_game *game);
void	check_enemy(t_game *game);
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
void	noob(t_game *game);
/*
animate
*/
int		animate(t_game *game);

#endif
