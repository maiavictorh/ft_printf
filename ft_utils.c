/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victode- <victode-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 00:38:57 by victode-          #+#    #+#             */
/*   Updated: 2025/10/30 01:05:16 by victode-         ###   ########.fr       */
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

int	ft_putchar(char c)
{
	write (1, &c, 1);
	return (1);
}

int	ft_putstr(const char *s)
{
	write (1, s, ft_strlen(s));
	return (ft_strlen(s));
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		if (ft_strlen(av[1]) > 1)
			printf("Putstr return: %lu\n", ft_putstr(av[1]));
		else if (ft_strlen(av[1]) == 1)
			printf("Putchar return: %lu\n", ft_putchar(av[1][0]));
	}
	write (1, "\n", 1);
}
