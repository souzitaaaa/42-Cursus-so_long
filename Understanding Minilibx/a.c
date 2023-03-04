/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinoguei <dinoguei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 13:25:35 by dinoguei          #+#    #+#             */
/*   Updated: 2023/01/18 15:53:33 by dinoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "./mlx_linux/mlx.h"

int	main(void)
{
	void	*mlx;
	void	*mlx_win;

	mlx = mlx_init();
	//This will estabilish a connection to the graphical system,and returns a void * which holds the locaction of the MLX instance
	mlx_win = mlx_new_window(mlx, 1920, 1080, "Hello World!");
	//It will return a pointer to the window we created, we give the height, width and a title
	mlx_loop(mlx);
	//It will initiate the window rendering
}
