#include "wolf3d.h"

int			check_format(char *s)
{
	int		i;

	if (s[0] != '1' && s[count_simplechartab(s)] != '1')
	{
		print_usage();
		return (-1);
	}
	i = 0;
	while (s[i])
	{
		if (s[i] != '0' || s[i] != '1')
			s[i] = '0';
		i++;
	}

}

int			read_map(char *av, t_map *map)
{
	int		ret;
	char	*line;
	int		fd;
	int		cheksize;

	ret = 0;
	if ((fd = open(file, O_RDONLY)) < 0)
		return (-1);
	while ((ret = get_next_line(fd, &line)) != 0)
	{
		if (ret < 0 || check_format(line) == -1)
			return (-1);
		map->recupline = ft_realloc(map->recupline, line);
		free(line);
	}
	close(fd);
	map->s_map = ft_count_tab(map->recupline);
	if (map->s_map == 0)
		return (-1);
return (0);
