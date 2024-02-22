/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidhi <mvidhi@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 18:49:23 by mvidhi            #+#    #+#             */
/*   Updated: 2024/02/03 00:54:58 by mvidhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int		i;
	char	alphabet;

	i = 122;
	alphabet = i;
	while (i >= 97)
	{
		write(1, &alphabet, 1);
		i--;
	}
}

/*int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}*/
