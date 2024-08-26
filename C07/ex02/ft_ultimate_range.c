/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 17:50:59 by oxysan            #+#    #+#             */
/*   Updated: 2024/08/23 20:46:05 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (!range)
		return (-1);
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	i = max - min;
	*range = (int *)malloc(sizeof(int) * i);
	if (!*range)
		return (-1);
	i = 0;
	while (max > min)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (i);
}

// int main()
// {
// 	int *range;
// 	int i;
// 	int size;

// 	i = 0;
// 	size = ft_ultimate_range(&range, 5, 10);
// 	while (i < size)
// 	{
// 		printf("%d\n", range[i]);
// 		i++;
// 	}
// 	return (0);
// }