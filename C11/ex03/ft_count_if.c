/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 14:45:32 by etaquet           #+#    #+#             */
/*   Updated: 2024/08/26 13:44:07 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	value;

	value = 0;
	i = 0;
	while (tab[i])
	{
		if (f(tab[i]))
			value++;
		i++;
	}
	return (value);
}

/*int	ft_strlen(char *str)
{
	int	start;

	start = 0;
	while (str[start])
		start++;
	return (start);
}

int main() {
	char *tab[] = {"a", "b", "c", 0};
	printf("%d\n", ft_count_if(tab, &ft_strlen));
	return 0;
}*/