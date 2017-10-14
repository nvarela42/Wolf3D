#include "wolf3d.h"

int		parse_type_map(int ac, char **av)
{
	if (ac != 2)
	{
		print_usage();
		return (EXIT_FAILURE);
	}
	if (ft_strcmp("map_name1", av[1]) != 0 ||
	ft_strcmp("map_name2", av[1]) != 0 )
	{
		printf_usage();
		return (EXIT_FAILURE)
	}
	read_map(av[1]);
	return (0);
}
