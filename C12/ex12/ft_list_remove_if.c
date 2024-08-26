/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 19:02:18 by etaquet           #+#    #+#             */
/*   Updated: 2024/08/26 11:34:26 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "stdlib.h"

void	remove_start(t_list **begin_list, void *data_ref, int (*cmp)(), void (*free_fct)(void *))
{
	t_list	*current;
	t_list	*next;

	current = *begin_list;
	next = (*begin_list)->next;
	while (cmp(current->data, data_ref) == 0)
	{
		free_fct(current->data);
		free(current);
		current = next;
		next = (*begin_list)->next;
	}
	*begin_list = current;
}

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(), void (*free_fct)(void *))
{
	t_list	*current;
	t_list	*next;

	remove_start(begin_list, data_ref, cmp, free_fct);
	current = *begin_list;
	next = (*begin_list)->next;
	while (current && next)
	{
		if (cmp(next->data, data_ref) == 0)
		{
			free_fct(next->data);
			current->next = next->next;
			free(next);
		}
		current = *begin_list;
		*begin_list = (*begin_list)->next;
		next = *begin_list;
	}
}
