/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   strlcpy.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/04 20:37:02 by swofferh       #+#    #+#                */
/*   Updated: 2019/11/23 17:46:51 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	// char dst[] = "Test nog een keer!";
	// char src[] = "Dit functie werkt niet joh...";
	char dst[] = "";
	char src[] = "xfdhsth";
	size_t size;

	size = ft_strlen(dst);
	printf("before src: %s\n", src);
	printf("before dst: %s\n", dst);
	ft_strlcpy(NULL, src, size);
	printf("after src: %s\n", src);
	printf("after dst: %s\n", dst);
}
