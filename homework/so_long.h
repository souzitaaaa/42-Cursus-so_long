/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinoguei <dinoguei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 17:17:11 by dinoguei          #+#    #+#             */
/*   Updated: 2023/01/19 19:12:52 by dinoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "mlx_linux/mlx.h"

typedef struct s_data
{
	void	*img;
	char	*addr;
	int	bits_per_pixel;
	int	line_lenght;
	int	endian;
}				t_data;

void	fill_hair_y(int x, int y, t_data *img, int color);
void	my_mlx_pixel_put(t_data *data, int x, int y, int color);
void	fill_hair_x(int x, int y, t_data *img, int color);

#endif
