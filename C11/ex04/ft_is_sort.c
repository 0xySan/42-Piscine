/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 14:45:11 by etaquet           #+#    #+#             */
/*   Updated: 2024/08/26 13:44:12 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(char **tab, int (*f)(char*))
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if (f(tab[i]) < 0)
			return (0);
		i++;
	}
	return (1);
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

/*int main() {
	char *tab[] = {"a", "b", "c", 0};
	printf("%d\n", ft_is_sort(tab, &ft_strcmp));
	return 0;
}*/