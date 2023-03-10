/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_rect.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinoguei <dinoguei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 16:13:12 by dinoguei          #+#    #+#             */
/*   Updated: 2023/03/03 14:13:44 by dinoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	check_rect(t_game *game)
{
	int	x;
	int	i;
	int	x_check;

	x = ft_strlen (game->map_area[0]) - 1;
	i = 0;
	while (i < game->map_y)
	{
		x_check = ft_strlen (game->map_area[i]) - 1;
		if (x_check != x)
			send_error("✗ The map isn't a rectangle\n", game);
		i++;
	}
}
