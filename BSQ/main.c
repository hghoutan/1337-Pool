/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hghoutan <hghoutan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 16:41:49 by hghoutan          #+#    #+#             */
/*   Updated: 2024/09/17 21:13:36 by hghoutan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sh_bsq.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char	**ft_fill_map(t_BSQ_Map map)
{
	int	i;
	int	j;
	int	length;
	int	pos;

	length = ft_biggest_square(map);
	pos = ft_find_position_square(map);
	i = (pos / (map.c - 1)) - length + 1;
	while (i < (pos / (map.c - 1)) + 1)
	{
		j = (pos % (map.c - 1)) - length + 1;
		while (j < (pos % (map.c - 1)) + 1)
		{
			map.map[i][j] = map.p;
			j++;
		}
		i++;
	}
	return (map.map);
}

void	ft_print_solution(int i, char **argv)
{
	int			j;
	int			fd;
	t_BSQ_Map	map;

	map.map = NULL;
	j = 0;
	map.o = ft_get_char_obst(argv[i]);
	map.p = ft_get_char_full(argv[i]);
	map.c = ft_get_number_columns(argv[i]);
	map.l = ft_get_number_lines(argv[i]);
	fd = open(argv[i], O_RDONLY);
	if (fd >= 0)
	{
		map.map = ft_read_file(argv[i]);
	}
	ft_fill_map(map);
	while (j < map.l)
	{
		ft_putstr(map.map[j]);
		ft_putchar('\n');
		j++;
	}
	free(map.map);
	close(fd);
}

void	ft_hanlde_stdin(void)
{
	int		fd;
	char	*buffer;
	char	*av;

	av = "maps/map_input.txt";
	fd = open("maps/map_input.txt", O_RDWR | O_CREAT, 0666);
	buffer = sh_stdin();
	write(fd, buffer, strlen(buffer));
	if (ft_verif_map("maps/map_input.txt") == 1)
	{
		printf("ok");
	}
	else
	{
		ft_print_solution(0, &av);
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			if ((ft_verif_map(argv[i])) != 1)
				ft_print_solution(i, argv);
			i++;
		}
	}
	else
	{
		ft_hanlde_stdin();
	}
	return (0);
}
