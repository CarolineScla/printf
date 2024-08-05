/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csclavon <csclavon@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 09:59:21 by csclavon          #+#    #+#             */
/*   Updated: 2024/05/29 11:33:59 by csclavon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ascii_set(int c)
{
	if (c == 'X')
		return (65);
	return (97);
}

int	ft_puthex(unsigned int nb, int c)
{
	int	count;

	count = 0;
	if (nb >= 16)
	{
		count += ft_puthex(nb / 16, c);
		count += ft_puthex(nb % 16, c);
	}
	else
	{
		if (nb < 10)
			ft_putchar(nb + 48);
		else
			ft_putchar(nb - 10 + ascii_set(c));
		count++;
	}
	return (count);
}

// int main(void)
// {
// 	ft_puthex(123, 'X');
// 	ft_putchar('\n');
// 	ft_puthex(123, 'x');
// 	ft_putchar('\n');
// 	ft_puthex(15, 'X');
// 	ft_putchar('\n');
// 	ft_puthex(15, 'x');
// 	ft_putchar('\n');
// 	return 0;
// }
