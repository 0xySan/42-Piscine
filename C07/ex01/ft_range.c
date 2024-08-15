/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oxysan <oxysan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 17:39:16 by oxysan            #+#    #+#             */
/*   Updated: 2024/08/15 19:01:12 by oxysan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_range(int min, int max)
{
    int i;
    int *result;

    if (min >= max)
        return 0;
    i = max - min;
    result = (int *)malloc(sizeof(int) * i);
    if (!result)
        return 0;
    i = 0;
    while (max > min){
        result[i] = min;
        min++;
        i++;
    }
    return result;
}

/*#include <stdio.h>
int main()
{
	int	min;
	int	max;
	int	*tab;
	int	i = 0;
	int	size;

	min = -25;
	max = 214789;
	size = max - min;
	tab = ft_range(min, max);
	while(i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}*/
