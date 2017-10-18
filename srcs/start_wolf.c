/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_wolf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvarela <nvarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/18 12:13:52 by nvarela           #+#    #+#             */
/*   Updated: 2017/10/18 15:42:27 by nvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

void		start_wolf(t_env *env)
{
	create_image(env);
	mlx_put_image_to_window(MLX.mlx, MLX.win, MLX.image, 0, 0);
	mlx_hook(MLX.win, 17, 0, quit_cross, env);
	mlx_key_hook(MLX.win, key_fonction, MLX.mlx);
	mlx_loop(&(MLX.mlx));
}
