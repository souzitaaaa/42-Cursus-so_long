/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_xpm_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinoguei <dinoguei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 13:15:23 by dinoguei          #+#    #+#             */
/*   Updated: 2023/03/03 13:16:18 by dinoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	get_xpm_miku_sprites(t_game *game, int tile_size)
{
	game->miku.sprite = malloc(sizeof(void *) * MIKU_FRAMES);
	if (!game->miku.sprite)
		send_error("Allocation for miku_sprites failed", game);
	game->miku.sprites = true;
	game->miku.sprite[0] = mlx_xpm_file_to_image(game->mlx, MIKU_1,
			&tile_size, &tile_size);
	game->miku.sprite[1] = mlx_xpm_file_to_image(game->mlx, MIKU_2,
			&tile_size, &tile_size);
	game->miku.sprite[2] = mlx_xpm_file_to_image(game->mlx, MIKU_3,
			&tile_size, &tile_size);
	game->miku.sprite[3] = mlx_xpm_file_to_image(game->mlx, MIKU_4,
			&tile_size, &tile_size);
	game->miku.sprite[4] = mlx_xpm_file_to_image(game->mlx, MIKU_5,
			&tile_size, &tile_size);
	game->miku.sprite[5] = mlx_xpm_file_to_image(game->mlx, MIKU_6,
			&tile_size, &tile_size);
	get_xpm_miku_sprites_2(game, tile_size);
}

void	get_xpm_miku_sprites_2(t_game *game, int tile_size)
{
	game->miku.sprite[6] = mlx_xpm_file_to_image(game->mlx, MIKU_7,
			&tile_size, &tile_size);
	game->miku.sprite[7] = mlx_xpm_file_to_image(game->mlx, MIKU_8,
			&tile_size, &tile_size);
	game->miku.sprite[8] = mlx_xpm_file_to_image(game->mlx, MIKU_9,
			&tile_size, &tile_size);
	game->miku.sprite[9] = mlx_xpm_file_to_image(game->mlx, MIKU_10,
			&tile_size, &tile_size);
	game->miku.sprite[10] = mlx_xpm_file_to_image(game->mlx, MIKU_11,
			&tile_size, &tile_size);
	game->miku.sprite[11] = mlx_xpm_file_to_image(game->mlx, MIKU_12,
			&tile_size, &tile_size);
}

void	get_xpm_miku_exit(t_game *game, int tile_size)
{
	game->miku_exit.sprite = malloc(sizeof(void *) * MIKU_EXIT_FRAMES);
	if (!game->miku_exit.sprite)
		send_error("Allocation for miku_exit failed", game);
	game->miku_exit.sprites = true;
	game->miku_exit.sprite[0] = mlx_xpm_file_to_image(game->mlx, MIKU_EXIT_1,
			&tile_size, &tile_size);
	game->miku_exit.sprite[1] = mlx_xpm_file_to_image(game->mlx, MIKU_EXIT_2,
			&tile_size, &tile_size);
	game->miku_exit.sprite[2] = mlx_xpm_file_to_image(game->mlx, MIKU_EXIT_3,
			&tile_size, &tile_size);
	game->miku_exit.sprite[3] = mlx_xpm_file_to_image(game->mlx, MIKU_EXIT_4,
			&tile_size, &tile_size);
	game->miku_exit.sprite[4] = mlx_xpm_file_to_image(game->mlx, MIKU_EXIT_5,
			&tile_size, &tile_size);
	game->miku_exit.sprite[5] = mlx_xpm_file_to_image(game->mlx, MIKU_EXIT_6,
			&tile_size, &tile_size);
	get_xpm_miku_exit_2(game, tile_size);
}

void	get_xpm_miku_exit_2(t_game *game, int tile_size)
{
	game->miku_exit.sprite[6] = mlx_xpm_file_to_image(game->mlx, MIKU_EXIT_7,
			&tile_size, &tile_size);
	game->miku_exit.sprite[7] = mlx_xpm_file_to_image(game->mlx, MIKU_EXIT_8,
			&tile_size, &tile_size);
	game->miku_exit.sprite[8] = mlx_xpm_file_to_image(game->mlx, MIKU_EXIT_9,
			&tile_size, &tile_size);
	game->miku_exit.sprite[9] = mlx_xpm_file_to_image(game->mlx, MIKU_EXIT_10,
			&tile_size, &tile_size);
	game->miku_exit.sprite[10] = mlx_xpm_file_to_image(game->mlx, MIKU_EXIT_11,
			&tile_size, &tile_size);
	game->miku_exit.sprite[11] = mlx_xpm_file_to_image(game->mlx, MIKU_EXIT_12,
			&tile_size, &tile_size);
}
