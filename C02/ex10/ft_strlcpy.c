/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hghoutan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 13:00:44 by hghoutan          #+#    #+#             */
/*   Updated: 2024/09/01 13:32:25 by hghoutan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned	int	ft_strlcpy(char	*dst, char	*src,	unsigned	int	size)
{
	unsigned	int i;

	i = 0;
	while (i < size)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return size;
}

int	main(void)
{
	char	c[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+ud";
	char	buffer[100];
	
	ft_strlcpy(buffer, c, 70);
	printf("%s", buffer);
}
