/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hghoutan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 11:18:37 by hghoutan          #+#    #+#             */
/*   Updated: 2024/09/15 16:21:19 by hghoutan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	ft_join(char **strs, char *str, char *sep, int size)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	count = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			str[count] = strs[i][j];
			j++;
			count++;
		}
		j = 0;
		while (sep[j] && (i + 1 != size))
		{
			str[count] = sep[j];
			count++;
			j++;
		}
		i++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		sep_len;
	int		i;
	int		strs_length;

	i = 0;
	sep_len = ft_str_len(sep);
	while (i < size)
	{
		strs_length += ft_str_len(strs[i]);
		i++;
	}
	str = (char *)malloc((strs_length + sep_len + 1) * sizeof(char));
	ft_join(strs, str, sep, size);
	return (str);
}
/*int	main(void)
{
	char	*str[2] = {"Jcjoa", "gusis"};
	char	*stri;

	stri = ft_strjoin(2, str, "/");
	printf("%s", stri);
	// while  ((unsigned long)i < sizeof(strs)/sizeof(char *))
	//{
	//	printf("%s", strs[i]);
	//	i++;
	//}
}*/
