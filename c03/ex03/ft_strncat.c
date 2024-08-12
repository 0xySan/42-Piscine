/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 22:38:46 by oxy               #+#    #+#             */
/*   Updated: 2024/08/12 11:43:19 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	v;

	v = 0;
	while (v < n && src[v])
	{
		dest[v] = src[v];
		v++;
	}
	dest[v] = '\0';
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	start;

	if (!src)
	{
		return (dest);
	}
	start = 0;
	while (dest && dest[start])
	{
		start++;
	}
	ft_strncpy(&dest[start], src, nb);
	return (dest);
}
/*#include <stdio.h>
int main(int n, char **v){
	n = 1;
	char test[1000] = "Hello World";
	ft_strncat(test,v[1],100);
	printf("%s", test);
}*/