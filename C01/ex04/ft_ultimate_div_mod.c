/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hghoutan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 12:53:56 by hghoutan          #+#    #+#             */
/*   Updated: 2024/08/30 13:16:27 by hghoutan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int d;
	int m;

	d = *a / *b;
	m = *a % *b;
	
	*a = d;
	*b = m;
}

int	main(void)
{
	int a;
	int b;

	a = 40;
	b = 20;

	ft_ultimate_div_mod(&a, &b);

	printf("%d, %d", a, b);
	return 0;
}
