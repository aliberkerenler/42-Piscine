#include <unistd.h>

void	ft_print_numbers(void)
{
	char numbers[] = "0123456789";
	write(1,numbers,10);
}

int main()
{
	ft_print_numbers();
	return (0);
}