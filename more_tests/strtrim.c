/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   strtrim.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/13 20:50:36 by swofferh       #+#    #+#                */
/*   Updated: 2019/11/25 20:20:26 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set);

int	main(void)
{
	char *bullshit;
	char	str[] = "lorem ipsum dolor sit amet";
	char	*strsub;

	if (!(strsub = ft_substr(str, 400, 20)))
		ft_print_result("NULL");
	else
	{
		bullshit = (char *)&strsub[30];
		bullshit = "FULL BULLSHIT";
		if (strsub)
			ft_print_result(strsub);
		else
			t_print_result("rip");
	}
}

/*
/*   Parameters
/*   #1.  The string to be trimmed.
/*   #2.  The reference set of characters to trim.
/*
/*   Return value
/*   The trimmed string.  NULL if the allocation fails.
/*
/*   External functs.
/*   malloc
/*
/*   Description
/*   Allocates (with malloc(3)) and returns a copy of
/*   the string given as argument without the characters
/*   specified in the set argument at the beginning and
/*   the end of the string.
/*                                                                            */
