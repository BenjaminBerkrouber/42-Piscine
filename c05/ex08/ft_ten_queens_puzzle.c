/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 01:57:08 by bberkrou          #+#    #+#             */
/*   Updated: 2023/10/04 08:47:05 by bberkrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, &*(str++), 1);
}

int	is_line_valide(char *str, char c, int indice)
{
	int	i;

	i = 0;
	while (i < indice)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int	is_diag_valide(char *str, int indice, char c)
{
	int	i;
	int	indice_diff;

	i = 0;
	while (i < indice)
	{
		indice_diff = indice - i;
		if (c == (str[i] + indice_diff) || c == (str[i] - indice_diff))
			return (0);
		i++;
	}
	return (1);
}

void	check_try(int indice, char *str, int *x)
{
	char	c;

	c = '0';
	if (indice == 10)
	{
		ft_putstr(str);
		write(1, "\n", 1);
		(*x)++;
		return ;
	}
	while (c <= '9')
	{
		if (is_line_valide(str, c, indice) && is_diag_valide(str, indice, c))
		{
			str[indice] = c;
			check_try(indice + 1, str, x);
		}
		c++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	char	str[11];
	int		x;
	int		i;

	i = 0;
	while (i < 10)
	{
		str[i] = 0;
		i++;
	}
	x = 0;
	str[10] = '\0';
	check_try(0, str, &x);
	return (x);
}
