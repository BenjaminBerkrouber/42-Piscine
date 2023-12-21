/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 08:03:01 by bberkrou          #+#    #+#             */
/*   Updated: 2023/09/23 06:59:15 by bberkrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check(char str)
{
	return (str > 31 && str != 127);
}

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!ft_check(str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
