/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   suetest.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/26 20:16:26 by swofferh       #+#    #+#                */
/*   Updated: 2019/11/26 20:40:52 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "suetest.h"

char	*g_func;
char	*g_message;
int		g_test = 1;

int		check_result(int result)
{
	if (result)
		printf("\x1B[91mfail: %s:%i - %s\n\x1B[0m", g_func, g_test, g_message);
	else
		printf("\x1B[92mpass: %s - %s\n\x1B[0m", g_func, g_message);
	g_test++;
	return (result);
}

int		main(void)
{
	test_atoi();
	test_bzero();
	return (0);
}
