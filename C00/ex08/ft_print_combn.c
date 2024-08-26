
#include <stdio.h>

void	print_combn_recursive(int n, int i, int index, int combination)
{
	if (index == n)
	{
		char buffer[3];
		buffer[0] = combination / 10 + '0';
		buffer[1] = combination % 10 + '0';
		buffer[2] = '\0';
		write(1, buffer, 2);
		if (combination != 99 - n + 1)
			write(1, ", ", 2);
		return ;
	}

	while (i <= 9)
	{
		print_combn_recursive(n, i + 1, index + 1, combination * 10 + i);
		i++;
	}
}

void	ft_print_combn(int n)
{
	print_combn_recursive(n, 0, 0, 0);
}
