/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_wolf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agfernan <agfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/18 12:13:52 by nvarela           #+#    #+#             */
/*   Updated: 2017/10/18 16:03:59 by agfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

void		start_wolf(t_env *env)
{
	MLX.image = mlx_new_image(MLX.mlx, WIN_W, WIN_H);
	MLX.imgchar = mlx_get_data_addr(MLX.image, &(MLX.mlximgbpp),
		&(MLX.mlximgsize), &(MLX.mlximgendian));
	mlx_put_image_to_window(MLX.mlx, MLX.win, MLX.image, 0, 0);
	mlx_hook(MLX.win, MASK_CROSS, 0, quit_cross, env);
	mlx_hook(MLX.win, MASK_KEYPRESS, 0, key_press, env);
	mlx_hook(MLX.win, MASK_KEYRELEASE, 0, key_release, env);
	// mlx_mouse_hook(&(MLX.win), /*mouse_button*/, env);
	mlx_loop(&(MLX.mlx));
}
