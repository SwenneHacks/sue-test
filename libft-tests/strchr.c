/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   strchr.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/04 17:14:40 by swofferh       #+#    #+#                */
/*   Updated: 2019/11/23 17:46:12 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char *src;

	src = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
	printf(" std function %p\n", strchr(src, '\0'));
	printf(" ft_ function %p\n", ft_strchr(src, '\0'));
}
