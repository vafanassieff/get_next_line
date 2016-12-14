/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafanass <vafanass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 14:58:43 by vafanass          #+#    #+#             */
/*   Updated: 2016/12/14 17:24:43 by vafanass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft.h"
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	int		fd;
	char	*line;
	int		i;

	fd = open("test_read", O_RDONLY);
	while ((i = get_next_line(100000, &line)) > 0)
	{
		ft_putendl("LIGNE");
		ft_putendl(line);
		free(line);
	}
	return (1);
}
