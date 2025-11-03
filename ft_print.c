/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victode- <victode-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 16:36:40 by victode-          #+#    #+#             */
/*   Updated: 2025/11/03 18:51:59 by victode-         ###   ########.fr       */
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

int	ft_putbase(int nb, char *base, int base_len)
{
	t_ull	count;

	count = 0;
	if (nb < 0)
	{
		count += ft_putchar('-');
		nb = -nb;
	}
	if (nb >= base_len)
		count += ft_putbase(nb / base_len, base, base_len);
	count += ft_putchar(base[nb % base_len]);
	return (count);
}

int	ft_putptr(int ptr)
{
	if (!ptr)
		return (ft_putstr("(nil)"));
	return (ft_putstr("0x") + ft_putbase(ptr, HEX, 16));
}
/*
int	main(void)
{
	int nb = 42;
	ft_putbase(nb, HEX, 16);
	return (0);
}
*/