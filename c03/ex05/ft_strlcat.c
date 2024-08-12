/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 23:06:44 by oxy               #+#    #+#             */
/*   Updated: 2024/08/12 11:45:57 by etaquet          ###   ########.fr       */
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

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	v;

	v = 0;
	while (v < n && src[v])
	{
		dest[v] = src[v];
		v++;
	}
	dest[v] = '\0';
	return (dest);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	start;

	if (!dest)
	{
		return (0);
	}
	if (!src)
	{
		return (ft_strlen(dest));
	}
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
	printf("%d", test2);
}*/