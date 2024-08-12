/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 23:06:44 by oxy               #+#    #+#             */
/*   Updated: 2024/08/12 14:19:49 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void	ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	v;

	if (!src)
	{
		return ;
	}
	v = 0;
	while (v < n && src[v])
	{
		dest[v] = src[v];
		v++;
	}
	dest[v] = '\0';
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	start;

	start = 0;
	while (dest && dest[start])
	{
		start++;
	}
	ft_strncpy(&dest[start], src, size);
	return (ft_strlen(dest));
}
/*#include <stdio.h>
int main(int n, char **v){
	n = 1;
	char test[1000] = "Hello World";
	unsigned int test2;
	test2 = ft_strlcat(test,v[1],100);
	printf("%d\n", test2);
	printf("%s", test);
}*/