/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_ber.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinoguei <dinoguei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 14:44:14 by dinoguei          #+#    #+#             */
/*   Updated: 2023/02/20 14:45:47 by dinoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	check_ber(t_game *game)
{
	int	pos;

	ft_printf("\t{Checking if the map is .ber}\n");
	pos = ft_strlen(game->map) - 4;
	if (ft_strncmp(".ber", &game->map[pos], 4) != 0)
	{
		ft_printf("✗ The map you provided isn't .ber\n");
		exit (EXIT_FAILURE);
	}
	else
		ft_printf("✔ The map is .ber\n");
}
