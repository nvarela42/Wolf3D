/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_raycasting.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvarela <nvarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/18 12:12:48 by nvarela           #+#    #+#             */
/*   Updated: 2017/11/03 18:13:05 by nvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

static void		calculate_step_and_side(t_env *env)
{
	if (RAY.orient.x < 0)
		orient_x_is_neg(env);
	else
		orient_x_is_pos(env);
	if (RAY.orient.y < 0)
		orient_y_is_neg(env);
	else
		orient_y_is_pos(env);
}

static void		init(t_env *env, int col)
{
	MAP->pos_dep.x = 1;
	MAP->pos_dep.y = 1;
	if (MAP->linetab[(int)MAP->pos_dep.x][(int)MAP->pos_dep.y] == '1')
		MAP->linetab[(int)MAP->pos_dep.x][(int)MAP->pos_dep.y] = '0';
	CAM.pos.x = (col + col) / (double)WIN_W - 1;
	RAY.pos = MAP->pos_dep;
	RAY.orient.x = CAM.orient.x + CAM.plane.x * CAM.pos.x;
	RAY.orient.y = CAM.orient.y + CAM.plane.y * CAM.pos.x;
	RAY.cur_box.x = (int)RAY.pos.x;
	RAY.cur_box.y = (int)RAY.pos.y;
	RAY.dif_len.x = sqrt(1 + (RAY.orient.y * RAY.orient.y) /
	(RAY.orient.x * RAY.orient.x));
	RAY.dif_len.y = sqrt(1 + (RAY.orient.x * RAY.orient.x) /
	(RAY.orient.y * RAY.orient.y));
}

void		launch_raycasting(t_env *env)
{
	size_t	line_x;

	line_x = 0;
	while (line_x < WIN_W)
	{
		init(env, line_x);
		calculate_step_and_side(env);
		while (RAY.hit_wall == 0)
			move_and_check_hit_wall(env);
		correct_fisheye(env);
		// printf("dist ray = x: %f, y: %f\n", RAY.side_dist.x, RAY.side_dist.y);
		search_where_draw(env);
		// mlx_mouse_hook(&(MLX.win), /*mouse_button*/, env);
		line_x++;
	}
}
