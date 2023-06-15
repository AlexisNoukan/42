#include "ft_str_is_alpha.c"
#include <stdio.h>

int	main(void)
{
	ft_str_is_alpha("B"); //ok 1
	//ft_str_is_alpha('Z'); //ok 1
	//ft_str_is_alpha('0'); //pas ok 0
	int i = ft_str_is_alpha("JenniferLopez"); //ok 1
	printf("%d", i);
}
