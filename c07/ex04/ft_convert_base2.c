/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nledent <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 23:16:43 by nledent           #+#    #+#             */
/*   Updated: 2023/10/11 17:53:00 by bberkrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putnbr_base(int nbr, char *base_to, int *i, char *buf)
{
	long	nb;
	int		len_base;

	nb = nbr;
	len_base = 0;
	while (base_to[len_base] != 0)
		len_base ++;
	if (nb < 0)
	{
		nb = nb * -1;
		buf[*i] = '-';
		*i = *i + 1;
	}
	if (nb / len_base == 0)
	{
		buf[*i] = base_to[nb];
		*i = *i + 1;
	}
	else
	{
		ft_putnbr_base(nb / len_base, base_to, i, buf);
		buf[*i] = base_to[nb % len_base];
		*i = *i + 1;
		buf[*i] = 0;
	}
}

int	check_char_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != 0)
	{
		if (c == base[i])
			return (i + 1);
		i++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base, int len_basef)
{
	int	nb;
	int	i;
	int	j;

	i = 0;
	j = 1;
	nb = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			j = j * -1;
		i++;
	}
	while (check_char_base(str[i], base) != 0)
	{
		nb = nb * len_basef + (check_char_base(str[i], base) - 1);
		i++;
	}
	return (nb * j);
}

int	check_bse(char *base, int len)
{
	int	i;
	int	j;

	i = 0;
	if (len == 1 || len == 0)
		return (0);
	while (base[i] != 0)
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] == 32 || (base[i] >= 9 && base [i] <= 13))
			return (0);
		while (base[j] != 0 && base[i] != 0)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}	
		i++;
	}
	return (1);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		lenbf;
	int		lenbt;
	int		i;
	char	*buf;

	lenbf = 0;
	lenbt = 0;
	i = 0;
	while (base_from[lenbf] != 0)
		lenbf ++;
	while (base_to[lenbt] != 0)
		lenbt ++;
	if (check_bse(base_from, lenbf) == 0 || check_bse(base_to, lenbt) == 0)
		return (0);
	buf = malloc(sizeof(char) * 35);
	if (buf == NULL)
		return (0);
	ft_putnbr_base(ft_atoi_base(nbr, base_from, lenbf), base_to, &i, buf);
	return (buf);
}
