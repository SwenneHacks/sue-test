/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   memccpy.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/04 19:03:50 by swofferh       #+#    #+#                */
/*   Updated: 2019/11/23 17:38:33 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	char c;
	char s2[] = "Swenne is totally crazy";
	char s1[] = "Someone's nailing memccpy !";

	c = 'i';
	printf("before: %s\n", s1);
	printf("c = %c\n", c);
	ft_memccpy(s1, s2, c, strlen(s2));
	printf("after: %s\n", s1);
	printf("std function:%s\n", ft_memccpy(s1, s2, c, 10));
	printf("ft_ function:%s\n", memccpy(s1, s2, c, 10));
}
