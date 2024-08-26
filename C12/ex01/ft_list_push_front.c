/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 14:41:40 by etaquet           #+#    #+#             */
/*   Updated: 2024/08/26 11:38:31 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

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

//#include <stdio.h>
// int main()
// {
//     t_list *list;
//     int size;

//     list = ft_create_elem("first");
//     ft_list_push_front(&list, "second");
//     ft_list_push_front(&list, "third");
//     printf("%s\n", list->data);
//     return (0);
// }