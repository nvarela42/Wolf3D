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
		print_error(UNVALIDMAP);
		return (-1);
	}
	return (0);
}

int			check_vertical_walls(char *s)
{
	int		i;
	if (s[0] != '1' || s[ft_strlen(s) - 1] != '1')
	{
			print_error(UNVALIDMAP);
			return (-1);
	}
	i = 0;
	while (s[i])
	{
		if (s[i] != '0' && s[i] != '1' && s[i] != 'X')
		{
			print_error(UNVALIDMAP);
			return(-1);
		}
		i++;
	}
	return (0);
}
