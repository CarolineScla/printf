/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csclavon <csclavon@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 11:36:30 by csclavon          #+#    #+#             */
/*   Updated: 2024/05/29 11:03:23 by csclavon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	ft_printunbr(unsigned int num)
{
	int	count;

	count = 0;
	if (num >= 10)
	{
		ft_printunbr(num / 10);
		ft_printunbr(num % 10);
		count++;
	}
	else
		ft_putchar(num + 48);
	return (count);
}

int	ft_putunbr(unsigned int nb)
{
	unsigned int	i;

	ft_printunbr(nb);
	i = 0;
	while (nb >= 10)
	{
		nb /= 10;
		i++;
	}
	return (i + 1);
}