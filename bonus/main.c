/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinoguei <dinoguei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 14:44:23 by dinoguei          #+#    #+#             */
/*   Updated: 2023/02/25 06:08:57 by dinoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	init_game(t_game *game)
{
	game->map_y = 0;
	game->map_x = 0;
	game->map_exit = 0;
	game->map_collectable = 0;
	game->map_player = 0;
	game->map_player_y = 0;
	game->map_player_x = 0;
	game->n_movs = 0;
	game->images = false;
	game->window = false;
	game->mlx_init = false;
	game->array_map = false;
	game->array_flood = false;
	game->miku.frame = 0;
	game->miku.sprites = false;
	game->rin.frame = 0;
	game->rin.sprites = false;
	game->enemies.rin = 0;
	game->enemies.map_rin_y = 0;
	game->enemies.map_rin_x = 0;
	game->enemies.luka = 0;
	game->enemies.map_luka_y = 0;
	game->enemies.map_luka_x = 0;
	game->enemies.teto = 0;
	game->enemies.map_teto_y = 0;
	game->enemies.map_teto_x = 0;
	game->mic.frame = 0;
}

void	check_args(int argc, char **argv)
{
	ft_printf("[Checking if the arguments are valid]\n\n");
	if (argc != 2)
	{
		ft_printf("✗ Wrong number of arguments\n");
		exit (EXIT_FAILURE);
	}
	if (argv[1] == NULL)
	{
		ft_printf("✗ No map inserted\n");
		exit (EXIT_FAILURE);
	}
	ft_printf("✔ All the arguments are valid\n\n");
}

void	map_treatment(t_game *game)
{
	ft_printf("[Treatment of the map]\n\n");
	ft_printf("\t{Map extension name} \n  %s\n", game->map);
	check_ber(game);
	get_y(game);
	map_malloc(game);
	check_rect(game);
	check_walls(game);
	check_elements(game);
	ft_printf("\t{Checking valid path}\n");
	check_path(game);
}

void	start_game(t_game *game)
{
	game->window = true;
	game->mlx_init = true;
	game->mlx = mlx_init();
	game->win = mlx_new_window(game->mlx, game->map_x * 64,
			game->map_y * 64 + 40, "so_long project");
	get_xpm(game);
	render_images(game);
	mlx_string_put(game->mlx, game->win,
		(game->map_x * 64) / 2 - 70, (game->map_y * 64) + 19, 0xffffff, "Movements: ");
	mlx_hook(game->win, 2, 1L << 0, key_handler, game);
	mlx_hook(game->win, 17, 0, close_window, game);
	mlx_loop_hook(game->mlx, animate, game);
	mlx_loop(game->mlx);
}

int	main(int argc, char **argv)
{
	t_game	game;

	(void)argc;
	srand(time(NULL));
	check_args(argc, argv);
	init_game(&game);
	if (!argv[1])
		return (0);
	game.map = argv[1];
	map_treatment(&game);
	start_game(&game);
}
