/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinoguei <dinoguei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:10:32 by dinoguei          #+#    #+#             */
/*   Updated: 2023/03/04 11:57:24 by dinoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	destroy_xpms(t_game *game)
{
	if (game->exit)
		mlx_destroy_image(game->mlx, game->exit);
	if (game->player_right)
		mlx_destroy_image(game->mlx, game->player_right);
	if (game->player_left)
		mlx_destroy_image(game->mlx, game->player_left);
	if (game->floor)
		mlx_destroy_image(game->mlx, game->floor);
	if (game->wall)
		mlx_destroy_image(game->mlx, game->wall);
	if (game->rin_img)
		mlx_destroy_image(game->mlx, game->rin_img);
	if (game->teto_img)
		mlx_destroy_image(game->mlx, game->teto_img);
	if (game->black_rect)
		mlx_destroy_image(game->mlx, game->black_rect);
	if (game->mic)
		mlx_destroy_image(game->mlx, game->mic);
}

void	destroy_sprites(t_game *game)
{
	int	i;

	i = -1;
	while (i++ < MIKU_FRAMES - 1)
		mlx_destroy_image(game->mlx, game->miku.sprite[i]);
	free(game->miku.sprite);
	i = -1;
	while (i++ < RIN_FRAMES - 1)
		mlx_destroy_image(game->mlx, game->rin.sprite[i]);
	free(game->rin.sprite);
	i = -1;
	while (i++ < TETO_FRAMES - 1)
		mlx_destroy_image(game->mlx, game->teto.sprite[i]);
	free(game->teto.sprite);
	i = -1;
	while (i++ < MIKU_EXIT_FRAMES - 1)
		mlx_destroy_image(game->mlx, game->miku_exit.sprite[i]);
	free(game->miku_exit.sprite);
}

void	destroy(t_game *game)
{
	if (!game)
		return ;
	if (game->images == true)
		destroy_xpms(game);
	if (game->miku.sprites == true || game->rin.sprites == true
		|| game->teto.sprites == true || game->miku_exit.sprites == true)
		destroy_sprites(game);
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
