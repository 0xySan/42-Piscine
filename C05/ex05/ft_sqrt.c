/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 15:46:11 by oxysan            #+#    #+#             */
/*   Updated: 2024/08/21 11:54:11 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb < 0)
		return (0);
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// int main()
// {
// 	printf("%d\n", ft_sqrt(1));
// 	printf("%d\n", ft_sqrt(4));
// 	printf("%d\n", ft_sqrt(3));
// 	printf("%d\n", ft_sqrt(16));
// 	printf("%d\n", ft_sqrt(-1));
// }