#include "wolf3d.h"

static float			send_ray(t_env *env)
{
	RAY.pos = CAM.pos;
	RAY.orient.x = CAM.orient.x + MAP->plane.x * CAM.pos.x;
	RAY.orient.y = CAM.orient.y + MAP->plane.y * CAM.pos.y;
	printf("ray_x . %f, ray_y . %f\n", RAY.orient.x, RAY.orient.y);
	return (0);
}

void			launch_raycasting(t_env *env)
{
		int		col;
		float 	dist;
		// int 	height;

		col = 0;
		while (col < WIN_W)
		{
			dist = send_ray(env);
			// height = get_line_height(dist, env);
			// put_line_color(0, (WIN_H - height) / 2 - 1, COLOR_S); // sky
			// put_line_color((WIN_H - height) / 2, (WIN_H - height) / 2 + height - 1, COLOR_W); // wall
			// put_line_color((WIN_H - height) / 2 + height - 1, WIN_H - 1, COLOR_G) // ground
			col++;
		}
}
