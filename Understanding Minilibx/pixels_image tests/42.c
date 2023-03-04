/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   42.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinoguei <dinoguei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:54:10 by dinoguei          #+#    #+#             */
/*   Updated: 2023/01/19 15:31:39 by dinoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	my_mlx_pixel_put(t_data *data, int x, int y, int color)
{
	char	*dst;

	dst = data->addr + (y * data->line_lenght + x * (data->bits_per_pixel / 8));
	*(unsigned int*)dst = color;
}

int	main(void)
{
	void	*mlx;
	void	*mlx_win;
	t_data	img;
	int x;
	int y;

	x = 200;
	y = 200;
	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, 720, 576, "Hello World!");
	img.img = mlx_new_image(mlx, 720, 576);
	img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_lenght, &img.endian);
	while (x <= 450)
	{
		if (x <= 300)
			my_mlx_pixel_put(&img, x, 300, 0x0000ffff);
		if (x >= 350)
		{
			my_mlx_pixel_put(&img, x, 200, 0x00ffffff);
			my_mlx_pixel_put(&img, x, 300, 0x00ffffff);
			my_mlx_pixel_put(&img, x, 400, 0x00ffffff);
		}
		x++;
	}
	while (y <= 400)
	{
		if (y <= 300)
		{
			my_mlx_pixel_put(&img, 200, y, 0x0000ffff);
			my_mlx_pixel_put(&img, 450, y, 0x00ffffff);
		}
		my_mlx_pixel_put(&img, 300, y, 0x0000ffff);
		if (y >= 300)
			my_mlx_pixel_put(&img, 350, y, 0x00ffffff);
		y++;
	}
	mlx_put_image_to_window(mlx, mlx_win, img.img, 0, 0);
	mlx_loop(mlx);
}
