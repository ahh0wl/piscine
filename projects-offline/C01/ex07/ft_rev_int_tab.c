/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidhi <mvidhi@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 05:59:11 by mvidhi            #+#    #+#             */
/*   Updated: 2024/02/03 13:00:40 by mvidhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	temp;

	start = 0;
	size--;
	while (start < size)
	{
		temp = tab[start];
		tab[start] = tab[size];
		tab[size] = temp;
		start++;
		size--;
	}
}
/*int	main(void)
{
	int	size;
	int	pi[7];
	int	*pip;
	int	i;

	pi[0] = 3 + '0';
	pi[1] = 1 + '0';
	pi[2] = 4 + '0';
	pi[3] = 1 + '0';
	pi[4] = 5 + '0';
	pi[5] = 9 + '0';
	pi[6] = '\0';
	pip = &pi[0];
	i = 0;
	size = 7;
	while (i < size)
	{
		write(1, &pi[i], 1);
		i++;
	}
	write(1, "\n", 1);
	ft_rev_int_tab(pip, size);
	i = 0;
	size = 7;
	while (i < size)
	{
		write(1, &pi[i], 1);
		i++;
	}
	return (0);
}*/
