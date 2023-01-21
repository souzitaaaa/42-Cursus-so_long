/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filling.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinoguei <dinoguei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 18:40:46 by dinoguei          #+#    #+#             */
/*   Updated: 2023/01/19 19:23:12 by dinoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	fill_hair_y(int x, int y, t_data *img, int color)
{
	int temp;

	temp= y + 50;
	while (y <= temp)
	{
		my_mlx_pixel_put(img, x, y, color);
		y++;
	}
}

void	fill_hair_x(int x, int y, t_data *img, int color)
{
	int temp;

	temp= x + 50;
	while (x <= temp)
	{
		my_mlx_pixel_put(img, x, y, color);
		x++;
	}
}
