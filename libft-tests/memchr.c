/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   memchr.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/04 17:11:38 by swofferh       #+#    #+#                */
/*   Updated: 2019/11/23 17:38:51 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	int size = 10;
	char *src = "/|\x12\xff\x09\x42\042\42|\\";
	char *hopa = "";
	printf("%s\n", memchr(src, '\xde', size));
	printf("%s\n", ft_memchr(src, '\xde', size));
	printf("%s\n", memchr("Hey There", 'r', 10));
	printf("%s\n", ft_memchr("Hey There", 'r', 10));
	printf("%s\n", memchr(hopa, ' ', 10));
	printf("%s\n", ft_memchr(hopa, ' ', 10));
	ft_memchr("\0", '\0', 0x20);
}
