#include <stdio.h>
#include "ft_strcpy.c"

int	main(void)
{
	char	src[] = "beautiful";
	char 	dest[] = "Wo";
	ft_strcpy(dest, src);
	printf("%s", ft_strcpy(dest, src));
	printf("base %s, dest %s", src, dest);
	return 0;
}
