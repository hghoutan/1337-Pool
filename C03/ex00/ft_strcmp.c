/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hghoutan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 08:55:01 by hghoutan          #+#    #+#             */
/*   Updated: 2024/09/02 11:24:18 by hghoutan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int arr_size(char	*s)
{
	int n;

	n = 0;
	while (s[n])
	{
		n++;
	}
	return n;
}

int	ft_strcmp(char	*s1, char	*s2)
{
	int i;
	char * cs;
	char	*cb;
	
	i = 0;
	if (arr_size(s1) > arr_size(s2))
	{
		cs = s2;
		cb = s1;
	}
	else
	{
		cs = s1;
		cb = s2;
	}
	while(cs[i])
	{

		if(s1[i] > s2[i])
		{
			return s1[i] - s2[i];
		}
		if(s1[i] < s2[i])
		{
			return s1[i] - s2[i];
		}
		i++;
	}
	return s1[i] - s2[i];
}

