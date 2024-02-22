/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidhi <mvidhi@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 11:21:59 by mvidhi            #+#    #+#             */
/*   Updated: 2024/02/03 12:54:45 by mvidhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}
/*int	main(void)
{
	char	mw[5];
	char	sound[5];
	char	*mwp;
	char	*soundp;
	int	i;
	
	i = 0;
	mw[0] = 'm';
	mw[1] = 'e';
	mw[2] = 'o';
	mw[3] = 'w';
	mw[4] = '\0';

	mwp = &mw[0];
	soundp = &sound[0];
	while (i < 5)
	{
		write(1, &mw[i], 1);
		i++;
	};
	write(1, "\n", 1);
	i = 0;
	ft_strcpy(soundp, mwp);
	while (i < 5)
	{
		write(1, &sound[i], 1);
		i++;
	}
	return (0);
}*/
