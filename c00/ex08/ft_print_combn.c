/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 02:15:27 by bberkrou          #+#    #+#             */
/*   Updated: 2023/09/21 05:37:56 by bberkrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn(int n);
int		ft_ischeck(int nbr, int mod);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
int		ft_power(int nbr, int power);
int		ft_intlen(int nbr);

void	ft_print_combn(int n)
{
	int	i;
	int	tmp;
	int	val;

	i = 0;
	val = ft_power(10, n);
	while (i <= val)
	{
		if (i != 0 && ft_ischeck(i / 10, i % 10))
			write(1, ", ", 2);
		if (ft_ischeck(i / 10, i % 10))
		{
			tmp = n - ft_intlen(i);
			while (tmp--)
			{
				write(1, "0", 1);
			}
			ft_putnbr(i);
		}
		i++;
	}
}

int	ft_intlen(int nbr)
{
	int	res;

	res = 1;
	while (nbr >= 9)
	{
		nbr = nbr / 10;
		res++;
	}
	return (res);
}

int	ft_ischeck(int nbr, int mod)
{
	if (nbr <= 0)
		return (1);
	if (nbr % 10 < mod)
	{
		if (nbr > 10)
			return (ft_ischeck(nbr / 10, nbr % 10));
		return (1);
	}
	return (0);
}

int	ft_power(int nbr, int power)
{
	int	res;

	res = nbr;
	while (--power)
	{
		res *= nbr;
	}
	return (res);
}

void	ft_putnbr(int nb)
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
		ft_putnbr(n / 10);
	}
	c = n % 10 + '0';
	write(1, &c, 1);
}
