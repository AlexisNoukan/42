#include <stdio.h>
#include "ft_strncpy.c"

int	main(void)
{
	char	dest[] = "Hello"; 
	char	src[] = "World";
	unsigned int	n = 10;

	ft_strncpy(dest, src, n);
	printf("(ft_strncpy) dest vaut %s, src vaut %s\n", dest, src);
}
