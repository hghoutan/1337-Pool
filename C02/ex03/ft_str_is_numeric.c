/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hghoutan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 20:26:32 by hghoutan          #+#    #+#             */
/*   Updated: 2024/08/31 21:17:31 by hghoutan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char	*str)
{
	int		i;
	char	*c;
	
	i = 0;
	c = str;
	while(c[i] != '\0')
	{
		if(c[i] < 48 || c[i] > 57)
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
	c	= "43h435435";
	m = ft_str_is_numeric(c);
	printf("%d", m);
}
