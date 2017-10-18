/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_wolf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agfernan <agfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/18 12:13:52 by nvarela           #+#    #+#             */
/*   Updated: 2017/10/18 14:27:28 by agfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

void		start_wolf(t_env *env)
{
	MLX.image = mlx_new_image(&(MLX.mlx), WIN_W, WIN_H);
	mlx_get_data_addr(MLX.image, &(MLX.mlximgbpp), &(MLX.mlximgsize), &(MLX.mlximgendian));
	mlx_put_image_to_window(&(MLX.mlx), &(MLX.win), &(MLX.image), 0, 0);
	printf("ok1\n");
	mlx_hook(&(MLX.win), 17, 0, quit_cross, env);
	printf("ok2\n");
	mlx_key_hook(&(MLX.win), key_fonction, env);
	printf("ok3\n");
	// mlx_mouse_hook(&(MLX.win), /*mouse_button*/, env);
	mlx_loop(&(MLX.mlx));
}
