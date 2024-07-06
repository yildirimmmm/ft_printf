/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhyildi <muhyildi@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 00:00:00 by muhyildi          #+#    #+#             */
/*   Updated: 2025/07/12 03:21:55 by muhyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static int	is_valid_specifier(char c)
{
	return (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i'
		|| c == 'u' || c == 'x' || c == 'X' || c == '%');
}

static int	handle_format_specifier(va_list args, char c)
{
	if (c == 'c')
		return (handle_char(args));
	else if (c == 's')
		return (handle_string(args));
	else if (c == 'p')
		return (handle_pointer(args));
	else if (c == 'd' || c == 'i')
		return (handle_decimal(args));
	else if (c == 'u')
		return (handle_unsigned(args));
	else if (c == 'x')
		return (handle_hex_lower(args));
	else if (c == 'X')
		return (handle_hex_upper(args));
	else if (c == '%')
		return (handle_percent());
	return (0);
}

int	parse_format(va_list args, const char **format)
{
	int	printed_chars;

	if (is_valid_specifier(**format))
	{
		printed_chars = handle_format_specifier(args, **format);
	}
	else
	{
		printed_chars = ft_putchar_fd('%', 1);
		printed_chars += ft_putchar_fd(**format, 1);
	}
	(*format)++;
	return (printed_chars);
}
