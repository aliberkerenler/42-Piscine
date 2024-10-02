/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerenler <aerenler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 17:13:39 by aerenler          #+#    #+#             */
/*   Updated: 2024/08/18 17:13:43 by aerenler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	control;

	if (n < 0)
	{
		control = 'N';
	}
	else
	{
		control = 'P';
	}
	write(1, &control, 1);
}
