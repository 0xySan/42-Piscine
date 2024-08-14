/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oxysan <oxysan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 04:28:20 by oxy               #+#    #+#             */
/*   Updated: 2024/08/14 03:23:30 by oxysan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

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
	unsigned int	len;

	len = ft_strlen(dest);
	v = 0;
	while (v < n && src[v])
	{
		dest[v] = src[v];
		v++;
	}
	while (v < n - 1)
	{
		dest[v] = '\0';
		v++;
	}
	if (n>=len)
		dest[v] = '\0';
    return dest;
}
/*
int main(){
	char test[] = "Hello";
	char test2[] = "World!";
	ft_strncpy(test,test2,1000);
	printf("%s", test);
}*/