/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 05:07:26 by bberkrou          #+#    #+#             */
/*   Updated: 2023/09/26 07:12:15 by bberkrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str);

void	ft_lower(char *str, int temp)
{
	char	a;

	a = str[temp] + 32;
	str[temp] = a;
}

char	is_maj(char a)
{
	if (a >= 'A' && a <= 'Z')
	{
		return (1);
	}
	return (0);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_maj(str[i]))
		{
			ft_lower(str, i);
		}
		i++;
	}
	return (str);
}
