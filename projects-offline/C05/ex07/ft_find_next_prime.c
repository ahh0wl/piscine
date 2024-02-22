/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidhi <mvidhi@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 23:58:54 by mvidhi            #+#    #+#             */
/*   Updated: 2024/02/14 00:09:07 by mvidhi           ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	if (nb < 0)
		nb = 2;
	while (ft_is_prime(nb) != 1)
	{
		nb++;
	}
	return (nb);
}
