/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerenler <aerenler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 18:08:31 by aerenler          #+#    #+#             */
/*   Updated: 2024/09/02 15:54:50 by aerenler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort_ascii(char **av, int ac)
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	while (i < ac - 1)
	{
		j = 1;
		while (j < ac - i)
		{
			if (ft_strcmp(av[j], av[j + 1]) > 0)
			{
				temp = av[j];
				av[j] = av[j + 1];
				av[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

int	main(int ac, char *av[])
{
	int	i;
	int	len;

	ft_sort_ascii(av, ac);
	i = 1;
	while (i < ac)
	{
		len = 0;
		while (av[i][len] != '\0')
			len++;
		write(1, av[i], len);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
