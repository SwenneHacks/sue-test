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

#include "libft.h"

int	test_calloc(void)
{
	free(ft_calloc(0x2a, 0x2a));
	ft_calloc(42, 21);
	calloc(42, 21);
	free(ft_calloc(0, 0));
	ft_calloc(9999, sizeof(int));
	calloc(9999, sizeof(int));
}
