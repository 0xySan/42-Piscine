/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oxy <oxy@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 04:28:20 by oxy               #+#    #+#             */
/*   Updated: 2024/08/11 22:39:06 by oxy              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	if(!dest || !src){
		return dest;
	}
	unsigned int v;

	v = 0;
	while(v < n && src[v])
	{
		dest[v] = src[v];
		v++;
	}
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