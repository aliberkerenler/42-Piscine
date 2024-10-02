#include <unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}

int main(int ac, char *av[])
{
	if (ac != 2)
	{
		ft_putchar('z');
		ft_putchar('\n');
		return (0);
	}
	int i = 0;
	char ch = 'z';
	while (av[1][i] != '\0')
	{
		if (av[1][i] == ch)
		{
			ft_putchar('z');
			ft_putchar('\n');
			return (0);
		}
		i++;
	}
	ft_putchar('z');
	ft_putchar('\n');
	return (0);
}