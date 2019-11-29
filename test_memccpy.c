/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_memccpy.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/04 19:03:50 by swofferh       #+#    #+#                */
/*   Updated: 2019/11/29 20:36:07 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "suetest.h"

void	test_memccpy(void)
{
	char s2[] = "Swenne is totally crazy!";
	char s1[] = "Someone's testing memccpy now!";
	char c = 'i';
	
	g_func = "memccpy";
	printf("\x1B[93mtesting %s:\n\x1B[0m", g_func);
	
	printf("before: %s\n", s1);
	printf("\x1B[95mdst:    %s\n\x1B[0m", s2);
	ft_memccpy(s1, s2, c, strlen(s2));
	printf("after:  %s\n", s1);
	
	
	g_type = "basic test";
	test_this(ft_memccpy(s1, s2, c, 10) != memccpy(s1, s2, c, 10));
}

//copies bytes from src to dst until finding c within the size n delimiter.
void 	*ft_memccpy(void *dst, const void *src, int c, size_t n);
