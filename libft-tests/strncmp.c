/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   strncmp.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/04 21:14:35 by swofferh       #+#    #+#                */
/*   Updated: 2019/11/23 17:47:46 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char *s1 = "atoms\0";
	char *s2 = "atoms\0a";
	char *s3 = "atoms\0b";
	char *s4 = "AAAA";
	char *s5 = "\0";
	char *s6 = "\200";
	char *s7 = "\0";
	size_t size = 7;

	printf("Test1:\n");
	printf("std function: %d\n", strncmp(s1, s2, size));
	printf("ft_ function: %d\n", ft_strncmp(s1, s2, size));
	printf("Test 2:\n");
	printf("std function: %d\n", strncmp(s2, s3, size));
	printf("ft_ function: %d\n", ft_strncmp(s2, s3, size));
	printf("Test 3:\n");
	printf("std function: %d\n", ft_strncmp(s4, s5, size));
	printf("ft_ function: %d\n", strncmp(s4, s5, size));
	printf("Test 4:\n");
	printf("std function: %d\n", ft_strncmp(s6, s7, size));
	printf("ft_ function: %d\n", strncmp(s6, s7, size));
	printf("value of s6: %s\n", s6);
}
