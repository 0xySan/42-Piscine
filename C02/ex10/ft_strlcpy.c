/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oxysan <oxysan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 11:54:08 by etaquet           #+#    #+#             */
/*   Updated: 2024/08/14 23:10:50 by oxysan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	val;

	val = 0;
	while (str[val])
	{
		val++;
	}
	return (val);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	v;
	unsigned int n;
	unsigned int len;
	
	len = ft_strlen(dest);
	n = size-1;
	v = 0;
	while (src && src[v] && --size)
	{
		dest[v] = src[v];
		v++;
	}
	while (v < n)
	{
		dest[v] = '\0';
		v++;
	}
	if (n >= len)
		dest[v] = '\0';
	return (ft_strlen(src));
}

/*#include <stdio.h>
#include <bsd/string.h>

int main()
{
    char test[100] = "Hello World";
    unsigned int test2;
    test2 = strlcpy(test,"Hello World",1);
    printf("%s\n%d\n", test, test2);
    char test3[100] = "Hello World";
    test2 = ft_strlcpy(test3,"Hello World",1);
    printf("%s\n%d\n", test3, test2);
}*/