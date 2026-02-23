/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsrour <hsrour@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 17:34:27 by hsrour            #+#    #+#             */
/*   Updated: 2025/11/07 18:10:50 by hsrour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	decimal(int i)
{
	ft_putnbr_fd(i, 1);
	return (count_digits(i));
}

int	charachter(char c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

int	string(char *s)
{
	if (s == NULL)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	ft_putstr_fd(s, 1);
	return (ft_strlen(s));
}

int	pntr(unsigned long long ptr)
{
	int	i;

	i = 0;
	if (ptr == 0)
	{
		ft_putstr_fd("(nil)", 1);
		i += 5;
	}
	else
	{
		ft_putstr_fd("0x", 1);
		i = 2 + ft_puthex_ptr(ptr);
	}
	return (i);
}

int	count_digits(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}
