#include "wolf3d.h"

static int	check_in_loop(t_map *map, char *line, int ret)
{
	if ((ft_strlen(line) != map->checksize && map->dep_loop != 0) ||
	(ret < 0 || check_vertical_walls(line) == -1))
	{
		print_error(UNVALIDMAP);
		return (-1);
	}
	map->linetab = ft_realloc(map->linetab, line);
	map->checksize = ft_strlen(line);
	map->dep_loop = 1;
	return (0);
}

int			read_map(char *file, t_map *map)
{
	int		ret;
	char	*line;

	ret = 0;
	if ((map->fd = open(file, O_RDONLY)) < 0)
	{
			print_error(WRONGFILE);
			return (-1);
	}
	while ((ret = get_next_line(map->fd, &line)) != 0)
	{
		if(check_in_loop(map, line, ret) == -1)
			return (-1);
		free(line);
	}
	close(map->fd);
	map->s_map = ft_count_tab(map->linetab);
	check_horizontal_walls(map->linetab, map);
	if (map->s_map == 0)
		return (-1);
	return (0);
}

int		parse_map(int ac, char **av, t_map *map)
{
	if (ac > 2)
	{
		print_error(ARGNUMBER);
		return (-1);
	}
	map->file = (ac == 1) ? ft_strdup("map/map2") : ft_strdup(av[1]);
	if(read_map(map->file, map) == -1)
		return (-1);
	return (0);
}
