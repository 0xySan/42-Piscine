/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oxysan <oxysan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 16:29:35 by oxysan            #+#    #+#             */
/*   Updated: 2024/08/14 21:47:16 by oxysan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_prime(int nb)
{
    int value;
    int start;

    value = 0;
    start = 0;
	if (nb <= 0 || nb == 1)
        return (0);
    while (++start < nb+1)
    {
        if (nb % start == 0)
            value++;
    }
    if (value > 2)
        return 0;
    return 1;
}