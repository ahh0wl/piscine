/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidhi <mvidhi@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 18:44:38 by mvidhi            #+#    #+#             */
/*   Updated: 2024/02/03 00:56:19 by mvidhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	digits;

	digits = 48;
	while (digits < 58)
	{
		write(1, &digits, 1);
		digits++;
	}
}

/*int	main(void)
{
	ft_print_numbers();
	return (0);
}*/
