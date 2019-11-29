/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_bzero.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/04 13:22:16 by swofferh       #+#    #+#                */
/*   Updated: 2019/11/29 19:57:23 by swofferh      ########   odam.nl         */
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
	test_this(memcmp(a, b, len));
	g_type = "basic test";

	len = 11;
	a = (char *)malloc(len);
	b = (char *)malloc(len);
	memset(a, 'S', len);
	memset(b, 'S', len);
	ft_bzero(a, 0);
	bzero(b, (0));
	test_this(memcmp(a, b, len));
	g_type = "0 as length";
}

//writes zeroed bytes to string s for n times (size). Usefull for clean mallocs.
void ft_bzero(void *s, size_t n);
