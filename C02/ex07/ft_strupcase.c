/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 22:02:39 by oxy               #+#    #+#             */
/*   Updated: 2024/08/14 15:17:39 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	start;

	if (!str)
		return (str);
	start = 0;
	while (str && str[start])
	{
		if (str[start] >= 'a' && str[start] <= 'z')
			str[start] = str[start] - 32;
		start++;
	}
	return (str);
}

/*#include <stdio.h>
int main(int c, char **v){
	printf("%s", ft_strupcase(v[1]));
}*/