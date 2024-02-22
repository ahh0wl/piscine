/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidhi <mvidhi@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 00:14:25 by mvidhi            #+#    #+#             */
/*   Updated: 2024/02/13 14:04:46 by mvidhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	skip_space(char *str, int i)
{
	while (str[i] == ' ')
	{
		i++;
	}
	return (i);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	res;

	res = 0;
	i = 0;
	sign = 1;
	i = skip_space(str, i);
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	res *= sign;
	return (res);
}
