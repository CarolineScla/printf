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
	unsigned int	ii;

	if (format == NULL)
		return (-1);
	i = 0;
	ii = 0;
	va_start(args, format);
	while (format[ii])
	{
		if (format[ii] == '%')
		{
			ii++;
			if (ft_strchr("cspdiuxX%", format[ii]))
				i += parser(format[ii], args);
		}
		else
			i += ft_putchar(format[ii]);
		ii++;
	}
	va_end(args);
	return (i);
}
/*
int	main(void) 
{
	int a = 9;
	
    ft_printf("Caractère: %c\n", 'A'); 
	printf("printf Caractère: %c\n", 'A'); 
	ft_printf("Chaîne: %s\n", "Oh Yeeeaaaa");
    ft_printf("%s\n", NULL);
	printf("Chaîne: %s\n", "Oh Yeeeaaaa"); //ne compile pas si NULL
    ft_printf("Pointeur: %p\n", &a); 
    printf("printf Pointeur: %p\n", &a); 
    ft_printf("Décimal: %d\n", 123); 
    printf("printf Décimal: %d\n", 123); 
    ft_printf("Entier: %i\n", -456); //diff entre d & i pour scanf, signé ou non
    printf("printf Entier: %i\n", -456); 
    ft_printf("Entier max u: %u\n", 65535);
    printf("printf Entier max u: %u\n", 65535);
    ft_printf("Entier signé: %u\n", -89989); // si signé alors loop sur max / min d'un int  
    printf("printf Entier signé: %u\n", -89989); 
    ft_printf("Hexa minuscule: %x\n", 0xabc); 
    printf("printf Hexa minuscule: %x\n", 0xabc); 
    ft_printf("Hexa majuscule: %X\n", 0xDEF); 
    printf("printf Hexa majuscule: %X\n", 0xDEF); 
    ft_printf("Pourcentage: %%\n");
    printf("printf Pourcentage: %%\n");

	return 0;
}*/