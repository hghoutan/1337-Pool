/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hghoutan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 19:11:12 by hghoutan          #+#    #+#             */
/*   Updated: 2024/09/01 13:16:24 by hghoutan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char	*src, unsigned int n)
{
	unsigned int count;

	count = 0;
	while (count < n)
	{
		dest[count] = src[count];
		count++;
	}
	//dest[n] = '\0';
	return (dest);
}

int	main(void)
{
	char	str[] = "Hey World";
	char	str1[] = "Welcome";
	
	ft_strncpy(str1, str, 3);

	printf("%s", str1);

	return 0;
}
