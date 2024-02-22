/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidhi <mvidhi@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 05:18:30 by mvidhi            #+#    #+#             */
/*   Updated: 2024/02/05 18:23:41 by mvidhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	alphanumeric(char c)
{
	if ((c < '0' || c > '9') && (c < 'a' || c > 'z') && (c < 'A' || c > 'Z'))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

char	capsw(char c, int nw)
{
	if (nw == 1)
	{
		if (c >= 'a' && c <= 'z')
		{
			c -= 32;
		}
		nw = 0;
	}
	else if (c >= 'A' && c <= 'Z')
	{
		c += 32;
	}
	return (c);
}

char	ft_strcapitalize(char *str)
{
	int	nw;
	int	i;

	nw = 1;
	i = 0;
	while (str[i] != '\0')
	{
		while (alphanumeric(str[i]) == 1 && str[i] != '\0' )
		{
			if (nw == 1)
			{
				str[i] = capsw(str[i], nw);
				nw = 0;
			}
			else
			{
				str[i] = capsw(str[i], nw);
			}
			i++;
		}
		i++;
		nw = 1;
	}
	return (*str);
}
