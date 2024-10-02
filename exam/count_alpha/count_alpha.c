#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}

int is_alpha(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return(1);
	else return (0);
}

int is_counted(char *str, char c, int index)
{
	int i = 0;
	while (i < index)
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int main(int ac, char *av[])
{
	if (ac != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	int i = 0;
	int j;
	int count = 0;
	int sep = 1;
	while (av[1][i] != '\0')
	{
		if (is_alpha(av[1][i]) == 0)
			i++;
		if (is_alpha(av[1][i]) == 1 && is_counted(av[1], av[1][i], i) == 0)
		{
			j = 0;
			count = 0;
			while(av[1][j] != '\0')
			{
				if (av[1][j] == av[1][i])
				{
					count++;
				}
				j++;
			}
			if(sep == 0)
				printf(", ");
			printf("%d%c", count, av[1][i]);
			sep = 0;
		}
		i++;
	}
	printf("\n");
	return (0);
}