#include <stdlib.h>

int     *ft_range(int start, int end)
{
	int *ary;
	int i;
	
	i = 0;
	ary = malloc(sizeof(int) * (end - start + 2));
	while (start <= end)
	{
		ary[i] = start;
		start++;
		i++;
	}
	return (ary);
}
