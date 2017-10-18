/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_wolf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agfernan <agfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/18 12:13:52 by nvarela           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2017/10/18 14:27:28 by agfernan         ###   ########.fr       */
=======
/*   Updated: 2017/10/18 14:21:40 by nvarela          ###   ########.fr       */
>>>>>>> d83c94f2c52bf67d16810385359f43b70c005c15
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

void		start_wolf(t_env *env)
{
	MLX.image = mlx_new_image(MLX.mlx, WIN_W, WIN_H);
	MLX.imgchar = mlx_get_data_addr(MLX.image, &(MLX.mlximgbpp),
	&(MLX.mlximgsize), &(MLX.mlximgendian));
	mlx_put_image_to_window(MLX.mlx, MLX.win, MLX.image, 0, 0);
	printf("ok1\n");
<<<<<<< HEAD
	mlx_hook(&(MLX.win), 17, 0, quit_cross, env);
	printf("ok2\n");
	mlx_key_hook(&(MLX.win), key_fonction, env);
=======
	mlx_hook(MLX.win, 17, 0, quit_cross, env);
	printf("ok2\n");
	mlx_key_hook(MLX.win, key_fonction, MLX.mlx);
>>>>>>> d83c94f2c52bf67d16810385359f43b70c005c15
	printf("ok3\n");
	// mlx_mouse_hook(&(MLX.win), /*mouse_button*/, env);
	mlx_loop(&(MLX.mlx));
}
