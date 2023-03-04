/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_rin.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinoguei <dinoguei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 13:52:22 by dinoguei          #+#    #+#             */
/*   Updated: 2023/03/03 15:02:06 by dinoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	move_rin(t_game *game)
{
	int	random;
	int	random2;

	random = rand() % 2 + 1;
	random2 = rand() % 2 + 1;
	if (random == 1)
		check_rin_move_y(game, random2);
	if (random == 2)
		check_rin_move_x(game, random2);
	put_rin_pos(game);
}

void	check_rin_move_y(t_game *game, int random2)
{
	if (random2 == 1)
	{
		if (game->map_area[game->enemies.map_rin_y + 1]
			[game->enemies.map_rin_x] == '1'
			|| game->map_area[game->enemies.map_rin_y + 1]
			[game->enemies.map_rin_x] == 'C'
			|| game->map_area[game->enemies.map_rin_y + 1]
			[game->enemies.map_rin_x] == 'E')
			return ;
		put_behind_enemy_rin(game);
		game->enemies.map_rin_y += 1;
	}
	else
	{
		if (game->map_area[game->enemies.map_rin_y - 1]
			[game->enemies.map_rin_x] == '1'
			|| game->map_area[game->enemies.map_rin_y - 1]
			[game->enemies.map_rin_x] == 'C'
			|| game->map_area[game->enemies.map_rin_y - 1]
			[game->enemies.map_rin_x] == 'E')
			return ;
		put_behind_enemy_rin(game);
		game->enemies.map_rin_y -= 1;
	}
}

void	check_rin_move_x(t_game *game, int random2)
{
	if (random2 == 1)
	{
		if (game->map_area[game->enemies.map_rin_y]
			[game->enemies.map_rin_x + 1] == '1'
			|| game->map_area[game->enemies.map_rin_y]
			[game->enemies.map_rin_x + 1] == 'C'
			|| game->map_area[game->enemies.map_rin_y]
			[game->enemies.map_rin_x + 1] == 'E')
			return ;
		put_behind_enemy_rin(game);
		game->enemies.map_rin_x += 1;
	}
	else
	{
		if (game->map_area[game->enemies.map_rin_y]
			[game->enemies.map_rin_x - 1] == '1'
			|| game->map_area[game->enemies.map_rin_y]
			[game->enemies.map_rin_x - 1] == 'C'
			|| game->map_area[game->enemies.map_rin_y]
			[game->enemies.map_rin_x - 1] == 'E')
			return ;
		put_behind_enemy_rin(game);
		game->enemies.map_rin_x -= 1;
	}
}

void	put_rin_pos(t_game *game)
{
	mlx_put_image_to_window (game->mlx, game->win, game->rin_img,
		game->enemies.map_rin_x * 64, game->enemies.map_rin_y * 64);
	game->map_area[game->enemies.map_rin_y][game->enemies.map_rin_x] = 'R';
}

void	put_behind_enemy_rin(t_game *game)
{
	mlx_put_image_to_window (game->mlx, game->win,
		game->floor, game->enemies.map_rin_x * 64,
		game->enemies.map_rin_y * 64);
	game->map_area[game->enemies.map_rin_y][game->enemies.map_rin_x] = '0';
}
