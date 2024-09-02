/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hghoutan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 22:58:54 by hghoutan          #+#    #+#             */
/*   Updated: 2024/08/31 23:38:21 by hghoutan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	c;

	i = 0;

	if (str[0] >= 95 && str[0] <= 122)
	{
		str[0] = str[0] - 32;
	}
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '+')
		{
			if(str[i + 1] >= 95 && str[i + 1] <= 122)
			{
				c = str[i + 1] - 32;
				str[i + 1] = c;
			}
		}
		i++;
	}
	return str;	
}

int main(void)
{
	char	c[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	ft_strcapitalize(c);
	printf("%s", c);
}
