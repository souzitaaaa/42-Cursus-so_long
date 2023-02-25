/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinoguei <dinoguei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 13:42:26 by dinoguei          #+#    #+#             */
/*   Updated: 2023/02/25 06:01:43 by dinoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

/*
Rin animation
*/

/*
Animation player
*/
void	render_sprite_miku(t_game *game)
{
	mlx_put_image_to_window (game->mlx, game->win,
			game->miku.sprite[game->miku.frame],
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

void	animate_teto(t_game *game)
{
	game->teto.frame = ++game->teto.frame % TETO_FRAMES;
	render_sprite_teto(game);
}

void	animate_rin(t_game *game)
{
	game->rin.frame = ++game->rin.frame % RIN_FRAMES;
	render_sprite_rin(game);
}

void	animate_miku(t_game *game)
{
	game->miku.frame = ++game->miku.frame % MIKU_FRAMES;
	render_sprite_miku(game);
}

int	animate(t_game *game)
{
	animate_miku(game);
	usleep(100000);
	animate_rin(game);
	animate_teto(game);
	return (0);
}
