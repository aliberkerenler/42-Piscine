/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerenler <aerenler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 17:23:51 by aerenler          #+#    #+#             */
/*   Updated: 2024/09/03 11:51:32 by aerenler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char *av[])
{
	int	len;

	(void)ac;
	len = 0;
	while (av[0][len] != '\0')
	{
		len++;
	}
	write(1, av[0], len);
	write(1, "\n", 1);
	return (0);
}
