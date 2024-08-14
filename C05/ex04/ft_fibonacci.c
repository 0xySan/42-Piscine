/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oxysan <oxysan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 03:12:53 by oxysan            #+#    #+#             */
/*   Updated: 2024/08/14 03:14:43 by oxysan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_fibonacci(int index)
{
    if(index < 0)
        return -1;
    if(index == 0)
        return 0;
    if(index == 1 || index == 2)
        return 1;
    return ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
}