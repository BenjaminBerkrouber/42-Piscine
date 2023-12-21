/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 17:01:02 by bberkrou          #+#    #+#             */
/*   Updated: 2023/10/02 08:05:16 by bberkrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	number;

	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	number = 1;
	while (nb > 0)
	{
		number *= nb;
		nb--;
	}	
	return (number);
}
