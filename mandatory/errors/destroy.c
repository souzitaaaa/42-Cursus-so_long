/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinoguei <dinoguei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:10:32 by dinoguei          #+#    #+#             */
/*   Updated: 2023/02/20 14:48:28 by dinoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	destroy_xpms(t_game *game)
{
	if (game->exit)
		mlx_destroy_image(game->mlx, game->exit);
	if (game->collectable)
		mlx_destroy_image(game->mlx, game->collectable);
	if (game->player_right)
		mlx_destroy_image(game->mlx, game->player_right);
	if (game->player_left)
		mlx_destroy_image(game->mlx, game->player_left);
	if (game->floor)
		mlx_destroy_image(game->mlx, game->floor);
	if (game->wall)
		mlx_destroy_image(game->mlx, game->wall);
	if (game->exit_miku)
		mlx_destroy_image(game->mlx, game->exit_miku);
}

void	destroy(t_game *game)
{
	if (!game)
		return ;
	if (game->images == true)
		destroy_xpms(game);
	if (game->window == true)
		mlx_destroy_window(game->mlx, game->win);
	if (game->mlx_init == true)
	{
		mlx_destroy_display(game->mlx);
		free(game->mlx);
	}
	if (game->array_flood == true)
		free_map_flood(game);
	if (game->array_map == true)
		free_map(game);
}
