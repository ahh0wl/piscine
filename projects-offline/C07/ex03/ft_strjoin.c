/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidhi <mvidhi@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 21:25:10 by mvidhi            #+#    #+#             */
/*   Updated: 2024/02/19 22:51:53 by mvidhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_get_total_length(int size, char **strs)
{
	int	total_len;
	int	i;

	total_len = 0;
	i = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		i++;
	}
	return (total_len);
}

char	*create_empty_string(int i)
{
	char	*empty_string;

	empty_string = (char *) malloc(i * sizeof(char));
	if (!empty_string)
		return (NULL);
	empty_string[0] = '\0';
	return (empty_string);
}

int	ft_write_str(char *dest, char *src, int gp)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[gp + i] = src[i];
		i++;
	}
	return (gp + i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		totlen;
	char	*result;
	int		gp;
	int		nstr;

	if (size <= 0 || strs == NULL || *strs == NULL || sep == NULL)
		return (create_empty_string(1));
	totlen = ft_get_total_length(size, strs) + ft_strlen(sep) * (size - 1);
	result = (char *) malloc((totlen + 1) * sizeof(char));
	if (!result)
		return (NULL);
	gp = 0;
	nstr = 0;
	while (nstr < size - 1)
	{
		gp = ft_write_str(result, strs[nstr], gp);
		gp = ft_write_str(result, sep, gp);
		nstr++;
	}
	ft_write_str(result, strs[nstr], gp);
	result[totlen] = '\0'; 
	return (result);
}
/*#include <stdio.h>
  int main()
  {
  char *a[] = {"", "hello", "", "world!"};
  char b[] = {"666"};
  char *r = ft_strjoin(4, a, b);
  printf("%s", r);
  return 0;
  }*/
