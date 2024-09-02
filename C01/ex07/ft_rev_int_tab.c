/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hghoutan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 10:52:43 by hghoutan          #+#    #+#             */
/*   Updated: 2024/08/31 12:10:28 by hghoutan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	c;

	i = 0;
	while(i < (size / 2))
	{
		c = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = c;
		i++;
	}
}

int	main(void)
{
int count = 0;
	int intarr[] = {1,2,3, 4, 5, 6, 8, 254, 42, 424};

	ft_rev_int_tab(intarr, 10);	
	while (count < 10)
	{
		printf("%d - ", intarr[count]);
		count++;
	}
}
