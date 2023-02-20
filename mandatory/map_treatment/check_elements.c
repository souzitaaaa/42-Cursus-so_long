/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_elements.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinoguei <dinoguei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 05:42:05 by dinoguei          #+#    #+#             */
/*   Updated: 2023/02/20 16:01:00 by dinoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	check_error(t_game *game)
{
	if (game->map_exit == 0 || game->map_player == 0)
		send_error("✗ No exit or no player\n", game);
	if (game->map_exit > 1 || game->map_player > 1)
		send_error("✗ More than 1 exit or player\n", game);
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
			if (game->map_area[i][j] == 'E')
				game->map_exit++;
			else if (game->map_area[i][j] == 'C')
				game->map_collectable++;
			else if (game->map_area[i][j] == 'P')
			{
				game->map_player++;
				game->map_player_y = i;
				game->map_player_x = j;
			}
			else if (!ft_strchr("10PEC", game->map_area[i][j]))
				send_error("✗ Please use only: '1 0 P E C'\n", game);
		}
		i++;
	}
	check_error(game);
}
