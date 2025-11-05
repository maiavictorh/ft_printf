/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victode- <victode-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 14:41:34 by victode-          #+#    #+#             */
/*   Updated: 2025/11/05 18:21:42 by victode-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_is_spec(int c)
{
	return (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i'
		|| c == 'u' || c == 'x' || c == 'X' || c == '%');
}

static int	ft_print_spec(int c, va_list arg)
{
	if (c == 'c')
		return (ft_putchar(va_arg(arg, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(arg, char *)));
	else if (c == 'p')
		return (ft_putptr(va_arg(arg, t_ull)));
	else if (c == 'd' || c == 'i')
		return (ft_putbase(va_arg(arg, int), DEC, 10));
	else if (c == 'u')
		return (ft_putbase(va_arg(arg, t_ull), DEC, 10));
	else if (c == 'x')
		return (ft_putbase(va_arg(arg, t_ull), HEX, 16));
	else if (c == 'X')
		return (ft_putbase(va_arg(arg, t_ull), UPHEX, 16));
	else if (c == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		count;
	va_list	args;

	i = 0;
	count = 0;
	va_start(args, format);
	if (!format)
		return (0);
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (ft_is_spec(format[++i]))
				count += ft_print_spec(format[i], args);
		}
		else
			count += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}
/*
int main(void)
{
	int ret = ft_printf("Hello World!\n");
	ft_printf("%d", ret);
}
*/