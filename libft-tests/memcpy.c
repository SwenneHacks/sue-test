/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   memcpy.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/01 16:59:00 by swofferh       #+#    #+#                */
/*   Updated: 2019/11/23 17:39:15 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	char dst[] = "-------------";
	char src[] = "++++++++++";
	printf("before dst: %s\n", dst);
	printf("before src: %s\n", src);
	printf("std fucntion: %s\n", memcpy(dst, src, 4));
	printf("ft_ fucntion: %s\n", memcpy(dst, src, 4));
}
