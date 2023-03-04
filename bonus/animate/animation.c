/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinoguei <dinoguei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 13:42:26 by dinoguei          #+#    #+#             */
/*   Updated: 2023/03/04 11:50:04 by dinoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

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

void	animate_miku_exit(t_game *game)
{
	game->miku_exit.frame = ++game->miku_exit.frame % MIKU_EXIT_FRAMES;
	render_sprite_miku_exit(game);
}

int	animate(t_game *game)
{
	if (game->map_area[game->map_player_y][game->map_player_x] == 'E')
		animate_miku_exit(game);
	else
		animate_miku(game);
	if (!(game->enemies.map_rin_x == 0))
		animate_rin(game);
	if (!(game->enemies.map_teto_x == 0))
		animate_teto(game);
	usleep(100000);
	return (0);
}
