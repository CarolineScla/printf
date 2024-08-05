/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csclavon <csclavon@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 16:35:00 by csclavon          #+#    #+#             */
/*   Updated: 2024/05/29 12:07:02 by csclavon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	int	count;

	count = 0;
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
		count += 2;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
		count++;
	}
	if (nb >= 10)
	{
		count += ft_putnbr(nb / 10);
		count += ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
		count++;
	}
	return (count);
}
