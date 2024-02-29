/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimenapastranajessel <jimenapastranajes    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 16:09:14 by jimenapastr       #+#    #+#             */
/*   Updated: 2024/02/15 17:03:07 by jimenapastr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_paramtype(va_list args, char c)
{
	int size;
	size = 0;
	if (c == 'c')
		size = ft_putchar(va_arg(args, int));
	else if (c == 'p')
		size = ft_putptr(va_arg(args, char *));
	else if (c == 'i' || c == 'd')
		size = ft_putnbr(va_arg(args, int));
	else if (c == 'u')
		size = ft_putunsign(va_arg(args, unsigned int));
	else if (c == 'h')
		size = ft_puthex(va_arg(args, unsigned int), c);
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
