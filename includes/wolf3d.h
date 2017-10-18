#ifndef WOLF3D_H
# define WOLF3D_H

# include "libft.h"
# include "mlx.h"
# include <math.h>
# include <pthread.h>
# include <errno.h>

# define WRONGFILE 1
# define WALL 1
# define GROUND 0
# define UNVALIDMAP 2
# define ARGNUMBER 3
# define WIN_W 1024
# define WIN_H 768
# define WIN_T "wolf3d"
# define MLX env->mlx
# define RAY env->ray
# define CAM env->cam
# define MAP env->map
# define ABS(x) x = (x < 0) ? x * -1 : x;
# define COLOR_S ft_search_rgb(51, 204, 255)
# define COLOR_W ft_search_rgb(255, 0, 0)
# define COLOR_G ft_search_rgb(102, 102, 102)
# define ESCAPEKEY 53
# define UPKEY 13
# define DOWNKEY 1
# define LEFTKEY 0
# define RIGHTKEY 2
# define RESETKEY 15
# define KEYPLUS 69
# define KEYMINUS 78



typedef struct s_map	t_map;
typedef struct s_pt2d	t_pt2d;
typedef struct s_mlx	t_mlx;
typedef struct s_env	t_env;
typedef struct s_cam	t_cam;
typedef struct s_ray	t_ray;


struct					s_pt2d
{
	float				x;
	float				y;
};

struct					s_ray
{
	t_pt2d				pos;
	t_pt2d				orient;
};

struct					s_map
{
	char				**linetab;
	char				*file;
	size_t				checksize;
	int					fd;
	int					dep_loop;
	int					nb_pos_dep;
	t_pt2d				pos_dep;
	int					s_map;
	int					total;
	t_pt2d				plane;

};

struct					s_mlx
{
	void				*mlx;
	void				*win;
	void				*image;
	char				*imgchar;
	int					mlximgbpp;
	int					mlximgsize;
	int					mlximgendian;
};

struct					s_cam
{
	t_pt2d				pos;
	t_pt2d				orient;
	float				screen_dist;
	float				fov;
};

struct					s_env
{
	t_map				*map;
	t_mlx				mlx;
	t_cam				cam;
	t_ray				ray;
};

int						parse_map(int ac, char **av, t_map *map);
int						check_vertical_walls(t_map *map, char *s, int nb_line);
int						read_map(char *av, t_map *map);
t_env					*init_struct_env(void);
void					print_error(int type);
int						check_caract(char **s, int i, int j, char c);
int						check_horizontal_walls(char **maptab, t_map *map);
void					exit_prog(t_map **map, char *s, int i);
int						print_pix_column(int pos, int dep, int final);
void					exit_init(void);
int						quit_cross(t_env *env);
void					start_wolf(t_env *env);
void					launch_raycasting(t_env *env);
int						key_fonction(int key, void *param);
void					movekey(int key, t_env *env);
void					speedkey(int key, t_env *env);
void					resetkey(t_env *env);
void					create_image(t_env *env);
int						clear_image_and_win(t_env *env);
void					usage_event(void);

#endif
