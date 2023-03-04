/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinoguei <dinoguei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 14:44:23 by dinoguei          #+#    #+#             */
/*   Updated: 2023/03/03 14:14:51 by dinoguei         ###   ########.fr       */
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
}

void	check_args(int argc, char **argv)
{
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
}

void	map_treatment(t_game *game)
{
	check_ber(game);
	get_y(game);
	map_malloc(game);
	check_rect(game);
	check_walls(game);
	check_elements(game);
	check_path(game);
}

void	start_game(t_game *game)
{
	game->window = true;
	game->mlx_init = true;
	game->mlx = mlx_init();
	game->win = mlx_new_window(game->mlx, game->map_x * 64,
			game->map_y * 64, "so_long project");
	get_xpm(game);
	render_images(game);
	mlx_hook(game->win, 2, 1L << 0, key_handler, game);
	mlx_hook(game->win, 17, 0, close_window, game);
	mlx_loop(game->mlx);
}

int	main(int argc, char **argv)
{
	t_game	game;

	(void)argc;
	check_args(argc, argv);
	init_game(&game);
	if (!argv[1])
		return (0);
	game.map = argv[1];
	map_treatment(&game);
	start_game(&game);
}
