/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   memset.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/04 13:21:32 by swofferh       #+#    #+#                */
/*   Updated: 2019/11/23 17:39:47 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	char	a[] = "ajskdasjldk";
	char	b[] = "ajskdasjldk";

	printf("%s\n", a);
	printf("%s\n", b);
	ft_memset(a, 'A', 8);
	memset(b, 'A', 8);
	printf("%s\n", a);
	printf("%s\n", b);
	printf("%s\n", ft_memset(a, '\222', 8));
	printf("%s\n", memset(a, '\222', 8));
	printf("%s\n", ft_memset(a, '\x2a', 8));
	printf("%s\n", memset(a, '\x2a', 8));
}
