/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_images.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinoguei <dinoguei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:53:39 by dinoguei          #+#    #+#             */
/*   Updated: 2023/02/20 16:53:58 by dinoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	render_images(t_game *game)
{
	int	y;
	int	x;
	int	element;

	y = 0;
	x = 0;
	while (y < game->map_y)
	{
		x = 0;
		while (x < game->map_x)
		{
			element = check_ent(game, y, x);
			if (element == 6)
				send_error("⚠ Error on the check_ent file\n", game);
			put_xpm(game, element, y, x);
			x++;
		}
		y++;
	}
}
