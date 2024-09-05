/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hghoutan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 23:38:15 by hghoutan          #+#    #+#             */
/*   Updated: 2024/09/05 23:49:30 by hghoutan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int r;

	r = nb;
	if (nb == 0)
		return (1);
	if (nb < 0 || nb > 12)
		return (0);
	if (nb >= 2)
	{
		r *= ft_recursive_factorial(nb - 1);
	}
	return (r);
}
int main()
{
	int n = ft_recursive_factorial(-12);
	printf("%d", n);
}
