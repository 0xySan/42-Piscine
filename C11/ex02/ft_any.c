/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 14:46:11 by etaquet           #+#    #+#             */
/*   Updated: 2024/08/26 13:44:01 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char*))
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if (f(tab[i]))
			return (1);
		i++;
	}
	return (0);
}
/*
int	ft_strlen(char *str)
{
	int	start;

	start = 0;
	while (str[start])
		start++;
	return (start);
}

int main() {
	char *tab[] = {"a", "b", "c", 0};
	printf("%d\n", ft_any(tab, &ft_strlen));
	return 0;
}*/