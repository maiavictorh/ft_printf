/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victode- <victode-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 16:36:40 by victode-          #+#    #+#             */
/*   Updated: 2025/11/02 20:02:43 by victode-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write (1, &c, 1);
	return (1);
}

int	ft_putstr(const char *s)
{
	if (!s)
		return (write (1, "(null)", 6));
	write (1, s, ft_strlen(s));
	return (ft_strlen(s));
}

int	ft_putptr(void *p)
{
	if (!p)
		return (ft_putstr("(nil)"));
	return (ft_putstr("0x"));
}

int	ft_putbase(int nb, char *base, int base_len);
