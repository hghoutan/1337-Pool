/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hghoutan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 08:55:35 by hghoutan          #+#    #+#             */
/*   Updated: 2024/08/31 10:47:27 by hghoutan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_nbr(int n)
{
	char	c;

	if (n > 9)
	{
		print_nbr(n / 10);
	}
	c = (n % 10) + '0';
	write(1, &c, 1);
}

void	ft_strlen(char *str)
{
	int		i;
	char	*c;

	i = 0;
	c = &*str;
	while (c[i])
	{
		i++;
	}
	print_nbr(i);
}
