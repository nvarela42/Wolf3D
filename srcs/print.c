/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvarela <nvarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/18 12:13:40 by nvarela           #+#    #+#             */
/*   Updated: 2017/10/18 12:18:42 by nvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

static void			print_valid_map(void)
{
	ft_putendl(YELLOW"exemple of valid map :\n");
	ft_putstr(DEFAULT_COLOR"   1111111     - only one 'X' for player ");
	ft_putendl("starting position.");
	ft_putstr(DEFAULT_COLOR"   1011011     - all walls must be constructed ");
	ft_putendl("with the number '1'.");
	ft_putstr(DEFAULT_COLOR"   1011X11     - all walls must be closed ");
	ft_putendl("around the map.");
	ft_putstr(DEFAULT_COLOR"   1000001     - the only characters accepted ");
	ft_putendl("for map are : '1', '0', 'X'.");
	ft_putendl(DEFAULT_COLOR"   1111111\n");
}

static void			print_usage(void)
{
	ft_putendl(PURPLE"-----------------------------------");
	ft_putendl("|            U S A G E            |");
	ft_putendl("-----------------------------------"DEFAULT_COLOR);
	ft_putchar('\n');
	ft_putstr(YELLOW"launch the program :");
	ft_putstr(GREY" ./wolf3d <file_name> ");
	ft_putstr(GREEN"or ");
	ft_putendl(GREY"./wolf3d\n");
	ft_putstr(BLUE"if you decide not to put any argument, the program will ");
	ft_putendl("launch with a default map.\n"DEFAULT_COLOR);
	print_valid_map();
}

void			print_error(int type)
{
	if (type == WRONGFILE)
		ft_putendl(RED"\nWrong file type or name !\n\n"DEFAULT_COLOR);
	else if (type == UNVALIDMAP)
		ft_putendl(RED"\nunvalid map !\n\n"DEFAULT_COLOR);
	else if (type == ARGNUMBER)
		ft_putendl(RED"\nWrong nuber of param !\n\n"DEFAULT_COLOR);
	print_usage();
}
