/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hghoutan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 08:52:38 by hghoutan          #+#    #+#             */
/*   Updated: 2024/09/10 09:18:36 by hghoutan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		src_len;
	char	*cpy;
	int		i;

	src_len = ft_strlen(src);
	cpy = (char *)malloc(src_len * sizeof(src[0]));
	i = 0;
	while (src[i])
	{
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
/*int main()
{
	char	*src = "Hey how are you";
	char	*cpy = ft_strdup(src);

	printf("%s", cpy);
}*/
