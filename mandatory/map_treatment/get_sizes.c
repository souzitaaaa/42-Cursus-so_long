/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_sizes.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinoguei <dinoguei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 14:28:22 by dinoguei          #+#    #+#             */
/*   Updated: 2023/03/03 14:13:54 by dinoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	get_y(t_game *game)
{
	int		lines;
	char	*out;

	open_map(game);
	lines = 0;
	while (1)
	{
		out = get_next_line(game->map_fd);
		if (!out)
			break ;
		lines++;
		free(out);
	}
	if (lines == 0)
		send_error ("✗ Empty file\n", game);
	game->map_y = lines;
	close_map(game);
}
