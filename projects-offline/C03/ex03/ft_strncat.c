/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidhi <mvidhi@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 18:46:35 by mvidhi            #+#    #+#             */
/*   Updated: 2024/02/06 18:49:07 by mvidhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char *fin;

	fin = dest;
	while(*dest)
	{
		dest++;
	}
	while (*src != '\0' && nb > 0)
	{
		*dest = *src;
		src++;
		dest++;
		nb--;
	}
	*dest = '\0';
	return (fin);
}
