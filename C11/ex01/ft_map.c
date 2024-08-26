/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 21:40:22 by etaquet           #+#    #+#             */
/*   Updated: 2024/08/24 14:47:08 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

int *ft_map(int *tab, int length, int(*f)(int))
{
    int i;
    int *result;

    i = 0;
    result = malloc(sizeof(int) * length);
    while (i < length)
    {
        result[i] = f(tab[i]);
        i++;
    }
    return (result);
}

/*int	ft_strlen(char *str)
{
    int	start;

    start = 0;
    while (str[start])
        start++;
    return (start);
}

int main() {
    int tab[] = {1, 2, 3, 4, 5};
    int *result = ft_map(tab, 5, &ft_strlen);
    int i = 0;
    while (i < 5)
    {
        printf("%d\n", result[i]);
        i++;
    }
    return 0;
}*/