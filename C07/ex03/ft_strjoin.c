/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oxysan <oxysan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 18:14:40 by oxysan            #+#    #+#             */
/*   Updated: 2024/08/15 19:01:22 by oxysan           ###   ########.fr       */
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
	{
		return (dest);
	}
	start = 0;
	while (dest && dest[start])
	{
		start++;
	}
	ft_strcpy(&dest[start], src);
	return (dest);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
    int start;
    char *result;
    int len;
    int len2;

    len = 0;
    len2 = ft_strlen(sep);
    start=-1;
    while (++start < size)
        len+=ft_strlen(strs[start]);
    result = malloc(sizeof(char) * len + sizeof(char) * (len2*size) + 1);
    result[0] = '\0';
    start=-1;
    while (++start < size)
    {
        ft_strcat(result,strs[start]);
        if ( start < size-1)
            ft_strcat(result,sep);
    }
    return result;
}