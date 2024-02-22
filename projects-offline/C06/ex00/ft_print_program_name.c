/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_program_name.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidhi <mvidhi@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 00:21:58 by mvidhi            #+#    #+#             */
/*   Updated: 2024/02/14 00:45:10 by mvidhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*name;

	argc = 1;
	name = argv[0];
	while (*name)
	{
		write(1, name, 1);
		name++;
	}
	write(1, "\n", 1);
	return (0);
}
