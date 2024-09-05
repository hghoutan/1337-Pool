/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hghoutan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 23:51:36 by hghoutan          #+#    #+#             */
/*   Updated: 2024/09/06 00:02:51 by hghoutan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int ft_recursive_power(int nb, int power)
{
	int r;

	r = nb;
	if (power != 1)
	{
		r = ft_recursive_power(nb * nb, power - 1);
	}
	return r;
}
