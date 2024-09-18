/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sh_stdin.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hghoutan <hghoutan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 20:51:30 by hghoutan          #+#    #+#             */
/*   Updated: 2024/09/17 20:51:31 by hghoutan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		i++;
	}
	return (i);
}

char	*buffer_duplicate(char *buffer)
{
	char	*bt;
	int		i;

	bt = (char *)malloc(sizeof(char) * (2 + ft_strlen(buffer)));
	i = 0;
	while (buffer[i])
	{
		bt[i] = buffer[i];
		i++;
	}
	bt[i] = '\0';
	return (bt);
}

void	buffer_pusher(char **buffer, char c)
{
	char	*bt;
	int		i;

	if (*buffer == 0)
	{
		*buffer = (char *)malloc(sizeof(char) * 2);
		**buffer = c;
		*(*buffer + 1) = 0;
	}
	else
	{
		bt = buffer_duplicate(*buffer);
		i = ft_strlen(bt);
		bt[i] = c;
		bt[i + 1] = 0;
		free(*buffer);
		*buffer = bt;
	}
}

char	*sh_stdin(void)
{
	char	c;
	char	*buff;

	buff = 0;
	while (read(0, &c, 1))
		buffer_pusher(&buff, c);
	return (buff);
}
