/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 00:02:20 by oxy               #+#    #+#             */
/*   Updated: 2024/08/13 14:14:52 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	val;

	val = 0;
	while (str && str[val])
	{
		val++;
	}
	return (val);
}

int	ft_count_nb(int nb, int len)
{
	int	value;

	value = 0;
	while (nb >= len)
	{
		nb /= len;
		value++;
	}
	return (value);
}

void	ft_putnbr_base(int nb, char *base)
{
	int	nb_count;
	int	n_tempo;
	int	nb_tempo;
	int	blen;

	blen = ft_strlen(base);
	if (blen <= 0)
		return ;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	nb_count = ft_count_nb(nb, blen) + 1;
	while (nb_count-- > 0)
	{
		n_tempo = nb_count;
		nb_tempo = nb;
		while (n_tempo--)
			nb_tempo /= blen;
		write(1, &base[nb_tempo % blen], 1);
	}
}

/*int	main(int argc, const char *argv[])
{
	int	i;

	ft_putnbr_base(-2, "01");
	return (0);
}*/