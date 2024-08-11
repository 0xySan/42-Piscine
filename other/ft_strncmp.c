/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oxy <oxy@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 04:28:20 by oxy               #+#    #+#             */
/*   Updated: 2024/08/08 20:48:06 by oxy              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if(!s1 || !s2){
		return 0;
	}
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
#include <stdio.h>
int main(){
	int t;
	char test[2];
	test[0] = 'A';
	test[1] = 0;
	t = ft_strncmp("A",test,100000);
	printf("%d", t);
}