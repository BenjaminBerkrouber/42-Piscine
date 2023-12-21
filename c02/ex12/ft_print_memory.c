/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 05:21:40 by bberkrou          #+#    #+#             */
/*   Updated: 2023/10/03 17:30:17 by bberkrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, &*(str++), 1);
}

void	print_hex(unsigned char c)
{
	char	*hex;

	hex = "0123456789abcdef";
	write(1, &hex[c / 16], 1);
	write(1, &hex[c % 16], 1);
}

void	print_address(unsigned long addr)
{
	char	*hex;
	char	address[16];
	int		i;

	hex = "0123456789abcdef";
	i = 15;
	while (i >= 0)
	{
		address[i] = hex[addr % 16];
		addr = addr / 16;
		i--;
	}
	write(1, address, 16);
	write(1, ": ", 2);
}

void	print_block(unsigned char *ptr, unsigned int i, unsigned int size)
{
	unsigned int	j;

	print_address((unsigned long)(ptr + i));
	j = 0;
	while (j < 16)
	{
		if (i + j < size)
			print_hex(ptr[i + j]);
		else
			write(1, "  ", 2);
		if (j % 2)
			write(1, " ", 1);
		j++;
	}
	j = 0;
	while (j < 16 && i + j < size)
	{
		if (ptr[i + j] >= 32 && ptr[i + j] <= 126)
			write(1, &ptr[i + j], 1);
		else
			ft_putstr(".");
		j++;
	}
	write(1, "\n", 1);
}

void	ft_print_memory(void *addr, unsigned int size)
{
	unsigned char	*ptr;
	unsigned int	i;

	ptr = (unsigned char *)addr;
	i = 0;
	while (i < size)
	{
		print_block(ptr, i, size);
		i += 16;
	}
}
