/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidhi <mvidhi@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 00:33:00 by mvidhi            #+#    #+#             */
/*   Updated: 2024/02/06 00:34:54 by mvidhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (n == 0)
    {
	    return (0);
    }
    while (n > 1 && *s1 != '\0' && *s2 != '\0' && *s1 == *s2)
    {
	    s1++;
	    s2++;
	    n--;
    }
    return (*s1 - *s2);
}

