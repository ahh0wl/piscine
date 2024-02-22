/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidhi <mvidhi@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 04:39:42 by mvidhi            #+#    #+#             */
/*   Updated: 2024/02/15 05:11:17 by mvidhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	size;
	int	i;

	if (min >= max)
	{
		return (NULL);
	}
	size = max - min;
	arr = (int *) malloc(size * sizeof(int));
	if(!arr)
		return (NULL);
	i = 0;
	while (min < max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	arr[i] = '\0';
	return (arr);
}
