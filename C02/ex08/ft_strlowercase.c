/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowercase.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hghoutan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 22:53:50 by hghoutan          #+#    #+#             */
/*   Updated: 2024/08/31 22:55:51 by hghoutan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char	*str)
{
	int i;
	char c;

	i = 0;

	while (str[i] != '\0')
	{
		if(str[i] >= 65 && str[i] <= 90)
		{
			c = str[i] + 32;
			str[i] = c;
		}
		i++;
	}
	str[i] = '\0';
	return str;
}

int main(void)
{
	char	c[] = "Hicha990 GHOUTANI";
   	ft_strlowcase(c);
	printf("%s", c);
}
