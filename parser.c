/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csclavon <csclavon@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 14:17:24 by csclavon          #+#    #+#             */
/*   Updated: 2024/05/29 12:09:31 by csclavon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	parser(const char format, va_list args)
{
	int	i;

	i = 0;
	if (format == 'd' || format == 'i')
		i += ft_putnbr(va_arg(args, int));
	else if (format == 's')
		i += ft_putstr(va_arg(args, char *));
	else if (format == 'p')
		i += ft_putptr(va_arg(args, size_t));
	else if (format == 'x' || format == 'X')
		i += ft_puthex(va_arg(args, unsigned int), format);
	else if (format == '%')
	{
		ft_putchar('%');
		i++;
	}
	return (i);
}
