/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_xpm.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinoguei <dinoguei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 13:32:55 by dinoguei          #+#    #+#             */
/*   Updated: 2023/03/04 11:56:09 by dinoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	get_xpm(t_game *game)
{
	int	tile_size;

	tile_size = TILE_SIZE;
	game->exit = mlx_xpm_file_to_image(game->mlx, EXIT,
			&tile_size, &tile_size);
	game->player_right = mlx_xpm_file_to_image(game->mlx, MIKU_RIGHT,
			&tile_size, &tile_size);
	game->player_left = mlx_xpm_file_to_image(game->mlx, MIKU_LEFT,
			&tile_size, &tile_size);
	game->wall = mlx_xpm_file_to_image(game->mlx, WALL,
			&tile_size, &tile_size);
	game->floor = mlx_xpm_file_to_image(game->mlx, FLOOR,
			&tile_size, &tile_size);
	game->rin_img = mlx_xpm_file_to_image(game->mlx, RIN,
			&tile_size, &tile_size);
	game->teto_img = mlx_xpm_file_to_image(game->mlx, TETO,
			&tile_size, &tile_size);
	game->black_rect = mlx_xpm_file_to_image(game->mlx, BLACK,
			&tile_size, &tile_size);
	game->mic = mlx_xpm_file_to_image(game->mlx, MIC,
			&tile_size, &tile_size);
	get_xpm_miku_sprites(game, tile_size);
	get_xpm_rin_sprites(game, tile_size);
	get_xpm_teto_sprites(game, tile_size);
	get_xpm_miku_exit(game, tile_size);
	game->images = true;
}

void	put_enemy(t_game *game, int x, int y, int element)
{
	if (element == 5)
		mlx_put_image_to_window(game->mlx, game->win,
			game->rin_img, x * 64, y * 64);
	if (element == 6)
		mlx_put_image_to_window(game->mlx, game->win,
			game->teto_img, x * 64, y * 64);
}

void	put_xpm(t_game *game, int element, int y, int x)
{
	if (element == 0)
		mlx_put_image_to_window(game->mlx, game->win,
			game->floor, x * 64, y * 64);
	if (element == 1)
		mlx_put_image_to_window(game->mlx, game->win,
			game->wall, x * 64, y * 64);
	if (element == 2)
		mlx_put_image_to_window(game->mlx, game->win,
			game->player_right, x * 64, y * 64);
	if (element == 3)
		mlx_put_image_to_window(game->mlx, game->win,
			game->mic, x * 64, y * 64);
	if (element == 4)
		mlx_put_image_to_window(game->mlx, game->win,
			game->exit, x * 64, y * 64);
	if (element == 5 || element == 6)
		put_enemy(game, x, y, element);
}
