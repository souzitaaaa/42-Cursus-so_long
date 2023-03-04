/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_xpm_3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinoguei <dinoguei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 13:16:47 by dinoguei          #+#    #+#             */
/*   Updated: 2023/03/03 13:17:46 by dinoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	get_xpm_rin_sprites(t_game *game, int tile_size)
{
	game->rin.sprite = malloc(sizeof(void *) * RIN_FRAMES);
	if (!game->rin.sprite)
		send_error("Allocation for rin_sprites failed", game);
	game->rin.sprites = true;
	game->rin.sprite[0] = mlx_xpm_file_to_image(game->mlx, RIN_1,
			&tile_size, &tile_size);
	game->rin.sprite[1] = mlx_xpm_file_to_image(game->mlx, RIN_2,
			&tile_size, &tile_size);
	game->rin.sprite[2] = mlx_xpm_file_to_image(game->mlx, RIN_3,
			&tile_size, &tile_size);
	game->rin.sprite[3] = mlx_xpm_file_to_image(game->mlx, RIN_4,
			&tile_size, &tile_size);
	game->rin.sprite[4] = mlx_xpm_file_to_image(game->mlx, RIN_5,
			&tile_size, &tile_size);
	game->rin.sprite[5] = mlx_xpm_file_to_image(game->mlx, RIN_6,
			&tile_size, &tile_size);
	game->rin.sprite[6] = mlx_xpm_file_to_image(game->mlx, RIN_7,
			&tile_size, &tile_size);
	game->rin.sprite[7] = mlx_xpm_file_to_image(game->mlx, RIN_8,
			&tile_size, &tile_size);
	game->rin.sprite[8] = mlx_xpm_file_to_image(game->mlx, RIN_9,
			&tile_size, &tile_size);
}

void	get_xpm_teto_sprites(t_game *game, int tile_size)
{
	game->teto.sprite = malloc(sizeof(void *) * TETO_FRAMES);
	if (!game->teto.sprite)
		send_error("Allocation for teto_sprites failed", game);
	game->teto.sprites = true;
	game->teto.sprite[0] = mlx_xpm_file_to_image(game->mlx, TETO_1,
			&tile_size, &tile_size);
	game->teto.sprite[1] = mlx_xpm_file_to_image(game->mlx, TETO_2,
			&tile_size, &tile_size);
	game->teto.sprite[2] = mlx_xpm_file_to_image(game->mlx, TETO_3,
			&tile_size, &tile_size);
	game->teto.sprite[3] = mlx_xpm_file_to_image(game->mlx, TETO_4,
			&tile_size, &tile_size);
	game->teto.sprite[4] = mlx_xpm_file_to_image(game->mlx, TETO_5,
			&tile_size, &tile_size);
	game->teto.sprite[5] = mlx_xpm_file_to_image(game->mlx, TETO_6,
			&tile_size, &tile_size);
	game->teto.sprite[6] = mlx_xpm_file_to_image(game->mlx, TETO_7,
			&tile_size, &tile_size);
	game->teto.sprite[7] = mlx_xpm_file_to_image(game->mlx, TETO_8,
			&tile_size, &tile_size);
	get_xpm_teto_sprites_2(game, tile_size);
}

void	get_xpm_teto_sprites_2(t_game *game, int tile_size)
{
	game->teto.sprite[8] = mlx_xpm_file_to_image(game->mlx, TETO_9,
			&tile_size, &tile_size);
	game->teto.sprite[9] = mlx_xpm_file_to_image(game->mlx, TETO_10,
			&tile_size, &tile_size);
	game->teto.sprite[10] = mlx_xpm_file_to_image(game->mlx, TETO_11,
			&tile_size, &tile_size);
	game->teto.sprite[11] = mlx_xpm_file_to_image(game->mlx, TETO_12,
			&tile_size, &tile_size);
	game->teto.sprite[12] = mlx_xpm_file_to_image(game->mlx, TETO_13,
			&tile_size, &tile_size);
	game->teto.sprite[13] = mlx_xpm_file_to_image(game->mlx, TETO_14,
			&tile_size, &tile_size);
	game->teto.sprite[14] = mlx_xpm_file_to_image(game->mlx, TETO_15,
			&tile_size, &tile_size);
	game->teto.sprite[15] = mlx_xpm_file_to_image(game->mlx, TETO_16,
			&tile_size, &tile_size);
	game->teto.sprite[16] = mlx_xpm_file_to_image(game->mlx, TETO_17,
			&tile_size, &tile_size);
	get_xpm_teto_sprites_3(game, tile_size);
}

void	get_xpm_teto_sprites_3(t_game *game, int tile_size)
{
	game->teto.sprite[17] = mlx_xpm_file_to_image(game->mlx, TETO_18,
			&tile_size, &tile_size);
	game->teto.sprite[18] = mlx_xpm_file_to_image(game->mlx, TETO_19,
			&tile_size, &tile_size);
	game->teto.sprite[19] = mlx_xpm_file_to_image(game->mlx, TETO_20,
			&tile_size, &tile_size);
	game->teto.sprite[20] = mlx_xpm_file_to_image(game->mlx, TETO_21,
			&tile_size, &tile_size);
	game->teto.sprite[21] = mlx_xpm_file_to_image(game->mlx, TETO_22,
			&tile_size, &tile_size);
	game->teto.sprite[22] = mlx_xpm_file_to_image(game->mlx, TETO_23,
			&tile_size, &tile_size);
	game->teto.sprite[23] = mlx_xpm_file_to_image(game->mlx, TETO_24,
			&tile_size, &tile_size);
}
