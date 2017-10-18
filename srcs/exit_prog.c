/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_prog.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvarela <nvarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/18 12:12:58 by nvarela           #+#    #+#             */
/*   Updated: 2017/10/18 12:35:21 by nvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

void		exit_init(void)
{
	exit(EXIT_FAILURE);
}

void		exit_prog(t_map **map, char *s, int i)
{
	(void)s;
	if (s != NULL)
		free(s);
	close((*map)->fd);
	ft_memdel((void **)map);
	map = NULL;
	print_error(i);
	exit(EXIT_FAILURE);
}
