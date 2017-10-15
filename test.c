#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

int main(int ac, char **av) {
	printf("%d return fd", open(av[1],O_RDONLY));
	return (0);
}
