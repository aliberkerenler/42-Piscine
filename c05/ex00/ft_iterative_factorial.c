/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerenler <aerenler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 15:47:09 by aerenler          #+#    #+#             */
/*   Updated: 2024/08/29 15:58:25 by aerenler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	i;

	i = 1;
	result = 1;
	if (nb < 0)
	{
		result = 0;
	}
	while (i <= nb)
	{
		result = i * result;
		i++;
	}
	return (result);
}
