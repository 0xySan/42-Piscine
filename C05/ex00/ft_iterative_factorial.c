/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oxysan <oxysan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 03:01:11 by oxysan            #+#    #+#             */
/*   Updated: 2024/08/14 03:03:43 by oxysan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
    int value;

    value = nb;
    if(nb < 0)
        return 0;
    if(nb == 0)
    return 1;
    while(--nb)
        value*=nb;
    return (value);
}