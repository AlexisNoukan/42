
#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;

	argc = 0;
	i = 0;
	while (argc == 0 && argv[0][i])
	{
		write(1, &argv[0][i],1);
		++i;
	}
	return (0);
}
