/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_strlen.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 17:31:45 by swofferh       #+#    #+#                */
/*   Updated: 2019/11/29 21:33:18 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "suetest.h"

void	test_strlen(void)
{
	const char str[] = "Swenne, you got this!!";
	g_func = "strlen";
	
	test_this(ft_strlen(str) != strlen(str));
	g_type = "String: You got this!!";
}

//Checks length. Returns the amount of chars in a string.
size_t 	ft_strlen(const char *str);
