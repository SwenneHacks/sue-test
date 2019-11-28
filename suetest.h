/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   suetest.h                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/26 19:46:51 by swofferh       #+#    #+#                */
/*   Updated: 2019/11/26 21:43:22 by nschat        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUETEST_H
# define SUETEST_H
# include "libft.h"

extern char	*g_func;
extern int	g_test;

void	test_atoi(void);
void	test_bzero(void);

int		check_result(int result, const char *message);

#endif
