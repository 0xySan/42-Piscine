/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 22:14:09 by oxy               #+#    #+#             */
/*   Updated: 2024/08/08 09:37:52 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_minimum(int *tab, int start, int size)
{
	int	minimum;
	int	index;

	minimum = tab[start];
	index = start;
	while (++start < size)
	{
		if (minimum > tab[start])
		{
			minimum = tab[start];
			index = start;
		}
	}
	return (index);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	temp_index;
	int	start;

	start = 0;
	while (start < size)
	{
		temp_index = ft_minimum(tab, start, size);
		temp = tab[temp_index];
		tab[temp_index] = tab[start];
		tab[start] = temp;
		start++;
	}
}
