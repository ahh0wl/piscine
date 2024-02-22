#include "ft_stock.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_strcpy(char *src, int size)
{
	int		i;
	char	*dest;

	dest = (char *)malloc((size + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*s;
	char		*c;

	s = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!s)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		s[i].size = ft_strlen(av[i]);
		s[i].str = av[i];
		c = ft_strcpy(av[i], s[i].size);
		s[i].copy = c;
		i++;
	}
	s[i].size = 0;
	s[i].str = 0;
	s[i].copy = 0;
	return (s);
}
