/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   squares.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinoguei <dinoguei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:54:10 by dinoguei          #+#    #+#             */
/*   Updated: 2023/01/19 15:12:30 by dinoguei         ###   ########.fr       */
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

	x = 150;
	y = 100;
	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, 720, 576, "Hello World!");
	img.img = mlx_new_image(mlx, 720, 576);
	img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_lenght, &img.endian);
	while (x <= 500)
	{
		my_mlx_pixel_put(&img, x, 100, 0x00ff00d6);
		if (x <= 400)
			my_mlx_pixel_put(&img, x + 50, 150, 0x00fab5fb);
		if (x <= 300)
			my_mlx_pixel_put(&img, x + 100, 200, 0x00d80092);
		if (x <= 200)
			my_mlx_pixel_put(&img, x + 150, 250, 0x00aa0020);
		my_mlx_pixel_put(&img, x, 450, 0x00ff00d6);
		if (x <= 400)
			my_mlx_pixel_put(&img, x + 50, 400, 0x00fab5fb);
		if (x <= 300)
			my_mlx_pixel_put(&img, x + 100, 350, 0x00d80092);
		if (x <= 200)
			my_mlx_pixel_put(&img, x + 150, 300, 0x00aa0020);
		x++;
	}
	while (y <= 450)
	{
		my_mlx_pixel_put(&img, 150, y, 0x00ff00d6);
		if (y <= 350)
			my_mlx_pixel_put(&img, 200, y + 50, 0x00fab5fb);
		if (y <= 250)
			my_mlx_pixel_put(&img, 250, y + 100, 0x00d80092);
		if (y <= 150)
			my_mlx_pixel_put(&img, 300, y + 150, 0x00aa0020);
		my_mlx_pixel_put(&img, 500, y, 0x00ff00d6);
		if (y <= 350)
			my_mlx_pixel_put(&img, 450, y + 50, 0x00fab5fb);
		if (y <= 250)
			my_mlx_pixel_put(&img, 400, y + 100, 0x00d80092);
		if (y <= 150)
			my_mlx_pixel_put(&img, 350, y + 150, 0x00aa0020);
		y++;
	}
	mlx_put_image_to_window(mlx, mlx_win, img.img, 0, 0);
	mlx_loop(mlx);
}
