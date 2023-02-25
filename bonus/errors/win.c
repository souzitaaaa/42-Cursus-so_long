/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   win.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinoguei <dinoguei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:13:53 by dinoguei          #+#    #+#             */
/*   Updated: 2023/02/23 12:14:38 by dinoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	win(t_game *game)
{
	ft_printf("YOU WON!\n");
	destroy(game);
	exit(EXIT_SUCCESS);
}

void	noob(t_game *game)
{
	ft_printf("YOU LOST!\n");
	ft_printf("(How did you manage to lose with static enemies? :P)\n");
	destroy(game);
	exit(EXIT_SUCCESS);
}
