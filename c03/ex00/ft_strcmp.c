/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 22:24:17 by oxy               #+#    #+#             */
/*   Updated: 2024/08/12 11:23:56 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
/*include <stdio.h>
int main(){
	int t;
	char test[2];
	test[0] = 'A';
	test[1] = 'B';
	t = ft_strcmp("A",test);
	printf("%d", t);
}*/