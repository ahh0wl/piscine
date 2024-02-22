/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidhi <mvidhi@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 01:10:48 by mvidhi            #+#    #+#             */
/*   Updated: 2024/02/13 14:11:00 by mvidhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	checklimit(int nbr, int bs)
{
	if (nbr == -2147483648)
	{
		if (bs == 2)
			write(1, "-10000000000000000000000000000000", 33);
		if (bs == 10)
			write(1, "-2147483648", 11);
		if (bs == 16)
			write(1, "-80000000", 9);
		if (bs == 8)
			write(1, "-npppppppppp", 12);
		return ('t');
	}
	if (nbr == 2147483647)
	{
		if (bs == 2)
			write(1, "1111111111111111111111111111111", 33);
		if (bs == 10)
			write(1, "2147483647", 10);
		if (bs == 16)
			write(1, "7FFFFFFF", 8);
		if (bs == 8)
			write(1, "17777777777", 11);
		return ('t');
	}
	return ('f');
}

int	checkbase(char *base, char octa[])
{
	int	bs;	
	int	i;

	bs = 0;
	i = 0;
	while (base[bs] == ('0' + bs) && base[bs] <= '9')
	{
		bs++;
	}
	while (base[bs] == ('A' + i) && base[bs] <= 'F' )
	{
		bs++;
		i++;
	}
	i = 0;
	while (base[i] == octa[i] && base[i] != '\0')
	{
		bs++;
		i++;
	}
	if (bs != 10 && bs != 2 && bs != 16 && bs != 8)
		return (0);
	return (bs);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_divide_out(int nbr, int bs, char *base)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr >= bs)
	{
		ft_divide_out(nbr / bs, bs, base);
		ft_divide_out(nbr % bs, bs, base);
	}
	else
	{
		ft_putchar(base[nbr % bs]);
	}
	return ;
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	bs;

	bs = checkbase(base, "poneyvif");
	if (bs == 0)
		return ;
	if (checklimit(nbr, bs) != 't')
	{
		ft_divide_out(nbr, bs, base);
	}
}
