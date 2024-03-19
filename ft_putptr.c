/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpastran <jpastran@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 15:32:02 by jimenapastr       #+#    #+#             */
/*   Updated: 2024/03/19 14:38:47 by jpastran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_getptr(uintptr_t u)
{
	char	*hex;
	int		result;

	hex = "123456789abcdef";
	result = 0;
	if (u >= 16)
	{
		result += ft_getptr(u / 16);
		result += ft_getptr(u % 16);
	}
	else
	{
		result += write(1, &hex[u], 1);
	}
	return (result);
}

int	ft_putptr(uintptr_t ptr)
{
	int	result;

	result = 0;
	if (!ptr)
	{
		result += write(1, "(nil)", 5);
	}
	else
	{
		result += ft_putstr("0x");
		result += ft_getptr(ptr);
	}
	return (result);
}
