/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hghoutan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 10:53:30 by hghoutan          #+#    #+#             */
/*   Updated: 2024/09/17 11:22:06 by hghoutan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int i = 0;

	while (i < length - 1)
	{
		if ((*f)(tab[i], tab[i +  1]) > 0)
			return (0);

		i++;
	}
	return(1);
}

int ft_icmp(int a, int b)
{
	if (a < b)
		return (-1);
	else if (a > b)
		return (1);
	else
		return (0);
}

int main()
{
	int *tab = {1, 3, 5, 8, 10, 44};
	int n = ft_is_sort(tab, 6, &ft_icmp);
	

}
