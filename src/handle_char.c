/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_char.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhyildi <muhyildi@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 00:00:00 by muhyildi          #+#    #+#             */
/*   Updated: 2025/07/12 03:21:25 by muhyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	handle_char(va_list args)
{
	char	c;

	c = va_arg(args, int);
	return (ft_putchar_fd(c, 1));
}
