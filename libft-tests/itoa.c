/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   itoa.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/13 20:55:08 by swofferh       #+#    #+#                */
/*   Updated: 2019/11/29 18:02:48 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	int n = 123;
	int a = 'a';
	int b = ' ';
	int o = 0;

	printf("%d\n%d\n%d\n%d\n---\n", n, a, b, o);
	printf("%s\n", ft_itoa(n));
	printf("%s\n", ft_itoa(a));
	printf("%s\n", ft_itoa(b));
	printf("%s\n", ft_itoa(o));
}
