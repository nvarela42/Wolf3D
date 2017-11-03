/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_struct_bis.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvarela <nvarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 15:39:12 by nvarela           #+#    #+#             */
/*   Updated: 2017/11/03 14:58:44 by nvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"


t_keys				init_keys(void)
{
	t_keys			keys;

	keys = (t_keys){0, 0, 0, 0, 0, 0};
	return (keys);
}

t_ray				init_struct_ray(void)
{
	t_ray			ray;

	ray = (t_ray){(t_pt2d){0, 0}, (t_pt2d){0, 0}, (t_pt2d){0, 0},
	(t_pt2d){0, 0}, (t_pt2d){0, 0}, (t_pt2d){0, 0}, 0, 0};
	return (ray);
}

t_wall				init_struct_wall(void)
{
	t_wall			wall;

	wall = (t_wall){0};
	return (wall);
}

t_draw				init_struct_draw(void)
{
	t_draw			draw;

	draw = (t_draw){0, 0, 0};
	return (draw);
}
