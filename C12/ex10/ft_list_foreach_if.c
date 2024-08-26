/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 19:02:18 by etaquet           #+#    #+#             */
/*   Updated: 2024/08/25 14:59:14 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void *data_ref, int (*cmp)(void *, void *))
{
    while (begin_list)
    {
        if(cmp(begin_list->data, data_ref) == 0)
            f(begin_list->data);
        begin_list = begin_list->next;
    }
}
