#include "wolf3d.h"

void			print_usage(void)
{
	ft_putendl(PURPLE"-----------------------------------");
	ft_putendl("|            U S A G E            |");
	ft_putendl("-----------------------------------"DEFAULT_COLOR);
	ft_putchar('\n');
	ft_putstr(YELLOW"launch the program :");
	ft_putstr(GREY"./wolf3d <file_name> ");
	ft_putstr(GREEN"or ");
	ft_putendl(GREY"./wolf3d\n");
	ft_putstr(BLUE"if you decide not to put any argument, the program will ");
	ft_putendl("launch with a default map\n"DEFAULT_COLOR);

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
