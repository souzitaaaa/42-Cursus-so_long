/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_malloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinoguei <dinoguei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 17:12:40 by dinoguei          #+#    #+#             */
/*   Updated: 2023/03/03 14:14:00 by dinoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	map_malloc(t_game	*game)
{
	int		i;
	char	*out;
	int		y;

	y = game->map_y + 1;
	i = 0;
	open_map(game);
	game->map_area = (char **)malloc(sizeof(char *) * y);
	if (!game->map_area)
		destroy (game);
	while (i < y)
	{
		out = get_next_line(game->map_fd);
		game->map_area[i] = ft_strtrim(out, "\n");
		free(out);
		i++;
	}
	game->array_map = true;
	get_x(game);
	close_map(game);
}

void	get_x(t_game *game)
{
	char	*x;

	x = game->map_area[0];
	game->map_x = ft_strlen(x);
}
