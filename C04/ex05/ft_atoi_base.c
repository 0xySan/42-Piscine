/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oxysan <oxysan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 15:53:14 by oxysan            #+#    #+#             */
/*   Updated: 2024/08/18 17:13:24 by oxysan           ###   ########.fr       */
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

int	ft_atoi_base(char *str, char *base)
{
	int	start;
	int	signe;
	int	value;
    (void)base;

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
	while (//fonction(str[start], base) != -1)
	{
		value = value * len //+ fonction(str[start], base);
	}
	return (value * signe);
}

/*#include <stdio.h>
int	main(int argc, char *argv[])
{
	printf("%d", ft_atoi(argv[1]));
	return 0;
}*/

// fonction qui donne index d'une lettre de base
// 
//
//
