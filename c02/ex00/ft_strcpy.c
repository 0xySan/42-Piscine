/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oxy <oxy@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 20:58:19 by oxy               #+#    #+#             */
/*   Updated: 2024/08/08 21:40:53 by oxy              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	if(!dest || !src){
		return dest;
	}
	int v;

	v = 0;
	while(src[v])
	{
		dest[v] = src[v];
		v++;
	}
	dest[v] = '\0';
	return dest;
}

int main(int c, char **v){
	char test[1000];
	ft_strcpy(test,v[1]);
	printf("%s", test);
}