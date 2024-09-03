/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hghoutan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 20:17:31 by hghoutan          #+#    #+#             */
/*   Updated: 2024/09/02 21:31:35 by hghoutan         ###   ########.fr       */
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

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	int i;
	int ii;

	i = size;
	ii = 0;
	printf("array size is: %d\n", arr_size(dest));
	while(src[ii])
	{	
		dest[i] = src[ii];
		//printf("index is: %d", i);
		//printf("%c \n", dest[i]);
		//printf("%s", dest);
		//src++;
		i++;
		ii++;
	}	
	dest[i] = '\0';
	printf("%d", arr_size(dest));
	return arr_size(dest);
}

int main(void)
{
	char src[] = "Hejio";
	char dest[] = "Ok kor";
	
	//printf("%lu", sizeof(dest));
	ft_strlcat(dest, src, sizeof(dest));

//	printf("%s", dest);
}
