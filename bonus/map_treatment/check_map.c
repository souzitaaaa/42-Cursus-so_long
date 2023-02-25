/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinoguei <dinoguei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 01:18:08 by dinoguei          #+#    #+#             */
/*   Updated: 2023/02/16 14:44:23 by dinoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	check_walls(t_game *game)
{
	int	rows;
	int	columns;
	int	i;
	int	j;

	rows = game->map_y;
	columns = game->map_x;
	i = 0;
	j = 0;
	ft_printf ("\t{Checking if the map is closed}\n");
	while (j < columns)
	{
		if (game->map_area[i][j] != '1' || game->map_area[rows - 1][j] != '1')
			send_error("✗ The map is not surrounded walls\n", game);
		j++;
	}
	while (i < rows)
	{
		if (game->map_area[i][0] != '1' ||
			game->map_area[i][columns - 1] != '1')
			send_error("✗ The map is not surrounded walls\n", game);
		i++;
	}
	ft_printf ("✔ The map is surrounded by walls\n");
}
