/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 21:41:13 by oxy               #+#    #+#             */
/*   Updated: 2024/08/23 20:57:15 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temporary;

	temporary = *a / *b;
	*b = *a % *b;
	*a = temporary;
}

// int main()
// {
// 	int a = 10;
// 	int b = 3;
// 	ft_ultimate_div_mod(&a, &b);
// 	printf("a = %d\nb = %d", a, b);
// 	return (0);
// }