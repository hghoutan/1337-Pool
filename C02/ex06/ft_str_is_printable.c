/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hghoutan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 21:56:13 by hghoutan          #+#    #+#             */
/*   Updated: 2024/08/31 22:07:35 by hghoutan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char	*str)
{
	int		i;
	char	*c;

	i = 0;
	c = str;
	if (c[0] == '\0')
	{
		return 1;
	}
	while(c[i] != '\0')
	{
		if(c[i] < 33 || c[i] > 126)
		{
			return 0;
		}
		i++;
	}
	return 1;
}
int main(void)
{
	char	*c;
	int m;
	c	= "Acd|sb0ohdydÙs";
	m = ft_str_is_printable(c);
	printf("%d", m);
}

