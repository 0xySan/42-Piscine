/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 22:49:20 by oxy               #+#    #+#             */
/*   Updated: 2024/08/13 14:09:15 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_space(char *str)
{
	int	start;

	start = 0;
	while (str[start] == ' ' || str[start] == '\t')
	{
		start++;
	}
	return (start);
}

int	ft_atoi(char *str)
{
	int	start;
	int	signe;
	int	value;

	signe = 1;
	start = ft_space(str);
	value = 0;
	while ((str[start] == '+' || str[start] == '-'))
	{
		if (str[start] == '-')
		{
			signe *= -1;
		}
		start++;
	}
	while (str[start] >= '0' && str[start] <= '9')
	{
		value = value * 10 + str[start++] - '0';
	}
	return (value * signe);
}

/*#include <stdio.h>
int	main(int argc, char *argv[])
{
	printf("%d", ft_atoi(argv[1]));
	return 0;
}*/
