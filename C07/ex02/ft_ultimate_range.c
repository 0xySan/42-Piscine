/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oxysan <oxysan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 17:50:59 by oxysan            #+#    #+#             */
/*   Updated: 2024/08/15 18:12:48 by oxysan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_ultimate_range(int **range, int min, int max)
{
    int i;

    if (!range)
        return -1;

    if (min >= max){
        *range = 0;
        return 0;
    }
    i = max - min;
    *range = (int *)malloc(sizeof(int) * i);
    if (!*range)
        return -1;
    i = 0;
    while (max > min){
        (*range)[i] = min;
        min++;
        i++;
    }
    return i;
}