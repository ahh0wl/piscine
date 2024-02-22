/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidhi <mvidhi@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 22:14:37 by mvidhi            #+#    #+#             */
/*   Updated: 2024/02/19 22:14:40 by mvidhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_H
# define FT_STOCK_H
typedef struct s_stock_str
{
	int	size;
	char	*str;
	char	*copy;
}	t_stock_str;
t_stock_str *ft_strs_to_tab(int ac, char **av);
void ft_show_tab(t_stock_str *par);
#endif
