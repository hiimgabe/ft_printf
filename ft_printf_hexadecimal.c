/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hexadecimal.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 10:31:51 by gamoreir          #+#    #+#             */
/*   Updated: 2023/05/03 10:31:53 by gamoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_hexadecimal(unsigned long nb, char c)
{
	int		count;
	char	*hexa;

	count = 0;
	if (c == 'x')
		hexa = "0123456789abcdef";
	if (c == 'X')
		hexa = "0123456789ABCDEF";
	if (nb < 16)
		count += write(1, &hexa[nb], 1);
	if (nb >= 16)
	{
		count += ft_printf_hexadecimal((nb / 16), c);
		count += ft_printf_hexadecimal((nb % 16), c);
	}
	return (count);
}
