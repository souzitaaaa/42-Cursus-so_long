/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_ent.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinoguei <dinoguei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 13:32:52 by dinoguei          #+#    #+#             */
/*   Updated: 2023/02/23 18:29:20 by dinoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	check_ent(t_game *game, int y, int x)
{
	if (game->map_area[y][x] == '0')
		return (0);
	else if (game->map_area[y][x] == '1')
		return (1);
	else if (game->map_area[y][x] == 'P')
		return (2);
	else if (game->map_area[y][x] == 'C')
		return (3);
	else if (game->map_area[y][x] == 'E')
		return (4);
	else if (game->map_area[y][x] == 'R')
		return (5);
	else if (game->map_area[y][x] == 'L')
		return (6);
	else if (game->map_area[y][x] == 'T')
		return (7);
	else
		return (8);
}
