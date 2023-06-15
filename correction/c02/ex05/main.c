#include "ft_str_is_uppercase.c"

int	main(void)
{
	ft_str_is_uppercase("A"); //1
	ft_str_is_uppercase("a"); //0
	ft_str_is_uppercase("\0"); //1
}
