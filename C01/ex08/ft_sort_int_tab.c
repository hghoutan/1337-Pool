/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hghoutan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 12:07:40 by hghoutan          #+#    #+#             */
/*   Updated: 2024/08/31 12:16:13 by hghoutan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	c;

	i = 0;
	while(i < size)
	{
		if (tab[i] > tab[i + 1])
		{
			c = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = c;
		}
		i++;
	}
}

int	main(void)
{
	int count = 0;
	int intarr[] = {1,2,3, 4, 5, 6, 8, 254, 42, 424};

	ft_sort_int_tab(intarr, 10);
	while (count < 10)
	{
		printf("%d - ", intarr[count]);
		count++;
	}
}
