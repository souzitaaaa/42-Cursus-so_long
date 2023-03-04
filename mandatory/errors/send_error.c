/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   send_error.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinoguei <dinoguei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 14:32:01 by dinoguei          #+#    #+#             */
/*   Updated: 2023/03/03 14:06:08 by dinoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	send_error(char *error_msg, t_game *game)
{
	ft_printf("Error\n%s\n", error_msg);
	destroy (game);
	exit(EXIT_FAILURE);
}
