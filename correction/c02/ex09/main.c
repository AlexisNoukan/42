#include "ft_strcapitalize.c"
#include <stdio.h>

int	main(void)
{
	char test[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(test));
}
