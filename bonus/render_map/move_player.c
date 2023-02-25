/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_player.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinoguei <dinoguei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 15:41:20 by dinoguei          #+#    #+#             */
/*   Updated: 2023/02/25 06:46:50 by dinoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	put_player(t_game *game, int keycode)
{
	static int	pos_key;

	if (game->map_area[game->map_player_y][game->map_player_x] == 'E')
		mlx_put_image_to_window (game->mlx, game->win,
			game->exit_miku, game->map_player_x * 64, game->map_player_y * 64);
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
			|| game->map_area[game->map_player_y][game->map_player_x] == 'T'
				|| game->map_area[game->map_player_y][game->map_player_x] == 'L')
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

void	put_enemy_pos(t_game *game)
{
		mlx_put_image_to_window (game->mlx, game->win, game->player_right,
			game->enemies.map_rin_x * 64, game->enemies.map_rin_y * 64);
		game->map_area[game->enemies.map_rin_x][game->enemies.map_rin_y] = 'R';
}

void	put_behind_enemy(t_game *game)
{
		mlx_put_image_to_window (game->mlx, game->win,
			game->floor, game->enemies.map_rin_x * 64, game->enemies.map_rin_y * 64);
		game->map_area[game->enemies.map_rin_x][game->enemies.map_rin_y] = '0';
}

void	move_enemy(t_game *game)
{
	int	random;
	int	random2;

	random = rand() % 2 + 1;
	random2 = rand() % 2 + 1;/*
	if (random == 1)
	{
		if(random2 == 1)
		{
			if(game->map_area[game->enemies.map_rin_y + 1][game->enemies.map_rin_x] == '1'
					|| game->map_area[game->enemies.map_rin_y + 1][game->enemies.map_rin_x] == 'C'
							|| game->map_area[game->enemies.map_rin_y + 1][game->enemies.map_rin_x] == 'E')
				return ;
			put_behind_enemy(game);
			game->enemies.map_rin_y += 1;
		}
		else
		{
			if(game->map_area[game->enemies.map_rin_y - 1][game->enemies.map_rin_x] == '1'
					|| game->map_area[game->enemies.map_rin_y - 1][game->enemies.map_rin_x] == 'C'
							|| game->map_area[game->enemies.map_rin_y - 1][game->enemies.map_rin_x] == 'E')
				return ;
			put_behind_enemy(game);
			game->enemies.map_rin_y -= 1;
		}
	}
*/
	if (random == 2)
	{
		if(random2 == 1)
		{
			if(game->map_area[game->enemies.map_rin_y][game->enemies.map_rin_x + 1] == '1'
					|| game->map_area[game->enemies.map_rin_y][game->enemies.map_rin_x + 1] == 'C'
							|| game->map_area[game->enemies.map_rin_y][game->enemies.map_rin_x + 1] == 'E')
				return ;
			put_behind_enemy(game);
			game->enemies.map_rin_x += 1;
		}
		else if (random2 == 2)
		{
			if(game->map_area[game->enemies.map_rin_y][game->enemies.map_rin_x - 1] == '1'
					|| game->map_area[game->enemies.map_rin_y][game->enemies.map_rin_x - 1] == 'C'
							|| game->map_area[game->enemies.map_rin_y][game->enemies.map_rin_x - 1] == 'E')
				return ;
			put_behind_enemy(game);
			game->enemies.map_rin_x -= 1;
		}
	}
	put_enemy_pos(game);
}

void	move_player(t_game *game, char dir, int pos, int keycode)
{
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
	ft_printf("Antes do enemy: %s\n", game->map_area[4]);
	move_enemy(game);
	ft_printf("Depois do enemy: %s\n", game->map_area[4]);
	check_enemy(game);
	check_colls(game);
	put_player(game, keycode);
	put_movs(game);
}
