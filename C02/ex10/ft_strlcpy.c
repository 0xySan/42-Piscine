/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oxy <oxy@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 11:54:08 by etaquet           #+#    #+#             */
/*   Updated: 2024/08/13 20:14:30 by oxy              ###   ########.fr       */
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

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	v;

	v = 0;
	while (src && src[v] && --size)
	{
		dest[v] = src[v];
		v++;
	}
	dest[v] = '\0';
	return (ft_strlen(src));
}

//#include <stdio.h>
//#include <bsd/string.h>
//
//int main()
//{
//    char test[100] = "Hello World";
//    unsigned int test2;
//    test2 = strlcpy(test,"Hello World",1);
//    printf("%s\n%d\n", test, test2);
//    char test3[100] = "Hello World";
//    test2 = ft_strlcpy(test3,"Hello World",1);
//    printf("%s\n%d\n", test3, test2);
//}