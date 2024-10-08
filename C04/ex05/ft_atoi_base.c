/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 15:53:14 by oxysan            #+#    #+#             */
/*   Updated: 2024/08/20 13:07:40 by etaquet          ###   ########.fr       */
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

int	ft_check_base(char *str, char *base, int index)
{
	int	start;

	start = -1;
	while (base[++start])
	{
		if (str[index] == base[start])
			return (start);
	}
	return (start - 1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	start;
	int	signe;
	int	value;

	signe = 1;
	start = 0;
	while (str[start] == ' ' || str[start] == '\n'
		|| str[start] == '\t' || str[start] == '\v'
		|| str[start] == '\f' || str[start] == '\r')
		start++;
	value = 0;
	while ((str[start] == '+' || str[start] == '-'))
	{
		if (str[start] == '-')
		{
			signe *= -1;
		}
		start++;
	}
	while (ft_check_base(str, base, start) != -1 && str[start])
	{
		value = value * ft_strlen(base) + ft_check_base(str, base, start);
		start++;
	}
	return (value * signe);
}

// #include <stdio.h>
// int	main(int argc, char *argv[])
// {
// 	printf("%d", ft_atoi_base(argv[1], "poneyvif"));
// 	return 0;
// }
