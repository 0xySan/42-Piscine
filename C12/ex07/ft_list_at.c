/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 18:39:07 by etaquet           #+#    #+#             */
/*   Updated: 2024/08/26 11:41:09 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	size;

	size = 0;
	while (begin_list)
	{
		if (nbr == size)
			return (begin_list);
		begin_list = begin_list->next;
		size++;
	}
	return (0);
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

	t_list *node = ft_list_at(list, 1);
	if (node)
		printf("Element at index 1: %s\n", node->data);
	else
		printf("Index out of bounds\n");

	return (0);
}*/