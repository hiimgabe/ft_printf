/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 12:17:45 by gamoreir          #+#    #+#             */
/*   Updated: 2023/04/23 17:06:45 by gamoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include	<unistd.h>
# include	<string.h>
# include	<stdlib.h>
# include	<stdio.h>
# include	<ctype.h>
# include	<stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_printf_char(char c);
int	ft_printf_string(char *str);
int	ft_printf_pointer(unsigned long nb);
int	ft_printf_number(long nb);
int	ft_printf_hexadecimal(unsigned long nb, char c);

#endif
