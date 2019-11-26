/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   memcmp.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/04 18:37:09 by swofferh       #+#    #+#                */
/*   Updated: 2019/11/23 17:39:04 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char s1[] = "atoms\0";
	char s2[] = "atoms\0a";
	char s3[] = "atoms\0b";
	char s4[] = "hello";
	char s5[] = "";
	int array1[] = {1, 2, 3};
	int array2[] = {1, 2};
	size_t size = 7;

	printf("Test1:\n");
	printf("std function: %d\n", memcmp(array1, array2, 3));
	printf("ft_ function: %d\n", ft_memcmp(array1, array2, 3));
	printf("Test 2:\n");
	printf("std function: %d\n", memcmp(s1, s2, size));
	printf("ft_ function: %d\n", ft_memcmp(s1, s2, size));
	printf("Test 3:\n");
	printf("std function: %d\n", memcmp(s2, s3, size));
	printf("ft_ function: %d\n", ft_memcmp(s2, s3, size));
	printf("Test 4:\n");
	printf("std function: %d\n", memcmp(s4, s5, 0));
	printf("ft_ function: %d\n", ft_memcmp(s4, s5, 0));
	printf("---\n");

	char	a[] = "u'9t3790 t23n90t390n33790n";
	char	b[] = "u'9t3790 t23n90t390n33790n";
	char	c[] = "u'9t3790 t23n90t\090n33790n";
	char	d[] = "u'9t3790 t23n90t\090n\2423790n";

	printf("%d,%d\n", ft_memcmp(a, b, 26), memcmp(a, b, 26));
	printf("%d,%d\n", ft_memcmp(b, c, 6), memcmp(b, c, 6));
	printf("%d,%d\n", ft_memcmp(b, c, 16), memcmp(b, c, 16));
	printf("%d,%d\n", ft_memcmp(b, c, 26), memcmp(b, c, 26));
	printf("%d,%d\n", ft_memcmp(c, d, 26), memcmp(c, d, 26));
}
