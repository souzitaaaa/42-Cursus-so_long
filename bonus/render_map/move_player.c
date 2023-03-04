/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_player.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinoguei <dinoguei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 15:41:20 by dinoguei          #+#    #+#             */
/*   Updated: 2023/03/04 11:49:11 by dinoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	put_player(t_game *game, int keycode)
{
	static int	pos_key;

	if (game->map_area[game->map_player_y][game->map_player_x] == 'E')
		mlx_put_image_to_window (game->mlx, game->win,
			game->miku_exit.sprite[0], game->map_player_x * 64,
			game->map_player_y * 64);
	else if (keycode == A || (pos_key == A && (keycode == W || keycode == S)))
		mlx_put_image_to_window (game->mlx, game->win, game->player_left,
			game->map_player_x * 64, game->map_player_y * 64);
	else if (keycode == D || (pos_key == D && (keycode == W || keycode == S)))
		mlx_put_image_to_window (game->mlx, game->win, game->player_right,
			game->map_player_x * 64, game->map_player_y * 64);
	else
		mlx_put_image_to_window (game->mlx, game->win, game->player_right,
			game->map_player_x * 64, game->map_player_y * 64);
	if (keycode == A || keycode == D)
		pos_key = keycode;
	put_movs(game);
}

void	check_colls(t_game *game)
{
	if (game->map_area[game->map_player_y][game->map_player_x] == 'C')
	{
		game->map_area[game->map_player_y][game->map_player_x] = '0';
		game->map_collectable -= 1;
	}
	if (game->map_collectable == 0
		&& game->map_area[game->map_player_y][game->map_player_x] == 'E')
		win(game);
}

void	check_enemy(t_game *game)
{
	if (game->map_area[game->map_player_y][game->map_player_x] == 'R'
			|| game->map_area[game->map_player_y][game->map_player_x] == 'T')
		noob(game);
}

void	put_behind(t_game *game)
{
	if (game->map_area[game->map_player_y][game->map_player_x] == 'E')
		mlx_put_image_to_window (game->mlx, game->win,
			game->exit, game->map_player_x * 64, game->map_player_y * 64);
	else
		mlx_put_image_to_window (game->mlx, game->win,
			game->floor, game->map_player_x * 64, game->map_player_y * 64);
}

void	move_player(t_game *game, char dir, int pos, int keycode)
{
	int	random;

	random = rand() % 2 + 1;
	if (random == 1)
	{
		if (game->enemies.rin > 0)
			move_rin(game);
		if (game->enemies.teto > 0)
			move_teto(game);
	}
	if (dir == 'v')
	{
		if (game->map_area[game->map_player_y + pos][game->map_player_x] == '1')
			return ;
		put_behind(game);
		game->map_player_y += pos;
	}
	if (dir == 'h')
	{
		if (game->map_area[game->map_player_y][game->map_player_x + pos] == '1')
			return ;
		put_behind(game);
		game->map_player_x += pos;
	}
	check_enemy(game);
	check_colls(game);
	put_player(game, keycode);
}
