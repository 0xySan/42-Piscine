
#include <stdlib.h>
#include <stdio.h>

int	ft_strstr_spe(char *str)
{
	int	start;
	int	temp;

	start = -1;
	while (str && str[++start])
	{
		temp = start;
		while (str[++temp])
		{
			if (str[temp] == str[start])
				return (1);
		}
	}
	return (0);
}

int	main(int argc, char **argv)
{
	printf("%d",ft_strstr_spe(argv[1]));
}
