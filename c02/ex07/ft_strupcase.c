/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 08:42:32 by bberkrou          #+#    #+#             */
/*   Updated: 2023/09/23 05:06:50 by bberkrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str);

void	ft_upper(char *str, int temp)
{
	char	a;

	a = str[temp] - 32;
	str[temp] = a;
}

char	is_min(char a)
{
	if (a >= 'a' && a <= 'z')
	{
		return (1);
	}
	return (0);
}

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_min(str[i]))
		{
			ft_upper(str, i);
		}
		i++;
	}
	return (str);
}
