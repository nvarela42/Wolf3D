/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_usage_event.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvarela <nvarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/28 17:42:11 by nvarela           #+#    #+#             */
/*   Updated: 2017/10/18 16:13:20 by nvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

static void		usage_reset(void)
{
	ft_putendl("  "UNDERLINE RED "RESET"DEFAULT_COLOR);
	ft_putstr(YELLOW"  reset map: "DEFAULT_COLOR);
	ft_putendl(WHITE"'r' key (touch 'r').");
}

static void		usage_speed(void)
{
	ft_putendl("  "UNDERLINE RED "SPEED"DEFAULT_COLOR);
	ft_putstr(YELLOW"  speed up: "DEFAULT_COLOR);
	ft_putendl(WHITE"'+' key.");
	ft_putstr(YELLOW"  speed dawn: "DEFAULT_COLOR);
	ft_putendl(WHITE"'-' key.");
}

/*static void		usage_color(void)
{
	ft_putendl("  "UNDERLINE RED"COLOR"DEFAULT_COLOR);
	ft_putchar('\n');
	ft_putstr(YELLOW"  basic color: " DEFAULT_COLOR);
	ft_putendl(WHITE"num pad '0' (pave num '0').");
	ft_putstr(YELLOW"  set color one: "DEFAULT_COLOR);
	ft_putendl(WHITE"num pad '1' (pave num '1').");
	ft_putstr(YELLOW"  set color two: "DEFAULT_COLOR);
	ft_putendl(WHITE"num pad '2' (pave num '2').");
}*/

/*static void		ft_usage_mouse_key(void)
{
	ft_putendl("  "UNDERLINE RED"ZOOM AND MOUSE" DEFAULT_COLOR);
	ft_putendl("\n");
	ft_putstr(YELLOW"  change constant of julia: ");
	ft_putendl(WHITE"move the mouse on window (deplacez la souris sur la"
	" fenetre).");
	ft_putstr(YELLOW"  lock constant of julia: ");
	ft_putendl(WHITE"right mouse button (click droit de la souris).");
	ft_putstr(YELLOW"  zoom ++: ");
	ft_putendl(WHITE"mouse wheel (molette de la souris).");
	ft_putstr(YELLOW"  zoom --: ");
	ft_putendl(WHITE"mouse wheel (molette de la souris).");
}*/

static void		usage_move(void)
{
	ft_putendl("  "UNDERLINE RED"MOVEMENT"DEFAULT_COLOR);
	ft_putstr(YELLOW"  move right: ");
	ft_putendl(WHITE"'d' key.");
	ft_putstr(YELLOW"  move left: "DEFAULT_COLOR);
	ft_putendl(WHITE"'a' key.");
	ft_putstr(YELLOW"  move up: "DEFAULT_COLOR);
	ft_putendl(WHITE"'w' key.");
	ft_putstr(YELLOW"  move dawn: "DEFAULT_COLOR);
	ft_putendl(WHITE"'s' key.");
}

void			usage_event(void)
{
	ft_putendl("\n\n\n\n\n\n\n\n\n\n\n\n\n");
	ft_putendl(PURPLE"     __________________________________     ");
	ft_putendl("\n");
	ft_putendl(PURPLE "             M  O  T  I  O  N     "DEFAULT_COLOR);
	ft_putendl("\n");
	usage_move();
	ft_putendl("\n");
	// ft_usage_mouse_key();
	// ft_putendl("\n\n");
	// ft_usage_color();
	usage_speed();
	ft_putendl("\n");
	usage_reset();
	ft_putendl("\n");
	ft_putendl(PURPLE"     __________________________________     ");
	ft_putendl("\n\n\n\n\n\n\n");
}
