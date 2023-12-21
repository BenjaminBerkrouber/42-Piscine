/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 01:05:40 by bberkrou          #+#    #+#             */
/*   Updated: 2023/10/02 11:51:40 by bberkrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	ft_put_nbr(int nb)
{
	long int	n;
	char		c;

	n = nb;
	if (n < 0)
	{
		n = n * -1;
		write(1, "-", 1);
	}
	if (n > 9)
	{
		ft_put_nbr(n / 10);
	}
	c = n % 10 + '0';
	write(1, &c, 1);
}

void	ft_put_string(char *str)
{
	while (*str)
		write(1, &*(str++), 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		ft_put_string(par[i].str);
		write(1, "\n", 1);
		ft_put_nbr(par[i].size);
		write(1, "\n", 1);
		ft_put_string(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}
