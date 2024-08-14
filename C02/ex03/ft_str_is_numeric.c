/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 21:52:10 by oxy               #+#    #+#             */
/*   Updated: 2024/08/14 15:12:35 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	if (!str)
		return (1);
	str--;
	while (++str && *str)
	{
		if (*str < '0' || *str > '9')
			return (0);
	}
	return (1);
}

/*#include <stdio.h>
int main(){
	int test;

	test = ft_str_is_numeric("261511a0066");
	printf("%d", test);
}*/