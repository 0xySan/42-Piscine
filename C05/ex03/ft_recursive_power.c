/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 03:10:24 by oxysan            #+#    #+#             */
/*   Updated: 2024/08/21 11:54:22 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

// #include <stdio.h>
// int main()
// {
// 	printf("%d\n", ft_recursive_power(10,1));
// 	printf("%d\n", ft_recursive_power(10,2));
// 	printf("%d\n", ft_recursive_power(10,3));
// 	printf("%d\n", ft_recursive_power(9,6));
// 	printf("%d\n", ft_recursive_power(4,-1));
// }