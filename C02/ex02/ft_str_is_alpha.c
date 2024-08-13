/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oxy <oxy@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 21:44:42 by oxy               #+#    #+#             */
/*   Updated: 2024/08/11 21:45:51 by oxy              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	if(!str){
		return 1;
	}
	str--;
	while(++str && *str){
		if((*str<'a' || *str >'z') && (*str<'A' || *str>'Z')){
			return 0;
		}
	}
	return 1;
}
/*
#include <stdio.h>
int main(){
	int test;

	test = ft_str_is_alpha("");
	printf("%d", test);
}*/