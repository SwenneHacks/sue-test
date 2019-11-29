/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_atoi.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 11:16:22 by swofferh       #+#    #+#                */
/*   Updated: 2019/11/29 19:56:04 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "suetest.h"
#include "libft.h"

void	test_atoi(void)
{
	char	*space;
	char	*plong;
	char	*neglong;

	g_func = "atoi";

	space = "    		+1234";
	test_this(ft_atoi(space) != atoi(space));
	g_type = "small number with leading whitespace and single sign";

	/*
	** system atoi uses an unsigned long internally
	** and handles numbers as big as LONG_MAX
	*/
	plong = "9223372036854775807";
	test_this(ft_atoi(plong) != atoi(plong));
	g_type = "biggest positive long";
	/*
	** system atoi uses an unsigned long internally
	** and handles numbers as small as LONG_MIN
	*/
	neglong = "-9223372036854775807";
	test_this(ft_atoi(neglong) != atoi(neglong));
	g_type = "smallest negative long";
}

//convert ascii characters to int value (decimal numbers)
int	ft_atoi(const char *str);
