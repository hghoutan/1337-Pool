/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hghoutan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 22:08:57 by hghoutan          #+#    #+#             */
/*   Updated: 2024/08/31 22:52:46 by hghoutan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char	*str)
{
	int i;
	char c;

	i = 0;

	while (str[i] != '\0')
	{	
		if(str[i] >= 95 && str[i] <= 122)
		{
			c = str[i] - 32;
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
   	ft_strupcase(c);
	printf("%s", c);
}
