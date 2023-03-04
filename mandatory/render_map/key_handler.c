/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_handler.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinoguei <dinoguei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:21:04 by dinoguei          #+#    #+#             */
/*   Updated: 2023/02/20 17:21:21 by dinoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	key_handler(int keycode, t_game *game)
{
	if (keycode == W)
		move_player(game, 'v', -1, keycode);
	else if (keycode == A)
		move_player(game, 'h', -1, keycode);
	else if (keycode == S)
		move_player(game, 'v', 1, keycode);
	else if (keycode == D)
		move_player(game, 'h', 1, keycode);
	else if (keycode == ESC)
		close_window(game);
	return (0);
}
