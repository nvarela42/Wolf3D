/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_struct.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvarela <nvarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/16 15:31:17 by nvarela           #+#    #+#             */
/*   Updated: 2017/11/03 14:58:57 by nvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

static t_cam		init_struct_cam(void)
{
	t_cam			cam;

	cam = (t_cam){(t_pt2d){0, 0}, (t_pt2d){1, 0}, (t_pt2d){0, 0.66}, 0, 0,
	(WIN_W / 2) / tan(30) , 60};
	return (cam);
}

static t_mlx		init_struct_mlx(void)
{
	t_mlx			mlx;

	if (!(mlx.mlx = mlx_init()) ||
		!(mlx.win = mlx_new_window(mlx.mlx, WIN_W, WIN_H, WIN_T)))
		exit_init();
	mlx.image = NULL;
	mlx.imgchar = NULL;
	return (mlx);
}

static t_map		*init_struct_map(void)
{
	static t_map	*map = NULL;
	static int		check = 0;

	if (map == NULL && check == 0)
	{
		if (!(map = (t_map *)malloc(sizeof(t_map))))
			exit_init();
		check = 1;
	}
	map->linetab = NULL;
	map->s_map = 0;
	map->file = NULL;
	map->dep_loop = 0;
	map->checksize = 0;
	map->nb_pos_dep = 0;
	return (map);
}

t_env				*init_struct_env(void)
{
	t_env			*env;

	if (!(env = (t_env *)malloc(sizeof(t_env))))
			return (NULL);
	MLX = init_struct_mlx();
	MAP = init_struct_map();
	CAM = init_struct_cam();
	RAY = init_struct_ray();
	KEYS = init_keys();
	WALL = init_struct_wall();
	DRAW = init_struct_draw();
	return (env);
}
