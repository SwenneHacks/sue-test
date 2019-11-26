/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   memmove.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/04 17:13:30 by swofferh       #+#    #+#                */
/*   Updated: 2019/11/23 17:39:30 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	printf("%s\n", ft_memmove("Hey", "Hallo", 3));
	printf("%s\n", ft_memmove("Hey", "Hallo", 10));
}
