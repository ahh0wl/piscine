/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidhi <mvidhi@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 06:05:47 by mvidhi            #+#    #+#             */
/*   Updated: 2024/02/13 20:53:05 by mvidhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	count;

	if (nb == 0 || nb == 1)
		return (1);
	else if (nb < 0)
		return (0);
	count = nb;
	while (count > 1)
	{
		count--;
		nb *= count;
	}
	return (nb);
}
