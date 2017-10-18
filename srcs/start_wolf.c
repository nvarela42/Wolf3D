/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_wolf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvarela <nvarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/18 12:13:52 by nvarela           #+#    #+#             */
/*   Updated: 2017/10/18 12:40:15 by nvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

void		start_wolf(t_env *env)
{
	mlx_put_image_to_window(&(MLX.mlx), &(MLX.win), &(MLX.image), 0, 0);
	mlx_hook(&(MLX.win), 17, 0, quit_cross, &(MLX.mlx));
	mlx_key_hook(&(MLX.win), key_fonction, &(MLX.mlx));
	// mlx_mouse_hook(&(MLX.win), /*mouse_button*/, &mlx);
	mlx_loop(&(MLX.mlx));
}
