/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   strrchr.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/04 17:13:21 by swofferh       #+#    #+#                */
/*   Updated: 2019/11/23 17:47:58 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char sro[] = "o is here and her-o";
	char sre[] = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
	char src[] = "the cake is a lie !\0I'm hidden lol\r\n";

	printf(" Last occurrence:\n");
	printf(" std function %lu\n", strrchr(sro, 'o'));
	printf(" ft_ function %lu\n", ft_strrchr(sro, 'o'));
	printf(" First occurence:\n");
	printf(" std function %lu\n", strchr(sro, 'o'));
	printf(" ft_ function %lu\n", ft_strchr(sro, 'o'));
	printf(" src: %s\n", src);
	printf(" std function %lu\n", strrchr(src, '\0'));
	printf(" ft_ function %lu\n", ft_strrchr(src, '\0'));
}
