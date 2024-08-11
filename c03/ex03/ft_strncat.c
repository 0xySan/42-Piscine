/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oxy <oxy@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 22:38:46 by oxy               #+#    #+#             */
/*   Updated: 2024/08/11 22:41:04 by oxy              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
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

char *ft_strncat(char *dest, char *src, unsigned int nb)
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
    ft_strncpy(&dest[start], src, nb);
    return dest;
}
#include <stdio.h>
int main(int c, char **v){
	char test[1000] = "Hello World";
	ft_strncat(test,v[1],100);
	printf("%s", test);
}