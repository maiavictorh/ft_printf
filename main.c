/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victode- <victode-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 13:30:49 by victode-          #+#    #+#             */
/*   Updated: 2025/11/05 17:14:56 by victode-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main(void)
{
	int std_ret;
	int ft_ret;
	
	printf("======== FT_PRINTF TESTS ========\n\n");
	
	printf("1. Basic strings:\n");
	std_ret = printf("printf: Hello World!\n");
	ft_ret = ft_printf("ft_printf: Hello World!\n");
	printf("std_ret: %d, ft_ret: %d\n\n", std_ret, ft_ret);

	printf("\n2. Characters:\n");
	std_ret = printf("printf: [%c]\n", 'A');
	ft_ret = ft_printf("ft_printf: [%c]\n", 'A');
	printf("std_ret: %d, ft_ret: %d\n\n", std_ret, ft_ret);
	
	printf("\n3. Strings:\n");
	std_ret = printf("printf: [%s]\n", "Test string");
	ft_ret = ft_printf("ft_printf: [%s]\n", "Test string");
	printf("std_ret: %d, ft_ret: %d\n\n", std_ret, ft_ret);
	
	printf("\n4. Pointers:\n");
	int x = 42;
	std_ret = printf("printf: [%p]\n", &x);
	ft_ret = ft_printf("ft_printf: [%p]\n", &x);
	printf("std_ret: %d, ft_ret: %d\n\n", std_ret, ft_ret);

	printf("\n11. Multiple format specifiers:\n");
	std_ret = printf("printf: Char: %c, String: %s, Int: %d\n", 'X', "hello", 123);
	ft_ret = ft_printf("ft_printf: Char: %c, String: %s, Int: %d\n", 'X', "hello", 123);
	printf("std_ret: %d, ft_ret: %d\n\n", std_ret, ft_ret);

	printf("\n11. Mix format specifiers:\n");
	std_ret = printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%\n", 'A', "Hello", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
	ft_ret = ft_printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%\n", 'A', "Hello", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
	printf("std_ret: %d, ft_ret: %d\n\n", std_ret, ft_ret);
	/*

	printf("\n5. Integers (decimal):\n");
	std_ret = printf("printf: [%d]\n", 42);
	ft_ret = ft_printf("ft_printf:   [%d]\n", 42);
	printf("std_ret: %d, ft_ret: %d\n\n", std_ret, ft_ret);

	printf("\n6. Negative integers:\n");
	std_ret = printf("printf: [%d]\n", -42);
	ft_ret = ft_printf("ft_printf:   [%d]\n", -42);
	printf("std_ret: %d, ft_ret: %d\n\n", std_ret, ft_ret);
	
	printf("\n7. Unsigned integers:\n");
	std_ret = printf("printf: [%u]\n", 123456);
	ft_ret = ft_printf("ft_printf:   [%u]\n", 123456);
	printf("std_ret: %d, ft_ret: %d\n\n", std_ret, ft_ret);
	
	printf("\n8. Hexadecimal (lowercase):\n");
	std_ret = printf("printf: [%x]\n", 255);
	ft_ret = ft_printf("ft_printf:   [%x]\n", 255);
	printf("std_ret: %d, ft_ret: %d\n\n", std_ret, ft_ret);
	
	printf("\n9. Hexadecimal (uppercase):\n");
	std_ret = printf("printf: [%X]\n", 255);
	ft_ret = ft_printf("ft_printf:   [%X]\n", 255);
	printf("std_ret: %d, ft_ret: %d\n\n", std_ret, ft_ret);
	
	printf("\n10. Percent sign:\n");
	std_ret = printf("printf: [%%]\n");
	ft_ret = ft_printf("ft_printf:   [%%]\n");
	printf("std_ret: %d, ft_ret: %d\n\n", std_ret, ft_ret);

	
	printf("\n12. Edge cases:\n");
	
	printf("NULL string:\n");
	std_ret = printf("printf: [%s]\n", (char *)NULL);
	ft_ret = ft_printf("ft_printf:   [%s]\n", (char *)NULL);
	printf("std_ret: %d, ft_ret: %d\n", std_ret, ft_ret);
	
	printf("Zero:\n");
	std_ret = printf("printf: [%d]\n", 0);
	ft_ret = ft_printf("ft_printf:   [%d]\n", 0);
	printf("std_ret: %d, ft_ret: %d\n", std_ret, ft_ret);
	
	printf("INT_MAX:\n");
	std_ret = printf("printf: [%d]\n", INT_MAX);
	ft_ret = ft_printf("ft_printf:   [%d]\n", INT_MAX);
	printf("std_ret: %d, ft_ret: %d\n", std_ret, ft_ret);
	
	printf("INT_MIN:\n");
	std_ret = printf("printf: [%d]\n", INT_MIN);
	ft_ret = ft_printf("ft_printf:   [%d]\n", INT_MIN);
	printf("std_ret: %d, ft_ret: %d\n\n", std_ret, ft_ret);
	
	printf("\n13. Empty string:\n");
	std_ret = printf("printf: [%s]\n", "");
	ft_ret = ft_printf("ft_printf:   [%s]\n", "");
	printf("std_ret: %d, ft_ret: %d\n\n", std_ret, ft_ret);
	
	// printf("14. Return value comparison:\n");
	// printf("Testing return values with various inputs:\n");

	// int test_values[] = {0, 1, -1, 100, -100, INT_MAX, INT_MIN};

	// for (int i = 0; i < 7; i++)
	// {
	// 	std_ret = printf("std: %d", test_values[i]);
	// 	printf(" -> ");
	// 	ft_ret = ft_printf("ft: %d", test_values[i]);
	// 	printf(" | std_ret: %d, ft_ret: %d %s\n", 
	// 	  		std_ret, ft_ret, (std_ret == ft_ret) ? "✓" : "✗");
	// }*/
	return (0);
}