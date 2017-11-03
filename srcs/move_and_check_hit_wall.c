/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_and_check_hit_wall.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvarela <nvarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 14:48:20 by nvarela           #+#    #+#             */
/*   Updated: 2017/11/02 17:02:12 by nvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

static void		x_is_smaller(t_env *env)
{
	RAY.side_dist.x += RAY.dif_len.x;
	RAY.cur_box.x += RAY.move.x;
	RAY.side = 0;
}

static void		x_is_bigger(t_env *env)
{
	RAY.side_dist.y += RAY.dif_len.y;
	RAY.cur_box.y += RAY.move.y;
	RAY.side = 0;
}

void			move_and_check_hit_wall(t_env *env)
{
	if (RAY.side_dist.x < RAY.side_dist.y)
		x_is_smaller(env);
	else
		x_is_bigger(env);
	if (MAP->linetab[(int)RAY.cur_box.x][(int)RAY.cur_box.y] == '1')
			RAY.hit_wall = 1;
}
