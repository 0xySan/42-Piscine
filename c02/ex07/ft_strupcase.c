/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oxy <oxy@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 22:02:39 by oxy               #+#    #+#             */
/*   Updated: 2024/08/11 21:44:54 by oxy              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strupcase(char *str)
{
	if(!str){
		return str;
	}

	int start;

	start = 0;

	while(str && str[start]){
		if(str[start]>='a' && str[start] <='z'){
			str[start] = str[start]-32;
		}
		start++;
	}
	return str;
}

/*#include <stdio.h>
int main(int c, char **v){
	printf("%s", ft_strupcase(v[1]));
}*/