/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   events.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinoguei <dinoguei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:54:10 by dinoguei          #+#    #+#             */
/*   Updated: 2023/01/21 04:35:06 by dinoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	close(int keycode, t_vars *vars)
{
	(void)keycode;
	//the keycode will be in future what defines each key 
	mlx_destroy_window(vars->mlx, vars->win);
	//it "destroys" the window 
	return (0);
}

int	main(void)
{
	t_vars	vars;

	vars.mlx = mlx_init();
	vars.win = mlx_new_window(vars.mlx, 1920, 1080, "Hello World!");
	mlx_hook(vars.win, 2, 1L<<0, close, &vars);
	//receives the window, then the x11 event a mask and a function of what to do when it receives those x11 args  
	mlx_loop(vars.mlx);
}
/* My struct is on the .h file but if you want to test it, here it is

typedef struct s_vars
{
	void	*mlx;
	void	*win;
}				t_vars;
*/
