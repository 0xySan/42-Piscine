/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oxysan <oxysan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 16:19:35 by oxy               #+#    #+#             */
/*   Updated: 2024/08/14 03:26:53 by oxysan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    check_is_letter(char *str, int index)
{
    index++;
	if (str[index]>='a' && str[index]<='z')
        str[index] = str[index]-32;
}

void    ft_strlowcase(char *str)
{
    if(!str){
        return;
    }

    int start;

    start = 0;

    while(str && str[start]){
        if(str[start]>='A' && str[start] <='Z'){
            str[start] = str[start]+32;
        }
        start++;
    }
}

char    *ft_strcapitalize(char *str)
{
	if(!str)
		return str;

	int start;

	start = 0;
    ft_strlowcase(str);
    check_is_letter(str,-1);

    while (str && str[start])
    {
        if (!((str[start] >= '0' && str[start] <= '9') || (str[start] >= 'a' &&
        str[start] <= 'z') || (str[start] >= 'A' && str[start] <= 'Z')))
        {
            check_is_letter(str, start);
        }
        start++;
    }
    return str;
}

//int main(int n, char **v){
//    ft_strcapitalize(v[1]);
//    printf("%s", v[1]);
//}