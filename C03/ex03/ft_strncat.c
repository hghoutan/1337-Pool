/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hghoutan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 12:50:27 by hghoutan          #+#    #+#             */
/*   Updated: 2024/09/02 13:05:33 by hghoutan         ###   ########.fr       */
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

char	*ft_strncat(char	*dest, char	*src, unsigned int nb)
{
	int n;
	unsigned int i;

	n = arr_size(dest);
	i = 0;
	while (i < nb)
	{
		dest[n] = src[i];
		i++;
		n++;
	}
	dest[n] = '\0';
	return dest;
}
