/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dt_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hghoutan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 11:51:29 by hghoutan          #+#    #+#             */
/*   Updated: 2024/09/02 21:41:09 by hghoutan         ###   ########.fr       */
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

char	*ft_strcat(char	*dest, char	*src)
{
	int n;
	int i;

	n = arr_size(dest);
	i = 0;
	while (src[i])
	{
		dest[n] = src[i];
		i++;
		n++;
	}
	dest[n] = '\0';
	return dest;
}

int main() {
    char ch[] = "Hey how are you";
    char chh[] = "fiuwdsf dsffdd";

    char	*tt;
	tt  = ft_strcat(ch, chh);

	printf("%s", tt);

    return 0;
}
