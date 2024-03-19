/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpastran <jpastran@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 16:57:46 by jpastran          #+#    #+#             */
/*   Updated: 2024/03/19 13:42:28 by jpastran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
//#include "libft.h"

int	ft_putstr(char *s)
{
	int	len;

	len = 0;
	while (s[len])
		len ++;
	if (!s)
		return (write(1, "(nil)", 5));
	return (write(1, s, len));
}
