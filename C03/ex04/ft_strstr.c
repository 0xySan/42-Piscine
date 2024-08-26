/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 22:45:08 by oxy               #+#    #+#             */
/*   Updated: 2024/08/23 21:01:58 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	val;

	val = 0;
	while (str[val])
	{
		val++;
	}
	return (val);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	start;

	if (!s1 || !s2)
	{
		return (0);
	}
	start = -1;
	while (++start < n - 1 && s1[start])
	{
		if (s1[start] != s2[start])
		{
			return (s1[start] - s2[start]);
		}
	}
	return (s1[start] - s2[start]);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	len;
	int	i;

	len = ft_strlen(to_find);
	if (len == 0)
	{
		return (str);
	}
	i = 0;
	while (str[i])
	{
		if (ft_strncmp(&str[i], to_find, len) == 0)
		{
			return (&str[i]);
		}
		i++;
	}
	return (0);
}
/*#include <stdio.h>
#include <string.h>
int main(int n, char **v){
	char *test = "esegethansegessg";
	printf("%s\n%s", ft_strstr(test,v[1]), test);
}*/