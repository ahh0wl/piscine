/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidhi <mvidhi@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 21:30:31 by mvidhi            #+#    #+#             */
/*   Updated: 2024/02/13 21:42:12 by mvidhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0 || (power == 0 && nb == 0))
		return (1);
	else if (power < 0)
		return (0);
	if (power > 1)
		nb *= ft_recursive_power(nb, power - 1);
	return (nb);
}
