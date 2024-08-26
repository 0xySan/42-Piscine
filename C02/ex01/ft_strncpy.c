/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 04:28:20 by oxy               #+#    #+#             */
/*   Updated: 2024/08/20 13:03:54 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	start;

	start = 0;
	while (src && src[start] && start < n)
	{
		dest[start] = src[start];
		++start;
	}
	while (start < n)
	{
		dest[start] = '\0';
		start++;
	}
	return (dest);
}
// #include <stdio.h>
// int main(){
// 	char test[] = "Hello";
// 	char test2[] = "World!";
// 	ft_strncpy(test,test2,10);
// 	printf("%s", test);
// }