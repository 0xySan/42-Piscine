/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 11:44:15 by etaquet           #+#    #+#             */
/*   Updated: 2024/08/21 11:45:16 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	start;

	if (!s1 || !s2)
	{
		return (0);
	}
	start = -1;
	while (s1[++start])
	{
		if (s1[start] != s2[start])
		{
			return (s1[start] - s2[start]);
		}
	}
	return (s1[start] - s2[start]);
}
