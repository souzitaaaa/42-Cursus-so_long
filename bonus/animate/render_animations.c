/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_animations.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinoguei <dinoguei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 13:02:25 by dinoguei          #+#    #+#             */
/*   Updated: 2023/03/03 13:02:42 by dinoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	render_sprite_miku(t_game *game)
{
	mlx_put_image_to_window (game->mlx, game->win,
		game->miku.sprite[game->miku.frame],
		game->map_player_x * 64, game->map_player_y * 64);
}

void	render_sprite_miku_exit(t_game *game)
{
	mlx_put_image_to_window (game->mlx, game->win,
		game->miku_exit.sprite[game->miku_exit.frame],
		game->map_player_x * 64, game->map_player_y * 64);
}

void	render_sprite_rin(t_game *game)
{
	mlx_put_image_to_window (game->mlx, game->win,
		game->rin.sprite[game->rin.frame],
		game->enemies.map_rin_x * 64, game->enemies.map_rin_y * 64);
}

void	render_sprite_teto(t_game *game)
{
	mlx_put_image_to_window (game->mlx, game->win,
		game->teto.sprite[game->teto.frame],
		game->enemies.map_teto_x * 64, game->enemies.map_teto_y * 64);
}
