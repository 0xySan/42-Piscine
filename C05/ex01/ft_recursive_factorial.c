/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oxysan <oxysan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 03:06:12 by oxysan            #+#    #+#             */
/*   Updated: 2024/08/14 03:07:38 by oxysan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb)
{
    if(nb < 0)
        return 0;
    if(nb == 0)
        return 1;
    return nb * ft_recursive_factorial(nb-1);
}