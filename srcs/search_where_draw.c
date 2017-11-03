/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_where_draw.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvarela <nvarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/18 12:13:33 by nvarela           #+#    #+#             */
/*   Updated: 2017/11/03 17:45:12 by nvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

static void	calcul_start_end_pix(t_env *env)
{
	DRAW.start = -DRAW.size_line / 2 + WIN_H / 2;
	if (DRAW.start < 0)
		DRAW.start = 0;
	DRAW.end = DRAW.size_line / 2 + WIN_H / 2;
	if (DRAW.end >= WIN_H)
		DRAW.end = WIN_H - 1;
}

void		search_where_draw(t_env *env)
{
	DRAW.size_line = WIN_H / WALL.dist;
	calcul_start_end_pix(env);
	put_pix_image(env, DRAW.start, DRAW.end, search_rgb(0, 45, 28));
}
