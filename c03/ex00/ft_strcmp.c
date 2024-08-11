/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oxy <oxy@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 22:24:17 by oxy               #+#    #+#             */
/*   Updated: 2024/08/11 22:27:04 by oxy              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	if(!s1 || !s2){
		return 0;
	}
    int start;
    start = -1;
	while(s1[++start]){
		if(s1[start] != s2[start])
		{
			return s1[start]-s2[start];
		}
	}
	return s1[start]-s2[start];
}
#include <stdio.h>
int main(){
	int t;
	char test[2];
	test[0] = 'A';
	test[1] = 'B';
	t = ft_strcmp("A",test);
	printf("%d", t);
}