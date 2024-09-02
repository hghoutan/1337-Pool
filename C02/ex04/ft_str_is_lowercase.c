/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hghoutan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 21:18:57 by hghoutan          #+#    #+#             */
/*   Updated: 2024/08/31 21:50:17 by hghoutan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char	*str)
{
	int		i;
	char	*c;

	i = 0;
	c = str;
	while(c[i] != '\0')
	{
		if(c[i] < 97 || c[i] > 122)
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
	c	= "Acdsbyvds";
	m = ft_str_is_lowercase(c);
	printf("%d", m);
}
