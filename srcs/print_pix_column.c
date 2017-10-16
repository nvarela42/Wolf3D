#include "wolf3d.h"

int			print_pix_column(int pos, int dep, int final)
{
	while (pos > dep && pos < final)
		print_column();
}
