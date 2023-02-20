/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_xpm.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinoguei <dinoguei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 13:32:55 by dinoguei          #+#    #+#             */
/*   Updated: 2023/02/16 14:40:44 by dinoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	get_xpm(t_game *game)
{
	int	tile_size;

	tile_size = TILE_SIZE;
	game->images = true;
	game->exit = mlx_xpm_file_to_image(game->mlx, EXIT,
			&tile_size, &tile_size);
	game->collectable = mlx_xpm_file_to_image(game->mlx, MIC,
			&tile_size, &tile_size);
	game->player_right = mlx_xpm_file_to_image(game->mlx, MIKU_RIGHT,
			&tile_size, &tile_size);
	game->player_left = mlx_xpm_file_to_image(game->mlx, MIKU_LEFT,
			&tile_size, &tile_size);
	game->wall = mlx_xpm_file_to_image(game->mlx, WALL,
			&tile_size, &tile_size);
	game->floor = mlx_xpm_file_to_image(game->mlx, FLOOR,
			&tile_size, &tile_size);
	game->exit_miku = mlx_xpm_file_to_image(game->mlx, EXIT_MIKU,
			&tile_size, &tile_size);
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
			game->collectable, x * 64, y * 64);
	if (element == 4)
		mlx_put_image_to_window(game->mlx, game->win,
			game->exit, x * 64, y * 64);
}
