/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidhi <mvidhi@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 00:43:20 by mvidhi            #+#    #+#             */
/*   Updated: 2024/02/19 05:06:21 by mvidhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*typedef struct s_stock_str
{
	int	size;
	char	*str;
	char	*copy;
}	t_stock_str;*/
int	get_length(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	copy_string(char *fstr, char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		fstr[i] = str[i];
		i++;
	}
	fstr[i] = '\0';
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*newarr;
	int			i;

	i = 0;
	newarr = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	if (!newarr)
		return (NULL);
	while (i < ac)
	{
		newarr[i].size = get_length(*av);
		newarr[i].str = (char *) malloc(newarr[i].size * sizeof(char) + 1);
		if (!newarr[i].str)
			return (NULL);
		newarr[i].copy = (char *) malloc(newarr[i].size * sizeof(char) + 1);
		if (!newarr[i].copy)
			return (NULL);
		copy_string(newarr[i].str, *av);
		copy_string(newarr[i].copy, *av);
		av++;
		i++;
	}
	newarr[i].str = 0;
	return (newarr);
}
