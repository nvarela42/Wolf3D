#include "wolf3d.h"

static void			fill_struct(t_map *map)
{
	map->linetab = NULL;
	map->s_map = 0;
	map->file = NULL;
	map->dep_loop = 0;
	map->checksize = 0;
}

t_map				*init_struct(void)
{
	static t_map	*map = NULL;
	static int		check = 0;

	if (map == NULL && check == 0)
	{
		if (!(map = (t_map *)malloc(sizeof(t_map))))
			return (NULL);
		check = 1;
	}
	fill_struct(map);
	return (map);
}
