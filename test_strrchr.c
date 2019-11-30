/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_strrchr.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/04 17:13:21 by swofferh       #+#    #+#                */
/*   Updated: 2019/11/29 22:07:30 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "suetest.h"


void	test_strrchr(void)
{
	char sro[] = "o is here and her-o";
	char sre[] = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
	char src[] = "the cake is a lie !\0I'm hidden lol\r\n";

	g_func = "strrchr";	
	
	g_type = "First and Last occurrence";
	test_this(ft_strrchr(sro, 'o') != strrchr(sro, 'o'));
	printf("  first: %p\n", ft_strchr(sre, 's'));
	printf("   last: %p\n", ft_strrchr(sre, 's'));

	g_type = "basic test";
	test_this(ft_strrchr(sre, 's') != strrchr(sre, 's'));
	printf("  first: %p\n", ft_strchr(sre, 's'));
	printf("   last: %p\n", ft_strrchr(sre, 's'));
	
	g_type = "hidden after /0";
	test_this(ft_strrchr(src, '\0') != strrchr(src, '\0'));
}

//locates LAST occourence of char c in string s until terminating \0 char.
char *ft_strrchr(const char *s, int c);
