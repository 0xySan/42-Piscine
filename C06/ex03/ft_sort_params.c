/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oxysan <oxysan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 22:18:56 by oxysan            #+#    #+#             */
/*   Updated: 2024/08/14 22:31:15 by oxysan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	start;

	if (!s1 || !s2)
	{
		return (0);
	}
	start = -1;
	while (s1[++start])
	{
		if (s1[start] != s2[start])
		{
			return (s1[start] - s2[start]);
		}
	}
	return (s1[start] - s2[start]);
}

int	ft_minimum(char **tab, int start, int size)
{
	char	*minimum;
	int	index;

	minimum = tab[start];
	index = start;
	while (++start < size)
	{
		if (ft_strcmp(minimum, tab[start]) > 0)
		{
			minimum = tab[start];
			index = start;
		}
	}
	return (index);
}

void	ft_sort_char_tab(char **tab, int size)
{
	char	*temp;
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

int	ft_strlen(char *str)
{
	int	val;

	val = 0;
	while (str[val])
	{
		val++;
	}
	return (val);
}

int main(int n, char **v)
{
    int start;

    ft_sort_char_tab(v+1, n-1);
    start = 0;
    while(++start < n)
    {
        write(1,v[start],ft_strlen(v[start]));
        write(1,"\n",1);
    }
    return 0;
}