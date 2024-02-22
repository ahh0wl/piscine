/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidhi <mvidhi@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 04:47:28 by mvidhi            #+#    #+#             */
/*   Updated: 2024/02/04 00:16:40 by mvidhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*int	main(void)
{
	char h[6];
	char *hp;
	int c;

	h[0] = 'H';
	h[1] = 'e';
	h[2] = 'l';
	h[3] = 'l';
	h[4] = 'o';
	h[5] = '\0';
	hp = &h[0];
	c = ft_strlen(hp) + '0';//+1
	write(1, &c, 4);
	return (0);
}*/
