/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimenapastranajessel <jimenapastranajes    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 16:57:46 by jpastran          #+#    #+#             */
/*   Updated: 2024/03/08 20:04:20 by jimenapastr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_putstr(char *s)
{
	int	len;

	len = ft_strlen(s);
	if (!s)
		return (write(1, "(nil)", 5));
	return (write(1, s, len));
}
