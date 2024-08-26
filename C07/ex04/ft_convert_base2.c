/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 14:23:48 by etaquet           #+#    #+#             */
/*   Updated: 2024/08/22 14:24:10 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	val;
	int	temp;

	if (!str)
		return (0);
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
	return (-1);
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
			signe *= -1;
		start++;
	}
	while (ft_check_base(str, base, start) != -1 && str[start])
		value = value * ft_strlen(base) + ft_check_base(str, base, start++);
	return (value * signe);
}

int	ft_count_nb(int nb, int len)
{
	int	value;

	value = 0;
	while (nb >= len || nb <= -len)
	{
		nb /= len;
		value++;
	}
	return (value);
}

char	*ft_calcnbr_base(int nb, int signe, char *base, int start)
{
	int		nb_count;
	int		n_tempo;
	int		nb_tempo;
	char	*r_value;
	int		len;

	len = ft_strlen(base);
	r_value = malloc(sizeof(char) * (len + 1));
	if (signe < 0)
		r_value[0] = '-';
	nb_count = ft_count_nb(nb, len) + 1;
	while (nb_count-- > 0)
	{
		start++;
		n_tempo = nb_count;
		nb_tempo = nb;
		while (n_tempo--)
			nb_tempo /= len;
		r_value[start] = base[(nb_tempo % len) * signe];
	}
	return (r_value);
}
