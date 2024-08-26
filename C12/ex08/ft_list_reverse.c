/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 18:41:49 by etaquet           #+#    #+#             */
/*   Updated: 2024/08/26 11:41:23 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*tmp;
	t_list	*rtmp;

	tmp = *begin_list;
	rtmp = (*begin_list)->next;
	*begin_list = (*begin_list)->next;
	tmp->next = 0;
	while (rtmp && *begin_list)
	{
		rtmp = (*begin_list);
		tmp = rtmp;
		rtmp->next = tmp;
		*begin_list = (*begin_list)->next;
	}
	*begin_list = rtmp;
}

/*#include <stdlib.h>

t_list *ft_create_elem(void *data)
{
	t_list *elem;

	elem = malloc(sizeof(t_list));
	if (elem)
	{
		elem->data = data;
		elem->next = NULL;
	}
	return (elem);
}

#include <stdio.h>

int main()
{
	t_list *list = ft_create_elem("Hello");
	list->next = ft_create_elem("World");
	ft_list_reverse(&list);
	while (list)
	{
		printf("%s -> ", list->data);
		list = list->next;
	}
	return (0);
}*/