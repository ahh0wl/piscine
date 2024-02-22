/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidhi <mvidhi@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 18:51:17 by mvidhi            #+#    #+#             */
/*   Updated: 2024/02/03 20:24:44 by mvidhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size -1)
	{
		j = 0;
		while (j < size - 1 - i)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j + 1];
				tab[j + 1] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}
/*int	main(void)
{
	int	num[6];
	int	*nump;
	int	size;
	int	i;
	
	num[0] = 3;
	num[1] = 1;
	num[2] = 4;
	num[3] = 1;
	num[4] = 5;
	num[5] = 9;
	size = 6;
	nump = &num[0];
	ft_sort_int_tab(nump, size);
	i = 0;
	while (i < size)
	{
		num[i] = num[i] + '0';
		write(1, &num[i], 1);
		i++;
	}
}*/
