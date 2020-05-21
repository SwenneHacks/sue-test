/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   strdup.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/04 17:21:01 by swofferh       #+#    #+#                */
/*   Updated: 2019/11/23 17:46:24 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	str[] = "duplicated?";
	char	str0[] = "ahsgioasgopahsgopasg\0asghiaodghiaosg";
	char	str1[] = "";
	char	*dst;

	printf("%s,%s\n", str, dst);
	dst = ft_strdup(str);
	// free(dst);
	// ft_strdup(str);
	// ft_strdup("");
	printf("%s,%s\n", str, dst);
	printf("%s|%s,%s.\n", str, ft_strdup(str), strdup(str));
	printf("%s|%s,%s.\n", str0, ft_strdup(str0), strdup(str0));
	printf("%s\n%s\n%s.\n", str1, ft_strdup(str), strdup(str));
}
