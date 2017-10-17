#include "wolf3d.h"

static int	check_in_loop(t_map *map, char *line, int ret)
{
	static int  nb_line = 0;
	if ((ft_strlen(line) != map->checksize && map->dep_loop != 0) ||
	(ret < 0 || check_vertical_walls(map, line, nb_line) == -1))
		exit_prog(&map, line, UNVALIDMAP);
	map->linetab = ft_realloc(map->linetab, line);
	map->checksize = ft_strlen(line);
	map->dep_loop = 1;
	nb_line++;
	return (0);
}

int			read_map(char *file, t_map *map)
{
	int		ret;
	char	*line;
	int		total;

	ret = 0;
	total = 0;
	if ((map->fd = open(file, O_RDONLY)) < 0)
		exit_prog(&map, NULL, WRONGFILE);
	while ((ret = get_next_line(map->fd, &line)) > 0)
	{
		if (total > 40000)
			exit_prog(&map, NULL, UNVALIDMAP);
		total++;
		if(check_in_loop(map, line, ret) == -1)
			exit_prog(&map, line, UNVALIDMAP);
	}
	if (ret == -1 || map->nb_pos_dep == 0 || map->nb_pos_dep > 1)
		exit_prog(&map, NULL, UNVALIDMAP);
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
		exit_prog(&map, NULL, ARGNUMBER);
	map->file = (ac == 1) ? ft_strdup("map/map2") : ft_strdup(av[1]);
	if(read_map(map->file, map) == -1)
		exit_prog(&map, NULL, UNVALIDMAP);
	return (0);
}
