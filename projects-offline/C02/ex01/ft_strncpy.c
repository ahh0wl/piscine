/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidhi <mvidhi@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 13:52:52 by mvidhi            #+#    #+#             */
/*   Updated: 2024/02/04 18:23:34 by mvidhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;
	int	e;

	i = 0;
	e = 0;
	while ((unsigned int)i < n)
	{
		if (src[i] == '\0' || e == 1)
		{
			dest[i] = '\0';
			e = 1;
		}
		else
		{
			dest[i] = src[i];
		}
		i++;
	}
	return (dest);
}
