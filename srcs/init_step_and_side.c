/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_step_and_side.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvarela <nvarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 14:04:57 by nvarela           #+#    #+#             */
/*   Updated: 2017/11/02 14:55:59 by nvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

void		orient_x_is_neg(t_env *env)
{
	RAY.move.x = -1;
	RAY.side_dist.x = (RAY.pos.x - RAY.cur_box.x) * RAY.dif_len.x;
}

void		orient_x_is_pos(t_env *env)
{
	RAY.move.x = 1;
	RAY.side_dist.x = (RAY.cur_box.x + 1.0 - RAY.pos.x) * RAY.dif_len.x;
}

void		orient_y_is_neg(t_env *env)
{
	RAY.move.y = -1;
	RAY.side_dist.y = (RAY.pos.y - RAY.cur_box.y) * RAY.dif_len.y;
}

void		orient_y_is_pos(t_env *env)
{
	RAY.move.y = 1;
	RAY.side_dist.y = (RAY.cur_box.y + 1.0 - RAY.pos.y) * RAY.dif_len.y;
}
