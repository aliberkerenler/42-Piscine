/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerenler <aerenler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 15:46:42 by aerenler          #+#    #+#             */
/*   Updated: 2024/08/28 16:55:30 by aerenler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	a;

	if (to_find[0] == '\0')
	{
		return (str);
	}
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		a = i;
		while (str[a] != '\0' && to_find[j] != '\0' && str[a] == to_find[j])
		{
			j++;
			a++;
		}
		if (to_find[j] == '\0')
		{
			return (&str[i]);
		}
		i++;
	}
	return (0);
}
