/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hghoutan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 13:27:09 by hghoutan          #+#    #+#             */
/*   Updated: 2024/09/06 13:47:43 by hghoutan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int m_s(char	**str)
{
	int i;

	i = 0;
	while(str[i])
	{
		i++;
	}
	return i;
}

int arr_size(char	*str)
{
	int i;

	i = 0;
	while(str[i])
	{
		i++;
	}
	return i;
}

int main(int argc, char	**argv)
{
	int s;
	int i;

	s = m_s(argv);
	i = 0;
	while (s >= 1)
	{
		write(1, argv[s - 1], arr_size(argv[s -1]));
		write(1, "\n", 1);
		s--;
	}
}
