/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 18:27:46 by bberkrou          #+#    #+#             */
/*   Updated: 2023/09/30 18:42:36 by bberkrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long long	left;
	long long	right;
	long long	mid;
	long long	square;

	if (nb < 0)
		return (0);
	if (nb == 1)
		return (1);
	left = 0;
	right = nb;
	while (left <= right)
	{
		mid = (left + right) / 2;
		square = mid * mid;
		if (square == nb)
			return ((int)mid);
		else if (square < nb)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (0);
}
