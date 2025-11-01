/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victode- <victode-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 00:38:57 by victode-          #+#    #+#             */
/*   Updated: 2025/11/01 18:03:06 by victode-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_putstr(const char *s)
{
	write (1, s, ft_strlen(s));
	return (ft_strlen(s));
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		if (ft_strlen(av[1]) > 1)
			printf("\nPutstr return: %d\n", ft_putstr(av[1]));
		else if (ft_strlen(av[1]) == 1)
			printf("\nPutchar return: %d\n", ft_putchar(av[1][0]));
	}
	write (1, "\n", 1);
}
