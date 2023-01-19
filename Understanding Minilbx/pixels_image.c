/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pixels_image.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinoguei <dinoguei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:54:10 by dinoguei          #+#    #+#             */
/*   Updated: 2023/01/19 14:15:27 by dinoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	my_mlx_pixel_put(t_data *data, int x, int y, int color)
{
	char	*dst;

	dst = data->addr + (y * data->line_lenght + x * (data->bits_per_pixel / 8));
	/*
	data->addr				is the starting memory address if the window
	y * data->line_lenght			y represents the vertial pos and the data->line_lenght the number of bytes per line. By multiplying these two values gives the number of bytes from the start of the image to the start of the line where the pixel is located
	x * (data->bits_per_pixel / 8)	x represents the horizontal pos and the data->bits_per_pixel / 8 gives the number of bytes per pixel, since a byte typically consists of 8 bits, dividing the number of bits per pixel by 8 gives the number of bytes per pixel
	Adding all these values gives the memoery offset of the pixel from the start of the image 
	*/
	*(unsigned int*)dst = color;
}

int	main(void)
{
	void	*mlx;
	void	*mlx_win;
	t_data	img;

	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, 720, 576, "Hello World!");
	img.img = mlx_new_image(mlx, 720, 576);
	//we need to get the memory address where we will mutate the bytes freely
	img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_lenght, &img.endian);
	//returns information about the created image, allowing a user to modify it later
	my_mlx_pixel_put(&img, 100, 100, 0x00FF0000);
	//we recreate the mlx_put_pixel, because the original one is very slow, this function draws a pixel in the window
	mlx_put_image_to_window(mlx, mlx_win, img.img, 0, 0);
	//this will be the connection to the display, window to use and the image
	mlx_loop(mlx);
}

/* My struct is on the .h file but if you want to test it where it is

typedef struct s_data
{
	void	*img;
	char	*addr;
	int	bits_per_pixel;
	int	line_lenght;
	int	endian;
}				t_data;
*/
