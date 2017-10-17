 #include "wolf3d.h"

int		main(int ac, char **av)
{
	t_env	*env;

	env = init_struct_env();
	if(parse_map(ac, av, env->map) == -1)
		exit_prog(&(env->map), NULL, 0);
	printf("x: %f, y:%f\n", env->cam.pos.x, env->cam.pos.y);
	launch_raycasting(env);
	return (0);
 }
