/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:50:22 by bberkrou          #+#    #+#             */
/*   Updated: 2023/09/20 16:03:35 by bberkrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int	*a, int	*b);

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
