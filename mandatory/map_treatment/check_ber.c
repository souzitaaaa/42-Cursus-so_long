/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_ber.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinoguei <dinoguei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 14:44:14 by dinoguei          #+#    #+#             */
/*   Updated: 2023/03/03 14:12:46 by dinoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	check_ber(t_game *game)
{
	int	pos;

	pos = ft_strlen(game->map) - 4;
	if (ft_strncmp(".ber", &game->map[pos], 4) != 0)
	{
		ft_printf("Error\n✗ The map you provided isn't .ber\n");
		exit (EXIT_FAILURE);
	}
}
