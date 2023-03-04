/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_path.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinoguei <dinoguei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 13:32:46 by dinoguei          #+#    #+#             */
/*   Updated: 2023/03/03 14:13:24 by dinoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

bool	fill(t_game *game, char begin, int row, int col)
{
	static bool		exit = false;
	static int		cols = 0;

	if (row < 0 || col < 0 || row >= game->map_y || col >= game->map_x)
		return (false);
	else if (game->map_area_floodfill[row][col] == 'X')
		return (false);
	else if (game->map_area_floodfill[row][col] == '1')
		return (false);
	else if (game->map_area_floodfill[row][col] == 'E')
		exit = true;
	if (game->map_area_floodfill[row][col] == 'C')
		cols++;
	game->map_area_floodfill[row][col] = 'X';
	fill(game, begin, row + 1, col);
	fill(game, begin, row, col + 1);
	fill(game, begin, row - 1, col);
	fill(game, begin, row, col - 1);
	return (cols == game->map_collectable && exit);
}

int	floodfill(t_game *game)
{
	char	begin;
	int		row;
	int		col;
	bool	valid;

	begin = game->map_area_floodfill[game->map_player_y][game->map_player_x];
	row = game->map_player_y;
	col = game->map_player_x;
	valid = fill(game, begin, row, col);
	return (valid);
}

void	check_path(t_game *game)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	map_malloc_path(game);
	if (!floodfill(game))
		send_error("✗ Invalid path on the map\n", game);
}
