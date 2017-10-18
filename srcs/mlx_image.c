/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_image.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvarela <nvarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/18 14:42:29 by nvarela           #+#    #+#             */
/*   Updated: 2017/10/18 14:56:58 by nvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

void			create_image(t_env *env)
{
	MLX.image = mlx_new_image(MLX.mlx, WIN_W, WIN_H);
	MLX.imgchar = mlx_get_data_addr(MLX.image, &(MLX.mlximgbpp),
	&(MLX.mlximgsize), &(MLX.mlximgendian));
}

int				clear_image_and_win(t_env *env)
{
	mlx_destroy_image(MLX.mlx, MLX.image);
	mlx_clear_window(MLX.mlx, MLX.win);
	create_image(env);
	mlx_put_image_to_window(MLX.mlx, MLX.win, MLX.image, 0, 0);
	return (0);
}
