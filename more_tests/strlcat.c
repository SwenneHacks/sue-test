/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   strlcat.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/04 20:00:00 by y swofferh     #+#    #+#                */
/*   Updated: 2019/11/23 17:46:39 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char dst[] = "Hello";
	char src[] = "byebye";
	char test[] = "Test\0 dit dan";
	char hopa[] = "Moelijke\0 src hier";
	size_t	size;
	size_t	size_src;
	size_t	ltest;
	size_t	lhopa;

	size = strlen(dst);
	size_src = strlen(src);
	printf("src: %s ", src);
	printf("(%lu bytes) \n", size_src);
	printf("dst: %s ", dst);
	printf("(%lu bytes) \n", size);
	printf("Both functions:\n");
	printf("std: %lu bytes\n", ft_strlcat(dst, src, size));
	printf("ft_: %lu bytes \n", strlcat(dst, src, size));
	ft_strlcat(dst, src, 7);
	printf("%s\n", dst);
	printf("Test with end of line:\n");
	ltest = strlen(test);
	lhopa = strlen(hopa);
	printf("dst: %s ", test);
	printf("(%lu bytes) \n", ltest);
	printf("src: %s ", hopa);
	printf("(%lu bytes) \n", lhopa);
	ft_strlcat(test, hopa, 7);
	printf("%s\n", hopa);
	printf("(%lu bytes) \n", lhopa);
	printf("%lu\n", ft_strlcat(test, hopa, ltest));
}
