/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 04:28:20 by oxy               #+#    #+#             */
/*   Updated: 2024/08/12 13:46:40 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	v;

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
	dest[v] = '\0';
}
/*
int main(){
	char test[] = "Hello";
	char test2[] = "World!";
	ft_strncpy(test,test2,1000);
	printf("%s", test);
}*/