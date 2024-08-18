/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oxysan <oxysan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 22:49:20 by oxy               #+#    #+#             */
/*   Updated: 2024/08/18 15:55:56 by oxysan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	val;
	int	temp;

	val = -1;
	while (str && str[++val])
	{
		if (str[val] == '+' || str[val] == '-')
			return (0);
		temp = val;
		while (str[++temp])
		{
			if (str[temp] == str[val])
				return (0);
		}
	}
	return (val);
}

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
