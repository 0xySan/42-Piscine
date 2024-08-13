/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 22:01:17 by oxy               #+#    #+#             */
/*   Updated: 2024/08/08 09:37:33 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	temp;

	start = 0;
	size--;
	while (start <= size)
	{
		temp = tab[size];
		tab[size] = tab[start];
		tab[start] = temp;
		start++;
		size--;
	}
}
