/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 05:15:02 by bberkrou          #+#    #+#             */
/*   Updated: 2023/09/25 01:25:32 by bberkrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_lowercase(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_is_uppercase(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int	is_alpha_num(char c)
{
	return (ft_is_lowercase(c) || ft_is_uppercase(c) || (c >= '0' && c <= '9'));
}

char	*ft_strcapitalize(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (i != 0 && str[i - 1] && is_alpha_num(str[i - 1]))
		{
			if (ft_is_uppercase(str[i]))
				str[i] += 32;
		}
		else if (is_alpha_num(str[i]))
		{
			if (ft_is_lowercase(str[i]))
				str[i] -= 32;
		}
		i++;
	}
	return (str);
}
