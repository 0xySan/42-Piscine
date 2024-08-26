/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etaquet <etaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 13:35:43 by etaquet           #+#    #+#             */
/*   Updated: 2024/08/26 13:35:54 by etaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int	main(int n, char **v)
{
	int			fd;
	int			len;
	long long	buff;

	len = 1;
	fd = open(v[1], O_RDONLY);
	while (len > 0)
	{
		len = read(fd, &buff, sizeof(long long));
		write(1, &buff, len);
	}
	close(fd);
}
