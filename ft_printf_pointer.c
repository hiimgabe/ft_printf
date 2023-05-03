/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_pointer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 10:31:51 by gamoreir          #+#    #+#             */
/*   Updated: 2023/05/03 10:31:53 by gamoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_pointer(unsigned long nb)
{
	int	count;

	count = 0;
	if (!nb)
		return (write(1, "(nil)", 5));
	else
		write(1, "0x", 2);
	count += ft_printf_hexadecimal(nb, 'x');
	return (count + 2);
}
