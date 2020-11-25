/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   list.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/01/02 18:53:03 by swofferh       #+#    #+#                */
/*   Updated: 2020/11/25 20:00:55 by swofferh      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	del(void *bla)
{
	ft_bzero(bla, ft_strlen(bla));
}

void	up_f(void *content)
{
	char	*str;

	str = content;
	while (*str)
	{
		*str = ft_toupper(*str);
		str++;
	}
}

void	*low_f(void *content)
{
	char	*dup;
	char	*str;

	str = content;
	dup = malloc(ft_strlen(content));
	while (*str)
	{
		*dup = ft_tolower(*str);
		str++;
		dup++;
	}
	return (dup);
}

int		test_lists(void)
{
	t_list	*head;
	t_list	*lst;
	t_list	*test;
	t_list	*temp;
	t_list	*copy;
	int		size;
	char	*last;
//
	printf("\n\n THIS PART IS GOING TO SHOW YOU THE LINKED LISTS DANCE \n\n");	
//
	printf("> testing lstnew, add_back and add_front:\n");
	lst = ft_lstnew(ft_strdup("susu"));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("sasa")));
	ft_lstadd_front(&lst, ft_lstnew(ft_strdup("sisi")));
	printf("%s\n", lst->content);
	printf("%s\n", lst->next->content);
	printf("%s\n\n", lst->next->next->content);
//
	printf("> testing lstiter:\n");
	temp = lst;
	ft_lstiter(lst, &up_f);
	while (lst)
	{
		printf("%s\n", lst->content);
		lst = lst->next;
	}
	printf("\n");
	lst = temp;
//
	printf("> testing lstmap:\n");
	copy = ft_lstmap(lst, &low_f, &del);
	printf("%s\n", copy->content);
	printf("%s\n", copy->next->content);
	printf("%s\n\n", copy->next->next->content);
//
	printf("> testing lstsize and last:\n");
	size = ft_lstsize(lst);
	last = ft_lstlast(lst)->content;
	printf("size: %d\n", size);
	printf("last: %s\n\n", last);
//
	printf("> testing a bit more:\n");
	test = ft_lstnew(ft_strdup("test"));
	ft_lstadd_front(&test, ft_lstnew(ft_strdup("this")));
	ft_lstadd_front(&test, ft_lstnew(ft_strdup("then")));
	printf("%s->", test->next->next->content);
	printf("%s->", test->next->content);
	printf("%s\n", test->content);
//
	printf("> before/after:\n");
	printf("before: %d\n", ft_lstsize(test));
	ft_lstclear(&test, &del);
	printf("after: %d\n\n", ft_lstsize(test));
//
	printf("> testing lstdelone\n");
	head = lst;
	printf("%s->", head->next->next->content);
	printf("%s->", head->next->content);
	printf("%s\n", head->content);
	ft_lstdelone(head, &del);
	printf("%s->", head->next->next->content);
	printf("%s->", head->next->content);
	printf("%s\n", head->content);
	return (0);
}
