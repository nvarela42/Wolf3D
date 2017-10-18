/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_fonction.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvarela <nvarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/18 12:13:09 by nvarela           #+#    #+#             */
/*   Updated: 2017/10/18 14:27:10 by nvarela          ###   ########.fr       */
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

int				key_fonction(int key, void *param)
{
	t_env		*tmp;

	printf("key -> %d\n", key);
	tmp = param;
	if (key == ESCAPEKEY)
		exit_prog(&(tmp->map), NULL, 0);
	else if (key == LEFTKEY || key == RIGHTKEY || key == UPKEY ||
		key == DOWNKEY)
		movekey(key, tmp);
	// else if (key == RESETKEY)
		// resetkey(tmp);
	return (0);
}
