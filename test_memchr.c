/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_memchr.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/04 17:11:38 by swofferh       #+#    #+#                */
/*   Updated: 2019/11/29 20:30:46 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "suetest.h"

void	test_memchr(void)
{
	int size = 10;
	char *src = "/|\x12\xff\x09\x42\042\42|\\";
	char *hopa = "test\0 ";
	char *hey = "Oh hey there";
	
	g_func = "memchr";
	
	g_type = "weird text test ( c = xde)";
	test_this(ft_memchr(src, '\xde', size) != memchr(src, '\xde', size));
	
	g_type = "basic test";
	test_this(ft_memchr(hey, 'r', size) != memchr(hey, 'r', size));
	
	g_type = "/0 in string and c = space after /0";
	test_this(ft_memchr(hopa, ' ', size) != memchr(hopa, ' ', size));
	
	g_type = "empty string and 0 length";
	test_this(ft_memchr("\0", '\0', 0) != memchr("\0", '\0', 0));
}

//returns a pointer (%p) to the address of the LAST occourence of c in string s
void *ft_memchr(const void *s, int c, size_t n);
