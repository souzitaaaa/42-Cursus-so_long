/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pixels_image.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinoguei <dinoguei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:54:10 by dinoguei          #+#    #+#             */
/*   Updated: 2023/01/19 19:26:02 by dinoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	my_mlx_pixel_put(t_data *data, int x, int y, int color)
{
	char	*dst;

	dst = data->addr + (y * data->line_lenght + x * (data->bits_per_pixel / 8));
	*(unsigned int*)dst = color;
}

void get_hair(int x, int y, t_data *img)
{
	while (x <= 1280 && y <= 1000)
	{
		if (x>= 526 && x<= 776)
			fill_hair_y(x, 100, img, 0x00ffff);
		if ((x >= 476 && x <= 526) || (x>=776 && x<=826))
			fill_hair_y(x, 150, img, 0x00ffff);
		if ((x >= 426 && x <= 476) || (x>=826 && x<=876))
			fill_hair_y(x, 200, img, 0x00ffff);
		if ((x >= 376 && x <= 426) || (x>=876 && x<=926))
			fill_hair_y(x, 250, img, 0x00ffff);
		if ((x >= 376 && x <= 426) || (x>=876 && x<=926))
			fill_hair_y(x, 550, img, 0x00ffff);
		if ((x >= 426 && x <= 476) || (x>=826 && x<=876))
			fill_hair_y(x, 650, img, 0x00ffff);
		if ((x>= 476 && x<= 526) || (x>=776 && x<=826))
			fill_hair_y(x, 400, img, 0x00ffff);
		if ((x>= 526 && x<= 576) || (x>=726 && x<=776))
			fill_hair_y(x, 350, img, 0x00ffff);
		if (x>= 576 && x<= 626)
			fill_hair_y(x, 450, img, 0x00ffff);
		if (x>= 626 && x<= 676)
			fill_hair_y(x, 500, img, 0x00ffff);
		if (x>= 676 && x<= 726)
			fill_hair_y(x, 550, img, 0x00ffff);
		if (y <= 150)
		{
			my_mlx_pixel_put(img, 476, y + 50, 0x00ffff);
			my_mlx_pixel_put(img, 826, y + 50, 0x00ffff);
			my_mlx_pixel_put(img, 426, y + 100, 0x00ffff);
			my_mlx_pixel_put(img, 876, y + 100, 0x00ffff);
			my_mlx_pixel_put(img, 526, y, 0x00ffff);
			my_mlx_pixel_put(img, 776, y, 0x00ffff);
/*
			my_mlx_pixel_put(img, 576, y, 0x00ffff);
			my_mlx_pixel_put(img, 626, y, 0x00ffff);
			my_mlx_pixel_put(img, 676, y, 0x00ffff);
			my_mlx_pixel_put(img, 726, y, 0x00ffff);
*/
		}
		if(y>=250 && y<=550)
		{
			my_mlx_pixel_put(img, 376, y, 0x00ffff);
			my_mlx_pixel_put(img, 926, y, 0x00ffff);
		}
		if (y>= 550 && y<=650)
		{
			my_mlx_pixel_put(img, 426, y, 0x00ffff);
			my_mlx_pixel_put(img, 876, y, 0x00ffff);
		}
		if (y>= 400 && y<= 650)
		{
			my_mlx_pixel_put(img, 476, y, 0x00ffff);
			my_mlx_pixel_put(img, 826, y, 0x00ffff);
		}
		if (y>=350 && y<= 400)
		{
			my_mlx_pixel_put(img, 526, y, 0x00ffff);
			my_mlx_pixel_put(img, 776, y, 0x00ffff);
		}
		if (y>= 350 && y<= 450)
			my_mlx_pixel_put(img, 576, y, 0x00ffff);
		if (y>= 450 && y<= 500)
			my_mlx_pixel_put(img, 626, y, 0x00ffff);
		if (y>= 500 && y<= 550)
			my_mlx_pixel_put(img, 676, y, 0x00ffff);
		if (y<=550 && y>=350)
			my_mlx_pixel_put(img, 726, y, 0x00ffff);
		x++;
		y++;
	}
}

void get_face(int x, int y, t_data *img)
{
	while (x <= 1280 && y <= 1000)
	{
		if ((x >= 476 && x<= 526) || (x>= 776 && x <= 826))
		{
			my_mlx_pixel_put(img, x, 650, 0xFEC5E5);
			my_mlx_pixel_put(img, x, 600, 0xFEC5E5);
		}
		if (x>=526 && x<= 776)
			my_mlx_pixel_put(img, x, 650, 0xFEE3D4);
		if ((x>=476 && x<= 526) || (x>=776 && x<=826))
			my_mlx_pixel_put(img, x, 450, 0x262626);
		if (y>=600 && y<= 650)
		{
			my_mlx_pixel_put(img, 526, y, 0xFEC5E5);
			my_mlx_pixel_put(img, 776, y, 0xFEC5E5);
			my_mlx_pixel_put(img, 476, y, 0xFEC5E5);
			my_mlx_pixel_put(img, 826, y, 0xFEC5E5);
		}
		if (y>=450 && y<= 600)
		{
			my_mlx_pixel_put(img, 526, y, 0x262626);
			my_mlx_pixel_put(img, 776, y, 0x262626);
		}
		x++;
		y++;
	}
}

void get_body(int x, int y, t_data *img)
{
	while (x <= 1280 && y <= 1000)
	{
		if ((x>=526 && x<= 576) || (x>=726 && x<= 776))
		{
			my_mlx_pixel_put(img, x, 750, 0x373832);
			my_mlx_pixel_put(img, x, 750, 0x373832);
		}
		if ((x>= 476 && x<=526) || (x>=776 && x<=826))
		{
			my_mlx_pixel_put(img, x, 800, 0xFEE3D4);
			my_mlx_pixel_put(img, x, 850, 0xFEE3D4);
		}
		if ((x>= 476 && x<=576) || (x>=726 && x<=826))
			my_mlx_pixel_put(img, x, 900, 0x373832);
		if ((x>= 576 && x<=626) || (x>=676 && x<=726))
		{
			my_mlx_pixel_put(img, x, 900, 0x7fcfd0);
			my_mlx_pixel_put(img, x, 850, 0x7fcfd0);
			my_mlx_pixel_put(img, x, 950, 0x262626);
		}
		if (x>= 626 && x<=676)
		{
			my_mlx_pixel_put(img, x, 900, 0x373832);
			my_mlx_pixel_put(img, x, 750, 0x7fcfd0);
			my_mlx_pixel_put(img, x, 850, 0x7fcfd0);
		}
		if (y>=650 && y<= 700)
		{
			my_mlx_pixel_put(img, 576, y, 0x9aa09c);
			my_mlx_pixel_put(img, 726, y, 0x9aa09c);
		}
		if (y>=700 && y<= 750)
		{
			my_mlx_pixel_put(img, 576, y, 0x373832);
			my_mlx_pixel_put(img, 726, y, 0x373832);
		}
		if (y>=750 && y<= 800)
		{
			my_mlx_pixel_put(img, 526, y, 0x373832);
			my_mlx_pixel_put(img, 776, y, 0x373832);
			my_mlx_pixel_put(img, 676, y, 0x7fcfd0);
			my_mlx_pixel_put(img, 626, y, 0x7fcfd0);
			my_mlx_pixel_put(img, 676, y + 50, 0x7fcfd0);
			my_mlx_pixel_put(img, 626, y + 50, 0x7fcfd0);
		}
		if (y>= 800 && y<=850)
		{
			my_mlx_pixel_put(img, 476, y, 0xFEE3D4);
			my_mlx_pixel_put(img, 826, y, 0xFEE3D4);
			my_mlx_pixel_put(img, 526, y, 0xFEE3D4);
			my_mlx_pixel_put(img, 776, y, 0xFEE3D4);
		}
		if (y>=850 && y<= 900)
		{
			my_mlx_pixel_put(img, 476, y, 0x373832);
			my_mlx_pixel_put(img, 826, y, 0x373832);
			my_mlx_pixel_put(img, 626, y, 0x7fcfd0);
			my_mlx_pixel_put(img, 576, y, 0x7fcfd0);
			my_mlx_pixel_put(img, 676, y, 0x7fcfd0);
			my_mlx_pixel_put(img, 726, y, 0x7fcfd0);
		}
		if (y>=900 && y<=950)
		{
			my_mlx_pixel_put(img, 576, y, 0x262626);
			my_mlx_pixel_put(img, 626, y, 0x262626);
			my_mlx_pixel_put(img, 676, y, 0x262626);
			my_mlx_pixel_put(img, 726, y, 0x262626);
		}
		x++;
		y++;
	}
}

int	main(void)
{
	void	*mlx;
	void	*mlx_win;
	t_data	img;
	int x;
	int y;
	int x2;
	int y2;
	int x3;
	int y3;

	x = 200;
	y = 100;
	x2 = 200;
	y2 = 100;
	x3 = 200;
	y3 = 100;
	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, 1280, 1000, "Hello World!");
	img.img = mlx_new_image(mlx, 1280, 1000);
	img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_lenght, &img.endian);
	get_hair(x, y, &img);
	//fill_hair(x, y, &img);
	get_face(x2, y2, &img);
	get_body(x3, y3, &img);
	mlx_put_image_to_window(mlx, mlx_win, img.img, 0, 0);
	mlx_loop(mlx);
}
	//int temp;
	//temp = 50;
	/*
	Get pixel size
	50x50
	while (x <= 250)
	{
		while (temp <= 100)
		{
			my_mlx_pixel_put(&img, 200, temp, 0xffffff);
			my_mlx_pixel_put(&img, 250, temp, 0xffffff);
			temp++;;
		}
		my_mlx_pixel_put(&img, x, 50, 0xffffff);
		my_mlx_pixel_put(&img, x, 100, 0xffffff);
		x++;
	}
	*/
	/*while (x <= 1280 && y <= 900)
	{
		if (x>= 526 && x<= 776)
		{
			my_mlx_pixel_put(&img, x, 100, 0x00ffff);
			my_mlx_pixel_put(&img, x, 150, 0x00ffff);
		}
		if (y <= 150)
		{
			my_mlx_pixel_put(&img, 526, y, 0x00ffff);
			my_mlx_pixel_put(&img, 576, y, 0x00ffff);
			my_mlx_pixel_put(&img, 626, y, 0x00ffff);
			my_mlx_pixel_put(&img, 676, y, 0x00ffff);
			my_mlx_pixel_put(&img, 726, y, 0x00ffff);
			my_mlx_pixel_put(&img, 776, y, 0x00ffff);
		}
		my_mlx_pixel_put(&img, x, 800, 0xffffff);
		x++;
		y++;
	}*/
