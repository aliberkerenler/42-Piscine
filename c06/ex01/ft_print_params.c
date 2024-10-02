/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerenler <aerenler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 17:30:01 by aerenler          #+#    #+#             */
/*   Updated: 2024/09/02 15:53:26 by aerenler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char *av[])
{
	int	i;
	int	len;

	i = 1;
	while (i < ac)
	{
		len = 0;
		while (av[i][len] != '\0')
		{
			len++;
		}
		write(1, av[i], len);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
