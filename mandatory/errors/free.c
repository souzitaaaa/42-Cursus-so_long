/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinoguei <dinoguei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:52:08 by dinoguei          #+#    #+#             */
/*   Updated: 2023/02/20 16:52:33 by dinoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	free_map(t_game *game)
{
	int	i;

	i = 0;
	while (i < game->map_y)
	{
		free(game->map_area[i]);
		i++;
	}
	free(game->map_area);
}

void	free_map_flood(t_game *game)
{
	int	i;

	i = 0;
	while (i < game->map_y)
	{
		free(game->map_area_floodfill[i]);
		i++;
	}
	free(game->map_area_floodfill);
}
