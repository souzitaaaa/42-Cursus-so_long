/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_ent.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinoguei <dinoguei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 13:32:52 by dinoguei          #+#    #+#             */
/*   Updated: 2023/02/23 12:09:28 by dinoguei         ###   ########.fr       */
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
	else
		return (5);
}
