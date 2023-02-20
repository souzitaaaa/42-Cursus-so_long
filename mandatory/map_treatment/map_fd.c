/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_fd.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinoguei <dinoguei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 18:29:58 by dinoguei          #+#    #+#             */
/*   Updated: 2023/01/27 18:55:58 by dinoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	open_map(t_game *game)
{
	game->map_fd = open(game->map, O_RDONLY);
}

void	close_map(t_game *game)
{
	close(game->map_fd);
}
