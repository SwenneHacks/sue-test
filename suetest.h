/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   suetest.h                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/26 19:46:51 by swofferh       #+#    #+#                */
/*   Updated: 2019/11/29 21:44:03 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUETEST_H
# define SUETEST_H
# include "libft.h"

extern char	*g_func;
extern int	g_test;
extern char *g_type;

void	test_atoi(void);
void	test_bzero(void);
void	test_memccpy(void);
void	test_memchr(void);
void	test_strlen(void);
void	test_strrchr(void);

int		test_this(int result);

#endif
