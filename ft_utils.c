/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victode- <victode-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 16:36:40 by victode-          #+#    #+#             */
/*   Updated: 2025/11/06 01:57:54 by victode-         ###   ########.fr       */
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

int	ft_putnbr(int nb)
{
	long	n;
	int		count;

	n = nb;
	count = 0;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
		count++;
	}
	if (n > 9)
		count += ft_putnbr(n / 10);
	count += ft_putchar(n % 10 + '0');
	return (count);
}

int	ft_putbase(t_ull n, char *base, int base_len)
{
	int	count;

	count = 0;
	if (n >= (t_ull)base_len)
		count += ft_putbase(n / base_len, base, base_len);
	count += ft_putchar(base[n % base_len]);
	return (count);
}

int	ft_putptr(t_ull ptr)
{
	if (!ptr)
		return (ft_putstr("(nil)"));
	return (ft_putstr("0x") + ft_putbase(ptr, HEX, 16));
}
