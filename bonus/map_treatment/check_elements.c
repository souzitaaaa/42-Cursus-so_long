/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_elements.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinoguei <dinoguei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 05:42:05 by dinoguei          #+#    #+#             */
/*   Updated: 2023/02/24 23:25:14 by dinoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	check_error(t_game *game)
{
	if (game->map_exit == 0 || game->map_player == 0)
		send_error("✗ No exit or no player\n", game);
	if (game->map_exit > 1 || game->map_player > 1)
		send_error("✗ More than 1 exit or player\n", game);
	if (game->enemies.rin > 1 || game->enemies.teto > 1
			|| game->enemies.luka > 1)
		send_error("✗ Only one type of enemy", game);
}

void	continue_elements(t_game *game, int i, int j)
{
	if (game->map_area[i][j] == 'P')
	{
		game->map_player++;
		game->map_player_y = i;
		game->map_player_x = j;
	}
	else if (game->map_area[i][j] == 'R')
	{
		game->enemies.rin++;
		game->enemies.map_rin_y = i;
		game->enemies.map_rin_x = j;
	}
	else if (game->map_area[i][j] == 'T')
	{
		game->enemies.teto++;
		game->enemies.map_teto_y = i;
		game->enemies.map_teto_x = j;
	}
	else if (game->map_area[i][j] == 'L')
	{
		game->enemies.luka++;
		game->enemies.map_luka_y = i;
		game->enemies.map_luka_x = j;
	}
}

void	check_elements(t_game *game)
{
	int	i;
	int	j;

	i = 0;
	while (i < game->map_y)
	{
		j = -1;
		while (j++ < game->map_x)
		{
			if (!ft_strchr("10PECRTL", game->map_area[i][j]))
				send_error("✗ Please use only: '1 0 P E C R T L'\n", game);
			else if (game->map_area[i][j] == 'E')
				game->map_exit++;
			else if (game->map_area[i][j] == 'C')
				game->map_collectable++;
			continue_elements(game, i, j);
		}
		i++;
	}
	check_error(game);
}
