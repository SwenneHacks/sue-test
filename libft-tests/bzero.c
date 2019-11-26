/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   bzero.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/04 13:22:16 by swofferh       #+#    #+#                */
/*   Updated: 2019/11/26 20:41:16 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "suetest.h"

void	test_bzero(void)
{
	void	*a;
	void	*b;
	int		len;

	g_func = "bzero";

	g_message = "basic test";
	len = 11;
	a = (char *)malloc(len);
	b = (char *)malloc(len);
	memset(a, 'S', len);
	memset(b, 'S', len);
	ft_bzero(a, len - 5);
	bzero(b, len - 5);
	check_result(memcmp(a, b, len));

	g_message = "0 as length";
	len = 11;
	a = (char *)malloc(len);
	b = (char *)malloc(len);
	memset(a, 'S', len);
	memset(b, 'S', len);
	ft_bzero(a, 0);
	bzero(b, (0));
	check_result(memcmp(a, b, len));
}
