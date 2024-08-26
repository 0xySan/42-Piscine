/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 19:02:18 by etaquet           #+#    #+#             */
/*   Updated: 2024/08/26 11:41:49 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *), void *data_ref, int (*cmp)())
{
	while (begin_list)
	{
		f(begin_list->data);
		begin_list = begin_list->next;
	}
}

/*int main()
{
	t_list *list = ft_create_elem("Hello");
	ft_list_push_back(&list, ft_create_elem("World"));
	ft_list_foreach(list, &ft_putstr, NULL, NULL);
	ft_list_clear(&list, &ft_free);
	return (0);
}*/