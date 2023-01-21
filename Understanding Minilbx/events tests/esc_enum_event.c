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

int	close(int keycode, t_vars *vars)
{	
	if (keycode == ESC)
		mlx_destroy_window(vars->mlx, vars->win);
	return (0);
}

int	main(void)
{
	t_vars	vars;

	vars.mlx = mlx_init();
	vars.win = mlx_new_window(vars.mlx, 1920, 1080, "Hello World!");
	mlx_hook(vars.win, 2, 1L<<0, close, &vars);
	//When I press a key it will start this function
	mlx_loop(vars.mlx);
}
/*I created a enum struct where I basically will put there the keycode and just call the key I want, it will make the codemore cleaner

typedef enum  keycodes
{
        ESC = 65307,
}        
*/
