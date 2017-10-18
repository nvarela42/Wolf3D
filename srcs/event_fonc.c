/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   event_fonc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvarela <nvarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/18 12:12:09 by nvarela           #+#    #+#             */
/*   Updated: 2017/10/18 15:38:52 by nvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"
void			resetkey(t_env *env)
{
	(void)env;
	printf("reset\n");
}

void			speedkey(int key, t_env *env)
{
	(void)env;
	if (key == KEYPLUS)
		printf("speed up\n");
	if (key == KEYMINUS)
		printf("speed dawn\n");
}

void			movekey(int key, t_env *env)
{
	(void)env;
	if (key == RIGHTKEY)
		printf("right\n");
	else if (key == LEFTKEY)
		printf("left\n");
	else if (key == DOWNKEY)
		printf("down\n");
	else if (key == UPKEY)
		printf("up\n");
}
