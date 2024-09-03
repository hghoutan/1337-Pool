/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.C                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hghoutan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 09:47:20 by hghoutan          #+#    #+#             */
/*   Updated: 2024/09/02 11:49:35 by hghoutan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char	*s1, char	*s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while(i < n)
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
	return s1[n] - s2[n];
}
