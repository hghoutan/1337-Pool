/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hghoutan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 09:21:14 by hghoutan          #+#    #+#             */
/*   Updated: 2024/09/15 16:04:22 by hghoutan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*int_tab;
	int	i;

	if (min >= max)
		return ((int *)0);
	int_tab = (int *)malloc((max - min) * sizeof(min));
	i = 0;
	while (min < max)
	{
		int_tab[i] = min;
		min++;
		i++;
	}
	return (int_tab);
}
/*
int main()
{
	int *arr = ft_range(1, 5);
	int i;
	
 	for(i=0; i < 9-4; i++) {
   	 printf("Enter number%d: ", arr[i]); 
 	}	
}*/
