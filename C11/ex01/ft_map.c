/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hghoutan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 22:05:38 by hghoutan          #+#    #+#             */
/*   Updated: 2024/09/16 22:22:23 by hghoutan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_map(int *tab, int length, int(*f)(int))
{
	int *arr;
	int i;

	i = 0;
	arr = (int *)malloc(length * sizeof(int));
	while (i < length)
	{
		arr[i] = (*f)(tab[i]);
		i++;
	}
	return (arr);
}
/*
#include <unistd.h>
#include <stdio.h>

int m_2(int n)
{
	return (n * 2);
}

int main()
{
	int tab[] = {1, 6, 9, 2};
	int *rtab = ft_map(tab, 4, &m_2);
	int i =0;
	while (i < 4)
	{
		printf("%d\n", rtab[i]);
		i++;
	}
}*/
