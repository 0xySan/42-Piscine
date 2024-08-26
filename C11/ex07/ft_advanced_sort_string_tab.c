/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 14:44:43 by etaquet           #+#    #+#             */
/*   Updated: 2024/08/26 13:45:04 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	char	*temp;
	int		temp_index;
	int		start;

	start = 0;
	while (tab[start])
	{
		temp_index = start;
		while (tab[++temp_index])
		{
			if (cmp(tab[start], tab[temp_index]) > 0)
			{
				temp = tab[start];
				tab[start] = tab[temp_index];
				tab[temp_index] = temp;
			}
		}
		start++;
	}
}

// int	ft_strcmp(char *s1, char *s2)
// {
// 	int	start;

// 	start = -1;
// 	while (s1[++start])
// 	{
// 		if (s1[start] != s2[start])
// 			return (s1[start] - s2[start]);
// 	}
// 	return (s1[start] - s2[start]);
// }

// int ft_strlen(char *str)
// {
//     int val;

//     val = 0;
//     while (str[val])
//         val++;
//     return (val);
// }

// #include <unistd.h>
// int main(int argc, char *argv[])
// {
//     ft_advanced_sort_string_tab(argv + 1, ft_strcmp);
//     int start = 0;
//     while (++start < argc)
//     {
//         write(1, argv[start], ft_strlen(argv[start]));
//         write(1, "\n", 1);
//     }
//     return (0);
// }