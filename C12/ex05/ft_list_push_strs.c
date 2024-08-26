/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 14:44:10 by etaquet           #+#    #+#             */
/*   Updated: 2024/08/26 11:40:31 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"
#include <stdio.h>

t_list	*ft_create_elem(void *data)
{
	t_list	*elem;

	elem = malloc(sizeof(t_list));
	if (elem)
	{
		elem->data = data;
		elem->next = NULL;
	}
	return (elem);
}

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*new_elem;

	new_elem = ft_create_elem(data);
	if (new_elem)
	{
		new_elem->next = *begin_list;
		*begin_list = new_elem;
	}
}

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*list;
	int		i;

	list = NULL;
	i = 0;
	while (i < size)
	{
		ft_list_push_front(&list, strs[i]);
		i++;
	}
	return (list);
}

// int main(int n, char **v)
// {
//     t_list *list;
//     t_list *last;

//     list = ft_list_push_strs(n,v);
//     printf("%s\n", list->data);
//     return (0);
// }