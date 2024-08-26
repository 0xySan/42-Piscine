/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 14:43:42 by etaquet           #+#    #+#             */
/*   Updated: 2024/08/26 11:38:57 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	int	size;

	while (begin_list->next)
	{
		begin_list = begin_list->next;
	}
	return (begin_list);
}

//#include <stdlib.h>
//#include <stdio.h>
// t_list *ft_create_elem(void *data)
// {
//     t_list *elem;

//     elem = malloc(sizeof(t_list));
//     if (elem)
//     {
//         elem->data = data;
//         elem->next = NULL;
//     }
//     return (elem);
// }

// void ft_list_push_front(t_list **begin_list, void *data)
// {
//     t_list *new_elem;

//     new_elem = ft_create_elem(data);
//     if (new_elem)
//     {
//         new_elem->next = *begin_list;
//         *begin_list = new_elem;
//     }
// }

// int main()
// {
//     t_list *list;
//     t_list *last;

//     list = ft_create_elem("first");
//     ft_list_push_front(&list, "second");
//     ft_list_push_front(&list, "third");
//     last = ft_list_last(list);
//     printf("%s\n", last->data);
//     return (0);
// }