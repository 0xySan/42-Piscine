/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oxy <oxy@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 22:49:20 by oxy               #+#    #+#             */
/*   Updated: 2024/08/12 23:57:33 by oxy              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_space(char *str)
{
    int start;

    start=0;
    while(str[start] == ' ' || str[start] == '\t')
    {
        start++;
    }
    return start;
}

int ft_atoi(char *str)
{
    int start;
    int signe;
    int value;

    signe = 1;
    start = ft_space(str);
    value = 0;
    while((str[start] == '+' || str[start] == '-'))
    {
        if(str[start]=='-')
        {
            signe*=-1;
        }
        start++;
    }
    while(str[start] >= '0' && str[start] <= '9')
    {
        value=value*10+str[start++]-'0';
    }
    return value*signe;
}

int main(int argc, char *argv[])
{
    printf("%d", ft_atoi(argv[1]));
    return 0;
}
