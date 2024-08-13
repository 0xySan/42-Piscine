/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oxy <oxy@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 22:22:13 by oxy               #+#    #+#             */
/*   Updated: 2024/08/08 22:22:42 by oxy              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strlowcase(char *str)
{
    if(!str){
        return str;
    }

    int start;

    start = 0;

    while(str && str[start]){
        if(str[start]>='A' && str[start] <='Z'){
            str[start] = str[start]+32;
        }
        start++;
    }
    return str;
}
#include <stdio.h>
int main(int c, char **v){
    printf("%s", ft_strupcase(v[1]));
}