/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidhi <mvidhi@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 03:58:32 by mvidhi            #+#    #+#             */
/*   Updated: 2024/02/03 04:12:44 by mvidhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = *a % *b;
	*a = *a / *b;
	*b = c;
}
/*int	main(void)
{
	int	num1;
	int	num2;
	int	*num1p;
	int	*num2p;

	num1 = 84;
	num2 = 2;
	num1p = &num1;
	num2p = &num2;
	ft_ultimate_div_mod(num1p, num2p);
	write (1, num1p, 4);//asterix
	write (1, num2p, 4);//0 has a null character
	return (0);
}*/
