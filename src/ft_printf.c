/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhyildi <muhyildi@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 18:57:27 by muhyildi          #+#    #+#             */
/*   Updated: 2025/07/06 18:57:30 by muhyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		printed_chars;

	if (!format)
		return (-1);
	va_start(args, format);
	printed_chars = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			printed_chars += parse_format(args, &format);
		}
		else
		{
			printed_chars += ft_putchar_fd(*format, 1);
			format++;
		}
	}
	va_end(args);
	return (printed_chars);
}
