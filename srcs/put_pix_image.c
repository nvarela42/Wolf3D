/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_pix_image.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvarela <nvarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/18 15:09:15 by nvarela           #+#    #+#             */
/*   Updated: 2017/10/18 15:15:07 by nvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "fractol.h"

int			ft_search_rgb(int r, int g, int b)
{
	return ((r & 0xff) << 16) + ((g & 0xff) << 8) + (b & 0xff);
}

/*t_color		*ft_lstco(int type)
{
	t_color *col;

	col = (t_color *)malloc(sizeof(t_color) * (TABCOLSIZE + 1));
	if (type == 0 || type == BASIC_COLTYPE)
		col = ft_basic_color(col);
	else if (type == COLTYPE_ONE)
		col = ft_col_type_one(col);
	else if (type == COLTYPE_TWO)
		col = ft_col_type_two(col);
	return (col);
}*/

void	put_pix_image(t_env *env int x, int y, int color)
{
	int		def_color;
	int		i;

	if (color < 0)
		color = 0;
	if (x < 0 || y < 0)
		return ;
	if (x >= WIN_W || y >= WIN_H)
		return ;
	def_color = mlx_get_color_value(MLX.mlx, color);
	i = x * 4 + y * MLX.mlximgsize;
	MLX.imgchar[i] = (def_color & 0xFF);
	MLX.imgchar[i + 1] = (def_color & 0xFF00) >> 8;
	MLX.imgchar[i + 2] = (def_color & 0xFF0000) >> 16;
}
