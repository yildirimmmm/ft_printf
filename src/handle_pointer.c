/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_pointer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhyildi <muhyildi@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 00:00:00 by muhyildi          #+#    #+#             */
/*   Updated: 2025/07/12 03:21:46 by muhyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	handle_pointer(va_list args)
{
	void			*ptr;
	unsigned long	addr;
	int				printed_chars;

	ptr = va_arg(args, void *);
	if (!ptr)
		return (ft_putstr_fd("(nil)", 1));
	addr = (unsigned long)ptr;
	printed_chars = 0;
	printed_chars += ft_putstr_fd("0x", 1);
	printed_chars += ft_puthex_lower(addr, 1);
	return (printed_chars);
}
