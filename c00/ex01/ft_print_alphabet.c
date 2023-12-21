/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 06:23:03 by bberkrou          #+#    #+#             */
/*   Updated: 2023/09/20 15:31:28 by bberkrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void);

void	ft_print_alphabet(void)
{
	char	c;
	int		i;

	c = ' ';
	i = 0;
	while (i < 26)
	{
		c = i + 'a';
		write(1, &c, 1);
		i++;
	}
}
