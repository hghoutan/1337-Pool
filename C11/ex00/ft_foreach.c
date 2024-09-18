/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hghoutan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 21:53:47 by hghoutan          #+#    #+#             */
/*   Updated: 2024/09/16 22:04:17 by hghoutan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_foreach(int *tab, int length, void(*f)(int))
{
	int i;

	i = 0;
	while (i < length)
	{
		(*f)(tab[i]);
		i++;		
	}
}
/*#include <unistd.h>

void put_nbr(int n)
{
	char c;

	c = n + '0';
	write(1, &c, 1);
}

int main()
{
	int tab[] = {1, 6, 9, 2};
	ft_foreach(tab, 4, &put_nbr);
}*/
