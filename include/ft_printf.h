/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhyildi <muhyildi@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 00:00:00 by muhyildi          #+#    #+#             */
/*   Updated: 2025/07/12 03:21:20 by muhyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int		ft_printf(const char *format, ...);

int		parse_format(va_list args, const char **format);

int		handle_char(va_list args);
int		handle_string(va_list args);
int		handle_pointer(va_list args);
int		handle_decimal(va_list args);
int		handle_unsigned(va_list args);
int		handle_hex_lower(va_list args);
int		handle_hex_upper(va_list args);
int		handle_percent(void);

int		ft_putchar_fd(char c, int fd);
int		ft_putstr_fd(char *s, int fd);
int		ft_putnbr_fd(int n, int fd);
int		ft_putnbr_unsigned(unsigned int n, int fd);
int		ft_puthex_lower(unsigned long n, int fd);
int		ft_puthex_upper(unsigned long n, int fd);
size_t	ft_strlen(const char *s);

#endif