/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 03:08:00 by oxysan            #+#    #+#             */
/*   Updated: 2024/08/21 11:54:25 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	value;

	value = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (--power)
		value *= nb;
	return (value);
}
// #include <stdio.h>
// int main()
// {
// 	printf("%d\n", ft_iterative_power(10,1));
// 	printf("%d\n", ft_iterative_power(10,2));
// 	printf("%d\n", ft_iterative_power(10,3));
// 	printf("%d\n", ft_iterative_power(9,6));
// 	printf("%d\n", ft_iterative_power(4,-1));
// }