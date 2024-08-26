/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 03:01:11 by oxysan            #+#    #+#             */
/*   Updated: 2024/08/21 11:54:34 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	value;

	value = nb;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while (--nb)
		value *= nb;
	return (value);
}
// #include <stdio.h>
// int main()
// {
// 	printf("%d\n", ft_iterative_factorial(1));
// 	printf("%d\n", ft_iterative_factorial(2));
// 	printf("%d\n", ft_iterative_factorial(3));
// 	printf("%d\n", ft_iterative_factorial(12));
// 	printf("%d\n", ft_iterative_factorial(-1));
// }