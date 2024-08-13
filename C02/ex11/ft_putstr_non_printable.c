/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oxy <oxy@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 12:00:29 by etaquet           #+#    #+#             */
/*   Updated: 2024/08/12 21:24:24 by oxy              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_calcutate_hexa(char *str, int index)
{
    char* strHex;
    
	
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
	}
}
