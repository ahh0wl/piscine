/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidhi <mvidhi@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 22:33:46 by mvidhi            #+#    #+#             */
/*   Updated: 2024/02/06 22:33:55 by mvidhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	char *s1;
	char *s2;
	
	if(!*to_find)
	{
		return (str);
	}
	while(*str)
	{
		s1 = str;
		s2 = to_find;
		while(*s1 && *s2 && *s1 == *s2)
		{
			s1++;
			s2++;
		}
		if(*s2 == '\0')
		{
			return (str);
		}
		str++;
	}
	return (NULL);
}

