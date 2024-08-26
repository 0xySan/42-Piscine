/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 14:44:56 by etaquet           #+#    #+#             */
/*   Updated: 2024/08/26 16:17:32 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void plus_a_b(int a, int b);
void minus_a_b(int a, int b);
void times_a_b(int a, int b);

void putnbr(int nb)
{
    char c;

    if (nb < 0)
    {
        write(1, "-", 1);
        nb *= -1;
    }
    if (nb >= 10)
    {
        putnbr(nb / 10);
        putnbr(nb % 10);
    }
    else
    {
        c = nb + '0';
        write(1, &c, 1);
    }
}

int	ft_atoi(char *str)
{
	int	start;
	int	signe;
	int	value;

	signe = 1;
	start = 0;
	while (str[start] == ' ' || (str[start] >= '\t' && str[start] <= '\r'))
		start++;
	value = 0;
	while ((str[start] == '+' || str[start] == '-'))
	{
		if (str[start] == '-')
			signe *= -1;
		start++;
	}
	while (str[start] >= '0' && str[start] <= '9')
		value = value * 10 + str[start++] - '0';
	return (value * signe);
}

void div_a_b(int a, int b)
{
    if (b == 0)
    {
        write(1, "Stop : division by zero", 24);
        return;
    }
    putnbr(a / b);
}


void mod_a_b(int a, int b)
{
    if (b == 0)
    {
        write(1, "Stop : modulo by zero", 22);
        return;
    }
    putnbr(a % b);
}

int main(int argc, char *argv[])
{
    void (*f[127])(int,int);
    if (argc != 4)
    {
        return 0;
    }
    f['/'] = &div_a_b;
    f['%'] = &mod_a_b;
    f['+'] = &plus_a_b;
    f['-'] = &minus_a_b;
    f['*'] = &times_a_b;
    int a = ft_atoi(argv[1]);
    int b = ft_atoi(argv[3]);
    if(argv[2][0] == '/' || argv[2][0] == '%' || argv[2][0] == '+' || argv[2][0] == '-' || argv[2][0] == '*')
        f[(int)argv[2][0]](a, b);
    else
        write(1,"0",1);
    write(1, "\n", 1);
}