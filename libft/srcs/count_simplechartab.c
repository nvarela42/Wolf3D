#include "libft.h"

int			count_simplechartab(char *tab)
{
	int		i;

	i = 0;
	if (tab != NULL)
	{
		while (tab[i] != '\0')
			i++;
	}
	return (i);
}
