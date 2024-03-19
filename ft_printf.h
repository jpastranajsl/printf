/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpastran <jpastran@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 16:17:47 by jimenapastr       #+#    #+#             */
/*   Updated: 2024/03/19 14:40:11 by jpastran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdint.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>
//#include "./libft/libft.h"

int	ft_printf(const char *s, ...);
int	ft_putchar(char c);
int	ft_putnbr(long nbr, int base, int upperC);
int	ft_putptr(uintptr_t ptr);
int	ft_putstr(char *s);

#endif
