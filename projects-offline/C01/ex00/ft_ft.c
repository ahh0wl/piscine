/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidhi <mvidhi@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 01:57:40 by mvidhi            #+#    #+#             */
/*   Updated: 2024/02/03 03:09:32 by mvidhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
/*int	main(void)
{
	int	a;
	int	*nbr;

	a = 48;
	nbr = &a;
	write(1, &a, 4);//0
	ft_ft(nbr);
	write(1, &a, 4);//asterix
	return (0);
}*/
