/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victode- <victode-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 14:45:40 by victode-          #+#    #+#             */
/*   Updated: 2025/11/05 18:22:43 by victode-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <limits.h>
# include <stdio.h>
# include <fcntl.h>

# define DEC "0123456789"
# define HEX "0123456789abcdef"
# define UPHEX "0123456789ABCDEF"

typedef unsigned long long	t_ull;

/* ========= Main function ========= */

int	ft_printf(const char *format, ...);

/* =========== Helper functions =========== */

int	ft_putchar(char c);
int	ft_putptr(t_ull ptr);
int	ft_putstr(const char *s);
int	ft_strlen(const char *s);
int	ft_putbase(t_ull n, char *base, int base_len);

#endif