/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_xpm.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinoguei <dinoguei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 13:32:55 by dinoguei          #+#    #+#             */
/*   Updated: 2023/02/25 05:57:01 by dinoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	get_xpm_teto_sprites(t_game *game, int tile_size)
{
	game->teto.sprite = malloc(sizeof(void *) * TETO_FRAMES);
	if (!game->teto.sprite)
		send_error("Allocation for teto_sprites failed", game);
	game->teto.sprites = true;
	game->teto.sprite[0] =  mlx_xpm_file_to_image(game->mlx, TETO_1,
			&tile_size, &tile_size);
	game->teto.sprite[1] =  mlx_xpm_file_to_image(game->mlx, TETO_2,
			&tile_size, &tile_size);
	game->teto.sprite[2] =  mlx_xpm_file_to_image(game->mlx, TETO_3,
			&tile_size, &tile_size);
	game->teto.sprite[3] =  mlx_xpm_file_to_image(game->mlx, TETO_4,
			&tile_size, &tile_size);
	game->teto.sprite[4] =  mlx_xpm_file_to_image(game->mlx, TETO_5,
			&tile_size, &tile_size);
	game->teto.sprite[5] =  mlx_xpm_file_to_image(game->mlx, TETO_6,
			&tile_size, &tile_size);
	game->teto.sprite[6] =  mlx_xpm_file_to_image(game->mlx, TETO_7,
			&tile_size, &tile_size);
	game->teto.sprite[7] =  mlx_xpm_file_to_image(game->mlx, TETO_8,
			&tile_size, &tile_size);
	game->teto.sprite[8] =  mlx_xpm_file_to_image(game->mlx, TETO_9,
			&tile_size, &tile_size);
	game->teto.sprite[9] =  mlx_xpm_file_to_image(game->mlx, TETO_10,
			&tile_size, &tile_size);
	game->teto.sprite[10] =  mlx_xpm_file_to_image(game->mlx, TETO_11,
			&tile_size, &tile_size);
	game->teto.sprite[11] =  mlx_xpm_file_to_image(game->mlx, TETO_12,
			&tile_size, &tile_size);
	game->teto.sprite[12] =  mlx_xpm_file_to_image(game->mlx, TETO_13,
			&tile_size, &tile_size);
	game->teto.sprite[13] =  mlx_xpm_file_to_image(game->mlx, TETO_14,
			&tile_size, &tile_size);
	game->teto.sprite[14] =  mlx_xpm_file_to_image(game->mlx, TETO_15,
			&tile_size, &tile_size);
	game->teto.sprite[15] =  mlx_xpm_file_to_image(game->mlx, TETO_16,
			&tile_size, &tile_size);
	game->teto.sprite[16] =  mlx_xpm_file_to_image(game->mlx, TETO_17,
			&tile_size, &tile_size);
	game->teto.sprite[17] =  mlx_xpm_file_to_image(game->mlx, TETO_18,
			&tile_size, &tile_size);
	game->teto.sprite[18] =  mlx_xpm_file_to_image(game->mlx, TETO_19,
			&tile_size, &tile_size);
	game->teto.sprite[19] =  mlx_xpm_file_to_image(game->mlx, TETO_20,
			&tile_size, &tile_size);
	game->teto.sprite[20] =  mlx_xpm_file_to_image(game->mlx, TETO_21,
			&tile_size, &tile_size);
	game->teto.sprite[21] =  mlx_xpm_file_to_image(game->mlx, TETO_22,
			&tile_size, &tile_size);
	game->teto.sprite[22] =  mlx_xpm_file_to_image(game->mlx, TETO_23,
			&tile_size, &tile_size);
	game->teto.sprite[23] =  mlx_xpm_file_to_image(game->mlx, TETO_24,
			&tile_size, &tile_size);
}

void	get_xpm_mic_sprites(t_game *game, int tile_size)
{
	game->mic.sprite = malloc(sizeof(void *) * MIC_FRAMES);
	if (!game->mic.sprite)
		send_error("Allocation for mic_sprites failed", game);
	game->mic.sprites = true;
	game->mic.sprite[0] =  mlx_xpm_file_to_image(game->mlx, MIC_1,
			&tile_size, &tile_size);
	game->mic.sprite[1] =  mlx_xpm_file_to_image(game->mlx, MIC_2,
			&tile_size, &tile_size);
	game->mic.sprite[2] =  mlx_xpm_file_to_image(game->mlx, MIC_3,
			&tile_size, &tile_size);
	game->mic.sprite[3] =  mlx_xpm_file_to_image(game->mlx, MIC_4,
			&tile_size, &tile_size);
}

void	get_xpm_rin_sprites(t_game *game, int tile_size)
{
	game->rin.sprite = malloc(sizeof(void *) * RIN_FRAMES);
	if (!game->rin.sprite)
		send_error("Allocation for rin_sprites failed", game);
	game->rin.sprites = true;
	game->rin.sprite[0] =  mlx_xpm_file_to_image(game->mlx, RIN_1,
			&tile_size, &tile_size);
	game->rin.sprite[1] =  mlx_xpm_file_to_image(game->mlx, RIN_2,
			&tile_size, &tile_size);
	game->rin.sprite[2] =  mlx_xpm_file_to_image(game->mlx, RIN_3,
			&tile_size, &tile_size);
	game->rin.sprite[3] =  mlx_xpm_file_to_image(game->mlx, RIN_4,
			&tile_size, &tile_size);
	game->rin.sprite[4] =  mlx_xpm_file_to_image(game->mlx, RIN_5,
			&tile_size, &tile_size);
	game->rin.sprite[5] =  mlx_xpm_file_to_image(game->mlx, RIN_6,
			&tile_size, &tile_size);
	game->rin.sprite[6] =  mlx_xpm_file_to_image(game->mlx, RIN_7,
			&tile_size, &tile_size);
	game->rin.sprite[7] =  mlx_xpm_file_to_image(game->mlx, RIN_8,
			&tile_size, &tile_size);
	game->rin.sprite[8] =  mlx_xpm_file_to_image(game->mlx, RIN_9,
			&tile_size, &tile_size);
}

void	get_xpm_miku_sprites_2(t_game *game, int tile_size)
{
	game->miku.sprite[6] =  mlx_xpm_file_to_image(game->mlx, MIKU_7,
			&tile_size, &tile_size);
	game->miku.sprite[7] =  mlx_xpm_file_to_image(game->mlx, MIKU_8,
			&tile_size, &tile_size);
	game->miku.sprite[8] =  mlx_xpm_file_to_image(game->mlx, MIKU_9,
			&tile_size, &tile_size);
	game->miku.sprite[9] =  mlx_xpm_file_to_image(game->mlx, MIKU_10,
			&tile_size, &tile_size);
	game->miku.sprite[10] =  mlx_xpm_file_to_image(game->mlx, MIKU_11,
			&tile_size, &tile_size);
	game->miku.sprite[11] =  mlx_xpm_file_to_image(game->mlx, MIKU_12,
			&tile_size, &tile_size);
}

void	get_xpm_miku_sprites(t_game *game, int tile_size)
{
	game->miku.sprite = malloc(sizeof(void *) * MIKU_FRAMES);
	if (!game->miku.sprite)
		send_error("Allocation for miku_sprites failed", game);
	game->miku.sprites = true;
	game->miku.sprite[0] =  mlx_xpm_file_to_image(game->mlx, MIKU_1,
			&tile_size, &tile_size);
	game->miku.sprite[1] =  mlx_xpm_file_to_image(game->mlx, MIKU_2,
			&tile_size, &tile_size);
	game->miku.sprite[2] =  mlx_xpm_file_to_image(game->mlx, MIKU_3,
			&tile_size, &tile_size);
	game->miku.sprite[3] =  mlx_xpm_file_to_image(game->mlx, MIKU_4,
			&tile_size, &tile_size);
	game->miku.sprite[4] =  mlx_xpm_file_to_image(game->mlx, MIKU_5,
			&tile_size, &tile_size);
	game->miku.sprite[5] =  mlx_xpm_file_to_image(game->mlx, MIKU_6,
			&tile_size, &tile_size);
	get_xpm_miku_sprites_2(game, tile_size);
}

void	get_xpm(t_game *game)
{
	int	tile_size;

	tile_size = TILE_SIZE;
	game->exit = mlx_xpm_file_to_image(game->mlx, EXIT,
			&tile_size, &tile_size);
	game->player_right = mlx_xpm_file_to_image(game->mlx, MIKU_RIGHT,
			&tile_size, &tile_size);
	game->player_left = mlx_xpm_file_to_image(game->mlx, MIKU_LEFT,
			&tile_size, &tile_size);
	game->wall = mlx_xpm_file_to_image(game->mlx, WALL,
			&tile_size, &tile_size);
	game->floor = mlx_xpm_file_to_image(game->mlx, FLOOR,
			&tile_size, &tile_size);
	game->rin_img = mlx_xpm_file_to_image(game->mlx, RIN,
			&tile_size, &tile_size);
	game->exit_miku = mlx_xpm_file_to_image(game->mlx, EXIT_MIKU,
			&tile_size, &tile_size);
	game->luka = mlx_xpm_file_to_image(game->mlx, LUKA,
			&tile_size, &tile_size);
	game->teto_img = mlx_xpm_file_to_image(game->mlx, TETO,
			&tile_size, &tile_size);
	game->black_rect = mlx_xpm_file_to_image(game->mlx, BLACK,
			&tile_size, &tile_size);
	get_xpm_miku_sprites(game, tile_size);
	get_xpm_rin_sprites(game, tile_size);
	get_xpm_mic_sprites(game, tile_size);
	get_xpm_teto_sprites(game, tile_size);
	game->images = true;
}

void	put_enemy(t_game *game, int x, int y, int element)
{
	if (element == 5)
		mlx_put_image_to_window(game->mlx, game->win,
			game->rin_img, x * 64, y * 64);
	if (element == 6)
		mlx_put_image_to_window(game->mlx, game->win,
			game->luka, x * 64, y * 64);
	if (element == 7)
		mlx_put_image_to_window(game->mlx, game->win,
			game->teto_img, x * 64, y * 64);
}

void	put_xpm(t_game *game, int element, int y, int x)
{
	if (element == 0)
		mlx_put_image_to_window(game->mlx, game->win,
			game->floor, x * 64, y * 64);
	if (element == 1)
		mlx_put_image_to_window(game->mlx, game->win,
			game->wall, x * 64, y * 64);
	if (element == 2)
		mlx_put_image_to_window(game->mlx, game->win,
			game->player_right, x * 64, y * 64);
	if (element == 3)
		mlx_put_image_to_window(game->mlx, game->win,
			game->mic.sprite[0], x * 64, y * 64);
	if (element == 4)
		mlx_put_image_to_window(game->mlx, game->win,
			game->exit, x * 64, y * 64);
	if (element == 5 || element == 6 || element == 7)
		put_enemy(game, x, y, element);
}
