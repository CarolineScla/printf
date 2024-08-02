/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csclavon <csclavon@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 11:37:10 by csclavon          #+#    #+#             */
/*   Updated: 2024/05/29 11:03:04 by csclavon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putptr(unsigned long long nb)
{
	int	count;

	count = 0;
	if (nb >= 16)
	{
		count += ft_putptr(nb / 16);
		count += ft_putptr(nb % 16);
	}
	else
	{
		if (nb < 10)
			ft_putchar(nb + 48);
		else
			ft_putchar(nb + 87);
		count++;
	}
	return (count);
}
