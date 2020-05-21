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

#include "suetest.h"

void	test_strncmp(void)
{
	char *s1 = "atoms\0";
	char *s2 = "atoms\0a";
	char *s3 = "atoms\0b";
	char *s4 = "AAAA";
	char *s5 = "\0";
	char *s6 = "\200";
	size_t size = 7;
	g_func = "strncmp";

	g_type = "hidden char after /0";
	test_this(ft_strncmp(s1, s2, size) != strncmp(s1, s2, size));
	printf("std function: %d\n", strncmp(s1, s2, size));
	printf("ft_ function: %d\n", ft_strncmp(s1, s2, size));
	
	g_type = "different chars after /0";
	test_this(ft_strncmp(s2, s3, size) != strncmp(s2, s3, size));
	printf("std function: %d\n", strncmp(s2, s3, size));
	printf("ft_ function: %d\n", ft_strncmp(s2, s3, size));
	
	g_type = "s1 = AAA and s2 = /0";
	test_this(ft_strncmp(s4, s5, size) != strncmp(s4, s5, size));
	printf("std function: %d\n", ft_strncmp(s4, s5, size));
	printf("ft_ function: %d\n", strncmp(s4, s5, size));

	g_type = "s1 = /200 and s2 = /0";
	printf("value of s1: %s\n", s6);
	test_this(ft_strncmp(s6, s5, size) != strncmp(s6, s5, size));
	printf("std function: %d\n", ft_strncmp(s6, s5, size));
	printf("ft_ function: %d\n", strncmp(s6, s5, size));
}
