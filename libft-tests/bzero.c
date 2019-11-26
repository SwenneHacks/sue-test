/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   bzero.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/04 13:22:16 by swofferh       #+#    #+#                */
/*   Updated: 2019/11/26 21:35:08 by nschat        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "suetest.h"
#include <stdlib.h>
#include <string.h>

void	test_bzero(void)
{
	void	*a;
	void	*b;
	int		len;

	g_func = "bzero";

	len = 11;
	a = (char *)malloc(len);
	b = (char *)malloc(len);
	memset(a, 'S', len);
	memset(b, 'S', len);
	ft_bzero(a, len - 5);
	bzero(b, len - 5);
	check_result(memcmp(a, b, len), "basic test");

	len = 11;
	a = (char *)malloc(len);
	b = (char *)malloc(len);
	memset(a, 'S', len);
	memset(b, 'S', len);
	ft_bzero(a, 0);
	bzero(b, (0));
	check_result(memcmp(a, b, len), "0 as length");
}
