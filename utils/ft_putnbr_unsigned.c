/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhyildi <muhyildi@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 00:00:00 by muhyildi          #+#    #+#             */
/*   Updated: 2025/07/12 03:22:13 by muhyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static int	ft_count_digits_unsigned(unsigned int n)
{
	int	count;

	if (n == 0)
		return (1);
	count = 0;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

int	ft_putnbr_unsigned(unsigned int n, int fd)
{
	int	printed_chars;

	printed_chars = ft_count_digits_unsigned(n);
	if (n >= 10)
		ft_putnbr_unsigned(n / 10, fd);
	ft_putchar_fd((n % 10) + '0', fd);
	return (printed_chars);
}
