/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oxy <oxy@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 22:27:53 by oxy               #+#    #+#             */
/*   Updated: 2024/08/12 22:42:55 by oxy              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strcpy(char *dest, char *src)
{
	int	v;

	v = 0;
	while (src[v])
	{
		dest[v] = src[v];
		v++;
	}
	dest[v] = '\0';
}

char	*ft_strcat(char *dest, char *src)
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
	ft_strcpy(&dest[start], src);
	return (dest);
}
/*#include <stdio.h>
int main(int n, char **v){
	n = 1;
	char test[1000] = "Hello World";
	ft_strcat(test,v[1]);
	printf("%s", test);
}*/