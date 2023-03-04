/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   events.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinoguei <dinoguei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:54:10 by dinoguei          #+#    #+#             */
/*   Updated: 2023/01/21 05:23:36 by dinoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	get_code(int keycode, t_vars *vars)
{
	(void)vars;
	printf("Keycode of %c is %d\n",(char)keycode, keycode);
	//This will print the keycode of the ke pressed, it will be usefull to set up the keycodes on the enum struct
	return (0);
}

int	main(void)
{
	t_vars	vars;

	vars.mlx = mlx_init();
	vars.win = mlx_new_window(vars.mlx, 500, 500, "Get the Keycode");
	mlx_hook(vars.win, 2, 1L<<0, get_code, &vars);
	mlx_loop(vars.mlx);
}
