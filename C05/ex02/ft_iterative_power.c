/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hghoutan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 00:04:02 by hghoutan          #+#    #+#             */
/*   Updated: 2024/09/06 00:14:16 by hghoutan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
	int r;

	r = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (power > 1)
	{
		r = nb * r;
		power--;
	}
	return (r);
}

int main()
{
	int n = ft_iterative_power(2, 10);

	printf("%d", n);
}

