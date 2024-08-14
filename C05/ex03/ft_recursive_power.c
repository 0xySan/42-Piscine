/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oxysan <oxysan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 03:10:24 by oxysan            #+#    #+#             */
/*   Updated: 2024/08/14 03:11:31 by oxysan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_power(int nb, int power)
{
    if(power < 0)
        return 0;
    if(power == 0)
        return 1;
    return nb * ft_recursive_power(nb, power-1);
}