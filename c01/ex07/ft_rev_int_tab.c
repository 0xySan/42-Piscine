/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oxy <oxy@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 22:01:17 by oxy               #+#    #+#             */
/*   Updated: 2024/08/08 06:47:03 by oxy              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int start;
	int temp;

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