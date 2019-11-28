/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   suetest.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/26 20:16:26 by swofferh       #+#    #+#                */
/*   Updated: 2019/11/26 21:43:39 by nschat        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "suetest.h"
#include <stdio.h>

char	*g_func;
int		g_test = 1;

int		check_result(int result, const char *message)
{
	if (result)
		printf("\x1B[91mfail: %s:%i - %s\n\x1B[0m", g_func, g_test, message);
	else
		printf("\x1B[92mpass: %s:%i - %s\n\x1B[0m", g_func, g_test, message);
	g_test++;
	return (result);
}

int		main(void)
{
	test_atoi();
	test_bzero();
	return (0);
}
