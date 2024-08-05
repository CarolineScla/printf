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

int	ft_putunbr(unsigned int num)
{
	int	count;

	count = 0;
	if (num >= 10)
	{
		ft_putunbr(num / 10);
		ft_putunbr(num % 10);
		count++;
	}
	else
		ft_putchar(num + 48);
	return (count);
}
