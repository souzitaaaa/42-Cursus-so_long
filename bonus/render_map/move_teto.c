/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_teto.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinoguei <dinoguei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 13:57:21 by dinoguei          #+#    #+#             */
/*   Updated: 2023/03/03 15:02:14 by dinoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	move_teto(t_game *game)
{
	int	random;
	int	random2;

	random = rand() % 2 + 1;
	random2 = rand() % 2 + 1;
	if (random == 1)
		check_teto_move_y(game, random2);
	if (random == 2)
		check_teto_move_x(game, random2);
	put_teto_pos(game);
}

void	check_teto_move_y(t_game *game, int random2)
{
	if (random2 == 1)
	{
		if (game->map_area[game->enemies.map_teto_y + 1]
			[game->enemies.map_teto_x] == '1'
			|| game->map_area[game->enemies.map_teto_y + 1]
			[game->enemies.map_teto_x] == 'C'
			|| game->map_area[game->enemies.map_teto_y + 1]
			[game->enemies.map_teto_x] == 'E')
			return ;
		put_behind_enemy_teto(game);
		game->enemies.map_teto_y += 1;
	}
	else
	{
		if (game->map_area[game->enemies.map_teto_y - 1]
			[game->enemies.map_teto_x] == '1'
			|| game->map_area[game->enemies.map_teto_y - 1]
			[game->enemies.map_teto_x] == 'C'
			|| game->map_area[game->enemies.map_teto_y - 1]
			[game->enemies.map_teto_x] == 'E')
			return ;
		put_behind_enemy_teto(game);
		game->enemies.map_teto_y -= 1;
	}
}

void	check_teto_move_x(t_game *game, int random2)
{
	if (random2 == 1)
	{
		if (game->map_area[game->enemies.map_teto_y]
			[game->enemies.map_teto_x + 1] == '1'
			|| game->map_area[game->enemies.map_teto_y]
			[game->enemies.map_teto_x + 1] == 'C'
			|| game->map_area[game->enemies.map_teto_y]
			[game->enemies.map_teto_x + 1] == 'E')
			return ;
		put_behind_enemy_teto(game);
		game->enemies.map_teto_x += 1;
	}
	else
	{
		if (game->map_area[game->enemies.map_teto_y]
			[game->enemies.map_teto_x - 1] == '1'
			|| game->map_area[game->enemies.map_teto_y]
			[game->enemies.map_teto_x - 1] == 'C'
			|| game->map_area[game->enemies.map_teto_y]
			[game->enemies.map_teto_x - 1] == 'E')
			return ;
		put_behind_enemy_teto(game);
		game->enemies.map_teto_x -= 1;
	}
}

void	put_teto_pos(t_game *game)
{
	mlx_put_image_to_window (game->mlx, game->win, game->teto_img,
		game->enemies.map_teto_x * 64, game->enemies.map_teto_y * 64);
	game->map_area[game->enemies.map_teto_y][game->enemies.map_teto_x] = 'R';
}

void	put_behind_enemy_teto(t_game *game)
{
	mlx_put_image_to_window (game->mlx, game->win,
		game->floor, game->enemies.map_teto_x * 64,
		game->enemies.map_teto_y * 64);
	game->map_area[game->enemies.map_teto_y][game->enemies.map_teto_x] = '0';
}
