/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   list.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: swofferh <swofferh@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/01/02 18:53:03 by swofferh       #+#    #+#                */
/*   Updated: 2020/01/09 21:28:11 by swofferh      ########   odam.nl         */
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

	lst = ft_lstnew(ft_strdup("susu"));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("sasa")));
	ft_lstadd_front(&lst, ft_lstnew(ft_strdup("sisi")));
	printf("%s\n", lst->content);
	printf("%s\n", lst->next->content);
	printf("%s\n\n", lst->next->next->content);
//
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
	copy = ft_lstmap(lst, &low_f, &del);
	printf("%s\n", copy->content);
	printf("%s\n", copy->next->content);
	printf("%s\n", copy->next->next->content);
//
	size = ft_lstsize(lst);
	last = ft_lstlast(lst)->content;
	printf("size: %d\n", size);
	printf("last: %s\n\n", last);
//
	test = ft_lstnew(ft_strdup("test"));
	ft_lstadd_front(&test, ft_lstnew(ft_strdup("this")));
	ft_lstadd_front(&test, ft_lstnew(ft_strdup("then")));
	printf("%s->", test->next->next->content);
	printf("%s->", test->next->content);
	printf("%s\n", test->content);
//
	printf("before: %d\n", ft_lstsize(test));
	ft_lstclear(&test, &del);
	printf("after: %d\n\n", ft_lstsize(test));
//
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
