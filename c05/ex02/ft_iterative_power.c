/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 19:16:27 by bberkrou          #+#    #+#             */
/*   Updated: 2023/09/30 04:34:49 by bberkrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	pow;

	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	pow = nb;
	while (1 < power)
	{
		pow *= nb;
		power--;
	}
	return (pow);
}
