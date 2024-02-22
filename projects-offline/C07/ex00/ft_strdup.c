/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidhi <mvidhi@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 03:50:04 by mvidhi            #+#    #+#             */
/*   Updated: 2024/02/15 03:50:09 by mvidhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*nsrc;
	int		i;

	i = 0;
	while (src[i] != '\0')
		i++;
	nsrc = (char *) malloc(i * sizeof(char));
	if(!nsrc)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		nsrc[i] = src[i];
		i++;
	}
	nsrc[i] = '\0';
	return (nsrc);
}
