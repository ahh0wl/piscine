/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidhi <mvidhi@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 05:12:48 by mvidhi            #+#    #+#             */
/*   Updated: 2024/02/15 05:28:06 by mvidhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	*range = (int *) malloc(size * sizeof(size));
	if (*range == NULL)
		return (-1);
	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	(*range)[i] = '\0';
	return (i);
}
