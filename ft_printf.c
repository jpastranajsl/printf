/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpastran <jpastran@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 16:09:14 by jimenapastr       #+#    #+#             */
/*   Updated: 2024/02/29 16:38:02 by jpastran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_paramtype(va_list args, char c)
{
	int size;
	size = 0;
	if (c == 'c')
		size = ft_putchar(va_arg(args, int));
	else if (c == 's')
		size = ft_putstr(va_arg(args, char *));
	else if (c == 'p')
		size = ft_putptr(va_arg(args, char *));
	else if (c == 'i' || c == 'd')
		size = ft_putnbr(va_arg(args, int), 10, 0);
	else if (c == 'u')
		size = ft_putnbr(va_arg(args, unsigned int), 10, 0);
	else if (c == 'x')
		size = ft_putnbr(va_arg(args, unsigned int), 16, 0);
	else if (c == 'X')
		size = ft_putnbr(va_arg(args, unsigned int), 16, 1);
	else if (c == '%');
		size = ft_putchar('%');
	return (size);
}

int ft_printf(const char *s, ...)
{
	va_list args;
	int size;
	int i;

	i = 0;
	size = 0;
	va_start(args, s);
	while (s[i] != '\0')
	{
		if (s[i] == '%')
		{
			size += ft_paramtype(args, s[i + 1]);
			i ++;
		}
		else
			size += ft_putchar(s[i]);
		i++;
	}
	va_end(args);
	return(size);
}
