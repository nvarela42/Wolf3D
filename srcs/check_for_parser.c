#include "wolf3d.h"

int			check_caract(char **s, int i, int j, char c)
{
	while (s[i][j] != '\0')
	{
		if(s[i][j] != c)
		{
			return (-1);
		}
		j++;
	}
	return (0);
}

int			check_horizontal_walls(char **maptab, t_map *map)
{
	if ((check_caract(maptab, 0, 0, '1') == -1) ||
	(check_caract(maptab, (map->s_map - 1), 0, '1')))
	{
		exit_prog(&map, NULL,UNVALIDMAP);
	}
	return (0);
}

int			check_vertical_walls(t_map *map, char *s, int nb_line)
{
	int		i;
	if (s[0] != '1' || s[ft_strlen(s) - 1] != '1')
		return (-1);
	i = 0;
	while (s[i])
	{
		if (s[i] == 'X')
		{
			map->nb_pos_dep++;
			map->pos_dep = (t_pt2d){i, nb_line};
		}
		if (s[i] != '0' && s[i] != '1' && s[i] != 'X')
			return(-1);
		i++;
	}
	return (0);
}
