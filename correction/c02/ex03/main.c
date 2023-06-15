#include "ft_str_is_numeric.c"

int	main(void)
{
	ft_str_is_numeric("K"); //1
	ft_str_is_numeric("g"); //0
	ft_str_is_numeric("\0"); //1
}

//Create a function that returns 1 if the string given as a parameter contains only digits, and 0 if it contains any
//other character
