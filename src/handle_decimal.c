/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_decimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhyildi <muhyildi@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 00:00:00 by muhyildi          #+#    #+#             */
/*   Updated: 2025/07/12 03:21:28 by muhyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	handle_decimal(va_list args)
{
	int	n;

	n = va_arg(args, int);
	return (ft_putnbr_fd(n, 1));
}
