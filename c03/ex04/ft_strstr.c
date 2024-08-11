/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oxy <oxy@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 22:45:08 by oxy               #+#    #+#             */
/*   Updated: 2024/08/11 23:01:22 by oxy              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
    int start;
    start = -1;
	while(++start < n-1 && s1[start]){
		if(s1[start] != s2[start])
		{
			return s1[start]-s2[start];
		}
	}
	return s1[start]-s2[start];
}

char *ft_strstr(char *str, char *to_find)
{
    if(!str || !to_find){
		return 0;
	}

    int len;

    len = ft_strlen(to_find);

    while (*str)
    {
        if (ft_strncmp(str, to_find, len) == 0)
        {
            return str;
        }
        str++;
    }
    return 0;
}

int main(){
    printf("%s", ft_strstr("cacafesf0215effec?;:;:acqegecacagsgcacaesgesgesgesgcacaca","cacaca"));
}