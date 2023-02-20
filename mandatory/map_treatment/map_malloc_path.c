/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_malloc_path.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinoguei <dinoguei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 12:44:55 by dinoguei          #+#    #+#             */
/*   Updated: 2023/02/20 14:50:55 by dinoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	map_malloc_path(t_game	*game)
{
	int		i;
	char	*out;
	int		y;

	y = game->map_y + 1;
	i = 0;
	open_map(game);
	game->map_area_floodfill = (char **)malloc(sizeof(char *) * y);
	if (!game->map_area_floodfill)
		destroy (game);
	while (i < y)
	{
		out = get_next_line(game->map_fd);
		game->map_area_floodfill[i] = ft_strtrim(out, "\n");
		free(out);
		i++;
	}
	game->array_flood = true;
	close_map(game);
}
