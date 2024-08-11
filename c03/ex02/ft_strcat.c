/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oxy <oxy@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 22:27:53 by oxy               #+#    #+#             */
/*   Updated: 2024/08/11 22:39:43 by oxy              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
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

char *ft_strcat(char *dest, char *src)
{
    if(!src){
        return dest;
    }
    int start;

    start=0;

    while (dest && dest[start])
    {
        start++;
    }
    ft_strcpy(&dest[start], src);
    return dest;
}
#include <stdio.h>
int main(int c, char **v){
	char test[1000] = "Hello World";
	ft_strcat(test,v[1]);
	printf("%s", test);
}