/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_wolf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvarela <nvarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/18 12:13:52 by nvarela           #+#    #+#             */
/*   Updated: 2017/11/03 17:53:16 by nvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

void		start_wolf(t_env *env)
{
	usage_event();
	create_image(env);
	launch_raycasting(env);
	mlx_put_image_to_window(MLX.mlx, MLX.win, MLX.image, 0, 0);
	mlx_hook(MLX.win, MASK_CROSS, 0, quit_cross, env);
	mlx_hook(MLX.win, MASK_KEYPRESS, 0, key_press, env);
	mlx_hook(MLX.win, MASK_KEYRELEASE, 0, key_release, env);
	mlx_loop(&(MLX.mlx));
}
