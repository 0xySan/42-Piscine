/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 11:45:05 by etaquet           #+#    #+#             */
/*   Updated: 2024/08/26 11:46:29 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	dest = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!dest)
		return (0);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str		*tab;
	int						i;

	tab = (struct s_stock_str *)malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (!tab)
		return (0);
	i = 0;
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}

// int main(int n, char **v)
// {
//     struct s_stock_str *tab;
//     int i;

//     tab = ft_strs_to_tab(n - 1, v + 1);
//     i = 0;
//     while (tab[i].str)
//     {
//         printf("size: %d\n", tab[i].size);
//         printf("str: %s\n", tab[i].str);
//         printf("copy: %s\n", tab[i].copy);
//         i++;
//     }
//     return (0);
// }