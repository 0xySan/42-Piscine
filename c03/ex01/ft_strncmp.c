/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 04:28:20 by oxy               #+#    #+#             */
/*   Updated: 2024/08/12 11:41:05 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	start;

	if (!s1 || !s2)
	{
		return (0);
	}
	start = -1;
	while (++start < n - 1 && s1[start])
	{
		if (s1[start] != s2[start])
		{
			return (s1[start] - s2[start]);
		}
	}
	return (s1[start] - s2[start]);
}
/*#include <stdio.h>
int main(){
	int t;
	char test[2];
	test[0] = 'A';
	test[1] = 'B';
	t = ft_strncmp("A",test,100000);
	printf("%d", t);
}*/