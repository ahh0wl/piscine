/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidhi <mvidhi@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 23:40:29 by mvidhi            #+#    #+#             */
/*   Updated: 2024/02/14 00:08:22 by mvidhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	base;

	base = 2;
	if (nb == 1 || nb <= 0)
		return (0);
	while (base < nb)
	{
		if (nb % base == 0)
			return (0);
		base++;
	}
	return (1);
}
