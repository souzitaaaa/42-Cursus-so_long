/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   image.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinoguei <dinoguei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 16:56:19 by dinoguei          #+#    #+#             */
/*   Updated: 2023/01/23 16:56:21 by dinoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int main(void)
{
    t_img img;

    img.relative_path = "/nfs/homes/dinoguei/Desktop/Cursus/so_long/teste.xpm";
    //the path where the .xpm file is located
    img.mlx = mlx_init();
    img.img = mlx_xpm_file_to_image(img.mlx, img.relative_path, &img.img_width, &img.img_height);
    //this funcion will search for the image on the path you provide and convert it to a image, the widht and height are provided by the function
    img.win = mlx_new_window(img.mlx, img.img_width, img.img_height, "Image Window");
    //You create a window with the width and height you just received
    mlx_put_image_to_window(img.mlx, img.win, img.img, 0, 0);
    //then put the image on the window, in the x and y 0, so it can appear it all
    mlx_loop(img.mlx);
}
/*My struct is on the .h file but if you want to test it, here it is
typedef struct s_img
{
	void	*mlx;
	void	*win;
	void	*img;
	char	*relative_path;
	int		img_width;
	int		img_height;
}			t_img;
*/
