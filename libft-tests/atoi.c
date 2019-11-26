/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   atoi.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 11:16:22 by swofferh       #+#    #+#                */
/*   Updated: 2019/11/26 20:41:10 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "suetest.h"

void	test_atoi(void)
{
	char	*space;
	char	*plong;
	char	*neglong;

	g_func = "atoi";

	g_message = "small number with leading whitespace and single sign";
	space = "    		+1234";
	check_result(ft_atoi(space) != atoi(space));

	/*
	** system atoi uses an unsigned long internally
	** and handles numbers as big as LONG_MAX
	*/
	g_message = "biggest positive long";
	plong = "9223372036854775807";
	check_result(ft_atoi(plong) != atoi(plong));

	/*
	** system atoi uses an unsigned long internally
	** and handles numbers as small as LONG_MIN
	*/
	g_message = "smallest negative long";
	neglong = "-9223372036854775807";
	check_result(ft_atoi(neglong) != atoi(neglong));
}
