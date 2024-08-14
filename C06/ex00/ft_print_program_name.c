/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oxysan <oxysan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 22:03:54 by oxysan            #+#    #+#             */
/*   Updated: 2024/08/14 22:15:17 by oxysan           ###   ########.fr       */
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
    int len;

    (void)n;
    len = ft_strlen(v[0]);
    write(1,v[0],len);
    write(1,"\n",1);
	return 0;
}