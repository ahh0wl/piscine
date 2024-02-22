# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mvidhi <mvidhi@student.42berlin.de>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/20 20:38:50 by mvidhi            #+#    #+#              #
#    Updated: 2024/02/20 20:40:32 by mvidhi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

gcc -Wall -Werror -Wextra -c ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c

#Creates the library
ar rc libft.a ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o

#Creates the index of the library
ranlib libft.a

#Cleans objects after creating the library
rm -f *.o
