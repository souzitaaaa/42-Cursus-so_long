/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_movs.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinoguei <dinoguei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 15:31:44 by dinoguei          #+#    #+#             */
/*   Updated: 2023/02/21 18:14:01 by dinoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	put_black(t_game *game)
{
	mlx_put_image_to_window(game->mlx, game->win,
		game->black_rect, ((game->map_x * 64) / 2) - 3, (game->map_y * 64));
}

void	put_movs(t_game *game)
{
	char	*movs;

	game->n_movs += 1;
	movs = ft_itoa(game->n_movs);
	put_black(game);
	mlx_string_put(game->mlx, game->win,
		(game->map_x * 64) / 2, (game->map_y * 64) + 20, 0xffffff, movs);
	free(movs);
}
