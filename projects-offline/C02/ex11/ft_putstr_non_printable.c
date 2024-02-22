/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidhi <mvidhi@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 08:27:01 by mvidhi            #+#    #+#             */
/*   Updated: 2024/02/05 09:20:35 by mvidhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int	i;
	char	res[2];

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] < 32 || str[i] > 126)
		{
			write(1, "\\", 2);
			res[0] = "0123456789abcdef"[str[i] / 16];
			res[1] = "0123456789abcdef"[str[i] % 16];
			write(1, res, 8);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}
