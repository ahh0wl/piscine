/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidhi <mvidhi@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 07:22:03 by mvidhi            #+#    #+#             */
/*   Updated: 2024/02/05 07:27:22 by mvidhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;

	i = 1;
	while ((unsigned int)i < size)
	{
		dest[i - 1] = src[i - 1];
		i++;
	}
	size = 0;
	while (dest[size] != '\0')
	{
		size++;
	}
	return (size);
}
