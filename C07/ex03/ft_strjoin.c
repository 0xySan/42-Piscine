/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 18:14:40 by oxysan            #+#    #+#             */
/*   Updated: 2024/08/26 12:30:06 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	val;

	val = 0;
	while (str[val])
		val++;
	return (val);
}

void	ft_strcpy(char *dest, char *src)
{
	int	v;

	v = 0;
	while (src[v])
	{
		dest[v] = src[v];
		v++;
	}
	dest[v] = '\0';
}

char	*ft_strcat(char *dest, char *src)
{
	int	start;

	if (!src)
		return (dest);
	start = 0;
	while (dest && dest[start])
		start++;
	ft_strcpy(&dest[start], src);
	return (dest);
}

int	calc_len(int size, char **strs, char *sep)
{
	int	len;
	int	start;
	int	ls;

	start = 0;
	len = 0;
	ls = ft_strlen(sep);
	while (start < size)
		len += ft_strlen(strs[start++]);
	len += (ls * (size - 1));
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		start;

	result = malloc(sizeof(char) * (calc_len(size, strs, sep) + 1));
	result[0] = '\0';
	if (size == 0)
		return (result);
	start = -1;
	while (++start < size)
	{
		ft_strcat(result, strs[start]);
		if (start < size - 1)
			ft_strcat(result, sep);
	}
	return (result);
}

// #include <stdio.h>
// int main(int n, char **v)
// {
// 	printf("%s", ft_strjoin(n,v, ", , "));
// }