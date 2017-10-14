 #include "wolf3d.h"

 int		main(int ac, char **av)
 {
	 if(parse_map(ac, av, init_struct()) == -1)
	 	return (EXIT_FAILURE);
	 printf("linetab -> \n" );
	 return (0);
 }
