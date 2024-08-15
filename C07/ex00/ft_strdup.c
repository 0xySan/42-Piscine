/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oxysan <oxysan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 14:53:10 by oxysan            #+#    #+#             */
/*   Updated: 2024/08/15 18:59:56 by oxysan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

char    *ft_strdup(char *src)
{
    char *dest;
    int len;
    int start;

    if (!src)
        return 0;

    len = ft_strlen(src);
    dest = malloc(sizeof(char) * (len+1));
    if (!dest)
        return 0;
    start = -1;
    while(src[++start])
        dest[start] = src[start];
    dest[start] = '\0';
    return dest;
}

#include <stdio.h>
int main()
{
    printf("%s", ft_strdup("Hello World!"));
}