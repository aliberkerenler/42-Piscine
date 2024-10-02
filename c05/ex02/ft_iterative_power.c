/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerenler <aerenler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 16:07:23 by aerenler          #+#    #+#             */
/*   Updated: 2024/08/29 16:17:55 by aerenler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 1;
	result = 1;
	if (power < 0)
		return (0);
	if (nb == 0 & power == 0)
		return (1);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	while (i <= power)
	{
		result = result * nb;
		i++;
	}
	return (result);
}
