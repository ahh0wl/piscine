/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidhi <mvidhi@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 02:40:03 by mvidhi            #+#    #+#             */
/*   Updated: 2024/02/03 03:55:26 by mvidhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*int	main(void)
{
	int	n1;
	int	n2;
	int	*n1p;
	int	*n2p;

	n1 = 48;//0
	n2 = 42;//asterix
	n1p = &n1;
	n2p = &n2;
	ft_swap(n1p, n2p);
	write (1, &n1, 1);//asterix
	write (1, &n2, 1);//0
	return (0);
}*/
