/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hghoutan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 22:56:31 by hghoutan          #+#    #+#             */
/*   Updated: 2024/09/05 23:32:17 by hghoutan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int i;
	int r;

	i = 0;
	r = nb;
	if (nb < 0 || nb > 12)
		return 0;
	if(nb == 0)
		return 1;
	while (nb >= 2)
	{
		r *= (nb - 1);
		nb--;
	}
	return r;
}

int main()
{
	int	n = ft_iterative_factorial(0);

	printf("%d", n);
}
