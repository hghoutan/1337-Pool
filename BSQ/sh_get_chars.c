/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sh_get_chars.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hghoutan <hghoutan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 20:41:13 by hghoutan          #+#    #+#             */
/*   Updated: 2024/09/17 21:13:36 by hghoutan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sh_bsq.h"

char	ft_get_char_void(char *argv)
{
	int		i;
	char	*buf;
	int		fd;
	char	v;

	i = 0;
	fd = open(argv, O_RDONLY);
	buf = malloc(80 * sizeof(char));
	if (buf == NULL)
		return (0);
	while (read(fd, &buf[i], 1))
	{
		if (buf[i] == '\n')
			break ;
		i++;
	}
	v = buf[i - 3];
	free(buf);
	close(fd);
	return (v);
}

char	ft_get_char_obst(char *argv)
{
	int		i;
	char	*buf;
	int		fd;
	char	o;

	i = 0;
	fd = open(argv, O_RDONLY);
	buf = malloc(80 * sizeof(char));
	if (buf == NULL)
		return (0);
	while (read(fd, &buf[i], 1))
	{
		if (buf[i] == '\n')
			break ;
		i++;
	}
	o = buf[i - 2];
	free(buf);
	close(fd);
	return (o);
}

char	ft_get_char_full(char *argv)
{
	int		i;
	char	*buf;
	int		fd;
	char	p;

	i = 0;
	fd = open(argv, O_RDONLY);
	buf = malloc(80 * sizeof(char));
	if (buf == NULL)
		return (0);
	while (read(fd, &buf[i], 1))
	{
		if (buf[i] == '\n')
			break ;
		i++;
	}
	p = buf[i - 1];
	free(buf);
	close(fd);
	return (p);
}
