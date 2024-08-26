/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 21:21:44 by oxysan            #+#    #+#             */
/*   Updated: 2024/08/26 11:13:57 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);
int		ft_check_base(char *str, char *base, int index);
int		ft_atoi_base(char *str, char *base);
int		ft_count_nb(int nb, int len);
char	*ft_calcnbr_base(int nb, int signe, char *base, int start);

char	*ft_putnbr_base(int nb, char *base)
{
	int	blen;
	int	signe;
	int	start;

	signe = 1;
	start = -1;
	blen = ft_strlen(base);
	if (blen <= 1)
		return (0);
	if (nb < 0)
	{
		signe = -1;
		start = 0;
	}
	return (ft_calcnbr_base(nb, signe, base, start));
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nb;
	char	*value;

	if (!nbr)
		return (0);
	if (ft_strlen(base_from) <= 1 || ft_strlen(base_to) <= 1)
		return (0);
	nb = ft_atoi_base(nbr, base_from);
	value = ft_putnbr_base(nb, base_to);
	return (value);
}

// #include <stdio.h>
// int main()
// {
// 	printf("%s", ft_convert_base(" ---+2147483648", "012", "0123456789"));
// }