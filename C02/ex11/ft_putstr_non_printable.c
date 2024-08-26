/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 12:00:29 by etaquet           #+#    #+#             */
/*   Updated: 2024/08/26 13:38:45 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_calcutate_hexa(char *str)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	write(1, "\\", 1);
	write(1, &hexa[*str / 16], 1);
	write(1, &hexa[*str % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	if (!str)
	{
		return ;
	}
	str--;
	while (++str && *str)
	{
		if (*str >= 0 && *str <= 31)
		{
			ft_calcutate_hexa(str);
			str++;
		}
		write(1, str, 1);
	}
}

// int main()
// {
// 	char *str = "Coucou\ntu vas bien ?";
// 	ft_putstr_non_printable(str);
// }
