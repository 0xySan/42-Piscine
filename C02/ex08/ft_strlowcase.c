/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 22:22:13 by oxy               #+#    #+#             */
/*   Updated: 2024/08/14 15:17:35 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	start;

	if (!str)
		return (str);
	start = 0;
	while (str && str[start])
	{
		if (str[start] >= 'A' && str[start] <= 'Z')
			str[start] = str[start] + 32;
		start++;
	}
	return (str);
}
//#include <stdio.h>
//int main(int c, char **v){
//    printf("%s", ft_strupcase(v[1]));
//}