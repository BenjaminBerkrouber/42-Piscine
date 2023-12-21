/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 01:37:11 by bberkrou          #+#    #+#             */
/*   Updated: 2023/09/28 07:25:25 by bberkrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	size;
	int	i;

	i = 0;
	size = 0;
	while (dest[size])
	{
		size++;
	}
	while (src[i] && nb > 0)
	{
		dest[size] = src[i];
		i++;
		size++;
		nb--;
	}
	dest[size] = 0;
	return (dest);
}
