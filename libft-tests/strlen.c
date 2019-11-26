/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   strlen.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 17:31:45 by swofferh       #+#    #+#                */
/*   Updated: 2019/11/23 17:47:11 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	char str;

	str = "Swenne, you got this!!";
	printf("ft_ result: %d \n", ft_strlen(str));
	printf("original result: %lu \n", strlen(str));
	return (0);
}
