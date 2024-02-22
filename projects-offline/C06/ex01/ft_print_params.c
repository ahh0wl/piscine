/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidhi <mvidhi@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 00:21:58 by mvidhi            #+#    #+#             */
/*   Updated: 2024/02/14 20:53:08 by mvidhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*name;
	int		arg;

	arg = 1;
	while (arg < argc)
	{
		name = argv[arg];
		while (*name)
		{
			write(1, name, 1);
			name++;
		}
		write(1, "\n", 1);
		arg++;
	}
	return (0);
}
