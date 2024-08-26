/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 21:20:25 by etaquet           #+#    #+#             */
/*   Updated: 2024/08/24 14:47:24 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_foreach(int *tab, int length, void(*f)(int))
{
    int i;

    i = 0;
    while (i < length)
    {
        f(tab[i]);
        i++;
    }
}

// void ft_putnbr(int n)
// {
//     printf("%d\n", n);
// }

// void ft_putchar(int c)
// {
//     printf(".%d.\n", c);
// }

// int main()
// {
//     int tab[5] = {1, 2, 3, 4, 5};
//     ft_foreach(tab, 5, &ft_putnbr);
//     ft_foreach(tab, 5, &ft_putchar);
//     return 0;
// }