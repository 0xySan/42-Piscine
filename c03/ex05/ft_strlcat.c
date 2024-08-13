/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 16:43:55 by etaquet           #+#    #+#             */
/*   Updated: 2024/08/13 14:13:21 by etaquet          ###   ########.fr       */
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
	unsigned int	start;

	start = 0;
	while (dest && dest[start])
	{
		start++;
	}
	if (start >= size)
	{
		return (size + ft_strlen(src));
	}
	ft_strncpy(&dest[start], src, size - start - 1);
	return (start + ft_strlen(src));
}
/*#include <stdio.h>
#include <bsd/string.h>
int main(int n, char **v){
	(void)n;
	char test[1000] = "Hello World";
	unsigned int test2;
	test2 = strlcat(test,v[1],100);
	printf("%s\n%d\n", test, test2);
	char test3[1000] = "Hello World";
	test2 = ft_strlcat(test3,v[1],100);
	printf("%s\n%d", test3, test2);
}*/