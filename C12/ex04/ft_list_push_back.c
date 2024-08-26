/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 14:43:56 by etaquet           #+#    #+#             */
/*   Updated: 2024/08/26 11:39:27 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"
#include <stdio.h>

t_list	*ft_list_last(t_list *begin_list)
{
	int	size;

	while (begin_list->next)
	{
		begin_list = begin_list->next;
	}
	return (begin_list);
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

// void ft_list_push_back(t_list **begin_list, void *data)
// {
//     t_list *new_elem;
//     t_list *last;

//     new_elem = ft_create_elem(data);
//     if (new_elem)
//     {
//         if (*begin_list)
//         {
//             last = ft_list_last(*begin_list);
//             last->next = new_elem;
//         }
//         else
//         {
//             *begin_list = new_elem;
//         }
//     }
// }

// int main()
// {
//     t_list *list;
//     t_list *last;

//     list = ft_create_elem("first");
//     ft_list_push_back(&list, "second");
//     ft_list_push_back(&list, "third");
//     last = ft_list_last(list);
//     printf("%s\n", last->data);
//     return (0);
// }