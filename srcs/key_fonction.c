/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_fonction.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agfernan <agfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/18 12:13:09 by nvarela           #+#    #+#             */
/*   Updated: 2017/10/18 16:16:07 by agfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"


int				quit_cross(t_env *env)
{
	(void)env;
	printf("quit cross\n");
	exit(EXIT_SUCCESS);
	return (0);
}

int				key_press(int key, void*param)
{
	t_env		*env;

	env = (t_env *)param;
	printf("pressed: key -> %d\n", key);
	if (key == ESCAPEKEY)
		exit_prog(&(MAP), NULL, 0);
		KEYS.w = (key == UPKEY) ? 1 : KEYS.w;
		KEYS.a = (key == LEFTKEY) ? 1 : KEYS.a;
		KEYS.s = (key == DOWNKEY) ? 1 : KEYS.s;
		KEYS.d = (key == RIGHTKEY) ? 1 : KEYS.d;
		KEYS.r = (key == RESETKEY) ? 1 : KEYS.r;
	return (1);
}

int				key_release(int key, void*param)
{
	t_env		*env;

	env = (t_env *)param;
	printf("released: key -> %d\n", key);
	KEYS.w = (key == UPKEY) ? 0 : KEYS.w;
	KEYS.a = (key == LEFTKEY) ? 0 : KEYS.a;
	KEYS.s = (key == DOWNKEY) ? 0 : KEYS.s;
	KEYS.d = (key == RIGHTKEY) ? 0 : KEYS.d;
	if (key == RESETKEY)
		CAM.pos = MAP->pos_dep;
	return (1);
}