#include "ft_str_is_printable.c"

int	main(void)
{
	char	str[] = {10};

	ft_str_is_printable("j"); //1
	ft_str_is_printable(str); //0
	ft_str_is_printable("("); //1
}
