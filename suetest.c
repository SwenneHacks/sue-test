/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   suetest.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/26 20:16:26 by swofferh       #+#    #+#                */
/*   Updated: 2019/11/29 21:38:03 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "suetest.h"
#include <stdio.h>

char	*g_func;
char 	*g_type;
int		g_test = 1;

int		test_this(int result)
{	
	printf("\x1B[93mtesting %s:\n\x1B[0m", g_func);
	if (result)
		printf("\x1B[91m fail test: %d - %s\n\x1B[0m", g_test, g_type);
	else
		printf("\x1B[92m pass test: %d - %s\n\x1B[0m", g_test, g_type);
	g_test++;
	return (result);
}

int		main(void)
{
	test_atoi();
	test_bzero();
	test_memccpy();
	test_memchr();
	test_strlen();
	test_strrchr();
	return (0);
}
