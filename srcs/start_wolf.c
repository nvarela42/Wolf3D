#include "wolf3d.h"



void		start_wolf(t_env *env)
{
	mlx_put_image_to_window(&(MLX.mlx), &(MLX.win), &(MLX.image), 0, 0);
	mlx_hook(&(MLX.win), 17, 0, quit_cross,  &mlx);
	// mlx_key_hook(&(MLX.win), /*key_fonction*/,&mlx);
	// mlx_mouse_hook(&(MLX.win), /*mouse_button*/, &mlx);
	mlx_loop(mlx.mlx);
}
