/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hghoutan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 21:51:27 by hghoutan          #+#    #+#             */
/*   Updated: 2024/08/31 21:55:14 by hghoutan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_str_is_uppercase(char	*str)
{
	int		i;
	char	*c;

	i = 0;
	c = str;
	while(c[i] != '\0')
	{
		if(c[i] < 65 || c[i] > 90)
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
	c	= "";
	m = ft_str_is_uppercase(c);
	printf("%d", m);
}
