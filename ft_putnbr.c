/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpastran <jpastran@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 16:39:01 by jpastran          #+#    #+#             */
/*   Updated: 2024/02/29 16:56:36 by jpastran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putnbr(long nbr, int base, int upperC)
{
	int value;
	const char *chars;
	value = 0;
	if (nbr < 0)
	{
		value += write(1, "-", 1);
		value += ft_putnbr(-nbr, base, upperC);
	}
	else if (nbr < base)
	{
		if (upperC)
			chars = "0123456789ABCDEF";
		else
			chars = "0123456789abcdef";
		return(value += write(1, &chars[nbr], 1));
	}
	else
	{
		value += ft_putnbr(nbr / base, base, upperC);
		value += ft_putnbr(nbr % base, base, upperC);
	}
	return(value);

}
