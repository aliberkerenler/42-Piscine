#include <unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}

int is_lower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else return (0);
}

int is_upper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else return (0);
}


int main(int ac, char *av[])
{
	int i;

	i = 0;
	if(ac != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	while (av[1][i] != '\0')
	{
		if (is_lower(av[1][i]) == 1)
			av[1][i] = av[1][i] - 32;
		else if (is_upper(av[1][i]) == 1)
			av[1][i] = av[1][i] + 32;
		i++;
	}
	i = 0;
	while (av[1][i] != '\0')
	{
		ft_putchar(av[1][i]);
		i++;
	}
	ft_putchar('\n');
}