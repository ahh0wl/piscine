/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidhi <mvidhi@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 03:14:54 by mvidhi            #+#    #+#             */
/*   Updated: 2024/02/19 05:07:20 by mvidhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
	return ;
}

void	ft_show_tab(struct s_stock_str *par)
{
	char	*temp;

	while (par->str)
	{
		temp = par->str;
		while (*temp)
		{
			write(1, temp, 1);
			temp++;
		}
		write(1, "\n", 1);
		ft_putnbr(par->size);
		write(1, "\n", 1);
		temp = par->copy;
		while (*temp)
		{
			write(1, temp, 1);
			temp++;
		}
		write(1, "\n", 1);
		par++;
	}
}
