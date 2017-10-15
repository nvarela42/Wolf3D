#ifndef WOLF3D_H
# define WOLF3D_H

# include "libft.h"
// # include "mlx.h"
# include <math.h>
# include <pthread.h>
# include <errno.h>

# define WRONGFILE 1
# define UNVALIDMAP 2
# define ARGNUMBER 3

typedef struct s_map	t_map;

struct					s_map
{
	char				**linetab;
	char				*file;
	size_t				checksize;
	int					fd;
	int					dep_loop;
	int					pos_dep;
	int					s_map;
};

int						parse_map(int ac, char **av, t_map *map);
int						check_vertical_walls(t_map *map, char *s);
int						read_map(char *av, t_map *map);
t_map					*init_struct(void);
void					print_error(int type);
int						check_caract(char **s, int i, int j, char c);
int						check_horizontal_walls(char **maptab, t_map *map);
void					exit_prog(t_map **map, char *s, int i);

#endif
