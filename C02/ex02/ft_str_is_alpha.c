/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hghoutan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 19:29:05 by hghoutan          #+#    #+#             */
/*   Updated: 2024/08/31 20:32:52 by hghoutan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{	
	if((*str >= 46 && *str<=90) || (*str >= 97 && *str <=122))
	{
		return 1;
	}
	return 0;
}

int main(void)
{
	char	c;
	c = '|';
	int m = ft_str_is_alpha(&c);
	printf("%d", m);
}
