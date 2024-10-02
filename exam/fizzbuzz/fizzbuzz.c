#include <unistd.h>

void ft_putstr(char *c)
{
	int i = 0;
	
	while (c[i] != '\0')
	{
		write(1,&c[i],1);
		i++;
	}
}
void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int n)
{
	if (n >= 10)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + '0');
}
int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			ft_putstr("fizzbuzz");
		else if (i % 3 == 0)
			ft_putstr("fizz");
		else if (i % 5 == 0)
			ft_putstr("buzz");
		else ft_putnbr(i);
		ft_putchar('\n');
		i++;
	}
	return (0);
}