/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victode- <victode-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 14:45:40 by victode-          #+#    #+#             */
/*   Updated: 2025/10/30 00:50:08 by victode-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>

# define DEC "0123456789"
# define HEX "0123456789abcdef"
# define UPHEX "0123456789ABCDEF"

/* ========= Main function ========= */
int		ft_printf(const char *format, ...);

/* =========== Helper functions =========== */

#endif