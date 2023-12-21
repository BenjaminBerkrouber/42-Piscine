/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 03:26:03 by bberkrou          #+#    #+#             */
/*   Updated: 2023/09/28 07:13:13 by bberkrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{	
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	size;
	int	i;

	i = 0;
	size = str_len(dest);
	while (src[i])
	{
		dest[size] = src[i];
		i++;
		size++;
	}
	dest[size] = 0;
	return (dest);
}
