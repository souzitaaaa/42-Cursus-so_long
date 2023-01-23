/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hooks.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinoguei <dinoguei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:54:10 by dinoguei          #+#    #+#             */
/*   Updated: 2023/01/23 14:25:48 by dinoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	key_hook(int keycode, t_vars *vars)
{
	(void)vars;
	(void)keycode;
	printf("Ouch...Please be more gentle (>_<)\n");
	//whenever I press any key it will print this msg
	//Disclaimer: It prints one at the momento you execute the program because the funcion acts for pressing and releasing keys
	return (0);
}

int	mouse_hook(int keycode, t_vars *vars)
{
	(void)vars;
	if (keycode == 1)
		printf ("Trying to pat me won't resolve anything (¬､¬)\n");
	//if I click with the left click of the mouse on the window it will print this msg
	return (0);
}

int	main(void)
{
	t_vars	vars;

	vars.mlx = mlx_init();
	vars.win = mlx_new_window(vars.mlx, 750, 750, "Pressing...");
	mlx_key_hook(vars.win, key_hook, &vars);
	//the diff between this and the mlx_hook is that the mlx_key_hook, in the background calls that function with the appropriate X11 event types
	mlx_mouse_hook(vars.win, mouse_hook, &vars);
	//same thing but with the mouse events
	mlx_loop(vars.mlx);
}
