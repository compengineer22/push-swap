/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsrour <hsrour@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 14:24:44 by hsrour            #+#    #+#             */
/*   Updated: 2025/11/07 18:06:02 by hsrour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include "libft/libft.h"

int	ft_printf(const char *str, ...);
int	count_digits(int n);
int	ft_unsigned_putnbr_fd(unsigned int n, int fd);
int	ft_print_hex(unsigned int n, char x);
int	ft_puthex_ptr(unsigned long long n);
int	decimal(int i);
int	charachter(char c);
int	pntr(unsigned long long ptr);
int	string(char *s);
int	charachter(char c);

#endif
