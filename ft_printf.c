/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csclavon <csclavon@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 12:06:42 by csclavon          #+#    #+#             */
/*   Updated: 2024/05/29 12:11:52 by csclavon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char	*format, ...)
{
	va_list			args;
	unsigned int	i;

	if (format == 0)
		return (-1);
	i = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (ft_strchr("cspdiuxX", *format))
				i += parser(*format, args);
			else if (*format == '%')
				i += ft_putchar('%');
		}
		else
			i += ft_putchar(*format);
		format++;
	}
	va_end(args);
	return (i);
}
/*
int	main(void) 
{
	int a = 9;
	
    ft_printf("Caractère: %c\n", 'A'); 
    ft_printf("Chaîne: %s\n", "Oh Yeeeaaaa"); 
    ft_printf("Pointeur: %p\n", &a); 
    ft_printf("Décimal: %d\n", 123); 
    ft_printf("Entier: %i\n", -456); //diff entre d & i pour scanf, signé ou non
    ft_printf("Entier non signé: %u\n", 89989); //si signé alors conversion en représentation binaire 
    ft_printf("Hexa minuscule: %x\n", 0xabc); 
    ft_printf("Hexa majuscule: %X\n", 0xDEF); 
    ft_printf("Pourcentage: %%\n");
	
	return 0;
}*/