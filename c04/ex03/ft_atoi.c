/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 02:44:25 by bberkrou          #+#    #+#             */
/*   Updated: 2023/09/26 15:32:22 by bberkrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_white_space(char c)
{
	return ((c <= 13 && c >= 9) || c == 32);
}

int	is_alpha(char c)
{
	return ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'));
}

int	is_number(char c)
{
	return (c <= '9' && c >= '0');
}

int	ft_atoi(char *str)
{
	int	i;
	int	signe;
	int	number;

	number = 0;
	signe = 0;
	i = 0;
	while (is_white_space(str[i]))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i++] == '-')
			signe++;
	}
	while (is_number(str[i]))
	{
		number *= 10;
		number += str[i] - '0';
		i++;
	}
	if (signe % 2 == 1)
		number *= -1;
	return (number);
}
