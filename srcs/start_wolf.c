/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_wolf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvarela <nvarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/18 12:13:52 by nvarela           #+#    #+#             */
/*   Updated: 2017/10/18 14:00:46 by nvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

void		start_wolf(t_env *env)
{
	MLX.image = mlx_new_image(&(MLX.mlx), WIN_W, WIN_H);
	// mlx_get_data_addr(MLX.image, &(MLX.mlximgbpp), &(MLX.mlximgsize), &(MLX.mlximgendian));
	mlx_put_image_to_window(&(MLX.mlx), &(MLX.win), &(MLX.image), 0, 0);
	printf("ok1\n");
	// mlx_hook(&(MLX.win), 17, 0, quit_cross, &(MLX.mlx));
	printf("ok2\n");
	// mlx_key_hook(&(MLX.win), key_fonction, &(MLX.mlx));
	printf("ok3\n");
	// mlx_mouse_hook(&(MLX.win), /*mouse_button*/, &mlx);
	mlx_loop(&(MLX.mlx));
}
