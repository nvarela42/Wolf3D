/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvarela <nvarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/18 12:13:19 by nvarela           #+#    #+#             */
/*   Updated: 2017/11/03 17:53:25 by nvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "wolf3d.h"

int		main(int ac, char **av)
{
	t_env	*env;

	env = init_struct_env();
	if(parse_map(ac, av, env->map) == -1)
		exit_prog(&(env->map), NULL, 0);
	start_wolf(env);
	return (0);
 }
