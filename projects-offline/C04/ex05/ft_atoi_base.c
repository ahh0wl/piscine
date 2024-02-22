/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidhi <mvidhi@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 14:11:30 by mvidhi            #+#    #+#             */
/*   Updated: 2024/02/13 15:12:57 by mvidhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	find_value_str(char *nbr, int i, char *base)
{
	int	j;

	j = 0;
	while (base[j] != nbr[i])
		j++;
	return (j);
}

int	check_sign(char *nbr)
{
	int	i;
	int	sign;

	i = 0;
	while (nbr[i] == ' ')
		i++;
	sign = 1;
	while (nbr[i] == '-' || nbr[i] == '+' || nbr[i] == ' ')
	{
		if (nbr[i] == ' ')
			return (0);
		if (nbr[i] == '-')
			sign *= -1;
		i++;
	}
	return (sign);
}

int	check_base(char *base)
{
	int	bs;

	if (base[0] == '\0')
		return (0);
	bs = 0;
	while (base[bs] != '\0')
		bs++;
	return (bs);
}

int	from_to_dec(char *nbr, char *base, int i)
{
	int	res;

	res = 0;
	while (nbr[i] != '\0')
	{
		if (nbr[i] != '-' && nbr[i] != '+')
		{
			while (nbr[i] == ' ')
				i++;
			if (nbr[i] == '\0')
				break ;
			res = (find_value_str(nbr, i, base) + res * check_base(base));
		}
		i++;
	}
	return (res);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	while (str[i] == ' ')
		i++;
	sign = check_sign(str);
	while (str[i] == '-' || str[i] == '+')
		i++;
	res = 0;
	if (check_base(base) == 0)
		return (0);
	res = from_to_dec(str, base, i);
	return (res * sign);
}
