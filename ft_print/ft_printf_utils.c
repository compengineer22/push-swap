/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsrour <hsrour@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 14:55:30 by hsrour            #+#    #+#             */
/*   Updated: 2025/11/11 23:24:28 by hsrour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_ptr(unsigned long long n)
{
	int		count;
	char	*base;

	count = 0;
	base = "0123456789abcdef";
	if (n >= 16)
	{
		count += ft_puthex_ptr(n / 16);
		count += ft_puthex_ptr(n % 16);
	}
	else
	{
		ft_putchar_fd(base[n], 1);
		count++;
	}
	return (count);
}

void	ft_puthex(unsigned int n, char x)
{
	if (n >= 16)
	{
		ft_puthex(n / 16, x);
		ft_puthex(n % 16, x);
	}
	else
	{
		if (n <= 9)
			ft_putchar_fd(n + '0', 1);
		else
		{
			if (x == 'x')
				ft_putchar_fd((n - 10 + 'a'), 1);
			if (x == 'X')
				ft_putchar_fd((n - 10 + 'A'), 1);
		}
	}
}

int	ft_hex_len(unsigned int n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		len++;
		n = n / 16;
	}
	return (len);
}

int	ft_print_hex(unsigned int n, char x)
{
	if (n == 0)
	{
		ft_putchar_fd('0', 1);
		return (1);
	}
	else
		ft_puthex(n, x);
	return (ft_hex_len(n));
}

int	ft_unsigned_putnbr_fd(unsigned int n, int fd)
{
	char	c;
	int		i;

	i = 0;
	if (n >= 10)
	{
		i += ft_unsigned_putnbr_fd(n / 10, fd);
	}
	c = (n % 10) + '0';
	i++;
	write(fd, &c, 1);
	return (i);
}
