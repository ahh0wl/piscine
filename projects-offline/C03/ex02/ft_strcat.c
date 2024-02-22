/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidhi <mvidhi@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 18:26:55 by mvidhi            #+#    #+#             */
/*   Updated: 2024/02/06 18:26:57 by mvidhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	char *start;
	
	start = dest;
	while(*dest != '\0')
	{
		dest++;
	}
    while (*src != '\0')
    {
	    *dest = *src;
	    src++;
	    dest++;
    }
    return (start);
}
