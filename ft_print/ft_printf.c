/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsrour <hsrour@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 14:43:48 by hsrour            #+#    #+#             */
/*   Updated: 2025/11/10 22:08:29 by hsrour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	type(va_list args, char c)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += charachter(va_arg(args, int));
	else if (c == 's')
		count += string(va_arg(args, char *));
	else if (c == 'p')
		count += pntr(va_arg(args, unsigned long long));
	else if (c == 'd' || c == 'i')
		count += decimal(va_arg(args, int));
	else if (c == 'u')
		count += ft_unsigned_putnbr_fd(va_arg(args, unsigned int), 1);
	else if (c == 'x' || c == 'X')
		count += ft_print_hex(va_arg(args, unsigned int), c);
	else if (c == '%')
	{
		ft_putchar_fd('%', 1);
		count++;
	}
	else
		count += charachter(c);
	return (count);
}

int	ft_printf(const char *str, ...)
{
	int				i;
	va_list			args;
	int				count;

	va_start(args, str);
	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			count += type(args, str[i + 1]);
			i++;
		}
		else
			count += charachter(str[i]);
		i++;
	}
	va_end(args);
	return (count);
}
