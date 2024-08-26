/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 21:47:22 by oxysan            #+#    #+#             */
/*   Updated: 2024/08/21 11:53:58 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	value;
	int	start;

	value = 0;
	start = 0;
	if (nb <= 0 || nb == 1)
		return (0);
	while (++start < nb + 1)
	{
		if (nb % start == 0)
			value++;
	}
	if (value > 2)
		return (0);
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) == 0)
		nb++;
	return (nb);
}

// #include <stdio.h>
// int main()
// {
// 	printf("%d\n", ft_find_next_prime(1));
// 	printf("%d\n", ft_find_next_prime(7));
// 	printf("%d\n", ft_find_next_prime(3));
// 	printf("%d\n", ft_find_next_prime(16));
// 	printf("%d\n", ft_find_next_prime(-1));
// }