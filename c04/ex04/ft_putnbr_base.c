/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abernade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 12:16:50 by abernade          #+#    #+#             */
/*   Updated: 2023/10/03 13:52:51 by abernade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

int	base_is_valid(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = 1;
		while (base[i + j])
		{
			if (base[i + j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	putnbr_min_int(int nbr, char *base, int base_size, int first)
{
	if (first)
		write(1, "-", 1);
	if (nbr <= base_size * -1)
	{
		putnbr_min_int(nbr / base_size, base, base_size, 0);
		putnbr_min_int(nbr % base_size, base, base_size, 0);
	}
	else
	{
		write(1, &base[nbr * -1], 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_size;

	if (base_is_valid(base))
	{
		base_size = ft_strlen(base);
		if (nbr == -2147483648)
			putnbr_min_int(nbr, base, base_size, 1);
		else
		{
			if (nbr < 0)
			{
				write(1, "-", 1);
				nbr *= -1;
			}
			if (nbr >= base_size)
			{
				ft_putnbr_base(nbr / base_size, base);
				ft_putnbr_base(nbr % base_size, base);
			}
			else
			{
				write(1, &base[nbr], 1);
			}
		}
	}
}
