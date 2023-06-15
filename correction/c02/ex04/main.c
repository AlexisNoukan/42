#include "ft_str_is_lowercase.c"

int main(void)
{
	ft_str_is_lowercase("a"); //1
	ft_str_is_lowercase("A"); //0
	ft_str_is_lowercase("\0"); //1
}
