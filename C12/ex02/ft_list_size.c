/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 14:43:10 by etaquet           #+#    #+#             */
/*   Updated: 2024/08/26 11:38:45 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int	size;

	size = 0;
	while (begin_list)
	{
		begin_list = begin_list->next;
		size++;
	}
	return (size);
}

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
//     int size;

//     list = ft_create_elem("first");
//     ft_list_push_front(&list, "second");
//     ft_list_push_front(&list, "third");
//     size = ft_list_size(list);
//     printf("%d\n", size);
//     return (0);
// }