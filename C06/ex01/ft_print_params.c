/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 22:10:19 by oxysan            #+#    #+#             */
/*   Updated: 2024/08/20 12:47:38 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	val;

	val = 0;
	while (str[val])
		val++;
	return (val);
}

int	main(int n, char **v)
{
	int	start;

	start = 0;
	while (++start < n)
	{
		write(1, v[start], ft_strlen(v[start]));
		write(1, "\n", 1);
	}
	return (0);
}
