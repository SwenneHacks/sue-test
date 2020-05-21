/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   calloc.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/04 17:14:27 by swofferh       #+#    #+#                */
/*   Updated: 2019/11/26 19:33:59 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "suetest.h"

void	test_calloc(void)
{
	void	*a;
	void	*b;
	g_func = "calloc";

	g_type = "Calloc(0x2a, 0x2a)";
	a = calloc(0x2a, 0x2a);
	b = ft_calloc(0x2a, 0x2a);
	test_this(a != b);
	free (a);
	free (b);

	g_type = "Calloc(0, 0)";
	a = calloc(0, 0);
	b = ft_calloc(0, 0);
	test_this(a != b);
	free (a);
	free (b);
	
	g_type = "Calloc(42, 21)";
	a = calloc(42, 21);
	b = ft_calloc(21, 21);
	test_this(a != b);
	free (a);
	free (b);

	g_type = "Calloc(9999, sizeof(int))";
	a = calloc(9999, sizeof(int));
	b = ft_calloc(9999, sizeof(int));
	test_this(a != b);
	free (a);
	free (b);
}
