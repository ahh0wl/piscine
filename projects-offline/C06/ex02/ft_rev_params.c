/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidhi <mvidhi@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 00:21:58 by mvidhi            #+#    #+#             */
/*   Updated: 2024/02/14 21:09:16 by mvidhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	char    *name;

	while (argc > 1)
	{
		name = argv[argc - 1];
		while (*name)
		{
			write(1, name, 1);
			name++;
		}
		write(1, "\n", 1);
		argc--;
	}
	return (0);
}
