/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oxysan <oxysan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 22:14:16 by oxysan            #+#    #+#             */
/*   Updated: 2024/08/14 22:16:22 by oxysan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

int main(int n, char **v)
{
    while(--n > 0)
    {
        write(1,v[n],ft_strlen(v[n]));
        write(1,"\n",1);
    }
    return 0;
}