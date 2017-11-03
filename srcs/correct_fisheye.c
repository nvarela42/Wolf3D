/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   correct_fish_eyes.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvarela <nvarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 15:15:48 by nvarela           #+#    #+#             */
/*   Updated: 2017/11/02 16:31:13 by nvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

void		correct_fisheye(t_env *env)
{
	if (RAY.side == 0)
		WALL.dist = (RAY.cur_box.x - RAY.pos.x + (1 - RAY.move.x) / 2)
		/ RAY.orient.x;
	else
		WALL.dist = (RAY.cur_box.y - RAY.pos.y + (1 - RAY.move.y) / 2)
		/ RAY.orient.y;
}
