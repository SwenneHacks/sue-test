/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   split.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/13 20:53:06 by swofferh       #+#    #+#                */
/*   Updated: 2019/11/25 14:49:44 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static counting how many words
// malloc words + 1
// static how long the words are
// malloc chars in words
// memcpy each word in the empty array

int main()
{
	char *str = "Check dit dan";
	ft_split(str, ' ');	
	while(1);
}


/*
/*   Parameters
/*   #1.  The string to be split.
/*   #2.  The delimiter character.
/*
/*   Return value
/*   The array of new strings result of the split.  NULL
/*   if the allocation fails.
/*
/*   External functs.
/*   malloc, free
/*
/*   Description
/*   Allocates (with malloc(3)) and returns an array of
/*   strings obtained by splitting s using the character
/*   c as a delimiter.  The array must be ended by a
/*   NULL pointer.
/*                                                                            */
