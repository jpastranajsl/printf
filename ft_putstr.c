/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpastran <jpastran@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 16:57:46 by jpastran          #+#    #+#             */
/*   Updated: 2024/03/01 16:12:52 by jpastran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	len;

	len = ft_strlen(s);
	if (!s)
		return (write(1, "(nil)", 5));
	return (write(1, s, len));
}
