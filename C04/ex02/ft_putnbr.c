/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 15:03:12 by etaquet           #+#    #+#             */
/*   Updated: 2024/08/20 14:13:29 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_count_nb(int nb)
{
	int	value;

	value = 0;
	while (nb > 9)
	{
		nb /= 10;
		value++;
	}
	return (value);
}

void	ft_putnbr(int nb)
{
	int	nb_count;
	int	n_tempo;
	int	nb_tempo;

	if (nb == -2147483648)
	{
		write(1, "-", 1);
		write(1, "2", 1);
		write(1, "147483648", 9);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	nb_count = ft_count_nb(nb)+1;
	while (nb_count-- > 0)
	{
		n_tempo = nb_count;
		nb_tempo = nb;
		while (n_tempo--)
			nb_tempo /= 10;
		ft_putchar(nb_tempo % 10 + '0');
	}
}

// int main()
// {
// 	ft_putnbr(2147483647);
// 	return 0;
// }