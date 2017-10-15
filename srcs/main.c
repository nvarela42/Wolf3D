 #include "wolf3d.h"

int		main(int ac, char **av)
{
	t_map	*map;

	map = init_struct();
	if(parse_map(ac, av, map) == -1)
		exit_prog(&map, NULL, 0);
	return (0);
 }
