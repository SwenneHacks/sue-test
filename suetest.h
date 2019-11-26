/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   suetest.h                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/26 19:46:51 by swofferh       #+#    #+#                */
/*   Updated: 2019/11/26 20:23:02 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUETEST_H
# define SUETEST_H
# include "libft.h"

extern char	*g_func;
extern char	*g_message;
extern int	g_test;

void	test_atoi(void);
void	test_bzero(void);

int		check_result(int result);

#endif
