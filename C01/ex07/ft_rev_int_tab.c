/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 22:01:17 by oxy               #+#    #+#             */
/*   Updated: 2024/08/26 13:39:30 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}

// int main()
// {
// 	int tab[5] = {1, 2, 3, 4, 5};
// 	int i = 0;
// 	ft_rev_int_tab(tab, 5);
// 	while (i < 5)
// 	{
// 		printf("%d\n", tab[i]);
// 		i++;
// 	}
// 	return (0);
// }