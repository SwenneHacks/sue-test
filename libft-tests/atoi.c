/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   atoi.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 11:16:22 by swofferh       #+#    #+#                */
/*   Updated: 2019/11/26 21:34:24 by nschat        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "suetest.h"
#include <stdlib.h>

void	test_atoi(void)
{
	char	*space;
	char	*plong;
	char	*neglong;

	g_func = "atoi";

	space = "    		+1234";
	check_result(ft_atoi(space) != atoi(space), "small number with leading whitespace and single sign");

	/*
	** system atoi uses an unsigned long internally
	** and handles numbers as big as LONG_MAX
	*/
	plong = "9223372036854775807";
	check_result(ft_atoi(plong) != atoi(plong), "biggest positive long");

	/*
	** system atoi uses an unsigned long internally
	** and handles numbers as small as LONG_MIN
	*/
	neglong = "-9223372036854775807";
	check_result(ft_atoi(neglong) != atoi(neglong), "smallest negative long");
}
